// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIPSECSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIPSECSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class UpdateIpsecServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIpsecServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIpPool, clientIpPool_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EffectImmediately, effectImmediately_);
      DARABONBA_PTR_TO_JSON(IkeConfig, ikeConfig_);
      DARABONBA_PTR_TO_JSON(IpsecConfig, ipsecConfig_);
      DARABONBA_PTR_TO_JSON(IpsecServerId, ipsecServerId_);
      DARABONBA_PTR_TO_JSON(IpsecServerName, ipsecServerName_);
      DARABONBA_PTR_TO_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_TO_JSON(Psk, psk_);
      DARABONBA_PTR_TO_JSON(PskEnabled, pskEnabled_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIpsecServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIpPool, clientIpPool_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EffectImmediately, effectImmediately_);
      DARABONBA_PTR_FROM_JSON(IkeConfig, ikeConfig_);
      DARABONBA_PTR_FROM_JSON(IpsecConfig, ipsecConfig_);
      DARABONBA_PTR_FROM_JSON(IpsecServerId, ipsecServerId_);
      DARABONBA_PTR_FROM_JSON(IpsecServerName, ipsecServerName_);
      DARABONBA_PTR_FROM_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_FROM_JSON(Psk, psk_);
      DARABONBA_PTR_FROM_JSON(PskEnabled, pskEnabled_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateIpsecServerRequest() = default ;
    UpdateIpsecServerRequest(const UpdateIpsecServerRequest &) = default ;
    UpdateIpsecServerRequest(UpdateIpsecServerRequest &&) = default ;
    UpdateIpsecServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIpsecServerRequest() = default ;
    UpdateIpsecServerRequest& operator=(const UpdateIpsecServerRequest &) = default ;
    UpdateIpsecServerRequest& operator=(UpdateIpsecServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientIpPool_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->effectImmediately_ == nullptr && this->ikeConfig_ == nullptr && this->ipsecConfig_ == nullptr
        && this->ipsecServerId_ == nullptr && this->ipsecServerName_ == nullptr && this->localSubnet_ == nullptr && this->psk_ == nullptr && this->pskEnabled_ == nullptr
        && this->regionId_ == nullptr; };
    // clientIpPool Field Functions 
    bool hasClientIpPool() const { return this->clientIpPool_ != nullptr;};
    void deleteClientIpPool() { this->clientIpPool_ = nullptr;};
    inline string getClientIpPool() const { DARABONBA_PTR_GET_DEFAULT(clientIpPool_, "") };
    inline UpdateIpsecServerRequest& setClientIpPool(string clientIpPool) { DARABONBA_PTR_SET_VALUE(clientIpPool_, clientIpPool) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateIpsecServerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline UpdateIpsecServerRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // effectImmediately Field Functions 
    bool hasEffectImmediately() const { return this->effectImmediately_ != nullptr;};
    void deleteEffectImmediately() { this->effectImmediately_ = nullptr;};
    inline bool getEffectImmediately() const { DARABONBA_PTR_GET_DEFAULT(effectImmediately_, false) };
    inline UpdateIpsecServerRequest& setEffectImmediately(bool effectImmediately) { DARABONBA_PTR_SET_VALUE(effectImmediately_, effectImmediately) };


    // ikeConfig Field Functions 
    bool hasIkeConfig() const { return this->ikeConfig_ != nullptr;};
    void deleteIkeConfig() { this->ikeConfig_ = nullptr;};
    inline string getIkeConfig() const { DARABONBA_PTR_GET_DEFAULT(ikeConfig_, "") };
    inline UpdateIpsecServerRequest& setIkeConfig(string ikeConfig) { DARABONBA_PTR_SET_VALUE(ikeConfig_, ikeConfig) };


    // ipsecConfig Field Functions 
    bool hasIpsecConfig() const { return this->ipsecConfig_ != nullptr;};
    void deleteIpsecConfig() { this->ipsecConfig_ = nullptr;};
    inline string getIpsecConfig() const { DARABONBA_PTR_GET_DEFAULT(ipsecConfig_, "") };
    inline UpdateIpsecServerRequest& setIpsecConfig(string ipsecConfig) { DARABONBA_PTR_SET_VALUE(ipsecConfig_, ipsecConfig) };


    // ipsecServerId Field Functions 
    bool hasIpsecServerId() const { return this->ipsecServerId_ != nullptr;};
    void deleteIpsecServerId() { this->ipsecServerId_ = nullptr;};
    inline string getIpsecServerId() const { DARABONBA_PTR_GET_DEFAULT(ipsecServerId_, "") };
    inline UpdateIpsecServerRequest& setIpsecServerId(string ipsecServerId) { DARABONBA_PTR_SET_VALUE(ipsecServerId_, ipsecServerId) };


    // ipsecServerName Field Functions 
    bool hasIpsecServerName() const { return this->ipsecServerName_ != nullptr;};
    void deleteIpsecServerName() { this->ipsecServerName_ = nullptr;};
    inline string getIpsecServerName() const { DARABONBA_PTR_GET_DEFAULT(ipsecServerName_, "") };
    inline UpdateIpsecServerRequest& setIpsecServerName(string ipsecServerName) { DARABONBA_PTR_SET_VALUE(ipsecServerName_, ipsecServerName) };


    // localSubnet Field Functions 
    bool hasLocalSubnet() const { return this->localSubnet_ != nullptr;};
    void deleteLocalSubnet() { this->localSubnet_ = nullptr;};
    inline string getLocalSubnet() const { DARABONBA_PTR_GET_DEFAULT(localSubnet_, "") };
    inline UpdateIpsecServerRequest& setLocalSubnet(string localSubnet) { DARABONBA_PTR_SET_VALUE(localSubnet_, localSubnet) };


    // psk Field Functions 
    bool hasPsk() const { return this->psk_ != nullptr;};
    void deletePsk() { this->psk_ = nullptr;};
    inline string getPsk() const { DARABONBA_PTR_GET_DEFAULT(psk_, "") };
    inline UpdateIpsecServerRequest& setPsk(string psk) { DARABONBA_PTR_SET_VALUE(psk_, psk) };


    // pskEnabled Field Functions 
    bool hasPskEnabled() const { return this->pskEnabled_ != nullptr;};
    void deletePskEnabled() { this->pskEnabled_ = nullptr;};
    inline bool getPskEnabled() const { DARABONBA_PTR_GET_DEFAULT(pskEnabled_, false) };
    inline UpdateIpsecServerRequest& setPskEnabled(bool pskEnabled) { DARABONBA_PTR_SET_VALUE(pskEnabled_, pskEnabled) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateIpsecServerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The client CIDR block, which is the CIDR block from which IP addresses are assigned to virtual network interface controllers (NICs) of the client.
    // 
    // > The client CIDR block cannot conflict with the VPC CIDR block.
    shared_ptr<string> clientIpPool_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: performs a dry run without modifying the IPsec server configuration. The system checks the required parameters, request format, and service limits. If the check fails, the corresponding error message is returned. If the check succeeds, `DryRunOperation` is returned.
    // 
    // - **false** (default): performs a dry run and sends the request. After the check succeeds, the IPsec server configuration is modified.
    shared_ptr<string> dryRun_ {};
    // Specifies whether to delete the currently negotiated IPsec tunnel and re-initiate negotiation. Valid values:
    // 
    // - **true**: Negotiation is initiated immediately after the configuration is complete.
    // 
    // - **false**: Negotiation is initiated when inbound traffic is detected.
    shared_ptr<bool> effectImmediately_ {};
    // The Phase 1 negotiation parameter settings. Valid values:
    // 
    // - **IkeVersion**: The version of the IKE protocol. Valid values: **ikev1** or **ikev2**.
    // 
    // - **IkeMode**: The negotiation pattern of the IKE version. Default value: **main**.
    // 
    // - **IkeEncAlg**: The encryption algorithm used in Phase 1 negotiations. Default value: **aes**.
    // 
    // - **IkeAuthAlg**: The authentication algorithm used in Phase 1 negotiations. Default value: **sha1**.
    // 
    // - **IkePfs**: The Diffie-Hellman key exchange algorithm used in Phase 1 negotiations. Default value: **group2**.
    // 
    // - **IkeLifetime**: The lifetime of the SA negotiated in Phase 1. Unit: seconds. Valid values: **0** to **86400**. Default value: **86400**. The parameter specifies the SA epoch.
    // 
    // - **LocalId**: The identity of the IPsec server. FQDN and IP address formats are supported.
    // 
    // - **RemoteId**: The identity of the peer. FQDN and IP address formats are supported.
    shared_ptr<string> ikeConfig_ {};
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
    // The ID of the IPsec server.
    // 
    // This parameter is required.
    shared_ptr<string> ipsecServerId_ {};
    // The name of the IPsec server.
    // 
    // The name must be 1 to 100 characters in length.
    shared_ptr<string> ipsecServerName_ {};
    // The local CIDR block, which is the CIDR block on the VPC side that needs to communicate with the client CIDR block.
    // 
    // Separate multiple CIDR blocks with commas (,). Example: 192.168.1.0/24,192.168.2.0/24.
    shared_ptr<string> localSubnet_ {};
    // The pre-shared key.
    // 
    // The pre-shared key is used for identity authentication between the IPsec server and the client. The key must be 1 to 100 characters in length.
    // 
    // You can call the [ListIpsecServers](https://help.aliyun.com/document_detail/2794120.html) operation to query the key generated by the system.
    // 
    // > The pre-shared key of the IPsec server must be the same as the authentication key of the client. Otherwise, a connection cannot be established between the IPsec server and the client.
    shared_ptr<string> psk_ {};
    // Specifies whether to enable pre-shared key authentication. Valid values: **true**, which indicates that pre-shared key authentication is enabled.
    shared_ptr<bool> pskEnabled_ {};
    // The region ID of the IPsec server.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
