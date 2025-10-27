// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHONEYPOTPROBERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETHONEYPOTPROBERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetHoneypotProbeResponseBodyDataControlNode.hpp>
#include <alibabacloud/models/GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort.hpp>
#include <alibabacloud/models/GetHoneypotProbeResponseBodyDataHoneypotProbeBindList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetHoneypotProbeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHoneypotProbeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Arp, arp_);
      DARABONBA_PTR_TO_JSON(CanListenIpList, canListenIpList_);
      DARABONBA_PTR_TO_JSON(CidrList, cidrList_);
      DARABONBA_PTR_TO_JSON(ControlNode, controlNode_);
      DARABONBA_PTR_TO_JSON(CpuLoad, cpuLoad_);
      DARABONBA_PTR_TO_JSON(DeployTime, deployTime_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(HoneyPotProbeScanPort, honeyPotProbeScanPort_);
      DARABONBA_PTR_TO_JSON(HoneypotProbeBindList, honeypotProbeBindList_);
      DARABONBA_PTR_TO_JSON(HostIp, hostIp_);
      DARABONBA_PTR_TO_JSON(ListenIpList, listenIpList_);
      DARABONBA_PTR_TO_JSON(MemoryLoad, memoryLoad_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(Ping, ping_);
      DARABONBA_PTR_TO_JSON(ProbeId, probeId_);
      DARABONBA_PTR_TO_JSON(ProbeType, probeType_);
      DARABONBA_PTR_TO_JSON(ProbeVersion, probeVersion_);
      DARABONBA_PTR_TO_JSON(ProxyIp, proxyIp_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHoneypotProbeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Arp, arp_);
      DARABONBA_PTR_FROM_JSON(CanListenIpList, canListenIpList_);
      DARABONBA_PTR_FROM_JSON(CidrList, cidrList_);
      DARABONBA_PTR_FROM_JSON(ControlNode, controlNode_);
      DARABONBA_PTR_FROM_JSON(CpuLoad, cpuLoad_);
      DARABONBA_PTR_FROM_JSON(DeployTime, deployTime_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(HoneyPotProbeScanPort, honeyPotProbeScanPort_);
      DARABONBA_PTR_FROM_JSON(HoneypotProbeBindList, honeypotProbeBindList_);
      DARABONBA_PTR_FROM_JSON(HostIp, hostIp_);
      DARABONBA_PTR_FROM_JSON(ListenIpList, listenIpList_);
      DARABONBA_PTR_FROM_JSON(MemoryLoad, memoryLoad_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(Ping, ping_);
      DARABONBA_PTR_FROM_JSON(ProbeId, probeId_);
      DARABONBA_PTR_FROM_JSON(ProbeType, probeType_);
      DARABONBA_PTR_FROM_JSON(ProbeVersion, probeVersion_);
      DARABONBA_PTR_FROM_JSON(ProxyIp, proxyIp_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    GetHoneypotProbeResponseBodyData() = default ;
    GetHoneypotProbeResponseBodyData(const GetHoneypotProbeResponseBodyData &) = default ;
    GetHoneypotProbeResponseBodyData(GetHoneypotProbeResponseBodyData &&) = default ;
    GetHoneypotProbeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHoneypotProbeResponseBodyData() = default ;
    GetHoneypotProbeResponseBodyData& operator=(const GetHoneypotProbeResponseBodyData &) = default ;
    GetHoneypotProbeResponseBodyData& operator=(GetHoneypotProbeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arp_ == nullptr
        && return this->canListenIpList_ == nullptr && return this->cidrList_ == nullptr && return this->controlNode_ == nullptr && return this->cpuLoad_ == nullptr && return this->deployTime_ == nullptr
        && return this->displayName_ == nullptr && return this->honeyPotProbeScanPort_ == nullptr && return this->honeypotProbeBindList_ == nullptr && return this->hostIp_ == nullptr && return this->listenIpList_ == nullptr
        && return this->memoryLoad_ == nullptr && return this->osType_ == nullptr && return this->ping_ == nullptr && return this->probeId_ == nullptr && return this->probeType_ == nullptr
        && return this->probeVersion_ == nullptr && return this->proxyIp_ == nullptr && return this->status_ == nullptr && return this->uuid_ == nullptr && return this->vpcId_ == nullptr; };
    // arp Field Functions 
    bool hasArp() const { return this->arp_ != nullptr;};
    void deleteArp() { this->arp_ = nullptr;};
    inline bool arp() const { DARABONBA_PTR_GET_DEFAULT(arp_, false) };
    inline GetHoneypotProbeResponseBodyData& setArp(bool arp) { DARABONBA_PTR_SET_VALUE(arp_, arp) };


    // canListenIpList Field Functions 
    bool hasCanListenIpList() const { return this->canListenIpList_ != nullptr;};
    void deleteCanListenIpList() { this->canListenIpList_ = nullptr;};
    inline const vector<string> & canListenIpList() const { DARABONBA_PTR_GET_CONST(canListenIpList_, vector<string>) };
    inline vector<string> canListenIpList() { DARABONBA_PTR_GET(canListenIpList_, vector<string>) };
    inline GetHoneypotProbeResponseBodyData& setCanListenIpList(const vector<string> & canListenIpList) { DARABONBA_PTR_SET_VALUE(canListenIpList_, canListenIpList) };
    inline GetHoneypotProbeResponseBodyData& setCanListenIpList(vector<string> && canListenIpList) { DARABONBA_PTR_SET_RVALUE(canListenIpList_, canListenIpList) };


    // cidrList Field Functions 
    bool hasCidrList() const { return this->cidrList_ != nullptr;};
    void deleteCidrList() { this->cidrList_ = nullptr;};
    inline const vector<string> & cidrList() const { DARABONBA_PTR_GET_CONST(cidrList_, vector<string>) };
    inline vector<string> cidrList() { DARABONBA_PTR_GET(cidrList_, vector<string>) };
    inline GetHoneypotProbeResponseBodyData& setCidrList(const vector<string> & cidrList) { DARABONBA_PTR_SET_VALUE(cidrList_, cidrList) };
    inline GetHoneypotProbeResponseBodyData& setCidrList(vector<string> && cidrList) { DARABONBA_PTR_SET_RVALUE(cidrList_, cidrList) };


    // controlNode Field Functions 
    bool hasControlNode() const { return this->controlNode_ != nullptr;};
    void deleteControlNode() { this->controlNode_ = nullptr;};
    inline const Models::GetHoneypotProbeResponseBodyDataControlNode & controlNode() const { DARABONBA_PTR_GET_CONST(controlNode_, Models::GetHoneypotProbeResponseBodyDataControlNode) };
    inline Models::GetHoneypotProbeResponseBodyDataControlNode controlNode() { DARABONBA_PTR_GET(controlNode_, Models::GetHoneypotProbeResponseBodyDataControlNode) };
    inline GetHoneypotProbeResponseBodyData& setControlNode(const Models::GetHoneypotProbeResponseBodyDataControlNode & controlNode) { DARABONBA_PTR_SET_VALUE(controlNode_, controlNode) };
    inline GetHoneypotProbeResponseBodyData& setControlNode(Models::GetHoneypotProbeResponseBodyDataControlNode && controlNode) { DARABONBA_PTR_SET_RVALUE(controlNode_, controlNode) };


    // cpuLoad Field Functions 
    bool hasCpuLoad() const { return this->cpuLoad_ != nullptr;};
    void deleteCpuLoad() { this->cpuLoad_ = nullptr;};
    inline double cpuLoad() const { DARABONBA_PTR_GET_DEFAULT(cpuLoad_, 0.0) };
    inline GetHoneypotProbeResponseBodyData& setCpuLoad(double cpuLoad) { DARABONBA_PTR_SET_VALUE(cpuLoad_, cpuLoad) };


    // deployTime Field Functions 
    bool hasDeployTime() const { return this->deployTime_ != nullptr;};
    void deleteDeployTime() { this->deployTime_ = nullptr;};
    inline int64_t deployTime() const { DARABONBA_PTR_GET_DEFAULT(deployTime_, 0L) };
    inline GetHoneypotProbeResponseBodyData& setDeployTime(int64_t deployTime) { DARABONBA_PTR_SET_VALUE(deployTime_, deployTime) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetHoneypotProbeResponseBodyData& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // honeyPotProbeScanPort Field Functions 
    bool hasHoneyPotProbeScanPort() const { return this->honeyPotProbeScanPort_ != nullptr;};
    void deleteHoneyPotProbeScanPort() { this->honeyPotProbeScanPort_ = nullptr;};
    inline const Models::GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort & honeyPotProbeScanPort() const { DARABONBA_PTR_GET_CONST(honeyPotProbeScanPort_, Models::GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort) };
    inline Models::GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort honeyPotProbeScanPort() { DARABONBA_PTR_GET(honeyPotProbeScanPort_, Models::GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort) };
    inline GetHoneypotProbeResponseBodyData& setHoneyPotProbeScanPort(const Models::GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort & honeyPotProbeScanPort) { DARABONBA_PTR_SET_VALUE(honeyPotProbeScanPort_, honeyPotProbeScanPort) };
    inline GetHoneypotProbeResponseBodyData& setHoneyPotProbeScanPort(Models::GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort && honeyPotProbeScanPort) { DARABONBA_PTR_SET_RVALUE(honeyPotProbeScanPort_, honeyPotProbeScanPort) };


    // honeypotProbeBindList Field Functions 
    bool hasHoneypotProbeBindList() const { return this->honeypotProbeBindList_ != nullptr;};
    void deleteHoneypotProbeBindList() { this->honeypotProbeBindList_ = nullptr;};
    inline const vector<Models::GetHoneypotProbeResponseBodyDataHoneypotProbeBindList> & honeypotProbeBindList() const { DARABONBA_PTR_GET_CONST(honeypotProbeBindList_, vector<Models::GetHoneypotProbeResponseBodyDataHoneypotProbeBindList>) };
    inline vector<Models::GetHoneypotProbeResponseBodyDataHoneypotProbeBindList> honeypotProbeBindList() { DARABONBA_PTR_GET(honeypotProbeBindList_, vector<Models::GetHoneypotProbeResponseBodyDataHoneypotProbeBindList>) };
    inline GetHoneypotProbeResponseBodyData& setHoneypotProbeBindList(const vector<Models::GetHoneypotProbeResponseBodyDataHoneypotProbeBindList> & honeypotProbeBindList) { DARABONBA_PTR_SET_VALUE(honeypotProbeBindList_, honeypotProbeBindList) };
    inline GetHoneypotProbeResponseBodyData& setHoneypotProbeBindList(vector<Models::GetHoneypotProbeResponseBodyDataHoneypotProbeBindList> && honeypotProbeBindList) { DARABONBA_PTR_SET_RVALUE(honeypotProbeBindList_, honeypotProbeBindList) };


    // hostIp Field Functions 
    bool hasHostIp() const { return this->hostIp_ != nullptr;};
    void deleteHostIp() { this->hostIp_ = nullptr;};
    inline string hostIp() const { DARABONBA_PTR_GET_DEFAULT(hostIp_, "") };
    inline GetHoneypotProbeResponseBodyData& setHostIp(string hostIp) { DARABONBA_PTR_SET_VALUE(hostIp_, hostIp) };


    // listenIpList Field Functions 
    bool hasListenIpList() const { return this->listenIpList_ != nullptr;};
    void deleteListenIpList() { this->listenIpList_ = nullptr;};
    inline const vector<string> & listenIpList() const { DARABONBA_PTR_GET_CONST(listenIpList_, vector<string>) };
    inline vector<string> listenIpList() { DARABONBA_PTR_GET(listenIpList_, vector<string>) };
    inline GetHoneypotProbeResponseBodyData& setListenIpList(const vector<string> & listenIpList) { DARABONBA_PTR_SET_VALUE(listenIpList_, listenIpList) };
    inline GetHoneypotProbeResponseBodyData& setListenIpList(vector<string> && listenIpList) { DARABONBA_PTR_SET_RVALUE(listenIpList_, listenIpList) };


    // memoryLoad Field Functions 
    bool hasMemoryLoad() const { return this->memoryLoad_ != nullptr;};
    void deleteMemoryLoad() { this->memoryLoad_ = nullptr;};
    inline double memoryLoad() const { DARABONBA_PTR_GET_DEFAULT(memoryLoad_, 0.0) };
    inline GetHoneypotProbeResponseBodyData& setMemoryLoad(double memoryLoad) { DARABONBA_PTR_SET_VALUE(memoryLoad_, memoryLoad) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline string osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
    inline GetHoneypotProbeResponseBodyData& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // ping Field Functions 
    bool hasPing() const { return this->ping_ != nullptr;};
    void deletePing() { this->ping_ = nullptr;};
    inline bool ping() const { DARABONBA_PTR_GET_DEFAULT(ping_, false) };
    inline GetHoneypotProbeResponseBodyData& setPing(bool ping) { DARABONBA_PTR_SET_VALUE(ping_, ping) };


    // probeId Field Functions 
    bool hasProbeId() const { return this->probeId_ != nullptr;};
    void deleteProbeId() { this->probeId_ = nullptr;};
    inline string probeId() const { DARABONBA_PTR_GET_DEFAULT(probeId_, "") };
    inline GetHoneypotProbeResponseBodyData& setProbeId(string probeId) { DARABONBA_PTR_SET_VALUE(probeId_, probeId) };


    // probeType Field Functions 
    bool hasProbeType() const { return this->probeType_ != nullptr;};
    void deleteProbeType() { this->probeType_ = nullptr;};
    inline string probeType() const { DARABONBA_PTR_GET_DEFAULT(probeType_, "") };
    inline GetHoneypotProbeResponseBodyData& setProbeType(string probeType) { DARABONBA_PTR_SET_VALUE(probeType_, probeType) };


    // probeVersion Field Functions 
    bool hasProbeVersion() const { return this->probeVersion_ != nullptr;};
    void deleteProbeVersion() { this->probeVersion_ = nullptr;};
    inline string probeVersion() const { DARABONBA_PTR_GET_DEFAULT(probeVersion_, "") };
    inline GetHoneypotProbeResponseBodyData& setProbeVersion(string probeVersion) { DARABONBA_PTR_SET_VALUE(probeVersion_, probeVersion) };


    // proxyIp Field Functions 
    bool hasProxyIp() const { return this->proxyIp_ != nullptr;};
    void deleteProxyIp() { this->proxyIp_ = nullptr;};
    inline string proxyIp() const { DARABONBA_PTR_GET_DEFAULT(proxyIp_, "") };
    inline GetHoneypotProbeResponseBodyData& setProxyIp(string proxyIp) { DARABONBA_PTR_SET_VALUE(proxyIp_, proxyIp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetHoneypotProbeResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetHoneypotProbeResponseBodyData& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetHoneypotProbeResponseBodyData& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // Indicates whether address resolution protocol (ARP) is enabled for the check type.
    std::shared_ptr<bool> arp_ = nullptr;
    // An array consisting of the IP addresses that can be monitored.
    std::shared_ptr<vector<string>> canListenIpList_ = nullptr;
    // The CIDR blocks of the probe deployed in a virtual private cloud (VPC).
    std::shared_ptr<vector<string>> cidrList_ = nullptr;
    // The information about the management node.
    std::shared_ptr<Models::GetHoneypotProbeResponseBodyDataControlNode> controlNode_ = nullptr;
    // The CPU utilization.
    std::shared_ptr<double> cpuLoad_ = nullptr;
    // The time when the probe was deployed.
    std::shared_ptr<int64_t> deployTime_ = nullptr;
    // The name of the probe.
    std::shared_ptr<string> displayName_ = nullptr;
    // The ports that the honeypot monitors.
    std::shared_ptr<Models::GetHoneypotProbeResponseBodyDataHoneyPotProbeScanPort> honeyPotProbeScanPort_ = nullptr;
    // The honeypots that are bound to the probe.
    std::shared_ptr<vector<Models::GetHoneypotProbeResponseBodyDataHoneypotProbeBindList>> honeypotProbeBindList_ = nullptr;
    // The IP address of the server on which the probe is deployed.
    std::shared_ptr<string> hostIp_ = nullptr;
    // An array consisting of the IP addresses that can be monitored.
    std::shared_ptr<vector<string>> listenIpList_ = nullptr;
    // The memory usage.
    std::shared_ptr<double> memoryLoad_ = nullptr;
    // The operating system of the server on which the probe is deployed. Valid values:
    // 
    // *   windows
    // *   linux
    std::shared_ptr<string> osType_ = nullptr;
    // Indicates whether ping is enabled for the check type.
    std::shared_ptr<bool> ping_ = nullptr;
    // The ID of the probe.
    std::shared_ptr<string> probeId_ = nullptr;
    // The type of the probe. Valid values:
    // 
    // *   **host_probe**: host probe
    // *   **vpc_black_hole_probe**: virtual private cloud (VPC) probe
    std::shared_ptr<string> probeType_ = nullptr;
    // The version of the probe.
    std::shared_ptr<string> probeVersion_ = nullptr;
    // The IP address of the proxy server.
    std::shared_ptr<string> proxyIp_ = nullptr;
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
    std::shared_ptr<int32_t> status_ = nullptr;
    // The UUID of the asset on which the host probe is deployed.
    std::shared_ptr<string> uuid_ = nullptr;
    // The ID of the VPC in which the probe is deployed.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
