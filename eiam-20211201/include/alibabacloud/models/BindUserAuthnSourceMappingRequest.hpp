// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDUSERAUTHNSOURCEMAPPINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDUSERAUTHNSOURCEMAPPINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class BindUserAuthnSourceMappingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindUserAuthnSourceMappingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(UserExternalId, userExternalId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, BindUserAuthnSourceMappingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(UserExternalId, userExternalId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    BindUserAuthnSourceMappingRequest() = default ;
    BindUserAuthnSourceMappingRequest(const BindUserAuthnSourceMappingRequest &) = default ;
    BindUserAuthnSourceMappingRequest(BindUserAuthnSourceMappingRequest &&) = default ;
    BindUserAuthnSourceMappingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindUserAuthnSourceMappingRequest() = default ;
    BindUserAuthnSourceMappingRequest& operator=(const BindUserAuthnSourceMappingRequest &) = default ;
    BindUserAuthnSourceMappingRequest& operator=(BindUserAuthnSourceMappingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identityProviderId_ == nullptr
        && return this->instanceId_ == nullptr && return this->userExternalId_ == nullptr && return this->userId_ == nullptr; };
    // identityProviderId Field Functions 
    bool hasIdentityProviderId() const { return this->identityProviderId_ != nullptr;};
    void deleteIdentityProviderId() { this->identityProviderId_ = nullptr;};
    inline string identityProviderId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderId_, "") };
    inline BindUserAuthnSourceMappingRequest& setIdentityProviderId(string identityProviderId) { DARABONBA_PTR_SET_VALUE(identityProviderId_, identityProviderId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline BindUserAuthnSourceMappingRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // userExternalId Field Functions 
    bool hasUserExternalId() const { return this->userExternalId_ != nullptr;};
    void deleteUserExternalId() { this->userExternalId_ = nullptr;};
    inline string userExternalId() const { DARABONBA_PTR_GET_DEFAULT(userExternalId_, "") };
    inline BindUserAuthnSourceMappingRequest& setUserExternalId(string userExternalId) { DARABONBA_PTR_SET_VALUE(userExternalId_, userExternalId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline BindUserAuthnSourceMappingRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // 来源Idp Id
    // 
    // This parameter is required.
    std::shared_ptr<string> identityProviderId_ = nullptr;
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // 外部关联ID
    // 
    // This parameter is required.
    std::shared_ptr<string> userExternalId_ = nullptr;
    // 用户ID
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
