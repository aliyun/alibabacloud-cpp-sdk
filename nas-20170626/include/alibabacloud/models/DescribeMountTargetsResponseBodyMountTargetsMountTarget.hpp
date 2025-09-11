// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMOUNTTARGETSRESPONSEBODYMOUNTTARGETSMOUNTTARGET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMOUNTTARGETSRESPONSEBODYMOUNTTARGETSMOUNTTARGET_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes.hpp>
#include <alibabacloud/models/DescribeMountTargetsResponseBodyMountTargetsMountTargetTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeMountTargetsResponseBodyMountTargetsMountTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMountTargetsResponseBodyMountTargetsMountTarget& obj) { 
      DARABONBA_PTR_TO_JSON(AccessGroup, accessGroup_);
      DARABONBA_PTR_TO_JSON(ClientMasterNodes, clientMasterNodes_);
      DARABONBA_PTR_TO_JSON(DualStackMountTargetDomain, dualStackMountTargetDomain_);
      DARABONBA_PTR_TO_JSON(IPVersion, IPVersion_);
      DARABONBA_PTR_TO_JSON(MountTargetDomain, mountTargetDomain_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswId, vswId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMountTargetsResponseBodyMountTargetsMountTarget& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessGroup, accessGroup_);
      DARABONBA_PTR_FROM_JSON(ClientMasterNodes, clientMasterNodes_);
      DARABONBA_PTR_FROM_JSON(DualStackMountTargetDomain, dualStackMountTargetDomain_);
      DARABONBA_PTR_FROM_JSON(IPVersion, IPVersion_);
      DARABONBA_PTR_FROM_JSON(MountTargetDomain, mountTargetDomain_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswId, vswId_);
    };
    DescribeMountTargetsResponseBodyMountTargetsMountTarget() = default ;
    DescribeMountTargetsResponseBodyMountTargetsMountTarget(const DescribeMountTargetsResponseBodyMountTargetsMountTarget &) = default ;
    DescribeMountTargetsResponseBodyMountTargetsMountTarget(DescribeMountTargetsResponseBodyMountTargetsMountTarget &&) = default ;
    DescribeMountTargetsResponseBodyMountTargetsMountTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMountTargetsResponseBodyMountTargetsMountTarget() = default ;
    DescribeMountTargetsResponseBodyMountTargetsMountTarget& operator=(const DescribeMountTargetsResponseBodyMountTargetsMountTarget &) = default ;
    DescribeMountTargetsResponseBodyMountTargetsMountTarget& operator=(DescribeMountTargetsResponseBodyMountTargetsMountTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessGroup_ != nullptr
        && this->clientMasterNodes_ != nullptr && this->dualStackMountTargetDomain_ != nullptr && this->IPVersion_ != nullptr && this->mountTargetDomain_ != nullptr && this->networkType_ != nullptr
        && this->status_ != nullptr && this->tags_ != nullptr && this->vpcId_ != nullptr && this->vswId_ != nullptr; };
    // accessGroup Field Functions 
    bool hasAccessGroup() const { return this->accessGroup_ != nullptr;};
    void deleteAccessGroup() { this->accessGroup_ = nullptr;};
    inline string accessGroup() const { DARABONBA_PTR_GET_DEFAULT(accessGroup_, "") };
    inline DescribeMountTargetsResponseBodyMountTargetsMountTarget& setAccessGroup(string accessGroup) { DARABONBA_PTR_SET_VALUE(accessGroup_, accessGroup) };


    // clientMasterNodes Field Functions 
    bool hasClientMasterNodes() const { return this->clientMasterNodes_ != nullptr;};
    void deleteClientMasterNodes() { this->clientMasterNodes_ = nullptr;};
    inline const Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes & clientMasterNodes() const { DARABONBA_PTR_GET_CONST(clientMasterNodes_, Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes) };
    inline Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes clientMasterNodes() { DARABONBA_PTR_GET(clientMasterNodes_, Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes) };
    inline DescribeMountTargetsResponseBodyMountTargetsMountTarget& setClientMasterNodes(const Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes & clientMasterNodes) { DARABONBA_PTR_SET_VALUE(clientMasterNodes_, clientMasterNodes) };
    inline DescribeMountTargetsResponseBodyMountTargetsMountTarget& setClientMasterNodes(Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes && clientMasterNodes) { DARABONBA_PTR_SET_RVALUE(clientMasterNodes_, clientMasterNodes) };


    // dualStackMountTargetDomain Field Functions 
    bool hasDualStackMountTargetDomain() const { return this->dualStackMountTargetDomain_ != nullptr;};
    void deleteDualStackMountTargetDomain() { this->dualStackMountTargetDomain_ = nullptr;};
    inline string dualStackMountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(dualStackMountTargetDomain_, "") };
    inline DescribeMountTargetsResponseBodyMountTargetsMountTarget& setDualStackMountTargetDomain(string dualStackMountTargetDomain) { DARABONBA_PTR_SET_VALUE(dualStackMountTargetDomain_, dualStackMountTargetDomain) };


    // IPVersion Field Functions 
    bool hasIPVersion() const { return this->IPVersion_ != nullptr;};
    void deleteIPVersion() { this->IPVersion_ = nullptr;};
    inline string IPVersion() const { DARABONBA_PTR_GET_DEFAULT(IPVersion_, "") };
    inline DescribeMountTargetsResponseBodyMountTargetsMountTarget& setIPVersion(string IPVersion) { DARABONBA_PTR_SET_VALUE(IPVersion_, IPVersion) };


    // mountTargetDomain Field Functions 
    bool hasMountTargetDomain() const { return this->mountTargetDomain_ != nullptr;};
    void deleteMountTargetDomain() { this->mountTargetDomain_ = nullptr;};
    inline string mountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(mountTargetDomain_, "") };
    inline DescribeMountTargetsResponseBodyMountTargetsMountTarget& setMountTargetDomain(string mountTargetDomain) { DARABONBA_PTR_SET_VALUE(mountTargetDomain_, mountTargetDomain) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeMountTargetsResponseBodyMountTargetsMountTarget& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeMountTargetsResponseBodyMountTargetsMountTarget& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetTags) };
    inline Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetTags) };
    inline DescribeMountTargetsResponseBodyMountTargetsMountTarget& setTags(const Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeMountTargetsResponseBodyMountTargetsMountTarget& setTags(Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeMountTargetsResponseBodyMountTargetsMountTarget& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswId Field Functions 
    bool hasVswId() const { return this->vswId_ != nullptr;};
    void deleteVswId() { this->vswId_ = nullptr;};
    inline string vswId() const { DARABONBA_PTR_GET_DEFAULT(vswId_, "") };
    inline DescribeMountTargetsResponseBodyMountTargetsMountTarget& setVswId(string vswId) { DARABONBA_PTR_SET_VALUE(vswId_, vswId) };


  protected:
    // The name of the permission group that is attached to the mount target.
    std::shared_ptr<string> accessGroup_ = nullptr;
    // The information about client management nodes.
    std::shared_ptr<Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetClientMasterNodes> clientMasterNodes_ = nullptr;
    // The dual-stack (IPv4 and IPv6) domain name of the mount target.
    std::shared_ptr<string> dualStackMountTargetDomain_ = nullptr;
    // The type of the mount target.
    // 
    // *   IPv4: an IPv4 mount target
    // *   DualStack: a dual-stack mount target
    std::shared_ptr<string> IPVersion_ = nullptr;
    // The IPv4 domain name of the mount target.
    std::shared_ptr<string> mountTargetDomain_ = nullptr;
    // The network type. Valid value: **Vpc**.
    std::shared_ptr<string> networkType_ = nullptr;
    // The status of the mount target.
    // 
    // Valid values:
    // 
    // *   Active: The mount target is available.
    // *   Inactive: The mount target is unavailable.
    // *   Pending: The mount target is being created or modified.
    // *   Deleting: The mount target is being deleted.
    // *   Hibernating: The mount target is being hibernated.
    // *   Hibernated: The mount target is hibernated.
    // 
    // > You can mount a file system only when the mount target of the file system is in the Active state.
    std::shared_ptr<string> status_ = nullptr;
    // An array of tags. The array may contain up to 20 tags. If the array contains multiple tags, each tag key is unique.
    std::shared_ptr<Models::DescribeMountTargetsResponseBodyMountTargetsMountTargetTags> tags_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vswId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
