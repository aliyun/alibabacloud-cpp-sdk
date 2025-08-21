// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGSTASHRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGSTASHRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLogstashResponseBodyResultTags.hpp>
#include <alibabacloud/models/DescribeLogstashResponseBodyResultZoneInfos.hpp>
#include <alibabacloud/models/DescribeLogstashResponseBodyResultEndpointList.hpp>
#include <alibabacloud/models/DescribeLogstashResponseBodyResultNetworkConfig.hpp>
#include <alibabacloud/models/DescribeLogstashResponseBodyResultNodeSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeLogstashResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogstashResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(ExtendConfigs, extendConfigs_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(ZoneInfos, zoneInfos_);
      DARABONBA_ANY_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(endpointList, endpointList_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(networkConfig, networkConfig_);
      DARABONBA_PTR_TO_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_TO_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(vpcInstanceId, vpcInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogstashResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtendConfigs, extendConfigs_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(ZoneInfos, zoneInfos_);
      DARABONBA_ANY_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(endpointList, endpointList_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(networkConfig, networkConfig_);
      DARABONBA_PTR_FROM_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_FROM_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(vpcInstanceId, vpcInstanceId_);
    };
    DescribeLogstashResponseBodyResult() = default ;
    DescribeLogstashResponseBodyResult(const DescribeLogstashResponseBodyResult &) = default ;
    DescribeLogstashResponseBodyResult(DescribeLogstashResponseBodyResult &&) = default ;
    DescribeLogstashResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogstashResponseBodyResult() = default ;
    DescribeLogstashResponseBodyResult& operator=(const DescribeLogstashResponseBodyResult &) = default ;
    DescribeLogstashResponseBodyResult& operator=(DescribeLogstashResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extendConfigs_ != nullptr
        && this->resourceGroupId_ != nullptr && this->tags_ != nullptr && this->zoneInfos_ != nullptr && this->config_ != nullptr && this->createdAt_ != nullptr
        && this->description_ != nullptr && this->endpointList_ != nullptr && this->instanceId_ != nullptr && this->networkConfig_ != nullptr && this->nodeAmount_ != nullptr
        && this->nodeSpec_ != nullptr && this->paymentType_ != nullptr && this->status_ != nullptr && this->updatedAt_ != nullptr && this->version_ != nullptr
        && this->vpcInstanceId_ != nullptr; };
    // extendConfigs Field Functions 
    bool hasExtendConfigs() const { return this->extendConfigs_ != nullptr;};
    void deleteExtendConfigs() { this->extendConfigs_ = nullptr;};
    inline const vector<Darabonba::Json> & extendConfigs() const { DARABONBA_PTR_GET_CONST(extendConfigs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> extendConfigs() { DARABONBA_PTR_GET(extendConfigs_, vector<Darabonba::Json>) };
    inline DescribeLogstashResponseBodyResult& setExtendConfigs(const vector<Darabonba::Json> & extendConfigs) { DARABONBA_PTR_SET_VALUE(extendConfigs_, extendConfigs) };
    inline DescribeLogstashResponseBodyResult& setExtendConfigs(vector<Darabonba::Json> && extendConfigs) { DARABONBA_PTR_SET_RVALUE(extendConfigs_, extendConfigs) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeLogstashResponseBodyResult& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeLogstashResponseBodyResultTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeLogstashResponseBodyResultTags>) };
    inline vector<Models::DescribeLogstashResponseBodyResultTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeLogstashResponseBodyResultTags>) };
    inline DescribeLogstashResponseBodyResult& setTags(const vector<Models::DescribeLogstashResponseBodyResultTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeLogstashResponseBodyResult& setTags(vector<Models::DescribeLogstashResponseBodyResultTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // zoneInfos Field Functions 
    bool hasZoneInfos() const { return this->zoneInfos_ != nullptr;};
    void deleteZoneInfos() { this->zoneInfos_ = nullptr;};
    inline const vector<Models::DescribeLogstashResponseBodyResultZoneInfos> & zoneInfos() const { DARABONBA_PTR_GET_CONST(zoneInfos_, vector<Models::DescribeLogstashResponseBodyResultZoneInfos>) };
    inline vector<Models::DescribeLogstashResponseBodyResultZoneInfos> zoneInfos() { DARABONBA_PTR_GET(zoneInfos_, vector<Models::DescribeLogstashResponseBodyResultZoneInfos>) };
    inline DescribeLogstashResponseBodyResult& setZoneInfos(const vector<Models::DescribeLogstashResponseBodyResultZoneInfos> & zoneInfos) { DARABONBA_PTR_SET_VALUE(zoneInfos_, zoneInfos) };
    inline DescribeLogstashResponseBodyResult& setZoneInfos(vector<Models::DescribeLogstashResponseBodyResultZoneInfos> && zoneInfos) { DARABONBA_PTR_SET_RVALUE(zoneInfos_, zoneInfos) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline     const Darabonba::Json & config() const { DARABONBA_GET(config_) };
    Darabonba::Json & config() { DARABONBA_GET(config_) };
    inline DescribeLogstashResponseBodyResult& setConfig(const Darabonba::Json & config) { DARABONBA_SET_VALUE(config_, config) };
    inline DescribeLogstashResponseBodyResult& setConfig(Darabonba::Json & config) { DARABONBA_SET_RVALUE(config_, config) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline DescribeLogstashResponseBodyResult& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeLogstashResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endpointList Field Functions 
    bool hasEndpointList() const { return this->endpointList_ != nullptr;};
    void deleteEndpointList() { this->endpointList_ = nullptr;};
    inline const vector<Models::DescribeLogstashResponseBodyResultEndpointList> & endpointList() const { DARABONBA_PTR_GET_CONST(endpointList_, vector<Models::DescribeLogstashResponseBodyResultEndpointList>) };
    inline vector<Models::DescribeLogstashResponseBodyResultEndpointList> endpointList() { DARABONBA_PTR_GET(endpointList_, vector<Models::DescribeLogstashResponseBodyResultEndpointList>) };
    inline DescribeLogstashResponseBodyResult& setEndpointList(const vector<Models::DescribeLogstashResponseBodyResultEndpointList> & endpointList) { DARABONBA_PTR_SET_VALUE(endpointList_, endpointList) };
    inline DescribeLogstashResponseBodyResult& setEndpointList(vector<Models::DescribeLogstashResponseBodyResultEndpointList> && endpointList) { DARABONBA_PTR_SET_RVALUE(endpointList_, endpointList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeLogstashResponseBodyResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkConfig Field Functions 
    bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
    void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
    inline const Models::DescribeLogstashResponseBodyResultNetworkConfig & networkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, Models::DescribeLogstashResponseBodyResultNetworkConfig) };
    inline Models::DescribeLogstashResponseBodyResultNetworkConfig networkConfig() { DARABONBA_PTR_GET(networkConfig_, Models::DescribeLogstashResponseBodyResultNetworkConfig) };
    inline DescribeLogstashResponseBodyResult& setNetworkConfig(const Models::DescribeLogstashResponseBodyResultNetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
    inline DescribeLogstashResponseBodyResult& setNetworkConfig(Models::DescribeLogstashResponseBodyResultNetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


    // nodeAmount Field Functions 
    bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
    void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
    inline int32_t nodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0) };
    inline DescribeLogstashResponseBodyResult& setNodeAmount(int32_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


    // nodeSpec Field Functions 
    bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
    void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
    inline const Models::DescribeLogstashResponseBodyResultNodeSpec & nodeSpec() const { DARABONBA_PTR_GET_CONST(nodeSpec_, Models::DescribeLogstashResponseBodyResultNodeSpec) };
    inline Models::DescribeLogstashResponseBodyResultNodeSpec nodeSpec() { DARABONBA_PTR_GET(nodeSpec_, Models::DescribeLogstashResponseBodyResultNodeSpec) };
    inline DescribeLogstashResponseBodyResult& setNodeSpec(const Models::DescribeLogstashResponseBodyResultNodeSpec & nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };
    inline DescribeLogstashResponseBodyResult& setNodeSpec(Models::DescribeLogstashResponseBodyResultNodeSpec && nodeSpec) { DARABONBA_PTR_SET_RVALUE(nodeSpec_, nodeSpec) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline DescribeLogstashResponseBodyResult& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeLogstashResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline DescribeLogstashResponseBodyResult& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeLogstashResponseBodyResult& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // vpcInstanceId Field Functions 
    bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
    void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
    inline string vpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
    inline DescribeLogstashResponseBodyResult& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


  protected:
    // The configuration information of the node.
    std::shared_ptr<vector<Darabonba::Json>> extendConfigs_ = nullptr;
    // The number of data nodes.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The key of the tag.
    std::shared_ptr<vector<Models::DescribeLogstashResponseBodyResultTags>> tags_ = nullptr;
    // The status of the zone. Valid values:
    // 
    // *   ISOLATION: offline
    // *   NORMAL
    std::shared_ptr<vector<Models::DescribeLogstashResponseBodyResultZoneInfos>> zoneInfos_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   prepaid: subscription
    // *   postpaid: pay-as-you-go
    Darabonba::Json config_ = nullptr;
    // The state of the instance. Four states are supported:
    // 
    // *   Normal: active
    // *   Active: activating
    // *   Freeze: inactive
    // *   Invalid: invalid
    std::shared_ptr<string> createdAt_ = nullptr;
    // The time when the instance was created.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the zone where the node resides.
    std::shared_ptr<vector<Models::DescribeLogstashResponseBodyResultEndpointList>> endpointList_ = nullptr;
    // The access information of the node.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<Models::DescribeLogstashResponseBodyResultNetworkConfig> networkConfig_ = nullptr;
    // The name of the instance.
    std::shared_ptr<int32_t> nodeAmount_ = nullptr;
    // The specifications of the node.
    std::shared_ptr<Models::DescribeLogstashResponseBodyResultNodeSpec> nodeSpec_ = nullptr;
    // The ID of the resource group to which the instance belongs.
    std::shared_ptr<string> paymentType_ = nullptr;
    // The ID of the virtual private cloud (VPC) to which the elastic container instances belong.
    std::shared_ptr<string> status_ = nullptr;
    // The edition of the dedicated KMS instance.
    std::shared_ptr<string> updatedAt_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> version_ = nullptr;
    // The time when the instance was last updated.
    std::shared_ptr<string> vpcInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
