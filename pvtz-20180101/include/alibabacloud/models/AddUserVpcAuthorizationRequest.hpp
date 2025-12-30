// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDUSERVPCAUTHORIZATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDUSERVPCAUTHORIZATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class AddUserVpcAuthorizationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddUserVpcAuthorizationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthChannel, authChannel_);
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(AuthorizedUserId, authorizedUserId_);
    };
    friend void from_json(const Darabonba::Json& j, AddUserVpcAuthorizationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthChannel, authChannel_);
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(AuthorizedUserId, authorizedUserId_);
    };
    AddUserVpcAuthorizationRequest() = default ;
    AddUserVpcAuthorizationRequest(const AddUserVpcAuthorizationRequest &) = default ;
    AddUserVpcAuthorizationRequest(AddUserVpcAuthorizationRequest &&) = default ;
    AddUserVpcAuthorizationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddUserVpcAuthorizationRequest() = default ;
    AddUserVpcAuthorizationRequest& operator=(const AddUserVpcAuthorizationRequest &) = default ;
    AddUserVpcAuthorizationRequest& operator=(AddUserVpcAuthorizationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authChannel_ == nullptr
        && this->authCode_ == nullptr && this->authType_ == nullptr && this->authorizedUserId_ == nullptr; };
    // authChannel Field Functions 
    bool hasAuthChannel() const { return this->authChannel_ != nullptr;};
    void deleteAuthChannel() { this->authChannel_ = nullptr;};
    inline string getAuthChannel() const { DARABONBA_PTR_GET_DEFAULT(authChannel_, "") };
    inline AddUserVpcAuthorizationRequest& setAuthChannel(string authChannel) { DARABONBA_PTR_SET_VALUE(authChannel_, authChannel) };


    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string getAuthCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline AddUserVpcAuthorizationRequest& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline AddUserVpcAuthorizationRequest& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // authorizedUserId Field Functions 
    bool hasAuthorizedUserId() const { return this->authorizedUserId_ != nullptr;};
    void deleteAuthorizedUserId() { this->authorizedUserId_ = nullptr;};
    inline int64_t getAuthorizedUserId() const { DARABONBA_PTR_GET_DEFAULT(authorizedUserId_, 0L) };
    inline AddUserVpcAuthorizationRequest& setAuthorizedUserId(int64_t authorizedUserId) { DARABONBA_PTR_SET_VALUE(authorizedUserId_, authorizedUserId) };


  protected:
    // The authorization channel. Valid values:
    // 
    // *   AUTH_CODE: A verification code is used for authorization.
    // *   RESOURCE_DIRECTORY: A resource directory is used for authorization.
    // 
    // Default value: AUTH_CODE.
    shared_ptr<string> authChannel_ {};
    // The verification code.
    // 
    // > 
    // 
    // *   The specified authentication code is used if the value of AuthChannel is left empty or is set to AUTH_CODE.
    // 
    // *   In other cases, a random 6-digit number is used. Example: 123456.
    shared_ptr<string> authCode_ {};
    // The authorization scope. Valid values:
    // 
    // *   NORMAL: general authorization
    // *   CLOUD_PRODUCT: cloud service-related authorization
    shared_ptr<string> authType_ {};
    // The ID of the Alibaba Cloud account to which the permissions on the resources are granted.
    // 
    // >  You can set an effective scope across accounts only by using an Alibaba Cloud account instead of a RAM user. You can set an effective scope across accounts registered on the same site. For example, you can perform the operation across accounts that are both registered on the Alibaba Cloud China site or Alibaba Cloud international site. You cannot set an effective scope across accounts registered on different sites. For example, you cannot perform the operation across accounts that are separately registered on the Alibaba Cloud China site and Alibaba Cloud international site.
    // 
    // This parameter is required.
    shared_ptr<int64_t> authorizedUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
