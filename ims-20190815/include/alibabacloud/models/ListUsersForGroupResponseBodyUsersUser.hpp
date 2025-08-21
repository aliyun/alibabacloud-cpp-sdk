// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSFORGROUPRESPONSEBODYUSERSUSER_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSFORGROUPRESPONSEBODYUSERSUSER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListUsersForGroupResponseBodyUsersUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersForGroupResponseBodyUsersUser& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(JoinDate, joinDate_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersForGroupResponseBodyUsersUser& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(JoinDate, joinDate_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    ListUsersForGroupResponseBodyUsersUser() = default ;
    ListUsersForGroupResponseBodyUsersUser(const ListUsersForGroupResponseBodyUsersUser &) = default ;
    ListUsersForGroupResponseBodyUsersUser(ListUsersForGroupResponseBodyUsersUser &&) = default ;
    ListUsersForGroupResponseBodyUsersUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersForGroupResponseBodyUsersUser() = default ;
    ListUsersForGroupResponseBodyUsersUser& operator=(const ListUsersForGroupResponseBodyUsersUser &) = default ;
    ListUsersForGroupResponseBodyUsersUser& operator=(ListUsersForGroupResponseBodyUsersUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->displayName_ != nullptr
        && this->joinDate_ != nullptr && this->userId_ != nullptr && this->userPrincipalName_ != nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListUsersForGroupResponseBodyUsersUser& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // joinDate Field Functions 
    bool hasJoinDate() const { return this->joinDate_ != nullptr;};
    void deleteJoinDate() { this->joinDate_ = nullptr;};
    inline string joinDate() const { DARABONBA_PTR_GET_DEFAULT(joinDate_, "") };
    inline ListUsersForGroupResponseBodyUsersUser& setJoinDate(string joinDate) { DARABONBA_PTR_SET_VALUE(joinDate_, joinDate) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListUsersForGroupResponseBodyUsersUser& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string userPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline ListUsersForGroupResponseBodyUsersUser& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    // The display name of the RAM user.
    std::shared_ptr<string> displayName_ = nullptr;
    // The time when the RAM user was added to the RAM user group. The time is displayed in UTC.
    std::shared_ptr<string> joinDate_ = nullptr;
    // The ID of the RAM user.
    std::shared_ptr<string> userId_ = nullptr;
    // The logon name of the RAM user.
    std::shared_ptr<string> userPrincipalName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
