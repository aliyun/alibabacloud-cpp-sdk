// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERSREQUESTUSERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERSREQUESTUSERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class CreateUsersRequestUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUsersRequestUsers& obj) { 
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUsersRequestUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    CreateUsersRequestUsers() = default ;
    CreateUsersRequestUsers(const CreateUsersRequestUsers &) = default ;
    CreateUsersRequestUsers(CreateUsersRequestUsers &&) = default ;
    CreateUsersRequestUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUsersRequestUsers() = default ;
    CreateUsersRequestUsers& operator=(const CreateUsersRequestUsers &) = default ;
    CreateUsersRequestUsers& operator=(CreateUsersRequestUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->password_ == nullptr
        && return this->userName_ == nullptr; };
    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateUsersRequestUsers& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline CreateUsersRequestUsers& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // 用户密码。
    // 
    // This parameter is required.
    std::shared_ptr<string> password_ = nullptr;
    // 用户名。
    // 
    // This parameter is required.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
