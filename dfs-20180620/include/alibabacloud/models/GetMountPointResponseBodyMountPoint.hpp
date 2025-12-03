// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMOUNTPOINTRESPONSEBODYMOUNTPOINT_HPP_
#define ALIBABACLOUD_MODELS_GETMOUNTPOINTRESPONSEBODYMOUNTPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class GetMountPointResponseBodyMountPoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMountPointResponseBodyMountPoint& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroupId, accessGroupId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(MountPointAlias, mountPointAlias_);
      DARABONBA_PTR_TO_JSON(MountPointDomain, mountPointDomain_);
      DARABONBA_PTR_TO_JSON(MountPointId, mountPointId_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMountPointResponseBodyMountPoint& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroupId, accessGroupId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(MountPointAlias, mountPointAlias_);
      DARABONBA_PTR_FROM_JSON(MountPointDomain, mountPointDomain_);
      DARABONBA_PTR_FROM_JSON(MountPointId, mountPointId_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    GetMountPointResponseBodyMountPoint() = default ;
    GetMountPointResponseBodyMountPoint(const GetMountPointResponseBodyMountPoint &) = default ;
    GetMountPointResponseBodyMountPoint(GetMountPointResponseBodyMountPoint &&) = default ;
    GetMountPointResponseBodyMountPoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMountPointResponseBodyMountPoint() = default ;
    GetMountPointResponseBodyMountPoint& operator=(const GetMountPointResponseBodyMountPoint &) = default ;
    GetMountPointResponseBodyMountPoint& operator=(GetMountPointResponseBodyMountPoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessGroupId_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->fileSystemId_ == nullptr && return this->mountPointAlias_ == nullptr && return this->mountPointDomain_ == nullptr
        && return this->mountPointId_ == nullptr && return this->networkType_ == nullptr && return this->regionId_ == nullptr && return this->status_ == nullptr && return this->vSwitchId_ == nullptr
        && return this->vpcId_ == nullptr; };
    // accessGroupId Field Functions 
    bool hasAccessGroupId() const { return this->accessGroupId_ != nullptr;};
    void deleteAccessGroupId() { this->accessGroupId_ = nullptr;};
    inline string accessGroupId() const { DARABONBA_PTR_GET_DEFAULT(accessGroupId_, "") };
    inline GetMountPointResponseBodyMountPoint& setAccessGroupId(string accessGroupId) { DARABONBA_PTR_SET_VALUE(accessGroupId_, accessGroupId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetMountPointResponseBodyMountPoint& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetMountPointResponseBodyMountPoint& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline GetMountPointResponseBodyMountPoint& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // mountPointAlias Field Functions 
    bool hasMountPointAlias() const { return this->mountPointAlias_ != nullptr;};
    void deleteMountPointAlias() { this->mountPointAlias_ = nullptr;};
    inline string mountPointAlias() const { DARABONBA_PTR_GET_DEFAULT(mountPointAlias_, "") };
    inline GetMountPointResponseBodyMountPoint& setMountPointAlias(string mountPointAlias) { DARABONBA_PTR_SET_VALUE(mountPointAlias_, mountPointAlias) };


    // mountPointDomain Field Functions 
    bool hasMountPointDomain() const { return this->mountPointDomain_ != nullptr;};
    void deleteMountPointDomain() { this->mountPointDomain_ = nullptr;};
    inline string mountPointDomain() const { DARABONBA_PTR_GET_DEFAULT(mountPointDomain_, "") };
    inline GetMountPointResponseBodyMountPoint& setMountPointDomain(string mountPointDomain) { DARABONBA_PTR_SET_VALUE(mountPointDomain_, mountPointDomain) };


    // mountPointId Field Functions 
    bool hasMountPointId() const { return this->mountPointId_ != nullptr;};
    void deleteMountPointId() { this->mountPointId_ = nullptr;};
    inline string mountPointId() const { DARABONBA_PTR_GET_DEFAULT(mountPointId_, "") };
    inline GetMountPointResponseBodyMountPoint& setMountPointId(string mountPointId) { DARABONBA_PTR_SET_VALUE(mountPointId_, mountPointId) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline GetMountPointResponseBodyMountPoint& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetMountPointResponseBodyMountPoint& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetMountPointResponseBodyMountPoint& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline GetMountPointResponseBodyMountPoint& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetMountPointResponseBodyMountPoint& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> accessGroupId_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> fileSystemId_ = nullptr;
    std::shared_ptr<string> mountPointAlias_ = nullptr;
    std::shared_ptr<string> mountPointDomain_ = nullptr;
    std::shared_ptr<string> mountPointId_ = nullptr;
    std::shared_ptr<string> networkType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
