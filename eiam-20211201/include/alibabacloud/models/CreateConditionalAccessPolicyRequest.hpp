// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONDITIONALACCESSPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONDITIONALACCESSPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateConditionalAccessPolicyRequestConditionsConfig.hpp>
#include <alibabacloud/models/CreateConditionalAccessPolicyRequestDecisionConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateConditionalAccessPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConditionalAccessPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConditionalAccessPolicyName, conditionalAccessPolicyName_);
      DARABONBA_PTR_TO_JSON(ConditionalAccessPolicyType, conditionalAccessPolicyType_);
      DARABONBA_PTR_TO_JSON(ConditionsConfig, conditionsConfig_);
      DARABONBA_PTR_TO_JSON(DecisionConfig, decisionConfig_);
      DARABONBA_PTR_TO_JSON(DecisionType, decisionType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EvaluateAt, evaluateAt_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConditionalAccessPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConditionalAccessPolicyName, conditionalAccessPolicyName_);
      DARABONBA_PTR_FROM_JSON(ConditionalAccessPolicyType, conditionalAccessPolicyType_);
      DARABONBA_PTR_FROM_JSON(ConditionsConfig, conditionsConfig_);
      DARABONBA_PTR_FROM_JSON(DecisionConfig, decisionConfig_);
      DARABONBA_PTR_FROM_JSON(DecisionType, decisionType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EvaluateAt, evaluateAt_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
    };
    CreateConditionalAccessPolicyRequest() = default ;
    CreateConditionalAccessPolicyRequest(const CreateConditionalAccessPolicyRequest &) = default ;
    CreateConditionalAccessPolicyRequest(CreateConditionalAccessPolicyRequest &&) = default ;
    CreateConditionalAccessPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConditionalAccessPolicyRequest() = default ;
    CreateConditionalAccessPolicyRequest& operator=(const CreateConditionalAccessPolicyRequest &) = default ;
    CreateConditionalAccessPolicyRequest& operator=(CreateConditionalAccessPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->conditionalAccessPolicyName_ == nullptr && return this->conditionalAccessPolicyType_ == nullptr && return this->conditionsConfig_ == nullptr && return this->decisionConfig_ == nullptr && return this->decisionType_ == nullptr
        && return this->description_ == nullptr && return this->evaluateAt_ == nullptr && return this->instanceId_ == nullptr && return this->priority_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateConditionalAccessPolicyRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // conditionalAccessPolicyName Field Functions 
    bool hasConditionalAccessPolicyName() const { return this->conditionalAccessPolicyName_ != nullptr;};
    void deleteConditionalAccessPolicyName() { this->conditionalAccessPolicyName_ = nullptr;};
    inline string conditionalAccessPolicyName() const { DARABONBA_PTR_GET_DEFAULT(conditionalAccessPolicyName_, "") };
    inline CreateConditionalAccessPolicyRequest& setConditionalAccessPolicyName(string conditionalAccessPolicyName) { DARABONBA_PTR_SET_VALUE(conditionalAccessPolicyName_, conditionalAccessPolicyName) };


    // conditionalAccessPolicyType Field Functions 
    bool hasConditionalAccessPolicyType() const { return this->conditionalAccessPolicyType_ != nullptr;};
    void deleteConditionalAccessPolicyType() { this->conditionalAccessPolicyType_ = nullptr;};
    inline string conditionalAccessPolicyType() const { DARABONBA_PTR_GET_DEFAULT(conditionalAccessPolicyType_, "") };
    inline CreateConditionalAccessPolicyRequest& setConditionalAccessPolicyType(string conditionalAccessPolicyType) { DARABONBA_PTR_SET_VALUE(conditionalAccessPolicyType_, conditionalAccessPolicyType) };


    // conditionsConfig Field Functions 
    bool hasConditionsConfig() const { return this->conditionsConfig_ != nullptr;};
    void deleteConditionsConfig() { this->conditionsConfig_ = nullptr;};
    inline const CreateConditionalAccessPolicyRequestConditionsConfig & conditionsConfig() const { DARABONBA_PTR_GET_CONST(conditionsConfig_, CreateConditionalAccessPolicyRequestConditionsConfig) };
    inline CreateConditionalAccessPolicyRequestConditionsConfig conditionsConfig() { DARABONBA_PTR_GET(conditionsConfig_, CreateConditionalAccessPolicyRequestConditionsConfig) };
    inline CreateConditionalAccessPolicyRequest& setConditionsConfig(const CreateConditionalAccessPolicyRequestConditionsConfig & conditionsConfig) { DARABONBA_PTR_SET_VALUE(conditionsConfig_, conditionsConfig) };
    inline CreateConditionalAccessPolicyRequest& setConditionsConfig(CreateConditionalAccessPolicyRequestConditionsConfig && conditionsConfig) { DARABONBA_PTR_SET_RVALUE(conditionsConfig_, conditionsConfig) };


    // decisionConfig Field Functions 
    bool hasDecisionConfig() const { return this->decisionConfig_ != nullptr;};
    void deleteDecisionConfig() { this->decisionConfig_ = nullptr;};
    inline const CreateConditionalAccessPolicyRequestDecisionConfig & decisionConfig() const { DARABONBA_PTR_GET_CONST(decisionConfig_, CreateConditionalAccessPolicyRequestDecisionConfig) };
    inline CreateConditionalAccessPolicyRequestDecisionConfig decisionConfig() { DARABONBA_PTR_GET(decisionConfig_, CreateConditionalAccessPolicyRequestDecisionConfig) };
    inline CreateConditionalAccessPolicyRequest& setDecisionConfig(const CreateConditionalAccessPolicyRequestDecisionConfig & decisionConfig) { DARABONBA_PTR_SET_VALUE(decisionConfig_, decisionConfig) };
    inline CreateConditionalAccessPolicyRequest& setDecisionConfig(CreateConditionalAccessPolicyRequestDecisionConfig && decisionConfig) { DARABONBA_PTR_SET_RVALUE(decisionConfig_, decisionConfig) };


    // decisionType Field Functions 
    bool hasDecisionType() const { return this->decisionType_ != nullptr;};
    void deleteDecisionType() { this->decisionType_ = nullptr;};
    inline string decisionType() const { DARABONBA_PTR_GET_DEFAULT(decisionType_, "") };
    inline CreateConditionalAccessPolicyRequest& setDecisionType(string decisionType) { DARABONBA_PTR_SET_VALUE(decisionType_, decisionType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateConditionalAccessPolicyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // evaluateAt Field Functions 
    bool hasEvaluateAt() const { return this->evaluateAt_ != nullptr;};
    void deleteEvaluateAt() { this->evaluateAt_ = nullptr;};
    inline string evaluateAt() const { DARABONBA_PTR_GET_DEFAULT(evaluateAt_, "") };
    inline CreateConditionalAccessPolicyRequest& setEvaluateAt(string evaluateAt) { DARABONBA_PTR_SET_VALUE(evaluateAt_, evaluateAt) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateConditionalAccessPolicyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateConditionalAccessPolicyRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


  protected:
    // Idempotent token.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Conditional access policy name
    // 
    // This parameter is required.
    std::shared_ptr<string> conditionalAccessPolicyName_ = nullptr;
    // Type of the conditional access policy, with the following options:
    // 
    // arn:alibaba:idaas:authn:access:policy:system: System policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> conditionalAccessPolicyType_ = nullptr;
    // Condition content configuration for the conditional access policy
    std::shared_ptr<CreateConditionalAccessPolicyRequestConditionsConfig> conditionsConfig_ = nullptr;
    // Action configuration for the conditional access policy
    std::shared_ptr<CreateConditionalAccessPolicyRequestDecisionConfig> decisionConfig_ = nullptr;
    // Execution type of the conditional access policy, with the following options:
    // 
    // enforcement: Enforce the policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> decisionType_ = nullptr;
    // Description of the conditional access policy
    std::shared_ptr<string> description_ = nullptr;
    // Execution point of the conditional access policy, with the following options:
    // 
    // - arn:alibaba:idaas:authn:access:rule:eval_at:after_step1: Allow.
    // 
    // This parameter is required.
    std::shared_ptr<string> evaluateAt_ = nullptr;
    // Instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Priority of the conditional access policy, lower values indicate higher priority
    // Minimum value: 1
    // Maximum value: 100
    std::shared_ptr<int32_t> priority_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
