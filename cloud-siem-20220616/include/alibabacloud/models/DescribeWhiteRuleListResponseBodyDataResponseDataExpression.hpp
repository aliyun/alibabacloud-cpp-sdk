// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITERULELISTRESPONSEBODYDATARESPONSEDATAEXPRESSION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITERULELISTRESPONSEBODYDATARESPONSEDATAEXPRESSION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeWhiteRuleListResponseBodyDataResponseDataExpression : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhiteRuleListResponseBodyDataResponseDataExpression& obj) { 
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhiteRuleListResponseBodyDataResponseDataExpression& obj) { 
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
    };
    DescribeWhiteRuleListResponseBodyDataResponseDataExpression() = default ;
    DescribeWhiteRuleListResponseBodyDataResponseDataExpression(const DescribeWhiteRuleListResponseBodyDataResponseDataExpression &) = default ;
    DescribeWhiteRuleListResponseBodyDataResponseDataExpression(DescribeWhiteRuleListResponseBodyDataResponseDataExpression &&) = default ;
    DescribeWhiteRuleListResponseBodyDataResponseDataExpression(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhiteRuleListResponseBodyDataResponseDataExpression() = default ;
    DescribeWhiteRuleListResponseBodyDataResponseDataExpression& operator=(const DescribeWhiteRuleListResponseBodyDataResponseDataExpression &) = default ;
    DescribeWhiteRuleListResponseBodyDataResponseDataExpression& operator=(DescribeWhiteRuleListResponseBodyDataResponseDataExpression &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conditions_ != nullptr
        && this->logic_ != nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions> & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions>) };
    inline vector<Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions> conditions() { DARABONBA_PTR_GET(conditions_, vector<Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions>) };
    inline DescribeWhiteRuleListResponseBodyDataResponseDataExpression& setConditions(const vector<Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline DescribeWhiteRuleListResponseBodyDataResponseDataExpression& setConditions(vector<Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline string logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, "") };
    inline DescribeWhiteRuleListResponseBodyDataResponseDataExpression& setLogic(string logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


  protected:
    // The rule conditions.
    std::shared_ptr<vector<Models::DescribeWhiteRuleListResponseBodyDataResponseDataExpressionConditions>> conditions_ = nullptr;
    // The logical relationships among the rule conditions.
    std::shared_ptr<string> logic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
