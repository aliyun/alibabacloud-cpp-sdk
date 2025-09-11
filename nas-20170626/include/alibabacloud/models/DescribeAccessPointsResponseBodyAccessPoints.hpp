// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSPOINTSRESPONSEBODYACCESSPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSPOINTSRESPONSEBODYACCESSPOINTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAccessPointsResponseBodyAccessPointsPosixUser.hpp>
#include <alibabacloud/models/DescribeAccessPointsResponseBodyAccessPointsRootPathPermission.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeAccessPointsResponseBodyAccessPoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessPointsResponseBodyAccessPoints& obj) { 
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
      DARABONBA_PTR_TO_JSON(RootPath, rootPath_);
      DARABONBA_PTR_TO_JSON(RootPathPermission, rootPathPermission_);
      DARABONBA_PTR_TO_JSON(RootPathStatus, rootPathStatus_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessPointsResponseBodyAccessPoints& obj) { 
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
      DARABONBA_PTR_FROM_JSON(RootPath, rootPath_);
      DARABONBA_PTR_FROM_JSON(RootPathPermission, rootPathPermission_);
      DARABONBA_PTR_FROM_JSON(RootPathStatus, rootPathStatus_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeAccessPointsResponseBodyAccessPoints() = default ;
    DescribeAccessPointsResponseBodyAccessPoints(const DescribeAccessPointsResponseBodyAccessPoints &) = default ;
    DescribeAccessPointsResponseBodyAccessPoints(DescribeAccessPointsResponseBodyAccessPoints &&) = default ;
    DescribeAccessPointsResponseBodyAccessPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessPointsResponseBodyAccessPoints() = default ;
    DescribeAccessPointsResponseBodyAccessPoints& operator=(const DescribeAccessPointsResponseBodyAccessPoints &) = default ;
    DescribeAccessPointsResponseBodyAccessPoints& operator=(DescribeAccessPointsResponseBodyAccessPoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ARN_ != nullptr
        && this->accessGroup_ != nullptr && this->accessPointId_ != nullptr && this->accessPointName_ != nullptr && this->createTime_ != nullptr && this->domainName_ != nullptr
        && this->enabledRam_ != nullptr && this->fileSystemId_ != nullptr && this->modifyTime_ != nullptr && this->posixUser_ != nullptr && this->rootPath_ != nullptr
        && this->rootPathPermission_ != nullptr && this->rootPathStatus_ != nullptr && this->status_ != nullptr && this->vSwitchId_ != nullptr && this->vpcId_ != nullptr; };
    // ARN Field Functions 
    bool hasARN() const { return this->ARN_ != nullptr;};
    void deleteARN() { this->ARN_ = nullptr;};
    inline string ARN() const { DARABONBA_PTR_GET_DEFAULT(ARN_, "") };
    inline DescribeAccessPointsResponseBodyAccessPoints& setARN(string ARN) { DARABONBA_PTR_SET_VALUE(ARN_, ARN) };


    // accessGroup Field Functions 
    bool hasAccessGroup() const { return this->accessGroup_ != nullptr;};
    void deleteAccessGroup() { this->accessGroup_ = nullptr;};
    inline string accessGroup() const { DARABONBA_PTR_GET_DEFAULT(accessGroup_, "") };
    inline DescribeAccessPointsResponseBodyAccessPoints& setAccessGroup(string accessGroup) { DARABONBA_PTR_SET_VALUE(accessGroup_, accessGroup) };


    // accessPointId Field Functions 
    bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
    void deleteAccessPointId() { this->accessPointId_ = nullptr;};
    inline string accessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
    inline DescribeAccessPointsResponseBodyAccessPoints& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


    // accessPointName Field Functions 
    bool hasAccessPointName() const { return this->accessPointName_ != nullptr;};
    void deleteAccessPointName() { this->accessPointName_ = nullptr;};
    inline string accessPointName() const { DARABONBA_PTR_GET_DEFAULT(accessPointName_, "") };
    inline DescribeAccessPointsResponseBodyAccessPoints& setAccessPointName(string accessPointName) { DARABONBA_PTR_SET_VALUE(accessPointName_, accessPointName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeAccessPointsResponseBodyAccessPoints& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeAccessPointsResponseBodyAccessPoints& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // enabledRam Field Functions 
    bool hasEnabledRam() const { return this->enabledRam_ != nullptr;};
    void deleteEnabledRam() { this->enabledRam_ = nullptr;};
    inline bool enabledRam() const { DARABONBA_PTR_GET_DEFAULT(enabledRam_, false) };
    inline DescribeAccessPointsResponseBodyAccessPoints& setEnabledRam(bool enabledRam) { DARABONBA_PTR_SET_VALUE(enabledRam_, enabledRam) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeAccessPointsResponseBodyAccessPoints& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribeAccessPointsResponseBodyAccessPoints& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // posixUser Field Functions 
    bool hasPosixUser() const { return this->posixUser_ != nullptr;};
    void deletePosixUser() { this->posixUser_ = nullptr;};
    inline const Models::DescribeAccessPointsResponseBodyAccessPointsPosixUser & posixUser() const { DARABONBA_PTR_GET_CONST(posixUser_, Models::DescribeAccessPointsResponseBodyAccessPointsPosixUser) };
    inline Models::DescribeAccessPointsResponseBodyAccessPointsPosixUser posixUser() { DARABONBA_PTR_GET(posixUser_, Models::DescribeAccessPointsResponseBodyAccessPointsPosixUser) };
    inline DescribeAccessPointsResponseBodyAccessPoints& setPosixUser(const Models::DescribeAccessPointsResponseBodyAccessPointsPosixUser & posixUser) { DARABONBA_PTR_SET_VALUE(posixUser_, posixUser) };
    inline DescribeAccessPointsResponseBodyAccessPoints& setPosixUser(Models::DescribeAccessPointsResponseBodyAccessPointsPosixUser && posixUser) { DARABONBA_PTR_SET_RVALUE(posixUser_, posixUser) };


    // rootPath Field Functions 
    bool hasRootPath() const { return this->rootPath_ != nullptr;};
    void deleteRootPath() { this->rootPath_ = nullptr;};
    inline string rootPath() const { DARABONBA_PTR_GET_DEFAULT(rootPath_, "") };
    inline DescribeAccessPointsResponseBodyAccessPoints& setRootPath(string rootPath) { DARABONBA_PTR_SET_VALUE(rootPath_, rootPath) };


    // rootPathPermission Field Functions 
    bool hasRootPathPermission() const { return this->rootPathPermission_ != nullptr;};
    void deleteRootPathPermission() { this->rootPathPermission_ = nullptr;};
    inline const Models::DescribeAccessPointsResponseBodyAccessPointsRootPathPermission & rootPathPermission() const { DARABONBA_PTR_GET_CONST(rootPathPermission_, Models::DescribeAccessPointsResponseBodyAccessPointsRootPathPermission) };
    inline Models::DescribeAccessPointsResponseBodyAccessPointsRootPathPermission rootPathPermission() { DARABONBA_PTR_GET(rootPathPermission_, Models::DescribeAccessPointsResponseBodyAccessPointsRootPathPermission) };
    inline DescribeAccessPointsResponseBodyAccessPoints& setRootPathPermission(const Models::DescribeAccessPointsResponseBodyAccessPointsRootPathPermission & rootPathPermission) { DARABONBA_PTR_SET_VALUE(rootPathPermission_, rootPathPermission) };
    inline DescribeAccessPointsResponseBodyAccessPoints& setRootPathPermission(Models::DescribeAccessPointsResponseBodyAccessPointsRootPathPermission && rootPathPermission) { DARABONBA_PTR_SET_RVALUE(rootPathPermission_, rootPathPermission) };


    // rootPathStatus Field Functions 
    bool hasRootPathStatus() const { return this->rootPathStatus_ != nullptr;};
    void deleteRootPathStatus() { this->rootPathStatus_ = nullptr;};
    inline string rootPathStatus() const { DARABONBA_PTR_GET_DEFAULT(rootPathStatus_, "") };
    inline DescribeAccessPointsResponseBodyAccessPoints& setRootPathStatus(string rootPathStatus) { DARABONBA_PTR_SET_VALUE(rootPathStatus_, rootPathStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAccessPointsResponseBodyAccessPoints& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeAccessPointsResponseBodyAccessPoints& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeAccessPointsResponseBodyAccessPoints& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


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
    // Indicates whether the Resource Access Management (RAM) policy is enabled.
    std::shared_ptr<bool> enabledRam_ = nullptr;
    // The ID of the file system.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The time when the access point was modified.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The Portable Operating System Interface for UNIX (POSIX) user.
    std::shared_ptr<Models::DescribeAccessPointsResponseBodyAccessPointsPosixUser> posixUser_ = nullptr;
    // The root directory.
    std::shared_ptr<string> rootPath_ = nullptr;
    // The permissions on the root directory.
    std::shared_ptr<Models::DescribeAccessPointsResponseBodyAccessPointsRootPathPermission> rootPathPermission_ = nullptr;
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
    // 
    // >  You can mount a file system only if the access point is in the Active state.
    std::shared_ptr<string> status_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
