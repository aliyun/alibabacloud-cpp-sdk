// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESMARTACCESSGATEWAYPORTROUTEPROTOCOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESMARTACCESSGATEWAYPORTROUTEPROTOCOLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class UpdateSmartAccessGatewayPortRouteProtocolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSmartAccessGatewayPortRouteProtocolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CrossAccount, crossAccount_);
      DARABONBA_PTR_TO_JSON(PortName, portName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemoteAs, remoteAs_);
      DARABONBA_PTR_TO_JSON(RemoteIp, remoteIp_);
      DARABONBA_PTR_TO_JSON(ResourceUid, resourceUid_);
      DARABONBA_PTR_TO_JSON(RouteProtocol, routeProtocol_);
      DARABONBA_PTR_TO_JSON(SagInsId, sagInsId_);
      DARABONBA_PTR_TO_JSON(SagSn, sagSn_);
      DARABONBA_PTR_TO_JSON(Vlan, vlan_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSmartAccessGatewayPortRouteProtocolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CrossAccount, crossAccount_);
      DARABONBA_PTR_FROM_JSON(PortName, portName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemoteAs, remoteAs_);
      DARABONBA_PTR_FROM_JSON(RemoteIp, remoteIp_);
      DARABONBA_PTR_FROM_JSON(ResourceUid, resourceUid_);
      DARABONBA_PTR_FROM_JSON(RouteProtocol, routeProtocol_);
      DARABONBA_PTR_FROM_JSON(SagInsId, sagInsId_);
      DARABONBA_PTR_FROM_JSON(SagSn, sagSn_);
      DARABONBA_PTR_FROM_JSON(Vlan, vlan_);
    };
    UpdateSmartAccessGatewayPortRouteProtocolRequest() = default ;
    UpdateSmartAccessGatewayPortRouteProtocolRequest(const UpdateSmartAccessGatewayPortRouteProtocolRequest &) = default ;
    UpdateSmartAccessGatewayPortRouteProtocolRequest(UpdateSmartAccessGatewayPortRouteProtocolRequest &&) = default ;
    UpdateSmartAccessGatewayPortRouteProtocolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSmartAccessGatewayPortRouteProtocolRequest() = default ;
    UpdateSmartAccessGatewayPortRouteProtocolRequest& operator=(const UpdateSmartAccessGatewayPortRouteProtocolRequest &) = default ;
    UpdateSmartAccessGatewayPortRouteProtocolRequest& operator=(UpdateSmartAccessGatewayPortRouteProtocolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->crossAccount_ == nullptr
        && this->portName_ == nullptr && this->regionId_ == nullptr && this->remoteAs_ == nullptr && this->remoteIp_ == nullptr && this->resourceUid_ == nullptr
        && this->routeProtocol_ == nullptr && this->sagInsId_ == nullptr && this->sagSn_ == nullptr && this->vlan_ == nullptr; };
    // crossAccount Field Functions 
    bool hasCrossAccount() const { return this->crossAccount_ != nullptr;};
    void deleteCrossAccount() { this->crossAccount_ = nullptr;};
    inline bool getCrossAccount() const { DARABONBA_PTR_GET_DEFAULT(crossAccount_, false) };
    inline UpdateSmartAccessGatewayPortRouteProtocolRequest& setCrossAccount(bool crossAccount) { DARABONBA_PTR_SET_VALUE(crossAccount_, crossAccount) };


    // portName Field Functions 
    bool hasPortName() const { return this->portName_ != nullptr;};
    void deletePortName() { this->portName_ = nullptr;};
    inline string getPortName() const { DARABONBA_PTR_GET_DEFAULT(portName_, "") };
    inline UpdateSmartAccessGatewayPortRouteProtocolRequest& setPortName(string portName) { DARABONBA_PTR_SET_VALUE(portName_, portName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateSmartAccessGatewayPortRouteProtocolRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remoteAs Field Functions 
    bool hasRemoteAs() const { return this->remoteAs_ != nullptr;};
    void deleteRemoteAs() { this->remoteAs_ = nullptr;};
    inline string getRemoteAs() const { DARABONBA_PTR_GET_DEFAULT(remoteAs_, "") };
    inline UpdateSmartAccessGatewayPortRouteProtocolRequest& setRemoteAs(string remoteAs) { DARABONBA_PTR_SET_VALUE(remoteAs_, remoteAs) };


    // remoteIp Field Functions 
    bool hasRemoteIp() const { return this->remoteIp_ != nullptr;};
    void deleteRemoteIp() { this->remoteIp_ = nullptr;};
    inline string getRemoteIp() const { DARABONBA_PTR_GET_DEFAULT(remoteIp_, "") };
    inline UpdateSmartAccessGatewayPortRouteProtocolRequest& setRemoteIp(string remoteIp) { DARABONBA_PTR_SET_VALUE(remoteIp_, remoteIp) };


    // resourceUid Field Functions 
    bool hasResourceUid() const { return this->resourceUid_ != nullptr;};
    void deleteResourceUid() { this->resourceUid_ = nullptr;};
    inline string getResourceUid() const { DARABONBA_PTR_GET_DEFAULT(resourceUid_, "") };
    inline UpdateSmartAccessGatewayPortRouteProtocolRequest& setResourceUid(string resourceUid) { DARABONBA_PTR_SET_VALUE(resourceUid_, resourceUid) };


    // routeProtocol Field Functions 
    bool hasRouteProtocol() const { return this->routeProtocol_ != nullptr;};
    void deleteRouteProtocol() { this->routeProtocol_ = nullptr;};
    inline string getRouteProtocol() const { DARABONBA_PTR_GET_DEFAULT(routeProtocol_, "") };
    inline UpdateSmartAccessGatewayPortRouteProtocolRequest& setRouteProtocol(string routeProtocol) { DARABONBA_PTR_SET_VALUE(routeProtocol_, routeProtocol) };


    // sagInsId Field Functions 
    bool hasSagInsId() const { return this->sagInsId_ != nullptr;};
    void deleteSagInsId() { this->sagInsId_ = nullptr;};
    inline string getSagInsId() const { DARABONBA_PTR_GET_DEFAULT(sagInsId_, "") };
    inline UpdateSmartAccessGatewayPortRouteProtocolRequest& setSagInsId(string sagInsId) { DARABONBA_PTR_SET_VALUE(sagInsId_, sagInsId) };


    // sagSn Field Functions 
    bool hasSagSn() const { return this->sagSn_ != nullptr;};
    void deleteSagSn() { this->sagSn_ = nullptr;};
    inline string getSagSn() const { DARABONBA_PTR_GET_DEFAULT(sagSn_, "") };
    inline UpdateSmartAccessGatewayPortRouteProtocolRequest& setSagSn(string sagSn) { DARABONBA_PTR_SET_VALUE(sagSn_, sagSn) };


    // vlan Field Functions 
    bool hasVlan() const { return this->vlan_ != nullptr;};
    void deleteVlan() { this->vlan_ = nullptr;};
    inline string getVlan() const { DARABONBA_PTR_GET_DEFAULT(vlan_, "") };
    inline UpdateSmartAccessGatewayPortRouteProtocolRequest& setVlan(string vlan) { DARABONBA_PTR_SET_VALUE(vlan_, vlan) };


  protected:
    // Specifies whether to query only the SAG instances that belong to another Alibaba Cloud account. Valid values:
    // 
    // *   **false** (default)
    // *   **true**
    shared_ptr<bool> crossAccount_ {};
    // The port name.
    // 
    // This parameter is required.
    shared_ptr<string> portName_ {};
    // The region ID of the SAG instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/69813.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The autonomous system number (ASN) of the SAG device.
    // 
    // > When you enable BGP, you must set this parameter.
    shared_ptr<string> remoteAs_ {};
    // The IP address of the peer device.
    // 
    // > When you enable BGP, you must set this parameter.
    shared_ptr<string> remoteIp_ {};
    // The ID of the Alibaba Cloud account to which the SAG instance belongs.
    shared_ptr<string> resourceUid_ {};
    // The routing protocol. Valid values:
    // 
    // *   **STATIC**
    // *   **OSPF**
    // *   **BGP**
    // 
    // This parameter is required.
    shared_ptr<string> routeProtocol_ {};
    // The ID of the Smart Access Gateway (SAG) instance.
    // 
    // This parameter is required.
    shared_ptr<string> sagInsId_ {};
    // The serial number of the SAG device.
    // 
    // This parameter is required.
    shared_ptr<string> sagSn_ {};
    // The VLAN ID.
    shared_ptr<string> vlan_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
