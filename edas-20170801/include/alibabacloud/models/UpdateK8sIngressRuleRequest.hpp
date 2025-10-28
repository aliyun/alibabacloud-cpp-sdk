// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEK8SINGRESSRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEK8SINGRESSRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateK8sIngressRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateK8sIngressRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Annotations, annotations_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_ANY_TO_JSON(IngressConf, ingressConf_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateK8sIngressRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_ANY_FROM_JSON(IngressConf, ingressConf_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
    };
    UpdateK8sIngressRuleRequest() = default ;
    UpdateK8sIngressRuleRequest(const UpdateK8sIngressRuleRequest &) = default ;
    UpdateK8sIngressRuleRequest(UpdateK8sIngressRuleRequest &&) = default ;
    UpdateK8sIngressRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateK8sIngressRuleRequest() = default ;
    UpdateK8sIngressRuleRequest& operator=(const UpdateK8sIngressRuleRequest &) = default ;
    UpdateK8sIngressRuleRequest& operator=(UpdateK8sIngressRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotations_ == nullptr
        && return this->clusterId_ == nullptr && return this->ingressConf_ == nullptr && return this->labels_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr; };
    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline string annotations() const { DARABONBA_PTR_GET_DEFAULT(annotations_, "") };
    inline UpdateK8sIngressRuleRequest& setAnnotations(string annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateK8sIngressRuleRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // ingressConf Field Functions 
    bool hasIngressConf() const { return this->ingressConf_ != nullptr;};
    void deleteIngressConf() { this->ingressConf_ = nullptr;};
    inline     const Darabonba::Json & ingressConf() const { DARABONBA_GET(ingressConf_) };
    Darabonba::Json & ingressConf() { DARABONBA_GET(ingressConf_) };
    inline UpdateK8sIngressRuleRequest& setIngressConf(const Darabonba::Json & ingressConf) { DARABONBA_SET_VALUE(ingressConf_, ingressConf) };
    inline UpdateK8sIngressRuleRequest& setIngressConf(Darabonba::Json & ingressConf) { DARABONBA_SET_RVALUE(ingressConf_, ingressConf) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline UpdateK8sIngressRuleRequest& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateK8sIngressRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateK8sIngressRuleRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


  protected:
    // The annotations.
    std::shared_ptr<string> annotations_ = nullptr;
    // The ID of the Kubernetes cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The routing rules of the Ingress. Set this parameter to a JSON string in the following format:
    // 
    //     {
    //       "rules": [
    //         {
    //           "host": "abc.com",
    //           "secretName": "tls-secret",
    //           "paths": [
    //             {
    //               "path": "/path",
    //               "backend": {
    //                 "servicePort": 80,
    //                 "serviceName": "xxx"
    //               }
    //             }
    //           ]
    //         }
    //       ]
    //     }
    // 
    // Parameter description:
    // 
    // *   rules: the list of routing rules.
    // *   host: the domain name to be accessed.
    // *   secretName: the name of the Secret that stores the information about the Transport Layer Security (TLS) certificate. The certificate is required if you need to use the HTTPS protocol.
    // *   paths: the list of paths to be accessed.
    // *   path: the path to be accessed.
    // *   backend: the configuration of the backend service. You can specify a service that is created in the Enterprise Distributed Application Service (EDAS) console.
    // *   serviceName: the name of the backend service.
    // *   servicePort: the port of the backend service.
    Darabonba::Json ingressConf_ = nullptr;
    // The labels.
    std::shared_ptr<string> labels_ = nullptr;
    // The name of the Ingress. The name can contain lowercase letters, digits, and hyphens (-). It must start with a lowercase letter but cannot end with a hyphen (-). The name can be up to 63 characters in length.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace of the Kubernetes cluster.
    std::shared_ptr<string> namespace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
