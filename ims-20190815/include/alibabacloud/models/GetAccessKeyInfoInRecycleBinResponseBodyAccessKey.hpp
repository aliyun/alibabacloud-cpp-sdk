// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSKEYINFOINRECYCLEBINRESPONSEBODYACCESSKEY_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSKEYINFOINRECYCLEBINRESPONSEBODYACCESSKEY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetAccessKeyInfoInRecycleBinResponseBodyAccessKey : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessKeyInfoInRecycleBinResponseBodyAccessKey& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(DeleteDate, deleteDate_);
      DARABONBA_PTR_TO_JSON(RecycleDate, recycleDate_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
      DARABONBA_PTR_TO_JSON(UserRecycled, userRecycled_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessKeyInfoInRecycleBinResponseBodyAccessKey& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(DeleteDate, deleteDate_);
      DARABONBA_PTR_FROM_JSON(RecycleDate, recycleDate_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
      DARABONBA_PTR_FROM_JSON(UserRecycled, userRecycled_);
    };
    GetAccessKeyInfoInRecycleBinResponseBodyAccessKey() = default ;
    GetAccessKeyInfoInRecycleBinResponseBodyAccessKey(const GetAccessKeyInfoInRecycleBinResponseBodyAccessKey &) = default ;
    GetAccessKeyInfoInRecycleBinResponseBodyAccessKey(GetAccessKeyInfoInRecycleBinResponseBodyAccessKey &&) = default ;
    GetAccessKeyInfoInRecycleBinResponseBodyAccessKey(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessKeyInfoInRecycleBinResponseBodyAccessKey() = default ;
    GetAccessKeyInfoInRecycleBinResponseBodyAccessKey& operator=(const GetAccessKeyInfoInRecycleBinResponseBodyAccessKey &) = default ;
    GetAccessKeyInfoInRecycleBinResponseBodyAccessKey& operator=(GetAccessKeyInfoInRecycleBinResponseBodyAccessKey &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKeyId_ != nullptr
        && this->createDate_ != nullptr && this->deleteDate_ != nullptr && this->recycleDate_ != nullptr && this->userId_ != nullptr && this->userPrincipalName_ != nullptr
        && this->userRecycled_ != nullptr; };
    // accessKeyId Field Functions 
    bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
    void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
    inline string accessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
    inline GetAccessKeyInfoInRecycleBinResponseBodyAccessKey& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline GetAccessKeyInfoInRecycleBinResponseBodyAccessKey& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // deleteDate Field Functions 
    bool hasDeleteDate() const { return this->deleteDate_ != nullptr;};
    void deleteDeleteDate() { this->deleteDate_ = nullptr;};
    inline string deleteDate() const { DARABONBA_PTR_GET_DEFAULT(deleteDate_, "") };
    inline GetAccessKeyInfoInRecycleBinResponseBodyAccessKey& setDeleteDate(string deleteDate) { DARABONBA_PTR_SET_VALUE(deleteDate_, deleteDate) };


    // recycleDate Field Functions 
    bool hasRecycleDate() const { return this->recycleDate_ != nullptr;};
    void deleteRecycleDate() { this->recycleDate_ = nullptr;};
    inline string recycleDate() const { DARABONBA_PTR_GET_DEFAULT(recycleDate_, "") };
    inline GetAccessKeyInfoInRecycleBinResponseBodyAccessKey& setRecycleDate(string recycleDate) { DARABONBA_PTR_SET_VALUE(recycleDate_, recycleDate) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetAccessKeyInfoInRecycleBinResponseBodyAccessKey& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string userPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline GetAccessKeyInfoInRecycleBinResponseBodyAccessKey& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


    // userRecycled Field Functions 
    bool hasUserRecycled() const { return this->userRecycled_ != nullptr;};
    void deleteUserRecycled() { this->userRecycled_ = nullptr;};
    inline bool userRecycled() const { DARABONBA_PTR_GET_DEFAULT(userRecycled_, false) };
    inline GetAccessKeyInfoInRecycleBinResponseBodyAccessKey& setUserRecycled(bool userRecycled) { DARABONBA_PTR_SET_VALUE(userRecycled_, userRecycled) };


  protected:
    // The AccessKey ID.
    std::shared_ptr<string> accessKeyId_ = nullptr;
    // The time when the AccessKey pair was created.
    std::shared_ptr<string> createDate_ = nullptr;
    // The time when the AccessKey pair will be permanently deleted from the recycle bin.
    std::shared_ptr<string> deleteDate_ = nullptr;
    // The time when the AccessKey pair was deleted and moved to the recycle bin.
    std::shared_ptr<string> recycleDate_ = nullptr;
    // The ID of the RAM user.
    std::shared_ptr<string> userId_ = nullptr;
    // The logon name of the RAM user.
    std::shared_ptr<string> userPrincipalName_ = nullptr;
    // Indicates whether the RAM user to which the AccessKey pair belongs is in the recycle bin. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> userRecycled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
