// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROBETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROBETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class UpdateProbeTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProbeTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(PacketNumber, packetNumber_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ProbeTaskId, probeTaskId_);
      DARABONBA_PTR_TO_JSON(ProbeTaskSourceAddress, probeTaskSourceAddress_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SagId, sagId_);
      DARABONBA_PTR_TO_JSON(Sn, sn_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProbeTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(PacketNumber, packetNumber_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ProbeTaskId, probeTaskId_);
      DARABONBA_PTR_FROM_JSON(ProbeTaskSourceAddress, probeTaskSourceAddress_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SagId, sagId_);
      DARABONBA_PTR_FROM_JSON(Sn, sn_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    UpdateProbeTaskRequest() = default ;
    UpdateProbeTaskRequest(const UpdateProbeTaskRequest &) = default ;
    UpdateProbeTaskRequest(UpdateProbeTaskRequest &&) = default ;
    UpdateProbeTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProbeTaskRequest() = default ;
    UpdateProbeTaskRequest& operator=(const UpdateProbeTaskRequest &) = default ;
    UpdateProbeTaskRequest& operator=(UpdateProbeTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && this->enable_ == nullptr && this->packetNumber_ == nullptr && this->port_ == nullptr && this->probeTaskId_ == nullptr && this->probeTaskSourceAddress_ == nullptr
        && this->protocol_ == nullptr && this->regionId_ == nullptr && this->sagId_ == nullptr && this->sn_ == nullptr && this->taskName_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline UpdateProbeTaskRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline UpdateProbeTaskRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // packetNumber Field Functions 
    bool hasPacketNumber() const { return this->packetNumber_ != nullptr;};
    void deletePacketNumber() { this->packetNumber_ = nullptr;};
    inline int32_t getPacketNumber() const { DARABONBA_PTR_GET_DEFAULT(packetNumber_, 0) };
    inline UpdateProbeTaskRequest& setPacketNumber(int32_t packetNumber) { DARABONBA_PTR_SET_VALUE(packetNumber_, packetNumber) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline UpdateProbeTaskRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // probeTaskId Field Functions 
    bool hasProbeTaskId() const { return this->probeTaskId_ != nullptr;};
    void deleteProbeTaskId() { this->probeTaskId_ = nullptr;};
    inline string getProbeTaskId() const { DARABONBA_PTR_GET_DEFAULT(probeTaskId_, "") };
    inline UpdateProbeTaskRequest& setProbeTaskId(string probeTaskId) { DARABONBA_PTR_SET_VALUE(probeTaskId_, probeTaskId) };


    // probeTaskSourceAddress Field Functions 
    bool hasProbeTaskSourceAddress() const { return this->probeTaskSourceAddress_ != nullptr;};
    void deleteProbeTaskSourceAddress() { this->probeTaskSourceAddress_ = nullptr;};
    inline string getProbeTaskSourceAddress() const { DARABONBA_PTR_GET_DEFAULT(probeTaskSourceAddress_, "") };
    inline UpdateProbeTaskRequest& setProbeTaskSourceAddress(string probeTaskSourceAddress) { DARABONBA_PTR_SET_VALUE(probeTaskSourceAddress_, probeTaskSourceAddress) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdateProbeTaskRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateProbeTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sagId Field Functions 
    bool hasSagId() const { return this->sagId_ != nullptr;};
    void deleteSagId() { this->sagId_ = nullptr;};
    inline string getSagId() const { DARABONBA_PTR_GET_DEFAULT(sagId_, "") };
    inline UpdateProbeTaskRequest& setSagId(string sagId) { DARABONBA_PTR_SET_VALUE(sagId_, sagId) };


    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string getSn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline UpdateProbeTaskRequest& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline UpdateProbeTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The domain name that is probed by the task.
    // 
    // If the protocol of the probe task is ICMP or TCP, set the value to the IP address or domain name of the service that you want to probe. If the protocol of the probe task is HTTP, set the value to the URL of the service that you want to probe.
    shared_ptr<string> domain_ {};
    // Specifies whether to enable the probe task. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    shared_ptr<bool> enable_ {};
    // The number of probe packets transmitted by the probe task per minute.
    // 
    // Valid values: **1** to **60**.
    // 
    // > This parameter is required if the protocol of the probe task is ICMP. Ignore this parameter if the protocol of the probe task is not ICMP.
    shared_ptr<int32_t> packetNumber_ {};
    // The port that is probed by the task.
    // 
    // > This parameter is required if the protocol of the probe task is TCP. Ignore this parameter if the protocol of the probe task is not TCP.
    shared_ptr<int32_t> port_ {};
    // The ID of the probe task.
    // 
    // This parameter is required.
    shared_ptr<string> probeTaskId_ {};
    // The source address of the probe task.
    // 
    // > This parameter is required if the task probes private networks.
    shared_ptr<string> probeTaskSourceAddress_ {};
    // The protocol of the probe task. Valid values:
    // 
    // *   **ICMP**
    // *   **TCP**
    // *   **HTTP**
    // 
    // > Tasks that probe private networks support only ICMP and TCP.
    shared_ptr<string> protocol_ {};
    // The region ID of the SAG instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/69813.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the Smart Access Gateway (SAG) instance.
    // 
    // This parameter is required.
    shared_ptr<string> sagId_ {};
    // The serial number of the SAG device.
    // 
    // This parameter is required.
    shared_ptr<string> sn_ {};
    // The name of the probe task.
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
