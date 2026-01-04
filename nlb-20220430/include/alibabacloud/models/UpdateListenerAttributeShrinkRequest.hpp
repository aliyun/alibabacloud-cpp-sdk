// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELISTENERATTRIBUTESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELISTENERATTRIBUTESHRINKREQUEST_HPP_
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
  class UpdateListenerAttributeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateListenerAttributeShrinkRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(ProxyProtocolV2Config, proxyProtocolV2ConfigShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecSensorEnabled, secSensorEnabled_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateListenerAttributeShrinkRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(ProxyProtocolV2Config, proxyProtocolV2ConfigShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecSensorEnabled, secSensorEnabled_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
    };
    UpdateListenerAttributeShrinkRequest() = default ;
    UpdateListenerAttributeShrinkRequest(const UpdateListenerAttributeShrinkRequest &) = default ;
    UpdateListenerAttributeShrinkRequest(UpdateListenerAttributeShrinkRequest &&) = default ;
    UpdateListenerAttributeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateListenerAttributeShrinkRequest() = default ;
    UpdateListenerAttributeShrinkRequest& operator=(const UpdateListenerAttributeShrinkRequest &) = default ;
    UpdateListenerAttributeShrinkRequest& operator=(UpdateListenerAttributeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alpnEnabled_ == nullptr
        && this->alpnPolicy_ == nullptr && this->caCertificateIds_ == nullptr && this->caEnabled_ == nullptr && this->certificateIds_ == nullptr && this->clientToken_ == nullptr
        && this->cps_ == nullptr && this->dryRun_ == nullptr && this->idleTimeout_ == nullptr && this->listenerDescription_ == nullptr && this->listenerId_ == nullptr
        && this->mss_ == nullptr && this->proxyProtocolEnabled_ == nullptr && this->proxyProtocolV2ConfigShrink_ == nullptr && this->regionId_ == nullptr && this->secSensorEnabled_ == nullptr
        && this->securityPolicyId_ == nullptr && this->serverGroupId_ == nullptr; };
    // alpnEnabled Field Functions 
    bool hasAlpnEnabled() const { return this->alpnEnabled_ != nullptr;};
    void deleteAlpnEnabled() { this->alpnEnabled_ = nullptr;};
    inline bool getAlpnEnabled() const { DARABONBA_PTR_GET_DEFAULT(alpnEnabled_, false) };
    inline UpdateListenerAttributeShrinkRequest& setAlpnEnabled(bool alpnEnabled) { DARABONBA_PTR_SET_VALUE(alpnEnabled_, alpnEnabled) };


    // alpnPolicy Field Functions 
    bool hasAlpnPolicy() const { return this->alpnPolicy_ != nullptr;};
    void deleteAlpnPolicy() { this->alpnPolicy_ = nullptr;};
    inline string getAlpnPolicy() const { DARABONBA_PTR_GET_DEFAULT(alpnPolicy_, "") };
    inline UpdateListenerAttributeShrinkRequest& setAlpnPolicy(string alpnPolicy) { DARABONBA_PTR_SET_VALUE(alpnPolicy_, alpnPolicy) };


    // caCertificateIds Field Functions 
    bool hasCaCertificateIds() const { return this->caCertificateIds_ != nullptr;};
    void deleteCaCertificateIds() { this->caCertificateIds_ = nullptr;};
    inline const vector<string> & getCaCertificateIds() const { DARABONBA_PTR_GET_CONST(caCertificateIds_, vector<string>) };
    inline vector<string> getCaCertificateIds() { DARABONBA_PTR_GET(caCertificateIds_, vector<string>) };
    inline UpdateListenerAttributeShrinkRequest& setCaCertificateIds(const vector<string> & caCertificateIds) { DARABONBA_PTR_SET_VALUE(caCertificateIds_, caCertificateIds) };
    inline UpdateListenerAttributeShrinkRequest& setCaCertificateIds(vector<string> && caCertificateIds) { DARABONBA_PTR_SET_RVALUE(caCertificateIds_, caCertificateIds) };


    // caEnabled Field Functions 
    bool hasCaEnabled() const { return this->caEnabled_ != nullptr;};
    void deleteCaEnabled() { this->caEnabled_ = nullptr;};
    inline bool getCaEnabled() const { DARABONBA_PTR_GET_DEFAULT(caEnabled_, false) };
    inline UpdateListenerAttributeShrinkRequest& setCaEnabled(bool caEnabled) { DARABONBA_PTR_SET_VALUE(caEnabled_, caEnabled) };


    // certificateIds Field Functions 
    bool hasCertificateIds() const { return this->certificateIds_ != nullptr;};
    void deleteCertificateIds() { this->certificateIds_ = nullptr;};
    inline const vector<string> & getCertificateIds() const { DARABONBA_PTR_GET_CONST(certificateIds_, vector<string>) };
    inline vector<string> getCertificateIds() { DARABONBA_PTR_GET(certificateIds_, vector<string>) };
    inline UpdateListenerAttributeShrinkRequest& setCertificateIds(const vector<string> & certificateIds) { DARABONBA_PTR_SET_VALUE(certificateIds_, certificateIds) };
    inline UpdateListenerAttributeShrinkRequest& setCertificateIds(vector<string> && certificateIds) { DARABONBA_PTR_SET_RVALUE(certificateIds_, certificateIds) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateListenerAttributeShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cps Field Functions 
    bool hasCps() const { return this->cps_ != nullptr;};
    void deleteCps() { this->cps_ = nullptr;};
    inline int32_t getCps() const { DARABONBA_PTR_GET_DEFAULT(cps_, 0) };
    inline UpdateListenerAttributeShrinkRequest& setCps(int32_t cps) { DARABONBA_PTR_SET_VALUE(cps_, cps) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateListenerAttributeShrinkRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t getIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline UpdateListenerAttributeShrinkRequest& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // listenerDescription Field Functions 
    bool hasListenerDescription() const { return this->listenerDescription_ != nullptr;};
    void deleteListenerDescription() { this->listenerDescription_ = nullptr;};
    inline string getListenerDescription() const { DARABONBA_PTR_GET_DEFAULT(listenerDescription_, "") };
    inline UpdateListenerAttributeShrinkRequest& setListenerDescription(string listenerDescription) { DARABONBA_PTR_SET_VALUE(listenerDescription_, listenerDescription) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline UpdateListenerAttributeShrinkRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // mss Field Functions 
    bool hasMss() const { return this->mss_ != nullptr;};
    void deleteMss() { this->mss_ = nullptr;};
    inline int32_t getMss() const { DARABONBA_PTR_GET_DEFAULT(mss_, 0) };
    inline UpdateListenerAttributeShrinkRequest& setMss(int32_t mss) { DARABONBA_PTR_SET_VALUE(mss_, mss) };


    // proxyProtocolEnabled Field Functions 
    bool hasProxyProtocolEnabled() const { return this->proxyProtocolEnabled_ != nullptr;};
    void deleteProxyProtocolEnabled() { this->proxyProtocolEnabled_ = nullptr;};
    inline bool getProxyProtocolEnabled() const { DARABONBA_PTR_GET_DEFAULT(proxyProtocolEnabled_, false) };
    inline UpdateListenerAttributeShrinkRequest& setProxyProtocolEnabled(bool proxyProtocolEnabled) { DARABONBA_PTR_SET_VALUE(proxyProtocolEnabled_, proxyProtocolEnabled) };


    // proxyProtocolV2ConfigShrink Field Functions 
    bool hasProxyProtocolV2ConfigShrink() const { return this->proxyProtocolV2ConfigShrink_ != nullptr;};
    void deleteProxyProtocolV2ConfigShrink() { this->proxyProtocolV2ConfigShrink_ = nullptr;};
    inline string getProxyProtocolV2ConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(proxyProtocolV2ConfigShrink_, "") };
    inline UpdateListenerAttributeShrinkRequest& setProxyProtocolV2ConfigShrink(string proxyProtocolV2ConfigShrink) { DARABONBA_PTR_SET_VALUE(proxyProtocolV2ConfigShrink_, proxyProtocolV2ConfigShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateListenerAttributeShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // secSensorEnabled Field Functions 
    bool hasSecSensorEnabled() const { return this->secSensorEnabled_ != nullptr;};
    void deleteSecSensorEnabled() { this->secSensorEnabled_ = nullptr;};
    inline bool getSecSensorEnabled() const { DARABONBA_PTR_GET_DEFAULT(secSensorEnabled_, false) };
    inline UpdateListenerAttributeShrinkRequest& setSecSensorEnabled(bool secSensorEnabled) { DARABONBA_PTR_SET_VALUE(secSensorEnabled_, secSensorEnabled) };


    // securityPolicyId Field Functions 
    bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
    void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
    inline string getSecurityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
    inline UpdateListenerAttributeShrinkRequest& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


    // serverGroupId Field Functions 
    bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
    void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
    inline string getServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
    inline UpdateListenerAttributeShrinkRequest& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


  protected:
    // Specifies whether to enable Application-Layer Protocol Negotiation (ALPN). Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> alpnEnabled_ {};
    // The name of the ALPN policy. The following are the possible values:
    // 
    // *   **HTTP1Only**: Negotiate only HTTP/1.\\*. The ALPN preference list is HTTP/1.1, HTTP/1.0.
    // *   **HTTP2Only**: Negotiate only HTTP/2. The ALPN preference list is HTTP/2.
    // *   **HTTP2Optional**: Prefer HTTP/1.\\* over HTTP/2. The ALPN preference list is HTTP/1.1, HTTP/1.0, HTTP/2.
    // *   **HTTP2Preferred**: Prefer HTTP/2 over HTTP/1.\\*. The ALPN preference list is HTTP/2, HTTP/1.1, HTTP/1.0.
    // 
    // >  This parameter is required if AlpnEnabled is set to true.
    shared_ptr<string> alpnPolicy_ {};
    // The CA certificate. You can specify only one CA certificate.
    // 
    // >  This parameter takes effect only for listeners that use SSL over TCP.
    shared_ptr<vector<string>> caCertificateIds_ {};
    // Specifies whether to enable mutual authentication. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> caEnabled_ {};
    // The server certificate. Only one server certificate is supported.
    // 
    // >  This parameter takes effect only for listeners that use SSL over TCP.
    shared_ptr<vector<string>> certificateIds_ {};
    // The client token used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token. Ensure that the token is unique among different requests. Only ASCII characters are allowed.
    // 
    // >  If you do not set this parameter, the value of **RequestId** is used.**** The value of **RequestId** is different for each request.
    shared_ptr<string> clientToken_ {};
    // The maximum number of new connections per second supported by the listener in each zone (virtual IP address). Valid values: **0** to **1000000**. **0** indicates that the number of connections is unlimited.
    shared_ptr<int32_t> cps_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // *   **true**: validates the request without performing the operation. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the validation, the corresponding error message is returned. If the request passes the validation, the `DryRunOperation` error code is returned.
    // *   **false** (default): validates the request and performs the operation. If the request passes the validation, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The timeout period for idle connections. Unit: seconds
    // 
    // *   If the listener uses **TCP** or **TCPSSL**, you can set this parameter to a value ranging from **10** to **900**. Default value: **900**
    // *   If the listener uses **UDP**, you can set this parameter to a value ranging from **10** to **20**. Default value: **20**
    shared_ptr<int32_t> idleTimeout_ {};
    // The name of the listener.
    // 
    // The name must be 2 to 256 characters in length, and can contain letters, digits, commas (,), periods (.), semicolons (;), forward slashes (/), at signs (@), underscores (_), and hyphens (-).
    shared_ptr<string> listenerDescription_ {};
    // The listener ID.
    // 
    // This parameter is required.
    shared_ptr<string> listenerId_ {};
    // The size of the largest TCP packet segment. Unit: bytes. Valid values: **0** to **1500**. **0** indicates that the maximum segment size (MSS) remains unchanged. This parameter is supported only by TCP listeners and listeners that use SSL over TCP.
    shared_ptr<int32_t> mss_ {};
    // Specifies whether to use the Proxy protocol to pass the client IP address to the backend server. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> proxyProtocolEnabled_ {};
    // Specifies that the Proxy protocol passes the VpcId, PrivateLinkEpId, and PrivateLinkEpsId parameters to backend servers.
    shared_ptr<string> proxyProtocolV2ConfigShrink_ {};
    // The ID of the region where the NLB instance is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/443657.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // Specifies whether to enable fine-grained monitoring. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> secSensorEnabled_ {};
    // The ID of the security policy.
    // 
    // >  This parameter takes effect only for listeners that use SSL over TCP.
    shared_ptr<string> securityPolicyId_ {};
    // The server group ID.
    // 
    // > 
    // 
    // *   If the listener uses **TCP**, you can specify server groups whose protocol is **TCP** or **TCP_UDP**. **UDP** server groups are not supported.
    // 
    // *   If the listener uses **UDP**, you can specify server groups whose protocol is **UDP** or **TCP_UDP**. **TCP** server groups are not supported.
    // 
    // *   If the listener uses **TCPSSL**, you can specify server groups whose protocol is **TCP** and whose **client IP preservation is disabled**. **TCP** server groups for which **client IP preservation is enabled** and server groups whose protocol is **UDP** or **TCP_UDP** are not supported.
    shared_ptr<string> serverGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
