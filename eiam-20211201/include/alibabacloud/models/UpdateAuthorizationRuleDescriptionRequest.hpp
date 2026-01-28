// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAUTHORIZATIONRULEDESCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAUTHORIZATIONRULEDESCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateAuthorizationRuleDescriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAuthorizationRuleDescriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAuthorizationRuleDescriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationRuleId, authorizationRuleId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    UpdateAuthorizationRuleDescriptionRequest() = default ;
    UpdateAuthorizationRuleDescriptionRequest(const UpdateAuthorizationRuleDescriptionRequest &) = default ;
    UpdateAuthorizationRuleDescriptionRequest(UpdateAuthorizationRuleDescriptionRequest &&) = default ;
    UpdateAuthorizationRuleDescriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAuthorizationRuleDescriptionRequest() = default ;
    UpdateAuthorizationRuleDescriptionRequest& operator=(const UpdateAuthorizationRuleDescriptionRequest &) = default ;
    UpdateAuthorizationRuleDescriptionRequest& operator=(UpdateAuthorizationRuleDescriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationRuleId_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr; };
    // authorizationRuleId Field Functions 
    bool hasAuthorizationRuleId() const { return this->authorizationRuleId_ != nullptr;};
    void deleteAuthorizationRuleId() { this->authorizationRuleId_ = nullptr;};
    inline string getAuthorizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleId_, "") };
    inline UpdateAuthorizationRuleDescriptionRequest& setAuthorizationRuleId(string authorizationRuleId) { DARABONBA_PTR_SET_VALUE(authorizationRuleId_, authorizationRuleId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateAuthorizationRuleDescriptionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAuthorizationRuleDescriptionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateAuthorizationRuleDescriptionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // 授权规则标识。
    // 
    // This parameter is required.
    shared_ptr<string> authorizationRuleId_ {};
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // 授权规则备注描述，长度限制最大128个字符。
    shared_ptr<string> description_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
