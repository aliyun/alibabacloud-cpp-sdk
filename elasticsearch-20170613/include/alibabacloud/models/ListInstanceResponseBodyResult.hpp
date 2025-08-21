// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListInstanceResponseBodyResultClientNodeConfiguration.hpp>
#include <alibabacloud/models/ListInstanceResponseBodyResultElasticDataNodeConfiguration.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceResponseBodyResultKibanaConfiguration.hpp>
#include <alibabacloud/models/ListInstanceResponseBodyResultMasterConfiguration.hpp>
#include <alibabacloud/models/ListInstanceResponseBodyResultNetworkConfig.hpp>
#include <alibabacloud/models/ListInstanceResponseBodyResultNodeSpec.hpp>
#include <alibabacloud/models/ListInstanceResponseBodyResultTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListInstanceResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(advancedDedicateMaster, advancedDedicateMaster_);
      DARABONBA_PTR_TO_JSON(archType, archType_);
      DARABONBA_PTR_TO_JSON(clientNodeConfiguration, clientNodeConfiguration_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(dedicateMaster, dedicateMaster_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(domain, domain_);
      DARABONBA_PTR_TO_JSON(elasticDataNodeConfiguration, elasticDataNodeConfiguration_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(esVersion, esVersion_);
      DARABONBA_PTR_TO_JSON(extendConfigs, extendConfigs_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(isNewDeployment, isNewDeployment_);
      DARABONBA_PTR_TO_JSON(kibanaConfiguration, kibanaConfiguration_);
      DARABONBA_PTR_TO_JSON(kibanaIPWhitelist, kibanaIPWhitelist_);
      DARABONBA_PTR_TO_JSON(kibanaPrivateIPWhitelist, kibanaPrivateIPWhitelist_);
      DARABONBA_PTR_TO_JSON(masterConfiguration, masterConfiguration_);
      DARABONBA_PTR_TO_JSON(networkConfig, networkConfig_);
      DARABONBA_PTR_TO_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_TO_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(postpaidServiceStatus, postpaidServiceStatus_);
      DARABONBA_PTR_TO_JSON(privateNetworkIpWhiteList, privateNetworkIpWhiteList_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(publicIpWhitelist, publicIpWhitelist_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(serviceVpc, serviceVpc_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(vpcInstanceId, vpcInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(advancedDedicateMaster, advancedDedicateMaster_);
      DARABONBA_PTR_FROM_JSON(archType, archType_);
      DARABONBA_PTR_FROM_JSON(clientNodeConfiguration, clientNodeConfiguration_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(dedicateMaster, dedicateMaster_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(domain, domain_);
      DARABONBA_PTR_FROM_JSON(elasticDataNodeConfiguration, elasticDataNodeConfiguration_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(esVersion, esVersion_);
      DARABONBA_PTR_FROM_JSON(extendConfigs, extendConfigs_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(isNewDeployment, isNewDeployment_);
      DARABONBA_PTR_FROM_JSON(kibanaConfiguration, kibanaConfiguration_);
      DARABONBA_PTR_FROM_JSON(kibanaIPWhitelist, kibanaIPWhitelist_);
      DARABONBA_PTR_FROM_JSON(kibanaPrivateIPWhitelist, kibanaPrivateIPWhitelist_);
      DARABONBA_PTR_FROM_JSON(masterConfiguration, masterConfiguration_);
      DARABONBA_PTR_FROM_JSON(networkConfig, networkConfig_);
      DARABONBA_PTR_FROM_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_FROM_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(postpaidServiceStatus, postpaidServiceStatus_);
      DARABONBA_PTR_FROM_JSON(privateNetworkIpWhiteList, privateNetworkIpWhiteList_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(publicIpWhitelist, publicIpWhitelist_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(serviceVpc, serviceVpc_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(vpcInstanceId, vpcInstanceId_);
    };
    ListInstanceResponseBodyResult() = default ;
    ListInstanceResponseBodyResult(const ListInstanceResponseBodyResult &) = default ;
    ListInstanceResponseBodyResult(ListInstanceResponseBodyResult &&) = default ;
    ListInstanceResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceResponseBodyResult() = default ;
    ListInstanceResponseBodyResult& operator=(const ListInstanceResponseBodyResult &) = default ;
    ListInstanceResponseBodyResult& operator=(ListInstanceResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->advancedDedicateMaster_ != nullptr
        && this->archType_ != nullptr && this->clientNodeConfiguration_ != nullptr && this->createdAt_ != nullptr && this->dedicateMaster_ != nullptr && this->description_ != nullptr
        && this->domain_ != nullptr && this->elasticDataNodeConfiguration_ != nullptr && this->endTime_ != nullptr && this->esVersion_ != nullptr && this->extendConfigs_ != nullptr
        && this->instanceId_ != nullptr && this->isNewDeployment_ != nullptr && this->kibanaConfiguration_ != nullptr && this->kibanaIPWhitelist_ != nullptr && this->kibanaPrivateIPWhitelist_ != nullptr
        && this->masterConfiguration_ != nullptr && this->networkConfig_ != nullptr && this->nodeAmount_ != nullptr && this->nodeSpec_ != nullptr && this->paymentType_ != nullptr
        && this->port_ != nullptr && this->postpaidServiceStatus_ != nullptr && this->privateNetworkIpWhiteList_ != nullptr && this->protocol_ != nullptr && this->publicIpWhitelist_ != nullptr
        && this->resourceGroupId_ != nullptr && this->serviceVpc_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr && this->updatedAt_ != nullptr
        && this->vpcInstanceId_ != nullptr; };
    // advancedDedicateMaster Field Functions 
    bool hasAdvancedDedicateMaster() const { return this->advancedDedicateMaster_ != nullptr;};
    void deleteAdvancedDedicateMaster() { this->advancedDedicateMaster_ = nullptr;};
    inline bool advancedDedicateMaster() const { DARABONBA_PTR_GET_DEFAULT(advancedDedicateMaster_, false) };
    inline ListInstanceResponseBodyResult& setAdvancedDedicateMaster(bool advancedDedicateMaster) { DARABONBA_PTR_SET_VALUE(advancedDedicateMaster_, advancedDedicateMaster) };


    // archType Field Functions 
    bool hasArchType() const { return this->archType_ != nullptr;};
    void deleteArchType() { this->archType_ = nullptr;};
    inline string archType() const { DARABONBA_PTR_GET_DEFAULT(archType_, "") };
    inline ListInstanceResponseBodyResult& setArchType(string archType) { DARABONBA_PTR_SET_VALUE(archType_, archType) };


    // clientNodeConfiguration Field Functions 
    bool hasClientNodeConfiguration() const { return this->clientNodeConfiguration_ != nullptr;};
    void deleteClientNodeConfiguration() { this->clientNodeConfiguration_ = nullptr;};
    inline const Models::ListInstanceResponseBodyResultClientNodeConfiguration & clientNodeConfiguration() const { DARABONBA_PTR_GET_CONST(clientNodeConfiguration_, Models::ListInstanceResponseBodyResultClientNodeConfiguration) };
    inline Models::ListInstanceResponseBodyResultClientNodeConfiguration clientNodeConfiguration() { DARABONBA_PTR_GET(clientNodeConfiguration_, Models::ListInstanceResponseBodyResultClientNodeConfiguration) };
    inline ListInstanceResponseBodyResult& setClientNodeConfiguration(const Models::ListInstanceResponseBodyResultClientNodeConfiguration & clientNodeConfiguration) { DARABONBA_PTR_SET_VALUE(clientNodeConfiguration_, clientNodeConfiguration) };
    inline ListInstanceResponseBodyResult& setClientNodeConfiguration(Models::ListInstanceResponseBodyResultClientNodeConfiguration && clientNodeConfiguration) { DARABONBA_PTR_SET_RVALUE(clientNodeConfiguration_, clientNodeConfiguration) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ListInstanceResponseBodyResult& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // dedicateMaster Field Functions 
    bool hasDedicateMaster() const { return this->dedicateMaster_ != nullptr;};
    void deleteDedicateMaster() { this->dedicateMaster_ = nullptr;};
    inline bool dedicateMaster() const { DARABONBA_PTR_GET_DEFAULT(dedicateMaster_, false) };
    inline ListInstanceResponseBodyResult& setDedicateMaster(bool dedicateMaster) { DARABONBA_PTR_SET_VALUE(dedicateMaster_, dedicateMaster) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListInstanceResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ListInstanceResponseBodyResult& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // elasticDataNodeConfiguration Field Functions 
    bool hasElasticDataNodeConfiguration() const { return this->elasticDataNodeConfiguration_ != nullptr;};
    void deleteElasticDataNodeConfiguration() { this->elasticDataNodeConfiguration_ = nullptr;};
    inline const Models::ListInstanceResponseBodyResultElasticDataNodeConfiguration & elasticDataNodeConfiguration() const { DARABONBA_PTR_GET_CONST(elasticDataNodeConfiguration_, Models::ListInstanceResponseBodyResultElasticDataNodeConfiguration) };
    inline Models::ListInstanceResponseBodyResultElasticDataNodeConfiguration elasticDataNodeConfiguration() { DARABONBA_PTR_GET(elasticDataNodeConfiguration_, Models::ListInstanceResponseBodyResultElasticDataNodeConfiguration) };
    inline ListInstanceResponseBodyResult& setElasticDataNodeConfiguration(const Models::ListInstanceResponseBodyResultElasticDataNodeConfiguration & elasticDataNodeConfiguration) { DARABONBA_PTR_SET_VALUE(elasticDataNodeConfiguration_, elasticDataNodeConfiguration) };
    inline ListInstanceResponseBodyResult& setElasticDataNodeConfiguration(Models::ListInstanceResponseBodyResultElasticDataNodeConfiguration && elasticDataNodeConfiguration) { DARABONBA_PTR_SET_RVALUE(elasticDataNodeConfiguration_, elasticDataNodeConfiguration) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListInstanceResponseBodyResult& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // esVersion Field Functions 
    bool hasEsVersion() const { return this->esVersion_ != nullptr;};
    void deleteEsVersion() { this->esVersion_ = nullptr;};
    inline string esVersion() const { DARABONBA_PTR_GET_DEFAULT(esVersion_, "") };
    inline ListInstanceResponseBodyResult& setEsVersion(string esVersion) { DARABONBA_PTR_SET_VALUE(esVersion_, esVersion) };


    // extendConfigs Field Functions 
    bool hasExtendConfigs() const { return this->extendConfigs_ != nullptr;};
    void deleteExtendConfigs() { this->extendConfigs_ = nullptr;};
    inline const vector<Darabonba::Json> & extendConfigs() const { DARABONBA_PTR_GET_CONST(extendConfigs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> extendConfigs() { DARABONBA_PTR_GET(extendConfigs_, vector<Darabonba::Json>) };
    inline ListInstanceResponseBodyResult& setExtendConfigs(const vector<Darabonba::Json> & extendConfigs) { DARABONBA_PTR_SET_VALUE(extendConfigs_, extendConfigs) };
    inline ListInstanceResponseBodyResult& setExtendConfigs(vector<Darabonba::Json> && extendConfigs) { DARABONBA_PTR_SET_RVALUE(extendConfigs_, extendConfigs) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstanceResponseBodyResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isNewDeployment Field Functions 
    bool hasIsNewDeployment() const { return this->isNewDeployment_ != nullptr;};
    void deleteIsNewDeployment() { this->isNewDeployment_ = nullptr;};
    inline string isNewDeployment() const { DARABONBA_PTR_GET_DEFAULT(isNewDeployment_, "") };
    inline ListInstanceResponseBodyResult& setIsNewDeployment(string isNewDeployment) { DARABONBA_PTR_SET_VALUE(isNewDeployment_, isNewDeployment) };


    // kibanaConfiguration Field Functions 
    bool hasKibanaConfiguration() const { return this->kibanaConfiguration_ != nullptr;};
    void deleteKibanaConfiguration() { this->kibanaConfiguration_ = nullptr;};
    inline const Models::ListInstanceResponseBodyResultKibanaConfiguration & kibanaConfiguration() const { DARABONBA_PTR_GET_CONST(kibanaConfiguration_, Models::ListInstanceResponseBodyResultKibanaConfiguration) };
    inline Models::ListInstanceResponseBodyResultKibanaConfiguration kibanaConfiguration() { DARABONBA_PTR_GET(kibanaConfiguration_, Models::ListInstanceResponseBodyResultKibanaConfiguration) };
    inline ListInstanceResponseBodyResult& setKibanaConfiguration(const Models::ListInstanceResponseBodyResultKibanaConfiguration & kibanaConfiguration) { DARABONBA_PTR_SET_VALUE(kibanaConfiguration_, kibanaConfiguration) };
    inline ListInstanceResponseBodyResult& setKibanaConfiguration(Models::ListInstanceResponseBodyResultKibanaConfiguration && kibanaConfiguration) { DARABONBA_PTR_SET_RVALUE(kibanaConfiguration_, kibanaConfiguration) };


    // kibanaIPWhitelist Field Functions 
    bool hasKibanaIPWhitelist() const { return this->kibanaIPWhitelist_ != nullptr;};
    void deleteKibanaIPWhitelist() { this->kibanaIPWhitelist_ = nullptr;};
    inline const vector<string> & kibanaIPWhitelist() const { DARABONBA_PTR_GET_CONST(kibanaIPWhitelist_, vector<string>) };
    inline vector<string> kibanaIPWhitelist() { DARABONBA_PTR_GET(kibanaIPWhitelist_, vector<string>) };
    inline ListInstanceResponseBodyResult& setKibanaIPWhitelist(const vector<string> & kibanaIPWhitelist) { DARABONBA_PTR_SET_VALUE(kibanaIPWhitelist_, kibanaIPWhitelist) };
    inline ListInstanceResponseBodyResult& setKibanaIPWhitelist(vector<string> && kibanaIPWhitelist) { DARABONBA_PTR_SET_RVALUE(kibanaIPWhitelist_, kibanaIPWhitelist) };


    // kibanaPrivateIPWhitelist Field Functions 
    bool hasKibanaPrivateIPWhitelist() const { return this->kibanaPrivateIPWhitelist_ != nullptr;};
    void deleteKibanaPrivateIPWhitelist() { this->kibanaPrivateIPWhitelist_ = nullptr;};
    inline const vector<string> & kibanaPrivateIPWhitelist() const { DARABONBA_PTR_GET_CONST(kibanaPrivateIPWhitelist_, vector<string>) };
    inline vector<string> kibanaPrivateIPWhitelist() { DARABONBA_PTR_GET(kibanaPrivateIPWhitelist_, vector<string>) };
    inline ListInstanceResponseBodyResult& setKibanaPrivateIPWhitelist(const vector<string> & kibanaPrivateIPWhitelist) { DARABONBA_PTR_SET_VALUE(kibanaPrivateIPWhitelist_, kibanaPrivateIPWhitelist) };
    inline ListInstanceResponseBodyResult& setKibanaPrivateIPWhitelist(vector<string> && kibanaPrivateIPWhitelist) { DARABONBA_PTR_SET_RVALUE(kibanaPrivateIPWhitelist_, kibanaPrivateIPWhitelist) };


    // masterConfiguration Field Functions 
    bool hasMasterConfiguration() const { return this->masterConfiguration_ != nullptr;};
    void deleteMasterConfiguration() { this->masterConfiguration_ = nullptr;};
    inline const Models::ListInstanceResponseBodyResultMasterConfiguration & masterConfiguration() const { DARABONBA_PTR_GET_CONST(masterConfiguration_, Models::ListInstanceResponseBodyResultMasterConfiguration) };
    inline Models::ListInstanceResponseBodyResultMasterConfiguration masterConfiguration() { DARABONBA_PTR_GET(masterConfiguration_, Models::ListInstanceResponseBodyResultMasterConfiguration) };
    inline ListInstanceResponseBodyResult& setMasterConfiguration(const Models::ListInstanceResponseBodyResultMasterConfiguration & masterConfiguration) { DARABONBA_PTR_SET_VALUE(masterConfiguration_, masterConfiguration) };
    inline ListInstanceResponseBodyResult& setMasterConfiguration(Models::ListInstanceResponseBodyResultMasterConfiguration && masterConfiguration) { DARABONBA_PTR_SET_RVALUE(masterConfiguration_, masterConfiguration) };


    // networkConfig Field Functions 
    bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
    void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
    inline const Models::ListInstanceResponseBodyResultNetworkConfig & networkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, Models::ListInstanceResponseBodyResultNetworkConfig) };
    inline Models::ListInstanceResponseBodyResultNetworkConfig networkConfig() { DARABONBA_PTR_GET(networkConfig_, Models::ListInstanceResponseBodyResultNetworkConfig) };
    inline ListInstanceResponseBodyResult& setNetworkConfig(const Models::ListInstanceResponseBodyResultNetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
    inline ListInstanceResponseBodyResult& setNetworkConfig(Models::ListInstanceResponseBodyResultNetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


    // nodeAmount Field Functions 
    bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
    void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
    inline int32_t nodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0) };
    inline ListInstanceResponseBodyResult& setNodeAmount(int32_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


    // nodeSpec Field Functions 
    bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
    void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
    inline const Models::ListInstanceResponseBodyResultNodeSpec & nodeSpec() const { DARABONBA_PTR_GET_CONST(nodeSpec_, Models::ListInstanceResponseBodyResultNodeSpec) };
    inline Models::ListInstanceResponseBodyResultNodeSpec nodeSpec() { DARABONBA_PTR_GET(nodeSpec_, Models::ListInstanceResponseBodyResultNodeSpec) };
    inline ListInstanceResponseBodyResult& setNodeSpec(const Models::ListInstanceResponseBodyResultNodeSpec & nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };
    inline ListInstanceResponseBodyResult& setNodeSpec(Models::ListInstanceResponseBodyResultNodeSpec && nodeSpec) { DARABONBA_PTR_SET_RVALUE(nodeSpec_, nodeSpec) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ListInstanceResponseBodyResult& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline ListInstanceResponseBodyResult& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // postpaidServiceStatus Field Functions 
    bool hasPostpaidServiceStatus() const { return this->postpaidServiceStatus_ != nullptr;};
    void deletePostpaidServiceStatus() { this->postpaidServiceStatus_ = nullptr;};
    inline string postpaidServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(postpaidServiceStatus_, "") };
    inline ListInstanceResponseBodyResult& setPostpaidServiceStatus(string postpaidServiceStatus) { DARABONBA_PTR_SET_VALUE(postpaidServiceStatus_, postpaidServiceStatus) };


    // privateNetworkIpWhiteList Field Functions 
    bool hasPrivateNetworkIpWhiteList() const { return this->privateNetworkIpWhiteList_ != nullptr;};
    void deletePrivateNetworkIpWhiteList() { this->privateNetworkIpWhiteList_ = nullptr;};
    inline const vector<string> & privateNetworkIpWhiteList() const { DARABONBA_PTR_GET_CONST(privateNetworkIpWhiteList_, vector<string>) };
    inline vector<string> privateNetworkIpWhiteList() { DARABONBA_PTR_GET(privateNetworkIpWhiteList_, vector<string>) };
    inline ListInstanceResponseBodyResult& setPrivateNetworkIpWhiteList(const vector<string> & privateNetworkIpWhiteList) { DARABONBA_PTR_SET_VALUE(privateNetworkIpWhiteList_, privateNetworkIpWhiteList) };
    inline ListInstanceResponseBodyResult& setPrivateNetworkIpWhiteList(vector<string> && privateNetworkIpWhiteList) { DARABONBA_PTR_SET_RVALUE(privateNetworkIpWhiteList_, privateNetworkIpWhiteList) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ListInstanceResponseBodyResult& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // publicIpWhitelist Field Functions 
    bool hasPublicIpWhitelist() const { return this->publicIpWhitelist_ != nullptr;};
    void deletePublicIpWhitelist() { this->publicIpWhitelist_ = nullptr;};
    inline const vector<string> & publicIpWhitelist() const { DARABONBA_PTR_GET_CONST(publicIpWhitelist_, vector<string>) };
    inline vector<string> publicIpWhitelist() { DARABONBA_PTR_GET(publicIpWhitelist_, vector<string>) };
    inline ListInstanceResponseBodyResult& setPublicIpWhitelist(const vector<string> & publicIpWhitelist) { DARABONBA_PTR_SET_VALUE(publicIpWhitelist_, publicIpWhitelist) };
    inline ListInstanceResponseBodyResult& setPublicIpWhitelist(vector<string> && publicIpWhitelist) { DARABONBA_PTR_SET_RVALUE(publicIpWhitelist_, publicIpWhitelist) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListInstanceResponseBodyResult& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceVpc Field Functions 
    bool hasServiceVpc() const { return this->serviceVpc_ != nullptr;};
    void deleteServiceVpc() { this->serviceVpc_ = nullptr;};
    inline bool serviceVpc() const { DARABONBA_PTR_GET_DEFAULT(serviceVpc_, false) };
    inline ListInstanceResponseBodyResult& setServiceVpc(bool serviceVpc) { DARABONBA_PTR_SET_VALUE(serviceVpc_, serviceVpc) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstanceResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListInstanceResponseBodyResultTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListInstanceResponseBodyResultTags>) };
    inline vector<Models::ListInstanceResponseBodyResultTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListInstanceResponseBodyResultTags>) };
    inline ListInstanceResponseBodyResult& setTags(const vector<Models::ListInstanceResponseBodyResultTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListInstanceResponseBodyResult& setTags(vector<Models::ListInstanceResponseBodyResultTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline ListInstanceResponseBodyResult& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // vpcInstanceId Field Functions 
    bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
    void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
    inline string vpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
    inline ListInstanceResponseBodyResult& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


  protected:
    // The billing method of the instance. Valid values:
    // 
    // *   **prepaid**: subscription
    // *   **postpaid**: pay-as-you-go
    std::shared_ptr<bool> advancedDedicateMaster_ = nullptr;
    std::shared_ptr<string> archType_ = nullptr;
    // The instance type of the node. For more information, see [Specifications](https://help.aliyun.com/document_detail/271718.html).
    std::shared_ptr<Models::ListInstanceResponseBodyResultClientNodeConfiguration> clientNodeConfiguration_ = nullptr;
    // The status of the pay-as-you-go service that is overlaid on a subscription instance. Valid values:
    // 
    // *   **active**: normal
    // *   **closed**: Close
    // *   **indebt**: Overdue payments are frozen
    std::shared_ptr<string> createdAt_ = nullptr;
    // The edition of the dedicated KMS instance.
    std::shared_ptr<bool> dedicateMaster_ = nullptr;
    // The key of the tag.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
    // The configuration of Kibana nodes.
    std::shared_ptr<Models::ListInstanceResponseBodyResultElasticDataNodeConfiguration> elasticDataNodeConfiguration_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The value of the tag.
    std::shared_ptr<string> esVersion_ = nullptr;
    // The configurations of elastic data nodes.
    std::shared_ptr<vector<Darabonba::Json>> extendConfigs_ = nullptr;
    // The instance type of the node. For more information, see [Specifications](https://help.aliyun.com/document_detail/271718.html).
    std::shared_ptr<string> instanceId_ = nullptr;
    // The configuration of cluster extension parameters.
    std::shared_ptr<string> isNewDeployment_ = nullptr;
    // The instance type of the node. For more information, see [Specifications](https://help.aliyun.com/document_detail/271718.html).
    std::shared_ptr<Models::ListInstanceResponseBodyResultKibanaConfiguration> kibanaConfiguration_ = nullptr;
    std::shared_ptr<vector<string>> kibanaIPWhitelist_ = nullptr;
    std::shared_ptr<vector<string>> kibanaPrivateIPWhitelist_ = nullptr;
    // The VPC ID of the cluster.
    std::shared_ptr<Models::ListInstanceResponseBodyResultMasterConfiguration> masterConfiguration_ = nullptr;
    // The instance type of the node. For more information, see [Specifications](https://help.aliyun.com/document_detail/271718.html).
    std::shared_ptr<Models::ListInstanceResponseBodyResultNetworkConfig> networkConfig_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<int32_t> nodeAmount_ = nullptr;
    // The VPC ID of the cluster.
    std::shared_ptr<Models::ListInstanceResponseBodyResultNodeSpec> nodeSpec_ = nullptr;
    // The time when the instance was last updated.
    std::shared_ptr<string> paymentType_ = nullptr;
    std::shared_ptr<string> port_ = nullptr;
    // The tags of the instance. Each tag is a key-value pair.
    std::shared_ptr<string> postpaidServiceStatus_ = nullptr;
    std::shared_ptr<vector<string>> privateNetworkIpWhiteList_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<vector<string>> publicIpWhitelist_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Specifies whether to deploy the new architecture.
    std::shared_ptr<bool> serviceVpc_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> status_ = nullptr;
    // The number of nodes.
    std::shared_ptr<vector<Models::ListInstanceResponseBodyResultTags>> tags_ = nullptr;
    // Coordination node configuration.
    std::shared_ptr<string> updatedAt_ = nullptr;
    std::shared_ptr<string> vpcInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
