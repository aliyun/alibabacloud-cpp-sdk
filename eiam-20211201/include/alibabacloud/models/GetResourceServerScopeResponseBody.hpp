// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCESERVERSCOPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCESERVERSCOPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetResourceServerScopeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceServerScopeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceServerScope, resourceServerScope_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceServerScopeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceServerScope, resourceServerScope_);
    };
    GetResourceServerScopeResponseBody() = default ;
    GetResourceServerScopeResponseBody(const GetResourceServerScopeResponseBody &) = default ;
    GetResourceServerScopeResponseBody(GetResourceServerScopeResponseBody &&) = default ;
    GetResourceServerScopeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceServerScopeResponseBody() = default ;
    GetResourceServerScopeResponseBody& operator=(const GetResourceServerScopeResponseBody &) = default ;
    GetResourceServerScopeResponseBody& operator=(GetResourceServerScopeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceServerScope : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceServerScope& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(AuthorizationType, authorizationType_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ResourceServerScopeId, resourceServerScopeId_);
        DARABONBA_PTR_TO_JSON(ResourceServerScopeName, resourceServerScopeName_);
        DARABONBA_PTR_TO_JSON(ResourceServerScopeType, resourceServerScopeType_);
        DARABONBA_PTR_TO_JSON(ResourceServerScopeValue, resourceServerScopeValue_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceServerScope& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(AuthorizationType, authorizationType_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ResourceServerScopeId, resourceServerScopeId_);
        DARABONBA_PTR_FROM_JSON(ResourceServerScopeName, resourceServerScopeName_);
        DARABONBA_PTR_FROM_JSON(ResourceServerScopeType, resourceServerScopeType_);
        DARABONBA_PTR_FROM_JSON(ResourceServerScopeValue, resourceServerScopeValue_);
      };
      ResourceServerScope() = default ;
      ResourceServerScope(const ResourceServerScope &) = default ;
      ResourceServerScope(ResourceServerScope &&) = default ;
      ResourceServerScope(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceServerScope() = default ;
      ResourceServerScope& operator=(const ResourceServerScope &) = default ;
      ResourceServerScope& operator=(ResourceServerScope &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->authorizationType_ == nullptr && this->instanceId_ == nullptr && this->resourceServerScopeId_ == nullptr && this->resourceServerScopeName_ == nullptr && this->resourceServerScopeType_ == nullptr
        && this->resourceServerScopeValue_ == nullptr; };
      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline ResourceServerScope& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // authorizationType Field Functions 
      bool hasAuthorizationType() const { return this->authorizationType_ != nullptr;};
      void deleteAuthorizationType() { this->authorizationType_ = nullptr;};
      inline string getAuthorizationType() const { DARABONBA_PTR_GET_DEFAULT(authorizationType_, "") };
      inline ResourceServerScope& setAuthorizationType(string authorizationType) { DARABONBA_PTR_SET_VALUE(authorizationType_, authorizationType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ResourceServerScope& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // resourceServerScopeId Field Functions 
      bool hasResourceServerScopeId() const { return this->resourceServerScopeId_ != nullptr;};
      void deleteResourceServerScopeId() { this->resourceServerScopeId_ = nullptr;};
      inline string getResourceServerScopeId() const { DARABONBA_PTR_GET_DEFAULT(resourceServerScopeId_, "") };
      inline ResourceServerScope& setResourceServerScopeId(string resourceServerScopeId) { DARABONBA_PTR_SET_VALUE(resourceServerScopeId_, resourceServerScopeId) };


      // resourceServerScopeName Field Functions 
      bool hasResourceServerScopeName() const { return this->resourceServerScopeName_ != nullptr;};
      void deleteResourceServerScopeName() { this->resourceServerScopeName_ = nullptr;};
      inline string getResourceServerScopeName() const { DARABONBA_PTR_GET_DEFAULT(resourceServerScopeName_, "") };
      inline ResourceServerScope& setResourceServerScopeName(string resourceServerScopeName) { DARABONBA_PTR_SET_VALUE(resourceServerScopeName_, resourceServerScopeName) };


      // resourceServerScopeType Field Functions 
      bool hasResourceServerScopeType() const { return this->resourceServerScopeType_ != nullptr;};
      void deleteResourceServerScopeType() { this->resourceServerScopeType_ = nullptr;};
      inline string getResourceServerScopeType() const { DARABONBA_PTR_GET_DEFAULT(resourceServerScopeType_, "") };
      inline ResourceServerScope& setResourceServerScopeType(string resourceServerScopeType) { DARABONBA_PTR_SET_VALUE(resourceServerScopeType_, resourceServerScopeType) };


      // resourceServerScopeValue Field Functions 
      bool hasResourceServerScopeValue() const { return this->resourceServerScopeValue_ != nullptr;};
      void deleteResourceServerScopeValue() { this->resourceServerScopeValue_ = nullptr;};
      inline string getResourceServerScopeValue() const { DARABONBA_PTR_GET_DEFAULT(resourceServerScopeValue_, "") };
      inline ResourceServerScope& setResourceServerScopeValue(string resourceServerScopeValue) { DARABONBA_PTR_SET_VALUE(resourceServerScopeValue_, resourceServerScopeValue) };


    protected:
      // IDaaS EIAM 应用Id
      shared_ptr<string> applicationId_ {};
      shared_ptr<string> authorizationType_ {};
      // IDaaS EIAM 实例Id
      shared_ptr<string> instanceId_ {};
      // IDaaS EIAM ResourceServer下权限Id
      shared_ptr<string> resourceServerScopeId_ {};
      // IDaaS EIAM ResourceServer下权限名称
      shared_ptr<string> resourceServerScopeName_ {};
      // IDaaS EIAM ResourceServer下权限类型
      shared_ptr<string> resourceServerScopeType_ {};
      // IDaaS EIAM ResourceServer下权限值
      shared_ptr<string> resourceServerScopeValue_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceServerScope_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceServerScopeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceServerScope Field Functions 
    bool hasResourceServerScope() const { return this->resourceServerScope_ != nullptr;};
    void deleteResourceServerScope() { this->resourceServerScope_ = nullptr;};
    inline const GetResourceServerScopeResponseBody::ResourceServerScope & getResourceServerScope() const { DARABONBA_PTR_GET_CONST(resourceServerScope_, GetResourceServerScopeResponseBody::ResourceServerScope) };
    inline GetResourceServerScopeResponseBody::ResourceServerScope getResourceServerScope() { DARABONBA_PTR_GET(resourceServerScope_, GetResourceServerScopeResponseBody::ResourceServerScope) };
    inline GetResourceServerScopeResponseBody& setResourceServerScope(const GetResourceServerScopeResponseBody::ResourceServerScope & resourceServerScope) { DARABONBA_PTR_SET_VALUE(resourceServerScope_, resourceServerScope) };
    inline GetResourceServerScopeResponseBody& setResourceServerScope(GetResourceServerScopeResponseBody::ResourceServerScope && resourceServerScope) { DARABONBA_PTR_SET_RVALUE(resourceServerScope_, resourceServerScope) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetResourceServerScopeResponseBody::ResourceServerScope> resourceServerScope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
