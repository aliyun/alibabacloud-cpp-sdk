// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSPOINTRESPONSEBODYACCESSPOINT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSPOINTRESPONSEBODYACCESSPOINT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAccessPointResponseBodyAccessPointPosixUser.hpp>
#include <alibabacloud/models/DescribeAccessPointResponseBodyAccessPointRootPathPermission.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAccessPointResponseBodyAccessPointTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeAccessPointResponseBodyAccessPoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessPointResponseBodyAccessPoint& obj) { 
      DARABONBA_PTR_TO_JSON(ARN, ARN_);
      DARABONBA_PTR_TO_JSON(AccessGroup, accessGroup_);
      DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_TO_JSON(AccessPointName, accessPointName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EnabledRam, enabledRam_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(PosixUser, posixUser_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RootPath, rootPath_);
      DARABONBA_PTR_TO_JSON(RootPathPermission, rootPathPermission_);
      DARABONBA_PTR_TO_JSON(RootPathStatus, rootPathStatus_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessPointResponseBodyAccessPoint& obj) { 
      DARABONBA_PTR_FROM_JSON(ARN, ARN_);
      DARABONBA_PTR_FROM_JSON(AccessGroup, accessGroup_);
      DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_FROM_JSON(AccessPointName, accessPointName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EnabledRam, enabledRam_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(PosixUser, posixUser_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RootPath, rootPath_);
      DARABONBA_PTR_FROM_JSON(RootPathPermission, rootPathPermission_);
      DARABONBA_PTR_FROM_JSON(RootPathStatus, rootPathStatus_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeAccessPointResponseBodyAccessPoint() = default ;
    DescribeAccessPointResponseBodyAccessPoint(const DescribeAccessPointResponseBodyAccessPoint &) = default ;
    DescribeAccessPointResponseBodyAccessPoint(DescribeAccessPointResponseBodyAccessPoint &&) = default ;
    DescribeAccessPointResponseBodyAccessPoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessPointResponseBodyAccessPoint() = default ;
    DescribeAccessPointResponseBodyAccessPoint& operator=(const DescribeAccessPointResponseBodyAccessPoint &) = default ;
    DescribeAccessPointResponseBodyAccessPoint& operator=(DescribeAccessPointResponseBodyAccessPoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ARN_ == nullptr
        && return this->accessGroup_ == nullptr && return this->accessPointId_ == nullptr && return this->accessPointName_ == nullptr && return this->createTime_ == nullptr && return this->domainName_ == nullptr
        && return this->enabledRam_ == nullptr && return this->fileSystemId_ == nullptr && return this->modifyTime_ == nullptr && return this->posixUser_ == nullptr && return this->regionId_ == nullptr
        && return this->rootPath_ == nullptr && return this->rootPathPermission_ == nullptr && return this->rootPathStatus_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr
        && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr; };
    // ARN Field Functions 
    bool hasARN() const { return this->ARN_ != nullptr;};
    void deleteARN() { this->ARN_ = nullptr;};
    inline string ARN() const { DARABONBA_PTR_GET_DEFAULT(ARN_, "") };
    inline DescribeAccessPointResponseBodyAccessPoint& setARN(string ARN) { DARABONBA_PTR_SET_VALUE(ARN_, ARN) };


    // accessGroup Field Functions 
    bool hasAccessGroup() const { return this->accessGroup_ != nullptr;};
    void deleteAccessGroup() { this->accessGroup_ = nullptr;};
    inline string accessGroup() const { DARABONBA_PTR_GET_DEFAULT(accessGroup_, "") };
    inline DescribeAccessPointResponseBodyAccessPoint& setAccessGroup(string accessGroup) { DARABONBA_PTR_SET_VALUE(accessGroup_, accessGroup) };


    // accessPointId Field Functions 
    bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
    void deleteAccessPointId() { this->accessPointId_ = nullptr;};
    inline string accessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
    inline DescribeAccessPointResponseBodyAccessPoint& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


    // accessPointName Field Functions 
    bool hasAccessPointName() const { return this->accessPointName_ != nullptr;};
    void deleteAccessPointName() { this->accessPointName_ = nullptr;};
    inline string accessPointName() const { DARABONBA_PTR_GET_DEFAULT(accessPointName_, "") };
    inline DescribeAccessPointResponseBodyAccessPoint& setAccessPointName(string accessPointName) { DARABONBA_PTR_SET_VALUE(accessPointName_, accessPointName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeAccessPointResponseBodyAccessPoint& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeAccessPointResponseBodyAccessPoint& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // enabledRam Field Functions 
    bool hasEnabledRam() const { return this->enabledRam_ != nullptr;};
    void deleteEnabledRam() { this->enabledRam_ = nullptr;};
    inline bool enabledRam() const { DARABONBA_PTR_GET_DEFAULT(enabledRam_, false) };
    inline DescribeAccessPointResponseBodyAccessPoint& setEnabledRam(bool enabledRam) { DARABONBA_PTR_SET_VALUE(enabledRam_, enabledRam) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeAccessPointResponseBodyAccessPoint& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribeAccessPointResponseBodyAccessPoint& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // posixUser Field Functions 
    bool hasPosixUser() const { return this->posixUser_ != nullptr;};
    void deletePosixUser() { this->posixUser_ = nullptr;};
    inline const Models::DescribeAccessPointResponseBodyAccessPointPosixUser & posixUser() const { DARABONBA_PTR_GET_CONST(posixUser_, Models::DescribeAccessPointResponseBodyAccessPointPosixUser) };
    inline Models::DescribeAccessPointResponseBodyAccessPointPosixUser posixUser() { DARABONBA_PTR_GET(posixUser_, Models::DescribeAccessPointResponseBodyAccessPointPosixUser) };
    inline DescribeAccessPointResponseBodyAccessPoint& setPosixUser(const Models::DescribeAccessPointResponseBodyAccessPointPosixUser & posixUser) { DARABONBA_PTR_SET_VALUE(posixUser_, posixUser) };
    inline DescribeAccessPointResponseBodyAccessPoint& setPosixUser(Models::DescribeAccessPointResponseBodyAccessPointPosixUser && posixUser) { DARABONBA_PTR_SET_RVALUE(posixUser_, posixUser) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAccessPointResponseBodyAccessPoint& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rootPath Field Functions 
    bool hasRootPath() const { return this->rootPath_ != nullptr;};
    void deleteRootPath() { this->rootPath_ = nullptr;};
    inline string rootPath() const { DARABONBA_PTR_GET_DEFAULT(rootPath_, "") };
    inline DescribeAccessPointResponseBodyAccessPoint& setRootPath(string rootPath) { DARABONBA_PTR_SET_VALUE(rootPath_, rootPath) };


    // rootPathPermission Field Functions 
    bool hasRootPathPermission() const { return this->rootPathPermission_ != nullptr;};
    void deleteRootPathPermission() { this->rootPathPermission_ = nullptr;};
    inline const Models::DescribeAccessPointResponseBodyAccessPointRootPathPermission & rootPathPermission() const { DARABONBA_PTR_GET_CONST(rootPathPermission_, Models::DescribeAccessPointResponseBodyAccessPointRootPathPermission) };
    inline Models::DescribeAccessPointResponseBodyAccessPointRootPathPermission rootPathPermission() { DARABONBA_PTR_GET(rootPathPermission_, Models::DescribeAccessPointResponseBodyAccessPointRootPathPermission) };
    inline DescribeAccessPointResponseBodyAccessPoint& setRootPathPermission(const Models::DescribeAccessPointResponseBodyAccessPointRootPathPermission & rootPathPermission) { DARABONBA_PTR_SET_VALUE(rootPathPermission_, rootPathPermission) };
    inline DescribeAccessPointResponseBodyAccessPoint& setRootPathPermission(Models::DescribeAccessPointResponseBodyAccessPointRootPathPermission && rootPathPermission) { DARABONBA_PTR_SET_RVALUE(rootPathPermission_, rootPathPermission) };


    // rootPathStatus Field Functions 
    bool hasRootPathStatus() const { return this->rootPathStatus_ != nullptr;};
    void deleteRootPathStatus() { this->rootPathStatus_ = nullptr;};
    inline string rootPathStatus() const { DARABONBA_PTR_GET_DEFAULT(rootPathStatus_, "") };
    inline DescribeAccessPointResponseBodyAccessPoint& setRootPathStatus(string rootPathStatus) { DARABONBA_PTR_SET_VALUE(rootPathStatus_, rootPathStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAccessPointResponseBodyAccessPoint& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeAccessPointResponseBodyAccessPointTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeAccessPointResponseBodyAccessPointTags>) };
    inline vector<Models::DescribeAccessPointResponseBodyAccessPointTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeAccessPointResponseBodyAccessPointTags>) };
    inline DescribeAccessPointResponseBodyAccessPoint& setTags(const vector<Models::DescribeAccessPointResponseBodyAccessPointTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeAccessPointResponseBodyAccessPoint& setTags(vector<Models::DescribeAccessPointResponseBodyAccessPointTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeAccessPointResponseBodyAccessPoint& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeAccessPointResponseBodyAccessPoint& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the access point.
    std::shared_ptr<string> ARN_ = nullptr;
    // The name of the permission group.
    std::shared_ptr<string> accessGroup_ = nullptr;
    // The ID of the access point.
    std::shared_ptr<string> accessPointId_ = nullptr;
    // The name of the access point.
    std::shared_ptr<string> accessPointName_ = nullptr;
    // The time when the access point was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The domain name of the access point.
    std::shared_ptr<string> domainName_ = nullptr;
    // Indicates whether the RAM policy is enabled.
    std::shared_ptr<bool> enabledRam_ = nullptr;
    // The ID of the file system.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The time when the access point was modified.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The POSIX user.
    std::shared_ptr<Models::DescribeAccessPointResponseBodyAccessPointPosixUser> posixUser_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The root directory.
    std::shared_ptr<string> rootPath_ = nullptr;
    // The permissions to create the root directory.
    std::shared_ptr<Models::DescribeAccessPointResponseBodyAccessPointRootPathPermission> rootPathPermission_ = nullptr;
    // The status of the root directory.
    // 
    // Valid values:
    // 
    // *   0: The rootpath status is unknown.
    // *   1: The rootpath does not exist and may be deleted.
    // *   2: The rootpath is normal.
    std::shared_ptr<string> rootPathStatus_ = nullptr;
    // The status of the access point.
    // 
    // Valid values:
    // 
    // *   Active: The access point is available.
    // *   Inactive: The access point is unavailable.
    // *   Pending: The access point is being created.
    // *   Deleting: The access point is being deleted.
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::DescribeAccessPointResponseBodyAccessPointTags>> tags_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    // 
    // You must select the VPC of the Elastic Compute Service (ECS) instance on which you want to mount the file system.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
