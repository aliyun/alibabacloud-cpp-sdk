// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ClientNodeConfiguration.hpp>
#include <alibabacloud/models/ElasticDataNodeConfiguration.hpp>
#include <alibabacloud/models/KibanaNodeConfiguration.hpp>
#include <alibabacloud/models/MasterNodeConfiguration.hpp>
#include <alibabacloud/models/NetworkConfig.hpp>
#include <alibabacloud/models/NodeSpec.hpp>
#include <alibabacloud/models/PaymentInfo.hpp>
#include <vector>
#include <alibabacloud/models/CreateInstanceRequestTags.hpp>
#include <alibabacloud/models/WarmNodeConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CreateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientNodeConfiguration, clientNodeConfiguration_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(elasticDataNodeConfiguration, elasticDataNodeConfiguration_);
      DARABONBA_PTR_TO_JSON(esAdminPassword, esAdminPassword_);
      DARABONBA_PTR_TO_JSON(esVersion, esVersion_);
      DARABONBA_PTR_TO_JSON(instanceCategory, instanceCategory_);
      DARABONBA_PTR_TO_JSON(kibanaConfiguration, kibanaConfiguration_);
      DARABONBA_PTR_TO_JSON(masterConfiguration, masterConfiguration_);
      DARABONBA_PTR_TO_JSON(networkConfig, networkConfig_);
      DARABONBA_PTR_TO_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_TO_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_TO_JSON(paymentInfo, paymentInfo_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(warmNodeConfiguration, warmNodeConfiguration_);
      DARABONBA_PTR_TO_JSON(zoneCount, zoneCount_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientNodeConfiguration, clientNodeConfiguration_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(elasticDataNodeConfiguration, elasticDataNodeConfiguration_);
      DARABONBA_PTR_FROM_JSON(esAdminPassword, esAdminPassword_);
      DARABONBA_PTR_FROM_JSON(esVersion, esVersion_);
      DARABONBA_PTR_FROM_JSON(instanceCategory, instanceCategory_);
      DARABONBA_PTR_FROM_JSON(kibanaConfiguration, kibanaConfiguration_);
      DARABONBA_PTR_FROM_JSON(masterConfiguration, masterConfiguration_);
      DARABONBA_PTR_FROM_JSON(networkConfig, networkConfig_);
      DARABONBA_PTR_FROM_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_FROM_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_FROM_JSON(paymentInfo, paymentInfo_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(warmNodeConfiguration, warmNodeConfiguration_);
      DARABONBA_PTR_FROM_JSON(zoneCount, zoneCount_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CreateInstanceRequest() = default ;
    CreateInstanceRequest(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest(CreateInstanceRequest &&) = default ;
    CreateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceRequest() = default ;
    CreateInstanceRequest& operator=(const CreateInstanceRequest &) = default ;
    CreateInstanceRequest& operator=(CreateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientNodeConfiguration_ != nullptr
        && this->description_ != nullptr && this->elasticDataNodeConfiguration_ != nullptr && this->esAdminPassword_ != nullptr && this->esVersion_ != nullptr && this->instanceCategory_ != nullptr
        && this->kibanaConfiguration_ != nullptr && this->masterConfiguration_ != nullptr && this->networkConfig_ != nullptr && this->nodeAmount_ != nullptr && this->nodeSpec_ != nullptr
        && this->paymentInfo_ != nullptr && this->paymentType_ != nullptr && this->resourceGroupId_ != nullptr && this->tags_ != nullptr && this->warmNodeConfiguration_ != nullptr
        && this->zoneCount_ != nullptr && this->clientToken_ != nullptr; };
    // clientNodeConfiguration Field Functions 
    bool hasClientNodeConfiguration() const { return this->clientNodeConfiguration_ != nullptr;};
    void deleteClientNodeConfiguration() { this->clientNodeConfiguration_ = nullptr;};
    inline const ClientNodeConfiguration & clientNodeConfiguration() const { DARABONBA_PTR_GET_CONST(clientNodeConfiguration_, ClientNodeConfiguration) };
    inline ClientNodeConfiguration clientNodeConfiguration() { DARABONBA_PTR_GET(clientNodeConfiguration_, ClientNodeConfiguration) };
    inline CreateInstanceRequest& setClientNodeConfiguration(const ClientNodeConfiguration & clientNodeConfiguration) { DARABONBA_PTR_SET_VALUE(clientNodeConfiguration_, clientNodeConfiguration) };
    inline CreateInstanceRequest& setClientNodeConfiguration(ClientNodeConfiguration && clientNodeConfiguration) { DARABONBA_PTR_SET_RVALUE(clientNodeConfiguration_, clientNodeConfiguration) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateInstanceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // elasticDataNodeConfiguration Field Functions 
    bool hasElasticDataNodeConfiguration() const { return this->elasticDataNodeConfiguration_ != nullptr;};
    void deleteElasticDataNodeConfiguration() { this->elasticDataNodeConfiguration_ = nullptr;};
    inline const ElasticDataNodeConfiguration & elasticDataNodeConfiguration() const { DARABONBA_PTR_GET_CONST(elasticDataNodeConfiguration_, ElasticDataNodeConfiguration) };
    inline ElasticDataNodeConfiguration elasticDataNodeConfiguration() { DARABONBA_PTR_GET(elasticDataNodeConfiguration_, ElasticDataNodeConfiguration) };
    inline CreateInstanceRequest& setElasticDataNodeConfiguration(const ElasticDataNodeConfiguration & elasticDataNodeConfiguration) { DARABONBA_PTR_SET_VALUE(elasticDataNodeConfiguration_, elasticDataNodeConfiguration) };
    inline CreateInstanceRequest& setElasticDataNodeConfiguration(ElasticDataNodeConfiguration && elasticDataNodeConfiguration) { DARABONBA_PTR_SET_RVALUE(elasticDataNodeConfiguration_, elasticDataNodeConfiguration) };


    // esAdminPassword Field Functions 
    bool hasEsAdminPassword() const { return this->esAdminPassword_ != nullptr;};
    void deleteEsAdminPassword() { this->esAdminPassword_ = nullptr;};
    inline string esAdminPassword() const { DARABONBA_PTR_GET_DEFAULT(esAdminPassword_, "") };
    inline CreateInstanceRequest& setEsAdminPassword(string esAdminPassword) { DARABONBA_PTR_SET_VALUE(esAdminPassword_, esAdminPassword) };


    // esVersion Field Functions 
    bool hasEsVersion() const { return this->esVersion_ != nullptr;};
    void deleteEsVersion() { this->esVersion_ = nullptr;};
    inline string esVersion() const { DARABONBA_PTR_GET_DEFAULT(esVersion_, "") };
    inline CreateInstanceRequest& setEsVersion(string esVersion) { DARABONBA_PTR_SET_VALUE(esVersion_, esVersion) };


    // instanceCategory Field Functions 
    bool hasInstanceCategory() const { return this->instanceCategory_ != nullptr;};
    void deleteInstanceCategory() { this->instanceCategory_ = nullptr;};
    inline string instanceCategory() const { DARABONBA_PTR_GET_DEFAULT(instanceCategory_, "") };
    inline CreateInstanceRequest& setInstanceCategory(string instanceCategory) { DARABONBA_PTR_SET_VALUE(instanceCategory_, instanceCategory) };


    // kibanaConfiguration Field Functions 
    bool hasKibanaConfiguration() const { return this->kibanaConfiguration_ != nullptr;};
    void deleteKibanaConfiguration() { this->kibanaConfiguration_ = nullptr;};
    inline const KibanaNodeConfiguration & kibanaConfiguration() const { DARABONBA_PTR_GET_CONST(kibanaConfiguration_, KibanaNodeConfiguration) };
    inline KibanaNodeConfiguration kibanaConfiguration() { DARABONBA_PTR_GET(kibanaConfiguration_, KibanaNodeConfiguration) };
    inline CreateInstanceRequest& setKibanaConfiguration(const KibanaNodeConfiguration & kibanaConfiguration) { DARABONBA_PTR_SET_VALUE(kibanaConfiguration_, kibanaConfiguration) };
    inline CreateInstanceRequest& setKibanaConfiguration(KibanaNodeConfiguration && kibanaConfiguration) { DARABONBA_PTR_SET_RVALUE(kibanaConfiguration_, kibanaConfiguration) };


    // masterConfiguration Field Functions 
    bool hasMasterConfiguration() const { return this->masterConfiguration_ != nullptr;};
    void deleteMasterConfiguration() { this->masterConfiguration_ = nullptr;};
    inline const MasterNodeConfiguration & masterConfiguration() const { DARABONBA_PTR_GET_CONST(masterConfiguration_, MasterNodeConfiguration) };
    inline MasterNodeConfiguration masterConfiguration() { DARABONBA_PTR_GET(masterConfiguration_, MasterNodeConfiguration) };
    inline CreateInstanceRequest& setMasterConfiguration(const MasterNodeConfiguration & masterConfiguration) { DARABONBA_PTR_SET_VALUE(masterConfiguration_, masterConfiguration) };
    inline CreateInstanceRequest& setMasterConfiguration(MasterNodeConfiguration && masterConfiguration) { DARABONBA_PTR_SET_RVALUE(masterConfiguration_, masterConfiguration) };


    // networkConfig Field Functions 
    bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
    void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
    inline const NetworkConfig & networkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, NetworkConfig) };
    inline NetworkConfig networkConfig() { DARABONBA_PTR_GET(networkConfig_, NetworkConfig) };
    inline CreateInstanceRequest& setNetworkConfig(const NetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
    inline CreateInstanceRequest& setNetworkConfig(NetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


    // nodeAmount Field Functions 
    bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
    void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
    inline int32_t nodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0) };
    inline CreateInstanceRequest& setNodeAmount(int32_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


    // nodeSpec Field Functions 
    bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
    void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
    inline const NodeSpec & nodeSpec() const { DARABONBA_PTR_GET_CONST(nodeSpec_, NodeSpec) };
    inline NodeSpec nodeSpec() { DARABONBA_PTR_GET(nodeSpec_, NodeSpec) };
    inline CreateInstanceRequest& setNodeSpec(const NodeSpec & nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };
    inline CreateInstanceRequest& setNodeSpec(NodeSpec && nodeSpec) { DARABONBA_PTR_SET_RVALUE(nodeSpec_, nodeSpec) };


    // paymentInfo Field Functions 
    bool hasPaymentInfo() const { return this->paymentInfo_ != nullptr;};
    void deletePaymentInfo() { this->paymentInfo_ = nullptr;};
    inline const PaymentInfo & paymentInfo() const { DARABONBA_PTR_GET_CONST(paymentInfo_, PaymentInfo) };
    inline PaymentInfo paymentInfo() { DARABONBA_PTR_GET(paymentInfo_, PaymentInfo) };
    inline CreateInstanceRequest& setPaymentInfo(const PaymentInfo & paymentInfo) { DARABONBA_PTR_SET_VALUE(paymentInfo_, paymentInfo) };
    inline CreateInstanceRequest& setPaymentInfo(PaymentInfo && paymentInfo) { DARABONBA_PTR_SET_RVALUE(paymentInfo_, paymentInfo) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline CreateInstanceRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateInstanceRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateInstanceRequestTags>) };
    inline vector<CreateInstanceRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateInstanceRequestTags>) };
    inline CreateInstanceRequest& setTags(const vector<CreateInstanceRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateInstanceRequest& setTags(vector<CreateInstanceRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // warmNodeConfiguration Field Functions 
    bool hasWarmNodeConfiguration() const { return this->warmNodeConfiguration_ != nullptr;};
    void deleteWarmNodeConfiguration() { this->warmNodeConfiguration_ = nullptr;};
    inline const WarmNodeConfiguration & warmNodeConfiguration() const { DARABONBA_PTR_GET_CONST(warmNodeConfiguration_, WarmNodeConfiguration) };
    inline WarmNodeConfiguration warmNodeConfiguration() { DARABONBA_PTR_GET(warmNodeConfiguration_, WarmNodeConfiguration) };
    inline CreateInstanceRequest& setWarmNodeConfiguration(const WarmNodeConfiguration & warmNodeConfiguration) { DARABONBA_PTR_SET_VALUE(warmNodeConfiguration_, warmNodeConfiguration) };
    inline CreateInstanceRequest& setWarmNodeConfiguration(WarmNodeConfiguration && warmNodeConfiguration) { DARABONBA_PTR_SET_RVALUE(warmNodeConfiguration_, warmNodeConfiguration) };


    // zoneCount Field Functions 
    bool hasZoneCount() const { return this->zoneCount_ != nullptr;};
    void deleteZoneCount() { this->zoneCount_ = nullptr;};
    inline int32_t zoneCount() const { DARABONBA_PTR_GET_DEFAULT(zoneCount_, 0) };
    inline CreateInstanceRequest& setZoneCount(int32_t zoneCount) { DARABONBA_PTR_SET_VALUE(zoneCount_, zoneCount) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    std::shared_ptr<ClientNodeConfiguration> clientNodeConfiguration_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<ElasticDataNodeConfiguration> elasticDataNodeConfiguration_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> esAdminPassword_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> esVersion_ = nullptr;
    std::shared_ptr<string> instanceCategory_ = nullptr;
    std::shared_ptr<KibanaNodeConfiguration> kibanaConfiguration_ = nullptr;
    std::shared_ptr<MasterNodeConfiguration> masterConfiguration_ = nullptr;
    // This parameter is required.
    std::shared_ptr<NetworkConfig> networkConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> nodeAmount_ = nullptr;
    std::shared_ptr<NodeSpec> nodeSpec_ = nullptr;
    std::shared_ptr<PaymentInfo> paymentInfo_ = nullptr;
    std::shared_ptr<string> paymentType_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<vector<CreateInstanceRequestTags>> tags_ = nullptr;
    std::shared_ptr<WarmNodeConfiguration> warmNodeConfiguration_ = nullptr;
    std::shared_ptr<int32_t> zoneCount_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
