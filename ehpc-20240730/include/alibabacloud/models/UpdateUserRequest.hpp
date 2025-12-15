// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class UpdateUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    UpdateUserRequest() = default ;
    UpdateUserRequest(const UpdateUserRequest &) = default ;
    UpdateUserRequest(UpdateUserRequest &&) = default ;
    UpdateUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserRequest() = default ;
    UpdateUserRequest& operator=(const UpdateUserRequest &) = default ;
    UpdateUserRequest& operator=(UpdateUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->group_ == nullptr && return this->password_ == nullptr && return this->userName_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateUserRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline UpdateUserRequest& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline UpdateUserRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline UpdateUserRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The user group attribute of the user that you want to update. Valid values:
    // 
    // *   users: ordinary permissions, which are suitable for ordinary users that need only to submit and debug jobs.
    // *   wheel: sudo permissions, which are suitable for administrators who need to manage clusters. In addition to submitting and debugging jobs, you can also run sudo commands to install software and restart nodes.
    std::shared_ptr<string> group_ = nullptr;
    // The password attribute of the user that you want to update. The password must be 6 to 30 characters in length and must contain three of the following four character types:
    // 
    // *   Uppercase letters
    // *   Lowercase letters
    // *   Digits
    // *   Special characters ()~!@#$%^&\\*-_+=|{}[]:;\\"/<>,.?/
    std::shared_ptr<string> password_ = nullptr;
    // The username.
    // 
    // This parameter is required.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
