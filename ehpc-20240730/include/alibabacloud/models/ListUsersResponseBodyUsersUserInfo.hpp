// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYUSERSUSERINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODYUSERSUSERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListUsersResponseBodyUsersUserInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersResponseBodyUsersUserInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AddTime, addTime_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersResponseBodyUsersUserInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AddTime, addTime_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    ListUsersResponseBodyUsersUserInfo() = default ;
    ListUsersResponseBodyUsersUserInfo(const ListUsersResponseBodyUsersUserInfo &) = default ;
    ListUsersResponseBodyUsersUserInfo(ListUsersResponseBodyUsersUserInfo &&) = default ;
    ListUsersResponseBodyUsersUserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersResponseBodyUsersUserInfo() = default ;
    ListUsersResponseBodyUsersUserInfo& operator=(const ListUsersResponseBodyUsersUserInfo &) = default ;
    ListUsersResponseBodyUsersUserInfo& operator=(ListUsersResponseBodyUsersUserInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addTime_ == nullptr
        && return this->group_ == nullptr && return this->groupId_ == nullptr && return this->userId_ == nullptr && return this->userName_ == nullptr; };
    // addTime Field Functions 
    bool hasAddTime() const { return this->addTime_ != nullptr;};
    void deleteAddTime() { this->addTime_ = nullptr;};
    inline string addTime() const { DARABONBA_PTR_GET_DEFAULT(addTime_, "") };
    inline ListUsersResponseBodyUsersUserInfo& setAddTime(string addTime) { DARABONBA_PTR_SET_VALUE(addTime_, addTime) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline ListUsersResponseBodyUsersUserInfo& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListUsersResponseBodyUsersUserInfo& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListUsersResponseBodyUsersUserInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ListUsersResponseBodyUsersUserInfo& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The time when the user was first added.
    std::shared_ptr<string> addTime_ = nullptr;
    // The name of the permission group. Valid values:
    // 
    // users: ordinary permissions, which are suitable for regular users that need only to submit and debug jobs.
    // 
    // wheel: sudo permissions, which are suitable for administrators who need to manage clusters. In addition to submitting and debugging jobs, you can also run sudo commands to install software and restart nodes.
    std::shared_ptr<string> group_ = nullptr;
    // The permission group ID.
    std::shared_ptr<string> groupId_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
    // The username.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
