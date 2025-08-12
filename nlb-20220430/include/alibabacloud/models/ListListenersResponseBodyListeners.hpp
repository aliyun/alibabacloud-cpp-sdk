// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTENERSRESPONSEBODYLISTENERS_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTENERSRESPONSEBODYLISTENERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListListenersResponseBodyListenersProxyProtocolV2Config.hpp>
#include <alibabacloud/models/ListListenersResponseBodyListenersTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class ListListenersResponseBodyListeners : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListenersResponseBodyListeners& obj) { 
      DARABONBA_PTR_TO_JSON(AlpnEnabled, alpnEnabled_);
      DARABONBA_PTR_TO_JSON(AlpnPolicy, alpnPolicy_);
      DARABONBA_PTR_TO_JSON(CaCertificateIds, caCertificateIds_);
      DARABONBA_PTR_TO_JSON(CaEnabled, caEnabled_);
      DARABONBA_PTR_TO_JSON(CertificateIds, certificateIds_);
      DARABONBA_PTR_TO_JSON(Cps, cps_);
      DARABONBA_PTR_TO_JSON(EndPort, endPort_);
      DARABONBA_PTR_TO_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_TO_JSON(ListenerDescription, listenerDescription_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_TO_JSON(ListenerStatus, listenerStatus_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(Mss, mss_);
      DARABONBA_PTR_TO_JSON(ProxyProtocolEnabled, proxyProtocolEnabled_);
      DARABONBA_PTR_TO_JSON(ProxyProtocolV2Config, proxyProtocolV2Config_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecSensorEnabled, secSensorEnabled_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_TO_JSON(StartPort, startPort_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListListenersResponseBodyListeners& obj) { 
      DARABONBA_PTR_FROM_JSON(AlpnEnabled, alpnEnabled_);
      DARABONBA_PTR_FROM_JSON(AlpnPolicy, alpnPolicy_);
      DARABONBA_PTR_FROM_JSON(CaCertificateIds, caCertificateIds_);
      DARABONBA_PTR_FROM_JSON(CaEnabled, caEnabled_);
      DARABONBA_PTR_FROM_JSON(CertificateIds, certificateIds_);
      DARABONBA_PTR_FROM_JSON(Cps, cps_);
      DARABONBA_PTR_FROM_JSON(EndPort, endPort_);
      DARABONBA_PTR_FROM_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_FROM_JSON(ListenerDescription, listenerDescription_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_FROM_JSON(ListenerStatus, listenerStatus_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(Mss, mss_);
      DARABONBA_PTR_FROM_JSON(ProxyProtocolEnabled, proxyProtocolEnabled_);
      DARABONBA_PTR_FROM_JSON(ProxyProtocolV2Config, proxyProtocolV2Config_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecSensorEnabled, secSensorEnabled_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_FROM_JSON(StartPort, startPort_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListListenersResponseBodyListeners() = default ;
    ListListenersResponseBodyListeners(const ListListenersResponseBodyListeners &) = default ;
    ListListenersResponseBodyListeners(ListListenersResponseBodyListeners &&) = default ;
    ListListenersResponseBodyListeners(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListenersResponseBodyListeners() = default ;
    ListListenersResponseBodyListeners& operator=(const ListListenersResponseBodyListeners &) = default ;
    ListListenersResponseBodyListeners& operator=(ListListenersResponseBodyListeners &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alpnEnabled_ != nullptr
        && this->alpnPolicy_ != nullptr && this->caCertificateIds_ != nullptr && this->caEnabled_ != nullptr && this->certificateIds_ != nullptr && this->cps_ != nullptr
        && this->endPort_ != nullptr && this->idleTimeout_ != nullptr && this->listenerDescription_ != nullptr && this->listenerId_ != nullptr && this->listenerPort_ != nullptr
        && this->listenerProtocol_ != nullptr && this->listenerStatus_ != nullptr && this->loadBalancerId_ != nullptr && this->mss_ != nullptr && this->proxyProtocolEnabled_ != nullptr
        && this->proxyProtocolV2Config_ != nullptr && this->regionId_ != nullptr && this->secSensorEnabled_ != nullptr && this->securityPolicyId_ != nullptr && this->serverGroupId_ != nullptr
        && this->startPort_ != nullptr && this->tags_ != nullptr; };
    // alpnEnabled Field Functions 
    bool hasAlpnEnabled() const { return this->alpnEnabled_ != nullptr;};
    void deleteAlpnEnabled() { this->alpnEnabled_ = nullptr;};
    inline bool alpnEnabled() const { DARABONBA_PTR_GET_DEFAULT(alpnEnabled_, false) };
    inline ListListenersResponseBodyListeners& setAlpnEnabled(bool alpnEnabled) { DARABONBA_PTR_SET_VALUE(alpnEnabled_, alpnEnabled) };


    // alpnPolicy Field Functions 
    bool hasAlpnPolicy() const { return this->alpnPolicy_ != nullptr;};
    void deleteAlpnPolicy() { this->alpnPolicy_ = nullptr;};
    inline string alpnPolicy() const { DARABONBA_PTR_GET_DEFAULT(alpnPolicy_, "") };
    inline ListListenersResponseBodyListeners& setAlpnPolicy(string alpnPolicy) { DARABONBA_PTR_SET_VALUE(alpnPolicy_, alpnPolicy) };


    // caCertificateIds Field Functions 
    bool hasCaCertificateIds() const { return this->caCertificateIds_ != nullptr;};
    void deleteCaCertificateIds() { this->caCertificateIds_ = nullptr;};
    inline const vector<string> & caCertificateIds() const { DARABONBA_PTR_GET_CONST(caCertificateIds_, vector<string>) };
    inline vector<string> caCertificateIds() { DARABONBA_PTR_GET(caCertificateIds_, vector<string>) };
    inline ListListenersResponseBodyListeners& setCaCertificateIds(const vector<string> & caCertificateIds) { DARABONBA_PTR_SET_VALUE(caCertificateIds_, caCertificateIds) };
    inline ListListenersResponseBodyListeners& setCaCertificateIds(vector<string> && caCertificateIds) { DARABONBA_PTR_SET_RVALUE(caCertificateIds_, caCertificateIds) };


    // caEnabled Field Functions 
    bool hasCaEnabled() const { return this->caEnabled_ != nullptr;};
    void deleteCaEnabled() { this->caEnabled_ = nullptr;};
    inline bool caEnabled() const { DARABONBA_PTR_GET_DEFAULT(caEnabled_, false) };
    inline ListListenersResponseBodyListeners& setCaEnabled(bool caEnabled) { DARABONBA_PTR_SET_VALUE(caEnabled_, caEnabled) };


    // certificateIds Field Functions 
    bool hasCertificateIds() const { return this->certificateIds_ != nullptr;};
    void deleteCertificateIds() { this->certificateIds_ = nullptr;};
    inline const vector<string> & certificateIds() const { DARABONBA_PTR_GET_CONST(certificateIds_, vector<string>) };
    inline vector<string> certificateIds() { DARABONBA_PTR_GET(certificateIds_, vector<string>) };
    inline ListListenersResponseBodyListeners& setCertificateIds(const vector<string> & certificateIds) { DARABONBA_PTR_SET_VALUE(certificateIds_, certificateIds) };
    inline ListListenersResponseBodyListeners& setCertificateIds(vector<string> && certificateIds) { DARABONBA_PTR_SET_RVALUE(certificateIds_, certificateIds) };


    // cps Field Functions 
    bool hasCps() const { return this->cps_ != nullptr;};
    void deleteCps() { this->cps_ = nullptr;};
    inline int32_t cps() const { DARABONBA_PTR_GET_DEFAULT(cps_, 0) };
    inline ListListenersResponseBodyListeners& setCps(int32_t cps) { DARABONBA_PTR_SET_VALUE(cps_, cps) };


    // endPort Field Functions 
    bool hasEndPort() const { return this->endPort_ != nullptr;};
    void deleteEndPort() { this->endPort_ = nullptr;};
    inline string endPort() const { DARABONBA_PTR_GET_DEFAULT(endPort_, "") };
    inline ListListenersResponseBodyListeners& setEndPort(string endPort) { DARABONBA_PTR_SET_VALUE(endPort_, endPort) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t idleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline ListListenersResponseBodyListeners& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // listenerDescription Field Functions 
    bool hasListenerDescription() const { return this->listenerDescription_ != nullptr;};
    void deleteListenerDescription() { this->listenerDescription_ = nullptr;};
    inline string listenerDescription() const { DARABONBA_PTR_GET_DEFAULT(listenerDescription_, "") };
    inline ListListenersResponseBodyListeners& setListenerDescription(string listenerDescription) { DARABONBA_PTR_SET_VALUE(listenerDescription_, listenerDescription) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string listenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline ListListenersResponseBodyListeners& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline ListListenersResponseBodyListeners& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // listenerProtocol Field Functions 
    bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
    void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
    inline string listenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
    inline ListListenersResponseBodyListeners& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


    // listenerStatus Field Functions 
    bool hasListenerStatus() const { return this->listenerStatus_ != nullptr;};
    void deleteListenerStatus() { this->listenerStatus_ = nullptr;};
    inline string listenerStatus() const { DARABONBA_PTR_GET_DEFAULT(listenerStatus_, "") };
    inline ListListenersResponseBodyListeners& setListenerStatus(string listenerStatus) { DARABONBA_PTR_SET_VALUE(listenerStatus_, listenerStatus) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline ListListenersResponseBodyListeners& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // mss Field Functions 
    bool hasMss() const { return this->mss_ != nullptr;};
    void deleteMss() { this->mss_ = nullptr;};
    inline int32_t mss() const { DARABONBA_PTR_GET_DEFAULT(mss_, 0) };
    inline ListListenersResponseBodyListeners& setMss(int32_t mss) { DARABONBA_PTR_SET_VALUE(mss_, mss) };


    // proxyProtocolEnabled Field Functions 
    bool hasProxyProtocolEnabled() const { return this->proxyProtocolEnabled_ != nullptr;};
    void deleteProxyProtocolEnabled() { this->proxyProtocolEnabled_ = nullptr;};
    inline bool proxyProtocolEnabled() const { DARABONBA_PTR_GET_DEFAULT(proxyProtocolEnabled_, false) };
    inline ListListenersResponseBodyListeners& setProxyProtocolEnabled(bool proxyProtocolEnabled) { DARABONBA_PTR_SET_VALUE(proxyProtocolEnabled_, proxyProtocolEnabled) };


    // proxyProtocolV2Config Field Functions 
    bool hasProxyProtocolV2Config() const { return this->proxyProtocolV2Config_ != nullptr;};
    void deleteProxyProtocolV2Config() { this->proxyProtocolV2Config_ = nullptr;};
    inline const Models::ListListenersResponseBodyListenersProxyProtocolV2Config & proxyProtocolV2Config() const { DARABONBA_PTR_GET_CONST(proxyProtocolV2Config_, Models::ListListenersResponseBodyListenersProxyProtocolV2Config) };
    inline Models::ListListenersResponseBodyListenersProxyProtocolV2Config proxyProtocolV2Config() { DARABONBA_PTR_GET(proxyProtocolV2Config_, Models::ListListenersResponseBodyListenersProxyProtocolV2Config) };
    inline ListListenersResponseBodyListeners& setProxyProtocolV2Config(const Models::ListListenersResponseBodyListenersProxyProtocolV2Config & proxyProtocolV2Config) { DARABONBA_PTR_SET_VALUE(proxyProtocolV2Config_, proxyProtocolV2Config) };
    inline ListListenersResponseBodyListeners& setProxyProtocolV2Config(Models::ListListenersResponseBodyListenersProxyProtocolV2Config && proxyProtocolV2Config) { DARABONBA_PTR_SET_RVALUE(proxyProtocolV2Config_, proxyProtocolV2Config) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListListenersResponseBodyListeners& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // secSensorEnabled Field Functions 
    bool hasSecSensorEnabled() const { return this->secSensorEnabled_ != nullptr;};
    void deleteSecSensorEnabled() { this->secSensorEnabled_ = nullptr;};
    inline bool secSensorEnabled() const { DARABONBA_PTR_GET_DEFAULT(secSensorEnabled_, false) };
    inline ListListenersResponseBodyListeners& setSecSensorEnabled(bool secSensorEnabled) { DARABONBA_PTR_SET_VALUE(secSensorEnabled_, secSensorEnabled) };


    // securityPolicyId Field Functions 
    bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
    void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
    inline string securityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
    inline ListListenersResponseBodyListeners& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


    // serverGroupId Field Functions 
    bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
    void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
    inline string serverGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
    inline ListListenersResponseBodyListeners& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


    // startPort Field Functions 
    bool hasStartPort() const { return this->startPort_ != nullptr;};
    void deleteStartPort() { this->startPort_ = nullptr;};
    inline string startPort() const { DARABONBA_PTR_GET_DEFAULT(startPort_, "") };
    inline ListListenersResponseBodyListeners& setStartPort(string startPort) { DARABONBA_PTR_SET_VALUE(startPort_, startPort) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListListenersResponseBodyListenersTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListListenersResponseBodyListenersTags>) };
    inline vector<Models::ListListenersResponseBodyListenersTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListListenersResponseBodyListenersTags>) };
    inline ListListenersResponseBodyListeners& setTags(const vector<Models::ListListenersResponseBodyListenersTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListListenersResponseBodyListeners& setTags(vector<Models::ListListenersResponseBodyListenersTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // Indicates whether Application-Layer Protocol Negotiation (ALPN) is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> alpnEnabled_ = nullptr;
    // The ALPN policy. Valid values:
    // 
    // *   **HTTP1Only**
    // *   **HTTP2Only**
    // *   **HTTP2Preferred**
    // *   **HTTP2Optional**
    std::shared_ptr<string> alpnPolicy_ = nullptr;
    // A list of CA certificates.
    // 
    // >  This parameter takes effect only for listeners that use SSL over TCP.
    std::shared_ptr<vector<string>> caCertificateIds_ = nullptr;
    // Indicates whether mutual authentication is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> caEnabled_ = nullptr;
    // The server certificate.
    // 
    // >  This parameter takes effect only for listeners that use SSL over TCP.
    std::shared_ptr<vector<string>> certificateIds_ = nullptr;
    // The maximum number of new connections per second supported by the listener in each zone (virtual IP address). Valid values: **0** to **1000000**. **0** indicates that the number of connections is unlimited.
    std::shared_ptr<int32_t> cps_ = nullptr;
    // The last port in the listener port range.
    std::shared_ptr<string> endPort_ = nullptr;
    // The timeout period of idle connections. Unit: seconds. Valid values: **1** to **900**. Default value: **900**.
    std::shared_ptr<int32_t> idleTimeout_ = nullptr;
    // The name of the listener.
    // 
    // The name must be 2 to 256 characters in length, and can contain letters, digits, commas (,), periods (.), semicolons (;), forward slashes (/), at signs (@), underscores (_), and hyphens (-).
    std::shared_ptr<string> listenerDescription_ = nullptr;
    // The listener ID.
    std::shared_ptr<string> listenerId_ = nullptr;
    // The information about the listener port of your server.
    std::shared_ptr<int32_t> listenerPort_ = nullptr;
    // The listener protocol. Valid values: **TCP**, **UDP**, and **TCPSSL**.
    std::shared_ptr<string> listenerProtocol_ = nullptr;
    // The status of the listener. Valid values:
    // 
    // *   **Provisioning**: The listener is being created.
    // *   **Running**: The listener is running.
    // *   **Configuring**: The listener is being configured.
    // *   **Stopping**: The listener is being stopped.
    // *   **Stopped**: The listener is stopped.
    // *   **Starting**: The listener is being started.
    // *   **Deleting**: The listener is being deleted.
    // *   **Deleted**: The listener is deleted.
    std::shared_ptr<string> listenerStatus_ = nullptr;
    // The CLB instance ID.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The size of the largest TCP packet segment. Unit: bytes. Valid values: **0** to **1500**. **0** indicates that the Mss value of TCP packets remains unchanged.
    // 
    // >  This parameter takes effect only for listeners that use SSL over TCP.
    std::shared_ptr<int32_t> mss_ = nullptr;
    // Indicates whether the Proxy protocol passes source client IP addresses to backend servers. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> proxyProtocolEnabled_ = nullptr;
    // Indicates whether the Proxy protocol passes the VpcId, PrivateLinkEpId, and PrivateLinkEpsId parameters to backend servers.
    std::shared_ptr<Models::ListListenersResponseBodyListenersProxyProtocolV2Config> proxyProtocolV2Config_ = nullptr;
    // The region ID of the NLB instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // Indicates whether fine-grained monitoring is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> secSensorEnabled_ = nullptr;
    // The ID of the security policy.
    // 
    // >  This parameter takes effect only for listeners that use SSL over TCP.
    std::shared_ptr<string> securityPolicyId_ = nullptr;
    // The server group ID.
    std::shared_ptr<string> serverGroupId_ = nullptr;
    // The first port in the listener port range.
    std::shared_ptr<string> startPort_ = nullptr;
    // A list of tags.
    std::shared_ptr<vector<Models::ListListenersResponseBodyListenersTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
