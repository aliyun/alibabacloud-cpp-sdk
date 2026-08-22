// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHORIZATIONRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHORIZATIONRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetAuthorizationResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthorizationResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationResource, authorizationResource_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthorizationResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationResource, authorizationResource_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAuthorizationResourceResponseBody() = default ;
    GetAuthorizationResourceResponseBody(const GetAuthorizationResourceResponseBody &) = default ;
    GetAuthorizationResourceResponseBody(GetAuthorizationResourceResponseBody &&) = default ;
    GetAuthorizationResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthorizationResourceResponseBody() = default ;
    GetAuthorizationResourceResponseBody& operator=(const GetAuthorizationResourceResponseBody &) = default ;
    GetAuthorizationResourceResponseBody& operator=(GetAuthorizationResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AuthorizationResource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthorizationResource& obj) { 
        DARABONBA_PTR_TO_JSON(AuthorizationResourceEntityId, authorizationResourceEntityId_);
        DARABONBA_PTR_TO_JSON(AuthorizationResourceEntityType, authorizationResourceEntityType_);
        DARABONBA_PTR_TO_JSON(AuthorizationResourceId, authorizationResourceId_);
        DARABONBA_PTR_TO_JSON(AuthorizationRuleId, authorizationRuleId_);
        DARABONBA_PTR_TO_JSON(CloudAccountId, cloudAccountId_);
        DARABONBA_PTR_TO_JSON(Condition, condition_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, AuthorizationResource& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorizationResourceEntityId, authorizationResourceEntityId_);
        DARABONBA_PTR_FROM_JSON(AuthorizationResourceEntityType, authorizationResourceEntityType_);
        DARABONBA_PTR_FROM_JSON(AuthorizationResourceId, authorizationResourceId_);
        DARABONBA_PTR_FROM_JSON(AuthorizationRuleId, authorizationRuleId_);
        DARABONBA_PTR_FROM_JSON(CloudAccountId, cloudAccountId_);
        DARABONBA_PTR_FROM_JSON(Condition, condition_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      AuthorizationResource() = default ;
      AuthorizationResource(const AuthorizationResource &) = default ;
      AuthorizationResource(AuthorizationResource &&) = default ;
      AuthorizationResource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthorizationResource() = default ;
      AuthorizationResource& operator=(const AuthorizationResource &) = default ;
      AuthorizationResource& operator=(AuthorizationResource &&) = default ;
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
        // The credential condition.
        shared_ptr<Condition::CredentialCondition> credentialCondition_ {};
      };

      virtual bool empty() const override { return this->authorizationResourceEntityId_ == nullptr
        && this->authorizationResourceEntityType_ == nullptr && this->authorizationResourceId_ == nullptr && this->authorizationRuleId_ == nullptr && this->cloudAccountId_ == nullptr && this->condition_ == nullptr
        && this->createTime_ == nullptr && this->instanceId_ == nullptr && this->updateTime_ == nullptr; };
      // authorizationResourceEntityId Field Functions 
      bool hasAuthorizationResourceEntityId() const { return this->authorizationResourceEntityId_ != nullptr;};
      void deleteAuthorizationResourceEntityId() { this->authorizationResourceEntityId_ = nullptr;};
      inline string getAuthorizationResourceEntityId() const { DARABONBA_PTR_GET_DEFAULT(authorizationResourceEntityId_, "") };
      inline AuthorizationResource& setAuthorizationResourceEntityId(string authorizationResourceEntityId) { DARABONBA_PTR_SET_VALUE(authorizationResourceEntityId_, authorizationResourceEntityId) };


      // authorizationResourceEntityType Field Functions 
      bool hasAuthorizationResourceEntityType() const { return this->authorizationResourceEntityType_ != nullptr;};
      void deleteAuthorizationResourceEntityType() { this->authorizationResourceEntityType_ = nullptr;};
      inline string getAuthorizationResourceEntityType() const { DARABONBA_PTR_GET_DEFAULT(authorizationResourceEntityType_, "") };
      inline AuthorizationResource& setAuthorizationResourceEntityType(string authorizationResourceEntityType) { DARABONBA_PTR_SET_VALUE(authorizationResourceEntityType_, authorizationResourceEntityType) };


      // authorizationResourceId Field Functions 
      bool hasAuthorizationResourceId() const { return this->authorizationResourceId_ != nullptr;};
      void deleteAuthorizationResourceId() { this->authorizationResourceId_ = nullptr;};
      inline string getAuthorizationResourceId() const { DARABONBA_PTR_GET_DEFAULT(authorizationResourceId_, "") };
      inline AuthorizationResource& setAuthorizationResourceId(string authorizationResourceId) { DARABONBA_PTR_SET_VALUE(authorizationResourceId_, authorizationResourceId) };


      // authorizationRuleId Field Functions 
      bool hasAuthorizationRuleId() const { return this->authorizationRuleId_ != nullptr;};
      void deleteAuthorizationRuleId() { this->authorizationRuleId_ = nullptr;};
      inline string getAuthorizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleId_, "") };
      inline AuthorizationResource& setAuthorizationRuleId(string authorizationRuleId) { DARABONBA_PTR_SET_VALUE(authorizationRuleId_, authorizationRuleId) };


      // cloudAccountId Field Functions 
      bool hasCloudAccountId() const { return this->cloudAccountId_ != nullptr;};
      void deleteCloudAccountId() { this->cloudAccountId_ = nullptr;};
      inline string getCloudAccountId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountId_, "") };
      inline AuthorizationResource& setCloudAccountId(string cloudAccountId) { DARABONBA_PTR_SET_VALUE(cloudAccountId_, cloudAccountId) };


      // condition Field Functions 
      bool hasCondition() const { return this->condition_ != nullptr;};
      void deleteCondition() { this->condition_ = nullptr;};
      inline const AuthorizationResource::Condition & getCondition() const { DARABONBA_PTR_GET_CONST(condition_, AuthorizationResource::Condition) };
      inline AuthorizationResource::Condition getCondition() { DARABONBA_PTR_GET(condition_, AuthorizationResource::Condition) };
      inline AuthorizationResource& setCondition(const AuthorizationResource::Condition & condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };
      inline AuthorizationResource& setCondition(AuthorizationResource::Condition && condition) { DARABONBA_PTR_SET_RVALUE(condition_, condition) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline AuthorizationResource& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AuthorizationResource& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline AuthorizationResource& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The resource entity ID associated with the authorization resource.
      shared_ptr<string> authorizationResourceEntityId_ {};
      // The resource entity type associated with the authorization resource. Valid values:
      // - cloud_account_role: cloud role.
      shared_ptr<string> authorizationResourceEntityType_ {};
      // The authorization resource ID.
      shared_ptr<string> authorizationResourceId_ {};
      // The authorization rule ID.
      shared_ptr<string> authorizationRuleId_ {};
      // The cloud account ID to which the resource entity associated with the authorization resource belongs.
      shared_ptr<string> cloudAccountId_ {};
      // The condition restriction.
      shared_ptr<AuthorizationResource::Condition> condition_ {};
      // The creation time.
      shared_ptr<int64_t> createTime_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The update time.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->authorizationResource_ == nullptr
        && this->requestId_ == nullptr; };
    // authorizationResource Field Functions 
    bool hasAuthorizationResource() const { return this->authorizationResource_ != nullptr;};
    void deleteAuthorizationResource() { this->authorizationResource_ = nullptr;};
    inline const GetAuthorizationResourceResponseBody::AuthorizationResource & getAuthorizationResource() const { DARABONBA_PTR_GET_CONST(authorizationResource_, GetAuthorizationResourceResponseBody::AuthorizationResource) };
    inline GetAuthorizationResourceResponseBody::AuthorizationResource getAuthorizationResource() { DARABONBA_PTR_GET(authorizationResource_, GetAuthorizationResourceResponseBody::AuthorizationResource) };
    inline GetAuthorizationResourceResponseBody& setAuthorizationResource(const GetAuthorizationResourceResponseBody::AuthorizationResource & authorizationResource) { DARABONBA_PTR_SET_VALUE(authorizationResource_, authorizationResource) };
    inline GetAuthorizationResourceResponseBody& setAuthorizationResource(GetAuthorizationResourceResponseBody::AuthorizationResource && authorizationResource) { DARABONBA_PTR_SET_RVALUE(authorizationResource_, authorizationResource) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAuthorizationResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The authorization resource.
    shared_ptr<GetAuthorizationResourceResponseBody::AuthorizationResource> authorizationResource_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
