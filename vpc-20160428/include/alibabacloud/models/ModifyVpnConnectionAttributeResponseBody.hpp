// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYVPNCONNECTIONATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYVPNCONNECTIONATTRIBUTERESPONSEBODY_HPP_
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
  class ModifyVpnConnectionAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyVpnConnectionAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EffectImmediately, effectImmediately_);
      DARABONBA_PTR_TO_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_TO_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_TO_JSON(EnableTunnelsBgp, enableTunnelsBgp_);
      DARABONBA_PTR_TO_JSON(IkeConfig, ikeConfig_);
      DARABONBA_PTR_TO_JSON(IpsecConfig, ipsecConfig_);
      DARABONBA_PTR_TO_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RemoteSubnet, remoteSubnet_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(TunnelOptionsSpecification, tunnelOptionsSpecification_);
      DARABONBA_PTR_TO_JSON(VcoHealthCheck, vcoHealthCheck_);
      DARABONBA_PTR_TO_JSON(VpnBgpConfig, vpnBgpConfig_);
      DARABONBA_PTR_TO_JSON(VpnConnectionId, vpnConnectionId_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyVpnConnectionAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EffectImmediately, effectImmediately_);
      DARABONBA_PTR_FROM_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_FROM_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_FROM_JSON(EnableTunnelsBgp, enableTunnelsBgp_);
      DARABONBA_PTR_FROM_JSON(IkeConfig, ikeConfig_);
      DARABONBA_PTR_FROM_JSON(IpsecConfig, ipsecConfig_);
      DARABONBA_PTR_FROM_JSON(LocalSubnet, localSubnet_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RemoteSubnet, remoteSubnet_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(TunnelOptionsSpecification, tunnelOptionsSpecification_);
      DARABONBA_PTR_FROM_JSON(VcoHealthCheck, vcoHealthCheck_);
      DARABONBA_PTR_FROM_JSON(VpnBgpConfig, vpnBgpConfig_);
      DARABONBA_PTR_FROM_JSON(VpnConnectionId, vpnConnectionId_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
    };
    ModifyVpnConnectionAttributeResponseBody() = default ;
    ModifyVpnConnectionAttributeResponseBody(const ModifyVpnConnectionAttributeResponseBody &) = default ;
    ModifyVpnConnectionAttributeResponseBody(ModifyVpnConnectionAttributeResponseBody &&) = default ;
    ModifyVpnConnectionAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyVpnConnectionAttributeResponseBody() = default ;
    ModifyVpnConnectionAttributeResponseBody& operator=(const ModifyVpnConnectionAttributeResponseBody &) = default ;
    ModifyVpnConnectionAttributeResponseBody& operator=(ModifyVpnConnectionAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VpnBgpConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VpnBgpConfig& obj) { 
        DARABONBA_PTR_TO_JSON(EnableBgp, enableBgp_);
        DARABONBA_PTR_TO_JSON(LocalAsn, localAsn_);
        DARABONBA_PTR_TO_JSON(LocalBgpIp, localBgpIp_);
        DARABONBA_PTR_TO_JSON(PeerAsn, peerAsn_);
        DARABONBA_PTR_TO_JSON(PeerBgpIp, peerBgpIp_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TunnelCidr, tunnelCidr_);
      };
      friend void from_json(const Darabonba::Json& j, VpnBgpConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableBgp, enableBgp_);
        DARABONBA_PTR_FROM_JSON(LocalAsn, localAsn_);
        DARABONBA_PTR_FROM_JSON(LocalBgpIp, localBgpIp_);
        DARABONBA_PTR_FROM_JSON(PeerAsn, peerAsn_);
        DARABONBA_PTR_FROM_JSON(PeerBgpIp, peerBgpIp_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TunnelCidr, tunnelCidr_);
      };
      VpnBgpConfig() = default ;
      VpnBgpConfig(const VpnBgpConfig &) = default ;
      VpnBgpConfig(VpnBgpConfig &&) = default ;
      VpnBgpConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VpnBgpConfig() = default ;
      VpnBgpConfig& operator=(const VpnBgpConfig &) = default ;
      VpnBgpConfig& operator=(VpnBgpConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableBgp_ == nullptr
        && this->localAsn_ == nullptr && this->localBgpIp_ == nullptr && this->peerAsn_ == nullptr && this->peerBgpIp_ == nullptr && this->status_ == nullptr
        && this->tunnelCidr_ == nullptr; };
      // enableBgp Field Functions 
      bool hasEnableBgp() const { return this->enableBgp_ != nullptr;};
      void deleteEnableBgp() { this->enableBgp_ = nullptr;};
      inline string getEnableBgp() const { DARABONBA_PTR_GET_DEFAULT(enableBgp_, "") };
      inline VpnBgpConfig& setEnableBgp(string enableBgp) { DARABONBA_PTR_SET_VALUE(enableBgp_, enableBgp) };


      // localAsn Field Functions 
      bool hasLocalAsn() const { return this->localAsn_ != nullptr;};
      void deleteLocalAsn() { this->localAsn_ = nullptr;};
      inline int32_t getLocalAsn() const { DARABONBA_PTR_GET_DEFAULT(localAsn_, 0) };
      inline VpnBgpConfig& setLocalAsn(int32_t localAsn) { DARABONBA_PTR_SET_VALUE(localAsn_, localAsn) };


      // localBgpIp Field Functions 
      bool hasLocalBgpIp() const { return this->localBgpIp_ != nullptr;};
      void deleteLocalBgpIp() { this->localBgpIp_ = nullptr;};
      inline string getLocalBgpIp() const { DARABONBA_PTR_GET_DEFAULT(localBgpIp_, "") };
      inline VpnBgpConfig& setLocalBgpIp(string localBgpIp) { DARABONBA_PTR_SET_VALUE(localBgpIp_, localBgpIp) };


      // peerAsn Field Functions 
      bool hasPeerAsn() const { return this->peerAsn_ != nullptr;};
      void deletePeerAsn() { this->peerAsn_ = nullptr;};
      inline int32_t getPeerAsn() const { DARABONBA_PTR_GET_DEFAULT(peerAsn_, 0) };
      inline VpnBgpConfig& setPeerAsn(int32_t peerAsn) { DARABONBA_PTR_SET_VALUE(peerAsn_, peerAsn) };


      // peerBgpIp Field Functions 
      bool hasPeerBgpIp() const { return this->peerBgpIp_ != nullptr;};
      void deletePeerBgpIp() { this->peerBgpIp_ = nullptr;};
      inline string getPeerBgpIp() const { DARABONBA_PTR_GET_DEFAULT(peerBgpIp_, "") };
      inline VpnBgpConfig& setPeerBgpIp(string peerBgpIp) { DARABONBA_PTR_SET_VALUE(peerBgpIp_, peerBgpIp) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline VpnBgpConfig& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tunnelCidr Field Functions 
      bool hasTunnelCidr() const { return this->tunnelCidr_ != nullptr;};
      void deleteTunnelCidr() { this->tunnelCidr_ = nullptr;};
      inline string getTunnelCidr() const { DARABONBA_PTR_GET_DEFAULT(tunnelCidr_, "") };
      inline VpnBgpConfig& setTunnelCidr(string tunnelCidr) { DARABONBA_PTR_SET_VALUE(tunnelCidr_, tunnelCidr) };


    protected:
      // Indicates whether BGP is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<string> enableBgp_ {};
      // The ASN on the Alibaba Cloud side.
      shared_ptr<int32_t> localAsn_ {};
      // The BGP IP address on the Alibaba Cloud side.
      shared_ptr<string> localBgpIp_ {};
      // The ASN on the data center side.
      shared_ptr<int32_t> peerAsn_ {};
      // The BGP IP address of the data center.
      shared_ptr<string> peerBgpIp_ {};
      // The negotiation state of BGP. Valid values:
      // 
      // *   **success**: normal
      // *   **false**: abnormal
      shared_ptr<string> status_ {};
      // The BGP CIDR block of the IPsec-VPN connection.
      shared_ptr<string> tunnelCidr_ {};
    };

    class VcoHealthCheck : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VcoHealthCheck& obj) { 
        DARABONBA_PTR_TO_JSON(Dip, dip_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(Interval, interval_);
        DARABONBA_PTR_TO_JSON(Retry, retry_);
        DARABONBA_PTR_TO_JSON(Sip, sip_);
      };
      friend void from_json(const Darabonba::Json& j, VcoHealthCheck& obj) { 
        DARABONBA_PTR_FROM_JSON(Dip, dip_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(Interval, interval_);
        DARABONBA_PTR_FROM_JSON(Retry, retry_);
        DARABONBA_PTR_FROM_JSON(Sip, sip_);
      };
      VcoHealthCheck() = default ;
      VcoHealthCheck(const VcoHealthCheck &) = default ;
      VcoHealthCheck(VcoHealthCheck &&) = default ;
      VcoHealthCheck(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VcoHealthCheck() = default ;
      VcoHealthCheck& operator=(const VcoHealthCheck &) = default ;
      VcoHealthCheck& operator=(VcoHealthCheck &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dip_ == nullptr
        && this->enable_ == nullptr && this->interval_ == nullptr && this->retry_ == nullptr && this->sip_ == nullptr; };
      // dip Field Functions 
      bool hasDip() const { return this->dip_ != nullptr;};
      void deleteDip() { this->dip_ = nullptr;};
      inline string getDip() const { DARABONBA_PTR_GET_DEFAULT(dip_, "") };
      inline VcoHealthCheck& setDip(string dip) { DARABONBA_PTR_SET_VALUE(dip_, dip) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
      inline VcoHealthCheck& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // interval Field Functions 
      bool hasInterval() const { return this->interval_ != nullptr;};
      void deleteInterval() { this->interval_ = nullptr;};
      inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
      inline VcoHealthCheck& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


      // retry Field Functions 
      bool hasRetry() const { return this->retry_ != nullptr;};
      void deleteRetry() { this->retry_ = nullptr;};
      inline int32_t getRetry() const { DARABONBA_PTR_GET_DEFAULT(retry_, 0) };
      inline VcoHealthCheck& setRetry(int32_t retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };


      // sip Field Functions 
      bool hasSip() const { return this->sip_ != nullptr;};
      void deleteSip() { this->sip_ = nullptr;};
      inline string getSip() const { DARABONBA_PTR_GET_DEFAULT(sip_, "") };
      inline VcoHealthCheck& setSip(string sip) { DARABONBA_PTR_SET_VALUE(sip_, sip) };


    protected:
      // The destination IP address.
      shared_ptr<string> dip_ {};
      // Indicates whether the health check feature is enabled for the IPsec-VPN connection.
      // 
      // *   **true**
      // *   **false**
      shared_ptr<string> enable_ {};
      // The interval between two consecutive health checks. Unit: seconds.
      shared_ptr<int32_t> interval_ {};
      // The maximum number of health check retries.
      shared_ptr<int32_t> retry_ {};
      // The source IP address that is used for health checks.
      shared_ptr<string> sip_ {};
    };

    class TunnelOptionsSpecification : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TunnelOptionsSpecification& obj) { 
        DARABONBA_PTR_TO_JSON(TunnelOptions, tunnelOptions_);
      };
      friend void from_json(const Darabonba::Json& j, TunnelOptionsSpecification& obj) { 
        DARABONBA_PTR_FROM_JSON(TunnelOptions, tunnelOptions_);
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
      class TunnelOptions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TunnelOptions& obj) { 
          DARABONBA_PTR_TO_JSON(CustomerGatewayId, customerGatewayId_);
          DARABONBA_PTR_TO_JSON(EnableDpd, enableDpd_);
          DARABONBA_PTR_TO_JSON(EnableNatTraversal, enableNatTraversal_);
          DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
          DARABONBA_PTR_TO_JSON(RemoteCaCertificate, remoteCaCertificate_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(TunnelBgpConfig, tunnelBgpConfig_);
          DARABONBA_PTR_TO_JSON(TunnelId, tunnelId_);
          DARABONBA_PTR_TO_JSON(TunnelIkeConfig, tunnelIkeConfig_);
          DARABONBA_PTR_TO_JSON(TunnelIpsecConfig, tunnelIpsecConfig_);
          DARABONBA_PTR_TO_JSON(ZoneNo, zoneNo_);
        };
        friend void from_json(const Darabonba::Json& j, TunnelOptions& obj) { 
          DARABONBA_PTR_FROM_JSON(CustomerGatewayId, customerGatewayId_);
          DARABONBA_PTR_FROM_JSON(EnableDpd, enableDpd_);
          DARABONBA_PTR_FROM_JSON(EnableNatTraversal, enableNatTraversal_);
          DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
          DARABONBA_PTR_FROM_JSON(RemoteCaCertificate, remoteCaCertificate_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(TunnelBgpConfig, tunnelBgpConfig_);
          DARABONBA_PTR_FROM_JSON(TunnelId, tunnelId_);
          DARABONBA_PTR_FROM_JSON(TunnelIkeConfig, tunnelIkeConfig_);
          DARABONBA_PTR_FROM_JSON(TunnelIpsecConfig, tunnelIpsecConfig_);
          DARABONBA_PTR_FROM_JSON(ZoneNo, zoneNo_);
        };
        TunnelOptions() = default ;
        TunnelOptions(const TunnelOptions &) = default ;
        TunnelOptions(TunnelOptions &&) = default ;
        TunnelOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TunnelOptions() = default ;
        TunnelOptions& operator=(const TunnelOptions &) = default ;
        TunnelOptions& operator=(TunnelOptions &&) = default ;
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
          inline int64_t getIpsecLifetime() const { DARABONBA_PTR_GET_DEFAULT(ipsecLifetime_, 0L) };
          inline TunnelIpsecConfig& setIpsecLifetime(int64_t ipsecLifetime) { DARABONBA_PTR_SET_VALUE(ipsecLifetime_, ipsecLifetime) };


          // ipsecPfs Field Functions 
          bool hasIpsecPfs() const { return this->ipsecPfs_ != nullptr;};
          void deleteIpsecPfs() { this->ipsecPfs_ = nullptr;};
          inline string getIpsecPfs() const { DARABONBA_PTR_GET_DEFAULT(ipsecPfs_, "") };
          inline TunnelIpsecConfig& setIpsecPfs(string ipsecPfs) { DARABONBA_PTR_SET_VALUE(ipsecPfs_, ipsecPfs) };


        protected:
          // The authentication algorithm in the IPsec phase.
          shared_ptr<string> ipsecAuthAlg_ {};
          // The encryption algorithm in the IPsec phase.
          shared_ptr<string> ipsecEncAlg_ {};
          // The lifetime in the IPsec phase. Unit: seconds.
          shared_ptr<int64_t> ipsecLifetime_ {};
          // The DH group in the IPsec phase.
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
          // The authentication algorithm in the IKE phase.
          shared_ptr<string> ikeAuthAlg_ {};
          // The encryption algorithm in the IKE phase.
          shared_ptr<string> ikeEncAlg_ {};
          // The lifetime in the IKE phase. Unit: seconds.
          shared_ptr<int64_t> ikeLifetime_ {};
          // The IKE negotiation mode.
          // 
          // *   **main:** This mode offers higher security during negotiations.
          // *   **aggressive**: This mode is faster and has a higher success rate.
          shared_ptr<string> ikeMode_ {};
          // The DH group in the IKE phase.
          shared_ptr<string> ikePfs_ {};
          // The version of the IKE protocol.
          shared_ptr<string> ikeVersion_ {};
          // The identifier of the tunnel on the Alibaba Cloud side.
          shared_ptr<string> localId_ {};
          // The pre-shared key.
          shared_ptr<string> psk_ {};
          // The identifier of the tunnel peer.
          shared_ptr<string> remoteId_ {};
        };

        class TunnelBgpConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TunnelBgpConfig& obj) { 
            DARABONBA_PTR_TO_JSON(LocalAsn, localAsn_);
            DARABONBA_PTR_TO_JSON(LocalBgpIp, localBgpIp_);
            DARABONBA_PTR_TO_JSON(PeerAsn, peerAsn_);
            DARABONBA_PTR_TO_JSON(PeerBgpIp, peerBgpIp_);
            DARABONBA_PTR_TO_JSON(TunnelCidr, tunnelCidr_);
          };
          friend void from_json(const Darabonba::Json& j, TunnelBgpConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(LocalAsn, localAsn_);
            DARABONBA_PTR_FROM_JSON(LocalBgpIp, localBgpIp_);
            DARABONBA_PTR_FROM_JSON(PeerAsn, peerAsn_);
            DARABONBA_PTR_FROM_JSON(PeerBgpIp, peerBgpIp_);
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
        && this->localBgpIp_ == nullptr && this->peerAsn_ == nullptr && this->peerBgpIp_ == nullptr && this->tunnelCidr_ == nullptr; };
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


          // peerAsn Field Functions 
          bool hasPeerAsn() const { return this->peerAsn_ != nullptr;};
          void deletePeerAsn() { this->peerAsn_ = nullptr;};
          inline int64_t getPeerAsn() const { DARABONBA_PTR_GET_DEFAULT(peerAsn_, 0L) };
          inline TunnelBgpConfig& setPeerAsn(int64_t peerAsn) { DARABONBA_PTR_SET_VALUE(peerAsn_, peerAsn) };


          // peerBgpIp Field Functions 
          bool hasPeerBgpIp() const { return this->peerBgpIp_ != nullptr;};
          void deletePeerBgpIp() { this->peerBgpIp_ = nullptr;};
          inline string getPeerBgpIp() const { DARABONBA_PTR_GET_DEFAULT(peerBgpIp_, "") };
          inline TunnelBgpConfig& setPeerBgpIp(string peerBgpIp) { DARABONBA_PTR_SET_VALUE(peerBgpIp_, peerBgpIp) };


          // tunnelCidr Field Functions 
          bool hasTunnelCidr() const { return this->tunnelCidr_ != nullptr;};
          void deleteTunnelCidr() { this->tunnelCidr_ = nullptr;};
          inline string getTunnelCidr() const { DARABONBA_PTR_GET_DEFAULT(tunnelCidr_, "") };
          inline TunnelBgpConfig& setTunnelCidr(string tunnelCidr) { DARABONBA_PTR_SET_VALUE(tunnelCidr_, tunnelCidr) };


        protected:
          // The ASN of the tunnel on the Alibaba Cloud side.
          shared_ptr<int64_t> localAsn_ {};
          // The BGP IP address of the tunnel on the Alibaba Cloud side.
          shared_ptr<string> localBgpIp_ {};
          // The ASN of the tunnel peer.
          shared_ptr<int64_t> peerAsn_ {};
          // The BGP IP address of the tunnel peer.
          shared_ptr<string> peerBgpIp_ {};
          // The BGP CIDR block of the tunnel.
          shared_ptr<string> tunnelCidr_ {};
        };

        virtual bool empty() const override { return this->customerGatewayId_ == nullptr
        && this->enableDpd_ == nullptr && this->enableNatTraversal_ == nullptr && this->internetIp_ == nullptr && this->remoteCaCertificate_ == nullptr && this->role_ == nullptr
        && this->state_ == nullptr && this->tunnelBgpConfig_ == nullptr && this->tunnelId_ == nullptr && this->tunnelIkeConfig_ == nullptr && this->tunnelIpsecConfig_ == nullptr
        && this->zoneNo_ == nullptr; };
        // customerGatewayId Field Functions 
        bool hasCustomerGatewayId() const { return this->customerGatewayId_ != nullptr;};
        void deleteCustomerGatewayId() { this->customerGatewayId_ = nullptr;};
        inline string getCustomerGatewayId() const { DARABONBA_PTR_GET_DEFAULT(customerGatewayId_, "") };
        inline TunnelOptions& setCustomerGatewayId(string customerGatewayId) { DARABONBA_PTR_SET_VALUE(customerGatewayId_, customerGatewayId) };


        // enableDpd Field Functions 
        bool hasEnableDpd() const { return this->enableDpd_ != nullptr;};
        void deleteEnableDpd() { this->enableDpd_ = nullptr;};
        inline bool getEnableDpd() const { DARABONBA_PTR_GET_DEFAULT(enableDpd_, false) };
        inline TunnelOptions& setEnableDpd(bool enableDpd) { DARABONBA_PTR_SET_VALUE(enableDpd_, enableDpd) };


        // enableNatTraversal Field Functions 
        bool hasEnableNatTraversal() const { return this->enableNatTraversal_ != nullptr;};
        void deleteEnableNatTraversal() { this->enableNatTraversal_ = nullptr;};
        inline bool getEnableNatTraversal() const { DARABONBA_PTR_GET_DEFAULT(enableNatTraversal_, false) };
        inline TunnelOptions& setEnableNatTraversal(bool enableNatTraversal) { DARABONBA_PTR_SET_VALUE(enableNatTraversal_, enableNatTraversal) };


        // internetIp Field Functions 
        bool hasInternetIp() const { return this->internetIp_ != nullptr;};
        void deleteInternetIp() { this->internetIp_ = nullptr;};
        inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
        inline TunnelOptions& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


        // remoteCaCertificate Field Functions 
        bool hasRemoteCaCertificate() const { return this->remoteCaCertificate_ != nullptr;};
        void deleteRemoteCaCertificate() { this->remoteCaCertificate_ = nullptr;};
        inline string getRemoteCaCertificate() const { DARABONBA_PTR_GET_DEFAULT(remoteCaCertificate_, "") };
        inline TunnelOptions& setRemoteCaCertificate(string remoteCaCertificate) { DARABONBA_PTR_SET_VALUE(remoteCaCertificate_, remoteCaCertificate) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline TunnelOptions& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline TunnelOptions& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // tunnelBgpConfig Field Functions 
        bool hasTunnelBgpConfig() const { return this->tunnelBgpConfig_ != nullptr;};
        void deleteTunnelBgpConfig() { this->tunnelBgpConfig_ = nullptr;};
        inline const TunnelOptions::TunnelBgpConfig & getTunnelBgpConfig() const { DARABONBA_PTR_GET_CONST(tunnelBgpConfig_, TunnelOptions::TunnelBgpConfig) };
        inline TunnelOptions::TunnelBgpConfig getTunnelBgpConfig() { DARABONBA_PTR_GET(tunnelBgpConfig_, TunnelOptions::TunnelBgpConfig) };
        inline TunnelOptions& setTunnelBgpConfig(const TunnelOptions::TunnelBgpConfig & tunnelBgpConfig) { DARABONBA_PTR_SET_VALUE(tunnelBgpConfig_, tunnelBgpConfig) };
        inline TunnelOptions& setTunnelBgpConfig(TunnelOptions::TunnelBgpConfig && tunnelBgpConfig) { DARABONBA_PTR_SET_RVALUE(tunnelBgpConfig_, tunnelBgpConfig) };


        // tunnelId Field Functions 
        bool hasTunnelId() const { return this->tunnelId_ != nullptr;};
        void deleteTunnelId() { this->tunnelId_ = nullptr;};
        inline string getTunnelId() const { DARABONBA_PTR_GET_DEFAULT(tunnelId_, "") };
        inline TunnelOptions& setTunnelId(string tunnelId) { DARABONBA_PTR_SET_VALUE(tunnelId_, tunnelId) };


        // tunnelIkeConfig Field Functions 
        bool hasTunnelIkeConfig() const { return this->tunnelIkeConfig_ != nullptr;};
        void deleteTunnelIkeConfig() { this->tunnelIkeConfig_ = nullptr;};
        inline const TunnelOptions::TunnelIkeConfig & getTunnelIkeConfig() const { DARABONBA_PTR_GET_CONST(tunnelIkeConfig_, TunnelOptions::TunnelIkeConfig) };
        inline TunnelOptions::TunnelIkeConfig getTunnelIkeConfig() { DARABONBA_PTR_GET(tunnelIkeConfig_, TunnelOptions::TunnelIkeConfig) };
        inline TunnelOptions& setTunnelIkeConfig(const TunnelOptions::TunnelIkeConfig & tunnelIkeConfig) { DARABONBA_PTR_SET_VALUE(tunnelIkeConfig_, tunnelIkeConfig) };
        inline TunnelOptions& setTunnelIkeConfig(TunnelOptions::TunnelIkeConfig && tunnelIkeConfig) { DARABONBA_PTR_SET_RVALUE(tunnelIkeConfig_, tunnelIkeConfig) };


        // tunnelIpsecConfig Field Functions 
        bool hasTunnelIpsecConfig() const { return this->tunnelIpsecConfig_ != nullptr;};
        void deleteTunnelIpsecConfig() { this->tunnelIpsecConfig_ = nullptr;};
        inline const TunnelOptions::TunnelIpsecConfig & getTunnelIpsecConfig() const { DARABONBA_PTR_GET_CONST(tunnelIpsecConfig_, TunnelOptions::TunnelIpsecConfig) };
        inline TunnelOptions::TunnelIpsecConfig getTunnelIpsecConfig() { DARABONBA_PTR_GET(tunnelIpsecConfig_, TunnelOptions::TunnelIpsecConfig) };
        inline TunnelOptions& setTunnelIpsecConfig(const TunnelOptions::TunnelIpsecConfig & tunnelIpsecConfig) { DARABONBA_PTR_SET_VALUE(tunnelIpsecConfig_, tunnelIpsecConfig) };
        inline TunnelOptions& setTunnelIpsecConfig(TunnelOptions::TunnelIpsecConfig && tunnelIpsecConfig) { DARABONBA_PTR_SET_RVALUE(tunnelIpsecConfig_, tunnelIpsecConfig) };


        // zoneNo Field Functions 
        bool hasZoneNo() const { return this->zoneNo_ != nullptr;};
        void deleteZoneNo() { this->zoneNo_ = nullptr;};
        inline string getZoneNo() const { DARABONBA_PTR_GET_DEFAULT(zoneNo_, "") };
        inline TunnelOptions& setZoneNo(string zoneNo) { DARABONBA_PTR_SET_VALUE(zoneNo_, zoneNo) };


      protected:
        // The ID of the customer gateway associated with the tunnel.
        shared_ptr<string> customerGatewayId_ {};
        // Indicates whether the DPD feature is enabled for the tunnel. Valid values:
        // 
        // *   **false**
        // *   **true**
        shared_ptr<bool> enableDpd_ {};
        // Indicates whether NAT traversal is enabled for the tunnel. Valid values:
        // 
        // *   **false**
        // *   **true**
        shared_ptr<bool> enableNatTraversal_ {};
        // The IP address on the Alibaba Cloud side.
        shared_ptr<string> internetIp_ {};
        // The CA certificate of the tunnel peer.
        // 
        // This parameter is returned only if the VPN gateway is of the SM type.
        shared_ptr<string> remoteCaCertificate_ {};
        // The tunnel role. Valid values:
        // 
        // *   **master**: The tunnel is an active tunnel.
        // *   **slave**: The tunnel is a standby tunnel.
        shared_ptr<string> role_ {};
        // The tunnel status. Valid values:
        // 
        // *   **active**
        // *   **updating**
        // *   **deleting**
        shared_ptr<string> state_ {};
        // The BGP configuration.
        shared_ptr<TunnelOptions::TunnelBgpConfig> tunnelBgpConfig_ {};
        // The tunnel ID.
        shared_ptr<string> tunnelId_ {};
        // The configuration of Phase 1 negotiations.
        shared_ptr<TunnelOptions::TunnelIkeConfig> tunnelIkeConfig_ {};
        // The configuration of Phase 2 negotiations.
        shared_ptr<TunnelOptions::TunnelIpsecConfig> tunnelIpsecConfig_ {};
        // The zone of the tunnel.
        shared_ptr<string> zoneNo_ {};
      };

      virtual bool empty() const override { return this->tunnelOptions_ == nullptr; };
      // tunnelOptions Field Functions 
      bool hasTunnelOptions() const { return this->tunnelOptions_ != nullptr;};
      void deleteTunnelOptions() { this->tunnelOptions_ = nullptr;};
      inline const vector<TunnelOptionsSpecification::TunnelOptions> & getTunnelOptions() const { DARABONBA_PTR_GET_CONST(tunnelOptions_, vector<TunnelOptionsSpecification::TunnelOptions>) };
      inline vector<TunnelOptionsSpecification::TunnelOptions> getTunnelOptions() { DARABONBA_PTR_GET(tunnelOptions_, vector<TunnelOptionsSpecification::TunnelOptions>) };
      inline TunnelOptionsSpecification& setTunnelOptions(const vector<TunnelOptionsSpecification::TunnelOptions> & tunnelOptions) { DARABONBA_PTR_SET_VALUE(tunnelOptions_, tunnelOptions) };
      inline TunnelOptionsSpecification& setTunnelOptions(vector<TunnelOptionsSpecification::TunnelOptions> && tunnelOptions) { DARABONBA_PTR_SET_RVALUE(tunnelOptions_, tunnelOptions) };


    protected:
      shared_ptr<vector<TunnelOptionsSpecification::TunnelOptions>> tunnelOptions_ {};
    };

    class IpsecConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IpsecConfig& obj) { 
        DARABONBA_PTR_TO_JSON(IpsecAuthAlg, ipsecAuthAlg_);
        DARABONBA_PTR_TO_JSON(IpsecEncAlg, ipsecEncAlg_);
        DARABONBA_PTR_TO_JSON(IpsecLifetime, ipsecLifetime_);
        DARABONBA_PTR_TO_JSON(IpsecPfs, ipsecPfs_);
      };
      friend void from_json(const Darabonba::Json& j, IpsecConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(IpsecAuthAlg, ipsecAuthAlg_);
        DARABONBA_PTR_FROM_JSON(IpsecEncAlg, ipsecEncAlg_);
        DARABONBA_PTR_FROM_JSON(IpsecLifetime, ipsecLifetime_);
        DARABONBA_PTR_FROM_JSON(IpsecPfs, ipsecPfs_);
      };
      IpsecConfig() = default ;
      IpsecConfig(const IpsecConfig &) = default ;
      IpsecConfig(IpsecConfig &&) = default ;
      IpsecConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IpsecConfig() = default ;
      IpsecConfig& operator=(const IpsecConfig &) = default ;
      IpsecConfig& operator=(IpsecConfig &&) = default ;
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
      inline IpsecConfig& setIpsecAuthAlg(string ipsecAuthAlg) { DARABONBA_PTR_SET_VALUE(ipsecAuthAlg_, ipsecAuthAlg) };


      // ipsecEncAlg Field Functions 
      bool hasIpsecEncAlg() const { return this->ipsecEncAlg_ != nullptr;};
      void deleteIpsecEncAlg() { this->ipsecEncAlg_ = nullptr;};
      inline string getIpsecEncAlg() const { DARABONBA_PTR_GET_DEFAULT(ipsecEncAlg_, "") };
      inline IpsecConfig& setIpsecEncAlg(string ipsecEncAlg) { DARABONBA_PTR_SET_VALUE(ipsecEncAlg_, ipsecEncAlg) };


      // ipsecLifetime Field Functions 
      bool hasIpsecLifetime() const { return this->ipsecLifetime_ != nullptr;};
      void deleteIpsecLifetime() { this->ipsecLifetime_ = nullptr;};
      inline int64_t getIpsecLifetime() const { DARABONBA_PTR_GET_DEFAULT(ipsecLifetime_, 0L) };
      inline IpsecConfig& setIpsecLifetime(int64_t ipsecLifetime) { DARABONBA_PTR_SET_VALUE(ipsecLifetime_, ipsecLifetime) };


      // ipsecPfs Field Functions 
      bool hasIpsecPfs() const { return this->ipsecPfs_ != nullptr;};
      void deleteIpsecPfs() { this->ipsecPfs_ = nullptr;};
      inline string getIpsecPfs() const { DARABONBA_PTR_GET_DEFAULT(ipsecPfs_, "") };
      inline IpsecConfig& setIpsecPfs(string ipsecPfs) { DARABONBA_PTR_SET_VALUE(ipsecPfs_, ipsecPfs) };


    protected:
      // The authentication algorithm in the IPsec phase.
      shared_ptr<string> ipsecAuthAlg_ {};
      // The encryption algorithm in the IPsec phase.
      shared_ptr<string> ipsecEncAlg_ {};
      // The lifetime in the IPsec phase. Unit: seconds.
      shared_ptr<int64_t> ipsecLifetime_ {};
      // The DH group in the IPsec phase.
      shared_ptr<string> ipsecPfs_ {};
    };

    class IkeConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IkeConfig& obj) { 
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
      friend void from_json(const Darabonba::Json& j, IkeConfig& obj) { 
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
      IkeConfig() = default ;
      IkeConfig(const IkeConfig &) = default ;
      IkeConfig(IkeConfig &&) = default ;
      IkeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IkeConfig() = default ;
      IkeConfig& operator=(const IkeConfig &) = default ;
      IkeConfig& operator=(IkeConfig &&) = default ;
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
      inline IkeConfig& setIkeAuthAlg(string ikeAuthAlg) { DARABONBA_PTR_SET_VALUE(ikeAuthAlg_, ikeAuthAlg) };


      // ikeEncAlg Field Functions 
      bool hasIkeEncAlg() const { return this->ikeEncAlg_ != nullptr;};
      void deleteIkeEncAlg() { this->ikeEncAlg_ = nullptr;};
      inline string getIkeEncAlg() const { DARABONBA_PTR_GET_DEFAULT(ikeEncAlg_, "") };
      inline IkeConfig& setIkeEncAlg(string ikeEncAlg) { DARABONBA_PTR_SET_VALUE(ikeEncAlg_, ikeEncAlg) };


      // ikeLifetime Field Functions 
      bool hasIkeLifetime() const { return this->ikeLifetime_ != nullptr;};
      void deleteIkeLifetime() { this->ikeLifetime_ = nullptr;};
      inline int64_t getIkeLifetime() const { DARABONBA_PTR_GET_DEFAULT(ikeLifetime_, 0L) };
      inline IkeConfig& setIkeLifetime(int64_t ikeLifetime) { DARABONBA_PTR_SET_VALUE(ikeLifetime_, ikeLifetime) };


      // ikeMode Field Functions 
      bool hasIkeMode() const { return this->ikeMode_ != nullptr;};
      void deleteIkeMode() { this->ikeMode_ = nullptr;};
      inline string getIkeMode() const { DARABONBA_PTR_GET_DEFAULT(ikeMode_, "") };
      inline IkeConfig& setIkeMode(string ikeMode) { DARABONBA_PTR_SET_VALUE(ikeMode_, ikeMode) };


      // ikePfs Field Functions 
      bool hasIkePfs() const { return this->ikePfs_ != nullptr;};
      void deleteIkePfs() { this->ikePfs_ = nullptr;};
      inline string getIkePfs() const { DARABONBA_PTR_GET_DEFAULT(ikePfs_, "") };
      inline IkeConfig& setIkePfs(string ikePfs) { DARABONBA_PTR_SET_VALUE(ikePfs_, ikePfs) };


      // ikeVersion Field Functions 
      bool hasIkeVersion() const { return this->ikeVersion_ != nullptr;};
      void deleteIkeVersion() { this->ikeVersion_ = nullptr;};
      inline string getIkeVersion() const { DARABONBA_PTR_GET_DEFAULT(ikeVersion_, "") };
      inline IkeConfig& setIkeVersion(string ikeVersion) { DARABONBA_PTR_SET_VALUE(ikeVersion_, ikeVersion) };


      // localId Field Functions 
      bool hasLocalId() const { return this->localId_ != nullptr;};
      void deleteLocalId() { this->localId_ = nullptr;};
      inline string getLocalId() const { DARABONBA_PTR_GET_DEFAULT(localId_, "") };
      inline IkeConfig& setLocalId(string localId) { DARABONBA_PTR_SET_VALUE(localId_, localId) };


      // psk Field Functions 
      bool hasPsk() const { return this->psk_ != nullptr;};
      void deletePsk() { this->psk_ = nullptr;};
      inline string getPsk() const { DARABONBA_PTR_GET_DEFAULT(psk_, "") };
      inline IkeConfig& setPsk(string psk) { DARABONBA_PTR_SET_VALUE(psk_, psk) };


      // remoteId Field Functions 
      bool hasRemoteId() const { return this->remoteId_ != nullptr;};
      void deleteRemoteId() { this->remoteId_ = nullptr;};
      inline string getRemoteId() const { DARABONBA_PTR_GET_DEFAULT(remoteId_, "") };
      inline IkeConfig& setRemoteId(string remoteId) { DARABONBA_PTR_SET_VALUE(remoteId_, remoteId) };


    protected:
      // The authentication algorithm in the IKE phase.
      shared_ptr<string> ikeAuthAlg_ {};
      // The encryption algorithm in the IKE phase.
      shared_ptr<string> ikeEncAlg_ {};
      // The lifetime in the IKE phase. Unit: seconds.
      shared_ptr<int64_t> ikeLifetime_ {};
      // The IKE negotiation mode.
      // 
      // *   **main**: This mode offers higher security during negotiations.
      // *   **aggressive**: This mode is faster and has a higher success rate.
      shared_ptr<string> ikeMode_ {};
      // The DH group in the IKE phase.
      shared_ptr<string> ikePfs_ {};
      // The version of the IKE protocol.
      // 
      // *   **ikev1**
      // *   **ikev2**
      // 
      // Compared with IKEv1, IKEv2 simplifies the SA negotiation process and is more suitable for scenarios in which multiple CIDR blocks are used.
      shared_ptr<string> ikeVersion_ {};
      // The identifier on the VPC side. The default value is the IP address of the VPN gateway. The value can be an FQDN or an IP address.
      shared_ptr<string> localId_ {};
      // The pre-shared key.
      shared_ptr<string> psk_ {};
      // The identifier on the data center side. The default value is the IP address of the customer gateway. The value can be a FQDN or an IP address.
      shared_ptr<string> remoteId_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->customerGatewayId_ == nullptr && this->description_ == nullptr && this->effectImmediately_ == nullptr && this->enableDpd_ == nullptr && this->enableNatTraversal_ == nullptr
        && this->enableTunnelsBgp_ == nullptr && this->ikeConfig_ == nullptr && this->ipsecConfig_ == nullptr && this->localSubnet_ == nullptr && this->name_ == nullptr
        && this->remoteSubnet_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->tunnelOptionsSpecification_ == nullptr && this->vcoHealthCheck_ == nullptr
        && this->vpnBgpConfig_ == nullptr && this->vpnConnectionId_ == nullptr && this->vpnGatewayId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ModifyVpnConnectionAttributeResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customerGatewayId Field Functions 
    bool hasCustomerGatewayId() const { return this->customerGatewayId_ != nullptr;};
    void deleteCustomerGatewayId() { this->customerGatewayId_ = nullptr;};
    inline string getCustomerGatewayId() const { DARABONBA_PTR_GET_DEFAULT(customerGatewayId_, "") };
    inline ModifyVpnConnectionAttributeResponseBody& setCustomerGatewayId(string customerGatewayId) { DARABONBA_PTR_SET_VALUE(customerGatewayId_, customerGatewayId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyVpnConnectionAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // effectImmediately Field Functions 
    bool hasEffectImmediately() const { return this->effectImmediately_ != nullptr;};
    void deleteEffectImmediately() { this->effectImmediately_ = nullptr;};
    inline bool getEffectImmediately() const { DARABONBA_PTR_GET_DEFAULT(effectImmediately_, false) };
    inline ModifyVpnConnectionAttributeResponseBody& setEffectImmediately(bool effectImmediately) { DARABONBA_PTR_SET_VALUE(effectImmediately_, effectImmediately) };


    // enableDpd Field Functions 
    bool hasEnableDpd() const { return this->enableDpd_ != nullptr;};
    void deleteEnableDpd() { this->enableDpd_ = nullptr;};
    inline bool getEnableDpd() const { DARABONBA_PTR_GET_DEFAULT(enableDpd_, false) };
    inline ModifyVpnConnectionAttributeResponseBody& setEnableDpd(bool enableDpd) { DARABONBA_PTR_SET_VALUE(enableDpd_, enableDpd) };


    // enableNatTraversal Field Functions 
    bool hasEnableNatTraversal() const { return this->enableNatTraversal_ != nullptr;};
    void deleteEnableNatTraversal() { this->enableNatTraversal_ = nullptr;};
    inline bool getEnableNatTraversal() const { DARABONBA_PTR_GET_DEFAULT(enableNatTraversal_, false) };
    inline ModifyVpnConnectionAttributeResponseBody& setEnableNatTraversal(bool enableNatTraversal) { DARABONBA_PTR_SET_VALUE(enableNatTraversal_, enableNatTraversal) };


    // enableTunnelsBgp Field Functions 
    bool hasEnableTunnelsBgp() const { return this->enableTunnelsBgp_ != nullptr;};
    void deleteEnableTunnelsBgp() { this->enableTunnelsBgp_ = nullptr;};
    inline bool getEnableTunnelsBgp() const { DARABONBA_PTR_GET_DEFAULT(enableTunnelsBgp_, false) };
    inline ModifyVpnConnectionAttributeResponseBody& setEnableTunnelsBgp(bool enableTunnelsBgp) { DARABONBA_PTR_SET_VALUE(enableTunnelsBgp_, enableTunnelsBgp) };


    // ikeConfig Field Functions 
    bool hasIkeConfig() const { return this->ikeConfig_ != nullptr;};
    void deleteIkeConfig() { this->ikeConfig_ = nullptr;};
    inline const ModifyVpnConnectionAttributeResponseBody::IkeConfig & getIkeConfig() const { DARABONBA_PTR_GET_CONST(ikeConfig_, ModifyVpnConnectionAttributeResponseBody::IkeConfig) };
    inline ModifyVpnConnectionAttributeResponseBody::IkeConfig getIkeConfig() { DARABONBA_PTR_GET(ikeConfig_, ModifyVpnConnectionAttributeResponseBody::IkeConfig) };
    inline ModifyVpnConnectionAttributeResponseBody& setIkeConfig(const ModifyVpnConnectionAttributeResponseBody::IkeConfig & ikeConfig) { DARABONBA_PTR_SET_VALUE(ikeConfig_, ikeConfig) };
    inline ModifyVpnConnectionAttributeResponseBody& setIkeConfig(ModifyVpnConnectionAttributeResponseBody::IkeConfig && ikeConfig) { DARABONBA_PTR_SET_RVALUE(ikeConfig_, ikeConfig) };


    // ipsecConfig Field Functions 
    bool hasIpsecConfig() const { return this->ipsecConfig_ != nullptr;};
    void deleteIpsecConfig() { this->ipsecConfig_ = nullptr;};
    inline const ModifyVpnConnectionAttributeResponseBody::IpsecConfig & getIpsecConfig() const { DARABONBA_PTR_GET_CONST(ipsecConfig_, ModifyVpnConnectionAttributeResponseBody::IpsecConfig) };
    inline ModifyVpnConnectionAttributeResponseBody::IpsecConfig getIpsecConfig() { DARABONBA_PTR_GET(ipsecConfig_, ModifyVpnConnectionAttributeResponseBody::IpsecConfig) };
    inline ModifyVpnConnectionAttributeResponseBody& setIpsecConfig(const ModifyVpnConnectionAttributeResponseBody::IpsecConfig & ipsecConfig) { DARABONBA_PTR_SET_VALUE(ipsecConfig_, ipsecConfig) };
    inline ModifyVpnConnectionAttributeResponseBody& setIpsecConfig(ModifyVpnConnectionAttributeResponseBody::IpsecConfig && ipsecConfig) { DARABONBA_PTR_SET_RVALUE(ipsecConfig_, ipsecConfig) };


    // localSubnet Field Functions 
    bool hasLocalSubnet() const { return this->localSubnet_ != nullptr;};
    void deleteLocalSubnet() { this->localSubnet_ = nullptr;};
    inline string getLocalSubnet() const { DARABONBA_PTR_GET_DEFAULT(localSubnet_, "") };
    inline ModifyVpnConnectionAttributeResponseBody& setLocalSubnet(string localSubnet) { DARABONBA_PTR_SET_VALUE(localSubnet_, localSubnet) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyVpnConnectionAttributeResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // remoteSubnet Field Functions 
    bool hasRemoteSubnet() const { return this->remoteSubnet_ != nullptr;};
    void deleteRemoteSubnet() { this->remoteSubnet_ = nullptr;};
    inline string getRemoteSubnet() const { DARABONBA_PTR_GET_DEFAULT(remoteSubnet_, "") };
    inline ModifyVpnConnectionAttributeResponseBody& setRemoteSubnet(string remoteSubnet) { DARABONBA_PTR_SET_VALUE(remoteSubnet_, remoteSubnet) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyVpnConnectionAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyVpnConnectionAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tunnelOptionsSpecification Field Functions 
    bool hasTunnelOptionsSpecification() const { return this->tunnelOptionsSpecification_ != nullptr;};
    void deleteTunnelOptionsSpecification() { this->tunnelOptionsSpecification_ = nullptr;};
    inline const ModifyVpnConnectionAttributeResponseBody::TunnelOptionsSpecification & getTunnelOptionsSpecification() const { DARABONBA_PTR_GET_CONST(tunnelOptionsSpecification_, ModifyVpnConnectionAttributeResponseBody::TunnelOptionsSpecification) };
    inline ModifyVpnConnectionAttributeResponseBody::TunnelOptionsSpecification getTunnelOptionsSpecification() { DARABONBA_PTR_GET(tunnelOptionsSpecification_, ModifyVpnConnectionAttributeResponseBody::TunnelOptionsSpecification) };
    inline ModifyVpnConnectionAttributeResponseBody& setTunnelOptionsSpecification(const ModifyVpnConnectionAttributeResponseBody::TunnelOptionsSpecification & tunnelOptionsSpecification) { DARABONBA_PTR_SET_VALUE(tunnelOptionsSpecification_, tunnelOptionsSpecification) };
    inline ModifyVpnConnectionAttributeResponseBody& setTunnelOptionsSpecification(ModifyVpnConnectionAttributeResponseBody::TunnelOptionsSpecification && tunnelOptionsSpecification) { DARABONBA_PTR_SET_RVALUE(tunnelOptionsSpecification_, tunnelOptionsSpecification) };


    // vcoHealthCheck Field Functions 
    bool hasVcoHealthCheck() const { return this->vcoHealthCheck_ != nullptr;};
    void deleteVcoHealthCheck() { this->vcoHealthCheck_ = nullptr;};
    inline const ModifyVpnConnectionAttributeResponseBody::VcoHealthCheck & getVcoHealthCheck() const { DARABONBA_PTR_GET_CONST(vcoHealthCheck_, ModifyVpnConnectionAttributeResponseBody::VcoHealthCheck) };
    inline ModifyVpnConnectionAttributeResponseBody::VcoHealthCheck getVcoHealthCheck() { DARABONBA_PTR_GET(vcoHealthCheck_, ModifyVpnConnectionAttributeResponseBody::VcoHealthCheck) };
    inline ModifyVpnConnectionAttributeResponseBody& setVcoHealthCheck(const ModifyVpnConnectionAttributeResponseBody::VcoHealthCheck & vcoHealthCheck) { DARABONBA_PTR_SET_VALUE(vcoHealthCheck_, vcoHealthCheck) };
    inline ModifyVpnConnectionAttributeResponseBody& setVcoHealthCheck(ModifyVpnConnectionAttributeResponseBody::VcoHealthCheck && vcoHealthCheck) { DARABONBA_PTR_SET_RVALUE(vcoHealthCheck_, vcoHealthCheck) };


    // vpnBgpConfig Field Functions 
    bool hasVpnBgpConfig() const { return this->vpnBgpConfig_ != nullptr;};
    void deleteVpnBgpConfig() { this->vpnBgpConfig_ = nullptr;};
    inline const ModifyVpnConnectionAttributeResponseBody::VpnBgpConfig & getVpnBgpConfig() const { DARABONBA_PTR_GET_CONST(vpnBgpConfig_, ModifyVpnConnectionAttributeResponseBody::VpnBgpConfig) };
    inline ModifyVpnConnectionAttributeResponseBody::VpnBgpConfig getVpnBgpConfig() { DARABONBA_PTR_GET(vpnBgpConfig_, ModifyVpnConnectionAttributeResponseBody::VpnBgpConfig) };
    inline ModifyVpnConnectionAttributeResponseBody& setVpnBgpConfig(const ModifyVpnConnectionAttributeResponseBody::VpnBgpConfig & vpnBgpConfig) { DARABONBA_PTR_SET_VALUE(vpnBgpConfig_, vpnBgpConfig) };
    inline ModifyVpnConnectionAttributeResponseBody& setVpnBgpConfig(ModifyVpnConnectionAttributeResponseBody::VpnBgpConfig && vpnBgpConfig) { DARABONBA_PTR_SET_RVALUE(vpnBgpConfig_, vpnBgpConfig) };


    // vpnConnectionId Field Functions 
    bool hasVpnConnectionId() const { return this->vpnConnectionId_ != nullptr;};
    void deleteVpnConnectionId() { this->vpnConnectionId_ = nullptr;};
    inline string getVpnConnectionId() const { DARABONBA_PTR_GET_DEFAULT(vpnConnectionId_, "") };
    inline ModifyVpnConnectionAttributeResponseBody& setVpnConnectionId(string vpnConnectionId) { DARABONBA_PTR_SET_VALUE(vpnConnectionId_, vpnConnectionId) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string getVpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline ModifyVpnConnectionAttributeResponseBody& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


  protected:
    // The timestamp generated when the IPsec-VPN connection was established. Unit: milliseconds.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> createTime_ {};
    // The ID of the customer gateway associated with the IPsec-VPN connection.
    // 
    // This parameter is returned only for single-tunnel IPsec-VPN connections.
    shared_ptr<string> customerGatewayId_ {};
    // The description of the IPsec-VPN connection.
    shared_ptr<string> description_ {};
    // Indicates whether IPsec negotiations immediately start after the configuration takes effect. Valid values:
    // 
    // *   **true**: IPsec negotiations immediately start after the configuration takes effect.
    // *   **false**: IPsec negotiations start when inbound traffic is detected.
    shared_ptr<bool> effectImmediately_ {};
    // Indicates whether the DPD feature is enabled for the IPsec-VPN connection. Valid values:
    // 
    // *   **false**
    // *   **true**
    // 
    // This parameter is returned only for single-tunnel IPsec-VPN connections.
    shared_ptr<bool> enableDpd_ {};
    // Indicates whether NAT traversal is enabled for the IPsec-VPN connection. Valid values: Valid values:
    // 
    // *   **false**
    // *   **true**
    // 
    // This parameter is returned only for single-tunnel IPsec-VPN connections.
    shared_ptr<bool> enableNatTraversal_ {};
    // Indicates whether BGP is enabled for the tunnel. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // This parameter is returned only by dual-tunnel IPsec-VPN connections.
    shared_ptr<bool> enableTunnelsBgp_ {};
    // The configuration of Phase 1 negotiations.
    // 
    // **IkeConfig** parameters are returned only for single-tunnel IPsec-VPN connections.
    shared_ptr<ModifyVpnConnectionAttributeResponseBody::IkeConfig> ikeConfig_ {};
    // The configuration of Phase 2 negotiations.
    // 
    // **IpsecConfig** parameters are returned only for single-tunnel IPsec-VPN connections.
    shared_ptr<ModifyVpnConnectionAttributeResponseBody::IpsecConfig> ipsecConfig_ {};
    // The CIDR block on the VPC side.
    shared_ptr<string> localSubnet_ {};
    // The name of the IPsec-VPN connection.
    shared_ptr<string> name_ {};
    // The CIDR block on the data center side.
    shared_ptr<string> remoteSubnet_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group to which the IPsec-VPN connection belongs.
    // 
    // The IPsec-VPN connection and the VPN gateway associated with the IPsec-VPN connection belong to the same resource group. You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to query resource groups.
    shared_ptr<string> resourceGroupId_ {};
    // The tunnel configuration of the IPsec-VPN connection.
    // 
    // **TunnelOptionsSpecification** parameters are returned only for dual-tunnel IPsec-VPN connections.
    shared_ptr<ModifyVpnConnectionAttributeResponseBody::TunnelOptionsSpecification> tunnelOptionsSpecification_ {};
    // The health check configuration.
    // 
    // **VcoHealthCheck** parameters are returned only for single-tunnel IPsec-VPN connections.
    shared_ptr<ModifyVpnConnectionAttributeResponseBody::VcoHealthCheck> vcoHealthCheck_ {};
    // The BGP configuration.
    // 
    // **VpnBgpConfig** parameters are returned only for single-tunnel IPsec-VPN connections.
    shared_ptr<ModifyVpnConnectionAttributeResponseBody::VpnBgpConfig> vpnBgpConfig_ {};
    // The ID of the IPsec-VPN connection.
    shared_ptr<string> vpnConnectionId_ {};
    // The ID of the VPN gateway.
    shared_ptr<string> vpnGatewayId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
