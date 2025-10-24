// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINGRESSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINGRESSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeIngressResponseBodyDataCorsConfig.hpp>
#include <alibabacloud/models/DescribeIngressResponseBodyDataDefaultRule.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIngressResponseBodyDataRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeIngressResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIngressResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CertIds, certIds_);
      DARABONBA_PTR_TO_JSON(CorsConfig, corsConfig_);
      DARABONBA_PTR_TO_JSON(CreatedBySae, createdBySae_);
      DARABONBA_PTR_TO_JSON(DefaultRule, defaultRule_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableGzip, enableGzip_);
      DARABONBA_PTR_TO_JSON(EnableXForwardedFor, enableXForwardedFor_);
      DARABONBA_PTR_TO_JSON(EnableXForwardedForClientSrcPort, enableXForwardedForClientSrcPort_);
      DARABONBA_PTR_TO_JSON(EnableXForwardedForProto, enableXForwardedForProto_);
      DARABONBA_PTR_TO_JSON(EnableXForwardedForSlbId, enableXForwardedForSlbId_);
      DARABONBA_PTR_TO_JSON(EnableXForwardedForSlbPort, enableXForwardedForSlbPort_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_TO_JSON(LoadBalanceType, loadBalanceType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_TO_JSON(SlbId, slbId_);
      DARABONBA_PTR_TO_JSON(SlbType, slbType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIngressResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CertIds, certIds_);
      DARABONBA_PTR_FROM_JSON(CorsConfig, corsConfig_);
      DARABONBA_PTR_FROM_JSON(CreatedBySae, createdBySae_);
      DARABONBA_PTR_FROM_JSON(DefaultRule, defaultRule_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableGzip, enableGzip_);
      DARABONBA_PTR_FROM_JSON(EnableXForwardedFor, enableXForwardedFor_);
      DARABONBA_PTR_FROM_JSON(EnableXForwardedForClientSrcPort, enableXForwardedForClientSrcPort_);
      DARABONBA_PTR_FROM_JSON(EnableXForwardedForProto, enableXForwardedForProto_);
      DARABONBA_PTR_FROM_JSON(EnableXForwardedForSlbId, enableXForwardedForSlbId_);
      DARABONBA_PTR_FROM_JSON(EnableXForwardedForSlbPort, enableXForwardedForSlbPort_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_FROM_JSON(LoadBalanceType, loadBalanceType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(SecurityPolicyId, securityPolicyId_);
      DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
      DARABONBA_PTR_FROM_JSON(SlbType, slbType_);
    };
    DescribeIngressResponseBodyData() = default ;
    DescribeIngressResponseBodyData(const DescribeIngressResponseBodyData &) = default ;
    DescribeIngressResponseBodyData(DescribeIngressResponseBodyData &&) = default ;
    DescribeIngressResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIngressResponseBodyData() = default ;
    DescribeIngressResponseBodyData& operator=(const DescribeIngressResponseBodyData &) = default ;
    DescribeIngressResponseBodyData& operator=(DescribeIngressResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certId_ == nullptr
        && return this->certIds_ == nullptr && return this->corsConfig_ == nullptr && return this->createdBySae_ == nullptr && return this->defaultRule_ == nullptr && return this->description_ == nullptr
        && return this->enableGzip_ == nullptr && return this->enableXForwardedFor_ == nullptr && return this->enableXForwardedForClientSrcPort_ == nullptr && return this->enableXForwardedForProto_ == nullptr && return this->enableXForwardedForSlbId_ == nullptr
        && return this->enableXForwardedForSlbPort_ == nullptr && return this->id_ == nullptr && return this->idleTimeout_ == nullptr && return this->listenerPort_ == nullptr && return this->listenerProtocol_ == nullptr
        && return this->loadBalanceType_ == nullptr && return this->name_ == nullptr && return this->namespaceId_ == nullptr && return this->requestTimeout_ == nullptr && return this->rules_ == nullptr
        && return this->securityPolicyId_ == nullptr && return this->slbId_ == nullptr && return this->slbType_ == nullptr; };
    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline DescribeIngressResponseBodyData& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certIds Field Functions 
    bool hasCertIds() const { return this->certIds_ != nullptr;};
    void deleteCertIds() { this->certIds_ = nullptr;};
    inline string certIds() const { DARABONBA_PTR_GET_DEFAULT(certIds_, "") };
    inline DescribeIngressResponseBodyData& setCertIds(string certIds) { DARABONBA_PTR_SET_VALUE(certIds_, certIds) };


    // corsConfig Field Functions 
    bool hasCorsConfig() const { return this->corsConfig_ != nullptr;};
    void deleteCorsConfig() { this->corsConfig_ = nullptr;};
    inline const Models::DescribeIngressResponseBodyDataCorsConfig & corsConfig() const { DARABONBA_PTR_GET_CONST(corsConfig_, Models::DescribeIngressResponseBodyDataCorsConfig) };
    inline Models::DescribeIngressResponseBodyDataCorsConfig corsConfig() { DARABONBA_PTR_GET(corsConfig_, Models::DescribeIngressResponseBodyDataCorsConfig) };
    inline DescribeIngressResponseBodyData& setCorsConfig(const Models::DescribeIngressResponseBodyDataCorsConfig & corsConfig) { DARABONBA_PTR_SET_VALUE(corsConfig_, corsConfig) };
    inline DescribeIngressResponseBodyData& setCorsConfig(Models::DescribeIngressResponseBodyDataCorsConfig && corsConfig) { DARABONBA_PTR_SET_RVALUE(corsConfig_, corsConfig) };


    // createdBySae Field Functions 
    bool hasCreatedBySae() const { return this->createdBySae_ != nullptr;};
    void deleteCreatedBySae() { this->createdBySae_ = nullptr;};
    inline bool createdBySae() const { DARABONBA_PTR_GET_DEFAULT(createdBySae_, false) };
    inline DescribeIngressResponseBodyData& setCreatedBySae(bool createdBySae) { DARABONBA_PTR_SET_VALUE(createdBySae_, createdBySae) };


    // defaultRule Field Functions 
    bool hasDefaultRule() const { return this->defaultRule_ != nullptr;};
    void deleteDefaultRule() { this->defaultRule_ = nullptr;};
    inline const Models::DescribeIngressResponseBodyDataDefaultRule & defaultRule() const { DARABONBA_PTR_GET_CONST(defaultRule_, Models::DescribeIngressResponseBodyDataDefaultRule) };
    inline Models::DescribeIngressResponseBodyDataDefaultRule defaultRule() { DARABONBA_PTR_GET(defaultRule_, Models::DescribeIngressResponseBodyDataDefaultRule) };
    inline DescribeIngressResponseBodyData& setDefaultRule(const Models::DescribeIngressResponseBodyDataDefaultRule & defaultRule) { DARABONBA_PTR_SET_VALUE(defaultRule_, defaultRule) };
    inline DescribeIngressResponseBodyData& setDefaultRule(Models::DescribeIngressResponseBodyDataDefaultRule && defaultRule) { DARABONBA_PTR_SET_RVALUE(defaultRule_, defaultRule) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeIngressResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableGzip Field Functions 
    bool hasEnableGzip() const { return this->enableGzip_ != nullptr;};
    void deleteEnableGzip() { this->enableGzip_ = nullptr;};
    inline bool enableGzip() const { DARABONBA_PTR_GET_DEFAULT(enableGzip_, false) };
    inline DescribeIngressResponseBodyData& setEnableGzip(bool enableGzip) { DARABONBA_PTR_SET_VALUE(enableGzip_, enableGzip) };


    // enableXForwardedFor Field Functions 
    bool hasEnableXForwardedFor() const { return this->enableXForwardedFor_ != nullptr;};
    void deleteEnableXForwardedFor() { this->enableXForwardedFor_ = nullptr;};
    inline bool enableXForwardedFor() const { DARABONBA_PTR_GET_DEFAULT(enableXForwardedFor_, false) };
    inline DescribeIngressResponseBodyData& setEnableXForwardedFor(bool enableXForwardedFor) { DARABONBA_PTR_SET_VALUE(enableXForwardedFor_, enableXForwardedFor) };


    // enableXForwardedForClientSrcPort Field Functions 
    bool hasEnableXForwardedForClientSrcPort() const { return this->enableXForwardedForClientSrcPort_ != nullptr;};
    void deleteEnableXForwardedForClientSrcPort() { this->enableXForwardedForClientSrcPort_ = nullptr;};
    inline bool enableXForwardedForClientSrcPort() const { DARABONBA_PTR_GET_DEFAULT(enableXForwardedForClientSrcPort_, false) };
    inline DescribeIngressResponseBodyData& setEnableXForwardedForClientSrcPort(bool enableXForwardedForClientSrcPort) { DARABONBA_PTR_SET_VALUE(enableXForwardedForClientSrcPort_, enableXForwardedForClientSrcPort) };


    // enableXForwardedForProto Field Functions 
    bool hasEnableXForwardedForProto() const { return this->enableXForwardedForProto_ != nullptr;};
    void deleteEnableXForwardedForProto() { this->enableXForwardedForProto_ = nullptr;};
    inline bool enableXForwardedForProto() const { DARABONBA_PTR_GET_DEFAULT(enableXForwardedForProto_, false) };
    inline DescribeIngressResponseBodyData& setEnableXForwardedForProto(bool enableXForwardedForProto) { DARABONBA_PTR_SET_VALUE(enableXForwardedForProto_, enableXForwardedForProto) };


    // enableXForwardedForSlbId Field Functions 
    bool hasEnableXForwardedForSlbId() const { return this->enableXForwardedForSlbId_ != nullptr;};
    void deleteEnableXForwardedForSlbId() { this->enableXForwardedForSlbId_ = nullptr;};
    inline bool enableXForwardedForSlbId() const { DARABONBA_PTR_GET_DEFAULT(enableXForwardedForSlbId_, false) };
    inline DescribeIngressResponseBodyData& setEnableXForwardedForSlbId(bool enableXForwardedForSlbId) { DARABONBA_PTR_SET_VALUE(enableXForwardedForSlbId_, enableXForwardedForSlbId) };


    // enableXForwardedForSlbPort Field Functions 
    bool hasEnableXForwardedForSlbPort() const { return this->enableXForwardedForSlbPort_ != nullptr;};
    void deleteEnableXForwardedForSlbPort() { this->enableXForwardedForSlbPort_ = nullptr;};
    inline bool enableXForwardedForSlbPort() const { DARABONBA_PTR_GET_DEFAULT(enableXForwardedForSlbPort_, false) };
    inline DescribeIngressResponseBodyData& setEnableXForwardedForSlbPort(bool enableXForwardedForSlbPort) { DARABONBA_PTR_SET_VALUE(enableXForwardedForSlbPort_, enableXForwardedForSlbPort) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeIngressResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t idleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline DescribeIngressResponseBodyData& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline DescribeIngressResponseBodyData& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // listenerProtocol Field Functions 
    bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
    void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
    inline string listenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
    inline DescribeIngressResponseBodyData& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


    // loadBalanceType Field Functions 
    bool hasLoadBalanceType() const { return this->loadBalanceType_ != nullptr;};
    void deleteLoadBalanceType() { this->loadBalanceType_ = nullptr;};
    inline string loadBalanceType() const { DARABONBA_PTR_GET_DEFAULT(loadBalanceType_, "") };
    inline DescribeIngressResponseBodyData& setLoadBalanceType(string loadBalanceType) { DARABONBA_PTR_SET_VALUE(loadBalanceType_, loadBalanceType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeIngressResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline DescribeIngressResponseBodyData& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // requestTimeout Field Functions 
    bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
    void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
    inline int32_t requestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
    inline DescribeIngressResponseBodyData& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::DescribeIngressResponseBodyDataRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::DescribeIngressResponseBodyDataRules>) };
    inline vector<Models::DescribeIngressResponseBodyDataRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::DescribeIngressResponseBodyDataRules>) };
    inline DescribeIngressResponseBodyData& setRules(const vector<Models::DescribeIngressResponseBodyDataRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeIngressResponseBodyData& setRules(vector<Models::DescribeIngressResponseBodyDataRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // securityPolicyId Field Functions 
    bool hasSecurityPolicyId() const { return this->securityPolicyId_ != nullptr;};
    void deleteSecurityPolicyId() { this->securityPolicyId_ = nullptr;};
    inline string securityPolicyId() const { DARABONBA_PTR_GET_DEFAULT(securityPolicyId_, "") };
    inline DescribeIngressResponseBodyData& setSecurityPolicyId(string securityPolicyId) { DARABONBA_PTR_SET_VALUE(securityPolicyId_, securityPolicyId) };


    // slbId Field Functions 
    bool hasSlbId() const { return this->slbId_ != nullptr;};
    void deleteSlbId() { this->slbId_ = nullptr;};
    inline string slbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
    inline DescribeIngressResponseBodyData& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


    // slbType Field Functions 
    bool hasSlbType() const { return this->slbType_ != nullptr;};
    void deleteSlbType() { this->slbType_ = nullptr;};
    inline string slbType() const { DARABONBA_PTR_GET_DEFAULT(slbType_, "") };
    inline DescribeIngressResponseBodyData& setSlbType(string slbType) { DARABONBA_PTR_SET_VALUE(slbType_, slbType) };


  protected:
    // The ID of the certificate that is associated with a Classic Load Balancer (**CLB**) instance.
    std::shared_ptr<string> certId_ = nullptr;
    // The ID of the certificate that is associated with an Application Load Balancer **ALB** instance.
    std::shared_ptr<string> certIds_ = nullptr;
    std::shared_ptr<Models::DescribeIngressResponseBodyDataCorsConfig> corsConfig_ = nullptr;
    std::shared_ptr<bool> createdBySae_ = nullptr;
    // The default rule.
    std::shared_ptr<Models::DescribeIngressResponseBodyDataDefaultRule> defaultRule_ = nullptr;
    // The name of a routing rule.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enableGzip_ = nullptr;
    std::shared_ptr<bool> enableXForwardedFor_ = nullptr;
    std::shared_ptr<bool> enableXForwardedForClientSrcPort_ = nullptr;
    std::shared_ptr<bool> enableXForwardedForProto_ = nullptr;
    std::shared_ptr<bool> enableXForwardedForSlbId_ = nullptr;
    std::shared_ptr<bool> enableXForwardedForSlbPort_ = nullptr;
    // The ID of a routing rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int32_t> idleTimeout_ = nullptr;
    // The listener ports for an SLB instance.
    std::shared_ptr<int32_t> listenerPort_ = nullptr;
    // The protocol used to forward requests. Valid values:
    // 
    // *   **HTTP**: HTTP is suitable for applications that need to identify the transmitted data.
    // *   **HTTPS**: HTTPS is suitable for applications that require encrypted data transmission.
    // 
    // This parameter is optional in the **CreateIngress** and **UpadateIngress** operations. If you do not configure this parameter when you call the CreateIngress or UpdateIngress operation to create or update a gateway routing rule, this parameter is not returned for the corresponding response.
    std::shared_ptr<string> listenerProtocol_ = nullptr;
    // The type of SLB instances. Valid values:
    // 
    // *   **clb**: Classic Load Balancer (formerly known as SLB).
    // *   **alb**: Application Load Balancer.
    std::shared_ptr<string> loadBalanceType_ = nullptr;
    // The name of a routing rule.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of a namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    std::shared_ptr<int32_t> requestTimeout_ = nullptr;
    // The forwarding rules.
    std::shared_ptr<vector<Models::DescribeIngressResponseBodyDataRules>> rules_ = nullptr;
    std::shared_ptr<string> securityPolicyId_ = nullptr;
    // The ID of a Server Load Balancer (SLB) instance.
    std::shared_ptr<string> slbId_ = nullptr;
    // The type of an SLB instance. Valid values:
    // 
    // *   **internet**: an Internet-facing SLB instance
    // *   **intranet**: an Intranet-facing SLB instance
    std::shared_ptr<string> slbType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
