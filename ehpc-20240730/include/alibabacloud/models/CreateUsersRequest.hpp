// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class CreateUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(User, user_);
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
    class User : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const User& obj) { 
        DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
        DARABONBA_PTR_TO_JSON(Group, group_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, User& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
        DARABONBA_PTR_FROM_JSON(Group, group_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      User() = default ;
      User(const User &) = default ;
      User(User &&) = default ;
      User(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~User() = default ;
      User& operator=(const User &) = default ;
      User& operator=(User &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authKey_ == nullptr
        && this->group_ == nullptr && this->password_ == nullptr && this->userName_ == nullptr; };
      // authKey Field Functions 
      bool hasAuthKey() const { return this->authKey_ != nullptr;};
      void deleteAuthKey() { this->authKey_ = nullptr;};
      inline string getAuthKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
      inline User& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


      // group Field Functions 
      bool hasGroup() const { return this->group_ != nullptr;};
      void deleteGroup() { this->group_ = nullptr;};
      inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
      inline User& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline User& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline User& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The public key of the user.
      // 
      // You can add up to 20 users in a call.
      // 
      // Specify one of the Password and AuthKey parameters. The AuthKey parameter takes effect only when the cluster authentication method is set to Key. Key authentication is not recommended.
      shared_ptr<string> authKey_ {};
      // The permission group to which the user belongs. Valid values:
      // 
      // users: ordinary permissions, which are suitable for ordinary users that need only to submit and debug jobs. wheel: sudo permissions, which are suitable for administrators who need to manage clusters. In addition to submitting and debugging jobs, you can also run sudo commands to install software and restart nodes. You can add up to 20 users in a call.
      shared_ptr<string> group_ {};
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
      shared_ptr<string> password_ {};
      // The username. The username must be 1 to 30 characters in length. It must start with a letter and can contain digits, letters, and periods (.).
      // 
      // You can add up to 20 users in a call.
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->user_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateUsersRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const vector<CreateUsersRequest::User> & getUser() const { DARABONBA_PTR_GET_CONST(user_, vector<CreateUsersRequest::User>) };
    inline vector<CreateUsersRequest::User> getUser() { DARABONBA_PTR_GET(user_, vector<CreateUsersRequest::User>) };
    inline CreateUsersRequest& setUser(const vector<CreateUsersRequest::User> & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline CreateUsersRequest& setUser(vector<CreateUsersRequest::User> && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The users that you want to add.
    shared_ptr<vector<CreateUsersRequest::User>> user_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
