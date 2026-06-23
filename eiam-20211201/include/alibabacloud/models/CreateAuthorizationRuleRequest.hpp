// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTHORIZATIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTHORIZATIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateAuthorizationRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAuthorizationRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationResourceScope, authorizationResourceScope_);
      DARABONBA_PTR_TO_JSON(AuthorizationRuleName, authorizationRuleName_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAuthorizationRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationResourceScope, authorizationResourceScope_);
      DARABONBA_PTR_FROM_JSON(AuthorizationRuleName, authorizationRuleName_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    CreateAuthorizationRuleRequest() = default ;
    CreateAuthorizationRuleRequest(const CreateAuthorizationRuleRequest &) = default ;
    CreateAuthorizationRuleRequest(CreateAuthorizationRuleRequest &&) = default ;
    CreateAuthorizationRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAuthorizationRuleRequest() = default ;
    CreateAuthorizationRuleRequest& operator=(const CreateAuthorizationRuleRequest &) = default ;
    CreateAuthorizationRuleRequest& operator=(CreateAuthorizationRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationResourceScope_ == nullptr
        && this->authorizationRuleName_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr && this->projectId_ == nullptr; };
    // authorizationResourceScope Field Functions 
    bool hasAuthorizationResourceScope() const { return this->authorizationResourceScope_ != nullptr;};
    void deleteAuthorizationResourceScope() { this->authorizationResourceScope_ = nullptr;};
    inline string getAuthorizationResourceScope() const { DARABONBA_PTR_GET_DEFAULT(authorizationResourceScope_, "") };
    inline CreateAuthorizationRuleRequest& setAuthorizationResourceScope(string authorizationResourceScope) { DARABONBA_PTR_SET_VALUE(authorizationResourceScope_, authorizationResourceScope) };


    // authorizationRuleName Field Functions 
    bool hasAuthorizationRuleName() const { return this->authorizationRuleName_ != nullptr;};
    void deleteAuthorizationRuleName() { this->authorizationRuleName_ = nullptr;};
    inline string getAuthorizationRuleName() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleName_, "") };
    inline CreateAuthorizationRuleRequest& setAuthorizationRuleName(string authorizationRuleName) { DARABONBA_PTR_SET_VALUE(authorizationRuleName_, authorizationRuleName) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAuthorizationRuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAuthorizationRuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateAuthorizationRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline CreateAuthorizationRuleRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The scope of authorized resources. Valid values:
    // - global: all resources under the project.
    // - custom: specified resources under the project.
    shared_ptr<string> authorizationResourceScope_ {};
    // The name of the authorization rule. The name can be up to 64 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> authorizationRuleName_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate a parameter value, but make sure that the value is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see References: [How to ensure idempotence](https://www.alibabacloud.com/help/zh/ecs/developer-reference/how-to-ensure-idempotence).
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // The description of the authorization rule. The description can be up to 128 characters in length.
    shared_ptr<string> description_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the project associated with the authorization rule. If you are unsure which project to associate, you can associate the default project. The default project ID is iprj_system_default.
    // 
    // This parameter is required.
    shared_ptr<string> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
