// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIVEAGGREGATECONFIGRULESRESPONSEBODYOPERATERULERESULT_HPP_
#define ALIBABACLOUD_MODELS_ACTIVEAGGREGATECONFIGRULESRESPONSEBODYOPERATERULERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ActiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ActiveAggregateConfigRulesResponseBodyOperateRuleResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActiveAggregateConfigRulesResponseBodyOperateRuleResult& obj) { 
      DARABONBA_PTR_TO_JSON(OperateRuleItemList, operateRuleItemList_);
    };
    friend void from_json(const Darabonba::Json& j, ActiveAggregateConfigRulesResponseBodyOperateRuleResult& obj) { 
      DARABONBA_PTR_FROM_JSON(OperateRuleItemList, operateRuleItemList_);
    };
    ActiveAggregateConfigRulesResponseBodyOperateRuleResult() = default ;
    ActiveAggregateConfigRulesResponseBodyOperateRuleResult(const ActiveAggregateConfigRulesResponseBodyOperateRuleResult &) = default ;
    ActiveAggregateConfigRulesResponseBodyOperateRuleResult(ActiveAggregateConfigRulesResponseBodyOperateRuleResult &&) = default ;
    ActiveAggregateConfigRulesResponseBodyOperateRuleResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActiveAggregateConfigRulesResponseBodyOperateRuleResult() = default ;
    ActiveAggregateConfigRulesResponseBodyOperateRuleResult& operator=(const ActiveAggregateConfigRulesResponseBodyOperateRuleResult &) = default ;
    ActiveAggregateConfigRulesResponseBodyOperateRuleResult& operator=(ActiveAggregateConfigRulesResponseBodyOperateRuleResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operateRuleItemList_ == nullptr; };
    // operateRuleItemList Field Functions 
    bool hasOperateRuleItemList() const { return this->operateRuleItemList_ != nullptr;};
    void deleteOperateRuleItemList() { this->operateRuleItemList_ = nullptr;};
    inline const vector<Models::ActiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> & operateRuleItemList() const { DARABONBA_PTR_GET_CONST(operateRuleItemList_, vector<Models::ActiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>) };
    inline vector<Models::ActiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> operateRuleItemList() { DARABONBA_PTR_GET(operateRuleItemList_, vector<Models::ActiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>) };
    inline ActiveAggregateConfigRulesResponseBodyOperateRuleResult& setOperateRuleItemList(const vector<Models::ActiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> & operateRuleItemList) { DARABONBA_PTR_SET_VALUE(operateRuleItemList_, operateRuleItemList) };
    inline ActiveAggregateConfigRulesResponseBodyOperateRuleResult& setOperateRuleItemList(vector<Models::ActiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> && operateRuleItemList) { DARABONBA_PTR_SET_RVALUE(operateRuleItemList_, operateRuleItemList) };


  protected:
    // The result information about the operation.
    std::shared_ptr<vector<Models::ActiveAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>> operateRuleItemList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
