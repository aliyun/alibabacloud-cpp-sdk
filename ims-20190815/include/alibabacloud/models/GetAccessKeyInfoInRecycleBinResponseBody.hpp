// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSKEYINFOINRECYCLEBINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSKEYINFOINRECYCLEBINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetAccessKeyInfoInRecycleBinResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessKeyInfoInRecycleBinResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessKeyInfoInRecycleBinResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAccessKeyInfoInRecycleBinResponseBody() = default ;
    GetAccessKeyInfoInRecycleBinResponseBody(const GetAccessKeyInfoInRecycleBinResponseBody &) = default ;
    GetAccessKeyInfoInRecycleBinResponseBody(GetAccessKeyInfoInRecycleBinResponseBody &&) = default ;
    GetAccessKeyInfoInRecycleBinResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessKeyInfoInRecycleBinResponseBody() = default ;
    GetAccessKeyInfoInRecycleBinResponseBody& operator=(const GetAccessKeyInfoInRecycleBinResponseBody &) = default ;
    GetAccessKeyInfoInRecycleBinResponseBody& operator=(GetAccessKeyInfoInRecycleBinResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessKey : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessKey& obj) { 
        DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(DeleteDate, deleteDate_);
        DARABONBA_PTR_TO_JSON(RecycleDate, recycleDate_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
        DARABONBA_PTR_TO_JSON(UserRecycled, userRecycled_);
      };
      friend void from_json(const Darabonba::Json& j, AccessKey& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(DeleteDate, deleteDate_);
        DARABONBA_PTR_FROM_JSON(RecycleDate, recycleDate_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
        DARABONBA_PTR_FROM_JSON(UserRecycled, userRecycled_);
      };
      AccessKey() = default ;
      AccessKey(const AccessKey &) = default ;
      AccessKey(AccessKey &&) = default ;
      AccessKey(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessKey() = default ;
      AccessKey& operator=(const AccessKey &) = default ;
      AccessKey& operator=(AccessKey &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && this->createDate_ == nullptr && this->deleteDate_ == nullptr && this->recycleDate_ == nullptr && this->userId_ == nullptr && this->userPrincipalName_ == nullptr
        && this->userRecycled_ == nullptr; };
      // accessKeyId Field Functions 
      bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
      void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
      inline string getAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
      inline AccessKey& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline AccessKey& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // deleteDate Field Functions 
      bool hasDeleteDate() const { return this->deleteDate_ != nullptr;};
      void deleteDeleteDate() { this->deleteDate_ = nullptr;};
      inline string getDeleteDate() const { DARABONBA_PTR_GET_DEFAULT(deleteDate_, "") };
      inline AccessKey& setDeleteDate(string deleteDate) { DARABONBA_PTR_SET_VALUE(deleteDate_, deleteDate) };


      // recycleDate Field Functions 
      bool hasRecycleDate() const { return this->recycleDate_ != nullptr;};
      void deleteRecycleDate() { this->recycleDate_ = nullptr;};
      inline string getRecycleDate() const { DARABONBA_PTR_GET_DEFAULT(recycleDate_, "") };
      inline AccessKey& setRecycleDate(string recycleDate) { DARABONBA_PTR_SET_VALUE(recycleDate_, recycleDate) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline AccessKey& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userPrincipalName Field Functions 
      bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
      void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
      inline string getUserPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
      inline AccessKey& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


      // userRecycled Field Functions 
      bool hasUserRecycled() const { return this->userRecycled_ != nullptr;};
      void deleteUserRecycled() { this->userRecycled_ = nullptr;};
      inline bool getUserRecycled() const { DARABONBA_PTR_GET_DEFAULT(userRecycled_, false) };
      inline AccessKey& setUserRecycled(bool userRecycled) { DARABONBA_PTR_SET_VALUE(userRecycled_, userRecycled) };


    protected:
      // The AccessKey ID.
      shared_ptr<string> accessKeyId_ {};
      // The time when the AccessKey pair was created.
      shared_ptr<string> createDate_ {};
      // The time when the AccessKey pair will be permanently deleted from the recycle bin.
      shared_ptr<string> deleteDate_ {};
      // The time when the AccessKey pair was deleted and moved to the recycle bin.
      shared_ptr<string> recycleDate_ {};
      // The ID of the RAM user.
      shared_ptr<string> userId_ {};
      // The logon name of the RAM user.
      shared_ptr<string> userPrincipalName_ {};
      // Indicates whether the RAM user to which the AccessKey pair belongs is in the recycle bin. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> userRecycled_ {};
    };

    virtual bool empty() const override { return this->accessKey_ == nullptr
        && this->requestId_ == nullptr; };
    // accessKey Field Functions 
    bool hasAccessKey() const { return this->accessKey_ != nullptr;};
    void deleteAccessKey() { this->accessKey_ = nullptr;};
    inline const GetAccessKeyInfoInRecycleBinResponseBody::AccessKey & getAccessKey() const { DARABONBA_PTR_GET_CONST(accessKey_, GetAccessKeyInfoInRecycleBinResponseBody::AccessKey) };
    inline GetAccessKeyInfoInRecycleBinResponseBody::AccessKey getAccessKey() { DARABONBA_PTR_GET(accessKey_, GetAccessKeyInfoInRecycleBinResponseBody::AccessKey) };
    inline GetAccessKeyInfoInRecycleBinResponseBody& setAccessKey(const GetAccessKeyInfoInRecycleBinResponseBody::AccessKey & accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };
    inline GetAccessKeyInfoInRecycleBinResponseBody& setAccessKey(GetAccessKeyInfoInRecycleBinResponseBody::AccessKey && accessKey) { DARABONBA_PTR_SET_RVALUE(accessKey_, accessKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccessKeyInfoInRecycleBinResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the AccessKey pair.
    shared_ptr<GetAccessKeyInfoInRecycleBinResponseBody::AccessKey> accessKey_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
