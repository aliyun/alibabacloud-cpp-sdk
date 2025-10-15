// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESFORUSERRESPONSEBODYCONDITIONALACCESSPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESFORUSERRESPONSEBODYCONDITIONALACCESSPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig.hpp>
#include <alibabacloud/models/ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(ConditionalAccessPolicyId, conditionalAccessPolicyId_);
      DARABONBA_PTR_TO_JSON(ConditionalAccessPolicyName, conditionalAccessPolicyName_);
      DARABONBA_PTR_TO_JSON(ConditionalAccessPolicyType, conditionalAccessPolicyType_);
      DARABONBA_PTR_TO_JSON(ConditionsConfig, conditionsConfig_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DecisionConfig, decisionConfig_);
      DARABONBA_PTR_TO_JSON(DecisionType, decisionType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EvaluateAt, evaluateAt_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LastUpdatedTime, lastUpdatedTime_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(ConditionalAccessPolicyId, conditionalAccessPolicyId_);
      DARABONBA_PTR_FROM_JSON(ConditionalAccessPolicyName, conditionalAccessPolicyName_);
      DARABONBA_PTR_FROM_JSON(ConditionalAccessPolicyType, conditionalAccessPolicyType_);
      DARABONBA_PTR_FROM_JSON(ConditionsConfig, conditionsConfig_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DecisionConfig, decisionConfig_);
      DARABONBA_PTR_FROM_JSON(DecisionType, decisionType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EvaluateAt, evaluateAt_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LastUpdatedTime, lastUpdatedTime_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies() = default ;
    ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies(const ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies &) = default ;
    ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies(ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies &&) = default ;
    ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies() = default ;
    ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies& operator=(const ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies &) = default ;
    ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies& operator=(ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditionalAccessPolicyId_ == nullptr
        && return this->conditionalAccessPolicyName_ == nullptr && return this->conditionalAccessPolicyType_ == nullptr && return this->conditionsConfig_ == nullptr && return this->createTime_ == nullptr && return this->decisionConfig_ == nullptr
        && return this->decisionType_ == nullptr && return this->description_ == nullptr && return this->evaluateAt_ == nullptr && return this->instanceId_ == nullptr && return this->lastUpdatedTime_ == nullptr
        && return this->priority_ == nullptr && return this->status_ == nullptr; };
    // conditionalAccessPolicyId Field Functions 
    bool hasConditionalAccessPolicyId() const { return this->conditionalAccessPolicyId_ != nullptr;};
    void deleteConditionalAccessPolicyId() { this->conditionalAccessPolicyId_ = nullptr;};
    inline string conditionalAccessPolicyId() const { DARABONBA_PTR_GET_DEFAULT(conditionalAccessPolicyId_, "") };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies& setConditionalAccessPolicyId(string conditionalAccessPolicyId) { DARABONBA_PTR_SET_VALUE(conditionalAccessPolicyId_, conditionalAccessPolicyId) };


    // conditionalAccessPolicyName Field Functions 
    bool hasConditionalAccessPolicyName() const { return this->conditionalAccessPolicyName_ != nullptr;};
    void deleteConditionalAccessPolicyName() { this->conditionalAccessPolicyName_ = nullptr;};
    inline string conditionalAccessPolicyName() const { DARABONBA_PTR_GET_DEFAULT(conditionalAccessPolicyName_, "") };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies& setConditionalAccessPolicyName(string conditionalAccessPolicyName) { DARABONBA_PTR_SET_VALUE(conditionalAccessPolicyName_, conditionalAccessPolicyName) };


    // conditionalAccessPolicyType Field Functions 
    bool hasConditionalAccessPolicyType() const { return this->conditionalAccessPolicyType_ != nullptr;};
    void deleteConditionalAccessPolicyType() { this->conditionalAccessPolicyType_ = nullptr;};
    inline string conditionalAccessPolicyType() const { DARABONBA_PTR_GET_DEFAULT(conditionalAccessPolicyType_, "") };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies& setConditionalAccessPolicyType(string conditionalAccessPolicyType) { DARABONBA_PTR_SET_VALUE(conditionalAccessPolicyType_, conditionalAccessPolicyType) };


    // conditionsConfig Field Functions 
    bool hasConditionsConfig() const { return this->conditionsConfig_ != nullptr;};
    void deleteConditionsConfig() { this->conditionsConfig_ = nullptr;};
    inline const Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig & conditionsConfig() const { DARABONBA_PTR_GET_CONST(conditionsConfig_, Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig) };
    inline Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig conditionsConfig() { DARABONBA_PTR_GET(conditionsConfig_, Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig) };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies& setConditionsConfig(const Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig & conditionsConfig) { DARABONBA_PTR_SET_VALUE(conditionsConfig_, conditionsConfig) };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies& setConditionsConfig(Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig && conditionsConfig) { DARABONBA_PTR_SET_RVALUE(conditionsConfig_, conditionsConfig) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // decisionConfig Field Functions 
    bool hasDecisionConfig() const { return this->decisionConfig_ != nullptr;};
    void deleteDecisionConfig() { this->decisionConfig_ = nullptr;};
    inline const Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig & decisionConfig() const { DARABONBA_PTR_GET_CONST(decisionConfig_, Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig) };
    inline Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig decisionConfig() { DARABONBA_PTR_GET(decisionConfig_, Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig) };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies& setDecisionConfig(const Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig & decisionConfig) { DARABONBA_PTR_SET_VALUE(decisionConfig_, decisionConfig) };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies& setDecisionConfig(Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig && decisionConfig) { DARABONBA_PTR_SET_RVALUE(decisionConfig_, decisionConfig) };


    // decisionType Field Functions 
    bool hasDecisionType() const { return this->decisionType_ != nullptr;};
    void deleteDecisionType() { this->decisionType_ = nullptr;};
    inline string decisionType() const { DARABONBA_PTR_GET_DEFAULT(decisionType_, "") };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies& setDecisionType(string decisionType) { DARABONBA_PTR_SET_VALUE(decisionType_, decisionType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // evaluateAt Field Functions 
    bool hasEvaluateAt() const { return this->evaluateAt_ != nullptr;};
    void deleteEvaluateAt() { this->evaluateAt_ = nullptr;};
    inline string evaluateAt() const { DARABONBA_PTR_GET_DEFAULT(evaluateAt_, "") };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies& setEvaluateAt(string evaluateAt) { DARABONBA_PTR_SET_VALUE(evaluateAt_, evaluateAt) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lastUpdatedTime Field Functions 
    bool hasLastUpdatedTime() const { return this->lastUpdatedTime_ != nullptr;};
    void deleteLastUpdatedTime() { this->lastUpdatedTime_ = nullptr;};
    inline int64_t lastUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdatedTime_, 0L) };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies& setLastUpdatedTime(int64_t lastUpdatedTime) { DARABONBA_PTR_SET_VALUE(lastUpdatedTime_, lastUpdatedTime) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPolicies& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // IDaaS EIAM 条件访问策略Id
    std::shared_ptr<string> conditionalAccessPolicyId_ = nullptr;
    // IDaaS EIAM 条件访问策略名称
    std::shared_ptr<string> conditionalAccessPolicyName_ = nullptr;
    // IDaaS EIAM 条件访问策略类型
    std::shared_ptr<string> conditionalAccessPolicyType_ = nullptr;
    // IDaaS EIAM 条件访问策略内容
    std::shared_ptr<Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesConditionsConfig> conditionsConfig_ = nullptr;
    // 创建时间
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // IDaaS EIAM 条件访问策略执行Action
    std::shared_ptr<Models::ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig> decisionConfig_ = nullptr;
    // IDaaS EIAM 条件访问策略执行类型
    std::shared_ptr<string> decisionType_ = nullptr;
    // IDaaS EIAM 条件访问策略描述
    std::shared_ptr<string> description_ = nullptr;
    // IDaaS EIAM 条件访问策略执行点
    std::shared_ptr<string> evaluateAt_ = nullptr;
    // IDaaS EIAM 实例Id
    std::shared_ptr<string> instanceId_ = nullptr;
    // 更新时间
    std::shared_ptr<int64_t> lastUpdatedTime_ = nullptr;
    // 优先级
    std::shared_ptr<int32_t> priority_ = nullptr;
    // IDaaS EIAM 条件访问策略启用禁用状态
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
