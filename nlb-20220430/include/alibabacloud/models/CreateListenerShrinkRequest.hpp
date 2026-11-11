// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELISTENERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELISTENERSHRINKREQUEST_HPP_
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
  class CreateListenerShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateListenerShrinkRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(ProxyProtocolV2Config, proxyProtocolV2ConfigShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecSensorEnabled, secSensorEnabled_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_TO_JSON(StartPort, startPort_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateListenerShrinkRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(ProxyProtocolV2Config, proxyProtocolV2ConfigShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecSensorEnabled, secSensorEnabled_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_FROM_JSON(StartPort, startPort_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateListenerShrinkRequest() = default ;
    CreateListenerShrinkRequest(const CreateListenerShrinkRequest &) = default ;
    CreateListenerShrinkRequest(CreateListenerShrinkRequest &&) = default ;
    CreateListenerShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateListenerShrinkRequest() = default ;
    CreateListenerShrinkRequest& operator=(const CreateListenerShrinkRequest &) = default ;
    CreateListenerShrinkRequest& operator=(CreateListenerShrinkRequest &&) = default ;
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
      // The tag key. The key can be up to 64 characters in length, and cannot start with `aliyun` or `acs:`, or contain `http://` or `https://`. Supported characters include letters, digits, underscores (_), periods (.), colons (:), forward slashes (/), equal signs (=), plus signs (+), hyphens (-), and at signs (@).
      // 
      // You can add up to 20 tags in a single call.
      shared_ptr<string> key_ {};
      // The tag value. The value can be up to 128 characters in length, and cannot start with `aliyun` or `acs:`, or contain `http://` or `https://`. Supported characters include letters, digits, underscores (_), periods (.), colons (:), forward slashes (/), equal signs (=), plus signs (+), hyphens (-), and at signs (@).
      // 
      // You can add up to 20 tags in a single call.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->alpnEnabled_ == nullptr
        && this->alpnPolicy_ == nullptr && this->caCertificateIds_ == nullptr && this->caEnabled_ == nullptr && this->certificateIds_ == nullptr && this->clientToken_ == nullptr
        && this->cps_ == nullptr && this->dryRun_ == nullptr && this->endPort_ == nullptr && this->idleTimeout_ == nullptr && this->listenerDescription_ == nullptr
        && this->listenerPort_ == nullptr && this->listenerProtocol_ == nullptr && this->loadBalancerId_ == nullptr && this->mss_ == nullptr && this->proxyProtocolEnabled_ == nullptr
        && this->proxyProtocolV2ConfigShrink_ == nullptr && this->regionId_ == nullptr && this->secSensorEnabled_ == nullptr && this->securityPolicyId_ == nullptr && this->serverGroupId_ == nullptr
        && this->startPort_ == nullptr && this->tag_ == nullptr; };
    // alpnEnabled Field Functions 
    bool hasAlpnEnabled() const { return this->alpnEnabled_ != nullptr;};
    void deleteAlpnEnabled() { this->alpnEnabled_ = nullptr;};
    inline bool getAlpnEnabled() const { DARABONBA_PTR_GET_DEFAULT(alpnEnabled_, false) };
    inline CreateListenerShrinkRequest& setAlpnEnabled(bool alpnEnabled) { DARABONBA_PTR_SET_VALUE(alpnEnabled_, alpnEnabled) };


    // alpnPolicy Field Functions 
    bool hasAlpnPolicy() const { return this->alpnPolicy_ != nullptr;};
    void deleteAlpnPolicy() { this->alpnPolicy_ = nullptr;};
    inline string getAlpnPolicy() const { DARABONBA_PTR_GET_DEFAULT(alpnPolicy_, "") };
    inline CreateListenerShrinkRequest& setAlpnPolicy(string alpnPolicy) { DARABONBA_PTR_SET_VALUE(alpnPolicy_, alpnPolicy) };


    // caCertificateIds Field Functions 
    bool hasCaCertificateIds() const { return this->caCertificateIds_ != nullptr;};
    void deleteCaCertificateIds() { this->caCertificateIds_ = nullptr;};
    inline const vector<string> & getCaCertificateIds() const { DARABONBA_PTR_GET_CONST(caCertificateIds_, vector<string>) };
    inline vector<string> getCaCertificateIds() { DARABONBA_PTR_GET(caCertificateIds_, vector<string>) };
    inline CreateListenerShrinkRequest& setCaCertificateIds(const vector<string> & caCertificateIds) { DARABONBA_PTR_SET_VALUE(caCertificateIds_, caCertificateIds) };
    inline CreateListenerShrinkRequest& setCaCertificateIds(vector<string> && caCertificateIds) { DARABONBA_PTR_SET_RVALUE(caCertificateIds_, caCertificateIds) };


    // caEnabled Field Functions 
    bool hasCaEnabled() const { return this->caEnabled_ != nullptr;};
    void deleteCaEnabled() { this->caEnabled_ = nullptr;};
    inline bool getCaEnabled() const { DARABONBA_PTR_GET_DEFAULT(caEnabled_, false) };
    inline CreateListenerShrinkRequest& setCaEnabled(bool caEnabled) { DARABONBA_PTR_SET_VALUE(caEnabled_, caEnabled) };


    // certificateIds Field Functions 
    bool hasCertificateIds() const { return this->certificateIds_ != nullptr;};
    void deleteCertificateIds() { this->certificateIds_ = nullptr;};
    inline const vector<string> & getCertificateIds() const { DARABONBA_PTR_GET_CONST(certificateIds_, vector<string>) };
    inline vector<string> getCertificateIds() { DARABONBA_PTR_GET(certificateIds_, vector<string>) };
    inline CreateListenerShrinkRequest& setCertificateIds(const vector<string> & certificateIds) { DARABONBA_PTR_SET_VALUE(certificateIds_, certificateIds) };
    inline CreateListenerShrinkRequest& setCertificateIds(vector<string> && certificateIds) { DARABONBA_PTR_SET_RVALUE(certificateIds_, certificateIds) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateListenerShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cps Field Functions 
    bool hasCps() const { return this->cps_ != nullptr;};
    void deleteCps() { this->cps_ = nullptr;};
    inline int32_t getCps() const { DARABONBA_PTR_GET_DEFAULT(cps_, 0) };
    inline CreateListenerShrinkRequest& setCps(int32_t cps) { DARABONBA_PTR_SET_VALUE(cps_, cps) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateListenerShrinkRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // endPort Field Functions 
    bool hasEndPort() const { return this->endPort_ != nullptr;};
    void deleteEndPort() { this->endPort_ = nullptr;};
    inline int32_t getEndPort() const { DARABONBA_PTR_GET_DEFAULT(endPort_, 0) };
    inline CreateListenerShrinkRequest& setEndPort(int32_t endPort) { DARABONBA_PTR_SET_VALUE(endPort_, endPort) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t getIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline CreateListenerShrinkRequest& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // listenerDescription Field Functions 
    bool hasListenerDescription() const { return this->listenerDescription_ != nullptr;};
    void deleteListenerDescription() { this->listenerDescription_ = nullptr;};
    inline string getListenerDescription() const { DARABONBA_PTR_GET_DEFAULT(listenerDescription_, "") };
    inline CreateListenerShrinkRequest& setListenerDescription(string listenerDescription) { DARABONBA_PTR_SET_VALUE(listenerDescription_, listenerDescription) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline CreateListenerShrinkRequest& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // listenerProtocol Field Functions 
    bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
    void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
    inline string getListenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
    inline CreateListenerShrinkRequest& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline CreateListenerShrinkRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // mss Field Functions 
    bool hasMss() const { return this->mss_ != nullptr;};
    void deleteMss() { this->mss_ = nullptr;};
    inline int32_t getMss() const { DARABONBA_PTR_GET_DEFAULT(mss_, 0) };
    inline CreateListenerShrinkRequest& setMss(int32_t mss) { DARABONBA_PTR_SET_VALUE(mss_, mss) };


    // proxyProtocolEnabled Field Functions 
    bool hasProxyProtocolEnabled() const { return this->proxyProtocolEnabled_ != nullptr;};
    void deleteProxyProtocolEnabled() { this->proxyProtocolEnabled_ = nullptr;};
    inline bool getProxyProtocolEnabled() const { DARABONBA_PTR_GET_DEFAULT(proxyProtocolEnabled_, false) };
    inline CreateListenerShrinkRequest& setProxyProtocolEnabled(bool proxyProtocolEnabled) { DARABONBA_PTR_SET_VALUE(proxyProtocolEnabled_, proxyProtocolEnabled) };


    // proxyProtocolV2ConfigShrink Field Functions 
    bool hasProxyProtocolV2ConfigShrink() const { return this->proxyProtocolV2ConfigShrink_ != nullptr;};
    void deleteProxyProtocolV2ConfigShrink() { this->proxyProtocolV2ConfigShrink_ = nullptr;};
    inline string getProxyProtocolV2ConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(proxyProtocolV2ConfigShrink_, "") };
    inline CreateListenerShrinkRequest& setProxyProtocolV2ConfigShrink(string proxyProtocolV2ConfigShrink) { DARABONBA_PTR_SET_VALUE(proxyProtocolV2ConfigShrink_, proxyProtocolV2ConfigShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateListenerShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // secSensorEnabled Field Functions 
    bool hasSecSensorEnabled() const { return this->secSensorEnabled_ != nullptr;};
    void deleteSecSensorEnabled() { this->secSensorEnabled_ = nullptr;};
    inline bool getSecSensorEnabled() const { DARABONBA_PTR_GET_DEFAULT(secSensorEnabled_, false) };
    inline CreateListenerShrinkRequest& setSecSensorEnabled(bool secSensorEnabled) { DARABONBA_PTR_SET_VALUE(secSensorEnabled_, secSensorEnabled) };


    // securityPolicyId Field Functions 
    bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
    void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
    inline string getSecurityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
    inline CreateListenerShrinkRequest& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


    // serverGroupId Field Functions 
    bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
    void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
    inline string getServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
    inline CreateListenerShrinkRequest& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


    // startPort Field Functions 
    bool hasStartPort() const { return this->startPort_ != nullptr;};
    void deleteStartPort() { this->startPort_ = nullptr;};
    inline int32_t getStartPort() const { DARABONBA_PTR_GET_DEFAULT(startPort_, 0) };
    inline CreateListenerShrinkRequest& setStartPort(int32_t startPort) { DARABONBA_PTR_SET_VALUE(startPort_, startPort) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateListenerShrinkRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateListenerShrinkRequest::Tag>) };
    inline vector<CreateListenerShrinkRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateListenerShrinkRequest::Tag>) };
    inline CreateListenerShrinkRequest& setTag(const vector<CreateListenerShrinkRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateListenerShrinkRequest& setTag(vector<CreateListenerShrinkRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // Specifies whether to enable ALPN. Valid values:
    // 
    // - **true**: enables ALPN.
    // 
    // - **false** (default): disables ALPN.
    shared_ptr<bool> alpnEnabled_ {};
    // The ALPN policy. Valid values:
    // 
    // - **HTTP1Only**: negotiates only HTTP/1.x. The priority is HTTP/1.1 > HTTP/1.0.
    // - **HTTP2Only**: negotiates only HTTP/2.
    // - **HTTP2Optional**: prefers HTTP/1.x but also accepts HTTP/2. The priority is HTTP/1.1 > HTTP/1.0 > HTTP/2.
    // - **HTTP2Preferred**: prefers HTTP/2 but also accepts HTTP/1.x. The priority is HTTP/2 > HTTP/1.1 > HTTP/1.0.
    // 
    // > You must configure this parameter after **AlpnEnabled** is enabled.
    shared_ptr<string> alpnPolicy_ {};
    // The CA certificate list. This parameter takes effect only for TCPSSL listeners.
    // 
    // > Currently, you can add only one CA certificate.
    shared_ptr<vector<string>> caCertificateIds_ {};
    // Specifies whether to enable mutual authentication. Valid values:
    // 
    // - **true**: enables mutual authentication.
    // 
    // - **false** (default): disables mutual authentication.
    shared_ptr<bool> caEnabled_ {};
    // The server certificate list. This parameter takes effect only for TCPSSL listeners.
    // 
    // > Currently, you can add only one server certificate.
    shared_ptr<vector<string>> certificateIds_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate a parameter value on your client to ensure that the value is unique across different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is unique.
    shared_ptr<string> clientToken_ {};
    // The limit on the number of new connections processed per second by the listener in each zone (VIP). Valid values: **0** to **1000000**. **0** indicates that no limit is applied.
    shared_ptr<int32_t> cps_ {};
    // Specifies whether to only precheck the request. Valid values:
    // - **true**: sends a precheck request without creating the listener. The system checks whether required parameters are specified, the request format, and service limits. If the request fails the precheck, the corresponding error is returned. If the request passes the precheck, the DryRunOperation error code is returned.
    // - **false** (default): sends a regular request. If the request passes the precheck, an HTTP 2xx status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The end port for all-port listening. Valid values: **1** to **65535**.
    // The end port must be greater than the start port.
    // 
    // > You must configure this parameter when **ListenerPort** is set to **0**.
    shared_ptr<int32_t> endPort_ {};
    // The idle timeout period for connections. Unit: seconds.
    // 
    // - If **ListenerProtocol** is set to **TCP** or **TCPSSL**, the valid values are **10** to **900**. Default value: **900**.
    // 
    // - If **ListenerProtocol** is set to **UDP**, the valid values are **10** to **90**. Default value: **90**.
    shared_ptr<int32_t> idleTimeout_ {};
    // The custom listener name.
    // 
    // The name must be 2 to 256 characters in length, and can contain Chinese characters, English letters, digits, commas (,), periods (.), semicolons (;), forward slashes (/), at signs (@), underscores (_), and hyphens (-).
    shared_ptr<string> listenerDescription_ {};
    // The listener port. Valid values: **0** to **65535**.
    // 
    // **0**: indicates that the all-port feature is used. If you set this parameter to **0**, you must configure **StartPort** and **EndPort**.
    // 
    // This parameter is required.
    shared_ptr<int32_t> listenerPort_ {};
    // The listener protocol. Valid values: **TCP**, **UDP**, and **TCPSSL**.
    // 
    // This parameter is required.
    shared_ptr<string> listenerProtocol_ {};
    // The Network Load Balancer (NLB) instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> loadBalancerId_ {};
    // The maximum segment size (MSS) of TCP packets. Unit: bytes. Valid values: **0** to **1500**.
    // **0**: indicates that the MSS value of user TCP packets is not modified.
    // 
    // > This parameter is supported only by TCP and TCPSSL listeners.
    shared_ptr<int32_t> mss_ {};
    // Specifies whether to use the Proxy Protocol to pass the client source IP address to backend servers. Valid values:
    // 
    // - **true**: enables the feature.
    // 
    // - **false** (default): disables the feature.
    shared_ptr<bool> proxyProtocolEnabled_ {};
    // The configuration for passing the VpcId, PrivateLinkEpId, and PrivateLinkEpsId information to backend servers by using the Proxy Protocol.
    shared_ptr<string> proxyProtocolV2ConfigShrink_ {};
    // The region ID of the Network Load Balancer (NLB) instance. 
    // 
    // You can invoke the [DescribeRegions](https://help.aliyun.com/document_detail/443657.html) operation to query region IDs.
    shared_ptr<string> regionId_ {};
    // Specifies whether to enable second-level monitoring. Valid values:
    // 
    // - **true**: enables second-level monitoring.
    // 
    // - **false** (default): disables second-level monitoring.
    shared_ptr<bool> secSensorEnabled_ {};
    // The ID of the security policy. System security policies and custom security policies are supported.
    // 
    // - System policies: **tls_cipher_policy_1_0** (default), **tls_cipher_policy_1_1**, **tls_cipher_policy_1_2**, **tls_cipher_policy_1_2_strict**, and **tls_cipher_policy_1_2_strict_with_1_3**.
    // - Custom security policies: Enter the ID of a custom security policy.
    //     - To create a custom policy, refer to [CreateSecurityPolicy](https://help.aliyun.com/document_detail/445901.html).
    //     - To query security policies, refer to [ListSecurityPolicy](https://help.aliyun.com/document_detail/445900.html).
    // 
    // > This parameter takes effect only for TCPSSL listeners.
    shared_ptr<string> securityPolicyId_ {};
    // The ID of the server group.
    // > - If **ListenerProtocol** is set to **TCP**, the listener supports server groups whose backend protocol is **TCP** or **TCP_UDP**, but does not support server groups whose backend protocol is **UDP**.
    // > - If **ListenerProtocol** is set to **UDP**, the listener supports server groups whose backend protocol is **UDP** or **TCP_UDP**, but does not support server groups whose backend protocol is **TCP**.
    // > - If **ListenerProtocol** is set to **TCPSSL**, the listener supports server groups whose backend protocol is **TCP** and for which **client address preservation is disabled**. It does not support server groups whose backend protocol is **TCP** and for which **client address preservation is enabled**, or server groups whose backend protocol is **UDP** or **TCP_UDP**.
    shared_ptr<string> serverGroupId_ {};
    // The start port for all-port listening. Valid values: **1** to **65535**.
    // 
    // > You must configure this parameter when **ListenerPort** is set to **0**.
    shared_ptr<int32_t> startPort_ {};
    // The list of tags.
    shared_ptr<vector<CreateListenerShrinkRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
