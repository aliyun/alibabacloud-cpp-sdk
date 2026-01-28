// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEGROUPFROMAUTHORIZATIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEGROUPFROMAUTHORIZATIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class RemoveGroupFromAuthorizationRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveGroupFromAuthorizationRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveGroupFromAuthorizationRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    RemoveGroupFromAuthorizationRuleRequest() = default ;
    RemoveGroupFromAuthorizationRuleRequest(const RemoveGroupFromAuthorizationRuleRequest &) = default ;
    RemoveGroupFromAuthorizationRuleRequest(RemoveGroupFromAuthorizationRuleRequest &&) = default ;
    RemoveGroupFromAuthorizationRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveGroupFromAuthorizationRuleRequest() = default ;
    RemoveGroupFromAuthorizationRuleRequest& operator=(const RemoveGroupFromAuthorizationRuleRequest &) = default ;
    RemoveGroupFromAuthorizationRuleRequest& operator=(RemoveGroupFromAuthorizationRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationRuleId_ == nullptr
        && this->groupId_ == nullptr && this->instanceId_ == nullptr; };
    // authorizationRuleId Field Functions 
    bool hasAuthorizationRuleId() const { return this->authorizationRuleId_ != nullptr;};
    void deleteAuthorizationRuleId() { this->authorizationRuleId_ = nullptr;};
    inline string getAuthorizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleId_, "") };
    inline RemoveGroupFromAuthorizationRuleRequest& setAuthorizationRuleId(string authorizationRuleId) { DARABONBA_PTR_SET_VALUE(authorizationRuleId_, authorizationRuleId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline RemoveGroupFromAuthorizationRuleRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RemoveGroupFromAuthorizationRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // 授权规则标识。
    // 
    // This parameter is required.
    shared_ptr<string> authorizationRuleId_ {};
    // 组ID。
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
