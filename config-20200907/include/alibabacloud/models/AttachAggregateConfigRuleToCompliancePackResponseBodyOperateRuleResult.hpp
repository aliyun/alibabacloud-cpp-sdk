// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHAGGREGATECONFIGRULETOCOMPLIANCEPACKRESPONSEBODYOPERATERULERESULT_HPP_
#define ALIBABACLOUD_MODELS_ATTACHAGGREGATECONFIGRULETOCOMPLIANCEPACKRESPONSEBODYOPERATERULERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult& obj) { 
      DARABONBA_PTR_TO_JSON(OperateRuleItemList, operateRuleItemList_);
    };
    friend void from_json(const Darabonba::Json& j, AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult& obj) { 
      DARABONBA_PTR_FROM_JSON(OperateRuleItemList, operateRuleItemList_);
    };
    AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult() = default ;
    AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult(const AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult &) = default ;
    AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult(AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult &&) = default ;
    AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult() = default ;
    AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult& operator=(const AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult &) = default ;
    AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult& operator=(AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operateRuleItemList_ == nullptr; };
    // operateRuleItemList Field Functions 
    bool hasOperateRuleItemList() const { return this->operateRuleItemList_ != nullptr;};
    void deleteOperateRuleItemList() { this->operateRuleItemList_ = nullptr;};
    inline const vector<Models::AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList> & operateRuleItemList() const { DARABONBA_PTR_GET_CONST(operateRuleItemList_, vector<Models::AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList>) };
    inline vector<Models::AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList> operateRuleItemList() { DARABONBA_PTR_GET(operateRuleItemList_, vector<Models::AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList>) };
    inline AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult& setOperateRuleItemList(const vector<Models::AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList> & operateRuleItemList) { DARABONBA_PTR_SET_VALUE(operateRuleItemList_, operateRuleItemList) };
    inline AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult& setOperateRuleItemList(vector<Models::AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList> && operateRuleItemList) { DARABONBA_PTR_SET_RVALUE(operateRuleItemList_, operateRuleItemList) };


  protected:
    // The result of the operation to add the rule.
    std::shared_ptr<vector<Models::AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList>> operateRuleItemList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
