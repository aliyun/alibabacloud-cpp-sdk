// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERSREQUESTUSER_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERSREQUESTUSER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class CreateUsersRequestUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUsersRequestUser& obj) { 
      DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUsersRequestUser& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    CreateUsersRequestUser() = default ;
    CreateUsersRequestUser(const CreateUsersRequestUser &) = default ;
    CreateUsersRequestUser(CreateUsersRequestUser &&) = default ;
    CreateUsersRequestUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUsersRequestUser() = default ;
    CreateUsersRequestUser& operator=(const CreateUsersRequestUser &) = default ;
    CreateUsersRequestUser& operator=(CreateUsersRequestUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authKey_ == nullptr
        && return this->group_ == nullptr && return this->password_ == nullptr && return this->userName_ == nullptr; };
    // authKey Field Functions 
    bool hasAuthKey() const { return this->authKey_ != nullptr;};
    void deleteAuthKey() { this->authKey_ = nullptr;};
    inline string authKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
    inline CreateUsersRequestUser& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline CreateUsersRequestUser& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateUsersRequestUser& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateUsersRequestUser& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The public key of the user.
    // 
    // You can add up to 20 users in a call.
    // 
    // Specify one of the Password and AuthKey parameters. The AuthKey parameter takes effect only when the cluster authentication method is set to Key. Key authentication is not recommended.
    std::shared_ptr<string> authKey_ = nullptr;
    // The permission group to which the user belongs. Valid values:
    // 
    // users: ordinary permissions, which are suitable for ordinary users that need only to submit and debug jobs. wheel: sudo permissions, which are suitable for administrators who need to manage clusters. In addition to submitting and debugging jobs, you can also run sudo commands to install software and restart nodes. You can add up to 20 users in a call.
    std::shared_ptr<string> group_ = nullptr;
    // The password of the user. The password must be 6 to 30 characters in length and must contain three of the following character types:
    // 
    // *   Uppercase letters
    // *   Lowercase letters
    // *   Digits
    // *   Special characters ()~!@#$%^&\\*-_+=|{}[]:;\\"/<>,.?/
    // 
    // You can add up to 20 users in a call.
    // 
    // Specify one of the Password and AuthKey parameters. The Password parameter takes effect only when the cluster authentication method is set to Password. Password authentication is recommended.
    std::shared_ptr<string> password_ = nullptr;
    // The username. The username must be 1 to 30 characters in length. It must start with a letter and can contain digits, letters, and periods (.).
    // 
    // You can add up to 20 users in a call.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
