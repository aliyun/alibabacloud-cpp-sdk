// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGSTASH_HPP_
#define ALIBABACLOUD_MODELS_LOGSTASH_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/LogstashEndpointList.hpp>
#include <alibabacloud/models/LogstashNetworkConfig.hpp>
#include <alibabacloud/models/LogstashNodeSpec.hpp>
#include <alibabacloud/models/LogstashTags.hpp>
#include <alibabacloud/models/LogstashZoneInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class Logstash : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Logstash& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(dataNode, dataNode_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(endpointList, endpointList_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(networkConfig, networkConfig_);
      DARABONBA_PTR_TO_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_TO_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(zoneCount, zoneCount_);
      DARABONBA_PTR_TO_JSON(zoneInfos, zoneInfos_);
    };
    friend void from_json(const Darabonba::Json& j, Logstash& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(dataNode, dataNode_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(endpointList, endpointList_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(networkConfig, networkConfig_);
      DARABONBA_PTR_FROM_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_FROM_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(zoneCount, zoneCount_);
      DARABONBA_PTR_FROM_JSON(zoneInfos, zoneInfos_);
    };
    Logstash() = default ;
    Logstash(const Logstash &) = default ;
    Logstash(Logstash &&) = default ;
    Logstash(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Logstash() = default ;
    Logstash& operator=(const Logstash &) = default ;
    Logstash& operator=(Logstash &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->createdAt_ != nullptr && this->dataNode_ != nullptr && this->description_ != nullptr && this->endTime_ != nullptr && this->endpointList_ != nullptr
        && this->instanceId_ != nullptr && this->networkConfig_ != nullptr && this->nodeAmount_ != nullptr && this->nodeSpec_ != nullptr && this->paymentType_ != nullptr
        && this->protocol_ != nullptr && this->resourceGroupId_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr && this->updatedAt_ != nullptr
        && this->version_ != nullptr && this->zoneCount_ != nullptr && this->zoneInfos_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const map<string, string> & config() const { DARABONBA_PTR_GET_CONST(config_, map<string, string>) };
    inline map<string, string> config() { DARABONBA_PTR_GET(config_, map<string, string>) };
    inline Logstash& setConfig(const map<string, string> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline Logstash& setConfig(map<string, string> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline Logstash& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // dataNode Field Functions 
    bool hasDataNode() const { return this->dataNode_ != nullptr;};
    void deleteDataNode() { this->dataNode_ = nullptr;};
    inline bool dataNode() const { DARABONBA_PTR_GET_DEFAULT(dataNode_, false) };
    inline Logstash& setDataNode(bool dataNode) { DARABONBA_PTR_SET_VALUE(dataNode_, dataNode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Logstash& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline Logstash& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endpointList Field Functions 
    bool hasEndpointList() const { return this->endpointList_ != nullptr;};
    void deleteEndpointList() { this->endpointList_ = nullptr;};
    inline const vector<LogstashEndpointList> & endpointList() const { DARABONBA_PTR_GET_CONST(endpointList_, vector<LogstashEndpointList>) };
    inline vector<LogstashEndpointList> endpointList() { DARABONBA_PTR_GET(endpointList_, vector<LogstashEndpointList>) };
    inline Logstash& setEndpointList(const vector<LogstashEndpointList> & endpointList) { DARABONBA_PTR_SET_VALUE(endpointList_, endpointList) };
    inline Logstash& setEndpointList(vector<LogstashEndpointList> && endpointList) { DARABONBA_PTR_SET_RVALUE(endpointList_, endpointList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline Logstash& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkConfig Field Functions 
    bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
    void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
    inline const LogstashNetworkConfig & networkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, LogstashNetworkConfig) };
    inline LogstashNetworkConfig networkConfig() { DARABONBA_PTR_GET(networkConfig_, LogstashNetworkConfig) };
    inline Logstash& setNetworkConfig(const LogstashNetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
    inline Logstash& setNetworkConfig(LogstashNetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


    // nodeAmount Field Functions 
    bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
    void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
    inline int64_t nodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0L) };
    inline Logstash& setNodeAmount(int64_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


    // nodeSpec Field Functions 
    bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
    void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
    inline const LogstashNodeSpec & nodeSpec() const { DARABONBA_PTR_GET_CONST(nodeSpec_, LogstashNodeSpec) };
    inline LogstashNodeSpec nodeSpec() { DARABONBA_PTR_GET(nodeSpec_, LogstashNodeSpec) };
    inline Logstash& setNodeSpec(const LogstashNodeSpec & nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };
    inline Logstash& setNodeSpec(LogstashNodeSpec && nodeSpec) { DARABONBA_PTR_SET_RVALUE(nodeSpec_, nodeSpec) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline Logstash& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline Logstash& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline Logstash& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline Logstash& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<LogstashTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<LogstashTags>) };
    inline vector<LogstashTags> tags() { DARABONBA_PTR_GET(tags_, vector<LogstashTags>) };
    inline Logstash& setTags(const vector<LogstashTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline Logstash& setTags(vector<LogstashTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline Logstash& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline Logstash& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // zoneCount Field Functions 
    bool hasZoneCount() const { return this->zoneCount_ != nullptr;};
    void deleteZoneCount() { this->zoneCount_ = nullptr;};
    inline int64_t zoneCount() const { DARABONBA_PTR_GET_DEFAULT(zoneCount_, 0L) };
    inline Logstash& setZoneCount(int64_t zoneCount) { DARABONBA_PTR_SET_VALUE(zoneCount_, zoneCount) };


    // zoneInfos Field Functions 
    bool hasZoneInfos() const { return this->zoneInfos_ != nullptr;};
    void deleteZoneInfos() { this->zoneInfos_ = nullptr;};
    inline const vector<LogstashZoneInfos> & zoneInfos() const { DARABONBA_PTR_GET_CONST(zoneInfos_, vector<LogstashZoneInfos>) };
    inline vector<LogstashZoneInfos> zoneInfos() { DARABONBA_PTR_GET(zoneInfos_, vector<LogstashZoneInfos>) };
    inline Logstash& setZoneInfos(const vector<LogstashZoneInfos> & zoneInfos) { DARABONBA_PTR_SET_VALUE(zoneInfos_, zoneInfos) };
    inline Logstash& setZoneInfos(vector<LogstashZoneInfos> && zoneInfos) { DARABONBA_PTR_SET_RVALUE(zoneInfos_, zoneInfos) };


  protected:
    std::shared_ptr<map<string, string>> config_ = nullptr;
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<bool> dataNode_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<vector<LogstashEndpointList>> endpointList_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<LogstashNetworkConfig> networkConfig_ = nullptr;
    std::shared_ptr<int64_t> nodeAmount_ = nullptr;
    std::shared_ptr<LogstashNodeSpec> nodeSpec_ = nullptr;
    std::shared_ptr<string> paymentType_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<LogstashTags>> tags_ = nullptr;
    std::shared_ptr<string> updatedAt_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
    std::shared_ptr<int64_t> zoneCount_ = nullptr;
    std::shared_ptr<vector<LogstashZoneInfos>> zoneInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
