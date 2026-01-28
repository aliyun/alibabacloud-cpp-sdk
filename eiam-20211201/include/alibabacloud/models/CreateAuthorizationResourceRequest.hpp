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
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAuthorizationResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationResourceEntityId, authorizationResourceEntityId_);
      DARABONBA_PTR_FROM_JSON(AuthorizationResourceEntityType, authorizationResourceEntityType_);
      DARABONBA_PTR_FROM_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
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
    virtual bool empty() const override { return this->authorizationResourceEntityId_ == nullptr
        && this->authorizationResourceEntityType_ == nullptr && this->authorizationRuleId_ == nullptr && this->clientToken_ == nullptr && this->instanceId_ == nullptr; };
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


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateAuthorizationResourceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // 授权资源关联的资源标识。
    // 
    // This parameter is required.
    shared_ptr<string> authorizationResourceEntityId_ {};
    // 授权资源的资源类型。枚举取值:asset(资产)、credential(凭据)、cloudAccountRole(云账号角色)。
    // 
    // This parameter is required.
    shared_ptr<string> authorizationResourceEntityType_ {};
    // 授权规则标识。
    // 
    // This parameter is required.
    shared_ptr<string> authorizationRuleId_ {};
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
