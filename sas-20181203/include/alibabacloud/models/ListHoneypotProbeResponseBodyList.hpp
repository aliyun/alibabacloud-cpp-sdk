// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHONEYPOTPROBERESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTHONEYPOTPROBERESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListHoneypotProbeResponseBodyListControlNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListHoneypotProbeResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHoneypotProbeResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(ControlNode, controlNode_);
      DARABONBA_PTR_TO_JSON(DeployTime, deployTime_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(HostIp, hostIp_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(ProbeId, probeId_);
      DARABONBA_PTR_TO_JSON(ProbeType, probeType_);
      DARABONBA_PTR_TO_JSON(ProbeVersion, probeVersion_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHoneypotProbeResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlNode, controlNode_);
      DARABONBA_PTR_FROM_JSON(DeployTime, deployTime_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(HostIp, hostIp_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(ProbeId, probeId_);
      DARABONBA_PTR_FROM_JSON(ProbeType, probeType_);
      DARABONBA_PTR_FROM_JSON(ProbeVersion, probeVersion_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListHoneypotProbeResponseBodyList() = default ;
    ListHoneypotProbeResponseBodyList(const ListHoneypotProbeResponseBodyList &) = default ;
    ListHoneypotProbeResponseBodyList(ListHoneypotProbeResponseBodyList &&) = default ;
    ListHoneypotProbeResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHoneypotProbeResponseBodyList() = default ;
    ListHoneypotProbeResponseBodyList& operator=(const ListHoneypotProbeResponseBodyList &) = default ;
    ListHoneypotProbeResponseBodyList& operator=(ListHoneypotProbeResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->controlNode_ != nullptr
        && this->deployTime_ != nullptr && this->displayName_ != nullptr && this->hostIp_ != nullptr && this->osType_ != nullptr && this->probeId_ != nullptr
        && this->probeType_ != nullptr && this->probeVersion_ != nullptr && this->status_ != nullptr && this->uuid_ != nullptr && this->vpcId_ != nullptr; };
    // controlNode Field Functions 
    bool hasControlNode() const { return this->controlNode_ != nullptr;};
    void deleteControlNode() { this->controlNode_ = nullptr;};
    inline const Models::ListHoneypotProbeResponseBodyListControlNode & controlNode() const { DARABONBA_PTR_GET_CONST(controlNode_, Models::ListHoneypotProbeResponseBodyListControlNode) };
    inline Models::ListHoneypotProbeResponseBodyListControlNode controlNode() { DARABONBA_PTR_GET(controlNode_, Models::ListHoneypotProbeResponseBodyListControlNode) };
    inline ListHoneypotProbeResponseBodyList& setControlNode(const Models::ListHoneypotProbeResponseBodyListControlNode & controlNode) { DARABONBA_PTR_SET_VALUE(controlNode_, controlNode) };
    inline ListHoneypotProbeResponseBodyList& setControlNode(Models::ListHoneypotProbeResponseBodyListControlNode && controlNode) { DARABONBA_PTR_SET_RVALUE(controlNode_, controlNode) };


    // deployTime Field Functions 
    bool hasDeployTime() const { return this->deployTime_ != nullptr;};
    void deleteDeployTime() { this->deployTime_ = nullptr;};
    inline int64_t deployTime() const { DARABONBA_PTR_GET_DEFAULT(deployTime_, 0L) };
    inline ListHoneypotProbeResponseBodyList& setDeployTime(int64_t deployTime) { DARABONBA_PTR_SET_VALUE(deployTime_, deployTime) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListHoneypotProbeResponseBodyList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // hostIp Field Functions 
    bool hasHostIp() const { return this->hostIp_ != nullptr;};
    void deleteHostIp() { this->hostIp_ = nullptr;};
    inline string hostIp() const { DARABONBA_PTR_GET_DEFAULT(hostIp_, "") };
    inline ListHoneypotProbeResponseBodyList& setHostIp(string hostIp) { DARABONBA_PTR_SET_VALUE(hostIp_, hostIp) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline ListHoneypotProbeResponseBodyList& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // probeId Field Functions 
    bool hasProbeId() const { return this->probeId_ != nullptr;};
    void deleteProbeId() { this->probeId_ = nullptr;};
    inline string probeId() const { DARABONBA_PTR_GET_DEFAULT(probeId_, "") };
    inline ListHoneypotProbeResponseBodyList& setProbeId(string probeId) { DARABONBA_PTR_SET_VALUE(probeId_, probeId) };


    // probeType Field Functions 
    bool hasProbeType() const { return this->probeType_ != nullptr;};
    void deleteProbeType() { this->probeType_ = nullptr;};
    inline string probeType() const { DARABONBA_PTR_GET_DEFAULT(probeType_, "") };
    inline ListHoneypotProbeResponseBodyList& setProbeType(string probeType) { DARABONBA_PTR_SET_VALUE(probeType_, probeType) };


    // probeVersion Field Functions 
    bool hasProbeVersion() const { return this->probeVersion_ != nullptr;};
    void deleteProbeVersion() { this->probeVersion_ = nullptr;};
    inline string probeVersion() const { DARABONBA_PTR_GET_DEFAULT(probeVersion_, "") };
    inline ListHoneypotProbeResponseBodyList& setProbeVersion(string probeVersion) { DARABONBA_PTR_SET_VALUE(probeVersion_, probeVersion) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListHoneypotProbeResponseBodyList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListHoneypotProbeResponseBodyList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListHoneypotProbeResponseBodyList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The information about the management node.
    std::shared_ptr<Models::ListHoneypotProbeResponseBodyListControlNode> controlNode_ = nullptr;
    // The time when the probe was deployed.
    std::shared_ptr<int64_t> deployTime_ = nullptr;
    // The name of the probe.
    std::shared_ptr<string> displayName_ = nullptr;
    // The IP address of the server on which the probe is installed.
    std::shared_ptr<string> hostIp_ = nullptr;
    // The operating system of the server on which the probe is deployed. Valid values:
    // 
    // *   windows
    // *   linux
    std::shared_ptr<string> osType_ = nullptr;
    // The ID of the probe.
    std::shared_ptr<string> probeId_ = nullptr;
    // The type of the probe. Valid values:
    // 
    // *   **host_probe**: host probe
    // *   **vpc_black_hole_probe**: VPC probe
    std::shared_ptr<string> probeType_ = nullptr;
    // The version of the probe.
    std::shared_ptr<string> probeVersion_ = nullptr;
    // The status of the probe. Valid values:
    // 
    // *   **installed**: installed
    // *   **install_failed**: installation failed
    // *   **online**: online
    // *   **offline**: offline
    // *   **unnormal**: abnormal
    // *   **unprobe**: unauthorized
    // *   **uninstalling**: being uninstalled
    // *   **uninstalled**: uninstalled
    // *   **uninstall_failed**: uninstallation failed
    // *   **not_exist**: not installed
    std::shared_ptr<string> status_ = nullptr;
    // The UUID of the server to which the host probe is deployed.
    std::shared_ptr<string> uuid_ = nullptr;
    // The ID of the VPC in which the VPC probe is deployed.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
