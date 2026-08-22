// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTHORIZATIONRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTHORIZATIONRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateAuthorizationResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAuthorizationResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationResourceEntityId, authorizationResourceEntityId_);
      DARABONBA_PTR_TO_JSON(AuthorizationResourceEntityType, authorizationResourceEntityType_);
      DARABONBA_PTR_TO_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAuthorizationResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationResourceEntityId, authorizationResourceEntityId_);
      DARABONBA_PTR_FROM_JSON(AuthorizationResourceEntityType, authorizationResourceEntityType_);
      DARABONBA_PTR_FROM_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    CreateAuthorizationResourceRequest() = default ;
    CreateAuthorizationResourceRequest(const CreateAuthorizationResourceRequest &) = default ;
    CreateAuthorizationResourceRequest(CreateAuthorizationResourceRequest &&) = default ;
    CreateAuthorizationResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAuthorizationResourceRequest() = default ;
    CreateAuthorizationResourceRequest& operator=(const CreateAuthorizationResourceRequest &) = default ;
    CreateAuthorizationResourceRequest& operator=(CreateAuthorizationResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Condition : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Condition& obj) { 
        DARABONBA_PTR_TO_JSON(CredentialCondition, credentialCondition_);
      };
      friend void from_json(const Darabonba::Json& j, Condition& obj) { 
        DARABONBA_PTR_FROM_JSON(CredentialCondition, credentialCondition_);
      };
      Condition() = default ;
      Condition(const Condition &) = default ;
      Condition(Condition &&) = default ;
      Condition(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Condition() = default ;
      Condition& operator=(const Condition &) = default ;
      Condition& operator=(Condition &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CredentialCondition : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CredentialCondition& obj) { 
          DARABONBA_PTR_TO_JSON(AllowSameNameIdentity, allowSameNameIdentity_);
        };
        friend void from_json(const Darabonba::Json& j, CredentialCondition& obj) { 
          DARABONBA_PTR_FROM_JSON(AllowSameNameIdentity, allowSameNameIdentity_);
        };
        CredentialCondition() = default ;
        CredentialCondition(const CredentialCondition &) = default ;
        CredentialCondition(CredentialCondition &&) = default ;
        CredentialCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CredentialCondition() = default ;
        CredentialCondition& operator=(const CredentialCondition &) = default ;
        CredentialCondition& operator=(CredentialCondition &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allowSameNameIdentity_ == nullptr; };
        // allowSameNameIdentity Field Functions 
        bool hasAllowSameNameIdentity() const { return this->allowSameNameIdentity_ != nullptr;};
        void deleteAllowSameNameIdentity() { this->allowSameNameIdentity_ = nullptr;};
        inline bool getAllowSameNameIdentity() const { DARABONBA_PTR_GET_DEFAULT(allowSameNameIdentity_, false) };
        inline CredentialCondition& setAllowSameNameIdentity(bool allowSameNameIdentity) { DARABONBA_PTR_SET_VALUE(allowSameNameIdentity_, allowSameNameIdentity) };


      protected:
        // Specifies whether same-name identity accounts are supported.
        shared_ptr<bool> allowSameNameIdentity_ {};
      };

      virtual bool empty() const override { return this->credentialCondition_ == nullptr; };
      // credentialCondition Field Functions 
      bool hasCredentialCondition() const { return this->credentialCondition_ != nullptr;};
      void deleteCredentialCondition() { this->credentialCondition_ = nullptr;};
      inline const Condition::CredentialCondition & getCredentialCondition() const { DARABONBA_PTR_GET_CONST(credentialCondition_, Condition::CredentialCondition) };
      inline Condition::CredentialCondition getCredentialCondition() { DARABONBA_PTR_GET(credentialCondition_, Condition::CredentialCondition) };
      inline Condition& setCredentialCondition(const Condition::CredentialCondition & credentialCondition) { DARABONBA_PTR_SET_VALUE(credentialCondition_, credentialCondition) };
      inline Condition& setCredentialCondition(Condition::CredentialCondition && credentialCondition) { DARABONBA_PTR_SET_RVALUE(credentialCondition_, credentialCondition) };


    protected:
      // The effective condition when used as a credential.
      shared_ptr<Condition::CredentialCondition> credentialCondition_ {};
    };

    virtual bool empty() const override { return this->authorizationResourceEntityId_ == nullptr
        && this->authorizationResourceEntityType_ == nullptr && this->authorizationRuleId_ == nullptr && this->clientToken_ == nullptr && this->condition_ == nullptr && this->instanceId_ == nullptr; };
    // authorizationResourceEntityId Field Functions 
    bool hasAuthorizationResourceEntityId() const { return this->authorizationResourceEntityId_ != nullptr;};
    void deleteAuthorizationResourceEntityId() { this->authorizationResourceEntityId_ = nullptr;};
    inline string getAuthorizationResourceEntityId() const { DARABONBA_PTR_GET_DEFAULT(authorizationResourceEntityId_, "") };
    inline CreateAuthorizationResourceRequest& setAuthorizationResourceEntityId(string authorizationResourceEntityId) { DARABONBA_PTR_SET_VALUE(authorizationResourceEntityId_, authorizationResourceEntityId) };


    // authorizationResourceEntityType Field Functions 
    bool hasAuthorizationResourceEntityType() const { return this->authorizationResourceEntityType_ != nullptr;};
    void deleteAuthorizationResourceEntityType() { this->authorizationResourceEntityType_ = nullptr;};
    inline string getAuthorizationResourceEntityType() const { DARABONBA_PTR_GET_DEFAULT(authorizationResourceEntityType_, "") };
    inline CreateAuthorizationResourceRequest& setAuthorizationResourceEntityType(string authorizationResourceEntityType) { DARABONBA_PTR_SET_VALUE(authorizationResourceEntityType_, authorizationResourceEntityType) };


    // authorizationRuleId Field Functions 
    bool hasAuthorizationRuleId() const { return this->authorizationRuleId_ != nullptr;};
    void deleteAuthorizationRuleId() { this->authorizationRuleId_ = nullptr;};
    inline string getAuthorizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleId_, "") };
    inline CreateAuthorizationResourceRequest& setAuthorizationRuleId(string authorizationRuleId) { DARABONBA_PTR_SET_VALUE(authorizationRuleId_, authorizationRuleId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAuthorizationResourceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline const CreateAuthorizationResourceRequest::Condition & getCondition() const { DARABONBA_PTR_GET_CONST(condition_, CreateAuthorizationResourceRequest::Condition) };
    inline CreateAuthorizationResourceRequest::Condition getCondition() { DARABONBA_PTR_GET(condition_, CreateAuthorizationResourceRequest::Condition) };
    inline CreateAuthorizationResourceRequest& setCondition(const CreateAuthorizationResourceRequest::Condition & condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };
    inline CreateAuthorizationResourceRequest& setCondition(CreateAuthorizationResourceRequest::Condition && condition) { DARABONBA_PTR_SET_RVALUE(condition_, condition) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateAuthorizationResourceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The ID of the resource entity associated with the authorization resource.
    // 
    // This parameter is required.
    shared_ptr<string> authorizationResourceEntityId_ {};
    // The type of the resource entity associated with the authorization resource. Valid values:
    // 
    // - cloud_account_role: cloud role
    // 
    // This parameter is required.
    shared_ptr<string> authorizationResourceEntityType_ {};
    // The authorization rule ID.
    // 
    // This parameter is required.
    shared_ptr<string> authorizationRuleId_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate a parameter value, but you must make sure that the value is unique among different requests. The ClientToken value can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see References [How to ensure idempotence](https://www.alibabacloud.com/help/zh/ecs/developer-reference/how-to-ensure-idempotence).
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // The effective condition.
    shared_ptr<CreateAuthorizationResourceRequest::Condition> condition_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
