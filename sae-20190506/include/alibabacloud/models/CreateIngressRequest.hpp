// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINGRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINGRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateIngressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIngressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CertIds, certIds_);
      DARABONBA_PTR_TO_JSON(CorsConfig, corsConfig_);
      DARABONBA_PTR_TO_JSON(DefaultRule, defaultRule_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableGzip, enableGzip_);
      DARABONBA_PTR_TO_JSON(EnableXForwardedFor, enableXForwardedFor_);
      DARABONBA_PTR_TO_JSON(EnableXForwardedForClientSrcPort, enableXForwardedForClientSrcPort_);
      DARABONBA_PTR_TO_JSON(EnableXForwardedForProto, enableXForwardedForProto_);
      DARABONBA_PTR_TO_JSON(EnableXForwardedForSlbId, enableXForwardedForSlbId_);
      DARABONBA_PTR_TO_JSON(EnableXForwardedForSlbPort, enableXForwardedForSlbPort_);
      DARABONBA_PTR_TO_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_TO_JSON(LoadBalanceType, loadBalanceType_);
      DARABONBA_PTR_TO_JSON(LoadBalancerEdition, loadBalancerEdition_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_TO_JSON(SlbId, slbId_);
      DARABONBA_PTR_TO_JSON(ZoneMappings, zoneMappings_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIngressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CertIds, certIds_);
      DARABONBA_PTR_FROM_JSON(CorsConfig, corsConfig_);
      DARABONBA_PTR_FROM_JSON(DefaultRule, defaultRule_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableGzip, enableGzip_);
      DARABONBA_PTR_FROM_JSON(EnableXForwardedFor, enableXForwardedFor_);
      DARABONBA_PTR_FROM_JSON(EnableXForwardedForClientSrcPort, enableXForwardedForClientSrcPort_);
      DARABONBA_PTR_FROM_JSON(EnableXForwardedForProto, enableXForwardedForProto_);
      DARABONBA_PTR_FROM_JSON(EnableXForwardedForSlbId, enableXForwardedForSlbId_);
      DARABONBA_PTR_FROM_JSON(EnableXForwardedForSlbPort, enableXForwardedForSlbPort_);
      DARABONBA_PTR_FROM_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_FROM_JSON(LoadBalanceType, loadBalanceType_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerEdition, loadBalancerEdition_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
      DARABONBA_PTR_FROM_JSON(ZoneMappings, zoneMappings_);
    };
    CreateIngressRequest() = default ;
    CreateIngressRequest(const CreateIngressRequest &) = default ;
    CreateIngressRequest(CreateIngressRequest &&) = default ;
    CreateIngressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIngressRequest() = default ;
    CreateIngressRequest& operator=(const CreateIngressRequest &) = default ;
    CreateIngressRequest& operator=(CreateIngressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressType_ == nullptr
        && this->certId_ == nullptr && this->certIds_ == nullptr && this->corsConfig_ == nullptr && this->defaultRule_ == nullptr && this->description_ == nullptr
        && this->enableGzip_ == nullptr && this->enableXForwardedFor_ == nullptr && this->enableXForwardedForClientSrcPort_ == nullptr && this->enableXForwardedForProto_ == nullptr && this->enableXForwardedForSlbId_ == nullptr
        && this->enableXForwardedForSlbPort_ == nullptr && this->idleTimeout_ == nullptr && this->listenerPort_ == nullptr && this->listenerProtocol_ == nullptr && this->loadBalanceType_ == nullptr
        && this->loadBalancerEdition_ == nullptr && this->namespaceId_ == nullptr && this->requestTimeout_ == nullptr && this->rules_ == nullptr && this->securityPolicyId_ == nullptr
        && this->slbId_ == nullptr && this->zoneMappings_ == nullptr; };
    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline CreateIngressRequest& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline CreateIngressRequest& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certIds Field Functions 
    bool hasCertIds() const { return this->certIds_ != nullptr;};
    void deleteCertIds() { this->certIds_ = nullptr;};
    inline string getCertIds() const { DARABONBA_PTR_GET_DEFAULT(certIds_, "") };
    inline CreateIngressRequest& setCertIds(string certIds) { DARABONBA_PTR_SET_VALUE(certIds_, certIds) };


    // corsConfig Field Functions 
    bool hasCorsConfig() const { return this->corsConfig_ != nullptr;};
    void deleteCorsConfig() { this->corsConfig_ = nullptr;};
    inline string getCorsConfig() const { DARABONBA_PTR_GET_DEFAULT(corsConfig_, "") };
    inline CreateIngressRequest& setCorsConfig(string corsConfig) { DARABONBA_PTR_SET_VALUE(corsConfig_, corsConfig) };


    // defaultRule Field Functions 
    bool hasDefaultRule() const { return this->defaultRule_ != nullptr;};
    void deleteDefaultRule() { this->defaultRule_ = nullptr;};
    inline string getDefaultRule() const { DARABONBA_PTR_GET_DEFAULT(defaultRule_, "") };
    inline CreateIngressRequest& setDefaultRule(string defaultRule) { DARABONBA_PTR_SET_VALUE(defaultRule_, defaultRule) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateIngressRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableGzip Field Functions 
    bool hasEnableGzip() const { return this->enableGzip_ != nullptr;};
    void deleteEnableGzip() { this->enableGzip_ = nullptr;};
    inline bool getEnableGzip() const { DARABONBA_PTR_GET_DEFAULT(enableGzip_, false) };
    inline CreateIngressRequest& setEnableGzip(bool enableGzip) { DARABONBA_PTR_SET_VALUE(enableGzip_, enableGzip) };


    // enableXForwardedFor Field Functions 
    bool hasEnableXForwardedFor() const { return this->enableXForwardedFor_ != nullptr;};
    void deleteEnableXForwardedFor() { this->enableXForwardedFor_ = nullptr;};
    inline bool getEnableXForwardedFor() const { DARABONBA_PTR_GET_DEFAULT(enableXForwardedFor_, false) };
    inline CreateIngressRequest& setEnableXForwardedFor(bool enableXForwardedFor) { DARABONBA_PTR_SET_VALUE(enableXForwardedFor_, enableXForwardedFor) };


    // enableXForwardedForClientSrcPort Field Functions 
    bool hasEnableXForwardedForClientSrcPort() const { return this->enableXForwardedForClientSrcPort_ != nullptr;};
    void deleteEnableXForwardedForClientSrcPort() { this->enableXForwardedForClientSrcPort_ = nullptr;};
    inline bool getEnableXForwardedForClientSrcPort() const { DARABONBA_PTR_GET_DEFAULT(enableXForwardedForClientSrcPort_, false) };
    inline CreateIngressRequest& setEnableXForwardedForClientSrcPort(bool enableXForwardedForClientSrcPort) { DARABONBA_PTR_SET_VALUE(enableXForwardedForClientSrcPort_, enableXForwardedForClientSrcPort) };


    // enableXForwardedForProto Field Functions 
    bool hasEnableXForwardedForProto() const { return this->enableXForwardedForProto_ != nullptr;};
    void deleteEnableXForwardedForProto() { this->enableXForwardedForProto_ = nullptr;};
    inline bool getEnableXForwardedForProto() const { DARABONBA_PTR_GET_DEFAULT(enableXForwardedForProto_, false) };
    inline CreateIngressRequest& setEnableXForwardedForProto(bool enableXForwardedForProto) { DARABONBA_PTR_SET_VALUE(enableXForwardedForProto_, enableXForwardedForProto) };


    // enableXForwardedForSlbId Field Functions 
    bool hasEnableXForwardedForSlbId() const { return this->enableXForwardedForSlbId_ != nullptr;};
    void deleteEnableXForwardedForSlbId() { this->enableXForwardedForSlbId_ = nullptr;};
    inline bool getEnableXForwardedForSlbId() const { DARABONBA_PTR_GET_DEFAULT(enableXForwardedForSlbId_, false) };
    inline CreateIngressRequest& setEnableXForwardedForSlbId(bool enableXForwardedForSlbId) { DARABONBA_PTR_SET_VALUE(enableXForwardedForSlbId_, enableXForwardedForSlbId) };


    // enableXForwardedForSlbPort Field Functions 
    bool hasEnableXForwardedForSlbPort() const { return this->enableXForwardedForSlbPort_ != nullptr;};
    void deleteEnableXForwardedForSlbPort() { this->enableXForwardedForSlbPort_ = nullptr;};
    inline bool getEnableXForwardedForSlbPort() const { DARABONBA_PTR_GET_DEFAULT(enableXForwardedForSlbPort_, false) };
    inline CreateIngressRequest& setEnableXForwardedForSlbPort(bool enableXForwardedForSlbPort) { DARABONBA_PTR_SET_VALUE(enableXForwardedForSlbPort_, enableXForwardedForSlbPort) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t getIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline CreateIngressRequest& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline CreateIngressRequest& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // listenerProtocol Field Functions 
    bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
    void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
    inline string getListenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
    inline CreateIngressRequest& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


    // loadBalanceType Field Functions 
    bool hasLoadBalanceType() const { return this->loadBalanceType_ != nullptr;};
    void deleteLoadBalanceType() { this->loadBalanceType_ = nullptr;};
    inline string getLoadBalanceType() const { DARABONBA_PTR_GET_DEFAULT(loadBalanceType_, "") };
    inline CreateIngressRequest& setLoadBalanceType(string loadBalanceType) { DARABONBA_PTR_SET_VALUE(loadBalanceType_, loadBalanceType) };


    // loadBalancerEdition Field Functions 
    bool hasLoadBalancerEdition() const { return this->loadBalancerEdition_ != nullptr;};
    void deleteLoadBalancerEdition() { this->loadBalancerEdition_ = nullptr;};
    inline string getLoadBalancerEdition() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerEdition_, "") };
    inline CreateIngressRequest& setLoadBalancerEdition(string loadBalancerEdition) { DARABONBA_PTR_SET_VALUE(loadBalancerEdition_, loadBalancerEdition) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline CreateIngressRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // requestTimeout Field Functions 
    bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
    void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
    inline int32_t getRequestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
    inline CreateIngressRequest& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline string getRules() const { DARABONBA_PTR_GET_DEFAULT(rules_, "") };
    inline CreateIngressRequest& setRules(string rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };


    // securityPolicyId Field Functions 
    bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
    void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
    inline string getSecurityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
    inline CreateIngressRequest& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


    // slbId Field Functions 
    bool hasSlbId() const { return this->slbId_ != nullptr;};
    void deleteSlbId() { this->slbId_ = nullptr;};
    inline string getSlbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
    inline CreateIngressRequest& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


    // zoneMappings Field Functions 
    bool hasZoneMappings() const { return this->zoneMappings_ != nullptr;};
    void deleteZoneMappings() { this->zoneMappings_ = nullptr;};
    inline string getZoneMappings() const { DARABONBA_PTR_GET_DEFAULT(zoneMappings_, "") };
    inline CreateIngressRequest& setZoneMappings(string zoneMappings) { DARABONBA_PTR_SET_VALUE(zoneMappings_, zoneMappings) };


  protected:
    // -
    shared_ptr<string> addressType_ {};
    // The ID of the **CLB** certificate. Valid values:
    // 
    // *   If you set **LoadBalanceType** to **clb**, you can use CertId to configure a certificate for the HTTPS listener.
    // 
    // For more information about how to use SSL certificate IDs for CLB, see [Manage certificates (CLB)](https://help.aliyun.com/document_detail/90792.html).
    shared_ptr<string> certId_ {};
    // The ID of the multi-certificate **ALB**. Valid values:
    // 
    // *   If the **LoadBalanceType** is **alb**, use this field to configure multiple certificates for HTTPS listeners. Separate multiple certificate IDs with commas (,).
    // *   The ID of the SSL certificate used by ALB must be obtained from the digital certificate product. For example, in the configuration `756***-cn-hangzhou`, the `756***` is the certificate ID obtained from the product page, and the `-cn-hangzhou` is a fixed suffix. For more information, see [Manage certificates](https://help.aliyun.com/document_detail/209076.html).
    shared_ptr<string> certIds_ {};
    // -
    shared_ptr<string> corsConfig_ {};
    // The default forwarding rule. Forwards traffic to a specified application through a specified port based on the IP address. The following table describes the parameters.
    // 
    // *   **appId**: the ID of the application.
    // *   **containerPort**: The port of the application instance.
    // 
    // >  All requests that do not match or satisfy **Rules** forwarding rules are forwarded to the specified application.
    // 
    // This parameter is required.
    shared_ptr<string> defaultRule_ {};
    // The name of the routing rule.
    shared_ptr<string> description_ {};
    // -
    shared_ptr<bool> enableGzip_ {};
    // -
    shared_ptr<bool> enableXForwardedFor_ {};
    // -
    shared_ptr<bool> enableXForwardedForClientSrcPort_ {};
    // -
    shared_ptr<bool> enableXForwardedForProto_ {};
    // -
    shared_ptr<bool> enableXForwardedForSlbId_ {};
    // -
    shared_ptr<bool> enableXForwardedForSlbPort_ {};
    // Specifies the connection idle timeout period. Unit: seconds. Valid values: 1 to 60. If there is no access request within the timeout period, the SLB will temporarily interrupt the current connection until the next request comes to re-establish a new connection.
    shared_ptr<int32_t> idleTimeout_ {};
    // The SLB listening port. This port cannot be occupied.
    // 
    // This parameter is required.
    shared_ptr<int32_t> listenerPort_ {};
    // The request forwarding protocol. Valid values:
    // 
    // *   **HTTP**: suitable for applications that need to identify data content.
    // *   **HTTPS**: suitable for applications that require encrypted transmission.
    shared_ptr<string> listenerProtocol_ {};
    // SLB the type of the SLB instance. It depends on the type that you entered when you created the routing rule and cannot be changed when you update it. Valid values:
    // 
    // *   **clb**: traditional SLB CLB (formerly SLB).
    // *   **alb**: Applied SLB ALB.
    shared_ptr<string> loadBalanceType_ {};
    // -
    shared_ptr<string> loadBalancerEdition_ {};
    // The ID of the namespace where the application resides. Currently, cross-namespace applications are not supported.
    // 
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
    // Specifies the request timeout period. Unit: seconds. Valid values: 1 to 180. If the backend server does not respond within the timeout period, the SLB abandons the wait and returns an HTTP 504 error code to the client.
    shared_ptr<int32_t> requestTimeout_ {};
    // The forwarding rule. Forwards traffic to a specified application through a specified port based on the domain name and request path. The following table describes the parameters.
    // 
    // *   **appId**: the ID of the application.
    // *   **containerPort**: The port of the application instance.
    // *   **domain**: the domain name.
    // *   **path**: the request path.
    // *   **backendProtocol**: The backend service protocol. Valid values: http, https, and grpc. Default value: http.
    // *   **rewritePath**: Rewrite the path.
    // 
    // >  Only ALB allows you to set the RewritePath feature. CLB does not support this feature.
    // 
    // This parameter is required.
    shared_ptr<string> rules_ {};
    // The ID of the security policy instance.
    shared_ptr<string> securityPolicyId_ {};
    // The Server Load Balancer (SLB) instance that is used by the routing rule.
    // 
    // >  SLB SLB instances include CLB instances and ALB instances.
    shared_ptr<string> slbId_ {};
    // -
    shared_ptr<string> zoneMappings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
