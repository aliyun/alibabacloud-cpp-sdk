// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINGRESSESRESPONSEBODYDATAINGRESSLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTINGRESSESRESPONSEBODYDATAINGRESSLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListIngressesResponseBodyDataIngressListCorsConfig.hpp>
#include <alibabacloud/models/ListIngressesResponseBodyDataIngressListDefaultRule.hpp>
#include <vector>
#include <alibabacloud/models/ListIngressesResponseBodyDataIngressListRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListIngressesResponseBodyDataIngressList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIngressesResponseBodyDataIngressList& obj) { 
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CertIds, certIds_);
      DARABONBA_PTR_TO_JSON(CorsConfig, corsConfig_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DefaultRule, defaultRule_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_TO_JSON(LoadBalanceType, loadBalanceType_);
      DARABONBA_PTR_TO_JSON(MseGatewayId, mseGatewayId_);
      DARABONBA_PTR_TO_JSON(MseGatewayPort, mseGatewayPort_);
      DARABONBA_PTR_TO_JSON(MseGatewayProtocol, mseGatewayProtocol_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(SlbId, slbId_);
      DARABONBA_PTR_TO_JSON(SlbType, slbType_);
    };
    friend void from_json(const Darabonba::Json& j, ListIngressesResponseBodyDataIngressList& obj) { 
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CertIds, certIds_);
      DARABONBA_PTR_FROM_JSON(CorsConfig, corsConfig_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DefaultRule, defaultRule_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(ListenerProtocol, listenerProtocol_);
      DARABONBA_PTR_FROM_JSON(LoadBalanceType, loadBalanceType_);
      DARABONBA_PTR_FROM_JSON(MseGatewayId, mseGatewayId_);
      DARABONBA_PTR_FROM_JSON(MseGatewayPort, mseGatewayPort_);
      DARABONBA_PTR_FROM_JSON(MseGatewayProtocol, mseGatewayProtocol_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(SlbId, slbId_);
      DARABONBA_PTR_FROM_JSON(SlbType, slbType_);
    };
    ListIngressesResponseBodyDataIngressList() = default ;
    ListIngressesResponseBodyDataIngressList(const ListIngressesResponseBodyDataIngressList &) = default ;
    ListIngressesResponseBodyDataIngressList(ListIngressesResponseBodyDataIngressList &&) = default ;
    ListIngressesResponseBodyDataIngressList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIngressesResponseBodyDataIngressList() = default ;
    ListIngressesResponseBodyDataIngressList& operator=(const ListIngressesResponseBodyDataIngressList &) = default ;
    ListIngressesResponseBodyDataIngressList& operator=(ListIngressesResponseBodyDataIngressList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certId_ != nullptr
        && this->certIds_ != nullptr && this->corsConfig_ != nullptr && this->createTime_ != nullptr && this->defaultRule_ != nullptr && this->description_ != nullptr
        && this->id_ != nullptr && this->idleTimeout_ != nullptr && this->listenerPort_ != nullptr && this->listenerProtocol_ != nullptr && this->loadBalanceType_ != nullptr
        && this->mseGatewayId_ != nullptr && this->mseGatewayPort_ != nullptr && this->mseGatewayProtocol_ != nullptr && this->name_ != nullptr && this->namespaceId_ != nullptr
        && this->requestTimeout_ != nullptr && this->rules_ != nullptr && this->slbId_ != nullptr && this->slbType_ != nullptr; };
    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline ListIngressesResponseBodyDataIngressList& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certIds Field Functions 
    bool hasCertIds() const { return this->certIds_ != nullptr;};
    void deleteCertIds() { this->certIds_ = nullptr;};
    inline string certIds() const { DARABONBA_PTR_GET_DEFAULT(certIds_, "") };
    inline ListIngressesResponseBodyDataIngressList& setCertIds(string certIds) { DARABONBA_PTR_SET_VALUE(certIds_, certIds) };


    // corsConfig Field Functions 
    bool hasCorsConfig() const { return this->corsConfig_ != nullptr;};
    void deleteCorsConfig() { this->corsConfig_ = nullptr;};
    inline const Models::ListIngressesResponseBodyDataIngressListCorsConfig & corsConfig() const { DARABONBA_PTR_GET_CONST(corsConfig_, Models::ListIngressesResponseBodyDataIngressListCorsConfig) };
    inline Models::ListIngressesResponseBodyDataIngressListCorsConfig corsConfig() { DARABONBA_PTR_GET(corsConfig_, Models::ListIngressesResponseBodyDataIngressListCorsConfig) };
    inline ListIngressesResponseBodyDataIngressList& setCorsConfig(const Models::ListIngressesResponseBodyDataIngressListCorsConfig & corsConfig) { DARABONBA_PTR_SET_VALUE(corsConfig_, corsConfig) };
    inline ListIngressesResponseBodyDataIngressList& setCorsConfig(Models::ListIngressesResponseBodyDataIngressListCorsConfig && corsConfig) { DARABONBA_PTR_SET_RVALUE(corsConfig_, corsConfig) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListIngressesResponseBodyDataIngressList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // defaultRule Field Functions 
    bool hasDefaultRule() const { return this->defaultRule_ != nullptr;};
    void deleteDefaultRule() { this->defaultRule_ = nullptr;};
    inline const Models::ListIngressesResponseBodyDataIngressListDefaultRule & defaultRule() const { DARABONBA_PTR_GET_CONST(defaultRule_, Models::ListIngressesResponseBodyDataIngressListDefaultRule) };
    inline Models::ListIngressesResponseBodyDataIngressListDefaultRule defaultRule() { DARABONBA_PTR_GET(defaultRule_, Models::ListIngressesResponseBodyDataIngressListDefaultRule) };
    inline ListIngressesResponseBodyDataIngressList& setDefaultRule(const Models::ListIngressesResponseBodyDataIngressListDefaultRule & defaultRule) { DARABONBA_PTR_SET_VALUE(defaultRule_, defaultRule) };
    inline ListIngressesResponseBodyDataIngressList& setDefaultRule(Models::ListIngressesResponseBodyDataIngressListDefaultRule && defaultRule) { DARABONBA_PTR_SET_RVALUE(defaultRule_, defaultRule) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListIngressesResponseBodyDataIngressList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListIngressesResponseBodyDataIngressList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int64_t idleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0L) };
    inline ListIngressesResponseBodyDataIngressList& setIdleTimeout(int64_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline string listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, "") };
    inline ListIngressesResponseBodyDataIngressList& setListenerPort(string listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // listenerProtocol Field Functions 
    bool hasListenerProtocol() const { return this->listenerProtocol_ != nullptr;};
    void deleteListenerProtocol() { this->listenerProtocol_ = nullptr;};
    inline string listenerProtocol() const { DARABONBA_PTR_GET_DEFAULT(listenerProtocol_, "") };
    inline ListIngressesResponseBodyDataIngressList& setListenerProtocol(string listenerProtocol) { DARABONBA_PTR_SET_VALUE(listenerProtocol_, listenerProtocol) };


    // loadBalanceType Field Functions 
    bool hasLoadBalanceType() const { return this->loadBalanceType_ != nullptr;};
    void deleteLoadBalanceType() { this->loadBalanceType_ = nullptr;};
    inline string loadBalanceType() const { DARABONBA_PTR_GET_DEFAULT(loadBalanceType_, "") };
    inline ListIngressesResponseBodyDataIngressList& setLoadBalanceType(string loadBalanceType) { DARABONBA_PTR_SET_VALUE(loadBalanceType_, loadBalanceType) };


    // mseGatewayId Field Functions 
    bool hasMseGatewayId() const { return this->mseGatewayId_ != nullptr;};
    void deleteMseGatewayId() { this->mseGatewayId_ = nullptr;};
    inline string mseGatewayId() const { DARABONBA_PTR_GET_DEFAULT(mseGatewayId_, "") };
    inline ListIngressesResponseBodyDataIngressList& setMseGatewayId(string mseGatewayId) { DARABONBA_PTR_SET_VALUE(mseGatewayId_, mseGatewayId) };


    // mseGatewayPort Field Functions 
    bool hasMseGatewayPort() const { return this->mseGatewayPort_ != nullptr;};
    void deleteMseGatewayPort() { this->mseGatewayPort_ = nullptr;};
    inline string mseGatewayPort() const { DARABONBA_PTR_GET_DEFAULT(mseGatewayPort_, "") };
    inline ListIngressesResponseBodyDataIngressList& setMseGatewayPort(string mseGatewayPort) { DARABONBA_PTR_SET_VALUE(mseGatewayPort_, mseGatewayPort) };


    // mseGatewayProtocol Field Functions 
    bool hasMseGatewayProtocol() const { return this->mseGatewayProtocol_ != nullptr;};
    void deleteMseGatewayProtocol() { this->mseGatewayProtocol_ = nullptr;};
    inline string mseGatewayProtocol() const { DARABONBA_PTR_GET_DEFAULT(mseGatewayProtocol_, "") };
    inline ListIngressesResponseBodyDataIngressList& setMseGatewayProtocol(string mseGatewayProtocol) { DARABONBA_PTR_SET_VALUE(mseGatewayProtocol_, mseGatewayProtocol) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListIngressesResponseBodyDataIngressList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListIngressesResponseBodyDataIngressList& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // requestTimeout Field Functions 
    bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
    void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
    inline int64_t requestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0L) };
    inline ListIngressesResponseBodyDataIngressList& setRequestTimeout(int64_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::ListIngressesResponseBodyDataIngressListRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::ListIngressesResponseBodyDataIngressListRules>) };
    inline vector<Models::ListIngressesResponseBodyDataIngressListRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::ListIngressesResponseBodyDataIngressListRules>) };
    inline ListIngressesResponseBodyDataIngressList& setRules(const vector<Models::ListIngressesResponseBodyDataIngressListRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline ListIngressesResponseBodyDataIngressList& setRules(vector<Models::ListIngressesResponseBodyDataIngressListRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // slbId Field Functions 
    bool hasSlbId() const { return this->slbId_ != nullptr;};
    void deleteSlbId() { this->slbId_ = nullptr;};
    inline string slbId() const { DARABONBA_PTR_GET_DEFAULT(slbId_, "") };
    inline ListIngressesResponseBodyDataIngressList& setSlbId(string slbId) { DARABONBA_PTR_SET_VALUE(slbId_, slbId) };


    // slbType Field Functions 
    bool hasSlbType() const { return this->slbType_ != nullptr;};
    void deleteSlbType() { this->slbType_ = nullptr;};
    inline string slbType() const { DARABONBA_PTR_GET_DEFAULT(slbType_, "") };
    inline ListIngressesResponseBodyDataIngressList& setSlbType(string slbType) { DARABONBA_PTR_SET_VALUE(slbType_, slbType) };


  protected:
    // The ID of the certificate that is associated with a Classic Load Balancer (**CLB**) instance.
    std::shared_ptr<string> certId_ = nullptr;
    // The ID of the certificate that is associated with an Application Load Balancer **ALB** instance.
    std::shared_ptr<string> certIds_ = nullptr;
    std::shared_ptr<Models::ListIngressesResponseBodyDataIngressListCorsConfig> corsConfig_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<Models::ListIngressesResponseBodyDataIngressListDefaultRule> defaultRule_ = nullptr;
    // The name of a routing rule.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of a routing rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int64_t> idleTimeout_ = nullptr;
    // The listener ports for an SLB instance.
    std::shared_ptr<string> listenerPort_ = nullptr;
    // The protocol that is supported by SLB to forward requests. Valid values:
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
    // The ID of an MSE cloud-native gateway.
    std::shared_ptr<string> mseGatewayId_ = nullptr;
    // The port of a service.
    std::shared_ptr<string> mseGatewayPort_ = nullptr;
    // The protocol that is supported by an MSE cloud-native gateway to forward requests. Valid values:
    // 
    // *   **HTTP**: HTTP is suitable for applications that need to identify transmitted data.
    // *   **HTTPS**: HTTPS is suitable for applications that require encrypted data transmission.
    std::shared_ptr<string> mseGatewayProtocol_ = nullptr;
    // The name of a routing rule.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of a namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    std::shared_ptr<int64_t> requestTimeout_ = nullptr;
    std::shared_ptr<vector<Models::ListIngressesResponseBodyDataIngressListRules>> rules_ = nullptr;
    // The ID of a Server Load Balancer (SLB) instance.
    std::shared_ptr<string> slbId_ = nullptr;
    // The type of SLB instances. Valid values:
    // 
    // *   **internet**: an Internet-facing SLB instance
    // *   **intranet**: an Intranet-facing SLB instance
    std::shared_ptr<string> slbType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
