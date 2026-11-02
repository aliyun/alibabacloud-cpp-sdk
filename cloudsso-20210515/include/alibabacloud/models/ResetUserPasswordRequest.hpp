// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETUSERPASSWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETUSERPASSWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class ResetUserPasswordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetUserPasswordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(GenerateRandomPassword, generateRandomPassword_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(RequirePasswordResetForNextLogin, requirePasswordResetForNextLogin_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetUserPasswordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(GenerateRandomPassword, generateRandomPassword_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(RequirePasswordResetForNextLogin, requirePasswordResetForNextLogin_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ResetUserPasswordRequest() = default ;
    ResetUserPasswordRequest(const ResetUserPasswordRequest &) = default ;
    ResetUserPasswordRequest(ResetUserPasswordRequest &&) = default ;
    ResetUserPasswordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetUserPasswordRequest() = default ;
    ResetUserPasswordRequest& operator=(const ResetUserPasswordRequest &) = default ;
    ResetUserPasswordRequest& operator=(ResetUserPasswordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->generateRandomPassword_ == nullptr && this->password_ == nullptr && this->requirePasswordResetForNextLogin_ == nullptr && this->userId_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline ResetUserPasswordRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // generateRandomPassword Field Functions 
    bool hasGenerateRandomPassword() const { return this->generateRandomPassword_ != nullptr;};
    void deleteGenerateRandomPassword() { this->generateRandomPassword_ = nullptr;};
    inline bool getGenerateRandomPassword() const { DARABONBA_PTR_GET_DEFAULT(generateRandomPassword_, false) };
    inline ResetUserPasswordRequest& setGenerateRandomPassword(bool generateRandomPassword) { DARABONBA_PTR_SET_VALUE(generateRandomPassword_, generateRandomPassword) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ResetUserPasswordRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // requirePasswordResetForNextLogin Field Functions 
    bool hasRequirePasswordResetForNextLogin() const { return this->requirePasswordResetForNextLogin_ != nullptr;};
    void deleteRequirePasswordResetForNextLogin() { this->requirePasswordResetForNextLogin_ = nullptr;};
    inline bool getRequirePasswordResetForNextLogin() const { DARABONBA_PTR_GET_DEFAULT(requirePasswordResetForNextLogin_, false) };
    inline ResetUserPasswordRequest& setRequirePasswordResetForNextLogin(bool requirePasswordResetForNextLogin) { DARABONBA_PTR_SET_VALUE(requirePasswordResetForNextLogin_, requirePasswordResetForNextLogin) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ResetUserPasswordRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The directory ID.
    shared_ptr<string> directoryId_ {};
    // Specifies whether to automatically generate a password. Valid values:
    // 
    // - True: The password is automatically generated.
    // - False (default): The password is manually specified.
    shared_ptr<bool> generateRandomPassword_ {};
    // The new password.
    // 
    // Format: The password must contain at least one uppercase letter, one lowercase letter, one digit, and one special character.
    // 
    // Length: 8 to 32 characters.
    // 
    // > If GenerateRandomPassword is set to False, you must specify Password.
    shared_ptr<string> password_ {};
    // Specifies whether the user must reset the password upon the next logon. Valid values:
    // 
    // - True: The user must reset the password.
    // - False (default): The user does not need to reset the password.
    shared_ptr<bool> requirePasswordResetForNextLogin_ {};
    // The user ID.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
