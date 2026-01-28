// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEAUTHORIZATIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEAUTHORIZATIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class DisableAuthorizationRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableAuthorizationRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableAuthorizationRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DisableAuthorizationRuleRequest() = default ;
    DisableAuthorizationRuleRequest(const DisableAuthorizationRuleRequest &) = default ;
    DisableAuthorizationRuleRequest(DisableAuthorizationRuleRequest &&) = default ;
    DisableAuthorizationRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableAuthorizationRuleRequest() = default ;
    DisableAuthorizationRuleRequest& operator=(const DisableAuthorizationRuleRequest &) = default ;
    DisableAuthorizationRuleRequest& operator=(DisableAuthorizationRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationRuleId_ == nullptr
        && this->clientToken_ == nullptr && this->instanceId_ == nullptr; };
    // authorizationRuleId Field Functions 
    bool hasAuthorizationRuleId() const { return this->authorizationRuleId_ != nullptr;};
    void deleteAuthorizationRuleId() { this->authorizationRuleId_ = nullptr;};
    inline string getAuthorizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleId_, "") };
    inline DisableAuthorizationRuleRequest& setAuthorizationRuleId(string authorizationRuleId) { DARABONBA_PTR_SET_VALUE(authorizationRuleId_, authorizationRuleId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DisableAuthorizationRuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DisableAuthorizationRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
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
