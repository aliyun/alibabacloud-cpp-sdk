// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMSFILESYSTEMMOUNTTARGETSMOUNTTARGET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFILESYSTEMSRESPONSEBODYFILESYSTEMSFILESYSTEMMOUNTTARGETSMOUNTTARGET_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodes.hpp>
#include <alibabacloud/models/DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_TO_JSON(ClientMasterNodes, clientMasterNodes_);
      DARABONBA_PTR_TO_JSON(DualStackMountTargetDomain, dualStackMountTargetDomain_);
      DARABONBA_PTR_TO_JSON(MountTargetDomain, mountTargetDomain_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswId, vswId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroupName, accessGroupName_);
      DARABONBA_PTR_FROM_JSON(ClientMasterNodes, clientMasterNodes_);
      DARABONBA_PTR_FROM_JSON(DualStackMountTargetDomain, dualStackMountTargetDomain_);
      DARABONBA_PTR_FROM_JSON(MountTargetDomain, mountTargetDomain_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswId, vswId_);
    };
    DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget() = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget(const DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget &) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget(DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget &&) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget() = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget& operator=(const DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget &) = default ;
    DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget& operator=(DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessGroupName_ != nullptr
        && this->clientMasterNodes_ != nullptr && this->dualStackMountTargetDomain_ != nullptr && this->mountTargetDomain_ != nullptr && this->networkType_ != nullptr && this->status_ != nullptr
        && this->tags_ != nullptr && this->vpcId_ != nullptr && this->vswId_ != nullptr; };
    // accessGroupName Field Functions 
    bool hasAccessGroupName() const { return this->accessGroupName_ != nullptr;};
    void deleteAccessGroupName() { this->accessGroupName_ = nullptr;};
    inline string accessGroupName() const { DARABONBA_PTR_GET_DEFAULT(accessGroupName_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget& setAccessGroupName(string accessGroupName) { DARABONBA_PTR_SET_VALUE(accessGroupName_, accessGroupName) };


    // clientMasterNodes Field Functions 
    bool hasClientMasterNodes() const { return this->clientMasterNodes_ != nullptr;};
    void deleteClientMasterNodes() { this->clientMasterNodes_ = nullptr;};
    inline const Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodes & clientMasterNodes() const { DARABONBA_PTR_GET_CONST(clientMasterNodes_, Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodes) };
    inline Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodes clientMasterNodes() { DARABONBA_PTR_GET(clientMasterNodes_, Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodes) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget& setClientMasterNodes(const Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodes & clientMasterNodes) { DARABONBA_PTR_SET_VALUE(clientMasterNodes_, clientMasterNodes) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget& setClientMasterNodes(Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodes && clientMasterNodes) { DARABONBA_PTR_SET_RVALUE(clientMasterNodes_, clientMasterNodes) };


    // dualStackMountTargetDomain Field Functions 
    bool hasDualStackMountTargetDomain() const { return this->dualStackMountTargetDomain_ != nullptr;};
    void deleteDualStackMountTargetDomain() { this->dualStackMountTargetDomain_ = nullptr;};
    inline string dualStackMountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(dualStackMountTargetDomain_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget& setDualStackMountTargetDomain(string dualStackMountTargetDomain) { DARABONBA_PTR_SET_VALUE(dualStackMountTargetDomain_, dualStackMountTargetDomain) };


    // mountTargetDomain Field Functions 
    bool hasMountTargetDomain() const { return this->mountTargetDomain_ != nullptr;};
    void deleteMountTargetDomain() { this->mountTargetDomain_ = nullptr;};
    inline string mountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(mountTargetDomain_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget& setMountTargetDomain(string mountTargetDomain) { DARABONBA_PTR_SET_VALUE(mountTargetDomain_, mountTargetDomain) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags) };
    inline Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget& setTags(const Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget& setTags(Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswId Field Functions 
    bool hasVswId() const { return this->vswId_ != nullptr;};
    void deleteVswId() { this->vswId_ = nullptr;};
    inline string vswId() const { DARABONBA_PTR_GET_DEFAULT(vswId_, "") };
    inline DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTarget& setVswId(string vswId) { DARABONBA_PTR_SET_VALUE(vswId_, vswId) };


  protected:
    // The name of the permission group that is attached to the mount target.
    std::shared_ptr<string> accessGroupName_ = nullptr;
    // The information about client management nodes.
    // 
    // This parameter is available only for CPFS file systems.
    std::shared_ptr<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetClientMasterNodes> clientMasterNodes_ = nullptr;
    // The dual-stack (IPv4 and IPv6) domain name of the mount target.
    // > Only Extreme NAS file systems that reside in the Chinese mainland support IPv6.
    std::shared_ptr<string> dualStackMountTargetDomain_ = nullptr;
    // The domain name of the mount target.
    std::shared_ptr<string> mountTargetDomain_ = nullptr;
    // The network type. Valid value: vpc.
    std::shared_ptr<string> networkType_ = nullptr;
    // The status of the mount target.
    // 
    // Valid values:
    // 
    // *   Active
    // *   Inactive
    // *   Pending
    // *   Deleting
    // *   Hibernating
    // *   Hibernated
    std::shared_ptr<string> status_ = nullptr;
    // The tags that are attached to the mount target.
    std::shared_ptr<Models::DescribeFileSystemsResponseBodyFileSystemsFileSystemMountTargetsMountTargetTags> tags_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vswId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
