// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNCONNECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNCONNECTIONSRESPONSEBODY_HPP_
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
  class DescribeVpnConnectionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnConnectionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpnConnections, vpnConnections_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnConnectionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpnConnections, vpnConnections_);
    };
    DescribeVpnConnectionsResponseBody() = default ;
    DescribeVpnConnectionsResponseBody(const DescribeVpnConnectionsResponseBody &) = default ;
    DescribeVpnConnectionsResponseBody(DescribeVpnConnectionsResponseBody &&) = default ;
    DescribeVpnConnectionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnConnectionsResponseBody() = default ;
    DescribeVpnConnectionsResponseBody& operator=(const DescribeVpnConnectionsResponseBody &) = default ;
    DescribeVpnConnectionsResponseBody& operator=(DescribeVpnConnectionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VpnConnections : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VpnConnections& obj) { 
        DARABONBA_PTR_TO_JSON(VpnConnection, vpnConnection_);
      };
      friend void from_json(const Darabonba::Json& j, VpnConnections& obj) { 
        DARABONBA_PTR_FROM_JSON(VpnConnection, vpnConnection_);
      };
      VpnConnections() = default ;
      VpnConnections(const VpnConnections &) = default ;
      VpnConnections(VpnConnections &&) = default ;
      VpnConnections(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VpnConnections() = default ;
      VpnConnections& operator=(const VpnConnections &) = default ;
      VpnConnections& operator=(VpnConnections &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VpnConnection : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VpnConnection& obj) { 
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
          DARABONBA_PTR_TO_JSON(TunnelBandwidth, tunnelBandwidth_);
          DARABONBA_PTR_TO_JSON(TunnelOptionsSpecification, tunnelOptionsSpecification_);
          DARABONBA_PTR_TO_JSON(VcoHealthCheck, vcoHealthCheck_);
          DARABONBA_PTR_TO_JSON(VpnBgpConfig, vpnBgpConfig_);
          DARABONBA_PTR_TO_JSON(VpnConnectionId, vpnConnectionId_);
          DARABONBA_PTR_TO_JSON(VpnGatewayId, vpnGatewayId_);
        };
        friend void from_json(const Darabonba::Json& j, VpnConnection& obj) { 
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
          DARABONBA_PTR_FROM_JSON(TunnelBandwidth, tunnelBandwidth_);
          DARABONBA_PTR_FROM_JSON(TunnelOptionsSpecification, tunnelOptionsSpecification_);
          DARABONBA_PTR_FROM_JSON(VcoHealthCheck, vcoHealthCheck_);
          DARABONBA_PTR_FROM_JSON(VpnBgpConfig, vpnBgpConfig_);
          DARABONBA_PTR_FROM_JSON(VpnConnectionId, vpnConnectionId_);
          DARABONBA_PTR_FROM_JSON(VpnGatewayId, vpnGatewayId_);
        };
        VpnConnection() = default ;
        VpnConnection(const VpnConnection &) = default ;
        VpnConnection(VpnConnection &&) = default ;
        VpnConnection(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VpnConnection() = default ;
        VpnConnection& operator=(const VpnConnection &) = default ;
        VpnConnection& operator=(VpnConnection &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VpnBgpConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VpnBgpConfig& obj) { 
            DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
            DARABONBA_PTR_TO_JSON(LocalAsn, localAsn_);
            DARABONBA_PTR_TO_JSON(LocalBgpIp, localBgpIp_);
            DARABONBA_PTR_TO_JSON(PeerAsn, peerAsn_);
            DARABONBA_PTR_TO_JSON(PeerBgpIp, peerBgpIp_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(TunnelCidr, tunnelCidr_);
          };
          friend void from_json(const Darabonba::Json& j, VpnBgpConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
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
        && this->localAsn_ == nullptr && this->localBgpIp_ == nullptr && this->peerAsn_ == nullptr && this->peerBgpIp_ == nullptr && this->status_ == nullptr
        && this->tunnelCidr_ == nullptr; };
          // authKey Field Functions 
          bool hasAuthKey() const { return this->authKey_ != nullptr;};
          void deleteAuthKey() { this->authKey_ = nullptr;};
          inline string getAuthKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
          inline VpnBgpConfig& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


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
          // BGP路由协议的认证密钥。
          shared_ptr<string> authKey_ {};
          // 阿里云侧自治系统号。
          shared_ptr<int64_t> localAsn_ {};
          // 阿里云侧BGP地址。
          shared_ptr<string> localBgpIp_ {};
          // 对端自治系统号。
          shared_ptr<int64_t> peerAsn_ {};
          // 对端BGP地址。
          shared_ptr<string> peerBgpIp_ {};
          // BGP路由协议的协商状态。
          // 
          // - **success**：正常。
          // 
          // - **false**：异常。
          shared_ptr<string> status_ {};
          // IPsec连接BGP网段。该网段是一个在169.254.0.0/16内的子网掩码长度为30的网段。
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
          // 目的IP地址。
          shared_ptr<string> dip_ {};
          // 健康检查的开启状态。
          // 
          // - **true**：已开启。
          // 
          // - **false**：未开启。
          shared_ptr<string> enable_ {};
          // 健康检查的时间间隔。单位：秒。
          shared_ptr<int32_t> interval_ {};
          // 健康检查失败时是否撤销已发布的路由。
          // 
          // - **revoke_route**：撤销路由。
          // - **reserve_route**：不撤销路由。
          shared_ptr<string> policy_ {};
          // 健康检查的重试发包次数。
          shared_ptr<int32_t> retry_ {};
          // 源IP地址。
          shared_ptr<string> sip_ {};
          // 健康检查状态。
          // 
          // - **success**：正常。
          // - **failed**：异常。
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
              // IPsec阶段认证算法。
              shared_ptr<string> ipsecAuthAlg_ {};
              // IPsec阶段加密算法。
              shared_ptr<string> ipsecEncAlg_ {};
              // IPsec阶段生存时间。单位：秒。
              shared_ptr<string> ipsecLifetime_ {};
              // IPsec阶段DH分组。
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
              // IKE阶段认证算法。
              shared_ptr<string> ikeAuthAlg_ {};
              // IKE阶段加密算法。
              shared_ptr<string> ikeEncAlg_ {};
              // IKE阶段生存时间。单位：秒。
              shared_ptr<string> ikeLifetime_ {};
              // IKE协商模式。
              // 
              // - **main**：主模式，协商过程安全性高。
              // - **aggressive**：野蛮模式，协商快速且协商成功率高。
              shared_ptr<string> ikeMode_ {};
              // IKE阶段DH分组。
              shared_ptr<string> ikePfs_ {};
              // IKE协议版本。
              shared_ptr<string> ikeVersion_ {};
              // 隧道本端（阿里云侧）的标识。
              shared_ptr<string> localId_ {};
              // 预共享密钥。
              shared_ptr<string> psk_ {};
              // 隧道对端的标识。
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
              // BGP的协商状态。
              // 
              // - **success**：正常。
              // - **failed**：异常。
              shared_ptr<string> bgpStatus_ {};
              // 隧道本端（阿里云侧）的自治系统号。
              shared_ptr<string> localAsn_ {};
              // 隧道本端（阿里云侧）的BGP地址。
              shared_ptr<string> localBgpIp_ {};
              // 隧道对端的自治系统号。
              shared_ptr<string> peerAsn_ {};
              // 隧道对端的BGP地址。
              shared_ptr<string> peerBgpIp_ {};
              // 隧道的BGP网段。
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
            // 隧道关联的用户网关ID。
            shared_ptr<string> customerGatewayId_ {};
            // 隧道是否已开启DPD（对等体存活检测）功能。
            // - **false**：未开启。
            // - **true**：已开启。
            shared_ptr<string> enableDpd_ {};
            // 隧道是否已开启NAT穿越功能。
            // 
            // - **false**：未开启。
            // - **true**：已开启。
            shared_ptr<string> enableNatTraversal_ {};
            // 隧道的IP地址。
            shared_ptr<string> internetIp_ {};
            // 隧道对端的CA证书。
            // 
            // 仅VPN网关实例的类型为国密型时才会返回当前参数。
            shared_ptr<string> remoteCaCertificate_ {};
            // 隧道的角色。
            // 
            // - **master**：表示当前隧道为主隧道。
            // - **slave**：表示当前隧道为备隧道。
            shared_ptr<string> role_ {};
            // 隧道的状态。
            // 
            // - **active**：状态正常。
            // - **updating**：更新中。
            // - **deleting**：删除中。
            shared_ptr<string> state_ {};
            // IPsec连接的状态。
            // 
            // - **ike_sa_not_established**：第一阶段协商失败。
            // 
            // - **ike_sa_established**：第一阶段协商成功。
            // 
            // - **ipsec_sa_not_established**：第二阶段协商失败。
            // 
            // - **ipsec_sa_established**：第二阶段协商成功。
            shared_ptr<string> status_ {};
            // 隧道的BGP配置信息。
            shared_ptr<TunnelOptions::TunnelBgpConfig> tunnelBgpConfig_ {};
            // 隧道ID。
            shared_ptr<string> tunnelId_ {};
            // 第一阶段协商的配置。
            shared_ptr<TunnelOptions::TunnelIkeConfig> tunnelIkeConfig_ {};
            // 隧道的创建顺序。
            // - **1**：第一条隧道。
            // - **2**：第二条隧道。
            // 
            // > 仅IPsec连接绑定转发路由器时会返回该参数。
            shared_ptr<int32_t> tunnelIndex_ {};
            // 第二阶段协商的配置。
            shared_ptr<TunnelOptions::TunnelIpsecConfig> tunnelIpsecConfig_ {};
            // 隧道部署的可用区。
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

        class Tag : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tag& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tag& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
          class TagItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TagItem& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, TagItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            TagItem() = default ;
            TagItem(const TagItem &) = default ;
            TagItem(TagItem &&) = default ;
            TagItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TagItem() = default ;
            TagItem& operator=(const TagItem &) = default ;
            TagItem& operator=(TagItem &&) = default ;
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
            inline TagItem& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline TagItem& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // 标签键。
            shared_ptr<string> key_ {};
            // 标签值。
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tag::TagItem> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tag::TagItem>) };
          inline vector<Tag::TagItem> getTag() { DARABONBA_PTR_GET(tag_, vector<Tag::TagItem>) };
          inline Tag& setTag(const vector<Tag::TagItem> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tag& setTag(vector<Tag::TagItem> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tag::TagItem>> tag_ {};
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
          // IPsec阶段认证算法。
          shared_ptr<string> ipsecAuthAlg_ {};
          // IPsec阶段加密算法。
          shared_ptr<string> ipsecEncAlg_ {};
          // IPsec阶段生存时间。单位：秒。
          shared_ptr<int64_t> ipsecLifetime_ {};
          // IPsec阶段DH分组。
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
          // IKE阶段认证算法。
          shared_ptr<string> ikeAuthAlg_ {};
          // IKE阶段加密算法。
          shared_ptr<string> ikeEncAlg_ {};
          // IKE阶段生存时间。单位：秒。
          shared_ptr<int64_t> ikeLifetime_ {};
          // IKE阶段协商模式。
          // 
          // - **main**：主模式，协商过程安全性高。
          // - **aggressive**：野蛮模式，协商快速且协商成功率高。
          shared_ptr<string> ikeMode_ {};
          // IKE阶段DH分组。
          shared_ptr<string> ikePfs_ {};
          // IKE协议版本。
          // 
          // - **ikev1**
          // - **ikev2**
          // 
          // 相对于IKEv1版本，IKEv2版本简化了SA的协商过程并且对于多网段的场景提供了更好的支持。
          shared_ptr<string> ikeVersion_ {};
          // IPsec连接对端本地数据中心侧的标识。
          shared_ptr<string> localId_ {};
          // 预共享密钥。
          shared_ptr<string> psk_ {};
          // IPsec连接阿里云侧的标识。
          shared_ptr<string> remoteId_ {};
        };

        virtual bool empty() const override { return this->attachInstanceId_ == nullptr
        && this->attachType_ == nullptr && this->createTime_ == nullptr && this->crossAccountAuthorized_ == nullptr && this->customerGatewayId_ == nullptr && this->effectImmediately_ == nullptr
        && this->enableDpd_ == nullptr && this->enableNatTraversal_ == nullptr && this->enableTunnelsBgp_ == nullptr && this->ikeConfig_ == nullptr && this->internetIp_ == nullptr
        && this->ipsecConfig_ == nullptr && this->localSubnet_ == nullptr && this->name_ == nullptr && this->networkType_ == nullptr && this->remoteCaCertificate_ == nullptr
        && this->remoteSubnet_ == nullptr && this->resourceGroupId_ == nullptr && this->spec_ == nullptr && this->state_ == nullptr && this->status_ == nullptr
        && this->tag_ == nullptr && this->transitRouterId_ == nullptr && this->transitRouterName_ == nullptr && this->tunnelBandwidth_ == nullptr && this->tunnelOptionsSpecification_ == nullptr
        && this->vcoHealthCheck_ == nullptr && this->vpnBgpConfig_ == nullptr && this->vpnConnectionId_ == nullptr && this->vpnGatewayId_ == nullptr; };
        // attachInstanceId Field Functions 
        bool hasAttachInstanceId() const { return this->attachInstanceId_ != nullptr;};
        void deleteAttachInstanceId() { this->attachInstanceId_ = nullptr;};
        inline string getAttachInstanceId() const { DARABONBA_PTR_GET_DEFAULT(attachInstanceId_, "") };
        inline VpnConnection& setAttachInstanceId(string attachInstanceId) { DARABONBA_PTR_SET_VALUE(attachInstanceId_, attachInstanceId) };


        // attachType Field Functions 
        bool hasAttachType() const { return this->attachType_ != nullptr;};
        void deleteAttachType() { this->attachType_ = nullptr;};
        inline string getAttachType() const { DARABONBA_PTR_GET_DEFAULT(attachType_, "") };
        inline VpnConnection& setAttachType(string attachType) { DARABONBA_PTR_SET_VALUE(attachType_, attachType) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline VpnConnection& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // crossAccountAuthorized Field Functions 
        bool hasCrossAccountAuthorized() const { return this->crossAccountAuthorized_ != nullptr;};
        void deleteCrossAccountAuthorized() { this->crossAccountAuthorized_ = nullptr;};
        inline bool getCrossAccountAuthorized() const { DARABONBA_PTR_GET_DEFAULT(crossAccountAuthorized_, false) };
        inline VpnConnection& setCrossAccountAuthorized(bool crossAccountAuthorized) { DARABONBA_PTR_SET_VALUE(crossAccountAuthorized_, crossAccountAuthorized) };


        // customerGatewayId Field Functions 
        bool hasCustomerGatewayId() const { return this->customerGatewayId_ != nullptr;};
        void deleteCustomerGatewayId() { this->customerGatewayId_ = nullptr;};
        inline string getCustomerGatewayId() const { DARABONBA_PTR_GET_DEFAULT(customerGatewayId_, "") };
        inline VpnConnection& setCustomerGatewayId(string customerGatewayId) { DARABONBA_PTR_SET_VALUE(customerGatewayId_, customerGatewayId) };


        // effectImmediately Field Functions 
        bool hasEffectImmediately() const { return this->effectImmediately_ != nullptr;};
        void deleteEffectImmediately() { this->effectImmediately_ = nullptr;};
        inline bool getEffectImmediately() const { DARABONBA_PTR_GET_DEFAULT(effectImmediately_, false) };
        inline VpnConnection& setEffectImmediately(bool effectImmediately) { DARABONBA_PTR_SET_VALUE(effectImmediately_, effectImmediately) };


        // enableDpd Field Functions 
        bool hasEnableDpd() const { return this->enableDpd_ != nullptr;};
        void deleteEnableDpd() { this->enableDpd_ = nullptr;};
        inline bool getEnableDpd() const { DARABONBA_PTR_GET_DEFAULT(enableDpd_, false) };
        inline VpnConnection& setEnableDpd(bool enableDpd) { DARABONBA_PTR_SET_VALUE(enableDpd_, enableDpd) };


        // enableNatTraversal Field Functions 
        bool hasEnableNatTraversal() const { return this->enableNatTraversal_ != nullptr;};
        void deleteEnableNatTraversal() { this->enableNatTraversal_ = nullptr;};
        inline bool getEnableNatTraversal() const { DARABONBA_PTR_GET_DEFAULT(enableNatTraversal_, false) };
        inline VpnConnection& setEnableNatTraversal(bool enableNatTraversal) { DARABONBA_PTR_SET_VALUE(enableNatTraversal_, enableNatTraversal) };


        // enableTunnelsBgp Field Functions 
        bool hasEnableTunnelsBgp() const { return this->enableTunnelsBgp_ != nullptr;};
        void deleteEnableTunnelsBgp() { this->enableTunnelsBgp_ = nullptr;};
        inline bool getEnableTunnelsBgp() const { DARABONBA_PTR_GET_DEFAULT(enableTunnelsBgp_, false) };
        inline VpnConnection& setEnableTunnelsBgp(bool enableTunnelsBgp) { DARABONBA_PTR_SET_VALUE(enableTunnelsBgp_, enableTunnelsBgp) };


        // ikeConfig Field Functions 
        bool hasIkeConfig() const { return this->ikeConfig_ != nullptr;};
        void deleteIkeConfig() { this->ikeConfig_ = nullptr;};
        inline const VpnConnection::IkeConfig & getIkeConfig() const { DARABONBA_PTR_GET_CONST(ikeConfig_, VpnConnection::IkeConfig) };
        inline VpnConnection::IkeConfig getIkeConfig() { DARABONBA_PTR_GET(ikeConfig_, VpnConnection::IkeConfig) };
        inline VpnConnection& setIkeConfig(const VpnConnection::IkeConfig & ikeConfig) { DARABONBA_PTR_SET_VALUE(ikeConfig_, ikeConfig) };
        inline VpnConnection& setIkeConfig(VpnConnection::IkeConfig && ikeConfig) { DARABONBA_PTR_SET_RVALUE(ikeConfig_, ikeConfig) };


        // internetIp Field Functions 
        bool hasInternetIp() const { return this->internetIp_ != nullptr;};
        void deleteInternetIp() { this->internetIp_ = nullptr;};
        inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
        inline VpnConnection& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


        // ipsecConfig Field Functions 
        bool hasIpsecConfig() const { return this->ipsecConfig_ != nullptr;};
        void deleteIpsecConfig() { this->ipsecConfig_ = nullptr;};
        inline const VpnConnection::IpsecConfig & getIpsecConfig() const { DARABONBA_PTR_GET_CONST(ipsecConfig_, VpnConnection::IpsecConfig) };
        inline VpnConnection::IpsecConfig getIpsecConfig() { DARABONBA_PTR_GET(ipsecConfig_, VpnConnection::IpsecConfig) };
        inline VpnConnection& setIpsecConfig(const VpnConnection::IpsecConfig & ipsecConfig) { DARABONBA_PTR_SET_VALUE(ipsecConfig_, ipsecConfig) };
        inline VpnConnection& setIpsecConfig(VpnConnection::IpsecConfig && ipsecConfig) { DARABONBA_PTR_SET_RVALUE(ipsecConfig_, ipsecConfig) };


        // localSubnet Field Functions 
        bool hasLocalSubnet() const { return this->localSubnet_ != nullptr;};
        void deleteLocalSubnet() { this->localSubnet_ = nullptr;};
        inline string getLocalSubnet() const { DARABONBA_PTR_GET_DEFAULT(localSubnet_, "") };
        inline VpnConnection& setLocalSubnet(string localSubnet) { DARABONBA_PTR_SET_VALUE(localSubnet_, localSubnet) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline VpnConnection& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline VpnConnection& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // remoteCaCertificate Field Functions 
        bool hasRemoteCaCertificate() const { return this->remoteCaCertificate_ != nullptr;};
        void deleteRemoteCaCertificate() { this->remoteCaCertificate_ = nullptr;};
        inline string getRemoteCaCertificate() const { DARABONBA_PTR_GET_DEFAULT(remoteCaCertificate_, "") };
        inline VpnConnection& setRemoteCaCertificate(string remoteCaCertificate) { DARABONBA_PTR_SET_VALUE(remoteCaCertificate_, remoteCaCertificate) };


        // remoteSubnet Field Functions 
        bool hasRemoteSubnet() const { return this->remoteSubnet_ != nullptr;};
        void deleteRemoteSubnet() { this->remoteSubnet_ = nullptr;};
        inline string getRemoteSubnet() const { DARABONBA_PTR_GET_DEFAULT(remoteSubnet_, "") };
        inline VpnConnection& setRemoteSubnet(string remoteSubnet) { DARABONBA_PTR_SET_VALUE(remoteSubnet_, remoteSubnet) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline VpnConnection& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline VpnConnection& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline VpnConnection& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline VpnConnection& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline const VpnConnection::Tag & getTag() const { DARABONBA_PTR_GET_CONST(tag_, VpnConnection::Tag) };
        inline VpnConnection::Tag getTag() { DARABONBA_PTR_GET(tag_, VpnConnection::Tag) };
        inline VpnConnection& setTag(const VpnConnection::Tag & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
        inline VpnConnection& setTag(VpnConnection::Tag && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        // transitRouterId Field Functions 
        bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
        void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
        inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
        inline VpnConnection& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


        // transitRouterName Field Functions 
        bool hasTransitRouterName() const { return this->transitRouterName_ != nullptr;};
        void deleteTransitRouterName() { this->transitRouterName_ = nullptr;};
        inline string getTransitRouterName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterName_, "") };
        inline VpnConnection& setTransitRouterName(string transitRouterName) { DARABONBA_PTR_SET_VALUE(transitRouterName_, transitRouterName) };


        // tunnelBandwidth Field Functions 
        bool hasTunnelBandwidth() const { return this->tunnelBandwidth_ != nullptr;};
        void deleteTunnelBandwidth() { this->tunnelBandwidth_ = nullptr;};
        inline string getTunnelBandwidth() const { DARABONBA_PTR_GET_DEFAULT(tunnelBandwidth_, "") };
        inline VpnConnection& setTunnelBandwidth(string tunnelBandwidth) { DARABONBA_PTR_SET_VALUE(tunnelBandwidth_, tunnelBandwidth) };


        // tunnelOptionsSpecification Field Functions 
        bool hasTunnelOptionsSpecification() const { return this->tunnelOptionsSpecification_ != nullptr;};
        void deleteTunnelOptionsSpecification() { this->tunnelOptionsSpecification_ = nullptr;};
        inline const VpnConnection::TunnelOptionsSpecification & getTunnelOptionsSpecification() const { DARABONBA_PTR_GET_CONST(tunnelOptionsSpecification_, VpnConnection::TunnelOptionsSpecification) };
        inline VpnConnection::TunnelOptionsSpecification getTunnelOptionsSpecification() { DARABONBA_PTR_GET(tunnelOptionsSpecification_, VpnConnection::TunnelOptionsSpecification) };
        inline VpnConnection& setTunnelOptionsSpecification(const VpnConnection::TunnelOptionsSpecification & tunnelOptionsSpecification) { DARABONBA_PTR_SET_VALUE(tunnelOptionsSpecification_, tunnelOptionsSpecification) };
        inline VpnConnection& setTunnelOptionsSpecification(VpnConnection::TunnelOptionsSpecification && tunnelOptionsSpecification) { DARABONBA_PTR_SET_RVALUE(tunnelOptionsSpecification_, tunnelOptionsSpecification) };


        // vcoHealthCheck Field Functions 
        bool hasVcoHealthCheck() const { return this->vcoHealthCheck_ != nullptr;};
        void deleteVcoHealthCheck() { this->vcoHealthCheck_ = nullptr;};
        inline const VpnConnection::VcoHealthCheck & getVcoHealthCheck() const { DARABONBA_PTR_GET_CONST(vcoHealthCheck_, VpnConnection::VcoHealthCheck) };
        inline VpnConnection::VcoHealthCheck getVcoHealthCheck() { DARABONBA_PTR_GET(vcoHealthCheck_, VpnConnection::VcoHealthCheck) };
        inline VpnConnection& setVcoHealthCheck(const VpnConnection::VcoHealthCheck & vcoHealthCheck) { DARABONBA_PTR_SET_VALUE(vcoHealthCheck_, vcoHealthCheck) };
        inline VpnConnection& setVcoHealthCheck(VpnConnection::VcoHealthCheck && vcoHealthCheck) { DARABONBA_PTR_SET_RVALUE(vcoHealthCheck_, vcoHealthCheck) };


        // vpnBgpConfig Field Functions 
        bool hasVpnBgpConfig() const { return this->vpnBgpConfig_ != nullptr;};
        void deleteVpnBgpConfig() { this->vpnBgpConfig_ = nullptr;};
        inline const VpnConnection::VpnBgpConfig & getVpnBgpConfig() const { DARABONBA_PTR_GET_CONST(vpnBgpConfig_, VpnConnection::VpnBgpConfig) };
        inline VpnConnection::VpnBgpConfig getVpnBgpConfig() { DARABONBA_PTR_GET(vpnBgpConfig_, VpnConnection::VpnBgpConfig) };
        inline VpnConnection& setVpnBgpConfig(const VpnConnection::VpnBgpConfig & vpnBgpConfig) { DARABONBA_PTR_SET_VALUE(vpnBgpConfig_, vpnBgpConfig) };
        inline VpnConnection& setVpnBgpConfig(VpnConnection::VpnBgpConfig && vpnBgpConfig) { DARABONBA_PTR_SET_RVALUE(vpnBgpConfig_, vpnBgpConfig) };


        // vpnConnectionId Field Functions 
        bool hasVpnConnectionId() const { return this->vpnConnectionId_ != nullptr;};
        void deleteVpnConnectionId() { this->vpnConnectionId_ = nullptr;};
        inline string getVpnConnectionId() const { DARABONBA_PTR_GET_DEFAULT(vpnConnectionId_, "") };
        inline VpnConnection& setVpnConnectionId(string vpnConnectionId) { DARABONBA_PTR_SET_VALUE(vpnConnectionId_, vpnConnectionId) };


        // vpnGatewayId Field Functions 
        bool hasVpnGatewayId() const { return this->vpnGatewayId_ != nullptr;};
        void deleteVpnGatewayId() { this->vpnGatewayId_ = nullptr;};
        inline string getVpnGatewayId() const { DARABONBA_PTR_GET_DEFAULT(vpnGatewayId_, "") };
        inline VpnConnection& setVpnGatewayId(string vpnGatewayId) { DARABONBA_PTR_SET_VALUE(vpnGatewayId_, vpnGatewayId) };


      protected:
        // 转发路由器实例所属的云企业网实例ID。
        shared_ptr<string> attachInstanceId_ {};
        // IPsec连接绑定的资源类型。
        // 
        // - **CEN**：表示IPsec连接已绑定云企业网实例下的转发路由器实例。
        // - **NO_ASSOCIATED**：表示IPsec连接未绑定任何资源。
        // - **VPNGW**：表示IPsec连接绑定了VPN网关实例。
        shared_ptr<string> attachType_ {};
        // 创建IPsec连接的时间戳。单位：毫秒。
        // 
        // 时间戳的格式采用Unix时间戳，表示从格林威治时间1970年01月01日00时00分00秒至创建IPsec连接时的总时长。
        shared_ptr<int64_t> createTime_ {};
        // IPsec连接是否绑定了跨账号的转发路由器实例。
        // 
        // - **true**：是。
        // - **false**：否。
        shared_ptr<bool> crossAccountAuthorized_ {};
        // IPsec连接关联的用户网关的实例ID。
        shared_ptr<string> customerGatewayId_ {};
        // IPsec连接的配置是否立即生效。
        // 
        // - **true**：是，配置变更完成后触发重连。
        // - **false**：否，有流量时触发重连。
        shared_ptr<bool> effectImmediately_ {};
        // IPsec连接是否已开启DPD（对等体存活检测）功能。
        // 
        // - **true**：开启DPD功能。
        // 
        //     IPsec发起端会发送DPD报文用来检测对端的设备是否存活，如果在设定时间内未收到正确回应则认为对端已经断线，IPsec将删除ISAKMP SA和相应的IPsec SA，安全隧道同样也会被删除。
        // 
        // - **false**：不开启DPD功能，IPsec发起端不会发送DPD探测报文。
        shared_ptr<bool> enableDpd_ {};
        // IPsec连接是否已开启NAT穿越功能。
        // 
        // - **true**：开启NAT穿越功能。
        // 
        //    开启后，IKE协商过程会删除对UDP端口号的验证过程，同时实现对VPN隧道中NAT网关设备的发现功能。
        // 
        // - **false**：不开启NAT穿越功能。
        shared_ptr<bool> enableNatTraversal_ {};
        // 隧道BGP的开启状态。
        // 
        // - **true**：已开启。
        // - **false**：未开启。
        shared_ptr<bool> enableTunnelsBgp_ {};
        // 第一阶段协商的配置。
        shared_ptr<VpnConnection::IkeConfig> ikeConfig_ {};
        // IPsec连接的网关IP地址。
        // 
        // > 仅IPsec连接绑定转发路由器实例时会返回当前参数。
        shared_ptr<string> internetIp_ {};
        // 第二阶段协商的配置。
        shared_ptr<VpnConnection::IpsecConfig> ipsecConfig_ {};
        // IPsec连接阿里云侧的网段。
        // 
        // 在多个网段的情况下，网段之间使用半角逗号（,）分隔。
        shared_ptr<string> localSubnet_ {};
        // IPsec连接的名称。
        shared_ptr<string> name_ {};
        // IPsec连接的网络类型。
        // 
        // - **public**：公网，表示IPsec连接通过公网建立加密通信通道。
        // - **private**：私网，表示IPsec连接通过私网建立加密通信通道。
        shared_ptr<string> networkType_ {};
        // 对端的CA证书。
        shared_ptr<string> remoteCaCertificate_ {};
        // 本地数据中心侧的网段。
        // 
        // 在多个网段的情况下，网段之间使用半角逗号（,）分隔。
        shared_ptr<string> remoteSubnet_ {};
        // IPsec连接所属的资源组ID。
        // 
        // 您可以调用[ListResourceGroups](https://help.aliyun.com/document_detail/158855.html)接口查询资源组信息。
        shared_ptr<string> resourceGroupId_ {};
        // IPsec连接的带宽规格。单位：**Mbps**。
        shared_ptr<string> spec_ {};
        // IPsec连接与转发路由器实例的绑定状态。
        // 
        // - **active**：IPsec连接已与VPN网关实例绑定，状态正常。
        // - **init**：IPsec连接未绑定任何资源，IPsec连接初始化。
        // - **attaching**：IPsec连接与转发路由器实例绑定中。
        // - **attached**：IPsec连接已与转发路由器实例绑定。
        // - **detaching**：IPsec连接与转发路由器实例解绑中。
        // - **financialLocked**：欠费锁定。
        // - **provisioning**：资源准备中。
        // - **updating**：更新中。
        // - **upgrading**：升级中。
        // - **deleted**：已删除。
        shared_ptr<string> state_ {};
        // IPsec连接的状态。
        // 
        // - **ike_sa_not_established**：第一阶段协商失败。
        // 
        // - **ike_sa_established**：第一阶段协商成功。
        // 
        // - **ipsec_sa_not_established**：第二阶段协商失败。
        // 
        // - **ipsec_sa_established**：第二阶段协商成功。
        shared_ptr<string> status_ {};
        // IPsec连接绑定的标签列表。
        shared_ptr<VpnConnection::Tag> tag_ {};
        // IPsec连接绑定的转发路由器实例ID。
        shared_ptr<string> transitRouterId_ {};
        // 转发路由器实例的名称。
        shared_ptr<string> transitRouterName_ {};
        // 用于说明VPN单条隧道的带宽规格，取值：
        // Standard（默认值）：标准型，默认带宽1Gbps
        // Large（大型）：大型，默认带宽3Gbps
        shared_ptr<string> tunnelBandwidth_ {};
        // IPsec连接的隧道配置信息。
        // 
        // 仅查询双隧道模式的IPsec连接会返回**TunnelOptionsSpecification**数组下的参数。
        shared_ptr<VpnConnection::TunnelOptionsSpecification> tunnelOptionsSpecification_ {};
        // IPsec连接的健康检查配置。
        shared_ptr<VpnConnection::VcoHealthCheck> vcoHealthCheck_ {};
        // IPsec连接BGP路由协议的配置。
        shared_ptr<VpnConnection::VpnBgpConfig> vpnBgpConfig_ {};
        // IPsec连接的ID。
        shared_ptr<string> vpnConnectionId_ {};
        // VPN网关的实例ID。
        shared_ptr<string> vpnGatewayId_ {};
      };

      virtual bool empty() const override { return this->vpnConnection_ == nullptr; };
      // vpnConnection Field Functions 
      bool hasVpnConnection() const { return this->vpnConnection_ != nullptr;};
      void deleteVpnConnection() { this->vpnConnection_ = nullptr;};
      inline const vector<VpnConnections::VpnConnection> & getVpnConnection() const { DARABONBA_PTR_GET_CONST(vpnConnection_, vector<VpnConnections::VpnConnection>) };
      inline vector<VpnConnections::VpnConnection> getVpnConnection() { DARABONBA_PTR_GET(vpnConnection_, vector<VpnConnections::VpnConnection>) };
      inline VpnConnections& setVpnConnection(const vector<VpnConnections::VpnConnection> & vpnConnection) { DARABONBA_PTR_SET_VALUE(vpnConnection_, vpnConnection) };
      inline VpnConnections& setVpnConnection(vector<VpnConnections::VpnConnection> && vpnConnection) { DARABONBA_PTR_SET_RVALUE(vpnConnection_, vpnConnection) };


    protected:
      shared_ptr<vector<VpnConnections::VpnConnection>> vpnConnection_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vpnConnections_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVpnConnectionsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVpnConnectionsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpnConnectionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVpnConnectionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpnConnections Field Functions 
    bool hasVpnConnections() const { return this->vpnConnections_ != nullptr;};
    void deleteVpnConnections() { this->vpnConnections_ = nullptr;};
    inline const DescribeVpnConnectionsResponseBody::VpnConnections & getVpnConnections() const { DARABONBA_PTR_GET_CONST(vpnConnections_, DescribeVpnConnectionsResponseBody::VpnConnections) };
    inline DescribeVpnConnectionsResponseBody::VpnConnections getVpnConnections() { DARABONBA_PTR_GET(vpnConnections_, DescribeVpnConnectionsResponseBody::VpnConnections) };
    inline DescribeVpnConnectionsResponseBody& setVpnConnections(const DescribeVpnConnectionsResponseBody::VpnConnections & vpnConnections) { DARABONBA_PTR_SET_VALUE(vpnConnections_, vpnConnections) };
    inline DescribeVpnConnectionsResponseBody& setVpnConnections(DescribeVpnConnectionsResponseBody::VpnConnections && vpnConnections) { DARABONBA_PTR_SET_RVALUE(vpnConnections_, vpnConnections) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<DescribeVpnConnectionsResponseBody::VpnConnections> vpnConnections_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
