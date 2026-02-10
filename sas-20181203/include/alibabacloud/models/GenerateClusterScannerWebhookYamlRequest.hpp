// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATECLUSTERSCANNERWEBHOOKYAMLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATECLUSTERSCANNERWEBHOOKYAMLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GenerateClusterScannerWebhookYamlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateClusterScannerWebhookYamlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(WebhookOpen, webhookOpen_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateClusterScannerWebhookYamlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(WebhookOpen, webhookOpen_);
    };
    GenerateClusterScannerWebhookYamlRequest() = default ;
    GenerateClusterScannerWebhookYamlRequest(const GenerateClusterScannerWebhookYamlRequest &) = default ;
    GenerateClusterScannerWebhookYamlRequest(GenerateClusterScannerWebhookYamlRequest &&) = default ;
    GenerateClusterScannerWebhookYamlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateClusterScannerWebhookYamlRequest() = default ;
    GenerateClusterScannerWebhookYamlRequest& operator=(const GenerateClusterScannerWebhookYamlRequest &) = default ;
    GenerateClusterScannerWebhookYamlRequest& operator=(GenerateClusterScannerWebhookYamlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->webhookOpen_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GenerateClusterScannerWebhookYamlRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // webhookOpen Field Functions 
    bool hasWebhookOpen() const { return this->webhookOpen_ != nullptr;};
    void deleteWebhookOpen() { this->webhookOpen_ = nullptr;};
    inline int32_t getWebhookOpen() const { DARABONBA_PTR_GET_DEFAULT(webhookOpen_, 0) };
    inline GenerateClusterScannerWebhookYamlRequest& setWebhookOpen(int32_t webhookOpen) { DARABONBA_PTR_SET_VALUE(webhookOpen_, webhookOpen) };


  protected:
    // The ID of the container cluster.
    // > You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) API to obtain this parameter from the ClusterId field.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // Indicates whether the incremental scan switch is enabled. Values:
    // - **0**: Not enabled
    // - **1**: Enabled
    shared_ptr<int32_t> webhookOpen_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
