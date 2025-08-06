// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONDITIONALACCESSPOLICYRESPONSEBODYCONDITIONALACCESSPOLICY_HPP_
#define ALIBABACLOUD_MODELS_GETCONDITIONALACCESSPOLICYRESPONSEBODYCONDITIONALACCESSPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig.hpp>
#include <alibabacloud/models/GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyDecisionConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy& obj) { 
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
    GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy() = default ;
    GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy(const GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy &) = default ;
    GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy(GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy &&) = default ;
    GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy() = default ;
    GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy& operator=(const GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy &) = default ;
    GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy& operator=(GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conditionalAccessPolicyId_ != nullptr
        && this->conditionalAccessPolicyName_ != nullptr && this->conditionalAccessPolicyType_ != nullptr && this->conditionsConfig_ != nullptr && this->createTime_ != nullptr && this->decisionConfig_ != nullptr
        && this->decisionType_ != nullptr && this->description_ != nullptr && this->evaluateAt_ != nullptr && this->instanceId_ != nullptr && this->lastUpdatedTime_ != nullptr
        && this->priority_ != nullptr && this->status_ != nullptr; };
    // conditionalAccessPolicyId Field Functions 
    bool hasConditionalAccessPolicyId() const { return this->conditionalAccessPolicyId_ != nullptr;};
    void deleteConditionalAccessPolicyId() { this->conditionalAccessPolicyId_ = nullptr;};
    inline string conditionalAccessPolicyId() const { DARABONBA_PTR_GET_DEFAULT(conditionalAccessPolicyId_, "") };
    inline GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy& setConditionalAccessPolicyId(string conditionalAccessPolicyId) { DARABONBA_PTR_SET_VALUE(conditionalAccessPolicyId_, conditionalAccessPolicyId) };


    // conditionalAccessPolicyName Field Functions 
    bool hasConditionalAccessPolicyName() const { return this->conditionalAccessPolicyName_ != nullptr;};
    void deleteConditionalAccessPolicyName() { this->conditionalAccessPolicyName_ = nullptr;};
    inline string conditionalAccessPolicyName() const { DARABONBA_PTR_GET_DEFAULT(conditionalAccessPolicyName_, "") };
    inline GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy& setConditionalAccessPolicyName(string conditionalAccessPolicyName) { DARABONBA_PTR_SET_VALUE(conditionalAccessPolicyName_, conditionalAccessPolicyName) };


    // conditionalAccessPolicyType Field Functions 
    bool hasConditionalAccessPolicyType() const { return this->conditionalAccessPolicyType_ != nullptr;};
    void deleteConditionalAccessPolicyType() { this->conditionalAccessPolicyType_ = nullptr;};
    inline string conditionalAccessPolicyType() const { DARABONBA_PTR_GET_DEFAULT(conditionalAccessPolicyType_, "") };
    inline GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy& setConditionalAccessPolicyType(string conditionalAccessPolicyType) { DARABONBA_PTR_SET_VALUE(conditionalAccessPolicyType_, conditionalAccessPolicyType) };


    // conditionsConfig Field Functions 
    bool hasConditionsConfig() const { return this->conditionsConfig_ != nullptr;};
    void deleteConditionsConfig() { this->conditionsConfig_ = nullptr;};
    inline const Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig & conditionsConfig() const { DARABONBA_PTR_GET_CONST(conditionsConfig_, Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig) };
    inline Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig conditionsConfig() { DARABONBA_PTR_GET(conditionsConfig_, Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig) };
    inline GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy& setConditionsConfig(const Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig & conditionsConfig) { DARABONBA_PTR_SET_VALUE(conditionsConfig_, conditionsConfig) };
    inline GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy& setConditionsConfig(Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig && conditionsConfig) { DARABONBA_PTR_SET_RVALUE(conditionsConfig_, conditionsConfig) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // decisionConfig Field Functions 
    bool hasDecisionConfig() const { return this->decisionConfig_ != nullptr;};
    void deleteDecisionConfig() { this->decisionConfig_ = nullptr;};
    inline const Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyDecisionConfig & decisionConfig() const { DARABONBA_PTR_GET_CONST(decisionConfig_, Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyDecisionConfig) };
    inline Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyDecisionConfig decisionConfig() { DARABONBA_PTR_GET(decisionConfig_, Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyDecisionConfig) };
    inline GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy& setDecisionConfig(const Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyDecisionConfig & decisionConfig) { DARABONBA_PTR_SET_VALUE(decisionConfig_, decisionConfig) };
    inline GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy& setDecisionConfig(Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyDecisionConfig && decisionConfig) { DARABONBA_PTR_SET_RVALUE(decisionConfig_, decisionConfig) };


    // decisionType Field Functions 
    bool hasDecisionType() const { return this->decisionType_ != nullptr;};
    void deleteDecisionType() { this->decisionType_ = nullptr;};
    inline string decisionType() const { DARABONBA_PTR_GET_DEFAULT(decisionType_, "") };
    inline GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy& setDecisionType(string decisionType) { DARABONBA_PTR_SET_VALUE(decisionType_, decisionType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // evaluateAt Field Functions 
    bool hasEvaluateAt() const { return this->evaluateAt_ != nullptr;};
    void deleteEvaluateAt() { this->evaluateAt_ = nullptr;};
    inline string evaluateAt() const { DARABONBA_PTR_GET_DEFAULT(evaluateAt_, "") };
    inline GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy& setEvaluateAt(string evaluateAt) { DARABONBA_PTR_SET_VALUE(evaluateAt_, evaluateAt) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lastUpdatedTime Field Functions 
    bool hasLastUpdatedTime() const { return this->lastUpdatedTime_ != nullptr;};
    void deleteLastUpdatedTime() { this->lastUpdatedTime_ = nullptr;};
    inline int64_t lastUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpdatedTime_, 0L) };
    inline GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy& setLastUpdatedTime(int64_t lastUpdatedTime) { DARABONBA_PTR_SET_VALUE(lastUpdatedTime_, lastUpdatedTime) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetConditionalAccessPolicyResponseBodyConditionalAccessPolicy& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Conditional Access Policy ID
    std::shared_ptr<string> conditionalAccessPolicyId_ = nullptr;
    // Conditional Access Policy Name
    std::shared_ptr<string> conditionalAccessPolicyName_ = nullptr;
    // Type of the conditional access policy
    std::shared_ptr<string> conditionalAccessPolicyType_ = nullptr;
    // Conditional access policy content
    std::shared_ptr<Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyConditionsConfig> conditionsConfig_ = nullptr;
    // Creation time
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Action of the conditional access policy
    std::shared_ptr<Models::GetConditionalAccessPolicyResponseBodyConditionalAccessPolicyDecisionConfig> decisionConfig_ = nullptr;
    // Execution type of the conditional access policy
    std::shared_ptr<string> decisionType_ = nullptr;
    // Description of the conditional access policy
    std::shared_ptr<string> description_ = nullptr;
    // Execution point of the conditional access policy
    std::shared_ptr<string> evaluateAt_ = nullptr;
    // Instance ID
    std::shared_ptr<string> instanceId_ = nullptr;
    // Last updated time
    std::shared_ptr<int64_t> lastUpdatedTime_ = nullptr;
    // Priority
    std::shared_ptr<int32_t> priority_ = nullptr;
    // Enable or disable status of the conditional access policy
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
