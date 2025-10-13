// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINGRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINGRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateIngressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIngressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CertIds, certIds_);
      DARABONBA_PTR_TO_JSON(CorsConfig, corsConfig_);
      DARABONBA_PTR_TO_JSON(DefaultRule, defaultRule_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableXForwardedFor, enableXForwardedFor_);
      DARABONBA_PTR_TO_JSON(EnableXForwardedForClientSrcPort, enableXForwardedForClientSrcPort_);
      DARABONBA_PTR_TO_JSON(EnableXForwardedForProto, enableXForwardedForProto_);
      DARABONBA_PTR_TO_JSON(EnableXForwardedForSlbId, enableXForwardedForSlbId_);
      DARABONBA_PTR_TO_JSON(EnableXForwardedForSlbPort, enableXForwardedForSlbPort_);
      DARABONBA_PTR_TO_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_TO_JSON(IngressId, ingressId_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_TO_JSON(LoadBalanceType, loadBalanceType_);
      DARABONBA_PTR_TO_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIngressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CertIds, certIds_);
      DARABONBA_PTR_FROM_JSON(CorsConfig, corsConfig_);
      DARABONBA_PTR_FROM_JSON(DefaultRule, defaultRule_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableXForwardedFor, enableXForwardedFor_);
      DARABONBA_PTR_FROM_JSON(EnableXForwardedForClientSrcPort, enableXForwardedForClientSrcPort_);
      DARABONBA_PTR_FROM_JSON(EnableXForwardedForProto, enableXForwardedForProto_);
      DARABONBA_PTR_FROM_JSON(EnableXForwardedForSlbId, enableXForwardedForSlbId_);
      DARABONBA_PTR_FROM_JSON(EnableXForwardedForSlbPort, enableXForwardedForSlbPort_);
      DARABONBA_PTR_FROM_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_FROM_JSON(IngressId, ingressId_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_FROM_JSON(LoadBalanceType, loadBalanceType_);
      DARABONBA_PTR_FROM_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
    };
    UpdateIngressRequest() = default ;
    UpdateIngressRequest(const UpdateIngressRequest &) = default ;
    UpdateIngressRequest(UpdateIngressRequest &&) = default ;
    UpdateIngressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIngressRequest() = default ;
    UpdateIngressRequest& operator=(const UpdateIngressRequest &) = default ;
    UpdateIngressRequest& operator=(UpdateIngressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certId_ == nullptr
        && return this->certIds_ == nullptr && return this->corsConfig_ == nullptr && return this->defaultRule_ == nullptr && return this->description_ == nullptr && return this->enableXForwardedFor_ == nullptr
        && return this->enableXForwardedForClientSrcPort_ == nullptr && return this->enableXForwardedForProto_ == nullptr && return this->enableXForwardedForSlbId_ == nullptr && return this->enableXForwardedForSlbPort_ == nullptr && return this->idleTimeout_ == nullptr
        && return this->ingressId_ == nullptr && return this->listenerPort_ == nullptr && return this->listenerProtocol_ == nullptr && return this->loadBalanceType_ == nullptr && return this->requestTimeout_ == nullptr
        && return this->rules_ == nullptr && return this->securityPolicyId_ == nullptr; };
    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline UpdateIngressRequest& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certIds Field Functions 
    bool hasCertIds() const { return this->certIds_ != nullptr;};
    void deleteCertIds() { this->certIds_ = nullptr;};
    inline string certIds() const { DARABONBA_PTR_GET_DEFAULT(certIds_, "") };
    inline UpdateIngressRequest& setCertIds(string certIds) { DARABONBA_PTR_SET_VALUE(certIds_, certIds) };


    // corsConfig Field Functions 
    bool hasCorsConfig() const { return this->corsConfig_ != nullptr;};
    void deleteCorsConfig() { this->corsConfig_ = nullptr;};
    inline string corsConfig() const { DARABONBA_PTR_GET_DEFAULT(corsConfig_, "") };
    inline UpdateIngressRequest& setCorsConfig(string corsConfig) { DARABONBA_PTR_SET_VALUE(corsConfig_, corsConfig) };


    // defaultRule Field Functions 
    bool hasDefaultRule() const { return this->defaultRule_ != nullptr;};
    void deleteDefaultRule() { this->defaultRule_ = nullptr;};
    inline string defaultRule() const { DARABONBA_PTR_GET_DEFAULT(defaultRule_, "") };
    inline UpdateIngressRequest& setDefaultRule(string defaultRule) { DARABONBA_PTR_SET_VALUE(defaultRule_, defaultRule) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateIngressRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableXForwardedFor Field Functions 
    bool hasEnableXForwardedFor() const { return this->enableXForwardedFor_ != nullptr;};
    void deleteEnableXForwardedFor() { this->enableXForwardedFor_ = nullptr;};
    inline bool enableXForwardedFor() const { DARABONBA_PTR_GET_DEFAULT(enableXForwardedFor_, false) };
    inline UpdateIngressRequest& setEnableXForwardedFor(bool enableXForwardedFor) { DARABONBA_PTR_SET_VALUE(enableXForwardedFor_, enableXForwardedFor) };


    // enableXForwardedForClientSrcPort Field Functions 
    bool hasEnableXForwardedForClientSrcPort() const { return this->enableXForwardedForClientSrcPort_ != nullptr;};
    void deleteEnableXForwardedForClientSrcPort() { this->enableXForwardedForClientSrcPort_ = nullptr;};
    inline bool enableXForwardedForClientSrcPort() const { DARABONBA_PTR_GET_DEFAULT(enableXForwardedForClientSrcPort_, false) };
    inline UpdateIngressRequest& setEnableXForwardedForClientSrcPort(bool enableXForwardedForClientSrcPort) { DARABONBA_PTR_SET_VALUE(enableXForwardedForClientSrcPort_, enableXForwardedForClientSrcPort) };


    // enableXForwardedForProto Field Functions 
    bool hasEnableXForwardedForProto() const { return this->enableXForwardedForProto_ != nullptr;};
    void deleteEnableXForwardedForProto() { this->enableXForwardedForProto_ = nullptr;};
    inline bool enableXForwardedForProto() const { DARABONBA_PTR_GET_DEFAULT(enableXForwardedForProto_, false) };
    inline UpdateIngressRequest& setEnableXForwardedForProto(bool enableXForwardedForProto) { DARABONBA_PTR_SET_VALUE(enableXForwardedForProto_, enableXForwardedForProto) };


    // enableXForwardedForSlbId Field Functions 
    bool hasEnableXForwardedForSlbId() const { return this->enableXForwardedForSlbId_ != nullptr;};
    void deleteEnableXForwardedForSlbId() { this->enableXForwardedForSlbId_ = nullptr;};
    inline bool enableXForwardedForSlbId() const { DARABONBA_PTR_GET_DEFAULT(enableXForwardedForSlbId_, false) };
    inline UpdateIngressRequest& setEnableXForwardedForSlbId(bool enableXForwardedForSlbId) { DARABONBA_PTR_SET_VALUE(enableXForwardedForSlbId_, enableXForwardedForSlbId) };


    // enableXForwardedForSlbPort Field Functions 
    bool hasEnableXForwardedForSlbPort() const { return this->enableXForwardedForSlbPort_ != nullptr;};
    void deleteEnableXForwardedForSlbPort() { this->enableXForwardedForSlbPort_ = nullptr;};
    inline bool enableXForwardedForSlbPort() const { DARABONBA_PTR_GET_DEFAULT(enableXForwardedForSlbPort_, false) };
    inline UpdateIngressRequest& setEnableXForwardedForSlbPort(bool enableXForwardedForSlbPort) { DARABONBA_PTR_SET_VALUE(enableXForwardedForSlbPort_, enableXForwardedForSlbPort) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t idleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline UpdateIngressRequest& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // ingressId Field Functions 
    bool hasIngressId() const { return this->ingressId_ != nullptr;};
    void deleteIngressId() { this->ingressId_ = nullptr;};
    inline int64_t ingressId() const { DARABONBA_PTR_GET_DEFAULT(ingressId_, 0L) };
    inline UpdateIngressRequest& setIngressId(int64_t ingressId) { DARABONBA_PTR_SET_VALUE(ingressId_, ingressId) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline string listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, "") };
    inline UpdateIngressRequest& setListenerPort(string listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // listenerProtocol Field Functions 
    bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
    void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
    inline string listenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
    inline UpdateIngressRequest& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


    // loadBalanceType Field Functions 
    bool hasLoadBalanceType() const { return this->loadBalanceType_ != nullptr;};
    void deleteLoadBalanceType() { this->loadBalanceType_ = nullptr;};
    inline string loadBalanceType() const { DARABONBA_PTR_GET_DEFAULT(loadBalanceType_, "") };
    inline UpdateIngressRequest& setLoadBalanceType(string loadBalanceType) { DARABONBA_PTR_SET_VALUE(loadBalanceType_, loadBalanceType) };


    // requestTimeout Field Functions 
    bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
    void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
    inline int32_t requestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
    inline UpdateIngressRequest& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline string rules() const { DARABONBA_PTR_GET_DEFAULT(rules_, "") };
    inline UpdateIngressRequest& setRules(string rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };


    // securityPolicyId Field Functions 
    bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
    void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
    inline string securityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
    inline UpdateIngressRequest& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


  protected:
    // The ID of the certificate that is associated with the Classic Load Balancer (**CLB**) instance.
    // 
    // *   If you set **LoadBalanceType** to **clb**, you can use CertId to configure a certificate for the HTTPS listener.
    // 
    // For more information about how to manage the SSL certificate IDs that are used by CLB instances, see [Overview](https://help.aliyun.com/document_detail/90792.html).
    std::shared_ptr<string> certId_ = nullptr;
    // The IDs of the certificates that are associated with the Application Load Balancer (**ALB**) instance.
    // 
    // *   If you set **LoadBalanceType** to **alb**, you can use CertIds to configure multiple certificates for the HTTPS listener. Separate multiple certificate IDs with commas (,).
    // *   The ID of the SSL certificate that is used by an ALB instance can be obtained from Certificate Management Service. For example, if you specify `756***-cn-hangzhou`, `756***` is the certificate ID that is obtained from the service page, and `-cn-hangzhou` is the fixed suffix. For more information, see [Manage certificates](https://help.aliyun.com/document_detail/209076.html).
    std::shared_ptr<string> certIds_ = nullptr;
    std::shared_ptr<string> corsConfig_ = nullptr;
    // The default forwarding rule. You can specify a port and an application in the default forwarding rule to forward traffic based on the IP address. The following list describes the involved parameters:
    // 
    // *   **appId**: the ID of the application.
    // *   **containerPort**: the container port of the application.
    // 
    // >  All requests that do not match the forwarding rules specified for Rules are forwarded over the port to the application.
    std::shared_ptr<string> defaultRule_ = nullptr;
    // The name of the routing rule.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enableXForwardedFor_ = nullptr;
    std::shared_ptr<bool> enableXForwardedForClientSrcPort_ = nullptr;
    std::shared_ptr<bool> enableXForwardedForProto_ = nullptr;
    std::shared_ptr<bool> enableXForwardedForSlbId_ = nullptr;
    std::shared_ptr<bool> enableXForwardedForSlbPort_ = nullptr;
    // The timeout period of idle connections. Unit: seconds.
    // 
    // >  A value of 0 indicates that the default value is used.
    std::shared_ptr<int32_t> idleTimeout_ = nullptr;
    // The ID of the routing rule.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> ingressId_ = nullptr;
    // The port specified for the Server Load Balancer (SLB) listener. You must specify a vacant port.
    std::shared_ptr<string> listenerPort_ = nullptr;
    // The protocol that is used to forward requests. Valid values:
    // 
    // *   **HTTP**: HTTP is suitable for applications that need to identify the transmitted data.
    // *   **HTTPS**: HTTPS is suitable for applications that require encrypted data transmission.
    std::shared_ptr<string> listenerProtocol_ = nullptr;
    // This parameter is discontinued.
    std::shared_ptr<string> loadBalanceType_ = nullptr;
    // The request timed out. Unit: seconds.
    std::shared_ptr<int32_t> requestTimeout_ = nullptr;
    // The forwarding rules. You can specify a port and an application in a forwarding rule to forward traffic based on the specified domain name and request path. The following list describes the involved parameters:
    // 
    // *   **appId**: the ID of the application.
    // *   **containerPort**: the container port of the application.
    // *   **domain**: the domain name.
    // *   **path**: the request path.
    std::shared_ptr<string> rules_ = nullptr;
    // The ID of a security policy.
    std::shared_ptr<string> securityPolicyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
