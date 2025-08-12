// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateUsersRequestUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class CreateUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoLockTime, autoLockTime_);
      DARABONBA_PTR_TO_JSON(IsLocalAdmin, isLocalAdmin_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PasswordExpireDays, passwordExpireDays_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoLockTime, autoLockTime_);
      DARABONBA_PTR_FROM_JSON(IsLocalAdmin, isLocalAdmin_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PasswordExpireDays, passwordExpireDays_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    CreateUsersRequest() = default ;
    CreateUsersRequest(const CreateUsersRequest &) = default ;
    CreateUsersRequest(CreateUsersRequest &&) = default ;
    CreateUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUsersRequest() = default ;
    CreateUsersRequest& operator=(const CreateUsersRequest &) = default ;
    CreateUsersRequest& operator=(CreateUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoLockTime_ != nullptr
        && this->isLocalAdmin_ != nullptr && this->password_ != nullptr && this->passwordExpireDays_ != nullptr && this->users_ != nullptr; };
    // autoLockTime Field Functions 
    bool hasAutoLockTime() const { return this->autoLockTime_ != nullptr;};
    void deleteAutoLockTime() { this->autoLockTime_ = nullptr;};
    inline string autoLockTime() const { DARABONBA_PTR_GET_DEFAULT(autoLockTime_, "") };
    inline CreateUsersRequest& setAutoLockTime(string autoLockTime) { DARABONBA_PTR_SET_VALUE(autoLockTime_, autoLockTime) };


    // isLocalAdmin Field Functions 
    bool hasIsLocalAdmin() const { return this->isLocalAdmin_ != nullptr;};
    void deleteIsLocalAdmin() { this->isLocalAdmin_ = nullptr;};
    inline bool isLocalAdmin() const { DARABONBA_PTR_GET_DEFAULT(isLocalAdmin_, false) };
    inline CreateUsersRequest& setIsLocalAdmin(bool isLocalAdmin) { DARABONBA_PTR_SET_VALUE(isLocalAdmin_, isLocalAdmin) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateUsersRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // passwordExpireDays Field Functions 
    bool hasPasswordExpireDays() const { return this->passwordExpireDays_ != nullptr;};
    void deletePasswordExpireDays() { this->passwordExpireDays_ = nullptr;};
    inline string passwordExpireDays() const { DARABONBA_PTR_GET_DEFAULT(passwordExpireDays_, "") };
    inline CreateUsersRequest& setPasswordExpireDays(string passwordExpireDays) { DARABONBA_PTR_SET_VALUE(passwordExpireDays_, passwordExpireDays) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<CreateUsersRequestUsers> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<CreateUsersRequestUsers>) };
    inline vector<CreateUsersRequestUsers> users() { DARABONBA_PTR_GET(users_, vector<CreateUsersRequestUsers>) };
    inline CreateUsersRequest& setUsers(const vector<CreateUsersRequestUsers> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline CreateUsersRequest& setUsers(vector<CreateUsersRequestUsers> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The date on which the convenience users are automatically locked.
    std::shared_ptr<string> autoLockTime_ = nullptr;
    std::shared_ptr<bool> isLocalAdmin_ = nullptr;
    // The initial password. If this parameter is left empty, an email for password reset is sent to the specified email address.
    std::shared_ptr<string> password_ = nullptr;
    std::shared_ptr<string> passwordExpireDays_ = nullptr;
    // The information about the convenience user.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateUsersRequestUsers>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
