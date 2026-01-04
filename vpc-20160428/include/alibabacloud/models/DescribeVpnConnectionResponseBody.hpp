// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNCONNECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNCONNECTIONRESPONSEBODY_HPP_
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
  class DescribeVpnConnectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnConnectionResponseBody& obj) { 
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
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(TransitRouterName, transitRouterName_);
      DARABONBA_PTR_TO_JSON(TunnelOptionsSpecification, tunnelOptionsSpecification_);
      DARABONBA_PTR_TO_JSON(VcoHealthCheck, vcoHealthCheck_);
      DARABONBA_PTR_TO_JSON(VpnBgpConfig, vpnBgpConfig_);
      DARABONBA_PTR_TO_JSON(VpnConnectionId, vpnConnectionId_);
      DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
      DARABONBA_PTR_TO_JSON(ZoneNo, zoneNo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnConnectionResponseBody& obj) { 
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
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterName, transitRouterName_);
      DARABONBA_PTR_FROM_JSON(TunnelOptionsSpecification, tunnelOptionsSpecification_);
      DARABONBA_PTR_FROM_JSON(VcoHealthCheck, vcoHealthCheck_);
      DARABONBA_PTR_FROM_JSON(VpnBgpConfig, vpnBgpConfig_);
      DARABONBA_PTR_FROM_JSON(VpnConnectionId, vpnConnectionId_);
      DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
      DARABONBA_PTR_FROM_JSON(ZoneNo, zoneNo_);
    };
    DescribeVpnConnectionResponseBody() = default ;
    DescribeVpnConnectionResponseBody(const DescribeVpnConnectionResponseBody &) = default ;
    DescribeVpnConnectionResponseBody(DescribeVpnConnectionResponseBody &&) = default ;
    DescribeVpnConnectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnConnectionResponseBody() = default ;
    DescribeVpnConnectionResponseBody& operator=(const DescribeVpnConnectionResponseBody &) = default ;
    DescribeVpnConnectionResponseBody& operator=(DescribeVpnConnectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VpnBgpConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VpnBgpConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
        DARABONBA_PTR_TO_JSON(EnableBgp, enableBgp_);
        DARABONBA_PTR_TO_JSON(LocalAsn, localAsn_);
        DARABONBA_PTR_TO_JSON(LocalBgpIp, localBgpIp_);
        DARABONBA_PTR_TO_JSON(PeerAsn, peerAsn_);
        DARABONBA_PTR_TO_JSON(PeerBgpIp, peerBgpIp_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TunnelCidr, tunnelCidr_);
      };
      friend void from_json(const Darabonba::Json& j, VpnBgpConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
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
      virtual bool empty() const override { return this->authKey_ == nullptr
        && this->enableBgp_ == nullptr && this->localAsn_ == nullptr && this->localBgpIp_ == nullptr && this->peerAsn_ == nullptr && this->peerBgpIp_ == nullptr
        && this->status_ == nullptr && this->tunnelCidr_ == nullptr; };
      // authKey Field Functions 
      bool hasAuthKey() const { return this->authKey_ != nullptr;};
      void deleteAuthKey() { this->authKey_ = nullptr;};
      inline string getAuthKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
      inline VpnBgpConfig& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


      // enableBgp Field Functions 
      bool hasEnableBgp() const { return this->enableBgp_ != nullptr;};
      void deleteEnableBgp() { this->enableBgp_ = nullptr;};
      inline string getEnableBgp() const { DARABONBA_PTR_GET_DEFAULT(enableBgp_, "") };
      inline VpnBgpConfig& setEnableBgp(string enableBgp) { DARABONBA_PTR_SET_VALUE(enableBgp_, enableBgp) };


      // localAsn Field Functions 
      bool hasLocalAsn() const { return this->localAsn_ != nullptr;};
      void deleteLocalAsn() { this->localAsn_ = nullptr;};
      inline int64_t getLocalAsn() const { DARABONBA_PTR_GET_DEFAULT(localAsn_, 0L) };
      inline VpnBgpConfig& setLocalAsn(int64_t localAsn) { DARABONBA_PTR_SET_VALUE(localAsn_, localAsn) };


      // localBgpIp Field Functions 
      bool hasLocalBgpIp() const { return this->localBgpIp_ != nullptr;};
      void deleteLocalBgpIp() { this->localBgpIp_ = nullptr;};
      inline string getLocalBgpIp() const { DARABONBA_PTR_GET_DEFAULT(localBgpIp_, "") };
      inline VpnBgpConfig& setLocalBgpIp(string localBgpIp) { DARABONBA_PTR_SET_VALUE(localBgpIp_, localBgpIp) };


      // peerAsn Field Functions 
      bool hasPeerAsn() const { return this->peerAsn_ != nullptr;};
      void deletePeerAsn() { this->peerAsn_ = nullptr;};
      inline int64_t getPeerAsn() const { DARABONBA_PTR_GET_DEFAULT(peerAsn_, 0L) };
      inline VpnBgpConfig& setPeerAsn(int64_t peerAsn) { DARABONBA_PTR_SET_VALUE(peerAsn_, peerAsn) };


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
      // The authentication key of the BGP routing protocol.
      shared_ptr<string> authKey_ {};
      // Indicates whether BGP is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<string> enableBgp_ {};
      // The ASN on the Alibaba Cloud side.
      shared_ptr<int64_t> localAsn_ {};
      // The BGP IP address on the Alibaba Cloud side.
      shared_ptr<string> localBgpIp_ {};
      // The autonomous system number (ASN) of the peer.
      shared_ptr<int64_t> peerAsn_ {};
      // The BGP IP address of the peer.
      shared_ptr<string> peerBgpIp_ {};
      // The negotiation state of the BGP routing protocol. Valid values:
      // 
      // *   **success**: normal
      // *   **failed**
      shared_ptr<string> status_ {};
      // The BGP CIDR block of the IPsec-VPN connection. The CIDR block falls within 169.254.0.0/16. The subnet mask of the CIDR block must be 30 bits in length.
      shared_ptr<string> tunnelCidr_ {};
    };

    class VcoHealthCheck : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VcoHealthCheck& obj) { 
        DARABONBA_PTR_TO_JSON(Dip, dip_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(Interval, interval_);
        DARABONBA_PTR_TO_JSON(Policy, policy_);
        DARABONBA_PTR_TO_JSON(Retry, retry_);
        DARABONBA_PTR_TO_JSON(Sip, sip_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, VcoHealthCheck& obj) { 
        DARABONBA_PTR_FROM_JSON(Dip, dip_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(Interval, interval_);
        DARABONBA_PTR_FROM_JSON(Policy, policy_);
        DARABONBA_PTR_FROM_JSON(Retry, retry_);
        DARABONBA_PTR_FROM_JSON(Sip, sip_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
        && this->enable_ == nullptr && this->interval_ == nullptr && this->policy_ == nullptr && this->retry_ == nullptr && this->sip_ == nullptr
        && this->status_ == nullptr; };
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


      // policy Field Functions 
      bool hasPolicy() const { return this->policy_ != nullptr;};
      void deletePolicy() { this->policy_ = nullptr;};
      inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
      inline VcoHealthCheck& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


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


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline VcoHealthCheck& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The destination IP address.
      shared_ptr<string> dip_ {};
      // Indicates whether the health check feature is enabled for the IPsec-VPN connection. Valid values:
      // 
      // *   **false**
      // *   **true**
      shared_ptr<string> enable_ {};
      // The interval between two consecutive health checks. Unit: seconds.
      shared_ptr<int32_t> interval_ {};
      // Indicates whether advertised routes are withdrawn when the health check fails. Valid values:
      // 
      // *   **revoke_route**: Advertised routes are withdrawn.
      // *   **reserve_route**: Advertised routes are not withdrawn.
      shared_ptr<string> policy_ {};
      // The maximum number of health check retries.
      shared_ptr<int32_t> retry_ {};
      // The source IP address.
      shared_ptr<string> sip_ {};
      // The state of the health check. Valid values:
      // 
      // *   **failed**
      // *   **success**: normal
      shared_ptr<string> status_ {};
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
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TunnelBgpConfig, tunnelBgpConfig_);
          DARABONBA_PTR_TO_JSON(TunnelId, tunnelId_);
          DARABONBA_PTR_TO_JSON(TunnelIkeConfig, tunnelIkeConfig_);
          DARABONBA_PTR_TO_JSON(TunnelIndex, tunnelIndex_);
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
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TunnelBgpConfig, tunnelBgpConfig_);
          DARABONBA_PTR_FROM_JSON(TunnelId, tunnelId_);
          DARABONBA_PTR_FROM_JSON(TunnelIkeConfig, tunnelIkeConfig_);
          DARABONBA_PTR_FROM_JSON(TunnelIndex, tunnelIndex_);
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
          inline string getIpsecLifetime() const { DARABONBA_PTR_GET_DEFAULT(ipsecLifetime_, "") };
          inline TunnelIpsecConfig& setIpsecLifetime(string ipsecLifetime) { DARABONBA_PTR_SET_VALUE(ipsecLifetime_, ipsecLifetime) };


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
          shared_ptr<string> ipsecLifetime_ {};
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
          inline string getIkeLifetime() const { DARABONBA_PTR_GET_DEFAULT(ikeLifetime_, "") };
          inline TunnelIkeConfig& setIkeLifetime(string ikeLifetime) { DARABONBA_PTR_SET_VALUE(ikeLifetime_, ikeLifetime) };


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
          shared_ptr<string> ikeLifetime_ {};
          // The IKE negotiation mode.
          // 
          // *   **main**: This mode offers higher security during negotiations.
          // *   **aggressive**: This mode is faster and has a higher success rate.
          shared_ptr<string> ikeMode_ {};
          // The Diffie-Hellman (DH) group in the IKE phase.
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
            DARABONBA_PTR_TO_JSON(BgpStatus, bgpStatus_);
            DARABONBA_PTR_TO_JSON(LocalAsn, localAsn_);
            DARABONBA_PTR_TO_JSON(LocalBgpIp, localBgpIp_);
            DARABONBA_PTR_TO_JSON(PeerAsn, peerAsn_);
            DARABONBA_PTR_TO_JSON(PeerBgpIp, peerBgpIp_);
            DARABONBA_PTR_TO_JSON(TunnelCidr, tunnelCidr_);
          };
          friend void from_json(const Darabonba::Json& j, TunnelBgpConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(BgpStatus, bgpStatus_);
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
          virtual bool empty() const override { return this->bgpStatus_ == nullptr
        && this->localAsn_ == nullptr && this->localBgpIp_ == nullptr && this->peerAsn_ == nullptr && this->peerBgpIp_ == nullptr && this->tunnelCidr_ == nullptr; };
          // bgpStatus Field Functions 
          bool hasBgpStatus() const { return this->bgpStatus_ != nullptr;};
          void deleteBgpStatus() { this->bgpStatus_ = nullptr;};
          inline string getBgpStatus() const { DARABONBA_PTR_GET_DEFAULT(bgpStatus_, "") };
          inline TunnelBgpConfig& setBgpStatus(string bgpStatus) { DARABONBA_PTR_SET_VALUE(bgpStatus_, bgpStatus) };


          // localAsn Field Functions 
          bool hasLocalAsn() const { return this->localAsn_ != nullptr;};
          void deleteLocalAsn() { this->localAsn_ = nullptr;};
          inline string getLocalAsn() const { DARABONBA_PTR_GET_DEFAULT(localAsn_, "") };
          inline TunnelBgpConfig& setLocalAsn(string localAsn) { DARABONBA_PTR_SET_VALUE(localAsn_, localAsn) };


          // localBgpIp Field Functions 
          bool hasLocalBgpIp() const { return this->localBgpIp_ != nullptr;};
          void deleteLocalBgpIp() { this->localBgpIp_ = nullptr;};
          inline string getLocalBgpIp() const { DARABONBA_PTR_GET_DEFAULT(localBgpIp_, "") };
          inline TunnelBgpConfig& setLocalBgpIp(string localBgpIp) { DARABONBA_PTR_SET_VALUE(localBgpIp_, localBgpIp) };


          // peerAsn Field Functions 
          bool hasPeerAsn() const { return this->peerAsn_ != nullptr;};
          void deletePeerAsn() { this->peerAsn_ = nullptr;};
          inline string getPeerAsn() const { DARABONBA_PTR_GET_DEFAULT(peerAsn_, "") };
          inline TunnelBgpConfig& setPeerAsn(string peerAsn) { DARABONBA_PTR_SET_VALUE(peerAsn_, peerAsn) };


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
          // The negotiation state of BGP. Valid values:
          // 
          // *   **success**
          // *   **false**
          shared_ptr<string> bgpStatus_ {};
          // The ASN on the Alibaba Cloud side.
          shared_ptr<string> localAsn_ {};
          // The BGP address on the Alibaba Cloud side.
          shared_ptr<string> localBgpIp_ {};
          // The ASN of the tunnel peer.
          shared_ptr<string> peerAsn_ {};
          // The BGP IP address of the tunnel peer.
          shared_ptr<string> peerBgpIp_ {};
          // The BGP CIDR block of the tunnel.
          shared_ptr<string> tunnelCidr_ {};
        };

        virtual bool empty() const override { return this->customerGatewayId_ == nullptr
        && this->enableDpd_ == nullptr && this->enableNatTraversal_ == nullptr && this->internetIp_ == nullptr && this->remoteCaCertificate_ == nullptr && this->role_ == nullptr
        && this->state_ == nullptr && this->status_ == nullptr && this->tunnelBgpConfig_ == nullptr && this->tunnelId_ == nullptr && this->tunnelIkeConfig_ == nullptr
        && this->tunnelIndex_ == nullptr && this->tunnelIpsecConfig_ == nullptr && this->zoneNo_ == nullptr; };
        // customerGatewayId Field Functions 
        bool hasCustomerGatewayId() const { return this->customerGatewayId_ != nullptr;};
        void deleteCustomerGatewayId() { this->customerGatewayId_ = nullptr;};
        inline string getCustomerGatewayId() const { DARABONBA_PTR_GET_DEFAULT(customerGatewayId_, "") };
        inline TunnelOptions& setCustomerGatewayId(string customerGatewayId) { DARABONBA_PTR_SET_VALUE(customerGatewayId_, customerGatewayId) };


        // enableDpd Field Functions 
        bool hasEnableDpd() const { return this->enableDpd_ != nullptr;};
        void deleteEnableDpd() { this->enableDpd_ = nullptr;};
        inline string getEnableDpd() const { DARABONBA_PTR_GET_DEFAULT(enableDpd_, "") };
        inline TunnelOptions& setEnableDpd(string enableDpd) { DARABONBA_PTR_SET_VALUE(enableDpd_, enableDpd) };


        // enableNatTraversal Field Functions 
        bool hasEnableNatTraversal() const { return this->enableNatTraversal_ != nullptr;};
        void deleteEnableNatTraversal() { this->enableNatTraversal_ = nullptr;};
        inline string getEnableNatTraversal() const { DARABONBA_PTR_GET_DEFAULT(enableNatTraversal_, "") };
        inline TunnelOptions& setEnableNatTraversal(string enableNatTraversal) { DARABONBA_PTR_SET_VALUE(enableNatTraversal_, enableNatTraversal) };


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


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline TunnelOptions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


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


        // tunnelIndex Field Functions 
        bool hasTunnelIndex() const { return this->tunnelIndex_ != nullptr;};
        void deleteTunnelIndex() { this->tunnelIndex_ = nullptr;};
        inline int32_t getTunnelIndex() const { DARABONBA_PTR_GET_DEFAULT(tunnelIndex_, 0) };
        inline TunnelOptions& setTunnelIndex(int32_t tunnelIndex) { DARABONBA_PTR_SET_VALUE(tunnelIndex_, tunnelIndex) };


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
        shared_ptr<string> enableDpd_ {};
        // Indicates whether NAT traversal is enabled for the tunnel. Valid values:
        // 
        // *   **false**
        // *   **true**
        shared_ptr<string> enableNatTraversal_ {};
        // The tunnel IP address.
        shared_ptr<string> internetIp_ {};
        // The CA certificate of the tunnel peer.
        // 
        // This parameter is returned only if the VPN gateway is of the ShangMi (SM) type.
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
        // The state of the IPsec-VPN connection. Valid values:
        // 
        // *   **ike_sa_not_established**: Phase 1 negotiations failed.
        // *   **ike_sa_established**: Phase 1 negotiations succeeded.
        // *   **ipsec_sa_not_established**: Phase 2 negotiations failed.
        // *   **ipsec_sa_established**: Phase 2 negotiations succeeded.
        shared_ptr<string> status_ {};
        // The BGP configurations.
        shared_ptr<TunnelOptions::TunnelBgpConfig> tunnelBgpConfig_ {};
        // The tunnel ID.
        shared_ptr<string> tunnelId_ {};
        // The configuration of Phase 1 negotiations.
        shared_ptr<TunnelOptions::TunnelIkeConfig> tunnelIkeConfig_ {};
        // The order in which the tunnel is created.
        // 
        // *   **1**: Tunnel 1.
        // *   **2**: Tunnel 2.
        // 
        // >  This parameter is returned only if the IPsec-VPN connection is associated with a transit router.
        shared_ptr<int32_t> tunnelIndex_ {};
        // The configurations of Phase 2 negotiations.
        shared_ptr<TunnelOptions::TunnelIpsecConfig> tunnelIpsecConfig_ {};
        // The zone where the tunnel is deployed.
        // 
        // You can call [DescribeZones](https://help.aliyun.com/document_detail/36064.html) to query zone IDs.
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

    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Tag, tag_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tag : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tag& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tag& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tag() = default ;
        Tag(const Tag &) = default ;
        Tag(Tag &&) = default ;
        Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tag() = default ;
        Tag& operator=(const Tag &) = default ;
        Tag& operator=(Tag &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->tag_ == nullptr; };
      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
      inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
      inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
      inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    protected:
      shared_ptr<vector<Tags::Tag>> tag_ {};
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
      // The Diffie-Hellman (DH) group in the IKE phase.
      shared_ptr<string> ikePfs_ {};
      // The version of the IKE protocol.
      // 
      // *   **ikev1**
      // *   **ikev2**
      // 
      // Compared with IKEv1, IKEv2 simplifies the SA negotiation process and is more suitable for scenarios in which multiple CIDR blocks are used.
      shared_ptr<string> ikeVersion_ {};
      // The identifier of the IPsec-VPN connection on the Alibaba Cloud side.
      shared_ptr<string> localId_ {};
      // The pre-shared key.
      shared_ptr<string> psk_ {};
      // The identifier of the IPsec-VPN connection on the data center side.
      shared_ptr<string> remoteId_ {};
    };

    virtual bool empty() const override { return this->attachInstanceId_ == nullptr
        && this->attachType_ == nullptr && this->createTime_ == nullptr && this->crossAccountAuthorized_ == nullptr && this->customerGatewayId_ == nullptr && this->effectImmediately_ == nullptr
        && this->enableDpd_ == nullptr && this->enableNatTraversal_ == nullptr && this->enableTunnelsBgp_ == nullptr && this->ikeConfig_ == nullptr && this->internetIp_ == nullptr
        && this->ipsecConfig_ == nullptr && this->localSubnet_ == nullptr && this->name_ == nullptr && this->networkType_ == nullptr && this->remoteCaCertificate_ == nullptr
        && this->remoteSubnet_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->spec_ == nullptr && this->state_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr && this->transitRouterId_ == nullptr && this->transitRouterName_ == nullptr && this->tunnelOptionsSpecification_ == nullptr
        && this->vcoHealthCheck_ == nullptr && this->vpnBgpConfig_ == nullptr && this->vpnConnectionId_ == nullptr && this->vpnGatewayId_ == nullptr && this->zoneNo_ == nullptr; };
    // attachInstanceId Field Functions 
    bool hasAttachInstanceId() const { return this->attachInstanceId_ != nullptr;};
    void deleteAttachInstanceId() { this->attachInstanceId_ = nullptr;};
    inline string getAttachInstanceId() const { DARABONBA_PTR_GET_DEFAULT(attachInstanceId_, "") };
    inline DescribeVpnConnectionResponseBody& setAttachInstanceId(string attachInstanceId) { DARABONBA_PTR_SET_VALUE(attachInstanceId_, attachInstanceId) };


    // attachType Field Functions 
    bool hasAttachType() const { return this->attachType_ != nullptr;};
    void deleteAttachType() { this->attachType_ = nullptr;};
    inline string getAttachType() const { DARABONBA_PTR_GET_DEFAULT(attachType_, "") };
    inline DescribeVpnConnectionResponseBody& setAttachType(string attachType) { DARABONBA_PTR_SET_VALUE(attachType_, attachType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeVpnConnectionResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // crossAccountAuthorized Field Functions 
    bool hasCrossAccountAuthorized() const { return this->crossAccountAuthorized_ != nullptr;};
    void deleteCrossAccountAuthorized() { this->crossAccountAuthorized_ = nullptr;};
    inline bool getCrossAccountAuthorized() const { DARABONBA_PTR_GET_DEFAULT(crossAccountAuthorized_, false) };
    inline DescribeVpnConnectionResponseBody& setCrossAccountAuthorized(bool crossAccountAuthorized) { DARABONBA_PTR_SET_VALUE(crossAccountAuthorized_, crossAccountAuthorized) };


    // customerGatewayId Field Functions 
    bool hasCustomerGatewayId() const { return this->customerGatewayId_ != nullptr;};
    void deleteCustomerGatewayId() { this->customerGatewayId_ = nullptr;};
    inline string getCustomerGatewayId() const { DARABONBA_PTR_GET_DEFAULT(customerGatewayId_, "") };
    inline DescribeVpnConnectionResponseBody& setCustomerGatewayId(string customerGatewayId) { DARABONBA_PTR_SET_VALUE(customerGatewayId_, customerGatewayId) };


    // effectImmediately Field Functions 
    bool hasEffectImmediately() const { return this->effectImmediately_ != nullptr;};
    void deleteEffectImmediately() { this->effectImmediately_ = nullptr;};
    inline bool getEffectImmediately() const { DARABONBA_PTR_GET_DEFAULT(effectImmediately_, false) };
    inline DescribeVpnConnectionResponseBody& setEffectImmediately(bool effectImmediately) { DARABONBA_PTR_SET_VALUE(effectImmediately_, effectImmediately) };


    // enableDpd Field Functions 
    bool hasEnableDpd() const { return this->enableDpd_ != nullptr;};
    void deleteEnableDpd() { this->enableDpd_ = nullptr;};
    inline bool getEnableDpd() const { DARABONBA_PTR_GET_DEFAULT(enableDpd_, false) };
    inline DescribeVpnConnectionResponseBody& setEnableDpd(bool enableDpd) { DARABONBA_PTR_SET_VALUE(enableDpd_, enableDpd) };


    // enableNatTraversal Field Functions 
    bool hasEnableNatTraversal() const { return this->enableNatTraversal_ != nullptr;};
    void deleteEnableNatTraversal() { this->enableNatTraversal_ = nullptr;};
    inline bool getEnableNatTraversal() const { DARABONBA_PTR_GET_DEFAULT(enableNatTraversal_, false) };
    inline DescribeVpnConnectionResponseBody& setEnableNatTraversal(bool enableNatTraversal) { DARABONBA_PTR_SET_VALUE(enableNatTraversal_, enableNatTraversal) };


    // enableTunnelsBgp Field Functions 
    bool hasEnableTunnelsBgp() const { return this->enableTunnelsBgp_ != nullptr;};
    void deleteEnableTunnelsBgp() { this->enableTunnelsBgp_ = nullptr;};
    inline bool getEnableTunnelsBgp() const { DARABONBA_PTR_GET_DEFAULT(enableTunnelsBgp_, false) };
    inline DescribeVpnConnectionResponseBody& setEnableTunnelsBgp(bool enableTunnelsBgp) { DARABONBA_PTR_SET_VALUE(enableTunnelsBgp_, enableTunnelsBgp) };


    // ikeConfig Field Functions 
    bool hasIkeConfig() const { return this->ikeConfig_ != nullptr;};
    void deleteIkeConfig() { this->ikeConfig_ = nullptr;};
    inline const DescribeVpnConnectionResponseBody::IkeConfig & getIkeConfig() const { DARABONBA_PTR_GET_CONST(ikeConfig_, DescribeVpnConnectionResponseBody::IkeConfig) };
    inline DescribeVpnConnectionResponseBody::IkeConfig getIkeConfig() { DARABONBA_PTR_GET(ikeConfig_, DescribeVpnConnectionResponseBody::IkeConfig) };
    inline DescribeVpnConnectionResponseBody& setIkeConfig(const DescribeVpnConnectionResponseBody::IkeConfig & ikeConfig) { DARABONBA_PTR_SET_VALUE(ikeConfig_, ikeConfig) };
    inline DescribeVpnConnectionResponseBody& setIkeConfig(DescribeVpnConnectionResponseBody::IkeConfig && ikeConfig) { DARABONBA_PTR_SET_RVALUE(ikeConfig_, ikeConfig) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeVpnConnectionResponseBody& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // ipsecConfig Field Functions 
    bool hasIpsecConfig() const { return this->ipsecConfig_ != nullptr;};
    void deleteIpsecConfig() { this->ipsecConfig_ = nullptr;};
    inline const DescribeVpnConnectionResponseBody::IpsecConfig & getIpsecConfig() const { DARABONBA_PTR_GET_CONST(ipsecConfig_, DescribeVpnConnectionResponseBody::IpsecConfig) };
    inline DescribeVpnConnectionResponseBody::IpsecConfig getIpsecConfig() { DARABONBA_PTR_GET(ipsecConfig_, DescribeVpnConnectionResponseBody::IpsecConfig) };
    inline DescribeVpnConnectionResponseBody& setIpsecConfig(const DescribeVpnConnectionResponseBody::IpsecConfig & ipsecConfig) { DARABONBA_PTR_SET_VALUE(ipsecConfig_, ipsecConfig) };
    inline DescribeVpnConnectionResponseBody& setIpsecConfig(DescribeVpnConnectionResponseBody::IpsecConfig && ipsecConfig) { DARABONBA_PTR_SET_RVALUE(ipsecConfig_, ipsecConfig) };


    // localSubnet Field Functions 
    bool hasLocalSubnet() const { return this->localSubnet_ != nullptr;};
    void deleteLocalSubnet() { this->localSubnet_ = nullptr;};
    inline string getLocalSubnet() const { DARABONBA_PTR_GET_DEFAULT(localSubnet_, "") };
    inline DescribeVpnConnectionResponseBody& setLocalSubnet(string localSubnet) { DARABONBA_PTR_SET_VALUE(localSubnet_, localSubnet) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeVpnConnectionResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeVpnConnectionResponseBody& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // remoteCaCertificate Field Functions 
    bool hasRemoteCaCertificate() const { return this->remoteCaCertificate_ != nullptr;};
    void deleteRemoteCaCertificate() { this->remoteCaCertificate_ = nullptr;};
    inline string getRemoteCaCertificate() const { DARABONBA_PTR_GET_DEFAULT(remoteCaCertificate_, "") };
    inline DescribeVpnConnectionResponseBody& setRemoteCaCertificate(string remoteCaCertificate) { DARABONBA_PTR_SET_VALUE(remoteCaCertificate_, remoteCaCertificate) };


    // remoteSubnet Field Functions 
    bool hasRemoteSubnet() const { return this->remoteSubnet_ != nullptr;};
    void deleteRemoteSubnet() { this->remoteSubnet_ = nullptr;};
    inline string getRemoteSubnet() const { DARABONBA_PTR_GET_DEFAULT(remoteSubnet_, "") };
    inline DescribeVpnConnectionResponseBody& setRemoteSubnet(string remoteSubnet) { DARABONBA_PTR_SET_VALUE(remoteSubnet_, remoteSubnet) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpnConnectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeVpnConnectionResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline DescribeVpnConnectionResponseBody& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeVpnConnectionResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVpnConnectionResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeVpnConnectionResponseBody::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeVpnConnectionResponseBody::Tags) };
    inline DescribeVpnConnectionResponseBody::Tags getTags() { DARABONBA_PTR_GET(tags_, DescribeVpnConnectionResponseBody::Tags) };
    inline DescribeVpnConnectionResponseBody& setTags(const DescribeVpnConnectionResponseBody::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeVpnConnectionResponseBody& setTags(DescribeVpnConnectionResponseBody::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline DescribeVpnConnectionResponseBody& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // transitRouterName Field Functions 
    bool hasTransitRouterName() const { return this->transitRouterName_ != nullptr;};
    void deleteTransitRouterName() { this->transitRouterName_ = nullptr;};
    inline string getTransitRouterName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterName_, "") };
    inline DescribeVpnConnectionResponseBody& setTransitRouterName(string transitRouterName) { DARABONBA_PTR_SET_VALUE(transitRouterName_, transitRouterName) };


    // tunnelOptionsSpecification Field Functions 
    bool hasTunnelOptionsSpecification() const { return this->tunnelOptionsSpecification_ != nullptr;};
    void deleteTunnelOptionsSpecification() { this->tunnelOptionsSpecification_ = nullptr;};
    inline const DescribeVpnConnectionResponseBody::TunnelOptionsSpecification & getTunnelOptionsSpecification() const { DARABONBA_PTR_GET_CONST(tunnelOptionsSpecification_, DescribeVpnConnectionResponseBody::TunnelOptionsSpecification) };
    inline DescribeVpnConnectionResponseBody::TunnelOptionsSpecification getTunnelOptionsSpecification() { DARABONBA_PTR_GET(tunnelOptionsSpecification_, DescribeVpnConnectionResponseBody::TunnelOptionsSpecification) };
    inline DescribeVpnConnectionResponseBody& setTunnelOptionsSpecification(const DescribeVpnConnectionResponseBody::TunnelOptionsSpecification & tunnelOptionsSpecification) { DARABONBA_PTR_SET_VALUE(tunnelOptionsSpecification_, tunnelOptionsSpecification) };
    inline DescribeVpnConnectionResponseBody& setTunnelOptionsSpecification(DescribeVpnConnectionResponseBody::TunnelOptionsSpecification && tunnelOptionsSpecification) { DARABONBA_PTR_SET_RVALUE(tunnelOptionsSpecification_, tunnelOptionsSpecification) };


    // vcoHealthCheck Field Functions 
    bool hasVcoHealthCheck() const { return this->vcoHealthCheck_ != nullptr;};
    void deleteVcoHealthCheck() { this->vcoHealthCheck_ = nullptr;};
    inline const DescribeVpnConnectionResponseBody::VcoHealthCheck & getVcoHealthCheck() const { DARABONBA_PTR_GET_CONST(vcoHealthCheck_, DescribeVpnConnectionResponseBody::VcoHealthCheck) };
    inline DescribeVpnConnectionResponseBody::VcoHealthCheck getVcoHealthCheck() { DARABONBA_PTR_GET(vcoHealthCheck_, DescribeVpnConnectionResponseBody::VcoHealthCheck) };
    inline DescribeVpnConnectionResponseBody& setVcoHealthCheck(const DescribeVpnConnectionResponseBody::VcoHealthCheck & vcoHealthCheck) { DARABONBA_PTR_SET_VALUE(vcoHealthCheck_, vcoHealthCheck) };
    inline DescribeVpnConnectionResponseBody& setVcoHealthCheck(DescribeVpnConnectionResponseBody::VcoHealthCheck && vcoHealthCheck) { DARABONBA_PTR_SET_RVALUE(vcoHealthCheck_, vcoHealthCheck) };


    // vpnBgpConfig Field Functions 
    bool hasVpnBgpConfig() const { return this->vpnBgpConfig_ != nullptr;};
    void deleteVpnBgpConfig() { this->vpnBgpConfig_ = nullptr;};
    inline const DescribeVpnConnectionResponseBody::VpnBgpConfig & getVpnBgpConfig() const { DARABONBA_PTR_GET_CONST(vpnBgpConfig_, DescribeVpnConnectionResponseBody::VpnBgpConfig) };
    inline DescribeVpnConnectionResponseBody::VpnBgpConfig getVpnBgpConfig() { DARABONBA_PTR_GET(vpnBgpConfig_, DescribeVpnConnectionResponseBody::VpnBgpConfig) };
    inline DescribeVpnConnectionResponseBody& setVpnBgpConfig(const DescribeVpnConnectionResponseBody::VpnBgpConfig & vpnBgpConfig) { DARABONBA_PTR_SET_VALUE(vpnBgpConfig_, vpnBgpConfig) };
    inline DescribeVpnConnectionResponseBody& setVpnBgpConfig(DescribeVpnConnectionResponseBody::VpnBgpConfig && vpnBgpConfig) { DARABONBA_PTR_SET_RVALUE(vpnBgpConfig_, vpnBgpConfig) };


    // vpnConnectionId Field Functions 
    bool hasVpnConnectionId() const { return this->vpnConnectionId_ != nullptr;};
    void deleteVpnConnectionId() { this->vpnConnectionId_ = nullptr;};
    inline string getVpnConnectionId() const { DARABONBA_PTR_GET_DEFAULT(vpnConnectionId_, "") };
    inline DescribeVpnConnectionResponseBody& setVpnConnectionId(string vpnConnectionId) { DARABONBA_PTR_SET_VALUE(vpnConnectionId_, vpnConnectionId) };


    // vpnGatewayId Field Functions 
    bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
    void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
    inline string getVpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
    inline DescribeVpnConnectionResponseBody& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


    // zoneNo Field Functions 
    bool hasZoneNo() const { return this->zoneNo_ != nullptr;};
    void deleteZoneNo() { this->zoneNo_ = nullptr;};
    inline string getZoneNo() const { DARABONBA_PTR_GET_DEFAULT(zoneNo_, "") };
    inline DescribeVpnConnectionResponseBody& setZoneNo(string zoneNo) { DARABONBA_PTR_SET_VALUE(zoneNo_, zoneNo) };


  protected:
    // The ID of the CEN instance to which the transit router belongs.
    shared_ptr<string> attachInstanceId_ {};
    // The type of the resource that is associated with the IPsec-VPN connection. Valid values:
    // 
    // *   **CEN**: indicates that the IPsec-VPN connection is associated with a transit router of a Cloud Enterprise Network (CEN) instance.
    // *   **NO_ASSOCIATED**: indicates that the IPsec-VPN connection is not associated with any resource.
    // *   **VPNGW**: indicates that the IPsec-VPN connection is associated with a VPN gateway.
    shared_ptr<string> attachType_ {};
    // The timestamp generated when the IPsec-VPN connection was established. Unit: milliseconds.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> createTime_ {};
    // Indicates whether the IPsec-VPN connection is associated with a transit router that belongs to another Alibaba Cloud account. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> crossAccountAuthorized_ {};
    // The ID of the customer gateway associated with the IPsec-VPN connection.
    shared_ptr<string> customerGatewayId_ {};
    // Indicates whether IPsec negotiations immediately start after the configuration takes effect. Valid values:
    // 
    // *   **true**: Negotiations are reinitiated after the configuration is changed.
    // *   **false**: Negotiations are reinitiated after traffic is detected.
    shared_ptr<bool> effectImmediately_ {};
    // Indicates whether the dead peer detection (DPD) feature is enabled for the IPsec-VPN connection. Valid values:
    // 
    // *   **false**
    // *   **true**
    // 
    // After you enable the DPD feature, the initiator of the IPsec-VPN connection sends DPD packets to check the existence and availability of the peer. If no response is received from the peer within a specified period of time, the connection fails. Then, the ISAKMP security association (SA), IPsec SA, and IPsec tunnel are deleted.
    shared_ptr<bool> enableDpd_ {};
    // Indicates whether NAT traversal is enabled for the IPsec-VPN connection. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // After NAT traversal is enabled, the initiator does not check the UDP ports during IKE negotiations and can automatically discover NAT gateway devices along the IPsec tunnel.
    shared_ptr<bool> enableNatTraversal_ {};
    // Indicates whether BGP is enabled for the tunnel. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> enableTunnelsBgp_ {};
    // The configuration of Phase 1 negotiations.
    shared_ptr<DescribeVpnConnectionResponseBody::IkeConfig> ikeConfig_ {};
    // The gateway IP address of the IPsec-VPN connection.
    shared_ptr<string> internetIp_ {};
    // The configuration of Phase 2 negotiations.
    shared_ptr<DescribeVpnConnectionResponseBody::IpsecConfig> ipsecConfig_ {};
    // The CIDR block on the Alibaba Cloud side.
    // 
    // Multiple CIDR blocks are separated by commas (,).
    shared_ptr<string> localSubnet_ {};
    // The name of the IPsec-VPN connection.
    shared_ptr<string> name_ {};
    // The network type of the IPsec-VPN connection. Valid values:
    // 
    // *   **public**: an encrypted connection over the Internet
    // *   **private**: an encrypted connection over private networks
    shared_ptr<string> networkType_ {};
    // The certificate authority (CA) certificate of the peer.
    shared_ptr<string> remoteCaCertificate_ {};
    // The CIDR block on the data center side.
    // 
    // Multiple CIDR blocks are separated by commas (,).
    shared_ptr<string> remoteSubnet_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group to which the IPsec-VPN connection belongs.
    // 
    // You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/158855.html) operation to query the resource group information.
    shared_ptr<string> resourceGroupId_ {};
    // The bandwidth specification of the IPsec-VPN connection. Unit: **Mbit/s**.
    shared_ptr<string> spec_ {};
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
    shared_ptr<string> state_ {};
    // The state of the IPsec-VPN connection. Valid values:
    // 
    // *   **ike_sa_not_established**: Phase 1 negotiations failed.
    // *   **ike_sa_established**: Phase 1 negotiations succeeded.
    // *   **ipsec_sa_not_established**: Phase 2 negotiations failed.
    // *   **ipsec_sa_established**: Phase 2 negotiations succeeded.
    shared_ptr<string> status_ {};
    // The list of tags added to the IPsec-VPN connection.
    shared_ptr<DescribeVpnConnectionResponseBody::Tags> tags_ {};
    // The ID of the transit router with which the IPsec-VPN connection is associated.
    shared_ptr<string> transitRouterId_ {};
    // The name of the transit router.
    shared_ptr<string> transitRouterName_ {};
    // The tunnel configurations of the IPsec-VPN connection.
    // 
    // Parameters in **TunnelOptionsSpecification** are returned only if you query an IPsec-VPN connection in dual-tunnel mode.
    shared_ptr<DescribeVpnConnectionResponseBody::TunnelOptionsSpecification> tunnelOptionsSpecification_ {};
    // The health check information about the IPsec-VPN connection.
    shared_ptr<DescribeVpnConnectionResponseBody::VcoHealthCheck> vcoHealthCheck_ {};
    // The Border Gateway Protocol (BGP) configuration of the IPsec-VPN connection.
    shared_ptr<DescribeVpnConnectionResponseBody::VpnBgpConfig> vpnBgpConfig_ {};
    // The ID of the IPsec-VPN connection.
    shared_ptr<string> vpnConnectionId_ {};
    // The ID of the VPN gateway.
    shared_ptr<string> vpnGatewayId_ {};
    // The ID of the zone where the IPsec-VPN connection is deployed.
    // 
    // You can call [DescribeZones](https://help.aliyun.com/document_detail/36064.html) to query zone IDs and mapping between zone IDs and zone names.
    shared_ptr<string> zoneNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
