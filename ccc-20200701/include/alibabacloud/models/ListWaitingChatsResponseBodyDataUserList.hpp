// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAITINGCHATSRESPONSEBODYDATAUSERLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTWAITINGCHATSRESPONSEBODYDATAUSERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListWaitingChatsResponseBodyDataUserList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWaitingChatsResponseBodyDataUserList& obj) { 
      DARABONBA_PTR_TO_JSON(AvatarUrl, avatarUrl_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, ListWaitingChatsResponseBodyDataUserList& obj) { 
      DARABONBA_PTR_FROM_JSON(AvatarUrl, avatarUrl_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    ListWaitingChatsResponseBodyDataUserList() = default ;
    ListWaitingChatsResponseBodyDataUserList(const ListWaitingChatsResponseBodyDataUserList &) = default ;
    ListWaitingChatsResponseBodyDataUserList(ListWaitingChatsResponseBodyDataUserList &&) = default ;
    ListWaitingChatsResponseBodyDataUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWaitingChatsResponseBodyDataUserList() = default ;
    ListWaitingChatsResponseBodyDataUserList& operator=(const ListWaitingChatsResponseBodyDataUserList &) = default ;
    ListWaitingChatsResponseBodyDataUserList& operator=(ListWaitingChatsResponseBodyDataUserList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avatarUrl_ == nullptr
        && return this->userId_ == nullptr && return this->userName_ == nullptr && return this->userType_ == nullptr; };
    // avatarUrl Field Functions 
    bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
    void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
    inline string avatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
    inline ListWaitingChatsResponseBodyDataUserList& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListWaitingChatsResponseBodyDataUserList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ListWaitingChatsResponseBodyDataUserList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline ListWaitingChatsResponseBodyDataUserList& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    std::shared_ptr<string> avatarUrl_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
    std::shared_ptr<string> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
