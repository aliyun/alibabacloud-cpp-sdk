// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSGROUPSRESPONSEBODYACCESSGROUPSACCESSGROUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSGROUPSRESPONSEBODYACCESSGROUPSACCESSGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_TO_JSON(AccessGroupType, accessGroupType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_TO_JSON(MountTargetCount, mountTargetCount_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_FROM_JSON(AccessGroupType, accessGroupType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_FROM_JSON(MountTargetCount, mountTargetCount_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
    };
    DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup() = default ;
    DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup(const DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup &) = default ;
    DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup(DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup &&) = default ;
    DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup() = default ;
    DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup& operator=(const DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup &) = default ;
    DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup& operator=(DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessGroupName_ == nullptr
        && return this->accessGroupType_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->fileSystemType_ == nullptr && return this->mountTargetCount_ == nullptr
        && return this->regionId_ == nullptr && return this->ruleCount_ == nullptr; };
    // accessGroupName Field Functions 
    bool hasAccessGroupName() const { return this->accessGroupName_ != nullptr;};
    void deleteAccessGroupName() { this->accessGroupName_ = nullptr;};
    inline string accessGroupName() const { DARABONBA_PTR_GET_DEFAULT(accessGroupName_, "") };
    inline DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup& setAccessGroupName(string accessGroupName) { DARABONBA_PTR_SET_VALUE(accessGroupName_, accessGroupName) };


    // accessGroupType Field Functions 
    bool hasAccessGroupType() const { return this->accessGroupType_ != nullptr;};
    void deleteAccessGroupType() { this->accessGroupType_ = nullptr;};
    inline string accessGroupType() const { DARABONBA_PTR_GET_DEFAULT(accessGroupType_, "") };
    inline DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup& setAccessGroupType(string accessGroupType) { DARABONBA_PTR_SET_VALUE(accessGroupType_, accessGroupType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileSystemType Field Functions 
    bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
    void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
    inline string fileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
    inline DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


    // mountTargetCount Field Functions 
    bool hasMountTargetCount() const { return this->mountTargetCount_ != nullptr;};
    void deleteMountTargetCount() { this->mountTargetCount_ = nullptr;};
    inline int32_t mountTargetCount() const { DARABONBA_PTR_GET_DEFAULT(mountTargetCount_, 0) };
    inline DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup& setMountTargetCount(int32_t mountTargetCount) { DARABONBA_PTR_SET_VALUE(mountTargetCount_, mountTargetCount) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleCount Field Functions 
    bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
    void deleteRuleCount() { this->ruleCount_ = nullptr;};
    inline int32_t ruleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
    inline DescribeAccessGroupsResponseBodyAccessGroupsAccessGroup& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


  protected:
    // The name of the permission group.
    std::shared_ptr<string> accessGroupName_ = nullptr;
    // The network type of the permission group. Valid value: **Vpc**.
    std::shared_ptr<string> accessGroupType_ = nullptr;
    // The time when the permission group was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the permission group.
    std::shared_ptr<string> description_ = nullptr;
    // The type of the file system.
    // 
    // Valid values:
    // 
    // *   standard: General-purpose Apsara File Storage NAS (NAS) file system
    // *   extreme: Extreme NAS file system.
    // *   cpfs: CPFS file system.
    std::shared_ptr<string> fileSystemType_ = nullptr;
    // The number of mount targets to which the permission group is attached.
    std::shared_ptr<int32_t> mountTargetCount_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The total number of rules in the permission group.
    std::shared_ptr<int32_t> ruleCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
