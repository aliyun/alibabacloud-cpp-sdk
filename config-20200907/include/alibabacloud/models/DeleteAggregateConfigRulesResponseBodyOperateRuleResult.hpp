// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGGREGATECONFIGRULESRESPONSEBODYOPERATERULERESULT_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGGREGATECONFIGRULESRESPONSEBODYOPERATERULERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DeleteAggregateConfigRulesResponseBodyOperateRuleResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAggregateConfigRulesResponseBodyOperateRuleResult& obj) { 
      DARABONBA_PTR_TO_JSON(OperateRuleItemList, operateRuleItemList_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAggregateConfigRulesResponseBodyOperateRuleResult& obj) { 
      DARABONBA_PTR_FROM_JSON(OperateRuleItemList, operateRuleItemList_);
    };
    DeleteAggregateConfigRulesResponseBodyOperateRuleResult() = default ;
    DeleteAggregateConfigRulesResponseBodyOperateRuleResult(const DeleteAggregateConfigRulesResponseBodyOperateRuleResult &) = default ;
    DeleteAggregateConfigRulesResponseBodyOperateRuleResult(DeleteAggregateConfigRulesResponseBodyOperateRuleResult &&) = default ;
    DeleteAggregateConfigRulesResponseBodyOperateRuleResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAggregateConfigRulesResponseBodyOperateRuleResult() = default ;
    DeleteAggregateConfigRulesResponseBodyOperateRuleResult& operator=(const DeleteAggregateConfigRulesResponseBodyOperateRuleResult &) = default ;
    DeleteAggregateConfigRulesResponseBodyOperateRuleResult& operator=(DeleteAggregateConfigRulesResponseBodyOperateRuleResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operateRuleItemList_ == nullptr; };
    // operateRuleItemList Field Functions 
    bool hasOperateRuleItemList() const { return this->operateRuleItemList_ != nullptr;};
    void deleteOperateRuleItemList() { this->operateRuleItemList_ = nullptr;};
    inline const vector<Models::DeleteAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> & operateRuleItemList() const { DARABONBA_PTR_GET_CONST(operateRuleItemList_, vector<Models::DeleteAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>) };
    inline vector<Models::DeleteAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> operateRuleItemList() { DARABONBA_PTR_GET(operateRuleItemList_, vector<Models::DeleteAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>) };
    inline DeleteAggregateConfigRulesResponseBodyOperateRuleResult& setOperateRuleItemList(const vector<Models::DeleteAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> & operateRuleItemList) { DARABONBA_PTR_SET_VALUE(operateRuleItemList_, operateRuleItemList) };
    inline DeleteAggregateConfigRulesResponseBodyOperateRuleResult& setOperateRuleItemList(vector<Models::DeleteAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> && operateRuleItemList) { DARABONBA_PTR_SET_RVALUE(operateRuleItemList_, operateRuleItemList) };


  protected:
    // The details of the result.
    std::shared_ptr<vector<Models::DeleteAggregateConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>> operateRuleItemList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
