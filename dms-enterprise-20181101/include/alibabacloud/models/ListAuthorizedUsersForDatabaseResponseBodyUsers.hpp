// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDUSERSFORDATABASERESPONSEBODYUSERS_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDUSERSFORDATABASERESPONSEBODYUSERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListAuthorizedUsersForDatabaseResponseBodyUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedUsersForDatabaseResponseBodyUsers& obj) { 
      DARABONBA_PTR_TO_JSON(Uid, uid_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserNickName, userNickName_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedUsersForDatabaseResponseBodyUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserNickName, userNickName_);
    };
    ListAuthorizedUsersForDatabaseResponseBodyUsers() = default ;
    ListAuthorizedUsersForDatabaseResponseBodyUsers(const ListAuthorizedUsersForDatabaseResponseBodyUsers &) = default ;
    ListAuthorizedUsersForDatabaseResponseBodyUsers(ListAuthorizedUsersForDatabaseResponseBodyUsers &&) = default ;
    ListAuthorizedUsersForDatabaseResponseBodyUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedUsersForDatabaseResponseBodyUsers() = default ;
    ListAuthorizedUsersForDatabaseResponseBodyUsers& operator=(const ListAuthorizedUsersForDatabaseResponseBodyUsers &) = default ;
    ListAuthorizedUsersForDatabaseResponseBodyUsers& operator=(ListAuthorizedUsersForDatabaseResponseBodyUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->uid_ != nullptr
        && this->userId_ != nullptr && this->userNickName_ != nullptr; };
    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline ListAuthorizedUsersForDatabaseResponseBodyUsers& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListAuthorizedUsersForDatabaseResponseBodyUsers& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userNickName Field Functions 
    bool hasUserNickName() const { return this->userNickName_ != nullptr;};
    void deleteUserNickName() { this->userNickName_ = nullptr;};
    inline string userNickName() const { DARABONBA_PTR_GET_DEFAULT(userNickName_, "") };
    inline ListAuthorizedUsersForDatabaseResponseBodyUsers& setUserNickName(string userNickName) { DARABONBA_PTR_SET_VALUE(userNickName_, userNickName) };


  protected:
    std::shared_ptr<string> uid_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userNickName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
