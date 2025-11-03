// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIPSECSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIPSECSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateIpsecServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIpsecServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIpPool, clientIpPool_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EffectImmediately, effectImmediately_);
      DARABONBA_PTR_TO_JSON(IkeConfig, ikeConfig_);
      DARABONBA_PTR_TO_JSON(IpSecServerName, ipSecServerName_);
      DARABONBA_PTR_TO_JSON(IpsecConfig, ipsecConfig_);
      DARABONBA_PTR_TO_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_TO_JSON(Psk, psk_);
      DARABONBA_PTR_TO_JSON(PskEnabled, pskEnabled_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIpsecServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIpPool, clientIpPool_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EffectImmediately, effectImmediately_);
      DARABONBA_PTR_FROM_JSON(IkeConfig, ikeConfig_);
      DARABONBA_PTR_FROM_JSON(IpSecServerName, ipSecServerName_);
      DARABONBA_PTR_FROM_JSON(IpsecConfig, ipsecConfig_);
      DARABONBA_PTR_FROM_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_FROM_JSON(Psk, psk_);
      DARABONBA_PTR_FROM_JSON(PskEnabled, pskEnabled_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
    };
    CreateIpsecServerRequest() = default ;
    CreateIpsecServerRequest(const CreateIpsecServerRequest &) = default ;
    CreateIpsecServerRequest(CreateIpsecServerRequest &&) = default ;
    CreateIpsecServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIpsecServerRequest() = default ;
    CreateIpsecServerRequest& operator=(const CreateIpsecServerRequest &) = default ;
    CreateIpsecServerRequest& operator=(CreateIpsecServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientIpPool_ == nullptr
        && return this->clientToken_ == nullptr && return this->dryRun_ == nullptr && return this->effectImmediately_ == nullptr && return this->ikeConfig_ == nullptr && return this->ipSecServerName_ == nullptr
        && return this->ipsecConfig_ == nullptr && return this->localSubnet_ == nullptr && return this->psk_ == nullptr && return this->pskEnabled_ == nullptr && return this->regionId_ == nullptr
        && return this->vpnGatewayId_ == nullptr; };
    // clientIpPool Field Functions 
    bool hasClientIpPool() const { return this->clientIpPool_ != nullptr;};
    void deleteClientIpPool() { this->clientIpPool_ = nullptr;};
    inline string clientIpPool() const { DARABONBA_PTR_GET_DEFAULT(clientIpPool_, "") };
    inline CreateIpsecServerRequest& setClientIpPool(string clientIpPool) { DARABONBA_PTR_SET_VALUE(clientIpPool_, clientIpPool) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateIpsecServerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline CreateIpsecServerRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // effectImmediately Field Functions 
    bool hasEffectImmediately() const { return this->effectImmediately_ != nullptr;};
    void deleteEffectImmediately() { this->effectImmediately_ = nullptr;};
    inline bool effectImmediately() const { DARABONBA_PTR_GET_DEFAULT(effectImmediately_, false) };
    inline CreateIpsecServerRequest& setEffectImmediately(bool effectImmediately) { DARABONBA_PTR_SET_VALUE(effectImmediately_, effectImmediately) };


    // ikeConfig Field Functions 
    bool hasIkeConfig() const { return this->ikeConfig_ != nullptr;};
    void deleteIkeConfig() { this->ikeConfig_ = nullptr;};
    inline string ikeConfig() const { DARABONBA_PTR_GET_DEFAULT(ikeConfig_, "") };
    inline CreateIpsecServerRequest& setIkeConfig(string ikeConfig) { DARABONBA_PTR_SET_VALUE(ikeConfig_, ikeConfig) };


    // ipSecServerName Field Functions 
    bool hasIpSecServerName() const { return this->ipSecServerName_ != nullptr;};
    void deleteIpSecServerName() { this->ipSecServerName_ = nullptr;};
    inline string ipSecServerName() const { DARABONBA_PTR_GET_DEFAULT(ipSecServerName_, "") };
    inline CreateIpsecServerRequest& setIpSecServerName(string ipSecServerName) { DARABONBA_PTR_SET_VALUE(ipSecServerName_, ipSecServerName) };


    // ipsecConfig Field Functions 
    bool hasIpsecConfig() const { return this->ipsecConfig_ != nullptr;};
    void deleteIpsecConfig() { this->ipsecConfig_ = nullptr;};
    inline string ipsecConfig() const { DARABONBA_PTR_GET_DEFAULT(ipsecConfig_, "") };
    inline CreateIpsecServerRequest& setIpsecConfig(string ipsecConfig) { DARABONBA_PTR_SET_VALUE(ipsecConfig_, ipsecConfig) };


    // localSubnet Field Functions 
    bool hasLocalSubnet() const { return this->localSubnet_ != nullptr;};
    void deleteLocalSubnet() { this->localSubnet_ = nullptr;};
    inline string localSubnet() const { DARABONBA_PTR_GET_DEFAULT(localSubnet_, "") };
    inline CreateIpsecServerRequest& setLocalSubnet(string localSubnet) { DARABONBA_PTR_SET_VALUE(localSubnet_, localSubnet) };


    // psk Field Functions 
    bool hasPsk() const { return this->psk_ != nullptr;};
    void deletePsk() { this->psk_ = nullptr;};
    inline string psk() const { DARABONBA_PTR_GET_DEFAULT(psk_, "") };
    inline CreateIpsecServerRequest& setPsk(string psk) { DARABONBA_PTR_SET_VALUE(psk_, psk) };


    // pskEnabled Field Functions 
    bool hasPskEnabled() const { return this->pskEnabled_ != nullptr;};
    void deletePskEnabled() { this->pskEnabled_ = nullptr;};
    inline bool pskEnabled() const { DARABONBA_PTR_GET_DEFAULT(pskEnabled_, false) };
    inline CreateIpsecServerRequest& setPskEnabled(bool pskEnabled) { DARABONBA_PTR_SET_VALUE(pskEnabled_, pskEnabled) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateIpsecServerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string vpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline CreateIpsecServerRequest& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


  protected:
    // The client CIDR block from which an IP address is allocated to the virtual network interface controller (NIC) of the client.
    // 
    // >  The client CIDR block must not overlap with the CIDR blocks of the VPC.
    // 
    // This parameter is required.
    std::shared_ptr<string> clientIpPool_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to only precheck this request. Valid values:
    // 
    // *   **true**: prechecks the request without creating the IPsec server. The system checks the required parameters, request format, and service limits. If the request fails to pass the precheck, an error code is returned. If the request passes the precheck, the `DryRunOperation` error code is returned.
    // *   **false** (default): sends the request. This is the default value. If the request passes the precheck, the system creates the IPsec server.
    std::shared_ptr<string> dryRun_ = nullptr;
    // Specify whether to start connection negotiations immediately. Valid values:
    // 
    // *   **true**: immediately initiates negotiations after the configuration is complete.
    // *   **false** (default): initiates negotiations when inbound traffic is detected. This is the default value.
    std::shared_ptr<bool> effectImmediately_ = nullptr;
    // The configuration of Phase 1 negotiation. Valid values:
    // 
    // *   **IkeVersion**: the IKE version. Valid values: **ikev1** and **ikev2**. Default value: **ikev2**.
    // *   **IkeMode**: the IKE negotiation mode. Default value: **main**.
    // *   **IkeEncAlg**: the encryption algorithm that is used in Phase 1 negotiation. Default value: **aes**.
    // *   **IkeAuthAlg**: the authentication algorithm that is used in Phase 1 negotiation. Default value: **sha1**.
    // *   **IkePfs**: the Diffie-Hellman key exchange algorithm that is used in Phase 1 negotiation. Default value: **group2**.
    // *   **IkeLifetime**: the security association (SA) lifetime determined by Phase 1 negotiation. Unit: seconds. Valid values: **0** to **86400**. Default value: **86400**.
    // *   **LocalId**: the identifier of the IPsec server. The value can be a fully qualified domain name (FQDN) or an IP address. The default value is the public IP address of the VPN gateway.
    // *   **RemoteId**: the peer identifier. The value can be an FQDN or an IP address. The default value is empty.
    std::shared_ptr<string> ikeConfig_ = nullptr;
    // The name of the IPsec server.
    // 
    // The name must be 1 to 100 characters in length.
    std::shared_ptr<string> ipSecServerName_ = nullptr;
    // The configuration of Phase 2 negotiation. Valid values:
    // 
    // *   **IpsecEncAlg**: the encryption algorithm that is used in Phase 2 negotiation. Default value: **aes**.
    // *   **IpsecAuthAlg**: the authentication algorithm that is used in Phase 2 negotiation. Default value: **sha1**.
    // *   **IpsecPfs**: forwards packets of all protocols. The Diffie-Hellman key exchange algorithm that is used in Phase 2 negotiation. Default value: **group2**.
    // *   **IpsecLifetime**: the SA lifetime determined by Phase 2 negotiation. Unit: seconds. Valid values: **0** to **86400**. Default value: **86400**.
    std::shared_ptr<string> ipsecConfig_ = nullptr;
    // The local CIDR blocks, which are the CIDR blocks of the virtual private cloud (VPC) for the client to access.
    // 
    // Multiple CIDR blocks are separated with commas (,). Example: 192.168.1.0/24,192.168.2.0/24.
    // 
    // This parameter is required.
    std::shared_ptr<string> localSubnet_ = nullptr;
    // The pre-shared key.
    // 
    // The pre-shared key that is used for authentication between the IPsec-VPN server and the client. It must be 1 to 100 characters in length.
    // 
    // If you do not specify a pre-shared key, the system randomly generates a 16-bit string as the pre-shared key. You can call [ListIpsecServers](https://help.aliyun.com/document_detail/2794120.html) to query keys generated by the system.
    // 
    // > The pre-shared key of the IPsec server key must be the same as that of the client. Otherwise, the connection between the IPsec server and the client cannot be established.
    std::shared_ptr<string> psk_ = nullptr;
    // Indicates whether pre-shared key authentication is enabled. If you set the value to **true**, pre-shared key authentication is enabled.
    // 
    // >  This parameter is required.
    std::shared_ptr<bool> pskEnabled_ = nullptr;
    // The ID of the region where the VPN gateway is deployed.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the VPN gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpnGatewayId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
