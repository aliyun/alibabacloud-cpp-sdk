// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEAPPLICATIONFROMAUTHORIZATIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEAPPLICATIONFROMAUTHORIZATIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class RemoveApplicationFromAuthorizationRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveApplicationFromAuthorizationRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveApplicationFromAuthorizationRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    RemoveApplicationFromAuthorizationRuleRequest() = default ;
    RemoveApplicationFromAuthorizationRuleRequest(const RemoveApplicationFromAuthorizationRuleRequest &) = default ;
    RemoveApplicationFromAuthorizationRuleRequest(RemoveApplicationFromAuthorizationRuleRequest &&) = default ;
    RemoveApplicationFromAuthorizationRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveApplicationFromAuthorizationRuleRequest() = default ;
    RemoveApplicationFromAuthorizationRuleRequest& operator=(const RemoveApplicationFromAuthorizationRuleRequest &) = default ;
    RemoveApplicationFromAuthorizationRuleRequest& operator=(RemoveApplicationFromAuthorizationRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->authorizationRuleId_ == nullptr && this->instanceId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline RemoveApplicationFromAuthorizationRuleRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // authorizationRuleId Field Functions 
    bool hasAuthorizationRuleId() const { return this->authorizationRuleId_ != nullptr;};
    void deleteAuthorizationRuleId() { this->authorizationRuleId_ = nullptr;};
    inline string getAuthorizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleId_, "") };
    inline RemoveApplicationFromAuthorizationRuleRequest& setAuthorizationRuleId(string authorizationRuleId) { DARABONBA_PTR_SET_VALUE(authorizationRuleId_, authorizationRuleId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RemoveApplicationFromAuthorizationRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // 应用 ID。
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // 授权规则标识。
    // 
    // This parameter is required.
    shared_ptr<string> authorizationRuleId_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
