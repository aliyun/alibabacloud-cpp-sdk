// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESMARTACCESSGATEWAYDNSFORWARDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESMARTACCESSGATEWAYDNSFORWARDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class UpdateSmartAccessGatewayDnsForwardRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSmartAccessGatewayDnsForwardRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MasterIp, masterIp_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(OutboundPortIndex, outboundPortIndex_);
      DARABONBA_PTR_TO_JSON(OutboundPortName, outboundPortName_);
      DARABONBA_PTR_TO_JSON(OutboundPortType, outboundPortType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SagInsId, sagInsId_);
      DARABONBA_PTR_TO_JSON(SagSn, sagSn_);
      DARABONBA_PTR_TO_JSON(SlaveIp, slaveIp_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSmartAccessGatewayDnsForwardRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MasterIp, masterIp_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(OutboundPortIndex, outboundPortIndex_);
      DARABONBA_PTR_FROM_JSON(OutboundPortName, outboundPortName_);
      DARABONBA_PTR_FROM_JSON(OutboundPortType, outboundPortType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SagInsId, sagInsId_);
      DARABONBA_PTR_FROM_JSON(SagSn, sagSn_);
      DARABONBA_PTR_FROM_JSON(SlaveIp, slaveIp_);
    };
    UpdateSmartAccessGatewayDnsForwardRequest() = default ;
    UpdateSmartAccessGatewayDnsForwardRequest(const UpdateSmartAccessGatewayDnsForwardRequest &) = default ;
    UpdateSmartAccessGatewayDnsForwardRequest(UpdateSmartAccessGatewayDnsForwardRequest &&) = default ;
    UpdateSmartAccessGatewayDnsForwardRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSmartAccessGatewayDnsForwardRequest() = default ;
    UpdateSmartAccessGatewayDnsForwardRequest& operator=(const UpdateSmartAccessGatewayDnsForwardRequest &) = default ;
    UpdateSmartAccessGatewayDnsForwardRequest& operator=(UpdateSmartAccessGatewayDnsForwardRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && this->instanceId_ == nullptr && this->masterIp_ == nullptr && this->mode_ == nullptr && this->outboundPortIndex_ == nullptr && this->outboundPortName_ == nullptr
        && this->outboundPortType_ == nullptr && this->regionId_ == nullptr && this->sagInsId_ == nullptr && this->sagSn_ == nullptr && this->slaveIp_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline UpdateSmartAccessGatewayDnsForwardRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateSmartAccessGatewayDnsForwardRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // masterIp Field Functions 
    bool hasMasterIp() const { return this->masterIp_ != nullptr;};
    void deleteMasterIp() { this->masterIp_ = nullptr;};
    inline string getMasterIp() const { DARABONBA_PTR_GET_DEFAULT(masterIp_, "") };
    inline UpdateSmartAccessGatewayDnsForwardRequest& setMasterIp(string masterIp) { DARABONBA_PTR_SET_VALUE(masterIp_, masterIp) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline UpdateSmartAccessGatewayDnsForwardRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // outboundPortIndex Field Functions 
    bool hasOutboundPortIndex() const { return this->outboundPortIndex_ != nullptr;};
    void deleteOutboundPortIndex() { this->outboundPortIndex_ = nullptr;};
    inline int32_t getOutboundPortIndex() const { DARABONBA_PTR_GET_DEFAULT(outboundPortIndex_, 0) };
    inline UpdateSmartAccessGatewayDnsForwardRequest& setOutboundPortIndex(int32_t outboundPortIndex) { DARABONBA_PTR_SET_VALUE(outboundPortIndex_, outboundPortIndex) };


    // outboundPortName Field Functions 
    bool hasOutboundPortName() const { return this->outboundPortName_ != nullptr;};
    void deleteOutboundPortName() { this->outboundPortName_ = nullptr;};
    inline string getOutboundPortName() const { DARABONBA_PTR_GET_DEFAULT(outboundPortName_, "") };
    inline UpdateSmartAccessGatewayDnsForwardRequest& setOutboundPortName(string outboundPortName) { DARABONBA_PTR_SET_VALUE(outboundPortName_, outboundPortName) };


    // outboundPortType Field Functions 
    bool hasOutboundPortType() const { return this->outboundPortType_ != nullptr;};
    void deleteOutboundPortType() { this->outboundPortType_ = nullptr;};
    inline string getOutboundPortType() const { DARABONBA_PTR_GET_DEFAULT(outboundPortType_, "") };
    inline UpdateSmartAccessGatewayDnsForwardRequest& setOutboundPortType(string outboundPortType) { DARABONBA_PTR_SET_VALUE(outboundPortType_, outboundPortType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateSmartAccessGatewayDnsForwardRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sagInsId Field Functions 
    bool hasSagInsId() const { return this->sagInsId_ != nullptr;};
    void deleteSagInsId() { this->sagInsId_ = nullptr;};
    inline string getSagInsId() const { DARABONBA_PTR_GET_DEFAULT(sagInsId_, "") };
    inline UpdateSmartAccessGatewayDnsForwardRequest& setSagInsId(string sagInsId) { DARABONBA_PTR_SET_VALUE(sagInsId_, sagInsId) };


    // sagSn Field Functions 
    bool hasSagSn() const { return this->sagSn_ != nullptr;};
    void deleteSagSn() { this->sagSn_ = nullptr;};
    inline string getSagSn() const { DARABONBA_PTR_GET_DEFAULT(sagSn_, "") };
    inline UpdateSmartAccessGatewayDnsForwardRequest& setSagSn(string sagSn) { DARABONBA_PTR_SET_VALUE(sagSn_, sagSn) };


    // slaveIp Field Functions 
    bool hasSlaveIp() const { return this->slaveIp_ != nullptr;};
    void deleteSlaveIp() { this->slaveIp_ = nullptr;};
    inline string getSlaveIp() const { DARABONBA_PTR_GET_DEFAULT(slaveIp_, "") };
    inline UpdateSmartAccessGatewayDnsForwardRequest& setSlaveIp(string slaveIp) { DARABONBA_PTR_SET_VALUE(slaveIp_, slaveIp) };


  protected:
    // The domain name.
    // 
    // > 
    // *   Wildcard domain names are supported. You can use the wildcard character asterisk (\\*) to specify a wildcard domain name.
    // 
    // For example, you can enter \\*.baidu.com to specify the domain name baidu.com.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The primary DNS server.
    // 
    // This parameter is required.
    shared_ptr<string> masterIp_ {};
    // The forwarding mode.
    // 
    // > 
    // *   This parameter is not in use. Ignore this parameter.
    shared_ptr<string> mode_ {};
    // The number of the egress port.
    // 
    // > 
    // *   This parameter is optional if OutboundPortType is set to PhysicalPort. Ignore this parameter if OutboundPortType is set to Tunnel.
    // *   The value of OutboundPortIndex is the unique index of the port name specified by poOutboundPortName. For example, 0 is the index for the port named eth0, and 2 is the index for the port named lte.
    shared_ptr<int32_t> outboundPortIndex_ {};
    // The egress port.
    // 
    // > 
    // *   This parameter is optional if OutboundPortType is set to PhysicalPort. Ignore this parameter if OutboundPortType is set to Tunnel.
    // *   The value of OutboundPortIndex is the unique index of the port name specified by poOutboundPortName. For example, 0 is the index for the port named eth0, and 2 is the index for the port named lte.
    shared_ptr<string> outboundPortName_ {};
    // The type of the egress port.
    // 
    // > 
    // *   A value of Tunnel specifies a tunnel, and a value of PhysicalPort specifies a physical port.
    shared_ptr<string> outboundPortType_ {};
    // The ID of the region in which the SAG instance resides.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> sagInsId_ {};
    // The serial number (SN) of the device.
    // 
    // This parameter is required.
    shared_ptr<string> sagSn_ {};
    // The secondary DNS server.
    shared_ptr<string> slaveIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
