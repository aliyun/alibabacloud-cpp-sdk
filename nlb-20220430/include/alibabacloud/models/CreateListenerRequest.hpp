// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELISTENERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELISTENERREQUEST_HPP_
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
  class CreateListenerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateListenerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlpnEnabled, alpnEnabled_);
      DARABONBA_PTR_TO_JSON(AlpnPolicy, alpnPolicy_);
      DARABONBA_PTR_TO_JSON(CaCertificateIds, caCertificateIds_);
      DARABONBA_PTR_TO_JSON(CaEnabled, caEnabled_);
      DARABONBA_PTR_TO_JSON(CertificateIds, certificateIds_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Cps, cps_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EndPort, endPort_);
      DARABONBA_PTR_TO_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_TO_JSON(ListenerDescription, listenerDescription_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(Mss, mss_);
      DARABONBA_PTR_TO_JSON(ProxyProtocolEnabled, proxyProtocolEnabled_);
      DARABONBA_PTR_TO_JSON(ProxyProtocolV2Config, proxyProtocolV2Config_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecSensorEnabled, secSensorEnabled_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_TO_JSON(StartPort, startPort_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateListenerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlpnEnabled, alpnEnabled_);
      DARABONBA_PTR_FROM_JSON(AlpnPolicy, alpnPolicy_);
      DARABONBA_PTR_FROM_JSON(CaCertificateIds, caCertificateIds_);
      DARABONBA_PTR_FROM_JSON(CaEnabled, caEnabled_);
      DARABONBA_PTR_FROM_JSON(CertificateIds, certificateIds_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Cps, cps_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EndPort, endPort_);
      DARABONBA_PTR_FROM_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_FROM_JSON(ListenerDescription, listenerDescription_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(Mss, mss_);
      DARABONBA_PTR_FROM_JSON(ProxyProtocolEnabled, proxyProtocolEnabled_);
      DARABONBA_PTR_FROM_JSON(ProxyProtocolV2Config, proxyProtocolV2Config_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecSensorEnabled, secSensorEnabled_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_FROM_JSON(StartPort, startPort_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateListenerRequest() = default ;
    CreateListenerRequest(const CreateListenerRequest &) = default ;
    CreateListenerRequest(CreateListenerRequest &&) = default ;
    CreateListenerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateListenerRequest() = default ;
    CreateListenerRequest& operator=(const CreateListenerRequest &) = default ;
    CreateListenerRequest& operator=(CreateListenerRequest &&) = default ;
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
      // The key of the tag. The tag key can be up to 64 characters in length, cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`. The tag value can contain letters, digits, and the following special characters: _ . : / = + - @
      // 
      // You can specify up to 20 tags in each call.
      shared_ptr<string> key_ {};
      // The value of the tag. The tag value can be up to 128 characters in length, cannot start with `acs:` or `aliyun`, and cannot contain `http://` or `https://`. The tag value can contain letters, digits, and the following special characters: _ . : / = + - @
      // 
      // You can specify up to 20 tags in each call.
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
      // Specifies whether to use the Proxy protocol to pass the Ppv2PrivateLinkEpId parameter to backend servers. Valid values:
      // 
      // *   **true**
      // *   **false** (default)
      shared_ptr<bool> ppv2PrivateLinkEpIdEnabled_ {};
      // Specifies whether to use the Proxy protocol to pass the PrivateLinkEpsId parameter to backend servers. Valid values:
      // 
      // *   **true**
      // *   **false** (default)
      shared_ptr<bool> ppv2PrivateLinkEpsIdEnabled_ {};
      // Specifies whether to use the Proxy protocol to pass the VpcId parameter to backend servers. Valid values:
      // 
      // *   **true**
      // *   **false** (default)
      shared_ptr<bool> ppv2VpcIdEnabled_ {};
    };

    virtual bool empty() const override { return this->alpnEnabled_ == nullptr
        && this->alpnPolicy_ == nullptr && this->caCertificateIds_ == nullptr && this->caEnabled_ == nullptr && this->certificateIds_ == nullptr && this->clientToken_ == nullptr
        && this->cps_ == nullptr && this->dryRun_ == nullptr && this->endPort_ == nullptr && this->idleTimeout_ == nullptr && this->listenerDescription_ == nullptr
        && this->listenerPort_ == nullptr && this->listenerProtocol_ == nullptr && this->loadBalancerId_ == nullptr && this->mss_ == nullptr && this->proxyProtocolEnabled_ == nullptr
        && this->proxyProtocolV2Config_ == nullptr && this->regionId_ == nullptr && this->secSensorEnabled_ == nullptr && this->securityPolicyId_ == nullptr && this->serverGroupId_ == nullptr
        && this->startPort_ == nullptr && this->tag_ == nullptr; };
    // alpnEnabled Field Functions 
    bool hasAlpnEnabled() const { return this->alpnEnabled_ != nullptr;};
    void deleteAlpnEnabled() { this->alpnEnabled_ = nullptr;};
    inline bool getAlpnEnabled() const { DARABONBA_PTR_GET_DEFAULT(alpnEnabled_, false) };
    inline CreateListenerRequest& setAlpnEnabled(bool alpnEnabled) { DARABONBA_PTR_SET_VALUE(alpnEnabled_, alpnEnabled) };


    // alpnPolicy Field Functions 
    bool hasAlpnPolicy() const { return this->alpnPolicy_ != nullptr;};
    void deleteAlpnPolicy() { this->alpnPolicy_ = nullptr;};
    inline string getAlpnPolicy() const { DARABONBA_PTR_GET_DEFAULT(alpnPolicy_, "") };
    inline CreateListenerRequest& setAlpnPolicy(string alpnPolicy) { DARABONBA_PTR_SET_VALUE(alpnPolicy_, alpnPolicy) };


    // caCertificateIds Field Functions 
    bool hasCaCertificateIds() const { return this->caCertificateIds_ != nullptr;};
    void deleteCaCertificateIds() { this->caCertificateIds_ = nullptr;};
    inline const vector<string> & getCaCertificateIds() const { DARABONBA_PTR_GET_CONST(caCertificateIds_, vector<string>) };
    inline vector<string> getCaCertificateIds() { DARABONBA_PTR_GET(caCertificateIds_, vector<string>) };
    inline CreateListenerRequest& setCaCertificateIds(const vector<string> & caCertificateIds) { DARABONBA_PTR_SET_VALUE(caCertificateIds_, caCertificateIds) };
    inline CreateListenerRequest& setCaCertificateIds(vector<string> && caCertificateIds) { DARABONBA_PTR_SET_RVALUE(caCertificateIds_, caCertificateIds) };


    // caEnabled Field Functions 
    bool hasCaEnabled() const { return this->caEnabled_ != nullptr;};
    void deleteCaEnabled() { this->caEnabled_ = nullptr;};
    inline bool getCaEnabled() const { DARABONBA_PTR_GET_DEFAULT(caEnabled_, false) };
    inline CreateListenerRequest& setCaEnabled(bool caEnabled) { DARABONBA_PTR_SET_VALUE(caEnabled_, caEnabled) };


    // certificateIds Field Functions 
    bool hasCertificateIds() const { return this->certificateIds_ != nullptr;};
    void deleteCertificateIds() { this->certificateIds_ = nullptr;};
    inline const vector<string> & getCertificateIds() const { DARABONBA_PTR_GET_CONST(certificateIds_, vector<string>) };
    inline vector<string> getCertificateIds() { DARABONBA_PTR_GET(certificateIds_, vector<string>) };
    inline CreateListenerRequest& setCertificateIds(const vector<string> & certificateIds) { DARABONBA_PTR_SET_VALUE(certificateIds_, certificateIds) };
    inline CreateListenerRequest& setCertificateIds(vector<string> && certificateIds) { DARABONBA_PTR_SET_RVALUE(certificateIds_, certificateIds) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateListenerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cps Field Functions 
    bool hasCps() const { return this->cps_ != nullptr;};
    void deleteCps() { this->cps_ = nullptr;};
    inline int32_t getCps() const { DARABONBA_PTR_GET_DEFAULT(cps_, 0) };
    inline CreateListenerRequest& setCps(int32_t cps) { DARABONBA_PTR_SET_VALUE(cps_, cps) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateListenerRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // endPort Field Functions 
    bool hasEndPort() const { return this->endPort_ != nullptr;};
    void deleteEndPort() { this->endPort_ = nullptr;};
    inline int32_t getEndPort() const { DARABONBA_PTR_GET_DEFAULT(endPort_, 0) };
    inline CreateListenerRequest& setEndPort(int32_t endPort) { DARABONBA_PTR_SET_VALUE(endPort_, endPort) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t getIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline CreateListenerRequest& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // listenerDescription Field Functions 
    bool hasListenerDescription() const { return this->listenerDescription_ != nullptr;};
    void deleteListenerDescription() { this->listenerDescription_ = nullptr;};
    inline string getListenerDescription() const { DARABONBA_PTR_GET_DEFAULT(listenerDescription_, "") };
    inline CreateListenerRequest& setListenerDescription(string listenerDescription) { DARABONBA_PTR_SET_VALUE(listenerDescription_, listenerDescription) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline CreateListenerRequest& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // listenerProtocol Field Functions 
    bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
    void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
    inline string getListenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
    inline CreateListenerRequest& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline CreateListenerRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // mss Field Functions 
    bool hasMss() const { return this->mss_ != nullptr;};
    void deleteMss() { this->mss_ = nullptr;};
    inline int32_t getMss() const { DARABONBA_PTR_GET_DEFAULT(mss_, 0) };
    inline CreateListenerRequest& setMss(int32_t mss) { DARABONBA_PTR_SET_VALUE(mss_, mss) };


    // proxyProtocolEnabled Field Functions 
    bool hasProxyProtocolEnabled() const { return this->proxyProtocolEnabled_ != nullptr;};
    void deleteProxyProtocolEnabled() { this->proxyProtocolEnabled_ = nullptr;};
    inline bool getProxyProtocolEnabled() const { DARABONBA_PTR_GET_DEFAULT(proxyProtocolEnabled_, false) };
    inline CreateListenerRequest& setProxyProtocolEnabled(bool proxyProtocolEnabled) { DARABONBA_PTR_SET_VALUE(proxyProtocolEnabled_, proxyProtocolEnabled) };


    // proxyProtocolV2Config Field Functions 
    bool hasProxyProtocolV2Config() const { return this->proxyProtocolV2Config_ != nullptr;};
    void deleteProxyProtocolV2Config() { this->proxyProtocolV2Config_ = nullptr;};
    inline const CreateListenerRequest::ProxyProtocolV2Config & getProxyProtocolV2Config() const { DARABONBA_PTR_GET_CONST(proxyProtocolV2Config_, CreateListenerRequest::ProxyProtocolV2Config) };
    inline CreateListenerRequest::ProxyProtocolV2Config getProxyProtocolV2Config() { DARABONBA_PTR_GET(proxyProtocolV2Config_, CreateListenerRequest::ProxyProtocolV2Config) };
    inline CreateListenerRequest& setProxyProtocolV2Config(const CreateListenerRequest::ProxyProtocolV2Config & proxyProtocolV2Config) { DARABONBA_PTR_SET_VALUE(proxyProtocolV2Config_, proxyProtocolV2Config) };
    inline CreateListenerRequest& setProxyProtocolV2Config(CreateListenerRequest::ProxyProtocolV2Config && proxyProtocolV2Config) { DARABONBA_PTR_SET_RVALUE(proxyProtocolV2Config_, proxyProtocolV2Config) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateListenerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // secSensorEnabled Field Functions 
    bool hasSecSensorEnabled() const { return this->secSensorEnabled_ != nullptr;};
    void deleteSecSensorEnabled() { this->secSensorEnabled_ = nullptr;};
    inline bool getSecSensorEnabled() const { DARABONBA_PTR_GET_DEFAULT(secSensorEnabled_, false) };
    inline CreateListenerRequest& setSecSensorEnabled(bool secSensorEnabled) { DARABONBA_PTR_SET_VALUE(secSensorEnabled_, secSensorEnabled) };


    // securityPolicyId Field Functions 
    bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
    void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
    inline string getSecurityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
    inline CreateListenerRequest& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


    // serverGroupId Field Functions 
    bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
    void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
    inline string getServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
    inline CreateListenerRequest& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


    // startPort Field Functions 
    bool hasStartPort() const { return this->startPort_ != nullptr;};
    void deleteStartPort() { this->startPort_ = nullptr;};
    inline int32_t getStartPort() const { DARABONBA_PTR_GET_DEFAULT(startPort_, 0) };
    inline CreateListenerRequest& setStartPort(int32_t startPort) { DARABONBA_PTR_SET_VALUE(startPort_, startPort) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateListenerRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateListenerRequest::Tag>) };
    inline vector<CreateListenerRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateListenerRequest::Tag>) };
    inline CreateListenerRequest& setTag(const vector<CreateListenerRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateListenerRequest& setTag(vector<CreateListenerRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // Specifies whether to enable Application-Layer Protocol Negotiation (ALPN). Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    shared_ptr<bool> alpnEnabled_ {};
    // The ALPN policy. Valid values:
    // 
    // *   **HTTP1Only**: uses only HTTP 1.x. The priority of HTTP 1.1 is higher than that of HTTP 1.0.
    // *   **HTTP2Only**: uses only HTTP 2.0.
    // *   **HTTP2Optional**: preferentially uses HTTP 1.x over HTTP 2.0. The priority of HTTP 1.1 is higher than that of HTTP 1.0, and the priority of HTTP 1.0 is higher than that of HTTP 2.0.
    // *   **HTTP2Preferred**: preferentially uses HTTP 2.0 over HTTP 1.x. The priority of HTTP 2.0 is higher than that of HTTP 1.1, and the priority of HTTP 1.1 is higher than that of HTTP 1.0.
    // 
    // >  This parameter is required if **AlpnEnabled** is set to true.
    shared_ptr<string> alpnPolicy_ {};
    // The certificate authority (CA) certificate. This parameter is supported only by TCLSSL listeners.
    // 
    // >  You can specify only one CA certificate.
    shared_ptr<vector<string>> caCertificateIds_ {};
    // Specifies whether to enable mutual authentication. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    shared_ptr<bool> caEnabled_ {};
    // The server certificate. This parameter is supported only by TCLSSL listeners.
    // 
    // >  You can specify only one server certificate.
    shared_ptr<vector<string>> certificateIds_ {};
    // The client token used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token. Ensure that the token is unique among different requests. Only ASCII characters are allowed.
    // 
    // >  If you do not set this parameter, the value of **RequestId** is used.**** The value of **RequestId** is different for each request.
    shared_ptr<string> clientToken_ {};
    // The maximum number of new connections per second supported by the listener in each zone (virtual IP address). Valid values: **0** to **1000000**. **0** indicates that the number of connections is unlimited.
    shared_ptr<int32_t> cps_ {};
    // Specifies whether to perform a dry run, without sending the actual request. Valid values:
    // 
    // *   **true**: validates the request without performing the operation. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the validation, the corresponding error message is returned. If the request passes the validation, the `DryRunOperation` error code is returned.
    // *   **false** (default): validates the request and performs the operation. If the request passes the validation, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The last port in the listener port range. Valid values: **0** to **65535**. The port number of the last port must be greater than the port number of the first port.
    // 
    // >  This parameter is required when **ListenerPort** is set to **0**.
    shared_ptr<int32_t> endPort_ {};
    // The timeout period for idle connections. Unit: seconds.
    // 
    // *   If you set **ListenerProtocol** to **TCP** or **TCPSSL**, this parameter can be set to a value ranging from **10** to **900**. Default value: **900**.
    // *   If **ListenerProtocol** is set to **UDP**, this parameter can be set to a value ranging from **10** to **20**. Default value: **20**.
    shared_ptr<int32_t> idleTimeout_ {};
    // The name of the listener.
    // 
    // The name must be 2 to 256 characters in length, and can contain letters, digits, commas (,), periods (.), semicolons (;), forward slashes (/), at signs (@), underscores (_), and hyphens (-).
    shared_ptr<string> listenerDescription_ {};
    // The listener port. Valid values: **0** to **65535**.
    // 
    // If you set this parameter to **0**, the listener listens by port range. If you set this parameter to **0**, you must also set the **StartPort** and **EndPort** parameters.
    // 
    // This parameter is required.
    shared_ptr<int32_t> listenerPort_ {};
    // The listener protocol. Valid values: **TCP**, **UDP**, and **TCPSSL**.
    // 
    // This parameter is required.
    shared_ptr<string> listenerProtocol_ {};
    // The ID of the NLB instance.
    // 
    // This parameter is required.
    shared_ptr<string> loadBalancerId_ {};
    // The size of the largest TCP packet segment. Unit: bytes. Valid values: **0** to **1500**. **0** indicates that the maximum segment size (MSS) value of TCP packets remains unchanged.
    // 
    // >  This parameter takes effect only for TCP and TCPSSL listeners.
    shared_ptr<int32_t> mss_ {};
    // Specifies whether to use the Proxy protocol to pass client IP addresses to backend servers. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    shared_ptr<bool> proxyProtocolEnabled_ {};
    // Specifies whether to use the Proxy protocol to pass the VpcId, PrivateLinkEpId, and PrivateLinkEpsId parameters to backend servers.
    shared_ptr<CreateListenerRequest::ProxyProtocolV2Config> proxyProtocolV2Config_ {};
    // The ID of the region where the NLB instance is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/443657.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // Specifies whether to enable fine-grained monitoring. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    shared_ptr<bool> secSensorEnabled_ {};
    // The ID of the security policy. System security policies and custom security policies are supported.
    // 
    // *   Valid values for system security policies: **tls_cipher_policy_1_0** (default), **tls_cipher_policy_1_1**, **tls_cipher_policy_1_2**, **tls_cipher_policy_1_2_strict**, and **tls_cipher_policy_1_2_strict_with_1_3**.
    // 
    // *   For a custom security policy, enter the policy ID.
    // 
    //     *   For information about creating a custom security policy, see [CreateSecurityPolicy](https://help.aliyun.com/document_detail/445901.html).
    //     *   For information about querying security policies, see [ListSecurityPolicy](https://help.aliyun.com/document_detail/445900.html).
    // 
    // >  This parameter takes effect only for TCPSSL listeners.
    shared_ptr<string> securityPolicyId_ {};
    // The server group ID.
    // 
    // >  *   If you set **ListenerProtocol** to **TCP**, you can associate the listener with server groups whose backend protocol is **TCP** or **TCP_UDP**. You cannot associate the listener with server groups whose backend protocol is **UDP**.
    // >  *   If you set **ListenerProtocol** to **UDP**, you can associate the listener with server groups whose backend protocol is **UDP** or **TCP_UDP**. You cannot associate the listener with server groups whose backend protocol is **TCP**.
    // >  *   If you set **ListenerProtocol** to **TCPSSL**, you can associate the listener with server groups whose backend protocol is **TCP** and have **client IP preservation disabled**. You cannot associate the listener with server groups whose backend protocol is **TCP** and have **client IP preservation enabled** or server groups whose backend protocol is **UDP** or **TCP_UDP**.
    shared_ptr<string> serverGroupId_ {};
    // The first port in the listener port range. Valid values: **0** to **65535**.
    // 
    // >  This parameter is required when **ListenerPort** is set to **0**.
    shared_ptr<int32_t> startPort_ {};
    // The tags.
    shared_ptr<vector<CreateListenerRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
