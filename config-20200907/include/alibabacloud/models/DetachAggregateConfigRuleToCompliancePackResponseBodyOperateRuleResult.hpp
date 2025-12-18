// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHAGGREGATECONFIGRULETOCOMPLIANCEPACKRESPONSEBODYOPERATERULERESULT_HPP_
#define ALIBABACLOUD_MODELS_DETACHAGGREGATECONFIGRULETOCOMPLIANCEPACKRESPONSEBODYOPERATERULERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult& obj) { 
      DARABONBA_PTR_TO_JSON(OperateRuleItemList, operateRuleItemList_);
    };
    friend void from_json(const Darabonba::Json& j, DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult& obj) { 
      DARABONBA_PTR_FROM_JSON(OperateRuleItemList, operateRuleItemList_);
    };
    DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult() = default ;
    DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult(const DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult &) = default ;
    DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult(DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult &&) = default ;
    DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult() = default ;
    DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult& operator=(const DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult &) = default ;
    DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult& operator=(DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operateRuleItemList_ == nullptr; };
    // operateRuleItemList Field Functions 
    bool hasOperateRuleItemList() const { return this->operateRuleItemList_ != nullptr;};
    void deleteOperateRuleItemList() { this->operateRuleItemList_ = nullptr;};
    inline const vector<Models::DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList> & operateRuleItemList() const { DARABONBA_PTR_GET_CONST(operateRuleItemList_, vector<Models::DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList>) };
    inline vector<Models::DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList> operateRuleItemList() { DARABONBA_PTR_GET(operateRuleItemList_, vector<Models::DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList>) };
    inline DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult& setOperateRuleItemList(const vector<Models::DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList> & operateRuleItemList) { DARABONBA_PTR_SET_VALUE(operateRuleItemList_, operateRuleItemList) };
    inline DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult& setOperateRuleItemList(vector<Models::DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList> && operateRuleItemList) { DARABONBA_PTR_SET_RVALUE(operateRuleItemList_, operateRuleItemList) };


  protected:
    // The result of the operation to remove the rule.
    std::shared_ptr<vector<Models::DetachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList>> operateRuleItemList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
