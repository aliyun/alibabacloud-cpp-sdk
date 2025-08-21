// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSINRECYCLEBINRESPONSEBODYUSERSUSER_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSINRECYCLEBINRESPONSEBODYUSERSUSER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListUsersInRecycleBinResponseBodyUsersUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersInRecycleBinResponseBodyUsersUser& obj) { 
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(DeleteDate, deleteDate_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(RecycleDate, recycleDate_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersInRecycleBinResponseBodyUsersUser& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(DeleteDate, deleteDate_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(RecycleDate, recycleDate_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    ListUsersInRecycleBinResponseBodyUsersUser() = default ;
    ListUsersInRecycleBinResponseBodyUsersUser(const ListUsersInRecycleBinResponseBodyUsersUser &) = default ;
    ListUsersInRecycleBinResponseBodyUsersUser(ListUsersInRecycleBinResponseBodyUsersUser &&) = default ;
    ListUsersInRecycleBinResponseBodyUsersUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersInRecycleBinResponseBodyUsersUser() = default ;
    ListUsersInRecycleBinResponseBodyUsersUser& operator=(const ListUsersInRecycleBinResponseBodyUsersUser &) = default ;
    ListUsersInRecycleBinResponseBodyUsersUser& operator=(ListUsersInRecycleBinResponseBodyUsersUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createDate_ != nullptr
        && this->deleteDate_ != nullptr && this->displayName_ != nullptr && this->recycleDate_ != nullptr && this->userId_ != nullptr && this->userPrincipalName_ != nullptr; };
    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline ListUsersInRecycleBinResponseBodyUsersUser& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // deleteDate Field Functions 
    bool hasDeleteDate() const { return this->deleteDate_ != nullptr;};
    void deleteDeleteDate() { this->deleteDate_ = nullptr;};
    inline string deleteDate() const { DARABONBA_PTR_GET_DEFAULT(deleteDate_, "") };
    inline ListUsersInRecycleBinResponseBodyUsersUser& setDeleteDate(string deleteDate) { DARABONBA_PTR_SET_VALUE(deleteDate_, deleteDate) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListUsersInRecycleBinResponseBodyUsersUser& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // recycleDate Field Functions 
    bool hasRecycleDate() const { return this->recycleDate_ != nullptr;};
    void deleteRecycleDate() { this->recycleDate_ = nullptr;};
    inline string recycleDate() const { DARABONBA_PTR_GET_DEFAULT(recycleDate_, "") };
    inline ListUsersInRecycleBinResponseBodyUsersUser& setRecycleDate(string recycleDate) { DARABONBA_PTR_SET_VALUE(recycleDate_, recycleDate) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListUsersInRecycleBinResponseBodyUsersUser& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string userPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline ListUsersInRecycleBinResponseBodyUsersUser& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    // The time when the RAM user was created.
    std::shared_ptr<string> createDate_ = nullptr;
    // The time when the RAM user will be permanently deleted from the recycle bin.
    std::shared_ptr<string> deleteDate_ = nullptr;
    // The display name of the RAM user.
    std::shared_ptr<string> displayName_ = nullptr;
    // The time when the RAM user was deleted and moved to the recycle bin.
    std::shared_ptr<string> recycleDate_ = nullptr;
    // The ID of the RAM user.
    std::shared_ptr<string> userId_ = nullptr;
    // The logon name of the RAM user.
    std::shared_ptr<string> userPrincipalName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
