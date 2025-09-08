// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITERULELISTRESPONSEBODYDATARESPONSEDATAEXPRESSIONCONDITIONSLEFT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITERULELISTRESPONSEBODYDATARESPONSEDATAEXPRESSIONCONDITIONSLEFT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft& obj) { 
      DARABONBA_PTR_TO_JSON(IsVar, isVar_);
      DARABONBA_PTR_TO_JSON(Modifier, modifier_);
      DARABONBA_ANY_TO_JSON(ModifierParam, modifierParam_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft& obj) { 
      DARABONBA_PTR_FROM_JSON(IsVar, isVar_);
      DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
      DARABONBA_ANY_FROM_JSON(ModifierParam, modifierParam_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft() = default ;
    DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft(const DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft &) = default ;
    DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft(DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft &&) = default ;
    DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft() = default ;
    DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft& operator=(const DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft &) = default ;
    DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft& operator=(DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isVar_ != nullptr
        && this->modifier_ != nullptr && this->modifierParam_ != nullptr && this->type_ != nullptr && this->value_ != nullptr; };
    // isVar Field Functions 
    bool hasIsVar() const { return this->isVar_ != nullptr;};
    void deleteIsVar() { this->isVar_ = nullptr;};
    inline bool isVar() const { DARABONBA_PTR_GET_DEFAULT(isVar_, false) };
    inline DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft& setIsVar(bool isVar) { DARABONBA_PTR_SET_VALUE(isVar_, isVar) };


    // modifier Field Functions 
    bool hasModifier() const { return this->modifier_ != nullptr;};
    void deleteModifier() { this->modifier_ = nullptr;};
    inline string modifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
    inline DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


    // modifierParam Field Functions 
    bool hasModifierParam() const { return this->modifierParam_ != nullptr;};
    void deleteModifierParam() { this->modifierParam_ = nullptr;};
    inline     const Darabonba::Json & modifierParam() const { DARABONBA_GET(modifierParam_) };
    Darabonba::Json & modifierParam() { DARABONBA_GET(modifierParam_) };
    inline DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft& setModifierParam(const Darabonba::Json & modifierParam) { DARABONBA_SET_VALUE(modifierParam_, modifierParam) };
    inline DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft& setModifierParam(Darabonba::Json & modifierParam) { DARABONBA_SET_RVALUE(modifierParam_, modifierParam) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Indicates whether the left operand is a variable. Valid values:
    // 
    // *   true: variable.
    // *   false: constant.
    std::shared_ptr<bool> isVar_ = nullptr;
    // The remarks on the right operand.
    std::shared_ptr<string> modifier_ = nullptr;
    // The key-value pair information of the remarks.
    Darabonba::Json modifierParam_ = nullptr;
    // Indicates whether the left operand is a constant. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<string> type_ = nullptr;
    // The variable of the left operand.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
