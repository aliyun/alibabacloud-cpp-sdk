// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCESERVERSCOPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCESERVERSCOPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateResourceServerScopeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceServerScopeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(AuthorizationType, authorizationType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ResourceServerScopeName, resourceServerScopeName_);
      DARABONBA_PTR_TO_JSON(ResourceServerScopeType, resourceServerScopeType_);
      DARABONBA_PTR_TO_JSON(ResourceServerScopeValue, resourceServerScopeValue_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceServerScopeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(AuthorizationType, authorizationType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceServerScopeName, resourceServerScopeName_);
      DARABONBA_PTR_FROM_JSON(ResourceServerScopeType, resourceServerScopeType_);
      DARABONBA_PTR_FROM_JSON(ResourceServerScopeValue, resourceServerScopeValue_);
    };
    CreateResourceServerScopeRequest() = default ;
    CreateResourceServerScopeRequest(const CreateResourceServerScopeRequest &) = default ;
    CreateResourceServerScopeRequest(CreateResourceServerScopeRequest &&) = default ;
    CreateResourceServerScopeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceServerScopeRequest() = default ;
    CreateResourceServerScopeRequest& operator=(const CreateResourceServerScopeRequest &) = default ;
    CreateResourceServerScopeRequest& operator=(CreateResourceServerScopeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->authorizationType_ == nullptr && this->instanceId_ == nullptr && this->resourceServerScopeName_ == nullptr && this->resourceServerScopeType_ == nullptr && this->resourceServerScopeValue_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline CreateResourceServerScopeRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // authorizationType Field Functions 
    bool hasAuthorizationType() const { return this->authorizationType_ != nullptr;};
    void deleteAuthorizationType() { this->authorizationType_ = nullptr;};
    inline string getAuthorizationType() const { DARABONBA_PTR_GET_DEFAULT(authorizationType_, "") };
    inline CreateResourceServerScopeRequest& setAuthorizationType(string authorizationType) { DARABONBA_PTR_SET_VALUE(authorizationType_, authorizationType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateResourceServerScopeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // resourceServerScopeName Field Functions 
    bool hasResourceServerScopeName() const { return this->resourceServerScopeName_ != nullptr;};
    void deleteResourceServerScopeName() { this->resourceServerScopeName_ = nullptr;};
    inline string getResourceServerScopeName() const { DARABONBA_PTR_GET_DEFAULT(resourceServerScopeName_, "") };
    inline CreateResourceServerScopeRequest& setResourceServerScopeName(string resourceServerScopeName) { DARABONBA_PTR_SET_VALUE(resourceServerScopeName_, resourceServerScopeName) };


    // resourceServerScopeType Field Functions 
    bool hasResourceServerScopeType() const { return this->resourceServerScopeType_ != nullptr;};
    void deleteResourceServerScopeType() { this->resourceServerScopeType_ = nullptr;};
    inline string getResourceServerScopeType() const { DARABONBA_PTR_GET_DEFAULT(resourceServerScopeType_, "") };
    inline CreateResourceServerScopeRequest& setResourceServerScopeType(string resourceServerScopeType) { DARABONBA_PTR_SET_VALUE(resourceServerScopeType_, resourceServerScopeType) };


    // resourceServerScopeValue Field Functions 
    bool hasResourceServerScopeValue() const { return this->resourceServerScopeValue_ != nullptr;};
    void deleteResourceServerScopeValue() { this->resourceServerScopeValue_ = nullptr;};
    inline string getResourceServerScopeValue() const { DARABONBA_PTR_GET_DEFAULT(resourceServerScopeValue_, "") };
    inline CreateResourceServerScopeRequest& setResourceServerScopeValue(string resourceServerScopeValue) { DARABONBA_PTR_SET_VALUE(resourceServerScopeValue_, resourceServerScopeValue) };


  protected:
    // IDaaS的应用资源ID。
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    shared_ptr<string> authorizationType_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // 权限名称
    // 
    // This parameter is required.
    shared_ptr<string> resourceServerScopeName_ {};
    // 权限类型
    // 
    // This parameter is required.
    shared_ptr<string> resourceServerScopeType_ {};
    // 权限值，大小写不敏感，格式(${ResourceType}:${ResourceOption}:${ResourceRestrict})
    // 
    // This parameter is required.
    shared_ptr<string> resourceServerScopeValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
