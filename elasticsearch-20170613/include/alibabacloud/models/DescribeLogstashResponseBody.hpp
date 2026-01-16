// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGSTASHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGSTASHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeLogstashResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogstashResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogstashResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DescribeLogstashResponseBody() = default ;
    DescribeLogstashResponseBody(const DescribeLogstashResponseBody &) = default ;
    DescribeLogstashResponseBody(DescribeLogstashResponseBody &&) = default ;
    DescribeLogstashResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogstashResponseBody() = default ;
    DescribeLogstashResponseBody& operator=(const DescribeLogstashResponseBody &) = default ;
    DescribeLogstashResponseBody& operator=(DescribeLogstashResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
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
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NodeSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeSpec& obj) { 
          DARABONBA_PTR_TO_JSON(disk, disk_);
          DARABONBA_PTR_TO_JSON(diskEncryption, diskEncryption_);
          DARABONBA_PTR_TO_JSON(diskType, diskType_);
          DARABONBA_PTR_TO_JSON(spec, spec_);
        };
        friend void from_json(const Darabonba::Json& j, NodeSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(disk, disk_);
          DARABONBA_PTR_FROM_JSON(diskEncryption, diskEncryption_);
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
        && this->diskEncryption_ == nullptr && this->diskType_ == nullptr && this->spec_ == nullptr; };
        // disk Field Functions 
        bool hasDisk() const { return this->disk_ != nullptr;};
        void deleteDisk() { this->disk_ = nullptr;};
        inline int32_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
        inline NodeSpec& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


        // diskEncryption Field Functions 
        bool hasDiskEncryption() const { return this->diskEncryption_ != nullptr;};
        void deleteDiskEncryption() { this->diskEncryption_ = nullptr;};
        inline bool getDiskEncryption() const { DARABONBA_PTR_GET_DEFAULT(diskEncryption_, false) };
        inline NodeSpec& setDiskEncryption(bool diskEncryption) { DARABONBA_PTR_SET_VALUE(diskEncryption_, diskEncryption) };


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
        // Whether to use disk encryption:
        // 
        // *   true
        // *   false
        shared_ptr<int32_t> disk_ {};
        // The disk type of the node.
        shared_ptr<bool> diskEncryption_ {};
        // The network configurations.
        shared_ptr<string> diskType_ {};
        // The disk size of the node.
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
        // The ID of the vSwitch to which the instance is connected.
        shared_ptr<string> type_ {};
        // The zone where the cluster resides.
        shared_ptr<string> vpcId_ {};
        // The network type of the instance. Valid values: Currently, only Virtual Private Cloud (VPC) are supported.
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
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline EndpointList& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline EndpointList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The tags added to the ALB instance.
        shared_ptr<string> host_ {};
        // The IP address of the node.
        shared_ptr<string> port_ {};
        // The port number.
        shared_ptr<string> zoneId_ {};
      };

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
        // The zone ID of the new instance.
        shared_ptr<string> status_ {};
        // The configuration of cluster extension parameters.
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
        // The value of the tag.
        shared_ptr<string> tagKey_ {};
        // The information about the zones.
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->extendConfigs_ == nullptr
        && this->resourceGroupId_ == nullptr && this->tags_ == nullptr && this->zoneInfos_ == nullptr && this->config_ == nullptr && this->createdAt_ == nullptr
        && this->description_ == nullptr && this->endpointList_ == nullptr && this->instanceId_ == nullptr && this->networkConfig_ == nullptr && this->nodeAmount_ == nullptr
        && this->nodeSpec_ == nullptr && this->paymentType_ == nullptr && this->status_ == nullptr && this->updatedAt_ == nullptr && this->version_ == nullptr
        && this->vpcInstanceId_ == nullptr; };
      // extendConfigs Field Functions 
      bool hasExtendConfigs() const { return this->extendConfigs_ != nullptr;};
      void deleteExtendConfigs() { this->extendConfigs_ = nullptr;};
      inline const vector<Darabonba::Json> & getExtendConfigs() const { DARABONBA_PTR_GET_CONST(extendConfigs_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getExtendConfigs() { DARABONBA_PTR_GET(extendConfigs_, vector<Darabonba::Json>) };
      inline Result& setExtendConfigs(const vector<Darabonba::Json> & extendConfigs) { DARABONBA_PTR_SET_VALUE(extendConfigs_, extendConfigs) };
      inline Result& setExtendConfigs(vector<Darabonba::Json> && extendConfigs) { DARABONBA_PTR_SET_RVALUE(extendConfigs_, extendConfigs) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Result& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Result::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Result::Tags>) };
      inline vector<Result::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Result::Tags>) };
      inline Result& setTags(const vector<Result::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Result& setTags(vector<Result::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // zoneInfos Field Functions 
      bool hasZoneInfos() const { return this->zoneInfos_ != nullptr;};
      void deleteZoneInfos() { this->zoneInfos_ = nullptr;};
      inline const vector<Result::ZoneInfos> & getZoneInfos() const { DARABONBA_PTR_GET_CONST(zoneInfos_, vector<Result::ZoneInfos>) };
      inline vector<Result::ZoneInfos> getZoneInfos() { DARABONBA_PTR_GET(zoneInfos_, vector<Result::ZoneInfos>) };
      inline Result& setZoneInfos(const vector<Result::ZoneInfos> & zoneInfos) { DARABONBA_PTR_SET_VALUE(zoneInfos_, zoneInfos) };
      inline Result& setZoneInfos(vector<Result::ZoneInfos> && zoneInfos) { DARABONBA_PTR_SET_RVALUE(zoneInfos_, zoneInfos) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline       const Darabonba::Json & getConfig() const { DARABONBA_GET(config_) };
      Darabonba::Json & getConfig() { DARABONBA_GET(config_) };
      inline Result& setConfig(const Darabonba::Json & config) { DARABONBA_SET_VALUE(config_, config) };
      inline Result& setConfig(Darabonba::Json && config) { DARABONBA_SET_RVALUE(config_, config) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Result& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endpointList Field Functions 
      bool hasEndpointList() const { return this->endpointList_ != nullptr;};
      void deleteEndpointList() { this->endpointList_ = nullptr;};
      inline const vector<Result::EndpointList> & getEndpointList() const { DARABONBA_PTR_GET_CONST(endpointList_, vector<Result::EndpointList>) };
      inline vector<Result::EndpointList> getEndpointList() { DARABONBA_PTR_GET(endpointList_, vector<Result::EndpointList>) };
      inline Result& setEndpointList(const vector<Result::EndpointList> & endpointList) { DARABONBA_PTR_SET_VALUE(endpointList_, endpointList) };
      inline Result& setEndpointList(vector<Result::EndpointList> && endpointList) { DARABONBA_PTR_SET_RVALUE(endpointList_, endpointList) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Result& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // networkConfig Field Functions 
      bool hasNetworkConfig() const { return this->networkConfig_ != nullptr;};
      void deleteNetworkConfig() { this->networkConfig_ = nullptr;};
      inline const Result::NetworkConfig & getNetworkConfig() const { DARABONBA_PTR_GET_CONST(networkConfig_, Result::NetworkConfig) };
      inline Result::NetworkConfig getNetworkConfig() { DARABONBA_PTR_GET(networkConfig_, Result::NetworkConfig) };
      inline Result& setNetworkConfig(const Result::NetworkConfig & networkConfig) { DARABONBA_PTR_SET_VALUE(networkConfig_, networkConfig) };
      inline Result& setNetworkConfig(Result::NetworkConfig && networkConfig) { DARABONBA_PTR_SET_RVALUE(networkConfig_, networkConfig) };


      // nodeAmount Field Functions 
      bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
      void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
      inline int32_t getNodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0) };
      inline Result& setNodeAmount(int32_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


      // nodeSpec Field Functions 
      bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
      void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
      inline const Result::NodeSpec & getNodeSpec() const { DARABONBA_PTR_GET_CONST(nodeSpec_, Result::NodeSpec) };
      inline Result::NodeSpec getNodeSpec() { DARABONBA_PTR_GET(nodeSpec_, Result::NodeSpec) };
      inline Result& setNodeSpec(const Result::NodeSpec & nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };
      inline Result& setNodeSpec(Result::NodeSpec && nodeSpec) { DARABONBA_PTR_SET_RVALUE(nodeSpec_, nodeSpec) };


      // paymentType Field Functions 
      bool hasPaymentType() const { return this->paymentType_ != nullptr;};
      void deletePaymentType() { this->paymentType_ = nullptr;};
      inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
      inline Result& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Result& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Result& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // vpcInstanceId Field Functions 
      bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
      void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
      inline string getVpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
      inline Result& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


    protected:
      // The configuration information of the node.
      shared_ptr<vector<Darabonba::Json>> extendConfigs_ {};
      // The number of data nodes.
      shared_ptr<string> resourceGroupId_ {};
      // The key of the tag.
      shared_ptr<vector<Result::Tags>> tags_ {};
      // The status of the zone. Valid values:
      // 
      // *   ISOLATION: offline
      // *   NORMAL
      shared_ptr<vector<Result::ZoneInfos>> zoneInfos_ {};
      // The billing method of the instance. Valid values:
      // 
      // *   prepaid: subscription
      // *   postpaid: pay-as-you-go
      Darabonba::Json config_ {};
      // The state of the instance. Four states are supported:
      // 
      // *   Normal: active
      // *   Active: activating
      // *   Freeze: inactive
      // *   Invalid: invalid
      shared_ptr<string> createdAt_ {};
      // The time when the instance was created.
      shared_ptr<string> description_ {};
      // The ID of the zone where the node resides.
      shared_ptr<vector<Result::EndpointList>> endpointList_ {};
      // The access information of the node.
      shared_ptr<string> instanceId_ {};
      // The ID of the virtual private cloud (VPC).
      shared_ptr<Result::NetworkConfig> networkConfig_ {};
      // The name of the instance.
      shared_ptr<int32_t> nodeAmount_ {};
      // The specifications of the node.
      shared_ptr<Result::NodeSpec> nodeSpec_ {};
      // The ID of the resource group to which the instance belongs.
      shared_ptr<string> paymentType_ {};
      // The ID of the virtual private cloud (VPC) to which the elastic container instances belong.
      shared_ptr<string> status_ {};
      // The edition of the dedicated KMS instance.
      shared_ptr<string> updatedAt_ {};
      // The ID of the instance.
      shared_ptr<string> version_ {};
      // The time when the instance was last updated.
      shared_ptr<string> vpcInstanceId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogstashResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DescribeLogstashResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, DescribeLogstashResponseBody::Result) };
    inline DescribeLogstashResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, DescribeLogstashResponseBody::Result) };
    inline DescribeLogstashResponseBody& setResult(const DescribeLogstashResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeLogstashResponseBody& setResult(DescribeLogstashResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Detailed information about the instance.
    shared_ptr<string> requestId_ {};
    // The configurations of the instance.
    shared_ptr<DescribeLogstashResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
