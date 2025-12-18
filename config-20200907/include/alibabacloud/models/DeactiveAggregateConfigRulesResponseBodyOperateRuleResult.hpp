// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEACTIVEAGGREGATECONFIGRULESRESPONSEBODYOPERATERULERESULT_HPP_
#define ALIBABACLOUD_MODELS_DEACTIVEAGGREGATECONFIGRULESRESPONSEBODYOPERATERULERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeactiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DeactiveAggregateConfigRulesResponseBodyOperateRuleResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeactiveAggregateConfigRulesResponseBodyOperateRuleResult& obj) { 
      DARABONBA_PTR_TO_JSON(OperateRuleItemList, operateRuleItemList_);
    };
    friend void from_json(const Darabonba::Json& j, DeactiveAggregateConfigRulesResponseBodyOperateRuleResult& obj) { 
      DARABONBA_PTR_FROM_JSON(OperateRuleItemList, operateRuleItemList_);
    };
    DeactiveAggregateConfigRulesResponseBodyOperateRuleResult() = default ;
    DeactiveAggregateConfigRulesResponseBodyOperateRuleResult(const DeactiveAggregateConfigRulesResponseBodyOperateRuleResult &) = default ;
    DeactiveAggregateConfigRulesResponseBodyOperateRuleResult(DeactiveAggregateConfigRulesResponseBodyOperateRuleResult &&) = default ;
    DeactiveAggregateConfigRulesResponseBodyOperateRuleResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeactiveAggregateConfigRulesResponseBodyOperateRuleResult() = default ;
    DeactiveAggregateConfigRulesResponseBodyOperateRuleResult& operator=(const DeactiveAggregateConfigRulesResponseBodyOperateRuleResult &) = default ;
    DeactiveAggregateConfigRulesResponseBodyOperateRuleResult& operator=(DeactiveAggregateConfigRulesResponseBodyOperateRuleResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operateRuleItemList_ == nullptr; };
    // operateRuleItemList Field Functions 
    bool hasOperateRuleItemList() const { return this->operateRuleItemList_ != nullptr;};
    void deleteOperateRuleItemList() { this->operateRuleItemList_ = nullptr;};
    inline const vector<Models::DeactiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> & operateRuleItemList() const { DARABONBA_PTR_GET_CONST(operateRuleItemList_, vector<Models::DeactiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>) };
    inline vector<Models::DeactiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> operateRuleItemList() { DARABONBA_PTR_GET(operateRuleItemList_, vector<Models::DeactiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>) };
    inline DeactiveAggregateConfigRulesResponseBodyOperateRuleResult& setOperateRuleItemList(const vector<Models::DeactiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> & operateRuleItemList) { DARABONBA_PTR_SET_VALUE(operateRuleItemList_, operateRuleItemList) };
    inline DeactiveAggregateConfigRulesResponseBodyOperateRuleResult& setOperateRuleItemList(vector<Models::DeactiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> && operateRuleItemList) { DARABONBA_PTR_SET_RVALUE(operateRuleItemList_, operateRuleItemList) };


  protected:
    // The operations that are performed to disable the rule.
    std::shared_ptr<vector<Models::DeactiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>> operateRuleItemList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
