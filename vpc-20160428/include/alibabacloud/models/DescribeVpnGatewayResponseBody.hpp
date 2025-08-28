// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNGATEWAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVpnGatewayResponseBodyEniInstanceIds.hpp>
#include <alibabacloud/models/DescribeVpnGatewayResponseBodyReservationData.hpp>
#include <alibabacloud/models/DescribeVpnGatewayResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnGatewayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnGatewayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPropagate, autoPropagate_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisasterRecoveryInternetIp, disasterRecoveryInternetIp_);
      DARABONBA_PTR_TO_JSON(DisasterRecoveryVSwitchId, disasterRecoveryVSwitchId_);
      DARABONBA_PTR_TO_JSON(EnableBgp, enableBgp_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EniInstanceIds, eniInstanceIds_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IpsecVpn, ipsecVpn_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ReservationData, reservationData_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(SslMaxConnections, sslMaxConnections_);
      DARABONBA_PTR_TO_JSON(SslVpn, sslVpn_);
      DARABONBA_PTR_TO_JSON(SslVpnInternetIp, sslVpnInternetIp_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
      DARABONBA_PTR_TO_JSON(VpnType, vpnType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnGatewayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPropagate, autoPropagate_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisasterRecoveryInternetIp, disasterRecoveryInternetIp_);
      DARABONBA_PTR_FROM_JSON(DisasterRecoveryVSwitchId, disasterRecoveryVSwitchId_);
      DARABONBA_PTR_FROM_JSON(EnableBgp, enableBgp_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EniInstanceIds, eniInstanceIds_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IpsecVpn, ipsecVpn_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ReservationData, reservationData_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(SslMaxConnections, sslMaxConnections_);
      DARABONBA_PTR_FROM_JSON(SslVpn, sslVpn_);
      DARABONBA_PTR_FROM_JSON(SslVpnInternetIp, sslVpnInternetIp_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
      DARABONBA_PTR_FROM_JSON(VpnType, vpnType_);
    };
    DescribeVpnGatewayResponseBody() = default ;
    DescribeVpnGatewayResponseBody(const DescribeVpnGatewayResponseBody &) = default ;
    DescribeVpnGatewayResponseBody(DescribeVpnGatewayResponseBody &&) = default ;
    DescribeVpnGatewayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnGatewayResponseBody() = default ;
    DescribeVpnGatewayResponseBody& operator=(const DescribeVpnGatewayResponseBody &) = default ;
    DescribeVpnGatewayResponseBody& operator=(DescribeVpnGatewayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoPropagate_ != nullptr
        && this->businessStatus_ != nullptr && this->chargeType_ != nullptr && this->createTime_ != nullptr && this->description_ != nullptr && this->disasterRecoveryInternetIp_ != nullptr
        && this->disasterRecoveryVSwitchId_ != nullptr && this->enableBgp_ != nullptr && this->endTime_ != nullptr && this->eniInstanceIds_ != nullptr && this->internetIp_ != nullptr
        && this->ipsecVpn_ != nullptr && this->name_ != nullptr && this->networkType_ != nullptr && this->requestId_ != nullptr && this->reservationData_ != nullptr
        && this->resourceGroupId_ != nullptr && this->spec_ != nullptr && this->sslMaxConnections_ != nullptr && this->sslVpn_ != nullptr && this->sslVpnInternetIp_ != nullptr
        && this->status_ != nullptr && this->tag_ != nullptr && this->tags_ != nullptr && this->vSwitchId_ != nullptr && this->vpcId_ != nullptr
        && this->vpnGatewayId_ != nullptr && this->vpnType_ != nullptr; };
    // autoPropagate Field Functions 
    bool hasAutoPropagate() const { return this->autoPropagate_ != nullptr;};
    void deleteAutoPropagate() { this->autoPropagate_ = nullptr;};
    inline bool autoPropagate() const { DARABONBA_PTR_GET_DEFAULT(autoPropagate_, false) };
    inline DescribeVpnGatewayResponseBody& setAutoPropagate(bool autoPropagate) { DARABONBA_PTR_SET_VALUE(autoPropagate_, autoPropagate) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline DescribeVpnGatewayResponseBody& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeVpnGatewayResponseBody& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeVpnGatewayResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVpnGatewayResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disasterRecoveryInternetIp Field Functions 
    bool hasDisasterRecoveryInternetIp() const { return this->disasterRecoveryInternetIp_ != nullptr;};
    void deleteDisasterRecoveryInternetIp() { this->disasterRecoveryInternetIp_ = nullptr;};
    inline string disasterRecoveryInternetIp() const { DARABONBA_PTR_GET_DEFAULT(disasterRecoveryInternetIp_, "") };
    inline DescribeVpnGatewayResponseBody& setDisasterRecoveryInternetIp(string disasterRecoveryInternetIp) { DARABONBA_PTR_SET_VALUE(disasterRecoveryInternetIp_, disasterRecoveryInternetIp) };


    // disasterRecoveryVSwitchId Field Functions 
    bool hasDisasterRecoveryVSwitchId() const { return this->disasterRecoveryVSwitchId_ != nullptr;};
    void deleteDisasterRecoveryVSwitchId() { this->disasterRecoveryVSwitchId_ = nullptr;};
    inline string disasterRecoveryVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(disasterRecoveryVSwitchId_, "") };
    inline DescribeVpnGatewayResponseBody& setDisasterRecoveryVSwitchId(string disasterRecoveryVSwitchId) { DARABONBA_PTR_SET_VALUE(disasterRecoveryVSwitchId_, disasterRecoveryVSwitchId) };


    // enableBgp Field Functions 
    bool hasEnableBgp() const { return this->enableBgp_ != nullptr;};
    void deleteEnableBgp() { this->enableBgp_ = nullptr;};
    inline bool enableBgp() const { DARABONBA_PTR_GET_DEFAULT(enableBgp_, false) };
    inline DescribeVpnGatewayResponseBody& setEnableBgp(bool enableBgp) { DARABONBA_PTR_SET_VALUE(enableBgp_, enableBgp) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeVpnGatewayResponseBody& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // eniInstanceIds Field Functions 
    bool hasEniInstanceIds() const { return this->eniInstanceIds_ != nullptr;};
    void deleteEniInstanceIds() { this->eniInstanceIds_ = nullptr;};
    inline const DescribeVpnGatewayResponseBodyEniInstanceIds & eniInstanceIds() const { DARABONBA_PTR_GET_CONST(eniInstanceIds_, DescribeVpnGatewayResponseBodyEniInstanceIds) };
    inline DescribeVpnGatewayResponseBodyEniInstanceIds eniInstanceIds() { DARABONBA_PTR_GET(eniInstanceIds_, DescribeVpnGatewayResponseBodyEniInstanceIds) };
    inline DescribeVpnGatewayResponseBody& setEniInstanceIds(const DescribeVpnGatewayResponseBodyEniInstanceIds & eniInstanceIds) { DARABONBA_PTR_SET_VALUE(eniInstanceIds_, eniInstanceIds) };
    inline DescribeVpnGatewayResponseBody& setEniInstanceIds(DescribeVpnGatewayResponseBodyEniInstanceIds && eniInstanceIds) { DARABONBA_PTR_SET_RVALUE(eniInstanceIds_, eniInstanceIds) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeVpnGatewayResponseBody& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // ipsecVpn Field Functions 
    bool hasIpsecVpn() const { return this->ipsecVpn_ != nullptr;};
    void deleteIpsecVpn() { this->ipsecVpn_ = nullptr;};
    inline string ipsecVpn() const { DARABONBA_PTR_GET_DEFAULT(ipsecVpn_, "") };
    inline DescribeVpnGatewayResponseBody& setIpsecVpn(string ipsecVpn) { DARABONBA_PTR_SET_VALUE(ipsecVpn_, ipsecVpn) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeVpnGatewayResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeVpnGatewayResponseBody& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpnGatewayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reservationData Field Functions 
    bool hasReservationData() const { return this->reservationData_ != nullptr;};
    void deleteReservationData() { this->reservationData_ = nullptr;};
    inline const DescribeVpnGatewayResponseBodyReservationData & reservationData() const { DARABONBA_PTR_GET_CONST(reservationData_, DescribeVpnGatewayResponseBodyReservationData) };
    inline DescribeVpnGatewayResponseBodyReservationData reservationData() { DARABONBA_PTR_GET(reservationData_, DescribeVpnGatewayResponseBodyReservationData) };
    inline DescribeVpnGatewayResponseBody& setReservationData(const DescribeVpnGatewayResponseBodyReservationData & reservationData) { DARABONBA_PTR_SET_VALUE(reservationData_, reservationData) };
    inline DescribeVpnGatewayResponseBody& setReservationData(DescribeVpnGatewayResponseBodyReservationData && reservationData) { DARABONBA_PTR_SET_RVALUE(reservationData_, reservationData) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeVpnGatewayResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline DescribeVpnGatewayResponseBody& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // sslMaxConnections Field Functions 
    bool hasSslMaxConnections() const { return this->sslMaxConnections_ != nullptr;};
    void deleteSslMaxConnections() { this->sslMaxConnections_ = nullptr;};
    inline int64_t sslMaxConnections() const { DARABONBA_PTR_GET_DEFAULT(sslMaxConnections_, 0L) };
    inline DescribeVpnGatewayResponseBody& setSslMaxConnections(int64_t sslMaxConnections) { DARABONBA_PTR_SET_VALUE(sslMaxConnections_, sslMaxConnections) };


    // sslVpn Field Functions 
    bool hasSslVpn() const { return this->sslVpn_ != nullptr;};
    void deleteSslVpn() { this->sslVpn_ = nullptr;};
    inline string sslVpn() const { DARABONBA_PTR_GET_DEFAULT(sslVpn_, "") };
    inline DescribeVpnGatewayResponseBody& setSslVpn(string sslVpn) { DARABONBA_PTR_SET_VALUE(sslVpn_, sslVpn) };


    // sslVpnInternetIp Field Functions 
    bool hasSslVpnInternetIp() const { return this->sslVpnInternetIp_ != nullptr;};
    void deleteSslVpnInternetIp() { this->sslVpnInternetIp_ = nullptr;};
    inline string sslVpnInternetIp() const { DARABONBA_PTR_GET_DEFAULT(sslVpnInternetIp_, "") };
    inline DescribeVpnGatewayResponseBody& setSslVpnInternetIp(string sslVpnInternetIp) { DARABONBA_PTR_SET_VALUE(sslVpnInternetIp_, sslVpnInternetIp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVpnGatewayResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeVpnGatewayResponseBody& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeVpnGatewayResponseBodyTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeVpnGatewayResponseBodyTags) };
    inline DescribeVpnGatewayResponseBodyTags tags() { DARABONBA_PTR_GET(tags_, DescribeVpnGatewayResponseBodyTags) };
    inline DescribeVpnGatewayResponseBody& setTags(const DescribeVpnGatewayResponseBodyTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeVpnGatewayResponseBody& setTags(DescribeVpnGatewayResponseBodyTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeVpnGatewayResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeVpnGatewayResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string vpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline DescribeVpnGatewayResponseBody& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


    // vpnType Field Functions 
    bool hasVpnType() const { return this->vpnType_ != nullptr;};
    void deleteVpnType() { this->vpnType_ = nullptr;};
    inline string vpnType() const { DARABONBA_PTR_GET_DEFAULT(vpnType_, "") };
    inline DescribeVpnGatewayResponseBody& setVpnType(string vpnType) { DARABONBA_PTR_SET_VALUE(vpnType_, vpnType) };


  protected:
    // Indicates whether BGP routes are automatically advertised to the VPC. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> autoPropagate_ = nullptr;
    // The payment status of the VPN gateway. Valid values:
    // 
    // *   **Normal**
    // *   **FinancialLocked**
    std::shared_ptr<string> businessStatus_ = nullptr;
    // The billing method. Valid value:
    // 
    // **POSTPAY**: pay-as-you-go
    std::shared_ptr<string> chargeType_ = nullptr;
    // The timestamp when the VPN gateway was created. Unit: milliseconds.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The description of the VPN gateway.
    std::shared_ptr<string> description_ = nullptr;
    // The second IP address assigned by the system to create an IPsec-VPN connection.
    // 
    // This parameter is returned only when the VPN gateway supports the dual-tunnel mode.
    std::shared_ptr<string> disasterRecoveryInternetIp_ = nullptr;
    // The ID of the second vSwitch associated with the VPN gateway.
    // 
    // This parameter is returned only when the VPN gateway supports the dual-tunnel mode.
    std::shared_ptr<string> disasterRecoveryVSwitchId_ = nullptr;
    // Indicates whether BGP is enabled for the VPN gateway. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enableBgp_ = nullptr;
    // The timestamp when the VPN gateway expires. Unit: milliseconds.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The ENIs created by the system for the VPN gateway.
    std::shared_ptr<DescribeVpnGatewayResponseBodyEniInstanceIds> eniInstanceIds_ = nullptr;
    // *   If the VPN gateway supports IPsec-VPN connections in single-tunnel mode, the address is the IP address of the VPN gateway and can be used to create an IPsec-VPN connection or an SSL-VPN connection.
    // 
    // *   If the VPN gateway supports IPsec-VPN connections in dual-tunnel mode, the address is the first IP address used to create an IPsec-VPN connection. The address cannot be used to create an SSL-VPN connection.
    // 
    //     If the VPN gateway supports IPsec-VPN connections in dual-tunnel mode, the system assigns two IP addresses to the VPN gateway to create two encrypted tunnels.
    std::shared_ptr<string> internetIp_ = nullptr;
    // Indicates whether the IPsec-VPN feature is enabled. Valid values:
    // 
    // *   **enable**
    // *   **disable**
    std::shared_ptr<string> ipsecVpn_ = nullptr;
    // The name of the VPN gateway.
    std::shared_ptr<string> name_ = nullptr;
    // The network type of the VPN gateway.
    // 
    // *   **public**
    // *   **private**
    std::shared_ptr<string> networkType_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about pending orders.
    // 
    // > This set of parameters is returned only when **IncludeReservationData** is set to **true**.
    std::shared_ptr<DescribeVpnGatewayResponseBodyReservationData> reservationData_ = nullptr;
    // The ID of the resource group to which the VPN gateway belongs.
    // 
    // You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to query resource groups.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The maximum bandwidth of the VPN gateway. Unit: Mbit/s.
    std::shared_ptr<string> spec_ = nullptr;
    // The maximum number of concurrent SSL-VPN connections.
    std::shared_ptr<int64_t> sslMaxConnections_ = nullptr;
    // The status of the SSL-VPN feature. Valid values:
    // 
    // *   **enable**
    // *   **disable**
    std::shared_ptr<string> sslVpn_ = nullptr;
    // The IP address of the SSL-VPN connection.
    // 
    // This parameter is returned only when the VPN gateway is a public VPN gateway and supports only the single-tunnel mode. In addition, the VPN gateway must have the SSL-VPN feature enabled.
    std::shared_ptr<string> sslVpnInternetIp_ = nullptr;
    // The status of the VPN gateway. Valid values:
    // 
    // *   **init**
    // *   **provisioning**
    // *   **active**
    // *   **updating**
    // *   **deleting**
    std::shared_ptr<string> status_ = nullptr;
    // The tag that is automatically generated for the VPN gateway. The tag consists of the following parameters:
    // 
    // *   **VpnEnableBgp**: indicates whether the VPN gateway supports BGP. Valid values:
    // 
    //     *   **true**
    //     *   **false**
    // 
    // *   **VisuallySsl**: indicates whether the VPN gateway allows you to view the connection information of SSL clients. Valid values:
    // 
    //     *   **true**
    //     *   **false**
    // 
    // *   **PbrPriority**: indicates whether the VPN gateway allows you to configure priorities for policy-based routes. Valid values:
    // 
    //     *   **true**
    //     *   **false**
    // 
    // *   **VpnNewImage**: indicates whether the VPN gateway is upgraded. Valid values:
    // 
    //     *   **true**
    //     *   **false**
    // 
    // *   **description**: the description of the VPN gateway. This parameter is only for internal use.
    // 
    // *   **VpnVersion**: the version of the VPN gateway.
    // 
    // *   **IDaaSNewVersion**: indicates whether the VPN gateway can be associated with an EIAM 2.0 instance.
    // 
    //     *   **true**
    //     *   **false**
    std::shared_ptr<string> tag_ = nullptr;
    // The tags that are added to the VPN gateway.
    std::shared_ptr<DescribeVpnGatewayResponseBodyTags> tags_ = nullptr;
    // The ID of the vSwitch to which the VPN gateway belongs.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the VPC to which the VPN gateway belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the VPN gateway.
    std::shared_ptr<string> vpnGatewayId_ = nullptr;
    // The type of VPN gateway. Only **Normal** may be returned, which indicates a standard VPN gateway.
    std::shared_ptr<string> vpnType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
