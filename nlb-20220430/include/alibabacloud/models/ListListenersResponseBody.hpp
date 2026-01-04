// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTENERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTENERSRESPONSEBODY_HPP_
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
  class ListListenersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListenersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Listeners, listeners_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListListenersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Listeners, listeners_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListListenersResponseBody() = default ;
    ListListenersResponseBody(const ListListenersResponseBody &) = default ;
    ListListenersResponseBody(ListListenersResponseBody &&) = default ;
    ListListenersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListenersResponseBody() = default ;
    ListListenersResponseBody& operator=(const ListListenersResponseBody &) = default ;
    ListListenersResponseBody& operator=(ListListenersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Listeners : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Listeners& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Listeners& obj) { 
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
      Listeners() = default ;
      Listeners(const Listeners &) = default ;
      Listeners(Listeners &&) = default ;
      Listeners(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Listeners() = default ;
      Listeners& operator=(const Listeners &) = default ;
      Listeners& operator=(Listeners &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
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
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      class ProxyProtocolV2Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ProxyProtocolV2Config& obj) { 
          DARABONBA_PTR_TO_JSON(Ppv2PrivateLinkEpIdEnabled, ppv2PrivateLinkEpIdEnabled_);
          DARABONBA_PTR_TO_JSON(Ppv2PrivateLinkEpsIdEnabled, ppv2PrivateLinkEpsIdEnabled_);
          DARABONBA_PTR_TO_JSON(Ppv2VpcIdEnabled, ppv2VpcIdEnabled_);
        };
        friend void from_json(const Darabonba::Json& j, ProxyProtocolV2Config& obj) { 
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
        virtual bool empty() const override { return this->ppv2PrivateLinkEpIdEnabled_ == nullptr
        && this->ppv2PrivateLinkEpsIdEnabled_ == nullptr && this->ppv2VpcIdEnabled_ == nullptr; };
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
        // Indicates whether the Proxy protocol passes the PrivateLinkEpId parameter to backend servers. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> ppv2PrivateLinkEpIdEnabled_ {};
        // Indicates whether the Proxy protocol passes the PrivateLinkEpsId parameter to backend servers. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> ppv2PrivateLinkEpsIdEnabled_ {};
        // Indicates whether the Proxy protocol passes the VpcId parameter to backend servers. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> ppv2VpcIdEnabled_ {};
      };

      virtual bool empty() const override { return this->alpnEnabled_ == nullptr
        && this->alpnPolicy_ == nullptr && this->caCertificateIds_ == nullptr && this->caEnabled_ == nullptr && this->certificateIds_ == nullptr && this->cps_ == nullptr
        && this->endPort_ == nullptr && this->idleTimeout_ == nullptr && this->listenerDescription_ == nullptr && this->listenerId_ == nullptr && this->listenerPort_ == nullptr
        && this->listenerProtocol_ == nullptr && this->listenerStatus_ == nullptr && this->loadBalancerId_ == nullptr && this->mss_ == nullptr && this->proxyProtocolEnabled_ == nullptr
        && this->proxyProtocolV2Config_ == nullptr && this->regionId_ == nullptr && this->secSensorEnabled_ == nullptr && this->securityPolicyId_ == nullptr && this->serverGroupId_ == nullptr
        && this->startPort_ == nullptr && this->tags_ == nullptr; };
      // alpnEnabled Field Functions 
      bool hasAlpnEnabled() const { return this->alpnEnabled_ != nullptr;};
      void deleteAlpnEnabled() { this->alpnEnabled_ = nullptr;};
      inline bool getAlpnEnabled() const { DARABONBA_PTR_GET_DEFAULT(alpnEnabled_, false) };
      inline Listeners& setAlpnEnabled(bool alpnEnabled) { DARABONBA_PTR_SET_VALUE(alpnEnabled_, alpnEnabled) };


      // alpnPolicy Field Functions 
      bool hasAlpnPolicy() const { return this->alpnPolicy_ != nullptr;};
      void deleteAlpnPolicy() { this->alpnPolicy_ = nullptr;};
      inline string getAlpnPolicy() const { DARABONBA_PTR_GET_DEFAULT(alpnPolicy_, "") };
      inline Listeners& setAlpnPolicy(string alpnPolicy) { DARABONBA_PTR_SET_VALUE(alpnPolicy_, alpnPolicy) };


      // caCertificateIds Field Functions 
      bool hasCaCertificateIds() const { return this->caCertificateIds_ != nullptr;};
      void deleteCaCertificateIds() { this->caCertificateIds_ = nullptr;};
      inline const vector<string> & getCaCertificateIds() const { DARABONBA_PTR_GET_CONST(caCertificateIds_, vector<string>) };
      inline vector<string> getCaCertificateIds() { DARABONBA_PTR_GET(caCertificateIds_, vector<string>) };
      inline Listeners& setCaCertificateIds(const vector<string> & caCertificateIds) { DARABONBA_PTR_SET_VALUE(caCertificateIds_, caCertificateIds) };
      inline Listeners& setCaCertificateIds(vector<string> && caCertificateIds) { DARABONBA_PTR_SET_RVALUE(caCertificateIds_, caCertificateIds) };


      // caEnabled Field Functions 
      bool hasCaEnabled() const { return this->caEnabled_ != nullptr;};
      void deleteCaEnabled() { this->caEnabled_ = nullptr;};
      inline bool getCaEnabled() const { DARABONBA_PTR_GET_DEFAULT(caEnabled_, false) };
      inline Listeners& setCaEnabled(bool caEnabled) { DARABONBA_PTR_SET_VALUE(caEnabled_, caEnabled) };


      // certificateIds Field Functions 
      bool hasCertificateIds() const { return this->certificateIds_ != nullptr;};
      void deleteCertificateIds() { this->certificateIds_ = nullptr;};
      inline const vector<string> & getCertificateIds() const { DARABONBA_PTR_GET_CONST(certificateIds_, vector<string>) };
      inline vector<string> getCertificateIds() { DARABONBA_PTR_GET(certificateIds_, vector<string>) };
      inline Listeners& setCertificateIds(const vector<string> & certificateIds) { DARABONBA_PTR_SET_VALUE(certificateIds_, certificateIds) };
      inline Listeners& setCertificateIds(vector<string> && certificateIds) { DARABONBA_PTR_SET_RVALUE(certificateIds_, certificateIds) };


      // cps Field Functions 
      bool hasCps() const { return this->cps_ != nullptr;};
      void deleteCps() { this->cps_ = nullptr;};
      inline int32_t getCps() const { DARABONBA_PTR_GET_DEFAULT(cps_, 0) };
      inline Listeners& setCps(int32_t cps) { DARABONBA_PTR_SET_VALUE(cps_, cps) };


      // endPort Field Functions 
      bool hasEndPort() const { return this->endPort_ != nullptr;};
      void deleteEndPort() { this->endPort_ = nullptr;};
      inline string getEndPort() const { DARABONBA_PTR_GET_DEFAULT(endPort_, "") };
      inline Listeners& setEndPort(string endPort) { DARABONBA_PTR_SET_VALUE(endPort_, endPort) };


      // idleTimeout Field Functions 
      bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
      void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
      inline int32_t getIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
      inline Listeners& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


      // listenerDescription Field Functions 
      bool hasListenerDescription() const { return this->listenerDescription_ != nullptr;};
      void deleteListenerDescription() { this->listenerDescription_ = nullptr;};
      inline string getListenerDescription() const { DARABONBA_PTR_GET_DEFAULT(listenerDescription_, "") };
      inline Listeners& setListenerDescription(string listenerDescription) { DARABONBA_PTR_SET_VALUE(listenerDescription_, listenerDescription) };


      // listenerId Field Functions 
      bool hasListenerId() const { return this->listenerId_ != nullptr;};
      void deleteListenerId() { this->listenerId_ = nullptr;};
      inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
      inline Listeners& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


      // listenerPort Field Functions 
      bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
      void deleteListenerPort() { this->listenerPort_ = nullptr;};
      inline int32_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
      inline Listeners& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


      // listenerProtocol Field Functions 
      bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
      void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
      inline string getListenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
      inline Listeners& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


      // listenerStatus Field Functions 
      bool hasListenerStatus() const { return this->listenerStatus_ != nullptr;};
      void deleteListenerStatus() { this->listenerStatus_ = nullptr;};
      inline string getListenerStatus() const { DARABONBA_PTR_GET_DEFAULT(listenerStatus_, "") };
      inline Listeners& setListenerStatus(string listenerStatus) { DARABONBA_PTR_SET_VALUE(listenerStatus_, listenerStatus) };


      // loadBalancerId Field Functions 
      bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
      void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
      inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
      inline Listeners& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


      // mss Field Functions 
      bool hasMss() const { return this->mss_ != nullptr;};
      void deleteMss() { this->mss_ = nullptr;};
      inline int32_t getMss() const { DARABONBA_PTR_GET_DEFAULT(mss_, 0) };
      inline Listeners& setMss(int32_t mss) { DARABONBA_PTR_SET_VALUE(mss_, mss) };


      // proxyProtocolEnabled Field Functions 
      bool hasProxyProtocolEnabled() const { return this->proxyProtocolEnabled_ != nullptr;};
      void deleteProxyProtocolEnabled() { this->proxyProtocolEnabled_ = nullptr;};
      inline bool getProxyProtocolEnabled() const { DARABONBA_PTR_GET_DEFAULT(proxyProtocolEnabled_, false) };
      inline Listeners& setProxyProtocolEnabled(bool proxyProtocolEnabled) { DARABONBA_PTR_SET_VALUE(proxyProtocolEnabled_, proxyProtocolEnabled) };


      // proxyProtocolV2Config Field Functions 
      bool hasProxyProtocolV2Config() const { return this->proxyProtocolV2Config_ != nullptr;};
      void deleteProxyProtocolV2Config() { this->proxyProtocolV2Config_ = nullptr;};
      inline const Listeners::ProxyProtocolV2Config & getProxyProtocolV2Config() const { DARABONBA_PTR_GET_CONST(proxyProtocolV2Config_, Listeners::ProxyProtocolV2Config) };
      inline Listeners::ProxyProtocolV2Config getProxyProtocolV2Config() { DARABONBA_PTR_GET(proxyProtocolV2Config_, Listeners::ProxyProtocolV2Config) };
      inline Listeners& setProxyProtocolV2Config(const Listeners::ProxyProtocolV2Config & proxyProtocolV2Config) { DARABONBA_PTR_SET_VALUE(proxyProtocolV2Config_, proxyProtocolV2Config) };
      inline Listeners& setProxyProtocolV2Config(Listeners::ProxyProtocolV2Config && proxyProtocolV2Config) { DARABONBA_PTR_SET_RVALUE(proxyProtocolV2Config_, proxyProtocolV2Config) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Listeners& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // secSensorEnabled Field Functions 
      bool hasSecSensorEnabled() const { return this->secSensorEnabled_ != nullptr;};
      void deleteSecSensorEnabled() { this->secSensorEnabled_ = nullptr;};
      inline bool getSecSensorEnabled() const { DARABONBA_PTR_GET_DEFAULT(secSensorEnabled_, false) };
      inline Listeners& setSecSensorEnabled(bool secSensorEnabled) { DARABONBA_PTR_SET_VALUE(secSensorEnabled_, secSensorEnabled) };


      // securityPolicyId Field Functions 
      bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
      void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
      inline string getSecurityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
      inline Listeners& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


      // serverGroupId Field Functions 
      bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
      void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
      inline string getServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
      inline Listeners& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


      // startPort Field Functions 
      bool hasStartPort() const { return this->startPort_ != nullptr;};
      void deleteStartPort() { this->startPort_ = nullptr;};
      inline string getStartPort() const { DARABONBA_PTR_GET_DEFAULT(startPort_, "") };
      inline Listeners& setStartPort(string startPort) { DARABONBA_PTR_SET_VALUE(startPort_, startPort) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Listeners::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Listeners::Tags>) };
      inline vector<Listeners::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Listeners::Tags>) };
      inline Listeners& setTags(const vector<Listeners::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Listeners& setTags(vector<Listeners::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // Indicates whether Application-Layer Protocol Negotiation (ALPN) is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> alpnEnabled_ {};
      // The ALPN policy. Valid values:
      // 
      // *   **HTTP1Only**
      // *   **HTTP2Only**
      // *   **HTTP2Preferred**
      // *   **HTTP2Optional**
      shared_ptr<string> alpnPolicy_ {};
      // A list of CA certificates.
      // 
      // >  This parameter takes effect only for listeners that use SSL over TCP.
      shared_ptr<vector<string>> caCertificateIds_ {};
      // Indicates whether mutual authentication is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> caEnabled_ {};
      // The server certificate.
      // 
      // >  This parameter takes effect only for listeners that use SSL over TCP.
      shared_ptr<vector<string>> certificateIds_ {};
      // The maximum number of new connections per second supported by the listener in each zone (virtual IP address). Valid values: **0** to **1000000**. **0** indicates that the number of connections is unlimited.
      shared_ptr<int32_t> cps_ {};
      // The last port in the listener port range.
      shared_ptr<string> endPort_ {};
      // The timeout period of idle connections. Unit: seconds. Valid values: **1** to **900**. Default value: **900**.
      shared_ptr<int32_t> idleTimeout_ {};
      // The name of the listener.
      // 
      // The name must be 2 to 256 characters in length, and can contain letters, digits, commas (,), periods (.), semicolons (;), forward slashes (/), at signs (@), underscores (_), and hyphens (-).
      shared_ptr<string> listenerDescription_ {};
      // The listener ID.
      shared_ptr<string> listenerId_ {};
      // The information about the listener port of your server.
      shared_ptr<int32_t> listenerPort_ {};
      // The listener protocol. Valid values: **TCP**, **UDP**, and **TCPSSL**.
      shared_ptr<string> listenerProtocol_ {};
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
      shared_ptr<string> listenerStatus_ {};
      // The CLB instance ID.
      shared_ptr<string> loadBalancerId_ {};
      // The size of the largest TCP packet segment. Unit: bytes. Valid values: **0** to **1500**. **0** indicates that the Mss value of TCP packets remains unchanged.
      // 
      // >  This parameter takes effect only for listeners that use SSL over TCP.
      shared_ptr<int32_t> mss_ {};
      // Indicates whether the Proxy protocol passes source client IP addresses to backend servers. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> proxyProtocolEnabled_ {};
      // Indicates whether the Proxy protocol passes the VpcId, PrivateLinkEpId, and PrivateLinkEpsId parameters to backend servers.
      shared_ptr<Listeners::ProxyProtocolV2Config> proxyProtocolV2Config_ {};
      // The region ID of the NLB instance.
      shared_ptr<string> regionId_ {};
      // Indicates whether fine-grained monitoring is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> secSensorEnabled_ {};
      // The ID of the security policy.
      // 
      // >  This parameter takes effect only for listeners that use SSL over TCP.
      shared_ptr<string> securityPolicyId_ {};
      // The server group ID.
      shared_ptr<string> serverGroupId_ {};
      // The first port in the listener port range.
      shared_ptr<string> startPort_ {};
      // A list of tags.
      shared_ptr<vector<Listeners::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->listeners_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // listeners Field Functions 
    bool hasListeners() const { return this->listeners_ != nullptr;};
    void deleteListeners() { this->listeners_ = nullptr;};
    inline const vector<ListListenersResponseBody::Listeners> & getListeners() const { DARABONBA_PTR_GET_CONST(listeners_, vector<ListListenersResponseBody::Listeners>) };
    inline vector<ListListenersResponseBody::Listeners> getListeners() { DARABONBA_PTR_GET(listeners_, vector<ListListenersResponseBody::Listeners>) };
    inline ListListenersResponseBody& setListeners(const vector<ListListenersResponseBody::Listeners> & listeners) { DARABONBA_PTR_SET_VALUE(listeners_, listeners) };
    inline ListListenersResponseBody& setListeners(vector<ListListenersResponseBody::Listeners> && listeners) { DARABONBA_PTR_SET_RVALUE(listeners_, listeners) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListListenersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListListenersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListListenersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListListenersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The listeners.
    shared_ptr<vector<ListListenersResponseBody::Listeners>> listeners_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used for the next query. Valid values:
    // 
    // *   If **NextToken** is empty, it indicates that no next query is to be sent.
    // *   If a value of **NextToken** is returned, the value is the token used for the next query.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
