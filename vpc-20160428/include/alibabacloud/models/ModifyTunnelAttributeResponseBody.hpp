// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTUNNELATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTUNNELATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyTunnelAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTunnelAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_TO_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_TO_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(RemoteCaCertificate, remoteCaCertificate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TunnelBgpConfig, tunnelBgpConfig_);
      DARABONBA_PTR_TO_JSON(TunnelId, tunnelId_);
      DARABONBA_PTR_TO_JSON(TunnelIkeConfig, tunnelIkeConfig_);
      DARABONBA_PTR_TO_JSON(TunnelIpsecConfig, tunnelIpsecConfig_);
      DARABONBA_PTR_TO_JSON(ZoneNo, zoneNo_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTunnelAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomerGatewayId, customerGatewayId_);
      DARABONBA_PTR_FROM_JSON(EnableDpd, enableDpd_);
      DARABONBA_PTR_FROM_JSON(EnableNatTraversal, enableNatTraversal_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(RemoteCaCertificate, remoteCaCertificate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TunnelBgpConfig, tunnelBgpConfig_);
      DARABONBA_PTR_FROM_JSON(TunnelId, tunnelId_);
      DARABONBA_PTR_FROM_JSON(TunnelIkeConfig, tunnelIkeConfig_);
      DARABONBA_PTR_FROM_JSON(TunnelIpsecConfig, tunnelIpsecConfig_);
      DARABONBA_PTR_FROM_JSON(ZoneNo, zoneNo_);
    };
    ModifyTunnelAttributeResponseBody() = default ;
    ModifyTunnelAttributeResponseBody(const ModifyTunnelAttributeResponseBody &) = default ;
    ModifyTunnelAttributeResponseBody(ModifyTunnelAttributeResponseBody &&) = default ;
    ModifyTunnelAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTunnelAttributeResponseBody() = default ;
    ModifyTunnelAttributeResponseBody& operator=(const ModifyTunnelAttributeResponseBody &) = default ;
    ModifyTunnelAttributeResponseBody& operator=(ModifyTunnelAttributeResponseBody &&) = default ;
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
      // The IPsec authentication algorithm.
      shared_ptr<string> ipsecAuthAlg_ {};
      // The IPsec encryption algorithm.
      shared_ptr<string> ipsecEncAlg_ {};
      // The IPsec lifetime. Unit: seconds.
      shared_ptr<int64_t> ipsecLifetime_ {};
      // The DH group.
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
      // The IKE authentication algorithm.
      shared_ptr<string> ikeAuthAlg_ {};
      // The IKE encryption algorithm.
      shared_ptr<string> ikeEncAlg_ {};
      // The IKE lifetime. Unit: seconds.
      shared_ptr<int64_t> ikeLifetime_ {};
      // The IKE negotiation mode.
      // 
      // *   **main:** This mode offers higher security during negotiations.
      // *   **aggressive**: This mode is faster and has a higher success rate.
      shared_ptr<string> ikeMode_ {};
      // The DH group.
      shared_ptr<string> ikePfs_ {};
      // The IKE version.
      // 
      // *   **ikev1**
      // *   **ikev2**
      // 
      // Compared with IKEv1, IKEv2 simplifies the SA negotiation process and provides better support for scenarios with multiple CIDR blocks.
      shared_ptr<string> ikeVersion_ {};
      // The tunnel identifier. The identifier supports FQDNs and IP addresses. The default value is the tunnel IP address.
      shared_ptr<string> localId_ {};
      // The pre-shared key.
      shared_ptr<string> psk_ {};
      // The peer identifier. The identifier supports FQDNs and IP addresses. The default identifier is the IP address of the customer gateway associated with the tunnel.
      shared_ptr<string> remoteId_ {};
    };

    class TunnelBgpConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TunnelBgpConfig& obj) { 
        DARABONBA_PTR_TO_JSON(EnableBgp, enableBgp_);
        DARABONBA_PTR_TO_JSON(LocalAsn, localAsn_);
        DARABONBA_PTR_TO_JSON(LocalBgpIp, localBgpIp_);
        DARABONBA_PTR_TO_JSON(PeerAsn, peerAsn_);
        DARABONBA_PTR_TO_JSON(PeerBgpIp, peerBgpIp_);
        DARABONBA_PTR_TO_JSON(TunnelCidr, tunnelCidr_);
      };
      friend void from_json(const Darabonba::Json& j, TunnelBgpConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableBgp, enableBgp_);
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
      virtual bool empty() const override { return this->enableBgp_ == nullptr
        && this->localAsn_ == nullptr && this->localBgpIp_ == nullptr && this->peerAsn_ == nullptr && this->peerBgpIp_ == nullptr && this->tunnelCidr_ == nullptr; };
      // enableBgp Field Functions 
      bool hasEnableBgp() const { return this->enableBgp_ != nullptr;};
      void deleteEnableBgp() { this->enableBgp_ = nullptr;};
      inline bool getEnableBgp() const { DARABONBA_PTR_GET_DEFAULT(enableBgp_, false) };
      inline TunnelBgpConfig& setEnableBgp(bool enableBgp) { DARABONBA_PTR_SET_VALUE(enableBgp_, enableBgp) };


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
      // Indicates whether the BGP feature is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> enableBgp_ {};
      // The local ASN.
      shared_ptr<int64_t> localAsn_ {};
      // The BGP IP address of the tunnel.
      shared_ptr<string> localBgpIp_ {};
      // The peer ASN.
      shared_ptr<int64_t> peerAsn_ {};
      // The BGP IP address of the peer.
      shared_ptr<string> peerBgpIp_ {};
      // The CIDR block to which the tunnel BGP IP address belongs.
      shared_ptr<string> tunnelCidr_ {};
    };

    virtual bool empty() const override { return this->customerGatewayId_ == nullptr
        && this->enableDpd_ == nullptr && this->enableNatTraversal_ == nullptr && this->internetIp_ == nullptr && this->remoteCaCertificate_ == nullptr && this->requestId_ == nullptr
        && this->role_ == nullptr && this->state_ == nullptr && this->tunnelBgpConfig_ == nullptr && this->tunnelId_ == nullptr && this->tunnelIkeConfig_ == nullptr
        && this->tunnelIpsecConfig_ == nullptr && this->zoneNo_ == nullptr; };
    // customerGatewayId Field Functions 
    bool hasCustomerGatewayId() const { return this->customerGatewayId_ != nullptr;};
    void deleteCustomerGatewayId() { this->customerGatewayId_ = nullptr;};
    inline string getCustomerGatewayId() const { DARABONBA_PTR_GET_DEFAULT(customerGatewayId_, "") };
    inline ModifyTunnelAttributeResponseBody& setCustomerGatewayId(string customerGatewayId) { DARABONBA_PTR_SET_VALUE(customerGatewayId_, customerGatewayId) };


    // enableDpd Field Functions 
    bool hasEnableDpd() const { return this->enableDpd_ != nullptr;};
    void deleteEnableDpd() { this->enableDpd_ = nullptr;};
    inline bool getEnableDpd() const { DARABONBA_PTR_GET_DEFAULT(enableDpd_, false) };
    inline ModifyTunnelAttributeResponseBody& setEnableDpd(bool enableDpd) { DARABONBA_PTR_SET_VALUE(enableDpd_, enableDpd) };


    // enableNatTraversal Field Functions 
    bool hasEnableNatTraversal() const { return this->enableNatTraversal_ != nullptr;};
    void deleteEnableNatTraversal() { this->enableNatTraversal_ = nullptr;};
    inline bool getEnableNatTraversal() const { DARABONBA_PTR_GET_DEFAULT(enableNatTraversal_, false) };
    inline ModifyTunnelAttributeResponseBody& setEnableNatTraversal(bool enableNatTraversal) { DARABONBA_PTR_SET_VALUE(enableNatTraversal_, enableNatTraversal) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ModifyTunnelAttributeResponseBody& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // remoteCaCertificate Field Functions 
    bool hasRemoteCaCertificate() const { return this->remoteCaCertificate_ != nullptr;};
    void deleteRemoteCaCertificate() { this->remoteCaCertificate_ = nullptr;};
    inline string getRemoteCaCertificate() const { DARABONBA_PTR_GET_DEFAULT(remoteCaCertificate_, "") };
    inline ModifyTunnelAttributeResponseBody& setRemoteCaCertificate(string remoteCaCertificate) { DARABONBA_PTR_SET_VALUE(remoteCaCertificate_, remoteCaCertificate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyTunnelAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline ModifyTunnelAttributeResponseBody& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ModifyTunnelAttributeResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // tunnelBgpConfig Field Functions 
    bool hasTunnelBgpConfig() const { return this->tunnelBgpConfig_ != nullptr;};
    void deleteTunnelBgpConfig() { this->tunnelBgpConfig_ = nullptr;};
    inline const ModifyTunnelAttributeResponseBody::TunnelBgpConfig & getTunnelBgpConfig() const { DARABONBA_PTR_GET_CONST(tunnelBgpConfig_, ModifyTunnelAttributeResponseBody::TunnelBgpConfig) };
    inline ModifyTunnelAttributeResponseBody::TunnelBgpConfig getTunnelBgpConfig() { DARABONBA_PTR_GET(tunnelBgpConfig_, ModifyTunnelAttributeResponseBody::TunnelBgpConfig) };
    inline ModifyTunnelAttributeResponseBody& setTunnelBgpConfig(const ModifyTunnelAttributeResponseBody::TunnelBgpConfig & tunnelBgpConfig) { DARABONBA_PTR_SET_VALUE(tunnelBgpConfig_, tunnelBgpConfig) };
    inline ModifyTunnelAttributeResponseBody& setTunnelBgpConfig(ModifyTunnelAttributeResponseBody::TunnelBgpConfig && tunnelBgpConfig) { DARABONBA_PTR_SET_RVALUE(tunnelBgpConfig_, tunnelBgpConfig) };


    // tunnelId Field Functions 
    bool hasTunnelId() const { return this->tunnelId_ != nullptr;};
    void deleteTunnelId() { this->tunnelId_ = nullptr;};
    inline string getTunnelId() const { DARABONBA_PTR_GET_DEFAULT(tunnelId_, "") };
    inline ModifyTunnelAttributeResponseBody& setTunnelId(string tunnelId) { DARABONBA_PTR_SET_VALUE(tunnelId_, tunnelId) };


    // tunnelIkeConfig Field Functions 
    bool hasTunnelIkeConfig() const { return this->tunnelIkeConfig_ != nullptr;};
    void deleteTunnelIkeConfig() { this->tunnelIkeConfig_ = nullptr;};
    inline const ModifyTunnelAttributeResponseBody::TunnelIkeConfig & getTunnelIkeConfig() const { DARABONBA_PTR_GET_CONST(tunnelIkeConfig_, ModifyTunnelAttributeResponseBody::TunnelIkeConfig) };
    inline ModifyTunnelAttributeResponseBody::TunnelIkeConfig getTunnelIkeConfig() { DARABONBA_PTR_GET(tunnelIkeConfig_, ModifyTunnelAttributeResponseBody::TunnelIkeConfig) };
    inline ModifyTunnelAttributeResponseBody& setTunnelIkeConfig(const ModifyTunnelAttributeResponseBody::TunnelIkeConfig & tunnelIkeConfig) { DARABONBA_PTR_SET_VALUE(tunnelIkeConfig_, tunnelIkeConfig) };
    inline ModifyTunnelAttributeResponseBody& setTunnelIkeConfig(ModifyTunnelAttributeResponseBody::TunnelIkeConfig && tunnelIkeConfig) { DARABONBA_PTR_SET_RVALUE(tunnelIkeConfig_, tunnelIkeConfig) };


    // tunnelIpsecConfig Field Functions 
    bool hasTunnelIpsecConfig() const { return this->tunnelIpsecConfig_ != nullptr;};
    void deleteTunnelIpsecConfig() { this->tunnelIpsecConfig_ = nullptr;};
    inline const ModifyTunnelAttributeResponseBody::TunnelIpsecConfig & getTunnelIpsecConfig() const { DARABONBA_PTR_GET_CONST(tunnelIpsecConfig_, ModifyTunnelAttributeResponseBody::TunnelIpsecConfig) };
    inline ModifyTunnelAttributeResponseBody::TunnelIpsecConfig getTunnelIpsecConfig() { DARABONBA_PTR_GET(tunnelIpsecConfig_, ModifyTunnelAttributeResponseBody::TunnelIpsecConfig) };
    inline ModifyTunnelAttributeResponseBody& setTunnelIpsecConfig(const ModifyTunnelAttributeResponseBody::TunnelIpsecConfig & tunnelIpsecConfig) { DARABONBA_PTR_SET_VALUE(tunnelIpsecConfig_, tunnelIpsecConfig) };
    inline ModifyTunnelAttributeResponseBody& setTunnelIpsecConfig(ModifyTunnelAttributeResponseBody::TunnelIpsecConfig && tunnelIpsecConfig) { DARABONBA_PTR_SET_RVALUE(tunnelIpsecConfig_, tunnelIpsecConfig) };


    // zoneNo Field Functions 
    bool hasZoneNo() const { return this->zoneNo_ != nullptr;};
    void deleteZoneNo() { this->zoneNo_ = nullptr;};
    inline string getZoneNo() const { DARABONBA_PTR_GET_DEFAULT(zoneNo_, "") };
    inline ModifyTunnelAttributeResponseBody& setZoneNo(string zoneNo) { DARABONBA_PTR_SET_VALUE(zoneNo_, zoneNo) };


  protected:
    // The ID of the customer gateway associated with the customer gateway.
    shared_ptr<string> customerGatewayId_ {};
    // Indicates whether DPD is enabled. Valid values:
    // 
    // *   **false**
    // *   **true**
    shared_ptr<bool> enableDpd_ {};
    // Indicates whether NAT traversal is enabled. Valid values:
    // 
    // *   **false**
    // *   **true**
    shared_ptr<bool> enableNatTraversal_ {};
    // The tunnel IP address.
    shared_ptr<string> internetIp_ {};
    // The peer CA certificate when a VPN gateway that uses an SM certificate is used to create the IPsec connection.
    shared_ptr<string> remoteCaCertificate_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The tunnel role. Valid values:
    // 
    // *   **master**
    // *   **slave**
    shared_ptr<string> role_ {};
    // The tunnel status. Valid values:
    // 
    // *   **active**
    // *   **updating**
    // *   **deleting**
    shared_ptr<string> state_ {};
    // The BGP configuration.
    shared_ptr<ModifyTunnelAttributeResponseBody::TunnelBgpConfig> tunnelBgpConfig_ {};
    // The tunnel ID.
    shared_ptr<string> tunnelId_ {};
    // The Phase 1 configuration.
    shared_ptr<ModifyTunnelAttributeResponseBody::TunnelIkeConfig> tunnelIkeConfig_ {};
    // The configurations of IPsec Phase 2.
    shared_ptr<ModifyTunnelAttributeResponseBody::TunnelIpsecConfig> tunnelIpsecConfig_ {};
    // The tunnel zone.
    shared_ptr<string> zoneNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
