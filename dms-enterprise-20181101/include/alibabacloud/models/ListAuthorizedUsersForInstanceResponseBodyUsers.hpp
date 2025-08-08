// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDUSERSFORINSTANCERESPONSEBODYUSERS_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDUSERSFORINSTANCERESPONSEBODYUSERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListAuthorizedUsersForInstanceResponseBodyUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedUsersForInstanceResponseBodyUsers& obj) { 
      DARABONBA_PTR_TO_JSON(Uid, uid_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserNickName, userNickName_);
      DARABONBA_PTR_TO_JSON(UserRealName, userRealName_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedUsersForInstanceResponseBodyUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserNickName, userNickName_);
      DARABONBA_PTR_FROM_JSON(UserRealName, userRealName_);
    };
    ListAuthorizedUsersForInstanceResponseBodyUsers() = default ;
    ListAuthorizedUsersForInstanceResponseBodyUsers(const ListAuthorizedUsersForInstanceResponseBodyUsers &) = default ;
    ListAuthorizedUsersForInstanceResponseBodyUsers(ListAuthorizedUsersForInstanceResponseBodyUsers &&) = default ;
    ListAuthorizedUsersForInstanceResponseBodyUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedUsersForInstanceResponseBodyUsers() = default ;
    ListAuthorizedUsersForInstanceResponseBodyUsers& operator=(const ListAuthorizedUsersForInstanceResponseBodyUsers &) = default ;
    ListAuthorizedUsersForInstanceResponseBodyUsers& operator=(ListAuthorizedUsersForInstanceResponseBodyUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->uid_ != nullptr
        && this->userId_ != nullptr && this->userNickName_ != nullptr && this->userRealName_ != nullptr; };
    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline ListAuthorizedUsersForInstanceResponseBodyUsers& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListAuthorizedUsersForInstanceResponseBodyUsers& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userNickName Field Functions 
    bool hasUserNickName() const { return this->userNickName_ != nullptr;};
    void deleteUserNickName() { this->userNickName_ = nullptr;};
    inline string userNickName() const { DARABONBA_PTR_GET_DEFAULT(userNickName_, "") };
    inline ListAuthorizedUsersForInstanceResponseBodyUsers& setUserNickName(string userNickName) { DARABONBA_PTR_SET_VALUE(userNickName_, userNickName) };


    // userRealName Field Functions 
    bool hasUserRealName() const { return this->userRealName_ != nullptr;};
    void deleteUserRealName() { this->userRealName_ = nullptr;};
    inline string userRealName() const { DARABONBA_PTR_GET_DEFAULT(userRealName_, "") };
    inline ListAuthorizedUsersForInstanceResponseBodyUsers& setUserRealName(string userRealName) { DARABONBA_PTR_SET_VALUE(userRealName_, userRealName) };


  protected:
    std::shared_ptr<string> uid_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userNickName_ = nullptr;
    std::shared_ptr<string> userRealName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
