// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEK8SSECRETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEK8SSECRETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateK8sSecretRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateK8sSecretRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Base64Encoded, base64Encoded_);
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CertRegionId, certRegionId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateK8sSecretRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Base64Encoded, base64Encoded_);
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CertRegionId, certRegionId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateK8sSecretRequest() = default ;
    UpdateK8sSecretRequest(const UpdateK8sSecretRequest &) = default ;
    UpdateK8sSecretRequest(UpdateK8sSecretRequest &&) = default ;
    UpdateK8sSecretRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateK8sSecretRequest() = default ;
    UpdateK8sSecretRequest& operator=(const UpdateK8sSecretRequest &) = default ;
    UpdateK8sSecretRequest& operator=(UpdateK8sSecretRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->base64Encoded_ == nullptr
        && return this->certId_ == nullptr && return this->certRegionId_ == nullptr && return this->clusterId_ == nullptr && return this->data_ == nullptr && return this->name_ == nullptr
        && return this->namespace_ == nullptr && return this->type_ == nullptr; };
    // base64Encoded Field Functions 
    bool hasBase64Encoded() const { return this->base64Encoded_ != nullptr;};
    void deleteBase64Encoded() { this->base64Encoded_ = nullptr;};
    inline bool base64Encoded() const { DARABONBA_PTR_GET_DEFAULT(base64Encoded_, false) };
    inline UpdateK8sSecretRequest& setBase64Encoded(bool base64Encoded) { DARABONBA_PTR_SET_VALUE(base64Encoded_, base64Encoded) };


    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline UpdateK8sSecretRequest& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certRegionId Field Functions 
    bool hasCertRegionId() const { return this->certRegionId_ != nullptr;};
    void deleteCertRegionId() { this->certRegionId_ = nullptr;};
    inline string certRegionId() const { DARABONBA_PTR_GET_DEFAULT(certRegionId_, "") };
    inline UpdateK8sSecretRequest& setCertRegionId(string certRegionId) { DARABONBA_PTR_SET_VALUE(certRegionId_, certRegionId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateK8sSecretRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline UpdateK8sSecretRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateK8sSecretRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateK8sSecretRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateK8sSecretRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Specifies whether the data has been encoded in Base64.
    std::shared_ptr<bool> base64Encoded_ = nullptr;
    // The ID of the certificate.
    std::shared_ptr<string> certId_ = nullptr;
    // The region ID of the certificate.
    std::shared_ptr<string> certRegionId_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The data of the Secret. The value must be a JSON array that contains the following information:
    // 
    // *   Key: Secret key
    // *   Value: Secret value
    std::shared_ptr<string> data_ = nullptr;
    // The name of the Secret. The name must start with a letter, and can contain digits, letters, and hyphens (-). It can be up to 63 characters in length.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace of the Kubernetes cluster.
    std::shared_ptr<string> namespace_ = nullptr;
    // The type of the Secret. Valid values:
    // 
    // *   Opaque: user-defined data type
    // *   kubernetes.io/tls: Transport Layer Security (TLS) certificate type
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
