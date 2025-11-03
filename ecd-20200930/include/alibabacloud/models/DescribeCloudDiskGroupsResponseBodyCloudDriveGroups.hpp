// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKGROUPSRESPONSEBODYCLOUDDRIVEGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDDISKGROUPSRESPONSEBODYCLOUDDRIVEGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeCloudDiskGroupsResponseBodyCloudDriveGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudDiskGroupsResponseBodyCloudDriveGroups& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeCloudDiskGroupsResponseBodyCloudDriveGroups& obj) { 
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
    DescribeCloudDiskGroupsResponseBodyCloudDriveGroups() = default ;
    DescribeCloudDiskGroupsResponseBodyCloudDriveGroups(const DescribeCloudDiskGroupsResponseBodyCloudDriveGroups &) = default ;
    DescribeCloudDiskGroupsResponseBodyCloudDriveGroups(DescribeCloudDiskGroupsResponseBodyCloudDriveGroups &&) = default ;
    DescribeCloudDiskGroupsResponseBodyCloudDriveGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudDiskGroupsResponseBodyCloudDriveGroups() = default ;
    DescribeCloudDiskGroupsResponseBodyCloudDriveGroups& operator=(const DescribeCloudDiskGroupsResponseBodyCloudDriveGroups &) = default ;
    DescribeCloudDiskGroupsResponseBodyCloudDriveGroups& operator=(DescribeCloudDiskGroupsResponseBodyCloudDriveGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->directoryId_ == nullptr && return this->driveId_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->orgId_ == nullptr
        && return this->status_ == nullptr && return this->totalSize_ == nullptr && return this->usedSize_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeCloudDiskGroupsResponseBodyCloudDriveGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string directoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline DescribeCloudDiskGroupsResponseBodyCloudDriveGroups& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // driveId Field Functions 
    bool hasDriveId() const { return this->driveId_ != nullptr;};
    void deleteDriveId() { this->driveId_ = nullptr;};
    inline string driveId() const { DARABONBA_PTR_GET_DEFAULT(driveId_, "") };
    inline DescribeCloudDiskGroupsResponseBodyCloudDriveGroups& setDriveId(string driveId) { DARABONBA_PTR_SET_VALUE(driveId_, driveId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeCloudDiskGroupsResponseBodyCloudDriveGroups& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeCloudDiskGroupsResponseBodyCloudDriveGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string orgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline DescribeCloudDiskGroupsResponseBodyCloudDriveGroups& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCloudDiskGroupsResponseBodyCloudDriveGroups& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int64_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
    inline DescribeCloudDiskGroupsResponseBodyCloudDriveGroups& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    // usedSize Field Functions 
    bool hasUsedSize() const { return this->usedSize_ != nullptr;};
    void deleteUsedSize() { this->usedSize_ = nullptr;};
    inline string usedSize() const { DARABONBA_PTR_GET_DEFAULT(usedSize_, "") };
    inline DescribeCloudDiskGroupsResponseBodyCloudDriveGroups& setUsedSize(string usedSize) { DARABONBA_PTR_SET_VALUE(usedSize_, usedSize) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> directoryId_ = nullptr;
    std::shared_ptr<string> driveId_ = nullptr;
    std::shared_ptr<string> groupId_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<string> orgId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> totalSize_ = nullptr;
    std::shared_ptr<string> usedSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
