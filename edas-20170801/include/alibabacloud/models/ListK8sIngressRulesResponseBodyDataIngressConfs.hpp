// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTK8SINGRESSRULESRESPONSEBODYDATAINGRESSCONFS_HPP_
#define ALIBABACLOUD_MODELS_LISTK8SINGRESSRULESRESPONSEBODYDATAINGRESSCONFS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListK8sIngressRulesResponseBodyDataIngressConfsRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListK8sIngressRulesResponseBodyDataIngressConfs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListK8sIngressRulesResponseBodyDataIngressConfs& obj) { 
      DARABONBA_PTR_TO_JSON(AlbId, albId_);
      DARABONBA_PTR_TO_JSON(Annotations, annotations_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DashboardUrl, dashboardUrl_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(IngressType, ingressType_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(MseGatewayId, mseGatewayId_);
      DARABONBA_PTR_TO_JSON(MseGatewayName, mseGatewayName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(OfficalBasicUrl, officalBasicUrl_);
      DARABONBA_PTR_TO_JSON(OfficalRequestUrl, officalRequestUrl_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(SslRedirect, sslRedirect_);
    };
    friend void from_json(const Darabonba::Json& j, ListK8sIngressRulesResponseBodyDataIngressConfs& obj) { 
      DARABONBA_PTR_FROM_JSON(AlbId, albId_);
      DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DashboardUrl, dashboardUrl_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(IngressType, ingressType_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(MseGatewayId, mseGatewayId_);
      DARABONBA_PTR_FROM_JSON(MseGatewayName, mseGatewayName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(OfficalBasicUrl, officalBasicUrl_);
      DARABONBA_PTR_FROM_JSON(OfficalRequestUrl, officalRequestUrl_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(SslRedirect, sslRedirect_);
    };
    ListK8sIngressRulesResponseBodyDataIngressConfs() = default ;
    ListK8sIngressRulesResponseBodyDataIngressConfs(const ListK8sIngressRulesResponseBodyDataIngressConfs &) = default ;
    ListK8sIngressRulesResponseBodyDataIngressConfs(ListK8sIngressRulesResponseBodyDataIngressConfs &&) = default ;
    ListK8sIngressRulesResponseBodyDataIngressConfs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListK8sIngressRulesResponseBodyDataIngressConfs() = default ;
    ListK8sIngressRulesResponseBodyDataIngressConfs& operator=(const ListK8sIngressRulesResponseBodyDataIngressConfs &) = default ;
    ListK8sIngressRulesResponseBodyDataIngressConfs& operator=(ListK8sIngressRulesResponseBodyDataIngressConfs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->albId_ == nullptr
        && return this->annotations_ == nullptr && return this->creationTime_ == nullptr && return this->dashboardUrl_ == nullptr && return this->endpoint_ == nullptr && return this->ingressType_ == nullptr
        && return this->labels_ == nullptr && return this->mseGatewayId_ == nullptr && return this->mseGatewayName_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr
        && return this->officalBasicUrl_ == nullptr && return this->officalRequestUrl_ == nullptr && return this->rules_ == nullptr && return this->sslRedirect_ == nullptr; };
    // albId Field Functions 
    bool hasAlbId() const { return this->albId_ != nullptr;};
    void deleteAlbId() { this->albId_ = nullptr;};
    inline string albId() const { DARABONBA_PTR_GET_DEFAULT(albId_, "") };
    inline ListK8sIngressRulesResponseBodyDataIngressConfs& setAlbId(string albId) { DARABONBA_PTR_SET_VALUE(albId_, albId) };


    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline string annotations() const { DARABONBA_PTR_GET_DEFAULT(annotations_, "") };
    inline ListK8sIngressRulesResponseBodyDataIngressConfs& setAnnotations(string annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListK8sIngressRulesResponseBodyDataIngressConfs& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // dashboardUrl Field Functions 
    bool hasDashboardUrl() const { return this->dashboardUrl_ != nullptr;};
    void deleteDashboardUrl() { this->dashboardUrl_ = nullptr;};
    inline string dashboardUrl() const { DARABONBA_PTR_GET_DEFAULT(dashboardUrl_, "") };
    inline ListK8sIngressRulesResponseBodyDataIngressConfs& setDashboardUrl(string dashboardUrl) { DARABONBA_PTR_SET_VALUE(dashboardUrl_, dashboardUrl) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline ListK8sIngressRulesResponseBodyDataIngressConfs& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // ingressType Field Functions 
    bool hasIngressType() const { return this->ingressType_ != nullptr;};
    void deleteIngressType() { this->ingressType_ = nullptr;};
    inline string ingressType() const { DARABONBA_PTR_GET_DEFAULT(ingressType_, "") };
    inline ListK8sIngressRulesResponseBodyDataIngressConfs& setIngressType(string ingressType) { DARABONBA_PTR_SET_VALUE(ingressType_, ingressType) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline ListK8sIngressRulesResponseBodyDataIngressConfs& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // mseGatewayId Field Functions 
    bool hasMseGatewayId() const { return this->mseGatewayId_ != nullptr;};
    void deleteMseGatewayId() { this->mseGatewayId_ = nullptr;};
    inline string mseGatewayId() const { DARABONBA_PTR_GET_DEFAULT(mseGatewayId_, "") };
    inline ListK8sIngressRulesResponseBodyDataIngressConfs& setMseGatewayId(string mseGatewayId) { DARABONBA_PTR_SET_VALUE(mseGatewayId_, mseGatewayId) };


    // mseGatewayName Field Functions 
    bool hasMseGatewayName() const { return this->mseGatewayName_ != nullptr;};
    void deleteMseGatewayName() { this->mseGatewayName_ = nullptr;};
    inline string mseGatewayName() const { DARABONBA_PTR_GET_DEFAULT(mseGatewayName_, "") };
    inline ListK8sIngressRulesResponseBodyDataIngressConfs& setMseGatewayName(string mseGatewayName) { DARABONBA_PTR_SET_VALUE(mseGatewayName_, mseGatewayName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListK8sIngressRulesResponseBodyDataIngressConfs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListK8sIngressRulesResponseBodyDataIngressConfs& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // officalBasicUrl Field Functions 
    bool hasOfficalBasicUrl() const { return this->officalBasicUrl_ != nullptr;};
    void deleteOfficalBasicUrl() { this->officalBasicUrl_ = nullptr;};
    inline string officalBasicUrl() const { DARABONBA_PTR_GET_DEFAULT(officalBasicUrl_, "") };
    inline ListK8sIngressRulesResponseBodyDataIngressConfs& setOfficalBasicUrl(string officalBasicUrl) { DARABONBA_PTR_SET_VALUE(officalBasicUrl_, officalBasicUrl) };


    // officalRequestUrl Field Functions 
    bool hasOfficalRequestUrl() const { return this->officalRequestUrl_ != nullptr;};
    void deleteOfficalRequestUrl() { this->officalRequestUrl_ = nullptr;};
    inline string officalRequestUrl() const { DARABONBA_PTR_GET_DEFAULT(officalRequestUrl_, "") };
    inline ListK8sIngressRulesResponseBodyDataIngressConfs& setOfficalRequestUrl(string officalRequestUrl) { DARABONBA_PTR_SET_VALUE(officalRequestUrl_, officalRequestUrl) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::ListK8sIngressRulesResponseBodyDataIngressConfsRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::ListK8sIngressRulesResponseBodyDataIngressConfsRules>) };
    inline vector<Models::ListK8sIngressRulesResponseBodyDataIngressConfsRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::ListK8sIngressRulesResponseBodyDataIngressConfsRules>) };
    inline ListK8sIngressRulesResponseBodyDataIngressConfs& setRules(const vector<Models::ListK8sIngressRulesResponseBodyDataIngressConfsRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline ListK8sIngressRulesResponseBodyDataIngressConfs& setRules(vector<Models::ListK8sIngressRulesResponseBodyDataIngressConfsRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // sslRedirect Field Functions 
    bool hasSslRedirect() const { return this->sslRedirect_ != nullptr;};
    void deleteSslRedirect() { this->sslRedirect_ = nullptr;};
    inline bool sslRedirect() const { DARABONBA_PTR_GET_DEFAULT(sslRedirect_, false) };
    inline ListK8sIngressRulesResponseBodyDataIngressConfs& setSslRedirect(bool sslRedirect) { DARABONBA_PTR_SET_VALUE(sslRedirect_, sslRedirect) };


  protected:
    // The ID of the ALB instance.
    std::shared_ptr<string> albId_ = nullptr;
    // The annotations.
    std::shared_ptr<string> annotations_ = nullptr;
    // The time when the Ingress was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The monitoring URL of the Ingress.
    std::shared_ptr<string> dashboardUrl_ = nullptr;
    // The IP address of the Ingress.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The Ingress type. Valid values:
    // 
    // *   **NginxIngress**: NGINX Ingress controller
    // *   **AlbIngress**: ALB Ingress controller
    // 
    // Default value: NginxIngress.
    std::shared_ptr<string> ingressType_ = nullptr;
    // The tags.
    std::shared_ptr<string> labels_ = nullptr;
    // The ID of the MSE gateway.
    std::shared_ptr<string> mseGatewayId_ = nullptr;
    // The name of the MSE gateway.
    std::shared_ptr<string> mseGatewayName_ = nullptr;
    // The Ingress name.
    std::shared_ptr<string> name_ = nullptr;
    // The Kubernetes namespace to which the Ingress belongs.
    std::shared_ptr<string> namespace_ = nullptr;
    // The URL used for basic monitoring of the open source version.
    std::shared_ptr<string> officalBasicUrl_ = nullptr;
    // The URL used for request performance monitoring of the open source version.
    std::shared_ptr<string> officalRequestUrl_ = nullptr;
    // The routing rules.
    std::shared_ptr<vector<Models::ListK8sIngressRulesResponseBodyDataIngressConfsRules>> rules_ = nullptr;
    // Indicates whether SSL redirection is enabled. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> sslRedirect_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
