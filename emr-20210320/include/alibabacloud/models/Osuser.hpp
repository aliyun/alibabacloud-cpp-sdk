// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OSUSER_HPP_
#define ALIBABACLOUD_MODELS_OSUSER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class OSUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OSUser& obj) { 
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, OSUser& obj) { 
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    OSUser() = default ;
    OSUser(const OSUser &) = default ;
    OSUser(OSUser &&) = default ;
    OSUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OSUser() = default ;
    OSUser& operator=(const OSUser &) = default ;
    OSUser& operator=(OSUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->group_ != nullptr
        && this->password_ != nullptr && this->user_ != nullptr; };
    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline OSUser& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline OSUser& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline OSUser& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // 用户组。
    std::shared_ptr<string> group_ = nullptr;
    // 用户密码。
    std::shared_ptr<string> password_ = nullptr;
    // 用户名称。
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
