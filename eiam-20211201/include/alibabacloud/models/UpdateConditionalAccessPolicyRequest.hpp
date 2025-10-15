// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONDITIONALACCESSPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONDITIONALACCESSPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateConditionalAccessPolicyRequestConditionsConfig.hpp>
#include <alibabacloud/models/UpdateConditionalAccessPolicyRequestDecisionConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateConditionalAccessPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConditionalAccessPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConditionalAccessPolicyId, conditionalAccessPolicyId_);
      DARABONBA_PTR_TO_JSON(ConditionalAccessPolicyName, conditionalAccessPolicyName_);
      DARABONBA_PTR_TO_JSON(ConditionsConfig, conditionsConfig_);
      DARABONBA_PTR_TO_JSON(DecisionConfig, decisionConfig_);
      DARABONBA_PTR_TO_JSON(DecisionType, decisionType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConditionalAccessPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConditionalAccessPolicyId, conditionalAccessPolicyId_);
      DARABONBA_PTR_FROM_JSON(ConditionalAccessPolicyName, conditionalAccessPolicyName_);
      DARABONBA_PTR_FROM_JSON(ConditionsConfig, conditionsConfig_);
      DARABONBA_PTR_FROM_JSON(DecisionConfig, decisionConfig_);
      DARABONBA_PTR_FROM_JSON(DecisionType, decisionType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
    };
    UpdateConditionalAccessPolicyRequest() = default ;
    UpdateConditionalAccessPolicyRequest(const UpdateConditionalAccessPolicyRequest &) = default ;
    UpdateConditionalAccessPolicyRequest(UpdateConditionalAccessPolicyRequest &&) = default ;
    UpdateConditionalAccessPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConditionalAccessPolicyRequest() = default ;
    UpdateConditionalAccessPolicyRequest& operator=(const UpdateConditionalAccessPolicyRequest &) = default ;
    UpdateConditionalAccessPolicyRequest& operator=(UpdateConditionalAccessPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->conditionalAccessPolicyId_ == nullptr && return this->conditionalAccessPolicyName_ == nullptr && return this->conditionsConfig_ == nullptr && return this->decisionConfig_ == nullptr && return this->decisionType_ == nullptr
        && return this->instanceId_ == nullptr && return this->priority_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateConditionalAccessPolicyRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // conditionalAccessPolicyId Field Functions 
    bool hasConditionalAccessPolicyId() const { return this->conditionalAccessPolicyId_ != nullptr;};
    void deleteConditionalAccessPolicyId() { this->conditionalAccessPolicyId_ = nullptr;};
    inline string conditionalAccessPolicyId() const { DARABONBA_PTR_GET_DEFAULT(conditionalAccessPolicyId_, "") };
    inline UpdateConditionalAccessPolicyRequest& setConditionalAccessPolicyId(string conditionalAccessPolicyId) { DARABONBA_PTR_SET_VALUE(conditionalAccessPolicyId_, conditionalAccessPolicyId) };


    // conditionalAccessPolicyName Field Functions 
    bool hasConditionalAccessPolicyName() const { return this->conditionalAccessPolicyName_ != nullptr;};
    void deleteConditionalAccessPolicyName() { this->conditionalAccessPolicyName_ = nullptr;};
    inline string conditionalAccessPolicyName() const { DARABONBA_PTR_GET_DEFAULT(conditionalAccessPolicyName_, "") };
    inline UpdateConditionalAccessPolicyRequest& setConditionalAccessPolicyName(string conditionalAccessPolicyName) { DARABONBA_PTR_SET_VALUE(conditionalAccessPolicyName_, conditionalAccessPolicyName) };


    // conditionsConfig Field Functions 
    bool hasConditionsConfig() const { return this->conditionsConfig_ != nullptr;};
    void deleteConditionsConfig() { this->conditionsConfig_ = nullptr;};
    inline const UpdateConditionalAccessPolicyRequestConditionsConfig & conditionsConfig() const { DARABONBA_PTR_GET_CONST(conditionsConfig_, UpdateConditionalAccessPolicyRequestConditionsConfig) };
    inline UpdateConditionalAccessPolicyRequestConditionsConfig conditionsConfig() { DARABONBA_PTR_GET(conditionsConfig_, UpdateConditionalAccessPolicyRequestConditionsConfig) };
    inline UpdateConditionalAccessPolicyRequest& setConditionsConfig(const UpdateConditionalAccessPolicyRequestConditionsConfig & conditionsConfig) { DARABONBA_PTR_SET_VALUE(conditionsConfig_, conditionsConfig) };
    inline UpdateConditionalAccessPolicyRequest& setConditionsConfig(UpdateConditionalAccessPolicyRequestConditionsConfig && conditionsConfig) { DARABONBA_PTR_SET_RVALUE(conditionsConfig_, conditionsConfig) };


    // decisionConfig Field Functions 
    bool hasDecisionConfig() const { return this->decisionConfig_ != nullptr;};
    void deleteDecisionConfig() { this->decisionConfig_ = nullptr;};
    inline const UpdateConditionalAccessPolicyRequestDecisionConfig & decisionConfig() const { DARABONBA_PTR_GET_CONST(decisionConfig_, UpdateConditionalAccessPolicyRequestDecisionConfig) };
    inline UpdateConditionalAccessPolicyRequestDecisionConfig decisionConfig() { DARABONBA_PTR_GET(decisionConfig_, UpdateConditionalAccessPolicyRequestDecisionConfig) };
    inline UpdateConditionalAccessPolicyRequest& setDecisionConfig(const UpdateConditionalAccessPolicyRequestDecisionConfig & decisionConfig) { DARABONBA_PTR_SET_VALUE(decisionConfig_, decisionConfig) };
    inline UpdateConditionalAccessPolicyRequest& setDecisionConfig(UpdateConditionalAccessPolicyRequestDecisionConfig && decisionConfig) { DARABONBA_PTR_SET_RVALUE(decisionConfig_, decisionConfig) };


    // decisionType Field Functions 
    bool hasDecisionType() const { return this->decisionType_ != nullptr;};
    void deleteDecisionType() { this->decisionType_ = nullptr;};
    inline string decisionType() const { DARABONBA_PTR_GET_DEFAULT(decisionType_, "") };
    inline UpdateConditionalAccessPolicyRequest& setDecisionType(string decisionType) { DARABONBA_PTR_SET_VALUE(decisionType_, decisionType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateConditionalAccessPolicyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateConditionalAccessPolicyRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Conditional Access Policy ID
    // 
    // This parameter is required.
    std::shared_ptr<string> conditionalAccessPolicyId_ = nullptr;
    // Conditional Access Policy Name
    // 
    // This parameter is required.
    std::shared_ptr<string> conditionalAccessPolicyName_ = nullptr;
    // Conditional Access Policy Condition Content Configuration
    std::shared_ptr<UpdateConditionalAccessPolicyRequestConditionsConfig> conditionsConfig_ = nullptr;
    // Conditional Access Policy Action Configuration
    std::shared_ptr<UpdateConditionalAccessPolicyRequestDecisionConfig> decisionConfig_ = nullptr;
    // Conditional Access Policy Execution Type
    // 
    // This parameter is required.
    std::shared_ptr<string> decisionType_ = nullptr;
    // Instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Priority of the conditional access policy
    std::shared_ptr<int32_t> priority_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
