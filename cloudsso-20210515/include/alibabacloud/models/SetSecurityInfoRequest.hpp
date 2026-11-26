// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSECURITYINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSECURITYINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class SetSecurityInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSecurityInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(SecurityEmail, securityEmail_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(VerifyType, verifyType_);
    };
    friend void from_json(const Darabonba::Json& j, SetSecurityInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(SecurityEmail, securityEmail_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(VerifyType, verifyType_);
    };
    SetSecurityInfoRequest() = default ;
    SetSecurityInfoRequest(const SetSecurityInfoRequest &) = default ;
    SetSecurityInfoRequest(SetSecurityInfoRequest &&) = default ;
    SetSecurityInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSecurityInfoRequest() = default ;
    SetSecurityInfoRequest& operator=(const SetSecurityInfoRequest &) = default ;
    SetSecurityInfoRequest& operator=(SetSecurityInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->securityEmail_ == nullptr && this->userId_ == nullptr && this->verifyType_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline SetSecurityInfoRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // securityEmail Field Functions 
    bool hasSecurityEmail() const { return this->securityEmail_ != nullptr;};
    void deleteSecurityEmail() { this->securityEmail_ = nullptr;};
    inline string getSecurityEmail() const { DARABONBA_PTR_GET_DEFAULT(securityEmail_, "") };
    inline SetSecurityInfoRequest& setSecurityEmail(string securityEmail) { DARABONBA_PTR_SET_VALUE(securityEmail_, securityEmail) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SetSecurityInfoRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // verifyType Field Functions 
    bool hasVerifyType() const { return this->verifyType_ != nullptr;};
    void deleteVerifyType() { this->verifyType_ = nullptr;};
    inline string getVerifyType() const { DARABONBA_PTR_GET_DEFAULT(verifyType_, "") };
    inline SetSecurityInfoRequest& setVerifyType(string verifyType) { DARABONBA_PTR_SET_VALUE(verifyType_, verifyType) };


  protected:
    // The directory ID.
    // 
    // This parameter is required.
    shared_ptr<string> directoryId_ {};
    // The security email address of the user.
    // 
    // The value can be up to 64 characters in length, must conform to the standard email format, and cannot contain whitespace characters. The security email address of each user in the same directory must be unique. The uniqueness check is case-insensitive, but the original case is preserved when the address is saved.
    // 
    // This parameter is required.
    shared_ptr<string> securityEmail_ {};
    // The user ID.
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
    // The verification type for the security information. Valid values:
    // 
    // - SecurityEmail: security email address.
    // 
    // This parameter is required.
    shared_ptr<string> verifyType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
