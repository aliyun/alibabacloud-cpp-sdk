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
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, AuthorizationResource& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorizationResourceEntityId, authorizationResourceEntityId_);
        DARABONBA_PTR_FROM_JSON(AuthorizationResourceEntityType, authorizationResourceEntityType_);
        DARABONBA_PTR_FROM_JSON(AuthorizationResourceId, authorizationResourceId_);
        DARABONBA_PTR_FROM_JSON(AuthorizationRuleId, authorizationRuleId_);
        DARABONBA_PTR_FROM_JSON(CloudAccountId, cloudAccountId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
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
      virtual bool empty() const override { return this->authorizationResourceEntityId_ == nullptr
        && this->authorizationResourceEntityType_ == nullptr && this->authorizationResourceId_ == nullptr && this->authorizationRuleId_ == nullptr && this->cloudAccountId_ == nullptr && this->instanceId_ == nullptr; };
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


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AuthorizationResource& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      // 资源实体标识
      shared_ptr<string> authorizationResourceEntityId_ {};
      // 资源实体类型，枚举类型：asset（资产）、credential（凭据）、cloud_identity_role（云账号角色）
      shared_ptr<string> authorizationResourceEntityType_ {};
      // 授权资源标识
      shared_ptr<string> authorizationResourceId_ {};
      // 授权规则标识
      shared_ptr<string> authorizationRuleId_ {};
      // 云账号ID。
      shared_ptr<string> cloudAccountId_ {};
      // 实例ID
      shared_ptr<string> instanceId_ {};
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
    shared_ptr<GetAuthorizationResourceResponseBody::AuthorizationResource> authorizationResource_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
