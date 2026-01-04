// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPNATTACHMENTATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPNATTACHMENTATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyVpnAttachmentAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpnAttachmentAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoConfigRoute, autoConfigRoute_);
      DARABONBA_PTR_TO_JSON(BgpConfig, bgpConfig_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_TO_JSON(EffectImmediately, effectImmediately_);
      DARABONBA_PTR_TO_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_TO_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_TO_JSON(EnableTunnelsBgp, enableTunnelsBgp_);
      DARABONBA_PTR_TO_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_TO_JSON(IkeConfig, ikeConfig_);
      DARABONBA_PTR_TO_JSON(IpsecConfig, ipsecConfig_);
      DARABONBA_PTR_TO_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemoteCaCert, remoteCaCert_);
      DARABONBA_PTR_TO_JSON(RemoteSubnet, remoteSubnet_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TunnelOptionsSpecification, tunnelOptionsSpecification_);
      DARABONBA_PTR_TO_JSON(VpnConnectionId, vpnConnectionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpnAttachmentAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoConfigRoute, autoConfigRoute_);
      DARABONBA_PTR_FROM_JSON(BgpConfig, bgpConfig_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_FROM_JSON(EffectImmediately, effectImmediately_);
      DARABONBA_PTR_FROM_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_FROM_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_FROM_JSON(EnableTunnelsBgp, enableTunnelsBgp_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_FROM_JSON(IkeConfig, ikeConfig_);
      DARABONBA_PTR_FROM_JSON(IpsecConfig, ipsecConfig_);
      DARABONBA_PTR_FROM_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemoteCaCert, remoteCaCert_);
      DARABONBA_PTR_FROM_JSON(RemoteSubnet, remoteSubnet_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TunnelOptionsSpecification, tunnelOptionsSpecification_);
      DARABONBA_PTR_FROM_JSON(VpnConnectionId, vpnConnectionId_);
    };
    ModifyVpnAttachmentAttributeRequest() = default ;
    ModifyVpnAttachmentAttributeRequest(const ModifyVpnAttachmentAttributeRequest &) = default ;
    ModifyVpnAttachmentAttributeRequest(ModifyVpnAttachmentAttributeRequest &&) = default ;
    ModifyVpnAttachmentAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpnAttachmentAttributeRequest() = default ;
    ModifyVpnAttachmentAttributeRequest& operator=(const ModifyVpnAttachmentAttributeRequest &) = default ;
    ModifyVpnAttachmentAttributeRequest& operator=(ModifyVpnAttachmentAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TunnelOptionsSpecification : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TunnelOptionsSpecification& obj) { 
        DARABONBA_PTR_TO_JSON(CustomerGatewayId, customerGatewayId_);
        DARABONBA_PTR_TO_JSON(EnableDpd, enableDpd_);
        DARABONBA_PTR_TO_JSON(EnableNatTraversal, enableNatTraversal_);
        DARABONBA_PTR_TO_JSON(TunnelBgpConfig, tunnelBgpConfig_);
        DARABONBA_PTR_TO_JSON(TunnelId, tunnelId_);
        DARABONBA_PTR_TO_JSON(TunnelIkeConfig, tunnelIkeConfig_);
        DARABONBA_PTR_TO_JSON(TunnelIndex, tunnelIndex_);
        DARABONBA_PTR_TO_JSON(TunnelIpsecConfig, tunnelIpsecConfig_);
      };
      friend void from_json(const Darabonba::Json& j, TunnelOptionsSpecification& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomerGatewayId, customerGatewayId_);
        DARABONBA_PTR_FROM_JSON(EnableDpd, enableDpd_);
        DARABONBA_PTR_FROM_JSON(EnableNatTraversal, enableNatTraversal_);
        DARABONBA_PTR_FROM_JSON(TunnelBgpConfig, tunnelBgpConfig_);
        DARABONBA_PTR_FROM_JSON(TunnelId, tunnelId_);
        DARABONBA_PTR_FROM_JSON(TunnelIkeConfig, tunnelIkeConfig_);
        DARABONBA_PTR_FROM_JSON(TunnelIndex, tunnelIndex_);
        DARABONBA_PTR_FROM_JSON(TunnelIpsecConfig, tunnelIpsecConfig_);
      };
      TunnelOptionsSpecification() = default ;
      TunnelOptionsSpecification(const TunnelOptionsSpecification &) = default ;
      TunnelOptionsSpecification(TunnelOptionsSpecification &&) = default ;
      TunnelOptionsSpecification(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TunnelOptionsSpecification() = default ;
      TunnelOptionsSpecification& operator=(const TunnelOptionsSpecification &) = default ;
      TunnelOptionsSpecification& operator=(TunnelOptionsSpecification &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TunnelIpsecConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TunnelIpsecConfig& obj) { 
          DARABONBA_PTR_TO_JSON(IpsecAuthAlg, ipsecAuthAlg_);
          DARABONBA_PTR_TO_JSON(IpsecEncAlg, ipsecEncAlg_);
          DARABONBA_PTR_TO_JSON(IpsecLifetime, ipsecLifetime_);
          DARABONBA_PTR_TO_JSON(IpsecPfs, ipsecPfs_);
        };
        friend void from_json(const Darabonba::Json& j, TunnelIpsecConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(IpsecAuthAlg, ipsecAuthAlg_);
          DARABONBA_PTR_FROM_JSON(IpsecEncAlg, ipsecEncAlg_);
          DARABONBA_PTR_FROM_JSON(IpsecLifetime, ipsecLifetime_);
          DARABONBA_PTR_FROM_JSON(IpsecPfs, ipsecPfs_);
        };
        TunnelIpsecConfig() = default ;
        TunnelIpsecConfig(const TunnelIpsecConfig &) = default ;
        TunnelIpsecConfig(TunnelIpsecConfig &&) = default ;
        TunnelIpsecConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TunnelIpsecConfig() = default ;
        TunnelIpsecConfig& operator=(const TunnelIpsecConfig &) = default ;
        TunnelIpsecConfig& operator=(TunnelIpsecConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ipsecAuthAlg_ == nullptr
        && this->ipsecEncAlg_ == nullptr && this->ipsecLifetime_ == nullptr && this->ipsecPfs_ == nullptr; };
        // ipsecAuthAlg Field Functions 
        bool hasIpsecAuthAlg() const { return this->ipsecAuthAlg_ != nullptr;};
        void deleteIpsecAuthAlg() { this->ipsecAuthAlg_ = nullptr;};
        inline string getIpsecAuthAlg() const { DARABONBA_PTR_GET_DEFAULT(ipsecAuthAlg_, "") };
        inline TunnelIpsecConfig& setIpsecAuthAlg(string ipsecAuthAlg) { DARABONBA_PTR_SET_VALUE(ipsecAuthAlg_, ipsecAuthAlg) };


        // ipsecEncAlg Field Functions 
        bool hasIpsecEncAlg() const { return this->ipsecEncAlg_ != nullptr;};
        void deleteIpsecEncAlg() { this->ipsecEncAlg_ = nullptr;};
        inline string getIpsecEncAlg() const { DARABONBA_PTR_GET_DEFAULT(ipsecEncAlg_, "") };
        inline TunnelIpsecConfig& setIpsecEncAlg(string ipsecEncAlg) { DARABONBA_PTR_SET_VALUE(ipsecEncAlg_, ipsecEncAlg) };


        // ipsecLifetime Field Functions 
        bool hasIpsecLifetime() const { return this->ipsecLifetime_ != nullptr;};
        void deleteIpsecLifetime() { this->ipsecLifetime_ = nullptr;};
        inline int32_t getIpsecLifetime() const { DARABONBA_PTR_GET_DEFAULT(ipsecLifetime_, 0) };
        inline TunnelIpsecConfig& setIpsecLifetime(int32_t ipsecLifetime) { DARABONBA_PTR_SET_VALUE(ipsecLifetime_, ipsecLifetime) };


        // ipsecPfs Field Functions 
        bool hasIpsecPfs() const { return this->ipsecPfs_ != nullptr;};
        void deleteIpsecPfs() { this->ipsecPfs_ = nullptr;};
        inline string getIpsecPfs() const { DARABONBA_PTR_GET_DEFAULT(ipsecPfs_, "") };
        inline TunnelIpsecConfig& setIpsecPfs(string ipsecPfs) { DARABONBA_PTR_SET_VALUE(ipsecPfs_, ipsecPfs) };


      protected:
        // The authentication algorithm that is used in Phase 2 negotiations.
        // 
        // Valid values: **md5**, **sha1**, **sha256**, **sha384**, and **sha512**.
        shared_ptr<string> ipsecAuthAlg_ {};
        // The encryption algorithm that is used in Phase 2 negotiations. Valid values: **aes**, **aes192**, **aes256**, **des**, and **3des**.
        shared_ptr<string> ipsecEncAlg_ {};
        // The SA lifetime as a result of Phase 2 negotiations. Unit: seconds.
        // 
        // Valid values: **0** to **86400**.
        shared_ptr<int32_t> ipsecLifetime_ {};
        // The Diffie-Hellman key exchange algorithm that is used in Phase 2 negotiations.
        // 
        // Valid values: **disabled**, **group1**, **group2**, **group5**, and **group14**.
        shared_ptr<string> ipsecPfs_ {};
      };

      class TunnelIkeConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TunnelIkeConfig& obj) { 
          DARABONBA_PTR_TO_JSON(IkeAuthAlg, ikeAuthAlg_);
          DARABONBA_PTR_TO_JSON(IkeEncAlg, ikeEncAlg_);
          DARABONBA_PTR_TO_JSON(IkeLifetime, ikeLifetime_);
          DARABONBA_PTR_TO_JSON(IkeMode, ikeMode_);
          DARABONBA_PTR_TO_JSON(IkePfs, ikePfs_);
          DARABONBA_PTR_TO_JSON(IkeVersion, ikeVersion_);
          DARABONBA_PTR_TO_JSON(LocalId, localId_);
          DARABONBA_PTR_TO_JSON(Psk, psk_);
          DARABONBA_PTR_TO_JSON(RemoteId, remoteId_);
        };
        friend void from_json(const Darabonba::Json& j, TunnelIkeConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(IkeAuthAlg, ikeAuthAlg_);
          DARABONBA_PTR_FROM_JSON(IkeEncAlg, ikeEncAlg_);
          DARABONBA_PTR_FROM_JSON(IkeLifetime, ikeLifetime_);
          DARABONBA_PTR_FROM_JSON(IkeMode, ikeMode_);
          DARABONBA_PTR_FROM_JSON(IkePfs, ikePfs_);
          DARABONBA_PTR_FROM_JSON(IkeVersion, ikeVersion_);
          DARABONBA_PTR_FROM_JSON(LocalId, localId_);
          DARABONBA_PTR_FROM_JSON(Psk, psk_);
          DARABONBA_PTR_FROM_JSON(RemoteId, remoteId_);
        };
        TunnelIkeConfig() = default ;
        TunnelIkeConfig(const TunnelIkeConfig &) = default ;
        TunnelIkeConfig(TunnelIkeConfig &&) = default ;
        TunnelIkeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TunnelIkeConfig() = default ;
        TunnelIkeConfig& operator=(const TunnelIkeConfig &) = default ;
        TunnelIkeConfig& operator=(TunnelIkeConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ikeAuthAlg_ == nullptr
        && this->ikeEncAlg_ == nullptr && this->ikeLifetime_ == nullptr && this->ikeMode_ == nullptr && this->ikePfs_ == nullptr && this->ikeVersion_ == nullptr
        && this->localId_ == nullptr && this->psk_ == nullptr && this->remoteId_ == nullptr; };
        // ikeAuthAlg Field Functions 
        bool hasIkeAuthAlg() const { return this->ikeAuthAlg_ != nullptr;};
        void deleteIkeAuthAlg() { this->ikeAuthAlg_ = nullptr;};
        inline string getIkeAuthAlg() const { DARABONBA_PTR_GET_DEFAULT(ikeAuthAlg_, "") };
        inline TunnelIkeConfig& setIkeAuthAlg(string ikeAuthAlg) { DARABONBA_PTR_SET_VALUE(ikeAuthAlg_, ikeAuthAlg) };


        // ikeEncAlg Field Functions 
        bool hasIkeEncAlg() const { return this->ikeEncAlg_ != nullptr;};
        void deleteIkeEncAlg() { this->ikeEncAlg_ = nullptr;};
        inline string getIkeEncAlg() const { DARABONBA_PTR_GET_DEFAULT(ikeEncAlg_, "") };
        inline TunnelIkeConfig& setIkeEncAlg(string ikeEncAlg) { DARABONBA_PTR_SET_VALUE(ikeEncAlg_, ikeEncAlg) };


        // ikeLifetime Field Functions 
        bool hasIkeLifetime() const { return this->ikeLifetime_ != nullptr;};
        void deleteIkeLifetime() { this->ikeLifetime_ = nullptr;};
        inline int64_t getIkeLifetime() const { DARABONBA_PTR_GET_DEFAULT(ikeLifetime_, 0L) };
        inline TunnelIkeConfig& setIkeLifetime(int64_t ikeLifetime) { DARABONBA_PTR_SET_VALUE(ikeLifetime_, ikeLifetime) };


        // ikeMode Field Functions 
        bool hasIkeMode() const { return this->ikeMode_ != nullptr;};
        void deleteIkeMode() { this->ikeMode_ = nullptr;};
        inline string getIkeMode() const { DARABONBA_PTR_GET_DEFAULT(ikeMode_, "") };
        inline TunnelIkeConfig& setIkeMode(string ikeMode) { DARABONBA_PTR_SET_VALUE(ikeMode_, ikeMode) };


        // ikePfs Field Functions 
        bool hasIkePfs() const { return this->ikePfs_ != nullptr;};
        void deleteIkePfs() { this->ikePfs_ = nullptr;};
        inline string getIkePfs() const { DARABONBA_PTR_GET_DEFAULT(ikePfs_, "") };
        inline TunnelIkeConfig& setIkePfs(string ikePfs) { DARABONBA_PTR_SET_VALUE(ikePfs_, ikePfs) };


        // ikeVersion Field Functions 
        bool hasIkeVersion() const { return this->ikeVersion_ != nullptr;};
        void deleteIkeVersion() { this->ikeVersion_ = nullptr;};
        inline string getIkeVersion() const { DARABONBA_PTR_GET_DEFAULT(ikeVersion_, "") };
        inline TunnelIkeConfig& setIkeVersion(string ikeVersion) { DARABONBA_PTR_SET_VALUE(ikeVersion_, ikeVersion) };


        // localId Field Functions 
        bool hasLocalId() const { return this->localId_ != nullptr;};
        void deleteLocalId() { this->localId_ = nullptr;};
        inline string getLocalId() const { DARABONBA_PTR_GET_DEFAULT(localId_, "") };
        inline TunnelIkeConfig& setLocalId(string localId) { DARABONBA_PTR_SET_VALUE(localId_, localId) };


        // psk Field Functions 
        bool hasPsk() const { return this->psk_ != nullptr;};
        void deletePsk() { this->psk_ = nullptr;};
        inline string getPsk() const { DARABONBA_PTR_GET_DEFAULT(psk_, "") };
        inline TunnelIkeConfig& setPsk(string psk) { DARABONBA_PTR_SET_VALUE(psk_, psk) };


        // remoteId Field Functions 
        bool hasRemoteId() const { return this->remoteId_ != nullptr;};
        void deleteRemoteId() { this->remoteId_ = nullptr;};
        inline string getRemoteId() const { DARABONBA_PTR_GET_DEFAULT(remoteId_, "") };
        inline TunnelIkeConfig& setRemoteId(string remoteId) { DARABONBA_PTR_SET_VALUE(remoteId_, remoteId) };


      protected:
        // The authentication algorithm that is used in Phase 1 negotiations. Valid values: **md5**, **sha1**, **sha256**, **sha384**, and **sha512**.
        shared_ptr<string> ikeAuthAlg_ {};
        // The encryption algorithm that is used in Phase 1 negotiations. Valid values: **aes**, **aes192**, **aes256**, **des**, and **3des**.
        shared_ptr<string> ikeEncAlg_ {};
        // The SA lifetime as a result of Phase 1 negotiations. Unit: seconds.
        // 
        // Valid values: **0** to **86400**.
        shared_ptr<int64_t> ikeLifetime_ {};
        // The negotiation mode of IKE. Valid values: **main** and **aggressive**.
        // 
        // *   **main:** This mode offers higher security during negotiations.
        // *   **aggressive**: This mode is faster with a higher success rate.
        shared_ptr<string> ikeMode_ {};
        // The Diffie-Hellman key exchange algorithm that is used in Phase 1 negotiations. Valid values: **group1**, **group2**, **group5**, and **group14**.
        shared_ptr<string> ikePfs_ {};
        // The version of the IKE protocol. Valid values: **ikev1** and **ikev2**.
        // 
        // Compared with IKEv1, IKEv2 simplifies the SA negotiation process and provides better support for scenarios with multiple CIDR blocks.
        shared_ptr<string> ikeVersion_ {};
        // The identifier of the tunnel on the Alibaba Cloud side, which is used in Phase 1 negotiations. The identifier cannot exceed 100 characters in length and cannot contain spaces.
        // 
        // **LocalId** supports fully qualified domain names (FQDNs). If you use an FQDN, we recommend that you set the negotiation mode to **aggressive**.
        shared_ptr<string> localId_ {};
        // The pre-shared key that is used for identity authentication between the tunnel and the tunnel peer.
        // 
        // *   The key must be 1 to 100 characters in length, and can contain digits, and letters. The key cannot contain spaces. ``~!\\`@#$%^&*()_-+={}[]|;:\\",.<>/?``
        // *   If you do not specify a pre-shared key, the system randomly generates a 16-bit string as the pre-shared key. You can call the [DescribeVpnAttachments](https://help.aliyun.com/document_detail/2526939.html) operation to query the pre-shared key that is automatically generated by the system.
        // 
        // >  The tunnel and the tunnel peer must use the same pre-shared key. Otherwise, the tunnel cannot be established.
        shared_ptr<string> psk_ {};
        // The identifier of the tunnel peer, which is used in Phase 1 negotiations. The identifier cannot exceed 100 characters in length and cannot contain spaces.
        // 
        // **RemoteId** supports FQDNs. If you use an FQDN, we recommend that you set the negotiation mode to **aggressive**.
        shared_ptr<string> remoteId_ {};
      };

      class TunnelBgpConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TunnelBgpConfig& obj) { 
          DARABONBA_PTR_TO_JSON(LocalAsn, localAsn_);
          DARABONBA_PTR_TO_JSON(LocalBgpIp, localBgpIp_);
          DARABONBA_PTR_TO_JSON(TunnelCidr, tunnelCidr_);
        };
        friend void from_json(const Darabonba::Json& j, TunnelBgpConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(LocalAsn, localAsn_);
          DARABONBA_PTR_FROM_JSON(LocalBgpIp, localBgpIp_);
          DARABONBA_PTR_FROM_JSON(TunnelCidr, tunnelCidr_);
        };
        TunnelBgpConfig() = default ;
        TunnelBgpConfig(const TunnelBgpConfig &) = default ;
        TunnelBgpConfig(TunnelBgpConfig &&) = default ;
        TunnelBgpConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TunnelBgpConfig() = default ;
        TunnelBgpConfig& operator=(const TunnelBgpConfig &) = default ;
        TunnelBgpConfig& operator=(TunnelBgpConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->localAsn_ == nullptr
        && this->localBgpIp_ == nullptr && this->tunnelCidr_ == nullptr; };
        // localAsn Field Functions 
        bool hasLocalAsn() const { return this->localAsn_ != nullptr;};
        void deleteLocalAsn() { this->localAsn_ = nullptr;};
        inline int64_t getLocalAsn() const { DARABONBA_PTR_GET_DEFAULT(localAsn_, 0L) };
        inline TunnelBgpConfig& setLocalAsn(int64_t localAsn) { DARABONBA_PTR_SET_VALUE(localAsn_, localAsn) };


        // localBgpIp Field Functions 
        bool hasLocalBgpIp() const { return this->localBgpIp_ != nullptr;};
        void deleteLocalBgpIp() { this->localBgpIp_ = nullptr;};
        inline string getLocalBgpIp() const { DARABONBA_PTR_GET_DEFAULT(localBgpIp_, "") };
        inline TunnelBgpConfig& setLocalBgpIp(string localBgpIp) { DARABONBA_PTR_SET_VALUE(localBgpIp_, localBgpIp) };


        // tunnelCidr Field Functions 
        bool hasTunnelCidr() const { return this->tunnelCidr_ != nullptr;};
        void deleteTunnelCidr() { this->tunnelCidr_ = nullptr;};
        inline string getTunnelCidr() const { DARABONBA_PTR_GET_DEFAULT(tunnelCidr_, "") };
        inline TunnelBgpConfig& setTunnelCidr(string tunnelCidr) { DARABONBA_PTR_SET_VALUE(tunnelCidr_, tunnelCidr) };


      protected:
        // The autonomous system number (ASN) of the tunnel on the Alibaba Cloud side. Valid values: **1** to **4294967295**. Default value: **45104**.
        // 
        // >  We recommend that you use a private ASN to establish BGP connections to Alibaba Cloud. Refer to the relevant documentation for the private ASN range.
        shared_ptr<int64_t> localAsn_ {};
        // The BGP IP address of the tunnel on the Alibaba Cloud side. The address is an IP address that falls within the BGP CIDR block.
        shared_ptr<string> localBgpIp_ {};
        // The BGP CIDR block of the tunnel. The CIDR block must fall within 169.254.0.0/16 and the mask of the CIDR block must be 30 bits in length. The CIDR block cannot be 169.254.0.0/30, 169.254.1.0/30, 169.254.2.0/30, 169.254.3.0/30, 169.254.4.0/30, 169.254.5.0/30, 169.254.6.0/30, or 169.254.169.252/30.
        // 
        // >  The two tunnels of an IPsec connection must use different CIDR blocks.
        shared_ptr<string> tunnelCidr_ {};
      };

      virtual bool empty() const override { return this->customerGatewayId_ == nullptr
        && this->enableDpd_ == nullptr && this->enableNatTraversal_ == nullptr && this->tunnelBgpConfig_ == nullptr && this->tunnelId_ == nullptr && this->tunnelIkeConfig_ == nullptr
        && this->tunnelIndex_ == nullptr && this->tunnelIpsecConfig_ == nullptr; };
      // customerGatewayId Field Functions 
      bool hasCustomerGatewayId() const { return this->customerGatewayId_ != nullptr;};
      void deleteCustomerGatewayId() { this->customerGatewayId_ = nullptr;};
      inline string getCustomerGatewayId() const { DARABONBA_PTR_GET_DEFAULT(customerGatewayId_, "") };
      inline TunnelOptionsSpecification& setCustomerGatewayId(string customerGatewayId) { DARABONBA_PTR_SET_VALUE(customerGatewayId_, customerGatewayId) };


      // enableDpd Field Functions 
      bool hasEnableDpd() const { return this->enableDpd_ != nullptr;};
      void deleteEnableDpd() { this->enableDpd_ = nullptr;};
      inline bool getEnableDpd() const { DARABONBA_PTR_GET_DEFAULT(enableDpd_, false) };
      inline TunnelOptionsSpecification& setEnableDpd(bool enableDpd) { DARABONBA_PTR_SET_VALUE(enableDpd_, enableDpd) };


      // enableNatTraversal Field Functions 
      bool hasEnableNatTraversal() const { return this->enableNatTraversal_ != nullptr;};
      void deleteEnableNatTraversal() { this->enableNatTraversal_ = nullptr;};
      inline bool getEnableNatTraversal() const { DARABONBA_PTR_GET_DEFAULT(enableNatTraversal_, false) };
      inline TunnelOptionsSpecification& setEnableNatTraversal(bool enableNatTraversal) { DARABONBA_PTR_SET_VALUE(enableNatTraversal_, enableNatTraversal) };


      // tunnelBgpConfig Field Functions 
      bool hasTunnelBgpConfig() const { return this->tunnelBgpConfig_ != nullptr;};
      void deleteTunnelBgpConfig() { this->tunnelBgpConfig_ = nullptr;};
      inline const TunnelOptionsSpecification::TunnelBgpConfig & getTunnelBgpConfig() const { DARABONBA_PTR_GET_CONST(tunnelBgpConfig_, TunnelOptionsSpecification::TunnelBgpConfig) };
      inline TunnelOptionsSpecification::TunnelBgpConfig getTunnelBgpConfig() { DARABONBA_PTR_GET(tunnelBgpConfig_, TunnelOptionsSpecification::TunnelBgpConfig) };
      inline TunnelOptionsSpecification& setTunnelBgpConfig(const TunnelOptionsSpecification::TunnelBgpConfig & tunnelBgpConfig) { DARABONBA_PTR_SET_VALUE(tunnelBgpConfig_, tunnelBgpConfig) };
      inline TunnelOptionsSpecification& setTunnelBgpConfig(TunnelOptionsSpecification::TunnelBgpConfig && tunnelBgpConfig) { DARABONBA_PTR_SET_RVALUE(tunnelBgpConfig_, tunnelBgpConfig) };


      // tunnelId Field Functions 
      bool hasTunnelId() const { return this->tunnelId_ != nullptr;};
      void deleteTunnelId() { this->tunnelId_ = nullptr;};
      inline string getTunnelId() const { DARABONBA_PTR_GET_DEFAULT(tunnelId_, "") };
      inline TunnelOptionsSpecification& setTunnelId(string tunnelId) { DARABONBA_PTR_SET_VALUE(tunnelId_, tunnelId) };


      // tunnelIkeConfig Field Functions 
      bool hasTunnelIkeConfig() const { return this->tunnelIkeConfig_ != nullptr;};
      void deleteTunnelIkeConfig() { this->tunnelIkeConfig_ = nullptr;};
      inline const TunnelOptionsSpecification::TunnelIkeConfig & getTunnelIkeConfig() const { DARABONBA_PTR_GET_CONST(tunnelIkeConfig_, TunnelOptionsSpecification::TunnelIkeConfig) };
      inline TunnelOptionsSpecification::TunnelIkeConfig getTunnelIkeConfig() { DARABONBA_PTR_GET(tunnelIkeConfig_, TunnelOptionsSpecification::TunnelIkeConfig) };
      inline TunnelOptionsSpecification& setTunnelIkeConfig(const TunnelOptionsSpecification::TunnelIkeConfig & tunnelIkeConfig) { DARABONBA_PTR_SET_VALUE(tunnelIkeConfig_, tunnelIkeConfig) };
      inline TunnelOptionsSpecification& setTunnelIkeConfig(TunnelOptionsSpecification::TunnelIkeConfig && tunnelIkeConfig) { DARABONBA_PTR_SET_RVALUE(tunnelIkeConfig_, tunnelIkeConfig) };


      // tunnelIndex Field Functions 
      bool hasTunnelIndex() const { return this->tunnelIndex_ != nullptr;};
      void deleteTunnelIndex() { this->tunnelIndex_ = nullptr;};
      inline int32_t getTunnelIndex() const { DARABONBA_PTR_GET_DEFAULT(tunnelIndex_, 0) };
      inline TunnelOptionsSpecification& setTunnelIndex(int32_t tunnelIndex) { DARABONBA_PTR_SET_VALUE(tunnelIndex_, tunnelIndex) };


      // tunnelIpsecConfig Field Functions 
      bool hasTunnelIpsecConfig() const { return this->tunnelIpsecConfig_ != nullptr;};
      void deleteTunnelIpsecConfig() { this->tunnelIpsecConfig_ = nullptr;};
      inline const TunnelOptionsSpecification::TunnelIpsecConfig & getTunnelIpsecConfig() const { DARABONBA_PTR_GET_CONST(tunnelIpsecConfig_, TunnelOptionsSpecification::TunnelIpsecConfig) };
      inline TunnelOptionsSpecification::TunnelIpsecConfig getTunnelIpsecConfig() { DARABONBA_PTR_GET(tunnelIpsecConfig_, TunnelOptionsSpecification::TunnelIpsecConfig) };
      inline TunnelOptionsSpecification& setTunnelIpsecConfig(const TunnelOptionsSpecification::TunnelIpsecConfig & tunnelIpsecConfig) { DARABONBA_PTR_SET_VALUE(tunnelIpsecConfig_, tunnelIpsecConfig) };
      inline TunnelOptionsSpecification& setTunnelIpsecConfig(TunnelOptionsSpecification::TunnelIpsecConfig && tunnelIpsecConfig) { DARABONBA_PTR_SET_RVALUE(tunnelIpsecConfig_, tunnelIpsecConfig) };


    protected:
      // The ID of the customer gateway that is associated with the tunnel.
      // 
      // >  This parameter is only supported in dual-tunnel IPsec-VPN connections.
      shared_ptr<string> customerGatewayId_ {};
      // Specifies whether to enable the Dead Peer Detection (DPD) feature for the tunnel. Valid values:
      // 
      // *   **true**: enables DPD. The initiator of the IPsec-VPN connection sends DPD packets to check the existence and availability of the peer. If no feedback is received from the peer within the specified period of time, the connection fails. In this case, ISAKMP SA and IPsec SA are deleted along with the security tunnel.
      // *   **false**: disables DPD. The initiator of the IPsec-VPN connection does not send DPD packets.
      shared_ptr<bool> enableDpd_ {};
      // Specifies whether to enable NAT traversal for the tunnel. Valid values:
      // 
      // *   **true**: enables NAT traversal. After NAT traversal is enabled, the initiator does not check the UDP ports during IKE negotiations and can automatically discover NAT gateway devices along the IPsec-VPN tunnel.
      // *   **false**: disables NAT traversal.
      shared_ptr<bool> enableNatTraversal_ {};
      // Add BGP configurations for the tunnel.
      // 
      // >  If you enable BGP for an IPsec-VPN connection, you must set **EnableTunnelsBgp** parameter to **true**.
      shared_ptr<TunnelOptionsSpecification::TunnelBgpConfig> tunnelBgpConfig_ {};
      // The tunnel ID.
      shared_ptr<string> tunnelId_ {};
      // The configuration of Phase 1 negotiations.
      shared_ptr<TunnelOptionsSpecification::TunnelIkeConfig> tunnelIkeConfig_ {};
      // The order in which the tunnel was created.
      // 
      // *   **1**: Tunnel 1.
      // *   **2**: Tunnel 2.
      shared_ptr<int32_t> tunnelIndex_ {};
      // The configuration of Phase 2 negotiations.
      shared_ptr<TunnelOptionsSpecification::TunnelIpsecConfig> tunnelIpsecConfig_ {};
    };

    virtual bool empty() const override { return this->autoConfigRoute_ == nullptr
        && this->bgpConfig_ == nullptr && this->clientToken_ == nullptr && this->customerGatewayId_ == nullptr && this->effectImmediately_ == nullptr && this->enableDpd_ == nullptr
        && this->enableNatTraversal_ == nullptr && this->enableTunnelsBgp_ == nullptr && this->healthCheckConfig_ == nullptr && this->ikeConfig_ == nullptr && this->ipsecConfig_ == nullptr
        && this->localSubnet_ == nullptr && this->name_ == nullptr && this->networkType_ == nullptr && this->ownerAccount_ == nullptr && this->regionId_ == nullptr
        && this->remoteCaCert_ == nullptr && this->remoteSubnet_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->tunnelOptionsSpecification_ == nullptr
        && this->vpnConnectionId_ == nullptr; };
    // autoConfigRoute Field Functions 
    bool hasAutoConfigRoute() const { return this->autoConfigRoute_ != nullptr;};
    void deleteAutoConfigRoute() { this->autoConfigRoute_ = nullptr;};
    inline bool getAutoConfigRoute() const { DARABONBA_PTR_GET_DEFAULT(autoConfigRoute_, false) };
    inline ModifyVpnAttachmentAttributeRequest& setAutoConfigRoute(bool autoConfigRoute) { DARABONBA_PTR_SET_VALUE(autoConfigRoute_, autoConfigRoute) };


    // bgpConfig Field Functions 
    bool hasBgpConfig() const { return this->bgpConfig_ != nullptr;};
    void deleteBgpConfig() { this->bgpConfig_ = nullptr;};
    inline string getBgpConfig() const { DARABONBA_PTR_GET_DEFAULT(bgpConfig_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setBgpConfig(string bgpConfig) { DARABONBA_PTR_SET_VALUE(bgpConfig_, bgpConfig) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // customerGatewayId Field Functions 
    bool hasCustomerGatewayId() const { return this->customerGatewayId_ != nullptr;};
    void deleteCustomerGatewayId() { this->customerGatewayId_ = nullptr;};
    inline string getCustomerGatewayId() const { DARABONBA_PTR_GET_DEFAULT(customerGatewayId_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setCustomerGatewayId(string customerGatewayId) { DARABONBA_PTR_SET_VALUE(customerGatewayId_, customerGatewayId) };


    // effectImmediately Field Functions 
    bool hasEffectImmediately() const { return this->effectImmediately_ != nullptr;};
    void deleteEffectImmediately() { this->effectImmediately_ = nullptr;};
    inline bool getEffectImmediately() const { DARABONBA_PTR_GET_DEFAULT(effectImmediately_, false) };
    inline ModifyVpnAttachmentAttributeRequest& setEffectImmediately(bool effectImmediately) { DARABONBA_PTR_SET_VALUE(effectImmediately_, effectImmediately) };


    // enableDpd Field Functions 
    bool hasEnableDpd() const { return this->enableDpd_ != nullptr;};
    void deleteEnableDpd() { this->enableDpd_ = nullptr;};
    inline bool getEnableDpd() const { DARABONBA_PTR_GET_DEFAULT(enableDpd_, false) };
    inline ModifyVpnAttachmentAttributeRequest& setEnableDpd(bool enableDpd) { DARABONBA_PTR_SET_VALUE(enableDpd_, enableDpd) };


    // enableNatTraversal Field Functions 
    bool hasEnableNatTraversal() const { return this->enableNatTraversal_ != nullptr;};
    void deleteEnableNatTraversal() { this->enableNatTraversal_ = nullptr;};
    inline bool getEnableNatTraversal() const { DARABONBA_PTR_GET_DEFAULT(enableNatTraversal_, false) };
    inline ModifyVpnAttachmentAttributeRequest& setEnableNatTraversal(bool enableNatTraversal) { DARABONBA_PTR_SET_VALUE(enableNatTraversal_, enableNatTraversal) };


    // enableTunnelsBgp Field Functions 
    bool hasEnableTunnelsBgp() const { return this->enableTunnelsBgp_ != nullptr;};
    void deleteEnableTunnelsBgp() { this->enableTunnelsBgp_ = nullptr;};
    inline bool getEnableTunnelsBgp() const { DARABONBA_PTR_GET_DEFAULT(enableTunnelsBgp_, false) };
    inline ModifyVpnAttachmentAttributeRequest& setEnableTunnelsBgp(bool enableTunnelsBgp) { DARABONBA_PTR_SET_VALUE(enableTunnelsBgp_, enableTunnelsBgp) };


    // healthCheckConfig Field Functions 
    bool hasHealthCheckConfig() const { return this->healthCheckConfig_ != nullptr;};
    void deleteHealthCheckConfig() { this->healthCheckConfig_ = nullptr;};
    inline string getHealthCheckConfig() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConfig_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setHealthCheckConfig(string healthCheckConfig) { DARABONBA_PTR_SET_VALUE(healthCheckConfig_, healthCheckConfig) };


    // ikeConfig Field Functions 
    bool hasIkeConfig() const { return this->ikeConfig_ != nullptr;};
    void deleteIkeConfig() { this->ikeConfig_ = nullptr;};
    inline string getIkeConfig() const { DARABONBA_PTR_GET_DEFAULT(ikeConfig_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setIkeConfig(string ikeConfig) { DARABONBA_PTR_SET_VALUE(ikeConfig_, ikeConfig) };


    // ipsecConfig Field Functions 
    bool hasIpsecConfig() const { return this->ipsecConfig_ != nullptr;};
    void deleteIpsecConfig() { this->ipsecConfig_ = nullptr;};
    inline string getIpsecConfig() const { DARABONBA_PTR_GET_DEFAULT(ipsecConfig_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setIpsecConfig(string ipsecConfig) { DARABONBA_PTR_SET_VALUE(ipsecConfig_, ipsecConfig) };


    // localSubnet Field Functions 
    bool hasLocalSubnet() const { return this->localSubnet_ != nullptr;};
    void deleteLocalSubnet() { this->localSubnet_ = nullptr;};
    inline string getLocalSubnet() const { DARABONBA_PTR_GET_DEFAULT(localSubnet_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setLocalSubnet(string localSubnet) { DARABONBA_PTR_SET_VALUE(localSubnet_, localSubnet) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remoteCaCert Field Functions 
    bool hasRemoteCaCert() const { return this->remoteCaCert_ != nullptr;};
    void deleteRemoteCaCert() { this->remoteCaCert_ = nullptr;};
    inline string getRemoteCaCert() const { DARABONBA_PTR_GET_DEFAULT(remoteCaCert_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setRemoteCaCert(string remoteCaCert) { DARABONBA_PTR_SET_VALUE(remoteCaCert_, remoteCaCert) };


    // remoteSubnet Field Functions 
    bool hasRemoteSubnet() const { return this->remoteSubnet_ != nullptr;};
    void deleteRemoteSubnet() { this->remoteSubnet_ = nullptr;};
    inline string getRemoteSubnet() const { DARABONBA_PTR_GET_DEFAULT(remoteSubnet_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setRemoteSubnet(string remoteSubnet) { DARABONBA_PTR_SET_VALUE(remoteSubnet_, remoteSubnet) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyVpnAttachmentAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tunnelOptionsSpecification Field Functions 
    bool hasTunnelOptionsSpecification() const { return this->tunnelOptionsSpecification_ != nullptr;};
    void deleteTunnelOptionsSpecification() { this->tunnelOptionsSpecification_ = nullptr;};
    inline const vector<ModifyVpnAttachmentAttributeRequest::TunnelOptionsSpecification> & getTunnelOptionsSpecification() const { DARABONBA_PTR_GET_CONST(tunnelOptionsSpecification_, vector<ModifyVpnAttachmentAttributeRequest::TunnelOptionsSpecification>) };
    inline vector<ModifyVpnAttachmentAttributeRequest::TunnelOptionsSpecification> getTunnelOptionsSpecification() { DARABONBA_PTR_GET(tunnelOptionsSpecification_, vector<ModifyVpnAttachmentAttributeRequest::TunnelOptionsSpecification>) };
    inline ModifyVpnAttachmentAttributeRequest& setTunnelOptionsSpecification(const vector<ModifyVpnAttachmentAttributeRequest::TunnelOptionsSpecification> & tunnelOptionsSpecification) { DARABONBA_PTR_SET_VALUE(tunnelOptionsSpecification_, tunnelOptionsSpecification) };
    inline ModifyVpnAttachmentAttributeRequest& setTunnelOptionsSpecification(vector<ModifyVpnAttachmentAttributeRequest::TunnelOptionsSpecification> && tunnelOptionsSpecification) { DARABONBA_PTR_SET_RVALUE(tunnelOptionsSpecification_, tunnelOptionsSpecification) };


    // vpnConnectionId Field Functions 
    bool hasVpnConnectionId() const { return this->vpnConnectionId_ != nullptr;};
    void deleteVpnConnectionId() { this->vpnConnectionId_ = nullptr;};
    inline string getVpnConnectionId() const { DARABONBA_PTR_GET_DEFAULT(vpnConnectionId_, "") };
    inline ModifyVpnAttachmentAttributeRequest& setVpnConnectionId(string vpnConnectionId) { DARABONBA_PTR_SET_VALUE(vpnConnectionId_, vpnConnectionId) };


  protected:
    // Specifies whether to automatically configure routes. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> autoConfigRoute_ {};
    // This parameter is supported if you modify the configurations of an IPsec-VPN connection in single-tunnel mode.
    // 
    // BGP configuration:
    // 
    // *   **BgpConfig.EnableBgp**: specifies whether to enable BGP. Valid values:
    // 
    //     *   **true**
    //     *   **false**
    // 
    // *   **BgpConfig.LocalAsn**: the autonomous system number (ASN) on the Alibaba Cloud side. Valid values: **1** to **4294967295**.
    // 
    //     You can enter a value in two segments separated by a period (.). Each segment is 16 bits in length. Enter the number in each segment in decimal format.
    // 
    //     For example, if you enter 123.456, the ASN is 8061384. The ASN is calculated by using the following formula: 123 × 65536 + 456 = 8061384.
    // 
    // *   **BgpConfig.TunnelCidr**: The CIDR block of the IPsec tunnel. The CIDR block must fall into 169.254.0.0/16 and the mask of the CIDR block must be 30 bits in length. The CIDR block cannot be 169.254.0.0/30, 169.254.1.0/30, 169.254.2.0/30, 169.254.3.0/30, 169.254.4.0/30, 169.254.5.0/30, 169.254.6.0/30, or 169.254.169.252/30.
    // 
    // *   **LocalBgpIp**: the BGP address on the Alibaba Cloud side. It must be an IP address that falls within the CIDR block of the IPsec tunnel.
    // 
    // > - Before you add BGP configurations, we recommend that you learn about how BGP works and the limits. For more information, see [Configure BGP dynamic routing](https://help.aliyun.com/document_detail/445767.html).
    // > - We recommend that you use a private ASN to establish BGP connections to Alibaba Cloud. Refer to the relevant documentation for the private ASN range.
    shared_ptr<string> bgpConfig_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the value of **RequestId** as the value of **ClientToken**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The customer gateways to be associated with the IPsec-VPN connections.
    // 
    // >  Only single-tunnel IPsec-VPN connections support this parameter.
    shared_ptr<string> customerGatewayId_ {};
    // Specifies whether to immediately start IPsec negotiations after the configuration takes effect. Valid values:
    // 
    // *   **true**: immediately starts IPsec negotiations after the configuration is complete.
    // *   **false**: starts IPsec negotiations when inbound traffic is detected.
    shared_ptr<bool> effectImmediately_ {};
    // This parameter is supported if you modify the configurations of an IPsec-VPN connection in single-tunnel mode.
    // 
    // Specifies whether to enable dead peer detection (DPD). Valid values:
    // 
    // *   **true**: enables DPD. The initiator of the IPsec-VPN connection sends DPD packets to check the existence and availability of the peer. If no feedback is received from the peer within the specified period of time, the connection fails. In this case, ISAKMP SA and IPsec SA are deleted, along with the security tunnel.
    // *   **false**: disables DPD. The initiator of the IPsec-VPN connection does not send DPD packets.
    shared_ptr<bool> enableDpd_ {};
    // This parameter is supported if you modify the configurations of an IPsec-VPN connection in single-tunnel mode.
    // 
    // Specifies whether to enable NAT traversal. Valid values:
    // 
    // *   **true**: enables NAT traversal. After NAT traversal is enabled, the initiator does not check the UDP ports during IKE negotiations and can automatically discover NAT gateway devices along the IPsec-VPN tunnel.
    // *   **false**: disables NAT traversal.
    shared_ptr<bool> enableNatTraversal_ {};
    // You can specify this parameter if you modify the configuration of a dual-tunnel IPsec-VPN connection.
    // 
    // Specifies whether to enable the BGP feature for the tunnel. Valid values: **true** and **false**.
    // 
    // >  Before you add BGP configurations, we recommend that you learn about how BGP works and the limits. For more information, see [Configure BGP dynamic routing](https://help.aliyun.com/document_detail/445767.html).
    shared_ptr<bool> enableTunnelsBgp_ {};
    // This parameter is supported if you modify the configurations of an IPsec-VPN connection in single-tunnel mode.
    // 
    // The health check configurations:
    // 
    // *   **HealthCheckConfig.enable**: specifies whether to enable the health check feature. Valid values:
    // 
    //     *   **true**
    //     *   **false**
    // 
    // *   **HealthCheckConfig.dip**: the destination IP address configured for health checks. Specify the IP address of the data center with which the VPC can access through the IPsec-VPN connection.
    // 
    // *   **HealthCheckConfig.sip**: the source IP address configured for health checks. The IP address of the VPC with which the data center can access through the IPsec-VPN connection.
    // 
    // *   **HealthCheckConfig.interval**: the interval between two consecutive health checks. Unit: seconds.
    // 
    // *   **HealthCheckConfig.retry:** the maximum number of health check retries.
    // 
    // *   **HealthCheckConfig.Policy**: specifies whether to withdraw advertised routes when health checks fail. Valid values:
    // 
    //     *   **revoke_route**
    //     *   **reserve_route**
    shared_ptr<string> healthCheckConfig_ {};
    // This parameter is supported if you modify the configurations of an IPsec-VPN connection in single-tunnel mode.
    // 
    // The configuration of Phase 1 negotiations:
    // 
    // *   **IkeConfig.Psk**: The pre-shared key that is used for identity authentication between the Alibaba Cloud IPsec connection and the on-premises data center.
    // 
    //     *   The key must be 1 to 100 characters in length, and can contain digits, and letters. The key cannot contain spaces. ``~!`@#$%^&*()_-+={}[]|;:\\",.<>/?``
    //     *   If you do not specify a pre-shared key, the system randomly generates a 16-bit string as the pre-shared key. You can call the [DescribeVpnConnection](https://help.aliyun.com/document_detail/120374.html) operation to query the pre-shared key that is automatically generated by the system.
    // 
    //     > The pre-shared key of the IPsec-VPN connection must be the same as the authentication key of the on-premises data center. Otherwise, connections between the on-premises data center and the VPN gateway cannot be established.
    // 
    // *   **IkeConfig.IkeVersion**: the version of the Internet Key Exchange (IKE) protocol. Valid values: **ikev1** and **ikev2**.
    // 
    // *   **IkeConfig.IkeMode**: the negotiation mode. Valid values: **main** and **aggressive**.
    // 
    // *   **IkeConfig.IkeEncAlg:** the encryption algorithm that is used in Phase 1 negotiations. Valid values: **aes**, **aes192**, **aes256**, **des**, and **3des**.
    // 
    // *   **IkeConfig.IkeAuthAlg**: the authentication algorithm that is used in Phase 1 negotiations. Valid values: **md5**, **sha1**, **sha256**, **sha384**, and **sha512**.
    // 
    // *   **IkeConfig.IkePfs**: the Diffie-Hellman key exchange algorithm that is used in Phase 1 negotiations. Valid values: **group1**, **group2**, **group5**, and **group14**.
    // 
    // *   **IkeConfig.IkeLifetime**: the SA lifetime as a result of Phase 1 negotiations. Unit: seconds. Valid values: **0** to **86400**.
    // 
    // *   **IkeConfig.LocalId**: the identifier on the Alibaba Cloud side. The identifier cannot exceed 100 characters in length and cannot contain spaces.
    // 
    // *   **IkeConfig.RemoteId**: the identifier of the data center. It cannot exceed 100 characters in length and cannot contain spaces.
    shared_ptr<string> ikeConfig_ {};
    // This parameter is supported if you modify the configurations of an IPsec-VPN connection in single-tunnel mode.
    // 
    // The configuration of Phase 2 negotiations:
    // 
    // *   **IpsecConfig.IpsecEncAlg:** the encryption algorithm that is used in Phase 2 negotiations. Valid values: **aes**, **aes192**, **aes256**, **des**, and **3des**.
    // *   **IpsecConfig. IpsecAuthAlg:** the authentication algorithm that is used in Phase 2 negotiations. Valid values: **md5**, **sha1**, **sha256**, **sha384**, and **sha512**.
    // *   **IpsecConfig. IpsecPfs:** the Diffie-Hellman key exchange algorithm that is used in Phase 2 negotiations. Valid values: **disabled**, **group1**, **group2**, **group5**, and **group14**.
    // *   **IkeConfig.IkeLifetime**: the SA lifetime determined by Phase 2 negotiations. Unit: seconds. Valid values: **0** to **86400**.
    shared_ptr<string> ipsecConfig_ {};
    // The CIDR block of the virtual private cloud (VPC) that communicates with the data center. The CIDR block is used in Phase 2 negotiations.
    // 
    // Separate multiple CIDR blocks with commas (,). Example: 192.168.1.0/24,192.168.2.0/24.
    // 
    // The following routing modes are supported:
    // 
    // *   If you set **LocalSubnet** and **RemoteSubnet** to 0.0.0.0/0, the routing mode of the IPsec-VPN connection is set to Destination Routing Mode.
    // *   If you set **LocalSubnet** and **RemoteSubnet** to specific CIDR blocks, the routing mode of the IPsec-VPN connection is set to Protected Data Flows.
    shared_ptr<string> localSubnet_ {};
    // The name of the IPsec-VPN connection.
    // 
    // The name must be 1 to 100 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> name_ {};
    // The network type of the IPsec-VPN connection. Valid values:
    // 
    // *   **public**: an encrypted connection over the Internet
    // *   **private**: an encrypted connection over private networks
    shared_ptr<string> networkType_ {};
    shared_ptr<string> ownerAccount_ {};
    // The ID of the region in which the IPsec-VPN connection is established.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The peer CA certificate when a ShangMi (SM) VPN gateway is used to create the IPsec-VPN connection.
    shared_ptr<string> remoteCaCert_ {};
    // The CIDR block of the data center that communicates with the VPC. This CIDR block is used in Phase 2 negotiations.
    // 
    // Separate multiple CIDR blocks with commas (,). Example: 192.168.3.0/24,192.168.4.0/24.
    // 
    // The following routing modes are supported:
    // 
    // *   If you set **LocalSubnet** and **RemoteSubnet** to 0.0.0.0/0, the routing mode of the IPsec-VPN connection is set to Destination Routing Mode.
    // *   If you set **LocalSubnet** and **RemoteSubnet** to specific CIDR blocks, the routing mode of the IPsec-VPN connection is set to Protected Data Flows.
    shared_ptr<string> remoteSubnet_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The tunnel configurations.
    // 
    // You can specify parameters in the **TunnelOptionsSpecification** array when you modify the configurations of an IPsec-VPN connection in dual-tunnel mode. You can modify the configurations of the two tunnels of the IPsec-VPN connection.
    shared_ptr<vector<ModifyVpnAttachmentAttributeRequest::TunnelOptionsSpecification>> tunnelOptionsSpecification_ {};
    // The ID of the IPsec-VPN connection.
    // 
    // This parameter is required.
    shared_ptr<string> vpnConnectionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
