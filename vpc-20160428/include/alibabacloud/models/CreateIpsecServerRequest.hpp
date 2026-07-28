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
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->effectImmediately_ == nullptr && this->ikeConfig_ == nullptr && this->ipSecServerName_ == nullptr
        && this->ipsecConfig_ == nullptr && this->localSubnet_ == nullptr && this->psk_ == nullptr && this->pskEnabled_ == nullptr && this->regionId_ == nullptr
        && this->vpnGatewayId_ == nullptr; };
    // clientIpPool Field Functions 
    bool hasClientIpPool() const { return this->clientIpPool_ != nullptr;};
    void deleteClientIpPool() { this->clientIpPool_ = nullptr;};
    inline string getClientIpPool() const { DARABONBA_PTR_GET_DEFAULT(clientIpPool_, "") };
    inline CreateIpsecServerRequest& setClientIpPool(string clientIpPool) { DARABONBA_PTR_SET_VALUE(clientIpPool_, clientIpPool) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateIpsecServerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline CreateIpsecServerRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // effectImmediately Field Functions 
    bool hasEffectImmediately() const { return this->effectImmediately_ != nullptr;};
    void deleteEffectImmediately() { this->effectImmediately_ = nullptr;};
    inline bool getEffectImmediately() const { DARABONBA_PTR_GET_DEFAULT(effectImmediately_, false) };
    inline CreateIpsecServerRequest& setEffectImmediately(bool effectImmediately) { DARABONBA_PTR_SET_VALUE(effectImmediately_, effectImmediately) };


    // ikeConfig Field Functions 
    bool hasIkeConfig() const { return this->ikeConfig_ != nullptr;};
    void deleteIkeConfig() { this->ikeConfig_ = nullptr;};
    inline string getIkeConfig() const { DARABONBA_PTR_GET_DEFAULT(ikeConfig_, "") };
    inline CreateIpsecServerRequest& setIkeConfig(string ikeConfig) { DARABONBA_PTR_SET_VALUE(ikeConfig_, ikeConfig) };


    // ipSecServerName Field Functions 
    bool hasIpSecServerName() const { return this->ipSecServerName_ != nullptr;};
    void deleteIpSecServerName() { this->ipSecServerName_ = nullptr;};
    inline string getIpSecServerName() const { DARABONBA_PTR_GET_DEFAULT(ipSecServerName_, "") };
    inline CreateIpsecServerRequest& setIpSecServerName(string ipSecServerName) { DARABONBA_PTR_SET_VALUE(ipSecServerName_, ipSecServerName) };


    // ipsecConfig Field Functions 
    bool hasIpsecConfig() const { return this->ipsecConfig_ != nullptr;};
    void deleteIpsecConfig() { this->ipsecConfig_ = nullptr;};
    inline string getIpsecConfig() const { DARABONBA_PTR_GET_DEFAULT(ipsecConfig_, "") };
    inline CreateIpsecServerRequest& setIpsecConfig(string ipsecConfig) { DARABONBA_PTR_SET_VALUE(ipsecConfig_, ipsecConfig) };


    // localSubnet Field Functions 
    bool hasLocalSubnet() const { return this->localSubnet_ != nullptr;};
    void deleteLocalSubnet() { this->localSubnet_ = nullptr;};
    inline string getLocalSubnet() const { DARABONBA_PTR_GET_DEFAULT(localSubnet_, "") };
    inline CreateIpsecServerRequest& setLocalSubnet(string localSubnet) { DARABONBA_PTR_SET_VALUE(localSubnet_, localSubnet) };


    // psk Field Functions 
    bool hasPsk() const { return this->psk_ != nullptr;};
    void deletePsk() { this->psk_ = nullptr;};
    inline string getPsk() const { DARABONBA_PTR_GET_DEFAULT(psk_, "") };
    inline CreateIpsecServerRequest& setPsk(string psk) { DARABONBA_PTR_SET_VALUE(psk_, psk) };


    // pskEnabled Field Functions 
    bool hasPskEnabled() const { return this->pskEnabled_ != nullptr;};
    void deletePskEnabled() { this->pskEnabled_ = nullptr;};
    inline bool getPskEnabled() const { DARABONBA_PTR_GET_DEFAULT(pskEnabled_, false) };
    inline CreateIpsecServerRequest& setPskEnabled(bool pskEnabled) { DARABONBA_PTR_SET_VALUE(pskEnabled_, pskEnabled) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateIpsecServerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string getVpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline CreateIpsecServerRequest& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


  protected:
    // The client CIDR block, which is the address range used to assign IP addresses to virtual network interface controllers (NICs) of clients.
    // 
    // > The client CIDR block cannot conflict with the VPC-side CIDR block.
    // 
    // This parameter is required.
    shared_ptr<string> clientIpPool_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: performs a dry run without creating the IPsec server. The system checks the required parameters, request format, and service limits. If the check fails, the corresponding error message is returned. If the check succeeds, `DryRunOperation` is returned.
    // 
    // - **false** (default): sends the request. After the request passes the check, the IPsec server is created.
    shared_ptr<string> dryRun_ {};
    // Specifies whether the configuration takes effect immediately. Valid values:
    // 
    // - **true**: Negotiation starts immediately after the configuration is complete.
    // 
    // - **false** (default): Negotiation starts when inbound traffic is detected.
    shared_ptr<bool> effectImmediately_ {};
    // The Phase 1 negotiation parameter settings. Valid values:
    // 
    // - **IkeVersion**: The version of the IKE protocol. Valid values: **ikev1** and **ikev2**. Default value: **ikev2**.
    // 
    // - **IkeMode**: The negotiation pattern of the IKE version. Default value: **main**.
    // 
    // - **IkeEncAlg**: The encryption algorithm used in Phase 1 negotiations. Default value: **aes**.
    // 
    // - **IkeAuthAlg**: The authentication algorithm used in Phase 1 negotiations. Default value: **sha1**.
    // 
    // - **IkePfs**: The Diffie-Hellman key exchange algorithm used in Phase 1 negotiations. Default value: **group2**.
    // 
    // - **IkeLifetime**: The epoch of the security association (SA) negotiated in Phase 1. Unit: seconds. Valid values: **0** to **86400**. Default value: **86400**.
    // 
    // - **LocalId**: The identity of the IPsec server. The FQDN and IP address formats are supported. Default value: the public IP address of the VPN gateway.
    // 
    // - **RemoteId**: The identity of the peer. The FQDN and IP address formats are supported. Default value: empty.
    shared_ptr<string> ikeConfig_ {};
    // The name of the IPsec server.
    // 
    // The name must be 1 to 100 characters in length.
    shared_ptr<string> ipSecServerName_ {};
    // The Phase 2 negotiation parameter settings. Valid values:
    // 
    // - **IpsecEncAlg**: The encryption algorithm used in Phase 2 negotiations. Default value: **aes**.
    // 
    // - **IpsecAuthAlg**: The authentication algorithm used in Phase 2 negotiations. Default value: **sha1**.
    // 
    // - **IpsecPfs**: Forward all protocol packets. The Diffie-Hellman key exchange algorithm used in Phase 2 negotiations. Default value: **group2**.
    // 
    // - **IpsecLifetime**: The epoch of the SA negotiated in Phase 2. Unit: seconds. Valid values: **0** to **86400**. Default value: **86400**.
    shared_ptr<string> ipsecConfig_ {};
    // The local CIDR block, which is the VPC-side CIDR block that needs to communicate with the client CIDR block.
    // 
    // Separate multiple CIDR blocks with commas (,). Example: 192.168.1.0/24,192.168.2.0/24.
    // 
    // This parameter is required.
    shared_ptr<string> localSubnet_ {};
    // The pre-shared key.
    // 
    // The pre-shared key is used for identity authentication between the IPsec server and the client. The key must be 1 to 100 characters in length.
    // 
    // If you do not specify a pre-shared key, the system randomly generates a 16-character string as the pre-shared key. You can call the [ListIpsecServers](https://help.aliyun.com/document_detail/2794120.html) operation to query the pre-shared key generated by the system.
    // 
    // > The pre-shared key of the IPsec server must be the same as the authentication key of the client. Otherwise, a connection cannot be established between the IPsec server and the client.
    shared_ptr<string> psk_ {};
    // Specifies whether to enable pre-shared key authentication. Valid values: **true**, which indicates that pre-shared key authentication is enabled.
    // 
    // > This parameter is required.
    shared_ptr<bool> pskEnabled_ {};
    // The region ID of the VPN gateway.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The instance ID of the VPN gateway.
    // 
    // This parameter is required.
    shared_ptr<string> vpnGatewayId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
