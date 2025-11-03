// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPSECSERVERSRESPONSEBODYIPSECSERVERS_HPP_
#define ALIBABACLOUD_MODELS_LISTIPSECSERVERSRESPONSEBODYIPSECSERVERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListIpsecServersResponseBodyIpsecServersIkeConfig.hpp>
#include <alibabacloud/models/ListIpsecServersResponseBodyIpsecServersIpsecConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListIpsecServersResponseBodyIpsecServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpsecServersResponseBodyIpsecServers& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIpPool, clientIpPool_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(EffectImmediately, effectImmediately_);
      DARABONBA_PTR_TO_JSON(IDaaSInstanceId, IDaaSInstanceId_);
      DARABONBA_PTR_TO_JSON(IkeConfig, ikeConfig_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IpsecConfig, ipsecConfig_);
      DARABONBA_PTR_TO_JSON(IpsecServerId, ipsecServerId_);
      DARABONBA_PTR_TO_JSON(IpsecServerName, ipsecServerName_);
      DARABONBA_PTR_TO_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_TO_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_TO_JSON(MultiFactorAuthEnabled, multiFactorAuthEnabled_);
      DARABONBA_PTR_TO_JSON(OnlineClientCount, onlineClientCount_);
      DARABONBA_PTR_TO_JSON(Psk, psk_);
      DARABONBA_PTR_TO_JSON(PskEnabled, pskEnabled_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpsecServersResponseBodyIpsecServers& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIpPool, clientIpPool_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(EffectImmediately, effectImmediately_);
      DARABONBA_PTR_FROM_JSON(IDaaSInstanceId, IDaaSInstanceId_);
      DARABONBA_PTR_FROM_JSON(IkeConfig, ikeConfig_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IpsecConfig, ipsecConfig_);
      DARABONBA_PTR_FROM_JSON(IpsecServerId, ipsecServerId_);
      DARABONBA_PTR_FROM_JSON(IpsecServerName, ipsecServerName_);
      DARABONBA_PTR_FROM_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_FROM_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_FROM_JSON(MultiFactorAuthEnabled, multiFactorAuthEnabled_);
      DARABONBA_PTR_FROM_JSON(OnlineClientCount, onlineClientCount_);
      DARABONBA_PTR_FROM_JSON(Psk, psk_);
      DARABONBA_PTR_FROM_JSON(PskEnabled, pskEnabled_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
    };
    ListIpsecServersResponseBodyIpsecServers() = default ;
    ListIpsecServersResponseBodyIpsecServers(const ListIpsecServersResponseBodyIpsecServers &) = default ;
    ListIpsecServersResponseBodyIpsecServers(ListIpsecServersResponseBodyIpsecServers &&) = default ;
    ListIpsecServersResponseBodyIpsecServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpsecServersResponseBodyIpsecServers() = default ;
    ListIpsecServersResponseBodyIpsecServers& operator=(const ListIpsecServersResponseBodyIpsecServers &) = default ;
    ListIpsecServersResponseBodyIpsecServers& operator=(ListIpsecServersResponseBodyIpsecServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientIpPool_ == nullptr
        && return this->creationTime_ == nullptr && return this->effectImmediately_ == nullptr && return this->IDaaSInstanceId_ == nullptr && return this->ikeConfig_ == nullptr && return this->internetIp_ == nullptr
        && return this->ipsecConfig_ == nullptr && return this->ipsecServerId_ == nullptr && return this->ipsecServerName_ == nullptr && return this->localSubnet_ == nullptr && return this->maxConnections_ == nullptr
        && return this->multiFactorAuthEnabled_ == nullptr && return this->onlineClientCount_ == nullptr && return this->psk_ == nullptr && return this->pskEnabled_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->vpnGatewayId_ == nullptr; };
    // clientIpPool Field Functions 
    bool hasClientIpPool() const { return this->clientIpPool_ != nullptr;};
    void deleteClientIpPool() { this->clientIpPool_ = nullptr;};
    inline string clientIpPool() const { DARABONBA_PTR_GET_DEFAULT(clientIpPool_, "") };
    inline ListIpsecServersResponseBodyIpsecServers& setClientIpPool(string clientIpPool) { DARABONBA_PTR_SET_VALUE(clientIpPool_, clientIpPool) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListIpsecServersResponseBodyIpsecServers& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // effectImmediately Field Functions 
    bool hasEffectImmediately() const { return this->effectImmediately_ != nullptr;};
    void deleteEffectImmediately() { this->effectImmediately_ = nullptr;};
    inline bool effectImmediately() const { DARABONBA_PTR_GET_DEFAULT(effectImmediately_, false) };
    inline ListIpsecServersResponseBodyIpsecServers& setEffectImmediately(bool effectImmediately) { DARABONBA_PTR_SET_VALUE(effectImmediately_, effectImmediately) };


    // IDaaSInstanceId Field Functions 
    bool hasIDaaSInstanceId() const { return this->IDaaSInstanceId_ != nullptr;};
    void deleteIDaaSInstanceId() { this->IDaaSInstanceId_ = nullptr;};
    inline string IDaaSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(IDaaSInstanceId_, "") };
    inline ListIpsecServersResponseBodyIpsecServers& setIDaaSInstanceId(string IDaaSInstanceId) { DARABONBA_PTR_SET_VALUE(IDaaSInstanceId_, IDaaSInstanceId) };


    // ikeConfig Field Functions 
    bool hasIkeConfig() const { return this->ikeConfig_ != nullptr;};
    void deleteIkeConfig() { this->ikeConfig_ = nullptr;};
    inline const Models::ListIpsecServersResponseBodyIpsecServersIkeConfig & ikeConfig() const { DARABONBA_PTR_GET_CONST(ikeConfig_, Models::ListIpsecServersResponseBodyIpsecServersIkeConfig) };
    inline Models::ListIpsecServersResponseBodyIpsecServersIkeConfig ikeConfig() { DARABONBA_PTR_GET(ikeConfig_, Models::ListIpsecServersResponseBodyIpsecServersIkeConfig) };
    inline ListIpsecServersResponseBodyIpsecServers& setIkeConfig(const Models::ListIpsecServersResponseBodyIpsecServersIkeConfig & ikeConfig) { DARABONBA_PTR_SET_VALUE(ikeConfig_, ikeConfig) };
    inline ListIpsecServersResponseBodyIpsecServers& setIkeConfig(Models::ListIpsecServersResponseBodyIpsecServersIkeConfig && ikeConfig) { DARABONBA_PTR_SET_RVALUE(ikeConfig_, ikeConfig) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ListIpsecServersResponseBodyIpsecServers& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // ipsecConfig Field Functions 
    bool hasIpsecConfig() const { return this->ipsecConfig_ != nullptr;};
    void deleteIpsecConfig() { this->ipsecConfig_ = nullptr;};
    inline const Models::ListIpsecServersResponseBodyIpsecServersIpsecConfig & ipsecConfig() const { DARABONBA_PTR_GET_CONST(ipsecConfig_, Models::ListIpsecServersResponseBodyIpsecServersIpsecConfig) };
    inline Models::ListIpsecServersResponseBodyIpsecServersIpsecConfig ipsecConfig() { DARABONBA_PTR_GET(ipsecConfig_, Models::ListIpsecServersResponseBodyIpsecServersIpsecConfig) };
    inline ListIpsecServersResponseBodyIpsecServers& setIpsecConfig(const Models::ListIpsecServersResponseBodyIpsecServersIpsecConfig & ipsecConfig) { DARABONBA_PTR_SET_VALUE(ipsecConfig_, ipsecConfig) };
    inline ListIpsecServersResponseBodyIpsecServers& setIpsecConfig(Models::ListIpsecServersResponseBodyIpsecServersIpsecConfig && ipsecConfig) { DARABONBA_PTR_SET_RVALUE(ipsecConfig_, ipsecConfig) };


    // ipsecServerId Field Functions 
    bool hasIpsecServerId() const { return this->ipsecServerId_ != nullptr;};
    void deleteIpsecServerId() { this->ipsecServerId_ = nullptr;};
    inline string ipsecServerId() const { DARABONBA_PTR_GET_DEFAULT(ipsecServerId_, "") };
    inline ListIpsecServersResponseBodyIpsecServers& setIpsecServerId(string ipsecServerId) { DARABONBA_PTR_SET_VALUE(ipsecServerId_, ipsecServerId) };


    // ipsecServerName Field Functions 
    bool hasIpsecServerName() const { return this->ipsecServerName_ != nullptr;};
    void deleteIpsecServerName() { this->ipsecServerName_ = nullptr;};
    inline string ipsecServerName() const { DARABONBA_PTR_GET_DEFAULT(ipsecServerName_, "") };
    inline ListIpsecServersResponseBodyIpsecServers& setIpsecServerName(string ipsecServerName) { DARABONBA_PTR_SET_VALUE(ipsecServerName_, ipsecServerName) };


    // localSubnet Field Functions 
    bool hasLocalSubnet() const { return this->localSubnet_ != nullptr;};
    void deleteLocalSubnet() { this->localSubnet_ = nullptr;};
    inline string localSubnet() const { DARABONBA_PTR_GET_DEFAULT(localSubnet_, "") };
    inline ListIpsecServersResponseBodyIpsecServers& setLocalSubnet(string localSubnet) { DARABONBA_PTR_SET_VALUE(localSubnet_, localSubnet) };


    // maxConnections Field Functions 
    bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
    void deleteMaxConnections() { this->maxConnections_ = nullptr;};
    inline int32_t maxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, 0) };
    inline ListIpsecServersResponseBodyIpsecServers& setMaxConnections(int32_t maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


    // multiFactorAuthEnabled Field Functions 
    bool hasMultiFactorAuthEnabled() const { return this->multiFactorAuthEnabled_ != nullptr;};
    void deleteMultiFactorAuthEnabled() { this->multiFactorAuthEnabled_ = nullptr;};
    inline bool multiFactorAuthEnabled() const { DARABONBA_PTR_GET_DEFAULT(multiFactorAuthEnabled_, false) };
    inline ListIpsecServersResponseBodyIpsecServers& setMultiFactorAuthEnabled(bool multiFactorAuthEnabled) { DARABONBA_PTR_SET_VALUE(multiFactorAuthEnabled_, multiFactorAuthEnabled) };


    // onlineClientCount Field Functions 
    bool hasOnlineClientCount() const { return this->onlineClientCount_ != nullptr;};
    void deleteOnlineClientCount() { this->onlineClientCount_ = nullptr;};
    inline int32_t onlineClientCount() const { DARABONBA_PTR_GET_DEFAULT(onlineClientCount_, 0) };
    inline ListIpsecServersResponseBodyIpsecServers& setOnlineClientCount(int32_t onlineClientCount) { DARABONBA_PTR_SET_VALUE(onlineClientCount_, onlineClientCount) };


    // psk Field Functions 
    bool hasPsk() const { return this->psk_ != nullptr;};
    void deletePsk() { this->psk_ = nullptr;};
    inline string psk() const { DARABONBA_PTR_GET_DEFAULT(psk_, "") };
    inline ListIpsecServersResponseBodyIpsecServers& setPsk(string psk) { DARABONBA_PTR_SET_VALUE(psk_, psk) };


    // pskEnabled Field Functions 
    bool hasPskEnabled() const { return this->pskEnabled_ != nullptr;};
    void deletePskEnabled() { this->pskEnabled_ = nullptr;};
    inline bool pskEnabled() const { DARABONBA_PTR_GET_DEFAULT(pskEnabled_, false) };
    inline ListIpsecServersResponseBodyIpsecServers& setPskEnabled(bool pskEnabled) { DARABONBA_PTR_SET_VALUE(pskEnabled_, pskEnabled) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListIpsecServersResponseBodyIpsecServers& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListIpsecServersResponseBodyIpsecServers& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string vpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline ListIpsecServersResponseBodyIpsecServers& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


  protected:
    // The client CIDR block. It refers to the CIDR block that is allocated to the virtual interface of the client.
    std::shared_ptr<string> clientIpPool_ = nullptr;
    // The time when the IPsec server was created.
    // 
    // T is used as a delimiter. Z indicates that the time is in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // Indicates whether the current IPsec tunnel is deleted and negotiations are reinitiated. Valid values:
    // 
    // *   **true**: immediately initiates negotiations after the configuration is completed.
    // *   **false**: initiates negotiations when inbound traffic is detected.
    std::shared_ptr<bool> effectImmediately_ = nullptr;
    // The ID of the IDaaS instance.
    std::shared_ptr<string> IDaaSInstanceId_ = nullptr;
    // The configurations of Phase 1 negotiations.
    std::shared_ptr<Models::ListIpsecServersResponseBodyIpsecServersIkeConfig> ikeConfig_ = nullptr;
    // The public IP address of the VPN gateway.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The configurations of Phase 2 negotiations.
    std::shared_ptr<Models::ListIpsecServersResponseBodyIpsecServersIpsecConfig> ipsecConfig_ = nullptr;
    // The IPsec server ID.
    std::shared_ptr<string> ipsecServerId_ = nullptr;
    // The name of the IPsec server.
    std::shared_ptr<string> ipsecServerName_ = nullptr;
    // The local CIDR blocks, which refer to the CIDR blocks on the virtual private cloud (VPC) side.
    std::shared_ptr<string> localSubnet_ = nullptr;
    // The number of SSL-VPN connections supported by the VPN gateway.
    // 
    // >  The number of SSL-VPN connections specified in this parameter includes both SSL-VPN and IPsec-VPN connections. For example, you have five SSL-VPN connections and three SSL clients occupy three SSL-VPN connections. In this case, two clients can connect to the IPsec server.
    std::shared_ptr<int32_t> maxConnections_ = nullptr;
    // Indicates whether two-factor authentication is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**: The feature is disabled.
    std::shared_ptr<bool> multiFactorAuthEnabled_ = nullptr;
    // The number of clients that are connected to the IPsec server.
    std::shared_ptr<int32_t> onlineClientCount_ = nullptr;
    // The pre-shared key.
    std::shared_ptr<string> psk_ = nullptr;
    // Indicates whether pre-shared key authentication is enabled. Only **true** may be returned, which indicates that pre-shared key authentication is enabled.
    std::shared_ptr<bool> pskEnabled_ = nullptr;
    // The ID of the region where the IPsec server is created.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the IPsec server belongs.
    // 
    // You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to query the resource group information.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the VPN gateway.
    std::shared_ptr<string> vpnGatewayId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
