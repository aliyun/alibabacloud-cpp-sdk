// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAUTHORIZATIONRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAUTHORIZATIONRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class DeleteAuthorizationResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAuthorizationResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationResourceId, authorizationResourceId_);
      DARABONBA_PTR_TO_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAuthorizationResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationResourceId, authorizationResourceId_);
      DARABONBA_PTR_FROM_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DeleteAuthorizationResourceRequest() = default ;
    DeleteAuthorizationResourceRequest(const DeleteAuthorizationResourceRequest &) = default ;
    DeleteAuthorizationResourceRequest(DeleteAuthorizationResourceRequest &&) = default ;
    DeleteAuthorizationResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAuthorizationResourceRequest() = default ;
    DeleteAuthorizationResourceRequest& operator=(const DeleteAuthorizationResourceRequest &) = default ;
    DeleteAuthorizationResourceRequest& operator=(DeleteAuthorizationResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationResourceId_ == nullptr
        && this->authorizationRuleId_ == nullptr && this->instanceId_ == nullptr; };
    // authorizationResourceId Field Functions 
    bool hasAuthorizationResourceId() const { return this->authorizationResourceId_ != nullptr;};
    void deleteAuthorizationResourceId() { this->authorizationResourceId_ = nullptr;};
    inline string getAuthorizationResourceId() const { DARABONBA_PTR_GET_DEFAULT(authorizationResourceId_, "") };
    inline DeleteAuthorizationResourceRequest& setAuthorizationResourceId(string authorizationResourceId) { DARABONBA_PTR_SET_VALUE(authorizationResourceId_, authorizationResourceId) };


    // authorizationRuleId Field Functions 
    bool hasAuthorizationRuleId() const { return this->authorizationRuleId_ != nullptr;};
    void deleteAuthorizationRuleId() { this->authorizationRuleId_ = nullptr;};
    inline string getAuthorizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleId_, "") };
    inline DeleteAuthorizationResourceRequest& setAuthorizationRuleId(string authorizationRuleId) { DARABONBA_PTR_SET_VALUE(authorizationRuleId_, authorizationRuleId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteAuthorizationResourceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // 授权资源标识。
    // 
    // This parameter is required.
    shared_ptr<string> authorizationResourceId_ {};
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
