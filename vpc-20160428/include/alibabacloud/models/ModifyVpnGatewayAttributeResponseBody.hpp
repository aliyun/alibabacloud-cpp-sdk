// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPNGATEWAYATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPNGATEWAYATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyVpnGatewayAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpnGatewayAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPropagate, autoPropagate_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisasterRecoveryInternetIp, disasterRecoveryInternetIp_);
      DARABONBA_PTR_TO_JSON(DisasterRecoveryVSwitchId, disasterRecoveryVSwitchId_);
      DARABONBA_PTR_TO_JSON(EnableBgp, enableBgp_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(SslVpnInternetIp, sslVpnInternetIp_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpnGatewayAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPropagate, autoPropagate_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisasterRecoveryInternetIp, disasterRecoveryInternetIp_);
      DARABONBA_PTR_FROM_JSON(DisasterRecoveryVSwitchId, disasterRecoveryVSwitchId_);
      DARABONBA_PTR_FROM_JSON(EnableBgp, enableBgp_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(SslVpnInternetIp, sslVpnInternetIp_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
    };
    ModifyVpnGatewayAttributeResponseBody() = default ;
    ModifyVpnGatewayAttributeResponseBody(const ModifyVpnGatewayAttributeResponseBody &) = default ;
    ModifyVpnGatewayAttributeResponseBody(ModifyVpnGatewayAttributeResponseBody &&) = default ;
    ModifyVpnGatewayAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpnGatewayAttributeResponseBody() = default ;
    ModifyVpnGatewayAttributeResponseBody& operator=(const ModifyVpnGatewayAttributeResponseBody &) = default ;
    ModifyVpnGatewayAttributeResponseBody& operator=(ModifyVpnGatewayAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPropagate_ == nullptr
        && this->businessStatus_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->disasterRecoveryInternetIp_ == nullptr && this->disasterRecoveryVSwitchId_ == nullptr
        && this->enableBgp_ == nullptr && this->endTime_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->name_ == nullptr
        && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->spec_ == nullptr && this->sslVpnInternetIp_ == nullptr && this->status_ == nullptr
        && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->vpnGatewayId_ == nullptr; };
    // autoPropagate Field Functions 
    bool hasAutoPropagate() const { return this->autoPropagate_ != nullptr;};
    void deleteAutoPropagate() { this->autoPropagate_ = nullptr;};
    inline bool getAutoPropagate() const { DARABONBA_PTR_GET_DEFAULT(autoPropagate_, false) };
    inline ModifyVpnGatewayAttributeResponseBody& setAutoPropagate(bool autoPropagate) { DARABONBA_PTR_SET_VALUE(autoPropagate_, autoPropagate) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline ModifyVpnGatewayAttributeResponseBody& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ModifyVpnGatewayAttributeResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyVpnGatewayAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disasterRecoveryInternetIp Field Functions 
    bool hasDisasterRecoveryInternetIp() const { return this->disasterRecoveryInternetIp_ != nullptr;};
    void deleteDisasterRecoveryInternetIp() { this->disasterRecoveryInternetIp_ = nullptr;};
    inline string getDisasterRecoveryInternetIp() const { DARABONBA_PTR_GET_DEFAULT(disasterRecoveryInternetIp_, "") };
    inline ModifyVpnGatewayAttributeResponseBody& setDisasterRecoveryInternetIp(string disasterRecoveryInternetIp) { DARABONBA_PTR_SET_VALUE(disasterRecoveryInternetIp_, disasterRecoveryInternetIp) };


    // disasterRecoveryVSwitchId Field Functions 
    bool hasDisasterRecoveryVSwitchId() const { return this->disasterRecoveryVSwitchId_ != nullptr;};
    void deleteDisasterRecoveryVSwitchId() { this->disasterRecoveryVSwitchId_ = nullptr;};
    inline string getDisasterRecoveryVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(disasterRecoveryVSwitchId_, "") };
    inline ModifyVpnGatewayAttributeResponseBody& setDisasterRecoveryVSwitchId(string disasterRecoveryVSwitchId) { DARABONBA_PTR_SET_VALUE(disasterRecoveryVSwitchId_, disasterRecoveryVSwitchId) };


    // enableBgp Field Functions 
    bool hasEnableBgp() const { return this->enableBgp_ != nullptr;};
    void deleteEnableBgp() { this->enableBgp_ = nullptr;};
    inline bool getEnableBgp() const { DARABONBA_PTR_GET_DEFAULT(enableBgp_, false) };
    inline ModifyVpnGatewayAttributeResponseBody& setEnableBgp(bool enableBgp) { DARABONBA_PTR_SET_VALUE(enableBgp_, enableBgp) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ModifyVpnGatewayAttributeResponseBody& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ModifyVpnGatewayAttributeResponseBody& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline ModifyVpnGatewayAttributeResponseBody& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyVpnGatewayAttributeResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyVpnGatewayAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyVpnGatewayAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline ModifyVpnGatewayAttributeResponseBody& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // sslVpnInternetIp Field Functions 
    bool hasSslVpnInternetIp() const { return this->sslVpnInternetIp_ != nullptr;};
    void deleteSslVpnInternetIp() { this->sslVpnInternetIp_ = nullptr;};
    inline string getSslVpnInternetIp() const { DARABONBA_PTR_GET_DEFAULT(sslVpnInternetIp_, "") };
    inline ModifyVpnGatewayAttributeResponseBody& setSslVpnInternetIp(string sslVpnInternetIp) { DARABONBA_PTR_SET_VALUE(sslVpnInternetIp_, sslVpnInternetIp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyVpnGatewayAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ModifyVpnGatewayAttributeResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ModifyVpnGatewayAttributeResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string getVpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline ModifyVpnGatewayAttributeResponseBody& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


  protected:
    // Indicates whether BGP routes are automatically advertised to the VPC. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> autoPropagate_ {};
    // The payment status of the VPN gateway. Valid values:
    // 
    // *   **Normal**
    // *   **FinancialLocked**
    shared_ptr<string> businessStatus_ {};
    // The time when the VPN gateway was created. Unit: milliseconds.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> createTime_ {};
    // The description of the VPN gateway.
    shared_ptr<string> description_ {};
    // The second IP address assigned by the system to create an IPsec-VPN connection.
    // 
    // This parameter is returned only when the VPN gateway supports the dual-tunnel mode.
    shared_ptr<string> disasterRecoveryInternetIp_ {};
    // The ID of the second vSwitch associated with the VPN gateway.
    // 
    // This parameter is returned only when the VPN gateway supports the dual-tunnel mode.
    shared_ptr<string> disasterRecoveryVSwitchId_ {};
    // Indicates whether BGP is enabled for the VPN gateway. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> enableBgp_ {};
    // The time when the VPN gateway expires. Unit: milliseconds.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> endTime_ {};
    // *   If the VPN gateway supports IPsec-VPN connections in single-tunnel mode, the address is the IP address of the VPN gateway and can be used to create an IPsec-VPN connection or an SSL-VPN connection.
    // 
    // *   If the VPN gateway supports IPsec-VPN connections in dual-tunnel mode, the address is the first IP address used to create an IPsec-VPN connection. The address cannot be used to create an SSL-VPN connection.
    // 
    //     If the VPN gateway supports IPsec-VPN connections in dual-tunnel mode, the system assigns two IP addresses to the VPN gateway to create two encrypted tunnels.
    shared_ptr<string> internetIp_ {};
    // The private IP address of the vSwitch that is used by the system when the VPN gateway is deployed.
    // 
    // The parameter is returned only for VPN gateways that support single-tunnel IPsec-VPN connections. The IPsec-VPN feature must be enabled.
    shared_ptr<string> intranetIp_ {};
    // The name of the VPN gateway.
    shared_ptr<string> name_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group to which the VPN gateway belongs.
    // 
    // You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to query resource groups.
    shared_ptr<string> resourceGroupId_ {};
    // The maximum bandwidth of the VPN gateway. Unit: Mbit/s.
    shared_ptr<string> spec_ {};
    // The IP address of the SSL-VPN connection.
    // 
    // This parameter is returned only when the VPN gateway is a public VPN gateway and supports only the single-tunnel mode. In addition, the VPN gateway must have the SSL-VPN feature enabled.
    shared_ptr<string> sslVpnInternetIp_ {};
    // The status of the VPN gateway. Valid values:
    // 
    // *   **init**
    // *   **provisioning**
    // *   **active**
    // *   **updating**
    // *   **deleting**
    shared_ptr<string> status_ {};
    // The ID of the vSwitch associated with the VPN gateway.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the VPC to which the VPN gateway belongs.
    shared_ptr<string> vpcId_ {};
    // The ID of the VPN gateway.
    shared_ptr<string> vpnGatewayId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
