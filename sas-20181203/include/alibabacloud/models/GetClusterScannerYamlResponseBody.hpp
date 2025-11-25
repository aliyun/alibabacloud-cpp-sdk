// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERSCANNERYAMLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERSCANNERYAMLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClusterScannerYamlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterScannerYamlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CaCertBase64, caCertBase64_);
      DARABONBA_PTR_TO_JSON(ClusterEnvInfo, clusterEnvInfo_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TlsCertBase64, tlsCertBase64_);
      DARABONBA_PTR_TO_JSON(TlsKeyBase64, tlsKeyBase64_);
      DARABONBA_PTR_TO_JSON(WebhookOpen, webhookOpen_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterScannerYamlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CaCertBase64, caCertBase64_);
      DARABONBA_PTR_FROM_JSON(ClusterEnvInfo, clusterEnvInfo_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TlsCertBase64, tlsCertBase64_);
      DARABONBA_PTR_FROM_JSON(TlsKeyBase64, tlsKeyBase64_);
      DARABONBA_PTR_FROM_JSON(WebhookOpen, webhookOpen_);
    };
    GetClusterScannerYamlResponseBody() = default ;
    GetClusterScannerYamlResponseBody(const GetClusterScannerYamlResponseBody &) = default ;
    GetClusterScannerYamlResponseBody(GetClusterScannerYamlResponseBody &&) = default ;
    GetClusterScannerYamlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterScannerYamlResponseBody() = default ;
    GetClusterScannerYamlResponseBody& operator=(const GetClusterScannerYamlResponseBody &) = default ;
    GetClusterScannerYamlResponseBody& operator=(GetClusterScannerYamlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caCertBase64_ == nullptr
        && return this->clusterEnvInfo_ == nullptr && return this->clusterId_ == nullptr && return this->image_ == nullptr && return this->requestId_ == nullptr && return this->tlsCertBase64_ == nullptr
        && return this->tlsKeyBase64_ == nullptr && return this->webhookOpen_ == nullptr; };
    // caCertBase64 Field Functions 
    bool hasCaCertBase64() const { return this->caCertBase64_ != nullptr;};
    void deleteCaCertBase64() { this->caCertBase64_ = nullptr;};
    inline string caCertBase64() const { DARABONBA_PTR_GET_DEFAULT(caCertBase64_, "") };
    inline GetClusterScannerYamlResponseBody& setCaCertBase64(string caCertBase64) { DARABONBA_PTR_SET_VALUE(caCertBase64_, caCertBase64) };


    // clusterEnvInfo Field Functions 
    bool hasClusterEnvInfo() const { return this->clusterEnvInfo_ != nullptr;};
    void deleteClusterEnvInfo() { this->clusterEnvInfo_ = nullptr;};
    inline string clusterEnvInfo() const { DARABONBA_PTR_GET_DEFAULT(clusterEnvInfo_, "") };
    inline GetClusterScannerYamlResponseBody& setClusterEnvInfo(string clusterEnvInfo) { DARABONBA_PTR_SET_VALUE(clusterEnvInfo_, clusterEnvInfo) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetClusterScannerYamlResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string image() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline GetClusterScannerYamlResponseBody& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClusterScannerYamlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tlsCertBase64 Field Functions 
    bool hasTlsCertBase64() const { return this->tlsCertBase64_ != nullptr;};
    void deleteTlsCertBase64() { this->tlsCertBase64_ = nullptr;};
    inline string tlsCertBase64() const { DARABONBA_PTR_GET_DEFAULT(tlsCertBase64_, "") };
    inline GetClusterScannerYamlResponseBody& setTlsCertBase64(string tlsCertBase64) { DARABONBA_PTR_SET_VALUE(tlsCertBase64_, tlsCertBase64) };


    // tlsKeyBase64 Field Functions 
    bool hasTlsKeyBase64() const { return this->tlsKeyBase64_ != nullptr;};
    void deleteTlsKeyBase64() { this->tlsKeyBase64_ = nullptr;};
    inline string tlsKeyBase64() const { DARABONBA_PTR_GET_DEFAULT(tlsKeyBase64_, "") };
    inline GetClusterScannerYamlResponseBody& setTlsKeyBase64(string tlsKeyBase64) { DARABONBA_PTR_SET_VALUE(tlsKeyBase64_, tlsKeyBase64) };


    // webhookOpen Field Functions 
    bool hasWebhookOpen() const { return this->webhookOpen_ != nullptr;};
    void deleteWebhookOpen() { this->webhookOpen_ = nullptr;};
    inline int32_t webhookOpen() const { DARABONBA_PTR_GET_DEFAULT(webhookOpen_, 0) };
    inline GetClusterScannerYamlResponseBody& setWebhookOpen(int32_t webhookOpen) { DARABONBA_PTR_SET_VALUE(webhookOpen_, webhookOpen) };


  protected:
    // Base64 encoded CA certificate.
    std::shared_ptr<string> caCertBase64_ = nullptr;
    // Cluster environment information.
    std::shared_ptr<string> clusterEnvInfo_ = nullptr;
    // The ID of the cluster that you want to scan.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the image.
    std::shared_ptr<string> image_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Base64 encoded webhook certificate.
    std::shared_ptr<string> tlsCertBase64_ = nullptr;
    // Base64 encoded webhook private key.
    std::shared_ptr<string> tlsKeyBase64_ = nullptr;
    // Indicates whether the incremental scan switch is enabled. Values:
    // - **0**: Not enabled
    // - **1**: Enabled
    std::shared_ptr<int32_t> webhookOpen_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
