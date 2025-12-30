// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDDRIVEUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDDRIVEUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeCloudDriveUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudDriveUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudDriveUsers, cloudDriveUsers_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudDriveUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudDriveUsers, cloudDriveUsers_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCloudDriveUsersResponseBody() = default ;
    DescribeCloudDriveUsersResponseBody(const DescribeCloudDriveUsersResponseBody &) = default ;
    DescribeCloudDriveUsersResponseBody(DescribeCloudDriveUsersResponseBody &&) = default ;
    DescribeCloudDriveUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudDriveUsersResponseBody() = default ;
    DescribeCloudDriveUsersResponseBody& operator=(const DescribeCloudDriveUsersResponseBody &) = default ;
    DescribeCloudDriveUsersResponseBody& operator=(DescribeCloudDriveUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CloudDriveUsers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudDriveUsers& obj) { 
        DARABONBA_PTR_TO_JSON(DriveId, driveId_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
        DARABONBA_PTR_TO_JSON(UsedSize, usedSize_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, CloudDriveUsers& obj) { 
        DARABONBA_PTR_FROM_JSON(DriveId, driveId_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
        DARABONBA_PTR_FROM_JSON(UsedSize, usedSize_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      CloudDriveUsers() = default ;
      CloudDriveUsers(const CloudDriveUsers &) = default ;
      CloudDriveUsers(CloudDriveUsers &&) = default ;
      CloudDriveUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudDriveUsers() = default ;
      CloudDriveUsers& operator=(const CloudDriveUsers &) = default ;
      CloudDriveUsers& operator=(CloudDriveUsers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->driveId_ == nullptr
        && this->endUserId_ == nullptr && this->status_ == nullptr && this->totalSize_ == nullptr && this->usedSize_ == nullptr && this->userId_ == nullptr
        && this->userName_ == nullptr; };
      // driveId Field Functions 
      bool hasDriveId() const { return this->driveId_ != nullptr;};
      void deleteDriveId() { this->driveId_ = nullptr;};
      inline string getDriveId() const { DARABONBA_PTR_GET_DEFAULT(driveId_, "") };
      inline CloudDriveUsers& setDriveId(string driveId) { DARABONBA_PTR_SET_VALUE(driveId_, driveId) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline CloudDriveUsers& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CloudDriveUsers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
      inline CloudDriveUsers& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


      // usedSize Field Functions 
      bool hasUsedSize() const { return this->usedSize_ != nullptr;};
      void deleteUsedSize() { this->usedSize_ = nullptr;};
      inline int64_t getUsedSize() const { DARABONBA_PTR_GET_DEFAULT(usedSize_, 0L) };
      inline CloudDriveUsers& setUsedSize(int64_t usedSize) { DARABONBA_PTR_SET_VALUE(usedSize_, usedSize) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline CloudDriveUsers& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline CloudDriveUsers& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      shared_ptr<string> driveId_ {};
      shared_ptr<string> endUserId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int64_t> totalSize_ {};
      shared_ptr<int64_t> usedSize_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->cloudDriveUsers_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // cloudDriveUsers Field Functions 
    bool hasCloudDriveUsers() const { return this->cloudDriveUsers_ != nullptr;};
    void deleteCloudDriveUsers() { this->cloudDriveUsers_ = nullptr;};
    inline const vector<DescribeCloudDriveUsersResponseBody::CloudDriveUsers> & getCloudDriveUsers() const { DARABONBA_PTR_GET_CONST(cloudDriveUsers_, vector<DescribeCloudDriveUsersResponseBody::CloudDriveUsers>) };
    inline vector<DescribeCloudDriveUsersResponseBody::CloudDriveUsers> getCloudDriveUsers() { DARABONBA_PTR_GET(cloudDriveUsers_, vector<DescribeCloudDriveUsersResponseBody::CloudDriveUsers>) };
    inline DescribeCloudDriveUsersResponseBody& setCloudDriveUsers(const vector<DescribeCloudDriveUsersResponseBody::CloudDriveUsers> & cloudDriveUsers) { DARABONBA_PTR_SET_VALUE(cloudDriveUsers_, cloudDriveUsers) };
    inline DescribeCloudDriveUsersResponseBody& setCloudDriveUsers(vector<DescribeCloudDriveUsersResponseBody::CloudDriveUsers> && cloudDriveUsers) { DARABONBA_PTR_SET_RVALUE(cloudDriveUsers_, cloudDriveUsers) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeCloudDriveUsersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudDriveUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeCloudDriveUsersResponseBody::CloudDriveUsers>> cloudDriveUsers_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
