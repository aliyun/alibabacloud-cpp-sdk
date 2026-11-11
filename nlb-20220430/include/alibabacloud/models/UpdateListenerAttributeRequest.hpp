// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELISTENERATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELISTENERATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class UpdateListenerAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateListenerAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlpnEnabled, alpnEnabled_);
      DARABONBA_PTR_TO_JSON(AlpnPolicy, alpnPolicy_);
      DARABONBA_PTR_TO_JSON(CaCertificateIds, caCertificateIds_);
      DARABONBA_PTR_TO_JSON(CaEnabled, caEnabled_);
      DARABONBA_PTR_TO_JSON(CertificateIds, certificateIds_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Cps, cps_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_TO_JSON(ListenerDescription, listenerDescription_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(Mss, mss_);
      DARABONBA_PTR_TO_JSON(ProxyProtocolEnabled, proxyProtocolEnabled_);
      DARABONBA_PTR_TO_JSON(ProxyProtocolV2Config, proxyProtocolV2Config_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecSensorEnabled, secSensorEnabled_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateListenerAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlpnEnabled, alpnEnabled_);
      DARABONBA_PTR_FROM_JSON(AlpnPolicy, alpnPolicy_);
      DARABONBA_PTR_FROM_JSON(CaCertificateIds, caCertificateIds_);
      DARABONBA_PTR_FROM_JSON(CaEnabled, caEnabled_);
      DARABONBA_PTR_FROM_JSON(CertificateIds, certificateIds_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Cps, cps_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_FROM_JSON(ListenerDescription, listenerDescription_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(Mss, mss_);
      DARABONBA_PTR_FROM_JSON(ProxyProtocolEnabled, proxyProtocolEnabled_);
      DARABONBA_PTR_FROM_JSON(ProxyProtocolV2Config, proxyProtocolV2Config_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecSensorEnabled, secSensorEnabled_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
    };
    UpdateListenerAttributeRequest() = default ;
    UpdateListenerAttributeRequest(const UpdateListenerAttributeRequest &) = default ;
    UpdateListenerAttributeRequest(UpdateListenerAttributeRequest &&) = default ;
    UpdateListenerAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateListenerAttributeRequest() = default ;
    UpdateListenerAttributeRequest& operator=(const UpdateListenerAttributeRequest &) = default ;
    UpdateListenerAttributeRequest& operator=(UpdateListenerAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProxyProtocolV2Config : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProxyProtocolV2Config& obj) { 
        DARABONBA_PTR_TO_JSON(Ppv2CnIdEnabled, ppv2CnIdEnabled_);
        DARABONBA_PTR_TO_JSON(Ppv2PrivateLinkEpIdEnabled, ppv2PrivateLinkEpIdEnabled_);
        DARABONBA_PTR_TO_JSON(Ppv2PrivateLinkEpsIdEnabled, ppv2PrivateLinkEpsIdEnabled_);
        DARABONBA_PTR_TO_JSON(Ppv2VpcIdEnabled, ppv2VpcIdEnabled_);
      };
      friend void from_json(const Darabonba::Json& j, ProxyProtocolV2Config& obj) { 
        DARABONBA_PTR_FROM_JSON(Ppv2CnIdEnabled, ppv2CnIdEnabled_);
        DARABONBA_PTR_FROM_JSON(Ppv2PrivateLinkEpIdEnabled, ppv2PrivateLinkEpIdEnabled_);
        DARABONBA_PTR_FROM_JSON(Ppv2PrivateLinkEpsIdEnabled, ppv2PrivateLinkEpsIdEnabled_);
        DARABONBA_PTR_FROM_JSON(Ppv2VpcIdEnabled, ppv2VpcIdEnabled_);
      };
      ProxyProtocolV2Config() = default ;
      ProxyProtocolV2Config(const ProxyProtocolV2Config &) = default ;
      ProxyProtocolV2Config(ProxyProtocolV2Config &&) = default ;
      ProxyProtocolV2Config(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProxyProtocolV2Config() = default ;
      ProxyProtocolV2Config& operator=(const ProxyProtocolV2Config &) = default ;
      ProxyProtocolV2Config& operator=(ProxyProtocolV2Config &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ppv2CnIdEnabled_ == nullptr
        && this->ppv2PrivateLinkEpIdEnabled_ == nullptr && this->ppv2PrivateLinkEpsIdEnabled_ == nullptr && this->ppv2VpcIdEnabled_ == nullptr; };
      // ppv2CnIdEnabled Field Functions 
      bool hasPpv2CnIdEnabled() const { return this->ppv2CnIdEnabled_ != nullptr;};
      void deletePpv2CnIdEnabled() { this->ppv2CnIdEnabled_ = nullptr;};
      inline bool getPpv2CnIdEnabled() const { DARABONBA_PTR_GET_DEFAULT(ppv2CnIdEnabled_, false) };
      inline ProxyProtocolV2Config& setPpv2CnIdEnabled(bool ppv2CnIdEnabled) { DARABONBA_PTR_SET_VALUE(ppv2CnIdEnabled_, ppv2CnIdEnabled) };


      // ppv2PrivateLinkEpIdEnabled Field Functions 
      bool hasPpv2PrivateLinkEpIdEnabled() const { return this->ppv2PrivateLinkEpIdEnabled_ != nullptr;};
      void deletePpv2PrivateLinkEpIdEnabled() { this->ppv2PrivateLinkEpIdEnabled_ = nullptr;};
      inline bool getPpv2PrivateLinkEpIdEnabled() const { DARABONBA_PTR_GET_DEFAULT(ppv2PrivateLinkEpIdEnabled_, false) };
      inline ProxyProtocolV2Config& setPpv2PrivateLinkEpIdEnabled(bool ppv2PrivateLinkEpIdEnabled) { DARABONBA_PTR_SET_VALUE(ppv2PrivateLinkEpIdEnabled_, ppv2PrivateLinkEpIdEnabled) };


      // ppv2PrivateLinkEpsIdEnabled Field Functions 
      bool hasPpv2PrivateLinkEpsIdEnabled() const { return this->ppv2PrivateLinkEpsIdEnabled_ != nullptr;};
      void deletePpv2PrivateLinkEpsIdEnabled() { this->ppv2PrivateLinkEpsIdEnabled_ = nullptr;};
      inline bool getPpv2PrivateLinkEpsIdEnabled() const { DARABONBA_PTR_GET_DEFAULT(ppv2PrivateLinkEpsIdEnabled_, false) };
      inline ProxyProtocolV2Config& setPpv2PrivateLinkEpsIdEnabled(bool ppv2PrivateLinkEpsIdEnabled) { DARABONBA_PTR_SET_VALUE(ppv2PrivateLinkEpsIdEnabled_, ppv2PrivateLinkEpsIdEnabled) };


      // ppv2VpcIdEnabled Field Functions 
      bool hasPpv2VpcIdEnabled() const { return this->ppv2VpcIdEnabled_ != nullptr;};
      void deletePpv2VpcIdEnabled() { this->ppv2VpcIdEnabled_ = nullptr;};
      inline bool getPpv2VpcIdEnabled() const { DARABONBA_PTR_GET_DEFAULT(ppv2VpcIdEnabled_, false) };
      inline ProxyProtocolV2Config& setPpv2VpcIdEnabled(bool ppv2VpcIdEnabled) { DARABONBA_PTR_SET_VALUE(ppv2VpcIdEnabled_, ppv2VpcIdEnabled) };


    protected:
      // Specifies whether to use the Proxy Protocol to pass the CN-ID to backend servers. Valid values:
      // 
      // - **true**: yes.
      // 
      // - **false**: no.
      shared_ptr<bool> ppv2CnIdEnabled_ {};
      // Specifies whether to use the Proxy Protocol to pass the PrivateLinkEpId to backend servers. Valid values:
      // 
      // - **true**: yes.
      // 
      // - **false**: no.
      shared_ptr<bool> ppv2PrivateLinkEpIdEnabled_ {};
      // Specifies whether to use the Proxy Protocol to pass the PrivateLinkEpsId to backend servers. Valid values:
      // 
      // - **true**: yes.
      // 
      // - **false**: no.
      shared_ptr<bool> ppv2PrivateLinkEpsIdEnabled_ {};
      // Specifies whether to use the Proxy Protocol to pass the VpcId to backend servers. Valid values:
      // 
      // - **true**: yes.
      // 
      // - **false**: no.
      shared_ptr<bool> ppv2VpcIdEnabled_ {};
    };

    virtual bool empty() const override { return this->alpnEnabled_ == nullptr
        && this->alpnPolicy_ == nullptr && this->caCertificateIds_ == nullptr && this->caEnabled_ == nullptr && this->certificateIds_ == nullptr && this->clientToken_ == nullptr
        && this->cps_ == nullptr && this->dryRun_ == nullptr && this->idleTimeout_ == nullptr && this->listenerDescription_ == nullptr && this->listenerId_ == nullptr
        && this->mss_ == nullptr && this->proxyProtocolEnabled_ == nullptr && this->proxyProtocolV2Config_ == nullptr && this->regionId_ == nullptr && this->secSensorEnabled_ == nullptr
        && this->securityPolicyId_ == nullptr && this->serverGroupId_ == nullptr; };
    // alpnEnabled Field Functions 
    bool hasAlpnEnabled() const { return this->alpnEnabled_ != nullptr;};
    void deleteAlpnEnabled() { this->alpnEnabled_ = nullptr;};
    inline bool getAlpnEnabled() const { DARABONBA_PTR_GET_DEFAULT(alpnEnabled_, false) };
    inline UpdateListenerAttributeRequest& setAlpnEnabled(bool alpnEnabled) { DARABONBA_PTR_SET_VALUE(alpnEnabled_, alpnEnabled) };


    // alpnPolicy Field Functions 
    bool hasAlpnPolicy() const { return this->alpnPolicy_ != nullptr;};
    void deleteAlpnPolicy() { this->alpnPolicy_ = nullptr;};
    inline string getAlpnPolicy() const { DARABONBA_PTR_GET_DEFAULT(alpnPolicy_, "") };
    inline UpdateListenerAttributeRequest& setAlpnPolicy(string alpnPolicy) { DARABONBA_PTR_SET_VALUE(alpnPolicy_, alpnPolicy) };


    // caCertificateIds Field Functions 
    bool hasCaCertificateIds() const { return this->caCertificateIds_ != nullptr;};
    void deleteCaCertificateIds() { this->caCertificateIds_ = nullptr;};
    inline const vector<string> & getCaCertificateIds() const { DARABONBA_PTR_GET_CONST(caCertificateIds_, vector<string>) };
    inline vector<string> getCaCertificateIds() { DARABONBA_PTR_GET(caCertificateIds_, vector<string>) };
    inline UpdateListenerAttributeRequest& setCaCertificateIds(const vector<string> & caCertificateIds) { DARABONBA_PTR_SET_VALUE(caCertificateIds_, caCertificateIds) };
    inline UpdateListenerAttributeRequest& setCaCertificateIds(vector<string> && caCertificateIds) { DARABONBA_PTR_SET_RVALUE(caCertificateIds_, caCertificateIds) };


    // caEnabled Field Functions 
    bool hasCaEnabled() const { return this->caEnabled_ != nullptr;};
    void deleteCaEnabled() { this->caEnabled_ = nullptr;};
    inline bool getCaEnabled() const { DARABONBA_PTR_GET_DEFAULT(caEnabled_, false) };
    inline UpdateListenerAttributeRequest& setCaEnabled(bool caEnabled) { DARABONBA_PTR_SET_VALUE(caEnabled_, caEnabled) };


    // certificateIds Field Functions 
    bool hasCertificateIds() const { return this->certificateIds_ != nullptr;};
    void deleteCertificateIds() { this->certificateIds_ = nullptr;};
    inline const vector<string> & getCertificateIds() const { DARABONBA_PTR_GET_CONST(certificateIds_, vector<string>) };
    inline vector<string> getCertificateIds() { DARABONBA_PTR_GET(certificateIds_, vector<string>) };
    inline UpdateListenerAttributeRequest& setCertificateIds(const vector<string> & certificateIds) { DARABONBA_PTR_SET_VALUE(certificateIds_, certificateIds) };
    inline UpdateListenerAttributeRequest& setCertificateIds(vector<string> && certificateIds) { DARABONBA_PTR_SET_RVALUE(certificateIds_, certificateIds) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateListenerAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cps Field Functions 
    bool hasCps() const { return this->cps_ != nullptr;};
    void deleteCps() { this->cps_ = nullptr;};
    inline int32_t getCps() const { DARABONBA_PTR_GET_DEFAULT(cps_, 0) };
    inline UpdateListenerAttributeRequest& setCps(int32_t cps) { DARABONBA_PTR_SET_VALUE(cps_, cps) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateListenerAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t getIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline UpdateListenerAttributeRequest& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // listenerDescription Field Functions 
    bool hasListenerDescription() const { return this->listenerDescription_ != nullptr;};
    void deleteListenerDescription() { this->listenerDescription_ = nullptr;};
    inline string getListenerDescription() const { DARABONBA_PTR_GET_DEFAULT(listenerDescription_, "") };
    inline UpdateListenerAttributeRequest& setListenerDescription(string listenerDescription) { DARABONBA_PTR_SET_VALUE(listenerDescription_, listenerDescription) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline UpdateListenerAttributeRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // mss Field Functions 
    bool hasMss() const { return this->mss_ != nullptr;};
    void deleteMss() { this->mss_ = nullptr;};
    inline int32_t getMss() const { DARABONBA_PTR_GET_DEFAULT(mss_, 0) };
    inline UpdateListenerAttributeRequest& setMss(int32_t mss) { DARABONBA_PTR_SET_VALUE(mss_, mss) };


    // proxyProtocolEnabled Field Functions 
    bool hasProxyProtocolEnabled() const { return this->proxyProtocolEnabled_ != nullptr;};
    void deleteProxyProtocolEnabled() { this->proxyProtocolEnabled_ = nullptr;};
    inline bool getProxyProtocolEnabled() const { DARABONBA_PTR_GET_DEFAULT(proxyProtocolEnabled_, false) };
    inline UpdateListenerAttributeRequest& setProxyProtocolEnabled(bool proxyProtocolEnabled) { DARABONBA_PTR_SET_VALUE(proxyProtocolEnabled_, proxyProtocolEnabled) };


    // proxyProtocolV2Config Field Functions 
    bool hasProxyProtocolV2Config() const { return this->proxyProtocolV2Config_ != nullptr;};
    void deleteProxyProtocolV2Config() { this->proxyProtocolV2Config_ = nullptr;};
    inline const UpdateListenerAttributeRequest::ProxyProtocolV2Config & getProxyProtocolV2Config() const { DARABONBA_PTR_GET_CONST(proxyProtocolV2Config_, UpdateListenerAttributeRequest::ProxyProtocolV2Config) };
    inline UpdateListenerAttributeRequest::ProxyProtocolV2Config getProxyProtocolV2Config() { DARABONBA_PTR_GET(proxyProtocolV2Config_, UpdateListenerAttributeRequest::ProxyProtocolV2Config) };
    inline UpdateListenerAttributeRequest& setProxyProtocolV2Config(const UpdateListenerAttributeRequest::ProxyProtocolV2Config & proxyProtocolV2Config) { DARABONBA_PTR_SET_VALUE(proxyProtocolV2Config_, proxyProtocolV2Config) };
    inline UpdateListenerAttributeRequest& setProxyProtocolV2Config(UpdateListenerAttributeRequest::ProxyProtocolV2Config && proxyProtocolV2Config) { DARABONBA_PTR_SET_RVALUE(proxyProtocolV2Config_, proxyProtocolV2Config) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateListenerAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // secSensorEnabled Field Functions 
    bool hasSecSensorEnabled() const { return this->secSensorEnabled_ != nullptr;};
    void deleteSecSensorEnabled() { this->secSensorEnabled_ = nullptr;};
    inline bool getSecSensorEnabled() const { DARABONBA_PTR_GET_DEFAULT(secSensorEnabled_, false) };
    inline UpdateListenerAttributeRequest& setSecSensorEnabled(bool secSensorEnabled) { DARABONBA_PTR_SET_VALUE(secSensorEnabled_, secSensorEnabled) };


    // securityPolicyId Field Functions 
    bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
    void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
    inline string getSecurityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
    inline UpdateListenerAttributeRequest& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


    // serverGroupId Field Functions 
    bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
    void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
    inline string getServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
    inline UpdateListenerAttributeRequest& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


  protected:
    // Specifies whether to enable Application-Layer Protocol Negotiation (ALPN). Valid values:
    // 
    // - **true**: enables ALPN.
    // 
    // - **false**: disables ALPN.
    shared_ptr<bool> alpnEnabled_ {};
    // The ALPN policy. Valid values:
    // 
    // - **HTTP1Only**: negotiates only HTTP/1.x. The priority is HTTP/1.1 > HTTP/1.0.
    // - **HTTP2Only**: negotiates only HTTP/2.
    // - **HTTP2Optional**: prefers HTTP/1.x but also accepts HTTP/2. The priority is HTTP/1.1 > HTTP/1.0 > HTTP/2.
    // - **HTTP2Preferred**: prefers HTTP/2 but also accepts HTTP/1.x. The priority is HTTP/2 > HTTP/1.1 > HTTP/1.0.
    // 
    // > You must configure this parameter after ALPN is enabled.
    shared_ptr<string> alpnPolicy_ {};
    // The CA certificates. You can add only one CA certificate.
    // 
    // > This parameter takes effect only for TCPSSL listeners.
    shared_ptr<vector<string>> caCertificateIds_ {};
    // Specifies whether to enable mutual authentication. Valid values:
    // 
    // - **true**: enables mutual authentication.
    // 
    // - **false** (default): disables mutual authentication.
    shared_ptr<bool> caEnabled_ {};
    // The server certificates. You can add only one server certificate.
    // 
    // > This parameter takes effect only for TCPSSL listeners.
    shared_ptr<vector<string>> certificateIds_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is unique.
    shared_ptr<string> clientToken_ {};
    // The maximum number of new connections per second that the listener can process in each zone (VIP). Valid values: **0** to **1000000**. A value of **0** indicates that no limit is applied.
    shared_ptr<int32_t> cps_ {};
    // Specifies whether to only precheck the request. Valid values:
    // - **true**: prechecks the request without updating the listener. The system checks whether required parameters are specified, the request format is valid, and the service limits are met. If the request fails the precheck, the corresponding error is returned. If the request passes the precheck, the `DryRunOperation` error code is returned.
    // - **false** (default): sends the request. If the request passes the precheck, an HTTP 2xx status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The idle connection timeout period. Unit: seconds.
    // 
    // - If the listener is a **TCP** or **TCPSSL** listener, valid values are **10** to **900**. Default value: **900**.
    // 
    // - If the listener is a **UDP** listener, valid values are **10** to **90**. Default value: **90**.
    shared_ptr<int32_t> idleTimeout_ {};
    // The custom name of the listener.
    // 
    // The name must be 2 to 256 characters in length, and can contain Chinese characters, English letters, digits, commas (,), periods (.), semicolons (;), forward slashes (/), at signs (@), underscores (_), and hyphens (-).
    shared_ptr<string> listenerDescription_ {};
    // The listener instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> listenerId_ {};
    // The maximum segment size (MSS) of a TCP packet. Unit: bytes. Valid values: **0** to **1500**. A value of **0** indicates that the MSS value of user TCP packets is not modified. This parameter is supported only by TCP and TCPSSL listeners.
    shared_ptr<int32_t> mss_ {};
    // Specifies whether to use the Proxy Protocol to pass the client source IP address to backend servers. Valid values:
    // 
    // - **true**: yes.
    // 
    // - **false**: no.
    shared_ptr<bool> proxyProtocolEnabled_ {};
    // The configuration for passing the VpcId, PrivateLinkEpId, and PrivateLinkEpsId information to backend servers by using the Proxy Protocol.
    shared_ptr<UpdateListenerAttributeRequest::ProxyProtocolV2Config> proxyProtocolV2Config_ {};
    // The ID of the region where the Network Load Balancer (NLB) instance is deployed. 
    // 
    // You can invoke the [DescribeRegions](https://help.aliyun.com/document_detail/443657.html) operation to retrieve the region ID.
    shared_ptr<string> regionId_ {};
    // Specifies whether to enable second-level monitoring. Valid values:
    // 
    // - **true**: enables second-level monitoring.
    // 
    // - **false**: disables second-level monitoring.
    shared_ptr<bool> secSensorEnabled_ {};
    // The ID of the security policy.
    // 
    // > This parameter takes effect only for TCPSSL listeners.
    shared_ptr<string> securityPolicyId_ {};
    // The ID of the server group.
    // 
    // > - If the listener is a **TCP** listener, you can select a server group whose backend protocol is **TCP** or **TCP_UDP**. You cannot select a server group whose backend protocol is **UDP**.
    // > - If the listener is a **UDP** listener, you can select a server group whose backend protocol is **UDP** or **TCP_UDP**. You cannot select a server group whose backend protocol is **TCP**.
    // > - If the listener is a **TCPSSL** listener, you can select a server group whose backend protocol is **TCP** and for which **client address preservation is disabled**. You cannot select a server group whose backend protocol is **TCP** and for which **client address preservation is enabled**, or a server group whose backend protocol is **UDP** or **TCP_UDP**.
    shared_ptr<string> serverGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
