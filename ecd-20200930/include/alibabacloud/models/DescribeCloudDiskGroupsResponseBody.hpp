// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKGROUPSRESPONSEBODY_HPP_
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
  class DescribeCloudDiskGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudDiskGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudDriveGroups, cloudDriveGroups_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudDiskGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudDriveGroups, cloudDriveGroups_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCloudDiskGroupsResponseBody() = default ;
    DescribeCloudDiskGroupsResponseBody(const DescribeCloudDiskGroupsResponseBody &) = default ;
    DescribeCloudDiskGroupsResponseBody(DescribeCloudDiskGroupsResponseBody &&) = default ;
    DescribeCloudDiskGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudDiskGroupsResponseBody() = default ;
    DescribeCloudDiskGroupsResponseBody& operator=(const DescribeCloudDiskGroupsResponseBody &) = default ;
    DescribeCloudDiskGroupsResponseBody& operator=(DescribeCloudDiskGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CloudDriveGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CloudDriveGroups& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_TO_JSON(DriveId, driveId_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(OrgId, orgId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
        DARABONBA_PTR_TO_JSON(UsedSize, usedSize_);
      };
      friend void from_json(const Darabonba::Json& j, CloudDriveGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_FROM_JSON(DriveId, driveId_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
        DARABONBA_PTR_FROM_JSON(UsedSize, usedSize_);
      };
      CloudDriveGroups() = default ;
      CloudDriveGroups(const CloudDriveGroups &) = default ;
      CloudDriveGroups(CloudDriveGroups &&) = default ;
      CloudDriveGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CloudDriveGroups() = default ;
      CloudDriveGroups& operator=(const CloudDriveGroups &) = default ;
      CloudDriveGroups& operator=(CloudDriveGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->directoryId_ == nullptr && this->driveId_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->orgId_ == nullptr
        && this->status_ == nullptr && this->totalSize_ == nullptr && this->usedSize_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline CloudDriveGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // directoryId Field Functions 
      bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
      void deleteDirectoryId() { this->directoryId_ = nullptr;};
      inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
      inline CloudDriveGroups& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


      // driveId Field Functions 
      bool hasDriveId() const { return this->driveId_ != nullptr;};
      void deleteDriveId() { this->driveId_ = nullptr;};
      inline string getDriveId() const { DARABONBA_PTR_GET_DEFAULT(driveId_, "") };
      inline CloudDriveGroups& setDriveId(string driveId) { DARABONBA_PTR_SET_VALUE(driveId_, driveId) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline CloudDriveGroups& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline CloudDriveGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // orgId Field Functions 
      bool hasOrgId() const { return this->orgId_ != nullptr;};
      void deleteOrgId() { this->orgId_ = nullptr;};
      inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
      inline CloudDriveGroups& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CloudDriveGroups& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
      inline CloudDriveGroups& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


      // usedSize Field Functions 
      bool hasUsedSize() const { return this->usedSize_ != nullptr;};
      void deleteUsedSize() { this->usedSize_ = nullptr;};
      inline string getUsedSize() const { DARABONBA_PTR_GET_DEFAULT(usedSize_, "") };
      inline CloudDriveGroups& setUsedSize(string usedSize) { DARABONBA_PTR_SET_VALUE(usedSize_, usedSize) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> directoryId_ {};
      shared_ptr<string> driveId_ {};
      shared_ptr<string> groupId_ {};
      shared_ptr<string> groupName_ {};
      shared_ptr<string> orgId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int64_t> totalSize_ {};
      shared_ptr<string> usedSize_ {};
    };

    virtual bool empty() const override { return this->cloudDriveGroups_ == nullptr
        && this->count_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // cloudDriveGroups Field Functions 
    bool hasCloudDriveGroups() const { return this->cloudDriveGroups_ != nullptr;};
    void deleteCloudDriveGroups() { this->cloudDriveGroups_ = nullptr;};
    inline const vector<DescribeCloudDiskGroupsResponseBody::CloudDriveGroups> & getCloudDriveGroups() const { DARABONBA_PTR_GET_CONST(cloudDriveGroups_, vector<DescribeCloudDiskGroupsResponseBody::CloudDriveGroups>) };
    inline vector<DescribeCloudDiskGroupsResponseBody::CloudDriveGroups> getCloudDriveGroups() { DARABONBA_PTR_GET(cloudDriveGroups_, vector<DescribeCloudDiskGroupsResponseBody::CloudDriveGroups>) };
    inline DescribeCloudDiskGroupsResponseBody& setCloudDriveGroups(const vector<DescribeCloudDiskGroupsResponseBody::CloudDriveGroups> & cloudDriveGroups) { DARABONBA_PTR_SET_VALUE(cloudDriveGroups_, cloudDriveGroups) };
    inline DescribeCloudDiskGroupsResponseBody& setCloudDriveGroups(vector<DescribeCloudDiskGroupsResponseBody::CloudDriveGroups> && cloudDriveGroups) { DARABONBA_PTR_SET_RVALUE(cloudDriveGroups_, cloudDriveGroups) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeCloudDiskGroupsResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeCloudDiskGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudDiskGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeCloudDiskGroupsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<vector<DescribeCloudDiskGroupsResponseBody::CloudDriveGroups>> cloudDriveGroups_ {};
    shared_ptr<int64_t> count_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
