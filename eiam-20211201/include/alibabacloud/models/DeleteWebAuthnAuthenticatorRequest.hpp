// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWEBAUTHNAUTHENTICATORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWEBAUTHNAUTHENTICATORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class DeleteWebAuthnAuthenticatorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWebAuthnAuthenticatorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthenticatorId, authenticatorId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWebAuthnAuthenticatorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthenticatorId, authenticatorId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DeleteWebAuthnAuthenticatorRequest() = default ;
    DeleteWebAuthnAuthenticatorRequest(const DeleteWebAuthnAuthenticatorRequest &) = default ;
    DeleteWebAuthnAuthenticatorRequest(DeleteWebAuthnAuthenticatorRequest &&) = default ;
    DeleteWebAuthnAuthenticatorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWebAuthnAuthenticatorRequest() = default ;
    DeleteWebAuthnAuthenticatorRequest& operator=(const DeleteWebAuthnAuthenticatorRequest &) = default ;
    DeleteWebAuthnAuthenticatorRequest& operator=(DeleteWebAuthnAuthenticatorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authenticatorId_ == nullptr
        && return this->instanceId_ == nullptr && return this->userId_ == nullptr; };
    // authenticatorId Field Functions 
    bool hasAuthenticatorId() const { return this->authenticatorId_ != nullptr;};
    void deleteAuthenticatorId() { this->authenticatorId_ = nullptr;};
    inline string authenticatorId() const { DARABONBA_PTR_GET_DEFAULT(authenticatorId_, "") };
    inline DeleteWebAuthnAuthenticatorRequest& setAuthenticatorId(string authenticatorId) { DARABONBA_PTR_SET_VALUE(authenticatorId_, authenticatorId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteWebAuthnAuthenticatorRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DeleteWebAuthnAuthenticatorRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // 认证器ID
    // 
    // This parameter is required.
    std::shared_ptr<string> authenticatorId_ = nullptr;
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // UserID
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
