#include "executor.h"
#include "utilsc.h"

PancasilaScriptLang::Executor::Executor() {}

PancasilaScriptLang::Executor::~Executor() {}

antlrcpp::Any PancasilaScriptLang::Executor::visitProg(
    PancasilaScriptLang::PancasilaScriptLangParser::ProgContext *context) {
  for (auto items : context->stat()) {
    visit(items);
  }
  return val::ValueAbs();
}

antlrcpp::Any PancasilaScriptLang::Executor::visitStat(
    PancasilaScriptLang::PancasilaScriptLangParser::StatContext *context) {
  if (context->exprList()) {
    auto any = visit(context->exprList());
    return convertAnyToVariant(any).second;
  }
  if (context->assign()) {
    auto any = visit(context->assign());
    return convertAnyToVariant(any).second;
  }
  if (context->ifExpr()) {
    auto any = visit(context->ifExpr());
    return convertAnyToVariant(any).second;
  }
  if (context->funcDef()) {
    auto any = visit(context->funcDef());
    return convertAnyToVariant(any).second;
  }
  if (context->initNDimArray()) {
    auto any = visit(context->initNDimArray());
    return convertAnyToVariant(any).second;
  }
  if (context->whileExpr()) {
    auto any = visit(context->whileExpr());
    return convertAnyToVariant(any).second;
  }
  return val::ValueAbs();
}

antlrcpp::Any PancasilaScriptLang::Executor::visitExprList(
    PancasilaScriptLang::PancasilaScriptLangParser::ExprListContext *context) {
  val::VariantTypeList list;
  for (auto expr : context->expr()) {
    if (expr) {
      auto any = visit(expr);
      auto var0 = convertAnyToVariant(any);
      if (!var0.first) {
        throw std::runtime_error(
            "\nfound invalid cast any to variant in visitExprList\n");
      }
      const auto var1 = var0.second.asVariant();
      if (!var1.first) {
        throw std::runtime_error(
            "\nvisitExprList, dissalow any nested array\n");
      }
      list << var1.second;
    }
  }
  return val::ValueAbs(list);
}

antlrcpp::Any PancasilaScriptLang::Executor::visitHandleMulDiv(
    PancasilaScriptLang::PancasilaScriptLangParser::HandleMulDivContext
        *context) {
  return HandleArith(context->expr()[0], context->expr()[1],
                     context->op->getText());
}

antlrcpp::Any PancasilaScriptLang::Executor::visitHandlePlusMinus(
    PancasilaScriptLang::PancasilaScriptLangParser::HandlePlusMinusContext
        *context) {
  return HandleArith(context->expr()[0], context->expr()[1],
                     context->op->getText());
}

antlrcpp::Any PancasilaScriptLang::Executor::visitHandleInt(
    PancasilaScriptLang::PancasilaScriptLangParser::HandleIntContext *context) {
    std::string num;
    if(context->MIN () && context->getText ().size ()>=1 && context->getText ().at (0)!='-'){ 
        num +="-";
    }
    num +=context->getText ();
  auto retval=  Utilsc::stringToNumber (num);
  if(!retval.first){
      val::VariantType errmsg;
      errmsg<<"\nerror cannot convert string : "<<context->getText ()<<" to number type\n";
      throw std::runtime_error(std::get<std::string>(errmsg.getVar ()));
  }
  return val::ValueAbs(retval.second);
}

antlrcpp::Any PancasilaScriptLang::Executor::visitHandleIDMemberFuncProperty(
    PancasilaScriptLang::PancasilaScriptLangParser::
        HandleIDMemberFuncPropertyContext *context) { 
    
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitHandleFunction(
    PancasilaScriptLang::PancasilaScriptLangParser::HandleFunctionContext
        *context) {
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitHandleBrackets(
    PancasilaScriptLang::PancasilaScriptLangParser::HandleBracketsContext
        *context) {
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitHandleIdentifier(
    PancasilaScriptLang::PancasilaScriptLangParser::HandleIdentifierContext
        *context) {
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitHandleTrue(
    PancasilaScriptLang::PancasilaScriptLangParser::HandleTrueContext
        *context) {
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitHandleFalse(
    PancasilaScriptLang::PancasilaScriptLangParser::HandleFalseContext
        *context) {
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitHandleFloat(
    PancasilaScriptLang::PancasilaScriptLangParser::HandleFloatContext
        *context) {
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitHandleAssign(
    PancasilaScriptLang::PancasilaScriptLangParser::HandleAssignContext
        *context) {
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitHandleAssignArray(
    PancasilaScriptLang::PancasilaScriptLangParser::HandleAssignArrayContext
        *context) {
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitHandleAssignAdd(
    PancasilaScriptLang::PancasilaScriptLangParser::HandleAssignAddContext
        *context) {
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitHandleAssignSub(
    PancasilaScriptLang::PancasilaScriptLangParser::HandleAssignSubContext
        *context) {
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitHandleAssignMul(
    PancasilaScriptLang::PancasilaScriptLangParser::HandleAssignMulContext
        *context) {
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitHandleAssignDiv(
    PancasilaScriptLang::PancasilaScriptLangParser::HandleAssignDivContext
        *context) {
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitExprBool(
    PancasilaScriptLang::PancasilaScriptLangParser::ExprBoolContext *context) {
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitArrayExprs(
    PancasilaScriptLang::PancasilaScriptLangParser::ArrayExprsContext
        *context) {
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitBoolType(
    PancasilaScriptLang::PancasilaScriptLangParser::BoolTypeContext *context) {
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitExprLine(
    PancasilaScriptLang::PancasilaScriptLangParser::ExprLineContext *context) {
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitExprScopeBlock(
    PancasilaScriptLang::PancasilaScriptLangParser::ExprScopeBlockContext
        *context) {
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitIfExpr(
    PancasilaScriptLang::PancasilaScriptLangParser::IfExprContext *context) {
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitWhileExpr(
    PancasilaScriptLang::PancasilaScriptLangParser::WhileExprContext *context) {
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitFuncArgsDef(
    PancasilaScriptLang::PancasilaScriptLangParser::FuncArgsDefContext
        *context) {
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitFuncExpr(
    PancasilaScriptLang::PancasilaScriptLangParser::FuncExprContext *context) {
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitFuncRet(
    PancasilaScriptLang::PancasilaScriptLangParser::FuncRetContext *context) {
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitHandleDeclareFunctionWithArgs(
    PancasilaScriptLang::PancasilaScriptLangParser::
        HandleDeclareFunctionWithArgsContext *context) {
  return nullptr;
}

antlrcpp::Any
PancasilaScriptLang::Executor::visitHandleDeclareFunctionWithoutArgs(
    PancasilaScriptLang::PancasilaScriptLangParser::
        HandleDeclareFunctionWithoutArgsContext *context) {
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitFuncArgs(
    PancasilaScriptLang::PancasilaScriptLangParser::FuncArgsContext *context) {
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitFuncCommand(
    PancasilaScriptLang::PancasilaScriptLangParser::FuncCommandContext
        *context) {
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitIdMemberFuncProprety(
    PancasilaScriptLang::PancasilaScriptLangParser::IdMemberFuncPropretyContext
        *context) {
  return nullptr;
}

antlrcpp::Any PancasilaScriptLang::Executor::visitInitNDimArray(
    PancasilaScriptLang::PancasilaScriptLangParser::InitNDimArrayContext
        *context) {
  return nullptr;
}

std::pair<bool, val::ValueAbs>
PancasilaScriptLang::Executor::convertAnyToVariant(const antlrcpp::Any &any) {
  if (any.isNotNull()) {
    try {
      return std::make_pair(true, any.as<val::ValueAbs>());
    } catch (...) {
      throw std::runtime_error("\nconvertAnyToVariant fails\n");
    }
  }
  return std::make_pair(false, val::ValueAbs());
}

void PancasilaScriptLang::Executor::doThrowifAnyErrorVariant(
    val::TypeErrorVariant evar, const std::string &additionalMsg) {
  if (evar == val::TypeErrorVariant::ERROR_ARITH_DOUBLE_INFINITY) {
    val::VariantType msg;
    msg << "\nError double infinity : " << additionalMsg << "\n";
    throw std::runtime_error(std::get<std::string>(msg.getVar()));
  } 
  if (evar == val::TypeErrorVariant::ERROR_ARITH_DOUBLE_OVERFLOW) {
    val::VariantType msg;
    msg << "\nError double overflow : " << additionalMsg << "\n";
    throw std::runtime_error(std::get<std::string>(msg.getVar()));
  }
  if (evar == val::TypeErrorVariant::ERROR_ARITH_DOUBLE_UNDERFLOW) {
    val::VariantType msg;
    msg << "\nError double underflow : " << additionalMsg << "\n";
    throw std::runtime_error(std::get<std::string>(msg.getVar()));
  }
  if (evar == val::TypeErrorVariant::ERROR_ARITH_OVERFLOW) {
    val::VariantType msg;
    msg << "\nError arith overflow : " << additionalMsg << "\n";
    throw std::runtime_error(std::get<std::string>(msg.getVar()));
  }
  if (evar == val::TypeErrorVariant::ERROR_DIVIDE_BY_ZERO) {
    val::VariantType msg;
    msg << "\nError arith overflow : " << additionalMsg << "\n";
    throw std::runtime_error(std::get<std::string>(msg.getVar()));
  }
  if (evar == val::TypeErrorVariant::ERROR_UNDEFINED) {
    val::VariantType msg;
    msg << "\nError undefined  : " << additionalMsg << "\n";
    throw std::runtime_error(std::get<std::string>(msg.getVar()));
  }
  if (evar == val::TypeErrorVariant::ERROR_UNSUPPORTED_ADD_ARITH_TYPES) {
    val::VariantType msg;
    msg << "\nError unsupported arith op  : " << additionalMsg << "\n";
    throw std::runtime_error(std::get<std::string>(msg.getVar()));
  }
  if (evar == val::TypeErrorVariant::ERROR_UNSUPPORTED_ADD_STRING_TYPES) {
    val::VariantType msg;
    msg << "\nError unsupported add string op : " << additionalMsg << "\n";
    throw std::runtime_error(std::get<std::string>(msg.getVar()));
  }
  if (evar == val::TypeErrorVariant::ERROR_UNSUPPORTED_DIV_ARITH_TYPES) {
    val::VariantType msg;
    msg << "\nError unsupported div arith : " << additionalMsg << "\n";
    throw std::runtime_error(std::get<std::string>(msg.getVar()));
  }
  if (evar == val::TypeErrorVariant::ERROR_UNSUPPORTED_MUL_ARITH_TYPES) {
    val::VariantType msg;
    msg << "\nError unsupported  mul arith : " << additionalMsg << "\n";
    throw std::runtime_error(std::get<std::string>(msg.getVar()));
  }
  if (evar == val::TypeErrorVariant::ERROR_UNSUPPORTED_SUB_ARITH_TYPES) {
    val::VariantType msg;
    msg << "\nError unsupported sub arith : " << additionalMsg << "\n";
    throw std::runtime_error(std::get<std::string>(msg.getVar()));
  }
}

val::ValueAbs PancasilaScriptLang::Executor::HandleArith(
    PancasilaScriptLang::PancasilaScriptLangParser::ExprContext *left,
    PancasilaScriptLang::PancasilaScriptLangParser::ExprContext *right,
    const std::string &op) {
  if (!left || !right) {
    std::cout << "\nwarning found invalid nullptr HandleArith arguments";
    return val::ValueAbs();
  }
  using namespace val;
  auto le = visit(left);
  ValueAbs le0 = convertAnyToVariant(le).second;
  if (!le0.asVariant().first) {
    VariantType errormsg;
    errormsg << "\nerror required left hand side operand " << left->toString()
             << " as number value\n";
    throw std::runtime_error(std::get<std::string>(errormsg.getVar()));
  }

  auto re = visit(right);
  ValueAbs re0 = convertAnyToVariant(re).second;
  if (!re0.asVariant().first) {
    VariantType errormsg;
    errormsg << "\nerror required right hand side operand " << right->toString()
             << " as number value\n";
    throw std::runtime_error(std::get<std::string>(errormsg.getVar()));
  }
  VariantType value = le0.asVariant().second;
  TypeErrorVariant ret = TypeErrorVariant::ERROR_UNDEFINED;
  if (op == "*") {
    ret = value.mulVariantNumber(re0.asVariant().second);
  }

  if (op == "/") {
    ret = value.divVariantNumber(re0.asVariant().second);
  }
  if (op == "+") {
    ret = value.addVariantNumber(re0.asVariant().second);
  }
  if (op == "-") {
    ret = value.subVariantNumber(re0.asVariant().second);
  }
  if (!isOkTypeReturnVariant(ret)) {
    doThrowifAnyErrorVariant(ret, " in handler of arith");
  }
  return ValueAbs(value);
}
