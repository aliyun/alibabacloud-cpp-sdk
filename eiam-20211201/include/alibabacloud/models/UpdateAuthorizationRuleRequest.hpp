// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAUTHORIZATIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAUTHORIZATIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateAuthorizationRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAuthorizationRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationResourceScope, authorizationResourceScope_);
      DARABONBA_PTR_TO_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_TO_JSON(AuthorizationRuleName, authorizationRuleName_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAuthorizationRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationResourceScope, authorizationResourceScope_);
      DARABONBA_PTR_FROM_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_FROM_JSON(AuthorizationRuleName, authorizationRuleName_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    UpdateAuthorizationRuleRequest() = default ;
    UpdateAuthorizationRuleRequest(const UpdateAuthorizationRuleRequest &) = default ;
    UpdateAuthorizationRuleRequest(UpdateAuthorizationRuleRequest &&) = default ;
    UpdateAuthorizationRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAuthorizationRuleRequest() = default ;
    UpdateAuthorizationRuleRequest& operator=(const UpdateAuthorizationRuleRequest &) = default ;
    UpdateAuthorizationRuleRequest& operator=(UpdateAuthorizationRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationResourceScope_ == nullptr
        && this->authorizationRuleId_ == nullptr && this->authorizationRuleName_ == nullptr && this->clientToken_ == nullptr && this->instanceId_ == nullptr; };
    // authorizationResourceScope Field Functions 
    bool hasAuthorizationResourceScope() const { return this->authorizationResourceScope_ != nullptr;};
    void deleteAuthorizationResourceScope() { this->authorizationResourceScope_ = nullptr;};
    inline string getAuthorizationResourceScope() const { DARABONBA_PTR_GET_DEFAULT(authorizationResourceScope_, "") };
    inline UpdateAuthorizationRuleRequest& setAuthorizationResourceScope(string authorizationResourceScope) { DARABONBA_PTR_SET_VALUE(authorizationResourceScope_, authorizationResourceScope) };


    // authorizationRuleId Field Functions 
    bool hasAuthorizationRuleId() const { return this->authorizationRuleId_ != nullptr;};
    void deleteAuthorizationRuleId() { this->authorizationRuleId_ = nullptr;};
    inline string getAuthorizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleId_, "") };
    inline UpdateAuthorizationRuleRequest& setAuthorizationRuleId(string authorizationRuleId) { DARABONBA_PTR_SET_VALUE(authorizationRuleId_, authorizationRuleId) };


    // authorizationRuleName Field Functions 
    bool hasAuthorizationRuleName() const { return this->authorizationRuleName_ != nullptr;};
    void deleteAuthorizationRuleName() { this->authorizationRuleName_ = nullptr;};
    inline string getAuthorizationRuleName() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleName_, "") };
    inline UpdateAuthorizationRuleRequest& setAuthorizationRuleName(string authorizationRuleName) { DARABONBA_PTR_SET_VALUE(authorizationRuleName_, authorizationRuleName) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateAuthorizationRuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateAuthorizationRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // 授权资源范围，枚举值：global（Project下的所有资源）、custom（自定义资源范围）。
    shared_ptr<string> authorizationResourceScope_ {};
    // 授权规则标识。
    // 
    // This parameter is required.
    shared_ptr<string> authorizationRuleId_ {};
    // 授权规则名称，长度限制最大64个字符。
    shared_ptr<string> authorizationRuleName_ {};
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
