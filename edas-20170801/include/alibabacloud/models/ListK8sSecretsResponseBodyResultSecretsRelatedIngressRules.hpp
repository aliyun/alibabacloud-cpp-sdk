// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTK8SSECRETSRESPONSEBODYRESULTSECRETSRELATEDINGRESSRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTK8SSECRETSRESPONSEBODYRESULTSECRETSRELATEDINGRESSRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListK8sSecretsResponseBodyResultSecretsRelatedIngressRulesRelatedApps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListK8sSecretsResponseBodyResultSecretsRelatedIngressRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListK8sSecretsResponseBodyResultSecretsRelatedIngressRules& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RelatedApps, relatedApps_);
    };
    friend void from_json(const Darabonba::Json& j, ListK8sSecretsResponseBodyResultSecretsRelatedIngressRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RelatedApps, relatedApps_);
    };
    ListK8sSecretsResponseBodyResultSecretsRelatedIngressRules() = default ;
    ListK8sSecretsResponseBodyResultSecretsRelatedIngressRules(const ListK8sSecretsResponseBodyResultSecretsRelatedIngressRules &) = default ;
    ListK8sSecretsResponseBodyResultSecretsRelatedIngressRules(ListK8sSecretsResponseBodyResultSecretsRelatedIngressRules &&) = default ;
    ListK8sSecretsResponseBodyResultSecretsRelatedIngressRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListK8sSecretsResponseBodyResultSecretsRelatedIngressRules() = default ;
    ListK8sSecretsResponseBodyResultSecretsRelatedIngressRules& operator=(const ListK8sSecretsResponseBodyResultSecretsRelatedIngressRules &) = default ;
    ListK8sSecretsResponseBodyResultSecretsRelatedIngressRules& operator=(ListK8sSecretsResponseBodyResultSecretsRelatedIngressRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->namespace_ == nullptr && return this->relatedApps_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListK8sSecretsResponseBodyResultSecretsRelatedIngressRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListK8sSecretsResponseBodyResultSecretsRelatedIngressRules& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // relatedApps Field Functions 
    bool hasRelatedApps() const { return this->relatedApps_ != nullptr;};
    void deleteRelatedApps() { this->relatedApps_ = nullptr;};
    inline const vector<Models::ListK8sSecretsResponseBodyResultSecretsRelatedIngressRulesRelatedApps> & relatedApps() const { DARABONBA_PTR_GET_CONST(relatedApps_, vector<Models::ListK8sSecretsResponseBodyResultSecretsRelatedIngressRulesRelatedApps>) };
    inline vector<Models::ListK8sSecretsResponseBodyResultSecretsRelatedIngressRulesRelatedApps> relatedApps() { DARABONBA_PTR_GET(relatedApps_, vector<Models::ListK8sSecretsResponseBodyResultSecretsRelatedIngressRulesRelatedApps>) };
    inline ListK8sSecretsResponseBodyResultSecretsRelatedIngressRules& setRelatedApps(const vector<Models::ListK8sSecretsResponseBodyResultSecretsRelatedIngressRulesRelatedApps> & relatedApps) { DARABONBA_PTR_SET_VALUE(relatedApps_, relatedApps) };
    inline ListK8sSecretsResponseBodyResultSecretsRelatedIngressRules& setRelatedApps(vector<Models::ListK8sSecretsResponseBodyResultSecretsRelatedIngressRulesRelatedApps> && relatedApps) { DARABONBA_PTR_SET_RVALUE(relatedApps_, relatedApps) };


  protected:
    // The name of the rule in the Ingress.
    std::shared_ptr<string> name_ = nullptr;
    // The namespaces of the Kubernetes cluster.
    std::shared_ptr<string> namespace_ = nullptr;
    // Aplications that are associated with the Ingress.
    std::shared_ptr<vector<Models::ListK8sSecretsResponseBodyResultSecretsRelatedIngressRulesRelatedApps>> relatedApps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
