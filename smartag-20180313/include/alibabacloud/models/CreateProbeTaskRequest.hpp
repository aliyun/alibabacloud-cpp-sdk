// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROBETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROBETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class CreateProbeTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProbeTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(PacketNumber, packetNumber_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ProbeTaskSourceAddress, probeTaskSourceAddress_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SagId, sagId_);
      DARABONBA_PTR_TO_JSON(Sn, sn_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProbeTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(PacketNumber, packetNumber_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ProbeTaskSourceAddress, probeTaskSourceAddress_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SagId, sagId_);
      DARABONBA_PTR_FROM_JSON(Sn, sn_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateProbeTaskRequest() = default ;
    CreateProbeTaskRequest(const CreateProbeTaskRequest &) = default ;
    CreateProbeTaskRequest(CreateProbeTaskRequest &&) = default ;
    CreateProbeTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProbeTaskRequest() = default ;
    CreateProbeTaskRequest& operator=(const CreateProbeTaskRequest &) = default ;
    CreateProbeTaskRequest& operator=(CreateProbeTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && this->enable_ == nullptr && this->packetNumber_ == nullptr && this->port_ == nullptr && this->probeTaskSourceAddress_ == nullptr && this->protocol_ == nullptr
        && this->regionId_ == nullptr && this->sagId_ == nullptr && this->sn_ == nullptr && this->taskName_ == nullptr && this->type_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateProbeTaskRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreateProbeTaskRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // packetNumber Field Functions 
    bool hasPacketNumber() const { return this->packetNumber_ != nullptr;};
    void deletePacketNumber() { this->packetNumber_ = nullptr;};
    inline int32_t getPacketNumber() const { DARABONBA_PTR_GET_DEFAULT(packetNumber_, 0) };
    inline CreateProbeTaskRequest& setPacketNumber(int32_t packetNumber) { DARABONBA_PTR_SET_VALUE(packetNumber_, packetNumber) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline CreateProbeTaskRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // probeTaskSourceAddress Field Functions 
    bool hasProbeTaskSourceAddress() const { return this->probeTaskSourceAddress_ != nullptr;};
    void deleteProbeTaskSourceAddress() { this->probeTaskSourceAddress_ = nullptr;};
    inline string getProbeTaskSourceAddress() const { DARABONBA_PTR_GET_DEFAULT(probeTaskSourceAddress_, "") };
    inline CreateProbeTaskRequest& setProbeTaskSourceAddress(string probeTaskSourceAddress) { DARABONBA_PTR_SET_VALUE(probeTaskSourceAddress_, probeTaskSourceAddress) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateProbeTaskRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateProbeTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sagId Field Functions 
    bool hasSagId() const { return this->sagId_ != nullptr;};
    void deleteSagId() { this->sagId_ = nullptr;};
    inline string getSagId() const { DARABONBA_PTR_GET_DEFAULT(sagId_, "") };
    inline CreateProbeTaskRequest& setSagId(string sagId) { DARABONBA_PTR_SET_VALUE(sagId_, sagId) };


    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string getSn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline CreateProbeTaskRequest& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateProbeTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateProbeTaskRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The destination domain name of the probe node.
    // For ICMP and TCP Protocol Type probes, set this parameter to the IP address or domain name of the destination service. For HTTP Protocol Type probes, set this parameter to the URL of the destination service.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // Specifies whether to enable the probe task. Valid values:
    // 
    // - **true**: Enabled.
    // - **false**: Disabled.
    // 
    // This parameter is required.
    shared_ptr<bool> enable_ {};
    // The number of packets sent per minute for the probe protocol.
    // 
    // Valid values: **1** to **60**.
    // 
    // > This parameter is required for ICMP Protocol Type probe tasks. Do not specify this parameter for other protocols.
    shared_ptr<int32_t> packetNumber_ {};
    // The port number of the probe protocol.
    // 
    // > This parameter is required for TCP Protocol Type probe tasks. Do not specify this parameter for other protocols.
    shared_ptr<int32_t> port_ {};
    // The source address for the private network probe.
    // 
    // > This parameter is required for private network probe tasks.
    shared_ptr<string> probeTaskSourceAddress_ {};
    // The protocol of the probe task. Valid values:
    // 
    // - **ICMP**.
    // - **TCP**.
    // - **HTTP**.
    // 
    // > Private network probes support only the ICMP and TCP protocols.
    // 
    // This parameter is required.
    shared_ptr<string> protocol_ {};
    // The region ID of the Smart Access Gateway instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/69813.html) operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The instance ID of the Smart Access Gateway.
    // 
    // This parameter is required.
    shared_ptr<string> sagId_ {};
    // The serial number of the Smart Access Gateway device.
    // 
    // This parameter is required.
    shared_ptr<string> sn_ {};
    // The name of the probe task.
    shared_ptr<string> taskName_ {};
    // The type of the probe task. Valid values:
    // 
    // - **Internet**: public network probe.
    // 
    // - **Intranet**: private network probe.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
