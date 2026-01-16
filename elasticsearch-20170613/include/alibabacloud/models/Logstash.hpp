// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGSTASH_HPP_
#define ALIBABACLOUD_MODELS_LOGSTASH_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
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
    class ZoneInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ZoneInfos& obj) { 
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, ZoneInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
      };
      ZoneInfos() = default ;
      ZoneInfos(const ZoneInfos &) = default ;
      ZoneInfos(ZoneInfos &&) = default ;
      ZoneInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ZoneInfos() = default ;
      ZoneInfos& operator=(const ZoneInfos &) = default ;
      ZoneInfos& operator=(ZoneInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->status_ == nullptr
        && this->zoneId_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ZoneInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline ZoneInfos& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<string> status_ {};
      shared_ptr<string> zoneId_ {};
    };

    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(tagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(tagValue, tagValue_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(tagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(tagValue, tagValue_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
      inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    protected:
      shared_ptr<string> tagKey_ {};
      shared_ptr<string> tagValue_ {};
    };

    class NodeSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NodeSpec& obj) { 
        DARABONBA_PTR_TO_JSON(disk, disk_);
        DARABONBA_PTR_TO_JSON(diskType, diskType_);
        DARABONBA_PTR_TO_JSON(spec, spec_);
      };
      friend void from_json(const Darabonba::Json& j, NodeSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(disk, disk_);
        DARABONBA_PTR_FROM_JSON(diskType, diskType_);
        DARABONBA_PTR_FROM_JSON(spec, spec_);
      };
      NodeSpec() = default ;
      NodeSpec(const NodeSpec &) = default ;
      NodeSpec(NodeSpec &&) = default ;
      NodeSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NodeSpec() = default ;
      NodeSpec& operator=(const NodeSpec &) = default ;
      NodeSpec& operator=(NodeSpec &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->disk_ == nullptr
        && this->diskType_ == nullptr && this->spec_ == nullptr; };
      // disk Field Functions 
      bool hasDisk() const { return this->disk_ != nullptr;};
      void deleteDisk() { this->disk_ = nullptr;};
      inline int64_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0L) };
      inline NodeSpec& setDisk(int64_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


      // diskType Field Functions 
      bool hasDiskType() const { return this->diskType_ != nullptr;};
      void deleteDiskType() { this->diskType_ = nullptr;};
      inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
      inline NodeSpec& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
      inline NodeSpec& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    protected:
      shared_ptr<int64_t> disk_ {};
      shared_ptr<string> diskType_ {};
      shared_ptr<string> spec_ {};
    };

    class NetworkConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkConfig& obj) { 
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(vsArea, vsArea_);
        DARABONBA_PTR_TO_JSON(vswitchId, vswitchId_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(vsArea, vsArea_);
        DARABONBA_PTR_FROM_JSON(vswitchId, vswitchId_);
      };
      NetworkConfig() = default ;
      NetworkConfig(const NetworkConfig &) = default ;
      NetworkConfig(NetworkConfig &&) = default ;
      NetworkConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkConfig() = default ;
      NetworkConfig& operator=(const NetworkConfig &) = default ;
      NetworkConfig& operator=(NetworkConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr
        && this->vpcId_ == nullptr && this->vsArea_ == nullptr && this->vswitchId_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline NetworkConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline NetworkConfig& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vsArea Field Functions 
      bool hasVsArea() const { return this->vsArea_ != nullptr;};
      void deleteVsArea() { this->vsArea_ = nullptr;};
      inline string getVsArea() const { DARABONBA_PTR_GET_DEFAULT(vsArea_, "") };
      inline NetworkConfig& setVsArea(string vsArea) { DARABONBA_PTR_SET_VALUE(vsArea_, vsArea) };


      // vswitchId Field Functions 
      bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
      void deleteVswitchId() { this->vswitchId_ = nullptr;};
      inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
      inline NetworkConfig& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


    protected:
      shared_ptr<string> type_ {};
      shared_ptr<string> vpcId_ {};
      shared_ptr<string> vsArea_ {};
      shared_ptr<string> vswitchId_ {};
    };

    class EndpointList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EndpointList& obj) { 
        DARABONBA_PTR_TO_JSON(host, host_);
        DARABONBA_PTR_TO_JSON(port, port_);
        DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, EndpointList& obj) { 
        DARABONBA_PTR_FROM_JSON(host, host_);
        DARABONBA_PTR_FROM_JSON(port, port_);
        DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
      };
      EndpointList() = default ;
      EndpointList(const EndpointList &) = default ;
      EndpointList(EndpointList &&) = default ;
      EndpointList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EndpointList() = default ;
      EndpointList& operator=(const EndpointList &) = default ;
      EndpointList& operator=(EndpointList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->host_ == nullptr
        && this->port_ == nullptr && this->zoneId_ == nullptr; };
      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline EndpointList& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int64_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
      inline EndpointList& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline EndpointList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<string> host_ {};
      shared_ptr<int64_t> port_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->config_ == nullptr
        && this->createdAt_ == nullptr && this->dataNode_ == nullptr && this->description_ == nullptr && this->endTime_ == nullptr && this->endpointList_ == nullptr
        && this->instanceId_ == nullptr && this->networkConfig_ == nullptr && this->nodeAmount_ == nullptr && this->nodeSpec_ == nullptr && this->paymentType_ == nullptr
        && this->protocol_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->updatedAt_ == nullptr
        && this->version_ == nullptr && this->zoneCount_ == nullptr && this->zoneInfos_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const map<string, string> & getConfig() const { DARABONBA_PTR_GET_CONST(config_, map<string, string>) };
    inline map<string, string> getConfig() { DARABONBA_PTR_GET(config_, map<string, string>) };
    inline Logstash& setConfig(const map<string, string> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline Logstash& setConfig(map<string, string> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline Logstash& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // dataNode Field Functions 
    bool hasDataNode() const { return this->dataNode_ != nullptr;};
    void deleteDataNode() { this->dataNode_ = nullptr;};
    inline bool getDataNode() const { DARABONBA_PTR_GET_DEFAULT(dataNode_, false) };
    inline Logstash& setDataNode(bool dataNode) { DARABONBA_PTR_SET_VALUE(dataNode_, dataNode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Logstash& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline Logstash& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endpointList Field Functions 
    bool hasEndpointList() const { return this->endpointList_ != nullptr;};
    void deleteEndpointList() { this->endpointList_ = nullptr;};
    inline const vector<Logstash::EndpointList> & getEndpointList() const { DARABONBA_PTR_GET_CONST(endpointList_, vector<Logstash::EndpointList>) };
    inline vector<Logstash::EndpointList> getEndpointList() { DARABONBA_PTR_GET(endpointList_, vector<Logstash::EndpointList>) };
    inline Logstash& setEndpointList(const vector<Logstash::EndpointList> & endpointList) { DARABONBA_PTR_SET_VALUE(endpointList_, endpointList) };
    inline Logstash& setEndpointList(vector<Logstash::EndpointList> && endpointList) { DARABONBA_PTR_SET_RVALUE(endpointList_, endpointList) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline Logstash& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkConfig Field Functions 
    bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
    void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
    inline const Logstash::NetworkConfig & getNetworkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, Logstash::NetworkConfig) };
    inline Logstash::NetworkConfig getNetworkConfig() { DARABONBA_PTR_GET(networkConfig_, Logstash::NetworkConfig) };
    inline Logstash& setNetworkConfig(const Logstash::NetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
    inline Logstash& setNetworkConfig(Logstash::NetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


    // nodeAmount Field Functions 
    bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
    void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
    inline int64_t getNodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0L) };
    inline Logstash& setNodeAmount(int64_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


    // nodeSpec Field Functions 
    bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
    void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
    inline const Logstash::NodeSpec & getNodeSpec() const { DARABONBA_PTR_GET_CONST(nodeSpec_, Logstash::NodeSpec) };
    inline Logstash::NodeSpec getNodeSpec() { DARABONBA_PTR_GET(nodeSpec_, Logstash::NodeSpec) };
    inline Logstash& setNodeSpec(const Logstash::NodeSpec & nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };
    inline Logstash& setNodeSpec(Logstash::NodeSpec && nodeSpec) { DARABONBA_PTR_SET_RVALUE(nodeSpec_, nodeSpec) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline Logstash& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline Logstash& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline Logstash& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline Logstash& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Logstash::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Logstash::Tags>) };
    inline vector<Logstash::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Logstash::Tags>) };
    inline Logstash& setTags(const vector<Logstash::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline Logstash& setTags(vector<Logstash::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline Logstash& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline Logstash& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // zoneCount Field Functions 
    bool hasZoneCount() const { return this->zoneCount_ != nullptr;};
    void deleteZoneCount() { this->zoneCount_ = nullptr;};
    inline int64_t getZoneCount() const { DARABONBA_PTR_GET_DEFAULT(zoneCount_, 0L) };
    inline Logstash& setZoneCount(int64_t zoneCount) { DARABONBA_PTR_SET_VALUE(zoneCount_, zoneCount) };


    // zoneInfos Field Functions 
    bool hasZoneInfos() const { return this->zoneInfos_ != nullptr;};
    void deleteZoneInfos() { this->zoneInfos_ = nullptr;};
    inline const vector<Logstash::ZoneInfos> & getZoneInfos() const { DARABONBA_PTR_GET_CONST(zoneInfos_, vector<Logstash::ZoneInfos>) };
    inline vector<Logstash::ZoneInfos> getZoneInfos() { DARABONBA_PTR_GET(zoneInfos_, vector<Logstash::ZoneInfos>) };
    inline Logstash& setZoneInfos(const vector<Logstash::ZoneInfos> & zoneInfos) { DARABONBA_PTR_SET_VALUE(zoneInfos_, zoneInfos) };
    inline Logstash& setZoneInfos(vector<Logstash::ZoneInfos> && zoneInfos) { DARABONBA_PTR_SET_RVALUE(zoneInfos_, zoneInfos) };


  protected:
    shared_ptr<map<string, string>> config_ {};
    shared_ptr<string> createdAt_ {};
    shared_ptr<bool> dataNode_ {};
    shared_ptr<string> description_ {};
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<vector<Logstash::EndpointList>> endpointList_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<Logstash::NetworkConfig> networkConfig_ {};
    shared_ptr<int64_t> nodeAmount_ {};
    shared_ptr<Logstash::NodeSpec> nodeSpec_ {};
    shared_ptr<string> paymentType_ {};
    shared_ptr<string> protocol_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<vector<Logstash::Tags>> tags_ {};
    shared_ptr<string> updatedAt_ {};
    shared_ptr<string> version_ {};
    shared_ptr<int64_t> zoneCount_ {};
    shared_ptr<vector<Logstash::ZoneInfos>> zoneInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
