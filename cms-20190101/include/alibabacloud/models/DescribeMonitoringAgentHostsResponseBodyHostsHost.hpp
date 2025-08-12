// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTHOSTSRESPONSEBODYHOSTSHOST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTHOSTSRESPONSEBODYHOSTSHOST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitoringAgentHostsResponseBodyHostsHost : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitoringAgentHostsResponseBodyHostsHost& obj) { 
      DARABONBA_PTR_TO_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(EipAddress, eipAddress_);
      DARABONBA_PTR_TO_JSON(EipId, eipId_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_TO_JSON(IpGroup, ipGroup_);
      DARABONBA_PTR_TO_JSON(NatIp, natIp_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(OperatingSystem, operatingSystem_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(isAliyunHost, isAliyunHost_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitoringAgentHostsResponseBodyHostsHost& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentVersion, agentVersion_);
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(EipAddress, eipAddress_);
      DARABONBA_PTR_FROM_JSON(EipId, eipId_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_FROM_JSON(IpGroup, ipGroup_);
      DARABONBA_PTR_FROM_JSON(NatIp, natIp_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(OperatingSystem, operatingSystem_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(isAliyunHost, isAliyunHost_);
    };
    DescribeMonitoringAgentHostsResponseBodyHostsHost() = default ;
    DescribeMonitoringAgentHostsResponseBodyHostsHost(const DescribeMonitoringAgentHostsResponseBodyHostsHost &) = default ;
    DescribeMonitoringAgentHostsResponseBodyHostsHost(DescribeMonitoringAgentHostsResponseBodyHostsHost &&) = default ;
    DescribeMonitoringAgentHostsResponseBodyHostsHost(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitoringAgentHostsResponseBodyHostsHost() = default ;
    DescribeMonitoringAgentHostsResponseBodyHostsHost& operator=(const DescribeMonitoringAgentHostsResponseBodyHostsHost &) = default ;
    DescribeMonitoringAgentHostsResponseBodyHostsHost& operator=(DescribeMonitoringAgentHostsResponseBodyHostsHost &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentVersion_ != nullptr
        && this->aliUid_ != nullptr && this->eipAddress_ != nullptr && this->eipId_ != nullptr && this->hostName_ != nullptr && this->instanceId_ != nullptr
        && this->instanceTypeFamily_ != nullptr && this->ipGroup_ != nullptr && this->natIp_ != nullptr && this->networkType_ != nullptr && this->operatingSystem_ != nullptr
        && this->region_ != nullptr && this->serialNumber_ != nullptr && this->isAliyunHost_ != nullptr; };
    // agentVersion Field Functions 
    bool hasAgentVersion() const { return this->agentVersion_ != nullptr;};
    void deleteAgentVersion() { this->agentVersion_ = nullptr;};
    inline string agentVersion() const { DARABONBA_PTR_GET_DEFAULT(agentVersion_, "") };
    inline DescribeMonitoringAgentHostsResponseBodyHostsHost& setAgentVersion(string agentVersion) { DARABONBA_PTR_SET_VALUE(agentVersion_, agentVersion) };


    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline DescribeMonitoringAgentHostsResponseBodyHostsHost& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // eipAddress Field Functions 
    bool hasEipAddress() const { return this->eipAddress_ != nullptr;};
    void deleteEipAddress() { this->eipAddress_ = nullptr;};
    inline string eipAddress() const { DARABONBA_PTR_GET_DEFAULT(eipAddress_, "") };
    inline DescribeMonitoringAgentHostsResponseBodyHostsHost& setEipAddress(string eipAddress) { DARABONBA_PTR_SET_VALUE(eipAddress_, eipAddress) };


    // eipId Field Functions 
    bool hasEipId() const { return this->eipId_ != nullptr;};
    void deleteEipId() { this->eipId_ = nullptr;};
    inline string eipId() const { DARABONBA_PTR_GET_DEFAULT(eipId_, "") };
    inline DescribeMonitoringAgentHostsResponseBodyHostsHost& setEipId(string eipId) { DARABONBA_PTR_SET_VALUE(eipId_, eipId) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline DescribeMonitoringAgentHostsResponseBodyHostsHost& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeMonitoringAgentHostsResponseBodyHostsHost& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceTypeFamily Field Functions 
    bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
    void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
    inline string instanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
    inline DescribeMonitoringAgentHostsResponseBodyHostsHost& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


    // ipGroup Field Functions 
    bool hasIpGroup() const { return this->ipGroup_ != nullptr;};
    void deleteIpGroup() { this->ipGroup_ = nullptr;};
    inline string ipGroup() const { DARABONBA_PTR_GET_DEFAULT(ipGroup_, "") };
    inline DescribeMonitoringAgentHostsResponseBodyHostsHost& setIpGroup(string ipGroup) { DARABONBA_PTR_SET_VALUE(ipGroup_, ipGroup) };


    // natIp Field Functions 
    bool hasNatIp() const { return this->natIp_ != nullptr;};
    void deleteNatIp() { this->natIp_ = nullptr;};
    inline string natIp() const { DARABONBA_PTR_GET_DEFAULT(natIp_, "") };
    inline DescribeMonitoringAgentHostsResponseBodyHostsHost& setNatIp(string natIp) { DARABONBA_PTR_SET_VALUE(natIp_, natIp) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeMonitoringAgentHostsResponseBodyHostsHost& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // operatingSystem Field Functions 
    bool hasOperatingSystem() const { return this->operatingSystem_ != nullptr;};
    void deleteOperatingSystem() { this->operatingSystem_ = nullptr;};
    inline string operatingSystem() const { DARABONBA_PTR_GET_DEFAULT(operatingSystem_, "") };
    inline DescribeMonitoringAgentHostsResponseBodyHostsHost& setOperatingSystem(string operatingSystem) { DARABONBA_PTR_SET_VALUE(operatingSystem_, operatingSystem) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeMonitoringAgentHostsResponseBodyHostsHost& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline DescribeMonitoringAgentHostsResponseBodyHostsHost& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // isAliyunHost Field Functions 
    bool hasIsAliyunHost() const { return this->isAliyunHost_ != nullptr;};
    void deleteIsAliyunHost() { this->isAliyunHost_ = nullptr;};
    inline bool isAliyunHost() const { DARABONBA_PTR_GET_DEFAULT(isAliyunHost_, false) };
    inline DescribeMonitoringAgentHostsResponseBodyHostsHost& setIsAliyunHost(bool isAliyunHost) { DARABONBA_PTR_SET_VALUE(isAliyunHost_, isAliyunHost) };


  protected:
    // The version of the CloudMonitor agent.
    std::shared_ptr<string> agentVersion_ = nullptr;
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The elastic IP address (EIP) of the host.
    std::shared_ptr<string> eipAddress_ = nullptr;
    // The ID of the EIP.
    std::shared_ptr<string> eipId_ = nullptr;
    // The name of the host.
    std::shared_ptr<string> hostName_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of the ECS instance.
    std::shared_ptr<string> instanceTypeFamily_ = nullptr;
    // The IP address of the host.
    // 
    // > Multiple IP addresses are separated with commas (,).
    std::shared_ptr<string> ipGroup_ = nullptr;
    // The IP address of the Network Address Translation (NAT) gateway.
    std::shared_ptr<string> natIp_ = nullptr;
    // The network type.
    std::shared_ptr<string> networkType_ = nullptr;
    // The operating system.
    std::shared_ptr<string> operatingSystem_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> region_ = nullptr;
    // The serial number of the host. A host that is not provided by Alibaba Cloud has a serial number instead of an instance ID.
    // 
    // > This parameter can be used to accurately search for a monitored host.
    std::shared_ptr<string> serialNumber_ = nullptr;
    // Indicates whether the host is provided by Alibaba Cloud. Valid values:
    // 
    // *   true: The host is provided by Alibaba Cloud.
    // *   false: The host is not provided by Alibaba Cloud.
    std::shared_ptr<bool> isAliyunHost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
