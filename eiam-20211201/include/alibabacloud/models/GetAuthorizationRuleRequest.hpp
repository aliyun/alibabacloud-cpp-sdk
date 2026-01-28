// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHORIZATIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHORIZATIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetAuthorizationRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthorizationRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthorizationRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetAuthorizationRuleRequest() = default ;
    GetAuthorizationRuleRequest(const GetAuthorizationRuleRequest &) = default ;
    GetAuthorizationRuleRequest(GetAuthorizationRuleRequest &&) = default ;
    GetAuthorizationRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthorizationRuleRequest() = default ;
    GetAuthorizationRuleRequest& operator=(const GetAuthorizationRuleRequest &) = default ;
    GetAuthorizationRuleRequest& operator=(GetAuthorizationRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationRuleId_ == nullptr
        && this->instanceId_ == nullptr; };
    // authorizationRuleId Field Functions 
    bool hasAuthorizationRuleId() const { return this->authorizationRuleId_ != nullptr;};
    void deleteAuthorizationRuleId() { this->authorizationRuleId_ = nullptr;};
    inline string getAuthorizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleId_, "") };
    inline GetAuthorizationRuleRequest& setAuthorizationRuleId(string authorizationRuleId) { DARABONBA_PTR_SET_VALUE(authorizationRuleId_, authorizationRuleId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetAuthorizationRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
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
