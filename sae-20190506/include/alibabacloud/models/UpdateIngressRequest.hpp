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
      DARABONBA_PTR_TO_JSON(EnableGzip, enableGzip_);
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
      DARABONBA_PTR_FROM_JSON(EnableGzip, enableGzip_);
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
        && this->certIds_ == nullptr && this->corsConfig_ == nullptr && this->defaultRule_ == nullptr && this->description_ == nullptr && this->enableGzip_ == nullptr
        && this->enableXForwardedFor_ == nullptr && this->enableXForwardedForClientSrcPort_ == nullptr && this->enableXForwardedForProto_ == nullptr && this->enableXForwardedForSlbId_ == nullptr && this->enableXForwardedForSlbPort_ == nullptr
        && this->idleTimeout_ == nullptr && this->ingressId_ == nullptr && this->listenerPort_ == nullptr && this->listenerProtocol_ == nullptr && this->loadBalanceType_ == nullptr
        && this->requestTimeout_ == nullptr && this->rules_ == nullptr && this->securityPolicyId_ == nullptr; };
    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline UpdateIngressRequest& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certIds Field Functions 
    bool hasCertIds() const { return this->certIds_ != nullptr;};
    void deleteCertIds() { this->certIds_ = nullptr;};
    inline string getCertIds() const { DARABONBA_PTR_GET_DEFAULT(certIds_, "") };
    inline UpdateIngressRequest& setCertIds(string certIds) { DARABONBA_PTR_SET_VALUE(certIds_, certIds) };


    // corsConfig Field Functions 
    bool hasCorsConfig() const { return this->corsConfig_ != nullptr;};
    void deleteCorsConfig() { this->corsConfig_ = nullptr;};
    inline string getCorsConfig() const { DARABONBA_PTR_GET_DEFAULT(corsConfig_, "") };
    inline UpdateIngressRequest& setCorsConfig(string corsConfig) { DARABONBA_PTR_SET_VALUE(corsConfig_, corsConfig) };


    // defaultRule Field Functions 
    bool hasDefaultRule() const { return this->defaultRule_ != nullptr;};
    void deleteDefaultRule() { this->defaultRule_ = nullptr;};
    inline string getDefaultRule() const { DARABONBA_PTR_GET_DEFAULT(defaultRule_, "") };
    inline UpdateIngressRequest& setDefaultRule(string defaultRule) { DARABONBA_PTR_SET_VALUE(defaultRule_, defaultRule) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateIngressRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableGzip Field Functions 
    bool hasEnableGzip() const { return this->enableGzip_ != nullptr;};
    void deleteEnableGzip() { this->enableGzip_ = nullptr;};
    inline bool getEnableGzip() const { DARABONBA_PTR_GET_DEFAULT(enableGzip_, false) };
    inline UpdateIngressRequest& setEnableGzip(bool enableGzip) { DARABONBA_PTR_SET_VALUE(enableGzip_, enableGzip) };


    // enableXForwardedFor Field Functions 
    bool hasEnableXForwardedFor() const { return this->enableXForwardedFor_ != nullptr;};
    void deleteEnableXForwardedFor() { this->enableXForwardedFor_ = nullptr;};
    inline bool getEnableXForwardedFor() const { DARABONBA_PTR_GET_DEFAULT(enableXForwardedFor_, false) };
    inline UpdateIngressRequest& setEnableXForwardedFor(bool enableXForwardedFor) { DARABONBA_PTR_SET_VALUE(enableXForwardedFor_, enableXForwardedFor) };


    // enableXForwardedForClientSrcPort Field Functions 
    bool hasEnableXForwardedForClientSrcPort() const { return this->enableXForwardedForClientSrcPort_ != nullptr;};
    void deleteEnableXForwardedForClientSrcPort() { this->enableXForwardedForClientSrcPort_ = nullptr;};
    inline bool getEnableXForwardedForClientSrcPort() const { DARABONBA_PTR_GET_DEFAULT(enableXForwardedForClientSrcPort_, false) };
    inline UpdateIngressRequest& setEnableXForwardedForClientSrcPort(bool enableXForwardedForClientSrcPort) { DARABONBA_PTR_SET_VALUE(enableXForwardedForClientSrcPort_, enableXForwardedForClientSrcPort) };


    // enableXForwardedForProto Field Functions 
    bool hasEnableXForwardedForProto() const { return this->enableXForwardedForProto_ != nullptr;};
    void deleteEnableXForwardedForProto() { this->enableXForwardedForProto_ = nullptr;};
    inline bool getEnableXForwardedForProto() const { DARABONBA_PTR_GET_DEFAULT(enableXForwardedForProto_, false) };
    inline UpdateIngressRequest& setEnableXForwardedForProto(bool enableXForwardedForProto) { DARABONBA_PTR_SET_VALUE(enableXForwardedForProto_, enableXForwardedForProto) };


    // enableXForwardedForSlbId Field Functions 
    bool hasEnableXForwardedForSlbId() const { return this->enableXForwardedForSlbId_ != nullptr;};
    void deleteEnableXForwardedForSlbId() { this->enableXForwardedForSlbId_ = nullptr;};
    inline bool getEnableXForwardedForSlbId() const { DARABONBA_PTR_GET_DEFAULT(enableXForwardedForSlbId_, false) };
    inline UpdateIngressRequest& setEnableXForwardedForSlbId(bool enableXForwardedForSlbId) { DARABONBA_PTR_SET_VALUE(enableXForwardedForSlbId_, enableXForwardedForSlbId) };


    // enableXForwardedForSlbPort Field Functions 
    bool hasEnableXForwardedForSlbPort() const { return this->enableXForwardedForSlbPort_ != nullptr;};
    void deleteEnableXForwardedForSlbPort() { this->enableXForwardedForSlbPort_ = nullptr;};
    inline bool getEnableXForwardedForSlbPort() const { DARABONBA_PTR_GET_DEFAULT(enableXForwardedForSlbPort_, false) };
    inline UpdateIngressRequest& setEnableXForwardedForSlbPort(bool enableXForwardedForSlbPort) { DARABONBA_PTR_SET_VALUE(enableXForwardedForSlbPort_, enableXForwardedForSlbPort) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t getIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline UpdateIngressRequest& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // ingressId Field Functions 
    bool hasIngressId() const { return this->ingressId_ != nullptr;};
    void deleteIngressId() { this->ingressId_ = nullptr;};
    inline int64_t getIngressId() const { DARABONBA_PTR_GET_DEFAULT(ingressId_, 0L) };
    inline UpdateIngressRequest& setIngressId(int64_t ingressId) { DARABONBA_PTR_SET_VALUE(ingressId_, ingressId) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline string getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, "") };
    inline UpdateIngressRequest& setListenerPort(string listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // listenerProtocol Field Functions 
    bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
    void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
    inline string getListenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
    inline UpdateIngressRequest& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


    // loadBalanceType Field Functions 
    bool hasLoadBalanceType() const { return this->loadBalanceType_ != nullptr;};
    void deleteLoadBalanceType() { this->loadBalanceType_ = nullptr;};
    inline string getLoadBalanceType() const { DARABONBA_PTR_GET_DEFAULT(loadBalanceType_, "") };
    inline UpdateIngressRequest& setLoadBalanceType(string loadBalanceType) { DARABONBA_PTR_SET_VALUE(loadBalanceType_, loadBalanceType) };


    // requestTimeout Field Functions 
    bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
    void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
    inline int32_t getRequestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
    inline UpdateIngressRequest& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline string getRules() const { DARABONBA_PTR_GET_DEFAULT(rules_, "") };
    inline UpdateIngressRequest& setRules(string rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };


    // securityPolicyId Field Functions 
    bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
    void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
    inline string getSecurityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
    inline UpdateIngressRequest& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


  protected:
    // The ID of the Classic Load Balancer (CLB) certificate. Valid values:
    // 
    // - If **LoadBalanceType** is set to **clb**, use this field to configure the certificate for the HTTPS listener.
    // 
    // For more information about using SSL certificate IDs in CLB, see [Manage certificates (CLB)](https://help.aliyun.com/document_detail/90792.html).
    shared_ptr<string> certId_ {};
    // The IDs of multiple Application Load Balancer (ALB) certificates. Valid values:
    // 
    // - If **LoadBalanceType** is set to **alb**, use this field to configure multiple certificates for the HTTPS listener. Separate multiple certificate IDs with commas (,).
    // 
    // - You must obtain the SSL certificate IDs used by ALB from the Certificate Management Service. For example, if you configure `756***-cn-hangzhou`, `756***` is the certificate ID obtained from the product page, and `-cn-hangzhou` is a fixed suffix. For more information, see [Manage certificates (ALB)](https://help.aliyun.com/document_detail/209076.html).
    shared_ptr<string> certIds_ {};
    // The cross-origin resource sharing (CORS) configuration.
    shared_ptr<string> corsConfig_ {};
    // The default forwarding rule. Traffic is forwarded to a specified application through a specified port based on the IP address. The parameters are described as follows:
    // 
    // - **appId**: the ID of the application.
    // - **containerPort**: the port of the application instance.
    // 
    // > All requests that do not match or meet the forwarding rules in **Rules** are forwarded to the specified application.
    shared_ptr<string> defaultRule_ {};
    // The name of the routing rule.
    shared_ptr<string> description_ {};
    // Specifies whether to enable data compression.
    shared_ptr<bool> enableGzip_ {};
    // Specifies whether to enable the retrieval of the client IP address through the X-Forwarded-For header field.
    shared_ptr<bool> enableXForwardedFor_ {};
    // Specifies whether to retrieve the listening port of the load balancing instance through the X-Forwarded-Port header field.
    shared_ptr<bool> enableXForwardedForClientSrcPort_ {};
    // Specifies whether to retrieve the listening protocol of the load balancing instance through the X-Forwarded-Proto header field.
    shared_ptr<bool> enableXForwardedForProto_ {};
    // Specifies whether to retrieve the instance ID of the load balancing instance through the SLB-ID header field.
    shared_ptr<bool> enableXForwardedForSlbId_ {};
    // Specifies whether to retrieve the listening port of the load balancing instance through the X-Forwarded-Port header field.
    shared_ptr<bool> enableXForwardedForSlbPort_ {};
    // The idle connection timeout period, in seconds.
    // > A value of 0 indicates that the default idle timeout value is used.
    shared_ptr<int32_t> idleTimeout_ {};
    // The ID of the routing rule.
    // 
    // This parameter is required.
    shared_ptr<int64_t> ingressId_ {};
    // The listening port of the Server Load Balancer (SLB) instance. The port must not be occupied.
    shared_ptr<string> listenerPort_ {};
    // The request forwarding protocol. Valid values:
    // 
    // - **HTTP**: applicable to applications that need to identify data content.
    // - **HTTPS**: applicable to applications that require encrypted transmission.
    shared_ptr<string> listenerProtocol_ {};
    // **[Deprecated]** This parameter is deprecated and updates are no longer supported.
    shared_ptr<string> loadBalanceType_ {};
    // The request timeout period, in seconds.
    shared_ptr<int32_t> requestTimeout_ {};
    // The forwarding rules. Traffic is forwarded to a specified application through a specified port based on the domain name and request path. The parameters are described as follows:
    // 
    // - **appId**: the ID of the application.
    // - **containerPort**: the port of the application instance.
    // - **domain**: the domain name.
    // - **path**: the request path.
    shared_ptr<string> rules_ {};
    // The ID of the security policy instance.
    shared_ptr<string> securityPolicyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
