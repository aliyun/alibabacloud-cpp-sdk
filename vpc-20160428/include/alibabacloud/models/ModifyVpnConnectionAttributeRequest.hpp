// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPNCONNECTIONATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPNCONNECTIONATTRIBUTEREQUEST_HPP_
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
  class ModifyVpnConnectionAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpnConnectionAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoConfigRoute, autoConfigRoute_);
      DARABONBA_PTR_TO_JSON(BgpConfig, bgpConfig_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EffectImmediately, effectImmediately_);
      DARABONBA_PTR_TO_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_TO_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_TO_JSON(EnableTunnelsBgp, enableTunnelsBgp_);
      DARABONBA_PTR_TO_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_TO_JSON(IkeConfig, ikeConfig_);
      DARABONBA_PTR_TO_JSON(IpsecConfig, ipsecConfig_);
      DARABONBA_PTR_TO_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemoteCaCertificate, remoteCaCertificate_);
      DARABONBA_PTR_TO_JSON(RemoteSubnet, remoteSubnet_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TunnelOptionsSpecification, tunnelOptionsSpecification_);
      DARABONBA_PTR_TO_JSON(VpnConnectionId, vpnConnectionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpnConnectionAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoConfigRoute, autoConfigRoute_);
      DARABONBA_PTR_FROM_JSON(BgpConfig, bgpConfig_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EffectImmediately, effectImmediately_);
      DARABONBA_PTR_FROM_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_FROM_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_FROM_JSON(EnableTunnelsBgp, enableTunnelsBgp_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_FROM_JSON(IkeConfig, ikeConfig_);
      DARABONBA_PTR_FROM_JSON(IpsecConfig, ipsecConfig_);
      DARABONBA_PTR_FROM_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemoteCaCertificate, remoteCaCertificate_);
      DARABONBA_PTR_FROM_JSON(RemoteSubnet, remoteSubnet_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TunnelOptionsSpecification, tunnelOptionsSpecification_);
      DARABONBA_PTR_FROM_JSON(VpnConnectionId, vpnConnectionId_);
    };
    ModifyVpnConnectionAttributeRequest() = default ;
    ModifyVpnConnectionAttributeRequest(const ModifyVpnConnectionAttributeRequest &) = default ;
    ModifyVpnConnectionAttributeRequest(ModifyVpnConnectionAttributeRequest &&) = default ;
    ModifyVpnConnectionAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpnConnectionAttributeRequest() = default ;
    ModifyVpnConnectionAttributeRequest& operator=(const ModifyVpnConnectionAttributeRequest &) = default ;
    ModifyVpnConnectionAttributeRequest& operator=(ModifyVpnConnectionAttributeRequest &&) = default ;
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
        DARABONBA_PTR_TO_JSON(RemoteCaCertificate, remoteCaCertificate_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(TunnelBgpConfig, tunnelBgpConfig_);
        DARABONBA_PTR_TO_JSON(TunnelId, tunnelId_);
        DARABONBA_PTR_TO_JSON(TunnelIkeConfig, tunnelIkeConfig_);
        DARABONBA_PTR_TO_JSON(TunnelIpsecConfig, tunnelIpsecConfig_);
      };
      friend void from_json(const Darabonba::Json& j, TunnelOptionsSpecification& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomerGatewayId, customerGatewayId_);
        DARABONBA_PTR_FROM_JSON(EnableDpd, enableDpd_);
        DARABONBA_PTR_FROM_JSON(EnableNatTraversal, enableNatTraversal_);
        DARABONBA_PTR_FROM_JSON(RemoteCaCertificate, remoteCaCertificate_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(TunnelBgpConfig, tunnelBgpConfig_);
        DARABONBA_PTR_FROM_JSON(TunnelId, tunnelId_);
        DARABONBA_PTR_FROM_JSON(TunnelIkeConfig, tunnelIkeConfig_);
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
        // The authentication algorithm used in Phase 2 negotiation.
        // 
        // <props="intl"><ph>Valid values: **md5**, **sha1**, **sha256**, **sha384**, and **sha512**.</ph>
        // 
        // <props="china"><ph>If the VPN gateway instance type is standard, valid values are **md5**, **sha1**, **sha256**, **sha384**, and **sha512**.</ph>
        // 
        // <props="china"><ph>If the VPN gateway instance type is Chinese SM-based, the only valid value is **sm3**.</ph>
        shared_ptr<string> ipsecAuthAlg_ {};
        // The encryption algorithm used in Phase 2 negotiation.
        // 
        // <props="intl"><ph>Valid values: **aes**, **aes192**, **aes256**, **des**, and **3des**.</ph>
        // 
        // <props="china"><ph>If the VPN gateway instance type is standard, valid values are **aes**, **aes192**, **aes256**, **des**, and **3des**.</ph>
        // 
        // <props="china"><ph>If the VPN gateway instance type is Chinese SM-based, the only valid value is **sm4**.</ph>
        shared_ptr<string> ipsecEncAlg_ {};
        // The SA lifetime determined by Phase 2 negotiation. Unit: seconds. Valid values: **0** to **86400**.
        shared_ptr<int32_t> ipsecLifetime_ {};
        // The Diffie-Hellman key exchange algorithm used in Phase 2 negotiation.
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
        // The authentication algorithm used in Phase 1 negotiation.
        // 
        // <props="intl"><ph>Valid values: **md5**, **sha1**, **sha256**, **sha384**, and **sha512**.</ph>
        // 
        // <props="china"><ph>If the VPN gateway instance type is standard, valid values are **md5**, **sha1**, **sha256**, **sha384**, and **sha512**.</ph>
        // 
        // <props="china"><ph>If the VPN gateway instance type is Chinese SM-based, the only valid value is **sm3**.</ph>
        shared_ptr<string> ikeAuthAlg_ {};
        // The encryption algorithm used in Phase 1 negotiation.
        // 
        // <props="intl"><ph>Valid values: **aes**, **aes192**, **aes256**, **des**, and **3des**.</ph>
        // 
        // <props="china"><ph>If the VPN gateway instance type is standard, valid values are **aes**, **aes192**, **aes256**, **des**, and **3des**.</ph>
        // 
        // <props="china"><ph>If the VPN gateway instance type is Chinese SM-based, the only valid value is **sm4**.</ph>
        shared_ptr<string> ikeEncAlg_ {};
        // The SA lifetime determined by Phase 1 negotiation. Unit: seconds. Valid values: **0** to **86400**.
        shared_ptr<int64_t> ikeLifetime_ {};
        // The negotiation mode of the IKE version. Valid values:
        // 
        // - **main**: Main mode. This mode offers high security during negotiation.
        // - **aggressive**: Aggressive mode. This mode supports fast negotiation and a higher success rate.
        // 
        // <props="china"><ph>If the VPN gateway instance type is Chinese SM-based, only **main** is supported for the negotiation mode.</ph>
        shared_ptr<string> ikeMode_ {};
        // The Diffie-Hellman key exchange algorithm used in Phase 1 negotiation. Valid values: **group1**, **group2**, **group5**, and **group14**.
        shared_ptr<string> ikePfs_ {};
        // The version of the IKE protocol. Valid values: **ikev1** and **ikev2**.
        // 
        // Compared with IKEv1, IKEv2 simplifies the SA negotiation process and provides better support for multi-CIDR-block scenarios.
        // 
        // <props="china"><ph>If the VPN gateway instance type is Chinese SM-based, only **ikev1** is supported for the IKE version.</ph>
        shared_ptr<string> ikeVersion_ {};
        // The identifier of the tunnel local side (Alibaba Cloud side), which is used in Phase 1 negotiation. The identifier can be up to 100 characters in length and cannot contain spaces. The default value is the IP address of the tunnel.
        // 
        // **LocalId** supports the FQDN format. If you use the FQDN format, set the negotiation mode to **aggressive**.
        shared_ptr<string> localId_ {};
        // The pre-shared key used for identity authentication between the tunnel and the tunnel peer.
        // 
        // - The key must be 1 to 100 characters in length and can contain digits, letters, and the following characters. It cannot contain spaces. ```~!\\`@#$%^&*()_-+={}[]|;:\\",.<>/?```
        // 
        // - If you do not specify a pre-shared key, the system generates a random 16-character string as the pre-shared key. You can call the [DescribeVpnConnection](https://help.aliyun.com/document_detail/2526951.html) operation to query the pre-shared key that is automatically generated by the system.     
        // 
        // > The pre-shared key of the tunnel must be the same as that of the tunnel peer. Otherwise, the tunnel cannot be established.
        shared_ptr<string> psk_ {};
        // The identifier of the tunnel peer, which is used in Phase 1 negotiation. The identifier can be up to 100 characters in length and cannot contain spaces. The default value is the IP address of the customer gateway associated with the tunnel.
        // 
        // **RemoteId** supports the FQDN format. If you use the FQDN format, set the negotiation mode to **aggressive**.
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
        // The autonomous system number (ASN) on the tunnel local side (Alibaba Cloud side). Valid values: **1** to **4294967295**. Default value: **45104**.
        // 
        // > - This parameter can be configured or modified after you enable the BGP dynamic route feature for the IPsec-VPN connection (by setting **EnableTunnelsBgp** to **true**).
        // >- Before you add BGP configurations, understand the working mechanism and limits of BGP dynamic route feature. For more information, see [Configure BGP dynamic routing](https://help.aliyun.com/document_detail/2638220.html).
        // >- Use a private ASN to establish a BGP connection with Alibaba Cloud. Refer to the relevant documentation for the range of private ASNs.
        shared_ptr<int64_t> localAsn_ {};
        // The BGP address on the tunnel local side (Alibaba Cloud side). This address is an IP address within the BGP CIDR block.
        shared_ptr<string> localBgpIp_ {};
        // The BGP CIDR block of the tunnel.
        // 
        // The CIDR block must be a mask length of 30 within 169.254.0.0/16 and cannot be 169.254.0.0/30, 169.254.1.0/30, 169.254.2.0/30, 169.254.3.0/30, 169.254.4.0/30, 169.254.5.0/30, 169.254.6.0/30, or 169.254.169.252/30.
        // 
        // > The BGP CIDR block of each tunnel under a VPN gateway instance must be unique.
        shared_ptr<string> tunnelCidr_ {};
      };

      virtual bool empty() const override { return this->customerGatewayId_ == nullptr
        && this->enableDpd_ == nullptr && this->enableNatTraversal_ == nullptr && this->remoteCaCertificate_ == nullptr && this->role_ == nullptr && this->tunnelBgpConfig_ == nullptr
        && this->tunnelId_ == nullptr && this->tunnelIkeConfig_ == nullptr && this->tunnelIpsecConfig_ == nullptr; };
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


      // remoteCaCertificate Field Functions 
      bool hasRemoteCaCertificate() const { return this->remoteCaCertificate_ != nullptr;};
      void deleteRemoteCaCertificate() { this->remoteCaCertificate_ = nullptr;};
      inline string getRemoteCaCertificate() const { DARABONBA_PTR_GET_DEFAULT(remoteCaCertificate_, "") };
      inline TunnelOptionsSpecification& setRemoteCaCertificate(string remoteCaCertificate) { DARABONBA_PTR_SET_VALUE(remoteCaCertificate_, remoteCaCertificate) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline TunnelOptionsSpecification& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


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


      // tunnelIpsecConfig Field Functions 
      bool hasTunnelIpsecConfig() const { return this->tunnelIpsecConfig_ != nullptr;};
      void deleteTunnelIpsecConfig() { this->tunnelIpsecConfig_ = nullptr;};
      inline const TunnelOptionsSpecification::TunnelIpsecConfig & getTunnelIpsecConfig() const { DARABONBA_PTR_GET_CONST(tunnelIpsecConfig_, TunnelOptionsSpecification::TunnelIpsecConfig) };
      inline TunnelOptionsSpecification::TunnelIpsecConfig getTunnelIpsecConfig() { DARABONBA_PTR_GET(tunnelIpsecConfig_, TunnelOptionsSpecification::TunnelIpsecConfig) };
      inline TunnelOptionsSpecification& setTunnelIpsecConfig(const TunnelOptionsSpecification::TunnelIpsecConfig & tunnelIpsecConfig) { DARABONBA_PTR_SET_VALUE(tunnelIpsecConfig_, tunnelIpsecConfig) };
      inline TunnelOptionsSpecification& setTunnelIpsecConfig(TunnelOptionsSpecification::TunnelIpsecConfig && tunnelIpsecConfig) { DARABONBA_PTR_SET_RVALUE(tunnelIpsecConfig_, tunnelIpsecConfig) };


    protected:
      // The instance ID of the customer gateway associated with the tunnel.
      shared_ptr<string> customerGatewayId_ {};
      // Specifies whether to enable the DPD (Dead Peer Detection) feature for the tunnel. Valid values:
      // 
      // - **true**: Enables the DPD feature. The IPsec initiator sends DPD packets to check whether the peer device is alive. If no correct response is received within the specified period of time, the peer is considered disconnected. The ISAKMP SA and the corresponding IPsec SA are deleted, and the security tunnel is also deleted.
      // 
      // - **false**: Disables the DPD feature. The IPsec initiator does not send DPD packets.
      shared_ptr<bool> enableDpd_ {};
      // Specifies whether to enable the NAT traversal feature for the tunnel. Valid values:
      // 
      // - **true**: Enables NAT traversal. After NAT traversal is enabled, the IKE negotiation process skips UDP port number verification and can discover NAT gateway devices in the VPN tunnel.
      // 
      // - **false**: Disables NAT traversal.
      shared_ptr<bool> enableNatTraversal_ {};
      // If the current VPN gateway instance is a Chinese SM-based VPN gateway, you can modify the CA certificate of the tunnel peer.
      // 
      // If the current VPN gateway instance is a standard VPN gateway, this parameter is not supported.
      shared_ptr<string> remoteCaCertificate_ {};
      // The role of the tunnel. Valid values:
      // 
      // - **master**: The tunnel is the active tunnel.
      // - **slave**: The tunnel is the standby tunnel.
      shared_ptr<string> role_ {};
      // The BGP configuration of the tunnel to modify.
      shared_ptr<TunnelOptionsSpecification::TunnelBgpConfig> tunnelBgpConfig_ {};
      // The tunnel ID.
      shared_ptr<string> tunnelId_ {};
      // The Phase 1 negotiation configuration.
      shared_ptr<TunnelOptionsSpecification::TunnelIkeConfig> tunnelIkeConfig_ {};
      // The Phase 2 negotiation configuration.
      shared_ptr<TunnelOptionsSpecification::TunnelIpsecConfig> tunnelIpsecConfig_ {};
    };

    virtual bool empty() const override { return this->autoConfigRoute_ == nullptr
        && this->bgpConfig_ == nullptr && this->clientToken_ == nullptr && this->effectImmediately_ == nullptr && this->enableDpd_ == nullptr && this->enableNatTraversal_ == nullptr
        && this->enableTunnelsBgp_ == nullptr && this->healthCheckConfig_ == nullptr && this->ikeConfig_ == nullptr && this->ipsecConfig_ == nullptr && this->localSubnet_ == nullptr
        && this->name_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->remoteCaCertificate_ == nullptr
        && this->remoteSubnet_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->tunnelOptionsSpecification_ == nullptr && this->vpnConnectionId_ == nullptr; };
    // autoConfigRoute Field Functions 
    bool hasAutoConfigRoute() const { return this->autoConfigRoute_ != nullptr;};
    void deleteAutoConfigRoute() { this->autoConfigRoute_ = nullptr;};
    inline bool getAutoConfigRoute() const { DARABONBA_PTR_GET_DEFAULT(autoConfigRoute_, false) };
    inline ModifyVpnConnectionAttributeRequest& setAutoConfigRoute(bool autoConfigRoute) { DARABONBA_PTR_SET_VALUE(autoConfigRoute_, autoConfigRoute) };


    // bgpConfig Field Functions 
    bool hasBgpConfig() const { return this->bgpConfig_ != nullptr;};
    void deleteBgpConfig() { this->bgpConfig_ = nullptr;};
    inline string getBgpConfig() const { DARABONBA_PTR_GET_DEFAULT(bgpConfig_, "") };
    inline ModifyVpnConnectionAttributeRequest& setBgpConfig(string bgpConfig) { DARABONBA_PTR_SET_VALUE(bgpConfig_, bgpConfig) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyVpnConnectionAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // effectImmediately Field Functions 
    bool hasEffectImmediately() const { return this->effectImmediately_ != nullptr;};
    void deleteEffectImmediately() { this->effectImmediately_ = nullptr;};
    inline bool getEffectImmediately() const { DARABONBA_PTR_GET_DEFAULT(effectImmediately_, false) };
    inline ModifyVpnConnectionAttributeRequest& setEffectImmediately(bool effectImmediately) { DARABONBA_PTR_SET_VALUE(effectImmediately_, effectImmediately) };


    // enableDpd Field Functions 
    bool hasEnableDpd() const { return this->enableDpd_ != nullptr;};
    void deleteEnableDpd() { this->enableDpd_ = nullptr;};
    inline bool getEnableDpd() const { DARABONBA_PTR_GET_DEFAULT(enableDpd_, false) };
    inline ModifyVpnConnectionAttributeRequest& setEnableDpd(bool enableDpd) { DARABONBA_PTR_SET_VALUE(enableDpd_, enableDpd) };


    // enableNatTraversal Field Functions 
    bool hasEnableNatTraversal() const { return this->enableNatTraversal_ != nullptr;};
    void deleteEnableNatTraversal() { this->enableNatTraversal_ = nullptr;};
    inline bool getEnableNatTraversal() const { DARABONBA_PTR_GET_DEFAULT(enableNatTraversal_, false) };
    inline ModifyVpnConnectionAttributeRequest& setEnableNatTraversal(bool enableNatTraversal) { DARABONBA_PTR_SET_VALUE(enableNatTraversal_, enableNatTraversal) };


    // enableTunnelsBgp Field Functions 
    bool hasEnableTunnelsBgp() const { return this->enableTunnelsBgp_ != nullptr;};
    void deleteEnableTunnelsBgp() { this->enableTunnelsBgp_ = nullptr;};
    inline bool getEnableTunnelsBgp() const { DARABONBA_PTR_GET_DEFAULT(enableTunnelsBgp_, false) };
    inline ModifyVpnConnectionAttributeRequest& setEnableTunnelsBgp(bool enableTunnelsBgp) { DARABONBA_PTR_SET_VALUE(enableTunnelsBgp_, enableTunnelsBgp) };


    // healthCheckConfig Field Functions 
    bool hasHealthCheckConfig() const { return this->healthCheckConfig_ != nullptr;};
    void deleteHealthCheckConfig() { this->healthCheckConfig_ = nullptr;};
    inline string getHealthCheckConfig() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConfig_, "") };
    inline ModifyVpnConnectionAttributeRequest& setHealthCheckConfig(string healthCheckConfig) { DARABONBA_PTR_SET_VALUE(healthCheckConfig_, healthCheckConfig) };


    // ikeConfig Field Functions 
    bool hasIkeConfig() const { return this->ikeConfig_ != nullptr;};
    void deleteIkeConfig() { this->ikeConfig_ = nullptr;};
    inline string getIkeConfig() const { DARABONBA_PTR_GET_DEFAULT(ikeConfig_, "") };
    inline ModifyVpnConnectionAttributeRequest& setIkeConfig(string ikeConfig) { DARABONBA_PTR_SET_VALUE(ikeConfig_, ikeConfig) };


    // ipsecConfig Field Functions 
    bool hasIpsecConfig() const { return this->ipsecConfig_ != nullptr;};
    void deleteIpsecConfig() { this->ipsecConfig_ = nullptr;};
    inline string getIpsecConfig() const { DARABONBA_PTR_GET_DEFAULT(ipsecConfig_, "") };
    inline ModifyVpnConnectionAttributeRequest& setIpsecConfig(string ipsecConfig) { DARABONBA_PTR_SET_VALUE(ipsecConfig_, ipsecConfig) };


    // localSubnet Field Functions 
    bool hasLocalSubnet() const { return this->localSubnet_ != nullptr;};
    void deleteLocalSubnet() { this->localSubnet_ = nullptr;};
    inline string getLocalSubnet() const { DARABONBA_PTR_GET_DEFAULT(localSubnet_, "") };
    inline ModifyVpnConnectionAttributeRequest& setLocalSubnet(string localSubnet) { DARABONBA_PTR_SET_VALUE(localSubnet_, localSubnet) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyVpnConnectionAttributeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyVpnConnectionAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyVpnConnectionAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyVpnConnectionAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remoteCaCertificate Field Functions 
    bool hasRemoteCaCertificate() const { return this->remoteCaCertificate_ != nullptr;};
    void deleteRemoteCaCertificate() { this->remoteCaCertificate_ = nullptr;};
    inline string getRemoteCaCertificate() const { DARABONBA_PTR_GET_DEFAULT(remoteCaCertificate_, "") };
    inline ModifyVpnConnectionAttributeRequest& setRemoteCaCertificate(string remoteCaCertificate) { DARABONBA_PTR_SET_VALUE(remoteCaCertificate_, remoteCaCertificate) };


    // remoteSubnet Field Functions 
    bool hasRemoteSubnet() const { return this->remoteSubnet_ != nullptr;};
    void deleteRemoteSubnet() { this->remoteSubnet_ = nullptr;};
    inline string getRemoteSubnet() const { DARABONBA_PTR_GET_DEFAULT(remoteSubnet_, "") };
    inline ModifyVpnConnectionAttributeRequest& setRemoteSubnet(string remoteSubnet) { DARABONBA_PTR_SET_VALUE(remoteSubnet_, remoteSubnet) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyVpnConnectionAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyVpnConnectionAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tunnelOptionsSpecification Field Functions 
    bool hasTunnelOptionsSpecification() const { return this->tunnelOptionsSpecification_ != nullptr;};
    void deleteTunnelOptionsSpecification() { this->tunnelOptionsSpecification_ = nullptr;};
    inline const vector<ModifyVpnConnectionAttributeRequest::TunnelOptionsSpecification> & getTunnelOptionsSpecification() const { DARABONBA_PTR_GET_CONST(tunnelOptionsSpecification_, vector<ModifyVpnConnectionAttributeRequest::TunnelOptionsSpecification>) };
    inline vector<ModifyVpnConnectionAttributeRequest::TunnelOptionsSpecification> getTunnelOptionsSpecification() { DARABONBA_PTR_GET(tunnelOptionsSpecification_, vector<ModifyVpnConnectionAttributeRequest::TunnelOptionsSpecification>) };
    inline ModifyVpnConnectionAttributeRequest& setTunnelOptionsSpecification(const vector<ModifyVpnConnectionAttributeRequest::TunnelOptionsSpecification> & tunnelOptionsSpecification) { DARABONBA_PTR_SET_VALUE(tunnelOptionsSpecification_, tunnelOptionsSpecification) };
    inline ModifyVpnConnectionAttributeRequest& setTunnelOptionsSpecification(vector<ModifyVpnConnectionAttributeRequest::TunnelOptionsSpecification> && tunnelOptionsSpecification) { DARABONBA_PTR_SET_RVALUE(tunnelOptionsSpecification_, tunnelOptionsSpecification) };


    // vpnConnectionId Field Functions 
    bool hasVpnConnectionId() const { return this->vpnConnectionId_ != nullptr;};
    void deleteVpnConnectionId() { this->vpnConnectionId_ = nullptr;};
    inline string getVpnConnectionId() const { DARABONBA_PTR_GET_DEFAULT(vpnConnectionId_, "") };
    inline ModifyVpnConnectionAttributeRequest& setVpnConnectionId(string vpnConnectionId) { DARABONBA_PTR_SET_VALUE(vpnConnectionId_, vpnConnectionId) };


  protected:
    // Specifies whether to automatically publish route entry. Valid values:
    // 
    // - **true**: Automatically publishes route entries.
    //    
    // - **false**: Does not automatically publish route entries.
    shared_ptr<bool> autoConfigRoute_ {};
    // This parameter is supported when you modify a single-tunnel IPsec-VPN connection.
    // 
    // The BGP configuration:
    // 
    // - **BgpConfig.EnableBgp**: Specifies whether to enable the BGP feature. Valid values: **true** and **false**.
    // 
    // - **BgpConfig.LocalAsn**: The autonomous system number (ASN) on the Alibaba Cloud side. Valid values: **1** to **4294967295**.
    // 
    //    The ASN can be entered in the two-segment format: the first 16 bits.the last 16 bits. Each segment is entered in decimal format.
    // 
    //     For example, if you enter 123.456, the ASN is 123 × 65536 + 456 = 8061384.
    // 
    // - **BgpConfig.TunnelCidr**: The CIDR block of the IPsec tunnel. The CIDR block must be a mask length of 30 within 169.254.0.0/16 and cannot be 169.254.0.0/30, 169.254.1.0/30, 169.254.2.0/30, 169.254.3.0/30, 169.254.4.0/30, 169.254.5.0/30, 169.254.6.0/30, or 169.254.169.252/30.
    // 
    //     > The IPsec tunnel CIDR block of each IPsec-VPN connection under a VPN gateway instance must be unique.
    // 
    // - **LocalBgpIp**: The BGP address on the Alibaba Cloud side. This address is an IP address within the IPsec tunnel CIDR block.
    // 
    // > - Configure this parameter when BGP dynamic routing is enabled on your VPN gateway.
    // >- Before you add BGP configurations, understand the working mechanism and limits of BGP dynamic routing. For more information, see [Configure BGP dynamic routing](https://help.aliyun.com/document_detail/2638220.html).
    // >- Use a private ASN to establish a BGP connection with Alibaba Cloud. Refer to the relevant documentation for the range of private ASNs.
    shared_ptr<string> bgpConfig_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** as the **ClientToken**. The **RequestId** may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether the IPsec-VPN connection configuration takes effect immediately. Valid values:
    //            
    // - **true**: The system immediately initiates IPsec protocol negotiation after the configuration is complete.
    //    
    // - **false**: The system initiates IPsec protocol negotiation only when inbound traffic is detected.
    shared_ptr<bool> effectImmediately_ {};
    // This parameter is supported when you modify a single-tunnel IPsec-VPN connection.
    // 
    // Specifies whether to enable the DPD (Dead Peer Detection) feature. Valid values:
    // 
    // - **true**: Enables the DPD feature. The IPsec initiator sends DPD packets to check whether the peer device is alive. If no correct response is received within the specified period of time, the peer is considered disconnected. The ISAKMP SA and the corresponding IPsec SA are deleted, and the security tunnel is also deleted.
    // 
    // - **false**: Disables the DPD feature. The IPsec initiator does not send DPD packets.
    shared_ptr<bool> enableDpd_ {};
    // This parameter is supported when you modify a single-tunnel IPsec-VPN connection.
    // 
    // Specifies whether to enable the NAT traversal feature. Valid values:
    // 
    // - **true**: Enables NAT traversal. After NAT traversal is enabled, the IKE negotiation process skips UDP port number verification and can discover NAT gateway devices in the VPN tunnel.
    // 
    // - **false**: Disables NAT traversal.
    shared_ptr<bool> enableNatTraversal_ {};
    // This parameter is supported when you modify a dual-tunnel IPsec-VPN connection.
    // 
    // Specifies whether to enable BGP for the tunnels. Valid values: **true** and **false**.
    shared_ptr<bool> enableTunnelsBgp_ {};
    // This parameter is supported when you modify a single-tunnel IPsec-VPN connection.
    // 
    // The health check configuration:
    // 
    // - **HealthCheckConfig.enable**: Specifies whether to enable health checks. Valid values: **true** and **false**.
    // 
    // - **HealthCheckConfig.dip**: The destination IP address of the health check.
    // 
    // - **HealthCheckConfig.sip**: The source IP address of the health check.
    // 
    // - **HealthCheckConfig.interval**: The retry interval of the health check. Unit: seconds.
    // 
    // - **HealthCheckConfig.retry**: The number of retries for the health check.
    shared_ptr<string> healthCheckConfig_ {};
    // This parameter is supported when you modify a single-tunnel IPsec-VPN connection.
    // 
    // The Phase 1 negotiation configuration: 
    //            
    // - **IkeConfig.Psk**: The pre-shared key used for identity authentication between the VPN gateway and the on-premises data center.
    // 
    //     - The key must be 1 to 100 characters in length and can contain digits, letters, and the following characters. It cannot contain spaces. ```~!`@#$%^&*()_-+={}[]|;:\\",.<>/?```
    //     - If you do not specify a pre-shared key, the system generates a random 16-character string as the pre-shared key. You can call the [DescribeVpnConnection](https://help.aliyun.com/document_detail/2526951.html) operation to query the pre-shared key that is automatically generated by the system.
    //     > The pre-shared key on the IPsec-VPN connection side must be the same as the authentication key on the on-premises data center side. Otherwise, the connection between the on-premises data center and the VPN gateway cannot be established. 
    // 
    // - **IkeConfig.IkeVersion**: The version of the IKE protocol. Valid values: **ikev1** and **ikev2**. 
    // 
    //     Compared with IKEv1, IKEv2 simplifies the SA negotiation process and provides better support for multi-CIDR-block scenarios.
    // 
    //     <props="china"><ph>If the VPN gateway instance type is Chinese SM-based, only **ikev1** is supported for the IKE version.</ph>
    // 
    // - **IkeConfig.IkeMode**: The negotiation mode of the IKE version. Valid values: **main** and **aggressive**.   
    //     - **main**: Main mode. This mode offers high security during negotiation.
    //     - **aggressive**: Aggressive mode. This mode supports fast negotiation and a higher success rate.
    // 
    //     <props="china"><ph>If the VPN gateway instance type is Chinese SM-based, only **main** is supported for the negotiation mode.</ph>
    // 
    // - **IkeConfig.IkeEncAlg**: The encryption algorithm used in Phase 1 negotiation.
    // 
    //     <props="intl"><ph>Valid values: **aes**, **aes192**, **aes256**, **des**, and **3des**.</ph>
    // 
    //     <props="china"><ph>If the VPN gateway instance type is standard, valid values are **aes**, **aes192**, **aes256**, **des**, and **3des**.</ph>
    // 
    //     <props="china"><ph>If the VPN gateway instance type is Chinese SM-based, the only valid value is **sm4**.</ph>
    // 
    // - **IkeConfig.IkeAuthAlg**: The authentication algorithm used in Phase 1 negotiation.
    // 
    //     <props="intl"><ph>Valid values: **md5**, **sha1**, **sha256**, **sha384**, and **sha512**.</ph>
    // 
    //     <props="china"><ph>If the VPN gateway instance type is standard, valid values are **md5**, **sha1**, **sha256**, **sha384**, and **sha512**.</ph>
    // 
    //     <props="china"><ph>If the VPN gateway instance type is Chinese SM-based, the only valid value is **sm3**.</ph>
    // 
    // - **IkeConfig.IkePfs**: The Diffie-Hellman key exchange algorithm used in Phase 1 negotiation. Valid values: **group1**, **group2**, **group5**, and **group14**.
    // 
    // - **IkeConfig.IkeLifetime**: The SA lifetime determined by Phase 1 negotiation. Unit: seconds. Valid values: **0** to **86400**.
    // 
    // - **IkeConfig.LocalId**: The identifier of the VPN gateway. The identifier can be up to 100 characters in length and cannot contain spaces. The default value is the IP address of the VPN gateway. 
    // 
    // - **IkeConfig.RemoteId**: The identifier of the customer gateway. The identifier can be up to 100 characters in length and cannot contain spaces. The default value is the IP address of the customer gateway.
    shared_ptr<string> ikeConfig_ {};
    // This parameter is supported when you modify a single-tunnel IPsec-VPN connection.
    // 
    // The Phase 2 negotiation configuration: 
    // 
    // - **IpsecConfig.IpsecEncAlg**: The encryption algorithm used in Phase 2 negotiation.
    // 
    //     <props="intl"><ph>Valid values: **aes**, **aes192**, **aes256**, **des**, and **3des**.</ph>
    // 
    //     <props="china"><ph>If the VPN gateway instance type is standard, valid values are **aes**, **aes192**, **aes256**, **des**, and **3des**.</ph>
    // 
    //     <props="china"><ph>If the VPN gateway instance type is Chinese SM-based, the only valid value is **sm4**.</ph>
    // 
    // - **IpsecConfig. IpsecAuthAlg**: The authentication algorithm used in Phase 2 negotiation.
    // 
    //     <props="intl"><ph>Valid values: **md5**, **sha1**, **sha256**, **sha384**, and **sha512**.</ph>
    // 
    //     <props="china"><ph>If the VPN gateway instance type is standard, valid values are **md5**, **sha1**, **sha256**, **sha384**, and **sha512**.</ph>
    // 
    //     <props="china"><ph>If the VPN gateway instance type is Chinese SM-based, the only valid value is **sm3**.</ph>
    // 
    // - **IpsecConfig. IpsecPfs**: The Diffie-Hellman key exchange algorithm used in Phase 2 negotiation for forwarding packets of all protocols. Valid values: **disabled**, **group1**, **group2**, **group5**, and **group14**.   
    // 
    // - **IpsecConfig. IpsecLifetime**: The SA lifetime determined by Phase 2 negotiation. Unit: seconds. Valid values: **0** to **86400**.
    shared_ptr<string> ipsecConfig_ {};
    // The CIDR block on the VPC side that needs to communicate with the on-premises data center. This CIDR block is used in Phase 2 negotiation.
    // 
    // Separate multiple CIDR blocks with commas (,). Example: 192.168.1.0/24,192.168.2.0/24.
    // 
    // The following routing modes are supported for IPsec-VPN connections:
    // 
    // - If you set both **LocalSubnet** and **RemoteSubnet** to 0.0.0.0/0, the destination routing mode is used.
    // - If you set both **LocalSubnet** and **RemoteSubnet** to specific CIDR blocks, the protected data flow mode is used.
    shared_ptr<string> localSubnet_ {};
    // The name of the IPsec-VPN connection.  
    // 
    // The name must be 1 to 100 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> name_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the IPsec-VPN connection. 
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // This parameter is supported when you modify a single-tunnel IPsec-VPN connection.
    // 
    // If the current VPN gateway instance is a Chinese SM-based VPN gateway, you can modify the CA certificate of the peer.
    // 
    // If the current VPN gateway instance is a standard VPN gateway, this parameter is not supported.
    shared_ptr<string> remoteCaCertificate_ {};
    // The CIDR block on the on-premises data center side. This CIDR block is used in Phase 2 negotiation.
    // 
    // Separate multiple CIDR blocks with commas (,). Example: 192.168.3.0/24,192.168.4.0/24.
    // 
    // The following routing modes are supported for IPsec-VPN connections:
    // 
    // - If you set both **LocalSubnet** and **RemoteSubnet** to 0.0.0.0/0, the destination routing mode is used.
    // - If you set both **LocalSubnet** and **RemoteSubnet** to specific CIDR blocks, the protected data flow mode is used.
    shared_ptr<string> remoteSubnet_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The tunnel configurations to modify.
    // 
    // The parameters under the **TunnelOptionsSpecification** array are supported only when you modify a dual-tunnel IPsec-VPN connection. You can modify the configurations of both the active and standby tunnels of the IPsec-VPN connection at the same time.
    shared_ptr<vector<ModifyVpnConnectionAttributeRequest::TunnelOptionsSpecification>> tunnelOptionsSpecification_ {};
    // The ID of the IPsec-VPN connection.
    // 
    // This parameter is required.
    shared_ptr<string> vpnConnectionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
