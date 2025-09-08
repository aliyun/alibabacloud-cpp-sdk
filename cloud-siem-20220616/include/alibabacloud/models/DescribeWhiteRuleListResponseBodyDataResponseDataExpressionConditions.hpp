// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITERULELISTRESPONSEBODYDATARESPONSEDATAEXPRESSIONCONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITERULELISTRESPONSEBODYDATARESPONSEDATAEXPRESSIONCONDITIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft.hpp>
#include <alibabacloud/models/DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsRight.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions& obj) { 
      DARABONBA_PTR_TO_JSON(IsNot, isNot_);
      DARABONBA_PTR_TO_JSON(ItemId, itemId_);
      DARABONBA_PTR_TO_JSON(Left, left_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Right, right_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions& obj) { 
      DARABONBA_PTR_FROM_JSON(IsNot, isNot_);
      DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
      DARABONBA_PTR_FROM_JSON(Left, left_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Right, right_);
    };
    DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions() = default ;
    DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions(const DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions &) = default ;
    DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions(DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions &&) = default ;
    DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions() = default ;
    DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions& operator=(const DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions &) = default ;
    DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions& operator=(DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isNot_ != nullptr
        && this->itemId_ != nullptr && this->left_ != nullptr && this->operator_ != nullptr && this->right_ != nullptr; };
    // isNot Field Functions 
    bool hasIsNot() const { return this->isNot_ != nullptr;};
    void deleteIsNot() { this->isNot_ = nullptr;};
    inline bool isNot() const { DARABONBA_PTR_GET_DEFAULT(isNot_, false) };
    inline DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions& setIsNot(bool isNot) { DARABONBA_PTR_SET_VALUE(isNot_, isNot) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline int32_t itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0) };
    inline DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions& setItemId(int32_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // left Field Functions 
    bool hasLeft() const { return this->left_ != nullptr;};
    void deleteLeft() { this->left_ = nullptr;};
    inline const Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft & left() const { DARABONBA_PTR_GET_CONST(left_, Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft) };
    inline Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft left() { DARABONBA_PTR_GET(left_, Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft) };
    inline DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions& setLeft(const Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft & left) { DARABONBA_PTR_SET_VALUE(left_, left) };
    inline DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions& setLeft(Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft && left) { DARABONBA_PTR_SET_RVALUE(left_, left) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // right Field Functions 
    bool hasRight() const { return this->right_ != nullptr;};
    void deleteRight() { this->right_ = nullptr;};
    inline const Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsRight & right() const { DARABONBA_PTR_GET_CONST(right_, Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsRight) };
    inline Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsRight right() { DARABONBA_PTR_GET(right_, Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsRight) };
    inline DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions& setRight(const Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsRight & right) { DARABONBA_PTR_SET_VALUE(right_, right) };
    inline DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions& setRight(Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsRight && right) { DARABONBA_PTR_SET_RVALUE(right_, right) };


  protected:
    // Indicates whether the result is inverted. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isNot_ = nullptr;
    // The ID of the rule condition.
    std::shared_ptr<int32_t> itemId_ = nullptr;
    // The left operand of the rule condition.
    std::shared_ptr<Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsLeft> left_ = nullptr;
    // The logical operator of the rule condition. Valid values:
    // 
    // *   `=`: equals to.
    // *   `<>`: does not equal to.
    // *   `in`: contains.
    // *   `not in`: does not contain.
    // *   `REGEXP`: matches a regular expression.
    // *   `NOT REGEXP`: does not match a regular expression.
    std::shared_ptr<string> operator_ = nullptr;
    // The right operand of the rule condition.
    std::shared_ptr<Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditionsRight> right_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
