// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOGSTASHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELOGSTASHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateLogstashRequestNetworkConfig.hpp>
#include <alibabacloud/models/CreateLogstashRequestNodeSpec.hpp>
#include <alibabacloud/models/CreateLogstashRequestPaymentInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CreateLogstashRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLogstashRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(networkConfig, networkConfig_);
      DARABONBA_PTR_TO_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_TO_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_TO_JSON(paymentInfo, paymentInfo_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLogstashRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(networkConfig, networkConfig_);
      DARABONBA_PTR_FROM_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_FROM_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_FROM_JSON(paymentInfo, paymentInfo_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CreateLogstashRequest() = default ;
    CreateLogstashRequest(const CreateLogstashRequest &) = default ;
    CreateLogstashRequest(CreateLogstashRequest &&) = default ;
    CreateLogstashRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLogstashRequest() = default ;
    CreateLogstashRequest& operator=(const CreateLogstashRequest &) = default ;
    CreateLogstashRequest& operator=(CreateLogstashRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->networkConfig_ != nullptr && this->nodeAmount_ != nullptr && this->nodeSpec_ != nullptr && this->paymentInfo_ != nullptr && this->paymentType_ != nullptr
        && this->resourceGroupId_ != nullptr && this->version_ != nullptr && this->clientToken_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateLogstashRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // networkConfig Field Functions 
    bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
    void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
    inline const CreateLogstashRequestNetworkConfig & networkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, CreateLogstashRequestNetworkConfig) };
    inline CreateLogstashRequestNetworkConfig networkConfig() { DARABONBA_PTR_GET(networkConfig_, CreateLogstashRequestNetworkConfig) };
    inline CreateLogstashRequest& setNetworkConfig(const CreateLogstashRequestNetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
    inline CreateLogstashRequest& setNetworkConfig(CreateLogstashRequestNetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


    // nodeAmount Field Functions 
    bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
    void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
    inline int32_t nodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0) };
    inline CreateLogstashRequest& setNodeAmount(int32_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


    // nodeSpec Field Functions 
    bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
    void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
    inline const CreateLogstashRequestNodeSpec & nodeSpec() const { DARABONBA_PTR_GET_CONST(nodeSpec_, CreateLogstashRequestNodeSpec) };
    inline CreateLogstashRequestNodeSpec nodeSpec() { DARABONBA_PTR_GET(nodeSpec_, CreateLogstashRequestNodeSpec) };
    inline CreateLogstashRequest& setNodeSpec(const CreateLogstashRequestNodeSpec & nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };
    inline CreateLogstashRequest& setNodeSpec(CreateLogstashRequestNodeSpec && nodeSpec) { DARABONBA_PTR_SET_RVALUE(nodeSpec_, nodeSpec) };


    // paymentInfo Field Functions 
    bool hasPaymentInfo() const { return this->paymentInfo_ != nullptr;};
    void deletePaymentInfo() { this->paymentInfo_ = nullptr;};
    inline const CreateLogstashRequestPaymentInfo & paymentInfo() const { DARABONBA_PTR_GET_CONST(paymentInfo_, CreateLogstashRequestPaymentInfo) };
    inline CreateLogstashRequestPaymentInfo paymentInfo() { DARABONBA_PTR_GET(paymentInfo_, CreateLogstashRequestPaymentInfo) };
    inline CreateLogstashRequest& setPaymentInfo(const CreateLogstashRequestPaymentInfo & paymentInfo) { DARABONBA_PTR_SET_VALUE(paymentInfo_, paymentInfo) };
    inline CreateLogstashRequest& setPaymentInfo(CreateLogstashRequestPaymentInfo && paymentInfo) { DARABONBA_PTR_SET_RVALUE(paymentInfo_, paymentInfo) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline CreateLogstashRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateLogstashRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreateLogstashRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateLogstashRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateLogstashRequestNetworkConfig> networkConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> nodeAmount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateLogstashRequestNodeSpec> nodeSpec_ = nullptr;
    std::shared_ptr<CreateLogstashRequestPaymentInfo> paymentInfo_ = nullptr;
    std::shared_ptr<string> paymentType_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> version_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
