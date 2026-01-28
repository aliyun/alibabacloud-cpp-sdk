// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEUSERFROMAUTHORIZATIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEUSERFROMAUTHORIZATIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class RemoveUserFromAuthorizationRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveUserFromAuthorizationRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveUserFromAuthorizationRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    RemoveUserFromAuthorizationRuleRequest() = default ;
    RemoveUserFromAuthorizationRuleRequest(const RemoveUserFromAuthorizationRuleRequest &) = default ;
    RemoveUserFromAuthorizationRuleRequest(RemoveUserFromAuthorizationRuleRequest &&) = default ;
    RemoveUserFromAuthorizationRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveUserFromAuthorizationRuleRequest() = default ;
    RemoveUserFromAuthorizationRuleRequest& operator=(const RemoveUserFromAuthorizationRuleRequest &) = default ;
    RemoveUserFromAuthorizationRuleRequest& operator=(RemoveUserFromAuthorizationRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationRuleId_ == nullptr
        && this->instanceId_ == nullptr && this->userId_ == nullptr; };
    // authorizationRuleId Field Functions 
    bool hasAuthorizationRuleId() const { return this->authorizationRuleId_ != nullptr;};
    void deleteAuthorizationRuleId() { this->authorizationRuleId_ = nullptr;};
    inline string getAuthorizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleId_, "") };
    inline RemoveUserFromAuthorizationRuleRequest& setAuthorizationRuleId(string authorizationRuleId) { DARABONBA_PTR_SET_VALUE(authorizationRuleId_, authorizationRuleId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RemoveUserFromAuthorizationRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline RemoveUserFromAuthorizationRuleRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // 授权规则标识。
    // 
    // This parameter is required.
    shared_ptr<string> authorizationRuleId_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // 账户ID。
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
