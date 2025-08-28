// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNCONNECTIONSRESPONSEBODYVPNCONNECTIONSVPNCONNECTION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNCONNECTIONSRESPONSEBODYVPNCONNECTIONSVPNCONNECTION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionIkeConfig.hpp>
#include <alibabacloud/models/DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionIpsecConfig.hpp>
#include <alibabacloud/models/DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTag.hpp>
#include <alibabacloud/models/DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecification.hpp>
#include <alibabacloud/models/DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck.hpp>
#include <alibabacloud/models/DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& obj) { 
      DARABONBA_PTR_TO_JSON(AttachInstanceId, attachInstanceId_);
      DARABONBA_PTR_TO_JSON(AttachType, attachType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CrossAccountAuthorized, crossAccountAuthorized_);
      DARABONBA_PTR_TO_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_TO_JSON(EffectImmediately, effectImmediately_);
      DARABONBA_PTR_TO_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_TO_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_TO_JSON(EnableTunnelsBgp, enableTunnelsBgp_);
      DARABONBA_PTR_TO_JSON(IkeConfig, ikeConfig_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IpsecConfig, ipsecConfig_);
      DARABONBA_PTR_TO_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(RemoteCaCertificate, remoteCaCertificate_);
      DARABONBA_PTR_TO_JSON(RemoteSubnet, remoteSubnet_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(TransitRouterName, transitRouterName_);
      DARABONBA_PTR_TO_JSON(TunnelOptionsSpecification, tunnelOptionsSpecification_);
      DARABONBA_PTR_TO_JSON(VcoHealthCheck, vcoHealthCheck_);
      DARABONBA_PTR_TO_JSON(VpnBgpConfig, vpnBgpConfig_);
      DARABONBA_PTR_TO_JSON(VpnConnectionId, vpnConnectionId_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachInstanceId, attachInstanceId_);
      DARABONBA_PTR_FROM_JSON(AttachType, attachType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CrossAccountAuthorized, crossAccountAuthorized_);
      DARABONBA_PTR_FROM_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_FROM_JSON(EffectImmediately, effectImmediately_);
      DARABONBA_PTR_FROM_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_FROM_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_FROM_JSON(EnableTunnelsBgp, enableTunnelsBgp_);
      DARABONBA_PTR_FROM_JSON(IkeConfig, ikeConfig_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IpsecConfig, ipsecConfig_);
      DARABONBA_PTR_FROM_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(RemoteCaCertificate, remoteCaCertificate_);
      DARABONBA_PTR_FROM_JSON(RemoteSubnet, remoteSubnet_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterName, transitRouterName_);
      DARABONBA_PTR_FROM_JSON(TunnelOptionsSpecification, tunnelOptionsSpecification_);
      DARABONBA_PTR_FROM_JSON(VcoHealthCheck, vcoHealthCheck_);
      DARABONBA_PTR_FROM_JSON(VpnBgpConfig, vpnBgpConfig_);
      DARABONBA_PTR_FROM_JSON(VpnConnectionId, vpnConnectionId_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
    };
    DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection() = default ;
    DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection(const DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection &) = default ;
    DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection(DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection &&) = default ;
    DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection() = default ;
    DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& operator=(const DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection &) = default ;
    DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& operator=(DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attachInstanceId_ != nullptr
        && this->attachType_ != nullptr && this->createTime_ != nullptr && this->crossAccountAuthorized_ != nullptr && this->customerGatewayId_ != nullptr && this->effectImmediately_ != nullptr
        && this->enableDpd_ != nullptr && this->enableNatTraversal_ != nullptr && this->enableTunnelsBgp_ != nullptr && this->ikeConfig_ != nullptr && this->internetIp_ != nullptr
        && this->ipsecConfig_ != nullptr && this->localSubnet_ != nullptr && this->name_ != nullptr && this->networkType_ != nullptr && this->remoteCaCertificate_ != nullptr
        && this->remoteSubnet_ != nullptr && this->resourceGroupId_ != nullptr && this->spec_ != nullptr && this->state_ != nullptr && this->status_ != nullptr
        && this->tag_ != nullptr && this->transitRouterId_ != nullptr && this->transitRouterName_ != nullptr && this->tunnelOptionsSpecification_ != nullptr && this->vcoHealthCheck_ != nullptr
        && this->vpnBgpConfig_ != nullptr && this->vpnConnectionId_ != nullptr && this->vpnGatewayId_ != nullptr; };
    // attachInstanceId Field Functions 
    bool hasAttachInstanceId() const { return this->attachInstanceId_ != nullptr;};
    void deleteAttachInstanceId() { this->attachInstanceId_ = nullptr;};
    inline string attachInstanceId() const { DARABONBA_PTR_GET_DEFAULT(attachInstanceId_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setAttachInstanceId(string attachInstanceId) { DARABONBA_PTR_SET_VALUE(attachInstanceId_, attachInstanceId) };


    // attachType Field Functions 
    bool hasAttachType() const { return this->attachType_ != nullptr;};
    void deleteAttachType() { this->attachType_ = nullptr;};
    inline string attachType() const { DARABONBA_PTR_GET_DEFAULT(attachType_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setAttachType(string attachType) { DARABONBA_PTR_SET_VALUE(attachType_, attachType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // crossAccountAuthorized Field Functions 
    bool hasCrossAccountAuthorized() const { return this->crossAccountAuthorized_ != nullptr;};
    void deleteCrossAccountAuthorized() { this->crossAccountAuthorized_ = nullptr;};
    inline bool crossAccountAuthorized() const { DARABONBA_PTR_GET_DEFAULT(crossAccountAuthorized_, false) };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setCrossAccountAuthorized(bool crossAccountAuthorized) { DARABONBA_PTR_SET_VALUE(crossAccountAuthorized_, crossAccountAuthorized) };


    // customerGatewayId Field Functions 
    bool hasCustomerGatewayId() const { return this->customerGatewayId_ != nullptr;};
    void deleteCustomerGatewayId() { this->customerGatewayId_ = nullptr;};
    inline string customerGatewayId() const { DARABONBA_PTR_GET_DEFAULT(customerGatewayId_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setCustomerGatewayId(string customerGatewayId) { DARABONBA_PTR_SET_VALUE(customerGatewayId_, customerGatewayId) };


    // effectImmediately Field Functions 
    bool hasEffectImmediately() const { return this->effectImmediately_ != nullptr;};
    void deleteEffectImmediately() { this->effectImmediately_ = nullptr;};
    inline bool effectImmediately() const { DARABONBA_PTR_GET_DEFAULT(effectImmediately_, false) };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setEffectImmediately(bool effectImmediately) { DARABONBA_PTR_SET_VALUE(effectImmediately_, effectImmediately) };


    // enableDpd Field Functions 
    bool hasEnableDpd() const { return this->enableDpd_ != nullptr;};
    void deleteEnableDpd() { this->enableDpd_ = nullptr;};
    inline bool enableDpd() const { DARABONBA_PTR_GET_DEFAULT(enableDpd_, false) };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setEnableDpd(bool enableDpd) { DARABONBA_PTR_SET_VALUE(enableDpd_, enableDpd) };


    // enableNatTraversal Field Functions 
    bool hasEnableNatTraversal() const { return this->enableNatTraversal_ != nullptr;};
    void deleteEnableNatTraversal() { this->enableNatTraversal_ = nullptr;};
    inline bool enableNatTraversal() const { DARABONBA_PTR_GET_DEFAULT(enableNatTraversal_, false) };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setEnableNatTraversal(bool enableNatTraversal) { DARABONBA_PTR_SET_VALUE(enableNatTraversal_, enableNatTraversal) };


    // enableTunnelsBgp Field Functions 
    bool hasEnableTunnelsBgp() const { return this->enableTunnelsBgp_ != nullptr;};
    void deleteEnableTunnelsBgp() { this->enableTunnelsBgp_ = nullptr;};
    inline bool enableTunnelsBgp() const { DARABONBA_PTR_GET_DEFAULT(enableTunnelsBgp_, false) };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setEnableTunnelsBgp(bool enableTunnelsBgp) { DARABONBA_PTR_SET_VALUE(enableTunnelsBgp_, enableTunnelsBgp) };


    // ikeConfig Field Functions 
    bool hasIkeConfig() const { return this->ikeConfig_ != nullptr;};
    void deleteIkeConfig() { this->ikeConfig_ = nullptr;};
    inline const Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionIkeConfig & ikeConfig() const { DARABONBA_PTR_GET_CONST(ikeConfig_, Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionIkeConfig) };
    inline Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionIkeConfig ikeConfig() { DARABONBA_PTR_GET(ikeConfig_, Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionIkeConfig) };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setIkeConfig(const Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionIkeConfig & ikeConfig) { DARABONBA_PTR_SET_VALUE(ikeConfig_, ikeConfig) };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setIkeConfig(Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionIkeConfig && ikeConfig) { DARABONBA_PTR_SET_RVALUE(ikeConfig_, ikeConfig) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // ipsecConfig Field Functions 
    bool hasIpsecConfig() const { return this->ipsecConfig_ != nullptr;};
    void deleteIpsecConfig() { this->ipsecConfig_ = nullptr;};
    inline const Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionIpsecConfig & ipsecConfig() const { DARABONBA_PTR_GET_CONST(ipsecConfig_, Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionIpsecConfig) };
    inline Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionIpsecConfig ipsecConfig() { DARABONBA_PTR_GET(ipsecConfig_, Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionIpsecConfig) };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setIpsecConfig(const Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionIpsecConfig & ipsecConfig) { DARABONBA_PTR_SET_VALUE(ipsecConfig_, ipsecConfig) };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setIpsecConfig(Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionIpsecConfig && ipsecConfig) { DARABONBA_PTR_SET_RVALUE(ipsecConfig_, ipsecConfig) };


    // localSubnet Field Functions 
    bool hasLocalSubnet() const { return this->localSubnet_ != nullptr;};
    void deleteLocalSubnet() { this->localSubnet_ = nullptr;};
    inline string localSubnet() const { DARABONBA_PTR_GET_DEFAULT(localSubnet_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setLocalSubnet(string localSubnet) { DARABONBA_PTR_SET_VALUE(localSubnet_, localSubnet) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // remoteCaCertificate Field Functions 
    bool hasRemoteCaCertificate() const { return this->remoteCaCertificate_ != nullptr;};
    void deleteRemoteCaCertificate() { this->remoteCaCertificate_ = nullptr;};
    inline string remoteCaCertificate() const { DARABONBA_PTR_GET_DEFAULT(remoteCaCertificate_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setRemoteCaCertificate(string remoteCaCertificate) { DARABONBA_PTR_SET_VALUE(remoteCaCertificate_, remoteCaCertificate) };


    // remoteSubnet Field Functions 
    bool hasRemoteSubnet() const { return this->remoteSubnet_ != nullptr;};
    void deleteRemoteSubnet() { this->remoteSubnet_ = nullptr;};
    inline string remoteSubnet() const { DARABONBA_PTR_GET_DEFAULT(remoteSubnet_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setRemoteSubnet(string remoteSubnet) { DARABONBA_PTR_SET_VALUE(remoteSubnet_, remoteSubnet) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTag & tag() const { DARABONBA_PTR_GET_CONST(tag_, Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTag) };
    inline Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTag tag() { DARABONBA_PTR_GET(tag_, Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTag) };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setTag(const Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTag & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setTag(Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTag && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // transitRouterName Field Functions 
    bool hasTransitRouterName() const { return this->transitRouterName_ != nullptr;};
    void deleteTransitRouterName() { this->transitRouterName_ = nullptr;};
    inline string transitRouterName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterName_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setTransitRouterName(string transitRouterName) { DARABONBA_PTR_SET_VALUE(transitRouterName_, transitRouterName) };


    // tunnelOptionsSpecification Field Functions 
    bool hasTunnelOptionsSpecification() const { return this->tunnelOptionsSpecification_ != nullptr;};
    void deleteTunnelOptionsSpecification() { this->tunnelOptionsSpecification_ = nullptr;};
    inline const Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecification & tunnelOptionsSpecification() const { DARABONBA_PTR_GET_CONST(tunnelOptionsSpecification_, Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecification) };
    inline Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecification tunnelOptionsSpecification() { DARABONBA_PTR_GET(tunnelOptionsSpecification_, Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecification) };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setTunnelOptionsSpecification(const Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecification & tunnelOptionsSpecification) { DARABONBA_PTR_SET_VALUE(tunnelOptionsSpecification_, tunnelOptionsSpecification) };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setTunnelOptionsSpecification(Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecification && tunnelOptionsSpecification) { DARABONBA_PTR_SET_RVALUE(tunnelOptionsSpecification_, tunnelOptionsSpecification) };


    // vcoHealthCheck Field Functions 
    bool hasVcoHealthCheck() const { return this->vcoHealthCheck_ != nullptr;};
    void deleteVcoHealthCheck() { this->vcoHealthCheck_ = nullptr;};
    inline const Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck & vcoHealthCheck() const { DARABONBA_PTR_GET_CONST(vcoHealthCheck_, Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck) };
    inline Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck vcoHealthCheck() { DARABONBA_PTR_GET(vcoHealthCheck_, Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck) };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setVcoHealthCheck(const Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck & vcoHealthCheck) { DARABONBA_PTR_SET_VALUE(vcoHealthCheck_, vcoHealthCheck) };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setVcoHealthCheck(Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck && vcoHealthCheck) { DARABONBA_PTR_SET_RVALUE(vcoHealthCheck_, vcoHealthCheck) };


    // vpnBgpConfig Field Functions 
    bool hasVpnBgpConfig() const { return this->vpnBgpConfig_ != nullptr;};
    void deleteVpnBgpConfig() { this->vpnBgpConfig_ = nullptr;};
    inline const Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig & vpnBgpConfig() const { DARABONBA_PTR_GET_CONST(vpnBgpConfig_, Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig) };
    inline Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig vpnBgpConfig() { DARABONBA_PTR_GET(vpnBgpConfig_, Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig) };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setVpnBgpConfig(const Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig & vpnBgpConfig) { DARABONBA_PTR_SET_VALUE(vpnBgpConfig_, vpnBgpConfig) };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setVpnBgpConfig(Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig && vpnBgpConfig) { DARABONBA_PTR_SET_RVALUE(vpnBgpConfig_, vpnBgpConfig) };


    // vpnConnectionId Field Functions 
    bool hasVpnConnectionId() const { return this->vpnConnectionId_ != nullptr;};
    void deleteVpnConnectionId() { this->vpnConnectionId_ = nullptr;};
    inline string vpnConnectionId() const { DARABONBA_PTR_GET_DEFAULT(vpnConnectionId_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setVpnConnectionId(string vpnConnectionId) { DARABONBA_PTR_SET_VALUE(vpnConnectionId_, vpnConnectionId) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string vpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnection& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


  protected:
    // The ID of the CEN instance to which the transit router belongs.
    std::shared_ptr<string> attachInstanceId_ = nullptr;
    // The type of resource that is associated with the IPsec-VPN connection. Valid values:
    // 
    // *   **CEN**: indicates that the IPsec-VPN connection is associated with a transit router of a Cloud Enterprise Network (CEN) instance.
    // *   **NO_ASSOCIATED**: indicates that the IPsec-VPN connection is not associated with any resource.
    // *   **VPNGW**: indicates that the IPsec-VPN connection is associated with a VPN gateway.
    std::shared_ptr<string> attachType_ = nullptr;
    // The timestamp generated when the IPsec-VPN connection was established. Unit: milliseconds.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Indicates whether the IPsec-VPN connection is associated with a transit router that belongs to another Alibaba Cloud account. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> crossAccountAuthorized_ = nullptr;
    // The ID of the customer gateway associated with the IPsec-VPN connection.
    std::shared_ptr<string> customerGatewayId_ = nullptr;
    // Indicates whether IPsec negotiations immediately start.
    // 
    // *   **true**: Negotiations are reinitiated after the configuration is changed.
    // *   **false**: Negotiations are reinitiated after traffic is detected.
    std::shared_ptr<bool> effectImmediately_ = nullptr;
    // Indicates whether dead peer detection (DPD) is enabled for the IPsec-VPN connection. Valid values:
    // 
    // *   **true**
    // 
    //     The initiator of the IPsec-VPN connection sends DPD packets to check the existence and availability of the peer. If no feedback is received from the peer within a specific period of time, the connection fails. Then, the ISAKMP security association (SA), IPsec SA, and IPsec tunnel are deleted.
    // 
    // *   **false**
    std::shared_ptr<bool> enableDpd_ = nullptr;
    // Indicates whether NAT traversal is enabled for the IPsec-VPN connection.
    // 
    // *   **true**
    // 
    //     After NAT traversal is enabled, the initiator does not check the UDP ports during IKE negotiations and can automatically discover NAT gateway devices along the IPsec tunnel.
    // 
    // *   **false**
    std::shared_ptr<bool> enableNatTraversal_ = nullptr;
    // Indicates whether BGP is enabled for the tunnel. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enableTunnelsBgp_ = nullptr;
    // The configurations of Phase 1 negotiations.
    std::shared_ptr<Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionIkeConfig> ikeConfig_ = nullptr;
    // The gateway IP address of the IPsec-VPN connection.
    // 
    // >  This parameter is returned only if the IPsec-VPN connection is associated with a transit router.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The configurations of Phase 2 negotiations.
    std::shared_ptr<Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionIpsecConfig> ipsecConfig_ = nullptr;
    // The CIDR block on the Alibaba Cloud side.
    // 
    // Multiple CIDR blocks are separated by commas (,).
    std::shared_ptr<string> localSubnet_ = nullptr;
    // The name of the IPsec-VPN connection.
    std::shared_ptr<string> name_ = nullptr;
    // The network type of the IPsec-VPN connection. Valid values:
    // 
    // *   **public**
    // *   **private**
    std::shared_ptr<string> networkType_ = nullptr;
    // The certificate authority (CA) certificate of the peer.
    std::shared_ptr<string> remoteCaCertificate_ = nullptr;
    // The CIDR block of the data center.
    // 
    // Multiple CIDR blocks are separated by commas (,).
    std::shared_ptr<string> remoteSubnet_ = nullptr;
    // The ID of the resource group to which the IPsec-VPN connection belongs.
    // 
    // You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to query the resource group information.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The bandwidth specification of the IPsec-VPN connection. Unit: **Mbit/s**.
    std::shared_ptr<string> spec_ = nullptr;
    // The association state of the IPsec-VPN connection. Valid values:
    // 
    // *   **active**: The IPsec-VPN connection is associated with a VPN gateway.
    // *   **init**: The IPsec-VPN connection is not associated with any resource and is being initialized.
    // *   **attaching**: The IPsec-VPN connection is being associated with a transit router.
    // *   **attached**: The IPsec-VPN connection is associated with a transit router.
    // *   **detaching**: The IPsec-VPN connection is being disassociated from a transit router.
    // *   **financialLocked**: The IPsec-VPN connection is locked due to overdue payments.
    // *   **provisioning**: The IPsec-VPN connection is being prepared.
    // *   **updating**: The IPsec-VPN connection is being updated.
    // *   **Upgrading**: The IPsec-VPN connection is being upgraded.
    // *   **deleted**: The IPsec-VPN connection is deleted.
    std::shared_ptr<string> state_ = nullptr;
    // The status of the IPsec-VPN connection. Valid values:
    // 
    // *   **ike_sa_not_established**: Phase 1 negotiations failed.
    // *   **ike_sa_established**: Phase 1 negotiations succeeded.
    // *   **ipsec_sa_not_established**: Phase 2 negotiations failed.
    // *   **ipsec_sa_established**: Phase 2 negotiations succeeded.
    std::shared_ptr<string> status_ = nullptr;
    // The list of tags to be added to the IPsec-VPN connection.
    std::shared_ptr<Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTag> tag_ = nullptr;
    // The ID of the transit router with which the IPsec-VPN connection is associated.
    std::shared_ptr<string> transitRouterId_ = nullptr;
    // The name of the transit router.
    std::shared_ptr<string> transitRouterName_ = nullptr;
    // The tunnel configurations of the IPsec-VPN connection.
    // 
    // Parameters in **TunnelOptionsSpecification** are returned only if you query an IPsec-VPN connection in dual-tunnel mode.
    std::shared_ptr<Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionTunnelOptionsSpecification> tunnelOptionsSpecification_ = nullptr;
    // The health check configuration of the IPsec-VPN connection.
    std::shared_ptr<Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVcoHealthCheck> vcoHealthCheck_ = nullptr;
    // The BGP configuration of the IPsec-VPN connection.
    std::shared_ptr<Models::DescribeVpnConnectionsResponseBodyVpnConnectionsVpnConnectionVpnBgpConfig> vpnBgpConfig_ = nullptr;
    // The ID of the IPsec-VPN connection.
    std::shared_ptr<string> vpnConnectionId_ = nullptr;
    // The ID of the VPN gateway.
    std::shared_ptr<string> vpnGatewayId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
