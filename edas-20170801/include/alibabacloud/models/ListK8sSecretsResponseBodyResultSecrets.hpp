// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTK8SSECRETSRESPONSEBODYRESULTSECRETS_HPP_
#define ALIBABACLOUD_MODELS_LISTK8SSECRETSRESPONSEBODYRESULTSECRETS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListK8sSecretsResponseBodyResultSecretsCertDetail.hpp>
#include <vector>
#include <alibabacloud/models/ListK8sSecretsResponseBodyResultSecretsData.hpp>
#include <alibabacloud/models/ListK8sSecretsResponseBodyResultSecretsRelatedApps.hpp>
#include <alibabacloud/models/ListK8sSecretsResponseBodyResultSecretsRelatedIngressRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListK8sSecretsResponseBodyResultSecrets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListK8sSecretsResponseBodyResultSecrets& obj) { 
      DARABONBA_PTR_TO_JSON(Base64Encoded, base64Encoded_);
      DARABONBA_PTR_TO_JSON(CertDetail, certDetail_);
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CertRegionId, certRegionId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RelatedApps, relatedApps_);
      DARABONBA_PTR_TO_JSON(RelatedIngressRules, relatedIngressRules_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListK8sSecretsResponseBodyResultSecrets& obj) { 
      DARABONBA_PTR_FROM_JSON(Base64Encoded, base64Encoded_);
      DARABONBA_PTR_FROM_JSON(CertDetail, certDetail_);
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CertRegionId, certRegionId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RelatedApps, relatedApps_);
      DARABONBA_PTR_FROM_JSON(RelatedIngressRules, relatedIngressRules_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListK8sSecretsResponseBodyResultSecrets() = default ;
    ListK8sSecretsResponseBodyResultSecrets(const ListK8sSecretsResponseBodyResultSecrets &) = default ;
    ListK8sSecretsResponseBodyResultSecrets(ListK8sSecretsResponseBodyResultSecrets &&) = default ;
    ListK8sSecretsResponseBodyResultSecrets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListK8sSecretsResponseBodyResultSecrets() = default ;
    ListK8sSecretsResponseBodyResultSecrets& operator=(const ListK8sSecretsResponseBodyResultSecrets &) = default ;
    ListK8sSecretsResponseBodyResultSecrets& operator=(ListK8sSecretsResponseBodyResultSecrets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->base64Encoded_ == nullptr
        && return this->certDetail_ == nullptr && return this->certId_ == nullptr && return this->certRegionId_ == nullptr && return this->clusterId_ == nullptr && return this->clusterName_ == nullptr
        && return this->creationTime_ == nullptr && return this->data_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr && return this->relatedApps_ == nullptr
        && return this->relatedIngressRules_ == nullptr && return this->type_ == nullptr; };
    // base64Encoded Field Functions 
    bool hasBase64Encoded() const { return this->base64Encoded_ != nullptr;};
    void deleteBase64Encoded() { this->base64Encoded_ = nullptr;};
    inline bool base64Encoded() const { DARABONBA_PTR_GET_DEFAULT(base64Encoded_, false) };
    inline ListK8sSecretsResponseBodyResultSecrets& setBase64Encoded(bool base64Encoded) { DARABONBA_PTR_SET_VALUE(base64Encoded_, base64Encoded) };


    // certDetail Field Functions 
    bool hasCertDetail() const { return this->certDetail_ != nullptr;};
    void deleteCertDetail() { this->certDetail_ = nullptr;};
    inline const Models::ListK8sSecretsResponseBodyResultSecretsCertDetail & certDetail() const { DARABONBA_PTR_GET_CONST(certDetail_, Models::ListK8sSecretsResponseBodyResultSecretsCertDetail) };
    inline Models::ListK8sSecretsResponseBodyResultSecretsCertDetail certDetail() { DARABONBA_PTR_GET(certDetail_, Models::ListK8sSecretsResponseBodyResultSecretsCertDetail) };
    inline ListK8sSecretsResponseBodyResultSecrets& setCertDetail(const Models::ListK8sSecretsResponseBodyResultSecretsCertDetail & certDetail) { DARABONBA_PTR_SET_VALUE(certDetail_, certDetail) };
    inline ListK8sSecretsResponseBodyResultSecrets& setCertDetail(Models::ListK8sSecretsResponseBodyResultSecretsCertDetail && certDetail) { DARABONBA_PTR_SET_RVALUE(certDetail_, certDetail) };


    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline ListK8sSecretsResponseBodyResultSecrets& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certRegionId Field Functions 
    bool hasCertRegionId() const { return this->certRegionId_ != nullptr;};
    void deleteCertRegionId() { this->certRegionId_ = nullptr;};
    inline string certRegionId() const { DARABONBA_PTR_GET_DEFAULT(certRegionId_, "") };
    inline ListK8sSecretsResponseBodyResultSecrets& setCertRegionId(string certRegionId) { DARABONBA_PTR_SET_VALUE(certRegionId_, certRegionId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListK8sSecretsResponseBodyResultSecrets& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListK8sSecretsResponseBodyResultSecrets& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListK8sSecretsResponseBodyResultSecrets& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::ListK8sSecretsResponseBodyResultSecretsData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::ListK8sSecretsResponseBodyResultSecretsData>) };
    inline vector<Models::ListK8sSecretsResponseBodyResultSecretsData> data() { DARABONBA_PTR_GET(data_, vector<Models::ListK8sSecretsResponseBodyResultSecretsData>) };
    inline ListK8sSecretsResponseBodyResultSecrets& setData(const vector<Models::ListK8sSecretsResponseBodyResultSecretsData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListK8sSecretsResponseBodyResultSecrets& setData(vector<Models::ListK8sSecretsResponseBodyResultSecretsData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListK8sSecretsResponseBodyResultSecrets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListK8sSecretsResponseBodyResultSecrets& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // relatedApps Field Functions 
    bool hasRelatedApps() const { return this->relatedApps_ != nullptr;};
    void deleteRelatedApps() { this->relatedApps_ = nullptr;};
    inline const vector<Models::ListK8sSecretsResponseBodyResultSecretsRelatedApps> & relatedApps() const { DARABONBA_PTR_GET_CONST(relatedApps_, vector<Models::ListK8sSecretsResponseBodyResultSecretsRelatedApps>) };
    inline vector<Models::ListK8sSecretsResponseBodyResultSecretsRelatedApps> relatedApps() { DARABONBA_PTR_GET(relatedApps_, vector<Models::ListK8sSecretsResponseBodyResultSecretsRelatedApps>) };
    inline ListK8sSecretsResponseBodyResultSecrets& setRelatedApps(const vector<Models::ListK8sSecretsResponseBodyResultSecretsRelatedApps> & relatedApps) { DARABONBA_PTR_SET_VALUE(relatedApps_, relatedApps) };
    inline ListK8sSecretsResponseBodyResultSecrets& setRelatedApps(vector<Models::ListK8sSecretsResponseBodyResultSecretsRelatedApps> && relatedApps) { DARABONBA_PTR_SET_RVALUE(relatedApps_, relatedApps) };


    // relatedIngressRules Field Functions 
    bool hasRelatedIngressRules() const { return this->relatedIngressRules_ != nullptr;};
    void deleteRelatedIngressRules() { this->relatedIngressRules_ = nullptr;};
    inline const vector<Models::ListK8sSecretsResponseBodyResultSecretsRelatedIngressRules> & relatedIngressRules() const { DARABONBA_PTR_GET_CONST(relatedIngressRules_, vector<Models::ListK8sSecretsResponseBodyResultSecretsRelatedIngressRules>) };
    inline vector<Models::ListK8sSecretsResponseBodyResultSecretsRelatedIngressRules> relatedIngressRules() { DARABONBA_PTR_GET(relatedIngressRules_, vector<Models::ListK8sSecretsResponseBodyResultSecretsRelatedIngressRules>) };
    inline ListK8sSecretsResponseBodyResultSecrets& setRelatedIngressRules(const vector<Models::ListK8sSecretsResponseBodyResultSecretsRelatedIngressRules> & relatedIngressRules) { DARABONBA_PTR_SET_VALUE(relatedIngressRules_, relatedIngressRules) };
    inline ListK8sSecretsResponseBodyResultSecrets& setRelatedIngressRules(vector<Models::ListK8sSecretsResponseBodyResultSecretsRelatedIngressRules> && relatedIngressRules) { DARABONBA_PTR_SET_RVALUE(relatedIngressRules_, relatedIngressRules) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListK8sSecretsResponseBodyResultSecrets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Indicates whether the data is Base64-encoded. Valid values:
    // 
    // *   true: The data is Base64-encoded.
    // *   false: The data is not Base64-encoded.
    std::shared_ptr<bool> base64Encoded_ = nullptr;
    // The details of the Secure Sockets Layer (SSL) certificate.
    std::shared_ptr<Models::ListK8sSecretsResponseBodyResultSecretsCertDetail> certDetail_ = nullptr;
    // The ID of the certificate provided by Alibaba Cloud Certificate Management Service.
    std::shared_ptr<string> certId_ = nullptr;
    // The region in which the certificate is stored.
    std::shared_ptr<string> certRegionId_ = nullptr;
    // The ID of the cluster in Enterprise Distributed Application Service (EDAS).
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The time when the Secret was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*hh:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The data of the Kubernetes Secret.
    std::shared_ptr<vector<Models::ListK8sSecretsResponseBodyResultSecretsData>> data_ = nullptr;
    // The name of the Secret. The name must start with a letter, and can contain digits, letters, and hyphens (-). It can be up to 63 characters in length.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace of the Kubernetes cluster.
    std::shared_ptr<string> namespace_ = nullptr;
    // Applications that use the Secret.
    std::shared_ptr<vector<Models::ListK8sSecretsResponseBodyResultSecretsRelatedApps>> relatedApps_ = nullptr;
    // Rules in the Ingress that is associated with the Secret.
    std::shared_ptr<vector<Models::ListK8sSecretsResponseBodyResultSecretsRelatedIngressRules>> relatedIngressRules_ = nullptr;
    // The type of the Secret. Valid values:
    // 
    // *   Opaque: user-defined data
    // *   kubernetes.io/tls: Transport Layer Security (TLS) certificate
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
