// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODY_HPP_
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
  class DescribeInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DescribeInstanceResponseBody() = default ;
    DescribeInstanceResponseBody(const DescribeInstanceResponseBody &) = default ;
    DescribeInstanceResponseBody(DescribeInstanceResponseBody &&) = default ;
    DescribeInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceResponseBody() = default ;
    DescribeInstanceResponseBody& operator=(const DescribeInstanceResponseBody &) = default ;
    DescribeInstanceResponseBody& operator=(DescribeInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(advancedDedicateMaster, advancedDedicateMaster_);
        DARABONBA_PTR_TO_JSON(advancedSetting, advancedSetting_);
        DARABONBA_PTR_TO_JSON(aliwsDicts, aliwsDicts_);
        DARABONBA_PTR_TO_JSON(archType, archType_);
        DARABONBA_PTR_TO_JSON(clientNodeConfiguration, clientNodeConfiguration_);
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(dedicateMaster, dedicateMaster_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(dictList, dictList_);
        DARABONBA_PTR_TO_JSON(domain, domain_);
        DARABONBA_PTR_TO_JSON(elasticDataNodeConfiguration, elasticDataNodeConfiguration_);
        DARABONBA_PTR_TO_JSON(enableKibanaPrivateNetwork, enableKibanaPrivateNetwork_);
        DARABONBA_PTR_TO_JSON(enableKibanaPublicNetwork, enableKibanaPublicNetwork_);
        DARABONBA_PTR_TO_JSON(enablePublic, enablePublic_);
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(endpoints, endpoints_);
        DARABONBA_ANY_TO_JSON(esConfig, esConfig_);
        DARABONBA_PTR_TO_JSON(esIPBlacklist, esIPBlacklist_);
        DARABONBA_PTR_TO_JSON(esIPWhitelist, esIPWhitelist_);
        DARABONBA_PTR_TO_JSON(esVersion, esVersion_);
        DARABONBA_PTR_TO_JSON(extendConfigs, extendConfigs_);
        DARABONBA_PTR_TO_JSON(haveClientNode, haveClientNode_);
        DARABONBA_PTR_TO_JSON(haveKibana, haveKibana_);
        DARABONBA_PTR_TO_JSON(ikHotDicts, ikHotDicts_);
        DARABONBA_PTR_TO_JSON(inited, inited_);
        DARABONBA_PTR_TO_JSON(instanceCategory, instanceCategory_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(isNewDeployment, isNewDeployment_);
        DARABONBA_PTR_TO_JSON(kibanaConfiguration, kibanaConfiguration_);
        DARABONBA_PTR_TO_JSON(kibanaDomain, kibanaDomain_);
        DARABONBA_PTR_TO_JSON(kibanaIPWhitelist, kibanaIPWhitelist_);
        DARABONBA_PTR_TO_JSON(kibanaPort, kibanaPort_);
        DARABONBA_PTR_TO_JSON(kibanaPrivateDomain, kibanaPrivateDomain_);
        DARABONBA_PTR_TO_JSON(kibanaPrivateIPWhitelist, kibanaPrivateIPWhitelist_);
        DARABONBA_PTR_TO_JSON(kibanaPrivatePort, kibanaPrivatePort_);
        DARABONBA_PTR_TO_JSON(masterConfiguration, masterConfiguration_);
        DARABONBA_PTR_TO_JSON(networkConfig, networkConfig_);
        DARABONBA_PTR_TO_JSON(nodeAmount, nodeAmount_);
        DARABONBA_PTR_TO_JSON(nodeSpec, nodeSpec_);
        DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
        DARABONBA_PTR_TO_JSON(port, port_);
        DARABONBA_PTR_TO_JSON(postpaidServiceStatus, postpaidServiceStatus_);
        DARABONBA_PTR_TO_JSON(privateNetworkIpWhiteList, privateNetworkIpWhiteList_);
        DARABONBA_PTR_TO_JSON(protocol, protocol_);
        DARABONBA_PTR_TO_JSON(publicDomain, publicDomain_);
        DARABONBA_PTR_TO_JSON(publicIpWhitelist, publicIpWhitelist_);
        DARABONBA_PTR_TO_JSON(publicPort, publicPort_);
        DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(serviceVpc, serviceVpc_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(synonymsDicts, synonymsDicts_);
        DARABONBA_PTR_TO_JSON(tags, tags_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(vpcInstanceId, vpcInstanceId_);
        DARABONBA_PTR_TO_JSON(warmNode, warmNode_);
        DARABONBA_PTR_TO_JSON(warmNodeConfiguration, warmNodeConfiguration_);
        DARABONBA_PTR_TO_JSON(zoneCount, zoneCount_);
        DARABONBA_PTR_TO_JSON(zoneInfos, zoneInfos_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(advancedDedicateMaster, advancedDedicateMaster_);
        DARABONBA_PTR_FROM_JSON(advancedSetting, advancedSetting_);
        DARABONBA_PTR_FROM_JSON(aliwsDicts, aliwsDicts_);
        DARABONBA_PTR_FROM_JSON(archType, archType_);
        DARABONBA_PTR_FROM_JSON(clientNodeConfiguration, clientNodeConfiguration_);
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(dedicateMaster, dedicateMaster_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(dictList, dictList_);
        DARABONBA_PTR_FROM_JSON(domain, domain_);
        DARABONBA_PTR_FROM_JSON(elasticDataNodeConfiguration, elasticDataNodeConfiguration_);
        DARABONBA_PTR_FROM_JSON(enableKibanaPrivateNetwork, enableKibanaPrivateNetwork_);
        DARABONBA_PTR_FROM_JSON(enableKibanaPublicNetwork, enableKibanaPublicNetwork_);
        DARABONBA_PTR_FROM_JSON(enablePublic, enablePublic_);
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(endpoints, endpoints_);
        DARABONBA_ANY_FROM_JSON(esConfig, esConfig_);
        DARABONBA_PTR_FROM_JSON(esIPBlacklist, esIPBlacklist_);
        DARABONBA_PTR_FROM_JSON(esIPWhitelist, esIPWhitelist_);
        DARABONBA_PTR_FROM_JSON(esVersion, esVersion_);
        DARABONBA_PTR_FROM_JSON(extendConfigs, extendConfigs_);
        DARABONBA_PTR_FROM_JSON(haveClientNode, haveClientNode_);
        DARABONBA_PTR_FROM_JSON(haveKibana, haveKibana_);
        DARABONBA_PTR_FROM_JSON(ikHotDicts, ikHotDicts_);
        DARABONBA_PTR_FROM_JSON(inited, inited_);
        DARABONBA_PTR_FROM_JSON(instanceCategory, instanceCategory_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(isNewDeployment, isNewDeployment_);
        DARABONBA_PTR_FROM_JSON(kibanaConfiguration, kibanaConfiguration_);
        DARABONBA_PTR_FROM_JSON(kibanaDomain, kibanaDomain_);
        DARABONBA_PTR_FROM_JSON(kibanaIPWhitelist, kibanaIPWhitelist_);
        DARABONBA_PTR_FROM_JSON(kibanaPort, kibanaPort_);
        DARABONBA_PTR_FROM_JSON(kibanaPrivateDomain, kibanaPrivateDomain_);
        DARABONBA_PTR_FROM_JSON(kibanaPrivateIPWhitelist, kibanaPrivateIPWhitelist_);
        DARABONBA_PTR_FROM_JSON(kibanaPrivatePort, kibanaPrivatePort_);
        DARABONBA_PTR_FROM_JSON(masterConfiguration, masterConfiguration_);
        DARABONBA_PTR_FROM_JSON(networkConfig, networkConfig_);
        DARABONBA_PTR_FROM_JSON(nodeAmount, nodeAmount_);
        DARABONBA_PTR_FROM_JSON(nodeSpec, nodeSpec_);
        DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
        DARABONBA_PTR_FROM_JSON(port, port_);
        DARABONBA_PTR_FROM_JSON(postpaidServiceStatus, postpaidServiceStatus_);
        DARABONBA_PTR_FROM_JSON(privateNetworkIpWhiteList, privateNetworkIpWhiteList_);
        DARABONBA_PTR_FROM_JSON(protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(publicDomain, publicDomain_);
        DARABONBA_PTR_FROM_JSON(publicIpWhitelist, publicIpWhitelist_);
        DARABONBA_PTR_FROM_JSON(publicPort, publicPort_);
        DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(serviceVpc, serviceVpc_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(synonymsDicts, synonymsDicts_);
        DARABONBA_PTR_FROM_JSON(tags, tags_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(vpcInstanceId, vpcInstanceId_);
        DARABONBA_PTR_FROM_JSON(warmNode, warmNode_);
        DARABONBA_PTR_FROM_JSON(warmNodeConfiguration, warmNodeConfiguration_);
        DARABONBA_PTR_FROM_JSON(zoneCount, zoneCount_);
        DARABONBA_PTR_FROM_JSON(zoneInfos, zoneInfos_);
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

      class WarmNodeConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WarmNodeConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(amount, amount_);
          DARABONBA_PTR_TO_JSON(disk, disk_);
          DARABONBA_PTR_TO_JSON(diskEncryption, diskEncryption_);
          DARABONBA_PTR_TO_JSON(diskType, diskType_);
          DARABONBA_PTR_TO_JSON(spec, spec_);
          DARABONBA_PTR_TO_JSON(specInfo, specInfo_);
        };
        friend void from_json(const Darabonba::Json& j, WarmNodeConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(amount, amount_);
          DARABONBA_PTR_FROM_JSON(disk, disk_);
          DARABONBA_PTR_FROM_JSON(diskEncryption, diskEncryption_);
          DARABONBA_PTR_FROM_JSON(diskType, diskType_);
          DARABONBA_PTR_FROM_JSON(spec, spec_);
          DARABONBA_PTR_FROM_JSON(specInfo, specInfo_);
        };
        WarmNodeConfiguration() = default ;
        WarmNodeConfiguration(const WarmNodeConfiguration &) = default ;
        WarmNodeConfiguration(WarmNodeConfiguration &&) = default ;
        WarmNodeConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WarmNodeConfiguration() = default ;
        WarmNodeConfiguration& operator=(const WarmNodeConfiguration &) = default ;
        WarmNodeConfiguration& operator=(WarmNodeConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->disk_ == nullptr && this->diskEncryption_ == nullptr && this->diskType_ == nullptr && this->spec_ == nullptr && this->specInfo_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
        inline WarmNodeConfiguration& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // disk Field Functions 
        bool hasDisk() const { return this->disk_ != nullptr;};
        void deleteDisk() { this->disk_ = nullptr;};
        inline int32_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
        inline WarmNodeConfiguration& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


        // diskEncryption Field Functions 
        bool hasDiskEncryption() const { return this->diskEncryption_ != nullptr;};
        void deleteDiskEncryption() { this->diskEncryption_ = nullptr;};
        inline bool getDiskEncryption() const { DARABONBA_PTR_GET_DEFAULT(diskEncryption_, false) };
        inline WarmNodeConfiguration& setDiskEncryption(bool diskEncryption) { DARABONBA_PTR_SET_VALUE(diskEncryption_, diskEncryption) };


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline WarmNodeConfiguration& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline WarmNodeConfiguration& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // specInfo Field Functions 
        bool hasSpecInfo() const { return this->specInfo_ != nullptr;};
        void deleteSpecInfo() { this->specInfo_ = nullptr;};
        inline string getSpecInfo() const { DARABONBA_PTR_GET_DEFAULT(specInfo_, "") };
        inline WarmNodeConfiguration& setSpecInfo(string specInfo) { DARABONBA_PTR_SET_VALUE(specInfo_, specInfo) };


      protected:
        shared_ptr<int32_t> amount_ {};
        shared_ptr<int32_t> disk_ {};
        shared_ptr<bool> diskEncryption_ {};
        shared_ptr<string> diskType_ {};
        shared_ptr<string> spec_ {};
        shared_ptr<string> specInfo_ {};
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

      class SynonymsDicts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SynonymsDicts& obj) { 
          DARABONBA_PTR_TO_JSON(fileSize, fileSize_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, SynonymsDicts& obj) { 
          DARABONBA_PTR_FROM_JSON(fileSize, fileSize_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        SynonymsDicts() = default ;
        SynonymsDicts(const SynonymsDicts &) = default ;
        SynonymsDicts(SynonymsDicts &&) = default ;
        SynonymsDicts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SynonymsDicts() = default ;
        SynonymsDicts& operator=(const SynonymsDicts &) = default ;
        SynonymsDicts& operator=(SynonymsDicts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileSize_ == nullptr
        && this->name_ == nullptr && this->sourceType_ == nullptr && this->type_ == nullptr; };
        // fileSize Field Functions 
        bool hasFileSize() const { return this->fileSize_ != nullptr;};
        void deleteFileSize() { this->fileSize_ = nullptr;};
        inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
        inline SynonymsDicts& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SynonymsDicts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline SynonymsDicts& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline SynonymsDicts& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<int64_t> fileSize_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> sourceType_ {};
        shared_ptr<string> type_ {};
      };

      class NodeSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeSpec& obj) { 
          DARABONBA_PTR_TO_JSON(disk, disk_);
          DARABONBA_PTR_TO_JSON(diskEncryption, diskEncryption_);
          DARABONBA_PTR_TO_JSON(diskType, diskType_);
          DARABONBA_PTR_TO_JSON(performanceLevel, performanceLevel_);
          DARABONBA_PTR_TO_JSON(spec, spec_);
          DARABONBA_PTR_TO_JSON(specInfo, specInfo_);
        };
        friend void from_json(const Darabonba::Json& j, NodeSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(disk, disk_);
          DARABONBA_PTR_FROM_JSON(diskEncryption, diskEncryption_);
          DARABONBA_PTR_FROM_JSON(diskType, diskType_);
          DARABONBA_PTR_FROM_JSON(performanceLevel, performanceLevel_);
          DARABONBA_PTR_FROM_JSON(spec, spec_);
          DARABONBA_PTR_FROM_JSON(specInfo, specInfo_);
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
        && this->diskEncryption_ == nullptr && this->diskType_ == nullptr && this->performanceLevel_ == nullptr && this->spec_ == nullptr && this->specInfo_ == nullptr; };
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


        // performanceLevel Field Functions 
        bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
        void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
        inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
        inline NodeSpec& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline NodeSpec& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // specInfo Field Functions 
        bool hasSpecInfo() const { return this->specInfo_ != nullptr;};
        void deleteSpecInfo() { this->specInfo_ = nullptr;};
        inline string getSpecInfo() const { DARABONBA_PTR_GET_DEFAULT(specInfo_, "") };
        inline NodeSpec& setSpecInfo(string specInfo) { DARABONBA_PTR_SET_VALUE(specInfo_, specInfo) };


      protected:
        shared_ptr<int32_t> disk_ {};
        shared_ptr<bool> diskEncryption_ {};
        shared_ptr<string> diskType_ {};
        shared_ptr<string> performanceLevel_ {};
        shared_ptr<string> spec_ {};
        shared_ptr<string> specInfo_ {};
      };

      class NetworkConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetworkConfig& obj) { 
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(vsArea, vsArea_);
          DARABONBA_PTR_TO_JSON(vswitchId, vswitchId_);
          DARABONBA_PTR_TO_JSON(whiteIpGroupList, whiteIpGroupList_);
        };
        friend void from_json(const Darabonba::Json& j, NetworkConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(vsArea, vsArea_);
          DARABONBA_PTR_FROM_JSON(vswitchId, vswitchId_);
          DARABONBA_PTR_FROM_JSON(whiteIpGroupList, whiteIpGroupList_);
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
        class WhiteIpGroupList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const WhiteIpGroupList& obj) { 
            DARABONBA_PTR_TO_JSON(groupName, groupName_);
            DARABONBA_PTR_TO_JSON(ips, ips_);
            DARABONBA_PTR_TO_JSON(whiteIpType, whiteIpType_);
          };
          friend void from_json(const Darabonba::Json& j, WhiteIpGroupList& obj) { 
            DARABONBA_PTR_FROM_JSON(groupName, groupName_);
            DARABONBA_PTR_FROM_JSON(ips, ips_);
            DARABONBA_PTR_FROM_JSON(whiteIpType, whiteIpType_);
          };
          WhiteIpGroupList() = default ;
          WhiteIpGroupList(const WhiteIpGroupList &) = default ;
          WhiteIpGroupList(WhiteIpGroupList &&) = default ;
          WhiteIpGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~WhiteIpGroupList() = default ;
          WhiteIpGroupList& operator=(const WhiteIpGroupList &) = default ;
          WhiteIpGroupList& operator=(WhiteIpGroupList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->groupName_ == nullptr
        && this->ips_ == nullptr && this->whiteIpType_ == nullptr; };
          // groupName Field Functions 
          bool hasGroupName() const { return this->groupName_ != nullptr;};
          void deleteGroupName() { this->groupName_ = nullptr;};
          inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
          inline WhiteIpGroupList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


          // ips Field Functions 
          bool hasIps() const { return this->ips_ != nullptr;};
          void deleteIps() { this->ips_ = nullptr;};
          inline const vector<string> & getIps() const { DARABONBA_PTR_GET_CONST(ips_, vector<string>) };
          inline vector<string> getIps() { DARABONBA_PTR_GET(ips_, vector<string>) };
          inline WhiteIpGroupList& setIps(const vector<string> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
          inline WhiteIpGroupList& setIps(vector<string> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


          // whiteIpType Field Functions 
          bool hasWhiteIpType() const { return this->whiteIpType_ != nullptr;};
          void deleteWhiteIpType() { this->whiteIpType_ = nullptr;};
          inline string getWhiteIpType() const { DARABONBA_PTR_GET_DEFAULT(whiteIpType_, "") };
          inline WhiteIpGroupList& setWhiteIpType(string whiteIpType) { DARABONBA_PTR_SET_VALUE(whiteIpType_, whiteIpType) };


        protected:
          shared_ptr<string> groupName_ {};
          shared_ptr<vector<string>> ips_ {};
          shared_ptr<string> whiteIpType_ {};
        };

        virtual bool empty() const override { return this->type_ == nullptr
        && this->vpcId_ == nullptr && this->vsArea_ == nullptr && this->vswitchId_ == nullptr && this->whiteIpGroupList_ == nullptr; };
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


        // whiteIpGroupList Field Functions 
        bool hasWhiteIpGroupList() const { return this->whiteIpGroupList_ != nullptr;};
        void deleteWhiteIpGroupList() { this->whiteIpGroupList_ = nullptr;};
        inline const vector<NetworkConfig::WhiteIpGroupList> & getWhiteIpGroupList() const { DARABONBA_PTR_GET_CONST(whiteIpGroupList_, vector<NetworkConfig::WhiteIpGroupList>) };
        inline vector<NetworkConfig::WhiteIpGroupList> getWhiteIpGroupList() { DARABONBA_PTR_GET(whiteIpGroupList_, vector<NetworkConfig::WhiteIpGroupList>) };
        inline NetworkConfig& setWhiteIpGroupList(const vector<NetworkConfig::WhiteIpGroupList> & whiteIpGroupList) { DARABONBA_PTR_SET_VALUE(whiteIpGroupList_, whiteIpGroupList) };
        inline NetworkConfig& setWhiteIpGroupList(vector<NetworkConfig::WhiteIpGroupList> && whiteIpGroupList) { DARABONBA_PTR_SET_RVALUE(whiteIpGroupList_, whiteIpGroupList) };


      protected:
        shared_ptr<string> type_ {};
        shared_ptr<string> vpcId_ {};
        shared_ptr<string> vsArea_ {};
        shared_ptr<string> vswitchId_ {};
        shared_ptr<vector<NetworkConfig::WhiteIpGroupList>> whiteIpGroupList_ {};
      };

      class MasterConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MasterConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(amount, amount_);
          DARABONBA_PTR_TO_JSON(disk, disk_);
          DARABONBA_PTR_TO_JSON(diskType, diskType_);
          DARABONBA_PTR_TO_JSON(spec, spec_);
          DARABONBA_PTR_TO_JSON(specInfo, specInfo_);
        };
        friend void from_json(const Darabonba::Json& j, MasterConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(amount, amount_);
          DARABONBA_PTR_FROM_JSON(disk, disk_);
          DARABONBA_PTR_FROM_JSON(diskType, diskType_);
          DARABONBA_PTR_FROM_JSON(spec, spec_);
          DARABONBA_PTR_FROM_JSON(specInfo, specInfo_);
        };
        MasterConfiguration() = default ;
        MasterConfiguration(const MasterConfiguration &) = default ;
        MasterConfiguration(MasterConfiguration &&) = default ;
        MasterConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MasterConfiguration() = default ;
        MasterConfiguration& operator=(const MasterConfiguration &) = default ;
        MasterConfiguration& operator=(MasterConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->disk_ == nullptr && this->diskType_ == nullptr && this->spec_ == nullptr && this->specInfo_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
        inline MasterConfiguration& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // disk Field Functions 
        bool hasDisk() const { return this->disk_ != nullptr;};
        void deleteDisk() { this->disk_ = nullptr;};
        inline int32_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
        inline MasterConfiguration& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline MasterConfiguration& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline MasterConfiguration& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // specInfo Field Functions 
        bool hasSpecInfo() const { return this->specInfo_ != nullptr;};
        void deleteSpecInfo() { this->specInfo_ = nullptr;};
        inline string getSpecInfo() const { DARABONBA_PTR_GET_DEFAULT(specInfo_, "") };
        inline MasterConfiguration& setSpecInfo(string specInfo) { DARABONBA_PTR_SET_VALUE(specInfo_, specInfo) };


      protected:
        shared_ptr<int32_t> amount_ {};
        shared_ptr<int32_t> disk_ {};
        shared_ptr<string> diskType_ {};
        shared_ptr<string> spec_ {};
        shared_ptr<string> specInfo_ {};
      };

      class KibanaConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KibanaConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(amount, amount_);
          DARABONBA_PTR_TO_JSON(disk, disk_);
          DARABONBA_PTR_TO_JSON(spec, spec_);
          DARABONBA_PTR_TO_JSON(specInfo, specInfo_);
        };
        friend void from_json(const Darabonba::Json& j, KibanaConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(amount, amount_);
          DARABONBA_PTR_FROM_JSON(disk, disk_);
          DARABONBA_PTR_FROM_JSON(spec, spec_);
          DARABONBA_PTR_FROM_JSON(specInfo, specInfo_);
        };
        KibanaConfiguration() = default ;
        KibanaConfiguration(const KibanaConfiguration &) = default ;
        KibanaConfiguration(KibanaConfiguration &&) = default ;
        KibanaConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KibanaConfiguration() = default ;
        KibanaConfiguration& operator=(const KibanaConfiguration &) = default ;
        KibanaConfiguration& operator=(KibanaConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->disk_ == nullptr && this->spec_ == nullptr && this->specInfo_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
        inline KibanaConfiguration& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // disk Field Functions 
        bool hasDisk() const { return this->disk_ != nullptr;};
        void deleteDisk() { this->disk_ = nullptr;};
        inline int32_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
        inline KibanaConfiguration& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline KibanaConfiguration& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // specInfo Field Functions 
        bool hasSpecInfo() const { return this->specInfo_ != nullptr;};
        void deleteSpecInfo() { this->specInfo_ = nullptr;};
        inline string getSpecInfo() const { DARABONBA_PTR_GET_DEFAULT(specInfo_, "") };
        inline KibanaConfiguration& setSpecInfo(string specInfo) { DARABONBA_PTR_SET_VALUE(specInfo_, specInfo) };


      protected:
        shared_ptr<int32_t> amount_ {};
        shared_ptr<int32_t> disk_ {};
        shared_ptr<string> spec_ {};
        shared_ptr<string> specInfo_ {};
      };

      class IkHotDicts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IkHotDicts& obj) { 
          DARABONBA_PTR_TO_JSON(fileSize, fileSize_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, IkHotDicts& obj) { 
          DARABONBA_PTR_FROM_JSON(fileSize, fileSize_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        IkHotDicts() = default ;
        IkHotDicts(const IkHotDicts &) = default ;
        IkHotDicts(IkHotDicts &&) = default ;
        IkHotDicts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IkHotDicts() = default ;
        IkHotDicts& operator=(const IkHotDicts &) = default ;
        IkHotDicts& operator=(IkHotDicts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileSize_ == nullptr
        && this->name_ == nullptr && this->sourceType_ == nullptr && this->type_ == nullptr; };
        // fileSize Field Functions 
        bool hasFileSize() const { return this->fileSize_ != nullptr;};
        void deleteFileSize() { this->fileSize_ = nullptr;};
        inline int32_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0) };
        inline IkHotDicts& setFileSize(int32_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline IkHotDicts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline IkHotDicts& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline IkHotDicts& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<int32_t> fileSize_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> sourceType_ {};
        shared_ptr<string> type_ {};
      };

      class Endpoints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
          DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(vswitchId, vswitchId_);
          DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
          DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(vswitchId, vswitchId_);
          DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
        };
        Endpoints() = default ;
        Endpoints(const Endpoints &) = default ;
        Endpoints(Endpoints &&) = default ;
        Endpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Endpoints() = default ;
        Endpoints& operator=(const Endpoints &) = default ;
        Endpoints& operator=(Endpoints &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endpoint_ == nullptr
        && this->vswitchId_ == nullptr && this->zoneId_ == nullptr; };
        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
        inline Endpoints& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


        // vswitchId Field Functions 
        bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
        void deleteVswitchId() { this->vswitchId_ = nullptr;};
        inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
        inline Endpoints& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Endpoints& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<string> endpoint_ {};
        shared_ptr<string> vswitchId_ {};
        shared_ptr<string> zoneId_ {};
      };

      class ElasticDataNodeConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ElasticDataNodeConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(amount, amount_);
          DARABONBA_PTR_TO_JSON(disk, disk_);
          DARABONBA_PTR_TO_JSON(diskEncryption, diskEncryption_);
          DARABONBA_PTR_TO_JSON(diskType, diskType_);
          DARABONBA_PTR_TO_JSON(spec, spec_);
          DARABONBA_PTR_TO_JSON(specInfo, specInfo_);
        };
        friend void from_json(const Darabonba::Json& j, ElasticDataNodeConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(amount, amount_);
          DARABONBA_PTR_FROM_JSON(disk, disk_);
          DARABONBA_PTR_FROM_JSON(diskEncryption, diskEncryption_);
          DARABONBA_PTR_FROM_JSON(diskType, diskType_);
          DARABONBA_PTR_FROM_JSON(spec, spec_);
          DARABONBA_PTR_FROM_JSON(specInfo, specInfo_);
        };
        ElasticDataNodeConfiguration() = default ;
        ElasticDataNodeConfiguration(const ElasticDataNodeConfiguration &) = default ;
        ElasticDataNodeConfiguration(ElasticDataNodeConfiguration &&) = default ;
        ElasticDataNodeConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ElasticDataNodeConfiguration() = default ;
        ElasticDataNodeConfiguration& operator=(const ElasticDataNodeConfiguration &) = default ;
        ElasticDataNodeConfiguration& operator=(ElasticDataNodeConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->disk_ == nullptr && this->diskEncryption_ == nullptr && this->diskType_ == nullptr && this->spec_ == nullptr && this->specInfo_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
        inline ElasticDataNodeConfiguration& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // disk Field Functions 
        bool hasDisk() const { return this->disk_ != nullptr;};
        void deleteDisk() { this->disk_ = nullptr;};
        inline int32_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
        inline ElasticDataNodeConfiguration& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


        // diskEncryption Field Functions 
        bool hasDiskEncryption() const { return this->diskEncryption_ != nullptr;};
        void deleteDiskEncryption() { this->diskEncryption_ = nullptr;};
        inline bool getDiskEncryption() const { DARABONBA_PTR_GET_DEFAULT(diskEncryption_, false) };
        inline ElasticDataNodeConfiguration& setDiskEncryption(bool diskEncryption) { DARABONBA_PTR_SET_VALUE(diskEncryption_, diskEncryption) };


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline ElasticDataNodeConfiguration& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline ElasticDataNodeConfiguration& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // specInfo Field Functions 
        bool hasSpecInfo() const { return this->specInfo_ != nullptr;};
        void deleteSpecInfo() { this->specInfo_ = nullptr;};
        inline string getSpecInfo() const { DARABONBA_PTR_GET_DEFAULT(specInfo_, "") };
        inline ElasticDataNodeConfiguration& setSpecInfo(string specInfo) { DARABONBA_PTR_SET_VALUE(specInfo_, specInfo) };


      protected:
        shared_ptr<int32_t> amount_ {};
        shared_ptr<int32_t> disk_ {};
        shared_ptr<bool> diskEncryption_ {};
        shared_ptr<string> diskType_ {};
        shared_ptr<string> spec_ {};
        shared_ptr<string> specInfo_ {};
      };

      class DictList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DictList& obj) { 
          DARABONBA_PTR_TO_JSON(fileSize, fileSize_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, DictList& obj) { 
          DARABONBA_PTR_FROM_JSON(fileSize, fileSize_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        DictList() = default ;
        DictList(const DictList &) = default ;
        DictList(DictList &&) = default ;
        DictList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DictList() = default ;
        DictList& operator=(const DictList &) = default ;
        DictList& operator=(DictList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileSize_ == nullptr
        && this->name_ == nullptr && this->sourceType_ == nullptr && this->type_ == nullptr; };
        // fileSize Field Functions 
        bool hasFileSize() const { return this->fileSize_ != nullptr;};
        void deleteFileSize() { this->fileSize_ = nullptr;};
        inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
        inline DictList& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DictList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline DictList& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DictList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<int64_t> fileSize_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> sourceType_ {};
        shared_ptr<string> type_ {};
      };

      class ClientNodeConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClientNodeConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(amount, amount_);
          DARABONBA_PTR_TO_JSON(disk, disk_);
          DARABONBA_PTR_TO_JSON(diskType, diskType_);
          DARABONBA_PTR_TO_JSON(spec, spec_);
          DARABONBA_PTR_TO_JSON(specInfo, specInfo_);
        };
        friend void from_json(const Darabonba::Json& j, ClientNodeConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(amount, amount_);
          DARABONBA_PTR_FROM_JSON(disk, disk_);
          DARABONBA_PTR_FROM_JSON(diskType, diskType_);
          DARABONBA_PTR_FROM_JSON(spec, spec_);
          DARABONBA_PTR_FROM_JSON(specInfo, specInfo_);
        };
        ClientNodeConfiguration() = default ;
        ClientNodeConfiguration(const ClientNodeConfiguration &) = default ;
        ClientNodeConfiguration(ClientNodeConfiguration &&) = default ;
        ClientNodeConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClientNodeConfiguration() = default ;
        ClientNodeConfiguration& operator=(const ClientNodeConfiguration &) = default ;
        ClientNodeConfiguration& operator=(ClientNodeConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->disk_ == nullptr && this->diskType_ == nullptr && this->spec_ == nullptr && this->specInfo_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
        inline ClientNodeConfiguration& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // disk Field Functions 
        bool hasDisk() const { return this->disk_ != nullptr;};
        void deleteDisk() { this->disk_ = nullptr;};
        inline int32_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
        inline ClientNodeConfiguration& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline ClientNodeConfiguration& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline ClientNodeConfiguration& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // specInfo Field Functions 
        bool hasSpecInfo() const { return this->specInfo_ != nullptr;};
        void deleteSpecInfo() { this->specInfo_ = nullptr;};
        inline string getSpecInfo() const { DARABONBA_PTR_GET_DEFAULT(specInfo_, "") };
        inline ClientNodeConfiguration& setSpecInfo(string specInfo) { DARABONBA_PTR_SET_VALUE(specInfo_, specInfo) };


      protected:
        shared_ptr<int32_t> amount_ {};
        shared_ptr<int32_t> disk_ {};
        shared_ptr<string> diskType_ {};
        shared_ptr<string> spec_ {};
        shared_ptr<string> specInfo_ {};
      };

      class AliwsDicts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AliwsDicts& obj) { 
          DARABONBA_PTR_TO_JSON(fileSize, fileSize_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, AliwsDicts& obj) { 
          DARABONBA_PTR_FROM_JSON(fileSize, fileSize_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        AliwsDicts() = default ;
        AliwsDicts(const AliwsDicts &) = default ;
        AliwsDicts(AliwsDicts &&) = default ;
        AliwsDicts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AliwsDicts() = default ;
        AliwsDicts& operator=(const AliwsDicts &) = default ;
        AliwsDicts& operator=(AliwsDicts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fileSize_ == nullptr
        && this->name_ == nullptr && this->sourceType_ == nullptr && this->type_ == nullptr; };
        // fileSize Field Functions 
        bool hasFileSize() const { return this->fileSize_ != nullptr;};
        void deleteFileSize() { this->fileSize_ = nullptr;};
        inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
        inline AliwsDicts& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AliwsDicts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline AliwsDicts& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline AliwsDicts& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<int64_t> fileSize_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> sourceType_ {};
        shared_ptr<string> type_ {};
      };

      class AdvancedSetting : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdvancedSetting& obj) { 
          DARABONBA_PTR_TO_JSON(gcName, gcName_);
        };
        friend void from_json(const Darabonba::Json& j, AdvancedSetting& obj) { 
          DARABONBA_PTR_FROM_JSON(gcName, gcName_);
        };
        AdvancedSetting() = default ;
        AdvancedSetting(const AdvancedSetting &) = default ;
        AdvancedSetting(AdvancedSetting &&) = default ;
        AdvancedSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdvancedSetting() = default ;
        AdvancedSetting& operator=(const AdvancedSetting &) = default ;
        AdvancedSetting& operator=(AdvancedSetting &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->gcName_ == nullptr; };
        // gcName Field Functions 
        bool hasGcName() const { return this->gcName_ != nullptr;};
        void deleteGcName() { this->gcName_ = nullptr;};
        inline string getGcName() const { DARABONBA_PTR_GET_DEFAULT(gcName_, "") };
        inline AdvancedSetting& setGcName(string gcName) { DARABONBA_PTR_SET_VALUE(gcName_, gcName) };


      protected:
        shared_ptr<string> gcName_ {};
      };

      virtual bool empty() const override { return this->advancedDedicateMaster_ == nullptr
        && this->advancedSetting_ == nullptr && this->aliwsDicts_ == nullptr && this->archType_ == nullptr && this->clientNodeConfiguration_ == nullptr && this->createdAt_ == nullptr
        && this->dedicateMaster_ == nullptr && this->description_ == nullptr && this->dictList_ == nullptr && this->domain_ == nullptr && this->elasticDataNodeConfiguration_ == nullptr
        && this->enableKibanaPrivateNetwork_ == nullptr && this->enableKibanaPublicNetwork_ == nullptr && this->enablePublic_ == nullptr && this->endTime_ == nullptr && this->endpoints_ == nullptr
        && this->esConfig_ == nullptr && this->esIPBlacklist_ == nullptr && this->esIPWhitelist_ == nullptr && this->esVersion_ == nullptr && this->extendConfigs_ == nullptr
        && this->haveClientNode_ == nullptr && this->haveKibana_ == nullptr && this->ikHotDicts_ == nullptr && this->inited_ == nullptr && this->instanceCategory_ == nullptr
        && this->instanceId_ == nullptr && this->isNewDeployment_ == nullptr && this->kibanaConfiguration_ == nullptr && this->kibanaDomain_ == nullptr && this->kibanaIPWhitelist_ == nullptr
        && this->kibanaPort_ == nullptr && this->kibanaPrivateDomain_ == nullptr && this->kibanaPrivateIPWhitelist_ == nullptr && this->kibanaPrivatePort_ == nullptr && this->masterConfiguration_ == nullptr
        && this->networkConfig_ == nullptr && this->nodeAmount_ == nullptr && this->nodeSpec_ == nullptr && this->paymentType_ == nullptr && this->port_ == nullptr
        && this->postpaidServiceStatus_ == nullptr && this->privateNetworkIpWhiteList_ == nullptr && this->protocol_ == nullptr && this->publicDomain_ == nullptr && this->publicIpWhitelist_ == nullptr
        && this->publicPort_ == nullptr && this->resourceGroupId_ == nullptr && this->serviceVpc_ == nullptr && this->status_ == nullptr && this->synonymsDicts_ == nullptr
        && this->tags_ == nullptr && this->updatedAt_ == nullptr && this->vpcInstanceId_ == nullptr && this->warmNode_ == nullptr && this->warmNodeConfiguration_ == nullptr
        && this->zoneCount_ == nullptr && this->zoneInfos_ == nullptr; };
      // advancedDedicateMaster Field Functions 
      bool hasAdvancedDedicateMaster() const { return this->advancedDedicateMaster_ != nullptr;};
      void deleteAdvancedDedicateMaster() { this->advancedDedicateMaster_ = nullptr;};
      inline bool getAdvancedDedicateMaster() const { DARABONBA_PTR_GET_DEFAULT(advancedDedicateMaster_, false) };
      inline Result& setAdvancedDedicateMaster(bool advancedDedicateMaster) { DARABONBA_PTR_SET_VALUE(advancedDedicateMaster_, advancedDedicateMaster) };


      // advancedSetting Field Functions 
      bool hasAdvancedSetting() const { return this->advancedSetting_ != nullptr;};
      void deleteAdvancedSetting() { this->advancedSetting_ = nullptr;};
      inline const Result::AdvancedSetting & getAdvancedSetting() const { DARABONBA_PTR_GET_CONST(advancedSetting_, Result::AdvancedSetting) };
      inline Result::AdvancedSetting getAdvancedSetting() { DARABONBA_PTR_GET(advancedSetting_, Result::AdvancedSetting) };
      inline Result& setAdvancedSetting(const Result::AdvancedSetting & advancedSetting) { DARABONBA_PTR_SET_VALUE(advancedSetting_, advancedSetting) };
      inline Result& setAdvancedSetting(Result::AdvancedSetting && advancedSetting) { DARABONBA_PTR_SET_RVALUE(advancedSetting_, advancedSetting) };


      // aliwsDicts Field Functions 
      bool hasAliwsDicts() const { return this->aliwsDicts_ != nullptr;};
      void deleteAliwsDicts() { this->aliwsDicts_ = nullptr;};
      inline const vector<Result::AliwsDicts> & getAliwsDicts() const { DARABONBA_PTR_GET_CONST(aliwsDicts_, vector<Result::AliwsDicts>) };
      inline vector<Result::AliwsDicts> getAliwsDicts() { DARABONBA_PTR_GET(aliwsDicts_, vector<Result::AliwsDicts>) };
      inline Result& setAliwsDicts(const vector<Result::AliwsDicts> & aliwsDicts) { DARABONBA_PTR_SET_VALUE(aliwsDicts_, aliwsDicts) };
      inline Result& setAliwsDicts(vector<Result::AliwsDicts> && aliwsDicts) { DARABONBA_PTR_SET_RVALUE(aliwsDicts_, aliwsDicts) };


      // archType Field Functions 
      bool hasArchType() const { return this->archType_ != nullptr;};
      void deleteArchType() { this->archType_ = nullptr;};
      inline string getArchType() const { DARABONBA_PTR_GET_DEFAULT(archType_, "") };
      inline Result& setArchType(string archType) { DARABONBA_PTR_SET_VALUE(archType_, archType) };


      // clientNodeConfiguration Field Functions 
      bool hasClientNodeConfiguration() const { return this->clientNodeConfiguration_ != nullptr;};
      void deleteClientNodeConfiguration() { this->clientNodeConfiguration_ = nullptr;};
      inline const Result::ClientNodeConfiguration & getClientNodeConfiguration() const { DARABONBA_PTR_GET_CONST(clientNodeConfiguration_, Result::ClientNodeConfiguration) };
      inline Result::ClientNodeConfiguration getClientNodeConfiguration() { DARABONBA_PTR_GET(clientNodeConfiguration_, Result::ClientNodeConfiguration) };
      inline Result& setClientNodeConfiguration(const Result::ClientNodeConfiguration & clientNodeConfiguration) { DARABONBA_PTR_SET_VALUE(clientNodeConfiguration_, clientNodeConfiguration) };
      inline Result& setClientNodeConfiguration(Result::ClientNodeConfiguration && clientNodeConfiguration) { DARABONBA_PTR_SET_RVALUE(clientNodeConfiguration_, clientNodeConfiguration) };


      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
      inline Result& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // dedicateMaster Field Functions 
      bool hasDedicateMaster() const { return this->dedicateMaster_ != nullptr;};
      void deleteDedicateMaster() { this->dedicateMaster_ = nullptr;};
      inline bool getDedicateMaster() const { DARABONBA_PTR_GET_DEFAULT(dedicateMaster_, false) };
      inline Result& setDedicateMaster(bool dedicateMaster) { DARABONBA_PTR_SET_VALUE(dedicateMaster_, dedicateMaster) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // dictList Field Functions 
      bool hasDictList() const { return this->dictList_ != nullptr;};
      void deleteDictList() { this->dictList_ = nullptr;};
      inline const vector<Result::DictList> & getDictList() const { DARABONBA_PTR_GET_CONST(dictList_, vector<Result::DictList>) };
      inline vector<Result::DictList> getDictList() { DARABONBA_PTR_GET(dictList_, vector<Result::DictList>) };
      inline Result& setDictList(const vector<Result::DictList> & dictList) { DARABONBA_PTR_SET_VALUE(dictList_, dictList) };
      inline Result& setDictList(vector<Result::DictList> && dictList) { DARABONBA_PTR_SET_RVALUE(dictList_, dictList) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Result& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // elasticDataNodeConfiguration Field Functions 
      bool hasElasticDataNodeConfiguration() const { return this->elasticDataNodeConfiguration_ != nullptr;};
      void deleteElasticDataNodeConfiguration() { this->elasticDataNodeConfiguration_ = nullptr;};
      inline const Result::ElasticDataNodeConfiguration & getElasticDataNodeConfiguration() const { DARABONBA_PTR_GET_CONST(elasticDataNodeConfiguration_, Result::ElasticDataNodeConfiguration) };
      inline Result::ElasticDataNodeConfiguration getElasticDataNodeConfiguration() { DARABONBA_PTR_GET(elasticDataNodeConfiguration_, Result::ElasticDataNodeConfiguration) };
      inline Result& setElasticDataNodeConfiguration(const Result::ElasticDataNodeConfiguration & elasticDataNodeConfiguration) { DARABONBA_PTR_SET_VALUE(elasticDataNodeConfiguration_, elasticDataNodeConfiguration) };
      inline Result& setElasticDataNodeConfiguration(Result::ElasticDataNodeConfiguration && elasticDataNodeConfiguration) { DARABONBA_PTR_SET_RVALUE(elasticDataNodeConfiguration_, elasticDataNodeConfiguration) };


      // enableKibanaPrivateNetwork Field Functions 
      bool hasEnableKibanaPrivateNetwork() const { return this->enableKibanaPrivateNetwork_ != nullptr;};
      void deleteEnableKibanaPrivateNetwork() { this->enableKibanaPrivateNetwork_ = nullptr;};
      inline bool getEnableKibanaPrivateNetwork() const { DARABONBA_PTR_GET_DEFAULT(enableKibanaPrivateNetwork_, false) };
      inline Result& setEnableKibanaPrivateNetwork(bool enableKibanaPrivateNetwork) { DARABONBA_PTR_SET_VALUE(enableKibanaPrivateNetwork_, enableKibanaPrivateNetwork) };


      // enableKibanaPublicNetwork Field Functions 
      bool hasEnableKibanaPublicNetwork() const { return this->enableKibanaPublicNetwork_ != nullptr;};
      void deleteEnableKibanaPublicNetwork() { this->enableKibanaPublicNetwork_ = nullptr;};
      inline bool getEnableKibanaPublicNetwork() const { DARABONBA_PTR_GET_DEFAULT(enableKibanaPublicNetwork_, false) };
      inline Result& setEnableKibanaPublicNetwork(bool enableKibanaPublicNetwork) { DARABONBA_PTR_SET_VALUE(enableKibanaPublicNetwork_, enableKibanaPublicNetwork) };


      // enablePublic Field Functions 
      bool hasEnablePublic() const { return this->enablePublic_ != nullptr;};
      void deleteEnablePublic() { this->enablePublic_ = nullptr;};
      inline bool getEnablePublic() const { DARABONBA_PTR_GET_DEFAULT(enablePublic_, false) };
      inline Result& setEnablePublic(bool enablePublic) { DARABONBA_PTR_SET_VALUE(enablePublic_, enablePublic) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Result& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // endpoints Field Functions 
      bool hasEndpoints() const { return this->endpoints_ != nullptr;};
      void deleteEndpoints() { this->endpoints_ = nullptr;};
      inline const vector<Result::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<Result::Endpoints>) };
      inline vector<Result::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<Result::Endpoints>) };
      inline Result& setEndpoints(const vector<Result::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
      inline Result& setEndpoints(vector<Result::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


      // esConfig Field Functions 
      bool hasEsConfig() const { return this->esConfig_ != nullptr;};
      void deleteEsConfig() { this->esConfig_ = nullptr;};
      inline       const Darabonba::Json & getEsConfig() const { DARABONBA_GET(esConfig_) };
      Darabonba::Json & getEsConfig() { DARABONBA_GET(esConfig_) };
      inline Result& setEsConfig(const Darabonba::Json & esConfig) { DARABONBA_SET_VALUE(esConfig_, esConfig) };
      inline Result& setEsConfig(Darabonba::Json && esConfig) { DARABONBA_SET_RVALUE(esConfig_, esConfig) };


      // esIPBlacklist Field Functions 
      bool hasEsIPBlacklist() const { return this->esIPBlacklist_ != nullptr;};
      void deleteEsIPBlacklist() { this->esIPBlacklist_ = nullptr;};
      inline const vector<string> & getEsIPBlacklist() const { DARABONBA_PTR_GET_CONST(esIPBlacklist_, vector<string>) };
      inline vector<string> getEsIPBlacklist() { DARABONBA_PTR_GET(esIPBlacklist_, vector<string>) };
      inline Result& setEsIPBlacklist(const vector<string> & esIPBlacklist) { DARABONBA_PTR_SET_VALUE(esIPBlacklist_, esIPBlacklist) };
      inline Result& setEsIPBlacklist(vector<string> && esIPBlacklist) { DARABONBA_PTR_SET_RVALUE(esIPBlacklist_, esIPBlacklist) };


      // esIPWhitelist Field Functions 
      bool hasEsIPWhitelist() const { return this->esIPWhitelist_ != nullptr;};
      void deleteEsIPWhitelist() { this->esIPWhitelist_ = nullptr;};
      inline const vector<string> & getEsIPWhitelist() const { DARABONBA_PTR_GET_CONST(esIPWhitelist_, vector<string>) };
      inline vector<string> getEsIPWhitelist() { DARABONBA_PTR_GET(esIPWhitelist_, vector<string>) };
      inline Result& setEsIPWhitelist(const vector<string> & esIPWhitelist) { DARABONBA_PTR_SET_VALUE(esIPWhitelist_, esIPWhitelist) };
      inline Result& setEsIPWhitelist(vector<string> && esIPWhitelist) { DARABONBA_PTR_SET_RVALUE(esIPWhitelist_, esIPWhitelist) };


      // esVersion Field Functions 
      bool hasEsVersion() const { return this->esVersion_ != nullptr;};
      void deleteEsVersion() { this->esVersion_ = nullptr;};
      inline string getEsVersion() const { DARABONBA_PTR_GET_DEFAULT(esVersion_, "") };
      inline Result& setEsVersion(string esVersion) { DARABONBA_PTR_SET_VALUE(esVersion_, esVersion) };


      // extendConfigs Field Functions 
      bool hasExtendConfigs() const { return this->extendConfigs_ != nullptr;};
      void deleteExtendConfigs() { this->extendConfigs_ = nullptr;};
      inline const vector<Darabonba::Json> & getExtendConfigs() const { DARABONBA_PTR_GET_CONST(extendConfigs_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getExtendConfigs() { DARABONBA_PTR_GET(extendConfigs_, vector<Darabonba::Json>) };
      inline Result& setExtendConfigs(const vector<Darabonba::Json> & extendConfigs) { DARABONBA_PTR_SET_VALUE(extendConfigs_, extendConfigs) };
      inline Result& setExtendConfigs(vector<Darabonba::Json> && extendConfigs) { DARABONBA_PTR_SET_RVALUE(extendConfigs_, extendConfigs) };


      // haveClientNode Field Functions 
      bool hasHaveClientNode() const { return this->haveClientNode_ != nullptr;};
      void deleteHaveClientNode() { this->haveClientNode_ = nullptr;};
      inline bool getHaveClientNode() const { DARABONBA_PTR_GET_DEFAULT(haveClientNode_, false) };
      inline Result& setHaveClientNode(bool haveClientNode) { DARABONBA_PTR_SET_VALUE(haveClientNode_, haveClientNode) };


      // haveKibana Field Functions 
      bool hasHaveKibana() const { return this->haveKibana_ != nullptr;};
      void deleteHaveKibana() { this->haveKibana_ = nullptr;};
      inline bool getHaveKibana() const { DARABONBA_PTR_GET_DEFAULT(haveKibana_, false) };
      inline Result& setHaveKibana(bool haveKibana) { DARABONBA_PTR_SET_VALUE(haveKibana_, haveKibana) };


      // ikHotDicts Field Functions 
      bool hasIkHotDicts() const { return this->ikHotDicts_ != nullptr;};
      void deleteIkHotDicts() { this->ikHotDicts_ = nullptr;};
      inline const vector<Result::IkHotDicts> & getIkHotDicts() const { DARABONBA_PTR_GET_CONST(ikHotDicts_, vector<Result::IkHotDicts>) };
      inline vector<Result::IkHotDicts> getIkHotDicts() { DARABONBA_PTR_GET(ikHotDicts_, vector<Result::IkHotDicts>) };
      inline Result& setIkHotDicts(const vector<Result::IkHotDicts> & ikHotDicts) { DARABONBA_PTR_SET_VALUE(ikHotDicts_, ikHotDicts) };
      inline Result& setIkHotDicts(vector<Result::IkHotDicts> && ikHotDicts) { DARABONBA_PTR_SET_RVALUE(ikHotDicts_, ikHotDicts) };


      // inited Field Functions 
      bool hasInited() const { return this->inited_ != nullptr;};
      void deleteInited() { this->inited_ = nullptr;};
      inline bool getInited() const { DARABONBA_PTR_GET_DEFAULT(inited_, false) };
      inline Result& setInited(bool inited) { DARABONBA_PTR_SET_VALUE(inited_, inited) };


      // instanceCategory Field Functions 
      bool hasInstanceCategory() const { return this->instanceCategory_ != nullptr;};
      void deleteInstanceCategory() { this->instanceCategory_ = nullptr;};
      inline string getInstanceCategory() const { DARABONBA_PTR_GET_DEFAULT(instanceCategory_, "") };
      inline Result& setInstanceCategory(string instanceCategory) { DARABONBA_PTR_SET_VALUE(instanceCategory_, instanceCategory) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Result& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // isNewDeployment Field Functions 
      bool hasIsNewDeployment() const { return this->isNewDeployment_ != nullptr;};
      void deleteIsNewDeployment() { this->isNewDeployment_ = nullptr;};
      inline bool getIsNewDeployment() const { DARABONBA_PTR_GET_DEFAULT(isNewDeployment_, false) };
      inline Result& setIsNewDeployment(bool isNewDeployment) { DARABONBA_PTR_SET_VALUE(isNewDeployment_, isNewDeployment) };


      // kibanaConfiguration Field Functions 
      bool hasKibanaConfiguration() const { return this->kibanaConfiguration_ != nullptr;};
      void deleteKibanaConfiguration() { this->kibanaConfiguration_ = nullptr;};
      inline const Result::KibanaConfiguration & getKibanaConfiguration() const { DARABONBA_PTR_GET_CONST(kibanaConfiguration_, Result::KibanaConfiguration) };
      inline Result::KibanaConfiguration getKibanaConfiguration() { DARABONBA_PTR_GET(kibanaConfiguration_, Result::KibanaConfiguration) };
      inline Result& setKibanaConfiguration(const Result::KibanaConfiguration & kibanaConfiguration) { DARABONBA_PTR_SET_VALUE(kibanaConfiguration_, kibanaConfiguration) };
      inline Result& setKibanaConfiguration(Result::KibanaConfiguration && kibanaConfiguration) { DARABONBA_PTR_SET_RVALUE(kibanaConfiguration_, kibanaConfiguration) };


      // kibanaDomain Field Functions 
      bool hasKibanaDomain() const { return this->kibanaDomain_ != nullptr;};
      void deleteKibanaDomain() { this->kibanaDomain_ = nullptr;};
      inline string getKibanaDomain() const { DARABONBA_PTR_GET_DEFAULT(kibanaDomain_, "") };
      inline Result& setKibanaDomain(string kibanaDomain) { DARABONBA_PTR_SET_VALUE(kibanaDomain_, kibanaDomain) };


      // kibanaIPWhitelist Field Functions 
      bool hasKibanaIPWhitelist() const { return this->kibanaIPWhitelist_ != nullptr;};
      void deleteKibanaIPWhitelist() { this->kibanaIPWhitelist_ = nullptr;};
      inline const vector<string> & getKibanaIPWhitelist() const { DARABONBA_PTR_GET_CONST(kibanaIPWhitelist_, vector<string>) };
      inline vector<string> getKibanaIPWhitelist() { DARABONBA_PTR_GET(kibanaIPWhitelist_, vector<string>) };
      inline Result& setKibanaIPWhitelist(const vector<string> & kibanaIPWhitelist) { DARABONBA_PTR_SET_VALUE(kibanaIPWhitelist_, kibanaIPWhitelist) };
      inline Result& setKibanaIPWhitelist(vector<string> && kibanaIPWhitelist) { DARABONBA_PTR_SET_RVALUE(kibanaIPWhitelist_, kibanaIPWhitelist) };


      // kibanaPort Field Functions 
      bool hasKibanaPort() const { return this->kibanaPort_ != nullptr;};
      void deleteKibanaPort() { this->kibanaPort_ = nullptr;};
      inline int32_t getKibanaPort() const { DARABONBA_PTR_GET_DEFAULT(kibanaPort_, 0) };
      inline Result& setKibanaPort(int32_t kibanaPort) { DARABONBA_PTR_SET_VALUE(kibanaPort_, kibanaPort) };


      // kibanaPrivateDomain Field Functions 
      bool hasKibanaPrivateDomain() const { return this->kibanaPrivateDomain_ != nullptr;};
      void deleteKibanaPrivateDomain() { this->kibanaPrivateDomain_ = nullptr;};
      inline string getKibanaPrivateDomain() const { DARABONBA_PTR_GET_DEFAULT(kibanaPrivateDomain_, "") };
      inline Result& setKibanaPrivateDomain(string kibanaPrivateDomain) { DARABONBA_PTR_SET_VALUE(kibanaPrivateDomain_, kibanaPrivateDomain) };


      // kibanaPrivateIPWhitelist Field Functions 
      bool hasKibanaPrivateIPWhitelist() const { return this->kibanaPrivateIPWhitelist_ != nullptr;};
      void deleteKibanaPrivateIPWhitelist() { this->kibanaPrivateIPWhitelist_ = nullptr;};
      inline const vector<string> & getKibanaPrivateIPWhitelist() const { DARABONBA_PTR_GET_CONST(kibanaPrivateIPWhitelist_, vector<string>) };
      inline vector<string> getKibanaPrivateIPWhitelist() { DARABONBA_PTR_GET(kibanaPrivateIPWhitelist_, vector<string>) };
      inline Result& setKibanaPrivateIPWhitelist(const vector<string> & kibanaPrivateIPWhitelist) { DARABONBA_PTR_SET_VALUE(kibanaPrivateIPWhitelist_, kibanaPrivateIPWhitelist) };
      inline Result& setKibanaPrivateIPWhitelist(vector<string> && kibanaPrivateIPWhitelist) { DARABONBA_PTR_SET_RVALUE(kibanaPrivateIPWhitelist_, kibanaPrivateIPWhitelist) };


      // kibanaPrivatePort Field Functions 
      bool hasKibanaPrivatePort() const { return this->kibanaPrivatePort_ != nullptr;};
      void deleteKibanaPrivatePort() { this->kibanaPrivatePort_ = nullptr;};
      inline string getKibanaPrivatePort() const { DARABONBA_PTR_GET_DEFAULT(kibanaPrivatePort_, "") };
      inline Result& setKibanaPrivatePort(string kibanaPrivatePort) { DARABONBA_PTR_SET_VALUE(kibanaPrivatePort_, kibanaPrivatePort) };


      // masterConfiguration Field Functions 
      bool hasMasterConfiguration() const { return this->masterConfiguration_ != nullptr;};
      void deleteMasterConfiguration() { this->masterConfiguration_ = nullptr;};
      inline const Result::MasterConfiguration & getMasterConfiguration() const { DARABONBA_PTR_GET_CONST(masterConfiguration_, Result::MasterConfiguration) };
      inline Result::MasterConfiguration getMasterConfiguration() { DARABONBA_PTR_GET(masterConfiguration_, Result::MasterConfiguration) };
      inline Result& setMasterConfiguration(const Result::MasterConfiguration & masterConfiguration) { DARABONBA_PTR_SET_VALUE(masterConfiguration_, masterConfiguration) };
      inline Result& setMasterConfiguration(Result::MasterConfiguration && masterConfiguration) { DARABONBA_PTR_SET_RVALUE(masterConfiguration_, masterConfiguration) };


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


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline Result& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // postpaidServiceStatus Field Functions 
      bool hasPostpaidServiceStatus() const { return this->postpaidServiceStatus_ != nullptr;};
      void deletePostpaidServiceStatus() { this->postpaidServiceStatus_ = nullptr;};
      inline string getPostpaidServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(postpaidServiceStatus_, "") };
      inline Result& setPostpaidServiceStatus(string postpaidServiceStatus) { DARABONBA_PTR_SET_VALUE(postpaidServiceStatus_, postpaidServiceStatus) };


      // privateNetworkIpWhiteList Field Functions 
      bool hasPrivateNetworkIpWhiteList() const { return this->privateNetworkIpWhiteList_ != nullptr;};
      void deletePrivateNetworkIpWhiteList() { this->privateNetworkIpWhiteList_ = nullptr;};
      inline const vector<string> & getPrivateNetworkIpWhiteList() const { DARABONBA_PTR_GET_CONST(privateNetworkIpWhiteList_, vector<string>) };
      inline vector<string> getPrivateNetworkIpWhiteList() { DARABONBA_PTR_GET(privateNetworkIpWhiteList_, vector<string>) };
      inline Result& setPrivateNetworkIpWhiteList(const vector<string> & privateNetworkIpWhiteList) { DARABONBA_PTR_SET_VALUE(privateNetworkIpWhiteList_, privateNetworkIpWhiteList) };
      inline Result& setPrivateNetworkIpWhiteList(vector<string> && privateNetworkIpWhiteList) { DARABONBA_PTR_SET_RVALUE(privateNetworkIpWhiteList_, privateNetworkIpWhiteList) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline Result& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // publicDomain Field Functions 
      bool hasPublicDomain() const { return this->publicDomain_ != nullptr;};
      void deletePublicDomain() { this->publicDomain_ = nullptr;};
      inline string getPublicDomain() const { DARABONBA_PTR_GET_DEFAULT(publicDomain_, "") };
      inline Result& setPublicDomain(string publicDomain) { DARABONBA_PTR_SET_VALUE(publicDomain_, publicDomain) };


      // publicIpWhitelist Field Functions 
      bool hasPublicIpWhitelist() const { return this->publicIpWhitelist_ != nullptr;};
      void deletePublicIpWhitelist() { this->publicIpWhitelist_ = nullptr;};
      inline const vector<string> & getPublicIpWhitelist() const { DARABONBA_PTR_GET_CONST(publicIpWhitelist_, vector<string>) };
      inline vector<string> getPublicIpWhitelist() { DARABONBA_PTR_GET(publicIpWhitelist_, vector<string>) };
      inline Result& setPublicIpWhitelist(const vector<string> & publicIpWhitelist) { DARABONBA_PTR_SET_VALUE(publicIpWhitelist_, publicIpWhitelist) };
      inline Result& setPublicIpWhitelist(vector<string> && publicIpWhitelist) { DARABONBA_PTR_SET_RVALUE(publicIpWhitelist_, publicIpWhitelist) };


      // publicPort Field Functions 
      bool hasPublicPort() const { return this->publicPort_ != nullptr;};
      void deletePublicPort() { this->publicPort_ = nullptr;};
      inline int32_t getPublicPort() const { DARABONBA_PTR_GET_DEFAULT(publicPort_, 0) };
      inline Result& setPublicPort(int32_t publicPort) { DARABONBA_PTR_SET_VALUE(publicPort_, publicPort) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Result& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // serviceVpc Field Functions 
      bool hasServiceVpc() const { return this->serviceVpc_ != nullptr;};
      void deleteServiceVpc() { this->serviceVpc_ = nullptr;};
      inline bool getServiceVpc() const { DARABONBA_PTR_GET_DEFAULT(serviceVpc_, false) };
      inline Result& setServiceVpc(bool serviceVpc) { DARABONBA_PTR_SET_VALUE(serviceVpc_, serviceVpc) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // synonymsDicts Field Functions 
      bool hasSynonymsDicts() const { return this->synonymsDicts_ != nullptr;};
      void deleteSynonymsDicts() { this->synonymsDicts_ = nullptr;};
      inline const vector<Result::SynonymsDicts> & getSynonymsDicts() const { DARABONBA_PTR_GET_CONST(synonymsDicts_, vector<Result::SynonymsDicts>) };
      inline vector<Result::SynonymsDicts> getSynonymsDicts() { DARABONBA_PTR_GET(synonymsDicts_, vector<Result::SynonymsDicts>) };
      inline Result& setSynonymsDicts(const vector<Result::SynonymsDicts> & synonymsDicts) { DARABONBA_PTR_SET_VALUE(synonymsDicts_, synonymsDicts) };
      inline Result& setSynonymsDicts(vector<Result::SynonymsDicts> && synonymsDicts) { DARABONBA_PTR_SET_RVALUE(synonymsDicts_, synonymsDicts) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Result::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Result::Tags>) };
      inline vector<Result::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Result::Tags>) };
      inline Result& setTags(const vector<Result::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Result& setTags(vector<Result::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Result& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // vpcInstanceId Field Functions 
      bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
      void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
      inline string getVpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
      inline Result& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


      // warmNode Field Functions 
      bool hasWarmNode() const { return this->warmNode_ != nullptr;};
      void deleteWarmNode() { this->warmNode_ = nullptr;};
      inline bool getWarmNode() const { DARABONBA_PTR_GET_DEFAULT(warmNode_, false) };
      inline Result& setWarmNode(bool warmNode) { DARABONBA_PTR_SET_VALUE(warmNode_, warmNode) };


      // warmNodeConfiguration Field Functions 
      bool hasWarmNodeConfiguration() const { return this->warmNodeConfiguration_ != nullptr;};
      void deleteWarmNodeConfiguration() { this->warmNodeConfiguration_ = nullptr;};
      inline const Result::WarmNodeConfiguration & getWarmNodeConfiguration() const { DARABONBA_PTR_GET_CONST(warmNodeConfiguration_, Result::WarmNodeConfiguration) };
      inline Result::WarmNodeConfiguration getWarmNodeConfiguration() { DARABONBA_PTR_GET(warmNodeConfiguration_, Result::WarmNodeConfiguration) };
      inline Result& setWarmNodeConfiguration(const Result::WarmNodeConfiguration & warmNodeConfiguration) { DARABONBA_PTR_SET_VALUE(warmNodeConfiguration_, warmNodeConfiguration) };
      inline Result& setWarmNodeConfiguration(Result::WarmNodeConfiguration && warmNodeConfiguration) { DARABONBA_PTR_SET_RVALUE(warmNodeConfiguration_, warmNodeConfiguration) };


      // zoneCount Field Functions 
      bool hasZoneCount() const { return this->zoneCount_ != nullptr;};
      void deleteZoneCount() { this->zoneCount_ = nullptr;};
      inline int32_t getZoneCount() const { DARABONBA_PTR_GET_DEFAULT(zoneCount_, 0) };
      inline Result& setZoneCount(int32_t zoneCount) { DARABONBA_PTR_SET_VALUE(zoneCount_, zoneCount) };


      // zoneInfos Field Functions 
      bool hasZoneInfos() const { return this->zoneInfos_ != nullptr;};
      void deleteZoneInfos() { this->zoneInfos_ = nullptr;};
      inline const vector<Result::ZoneInfos> & getZoneInfos() const { DARABONBA_PTR_GET_CONST(zoneInfos_, vector<Result::ZoneInfos>) };
      inline vector<Result::ZoneInfos> getZoneInfos() { DARABONBA_PTR_GET(zoneInfos_, vector<Result::ZoneInfos>) };
      inline Result& setZoneInfos(const vector<Result::ZoneInfos> & zoneInfos) { DARABONBA_PTR_SET_VALUE(zoneInfos_, zoneInfos) };
      inline Result& setZoneInfos(vector<Result::ZoneInfos> && zoneInfos) { DARABONBA_PTR_SET_RVALUE(zoneInfos_, zoneInfos) };


    protected:
      shared_ptr<bool> advancedDedicateMaster_ {};
      shared_ptr<Result::AdvancedSetting> advancedSetting_ {};
      shared_ptr<vector<Result::AliwsDicts>> aliwsDicts_ {};
      shared_ptr<string> archType_ {};
      shared_ptr<Result::ClientNodeConfiguration> clientNodeConfiguration_ {};
      shared_ptr<string> createdAt_ {};
      shared_ptr<bool> dedicateMaster_ {};
      shared_ptr<string> description_ {};
      shared_ptr<vector<Result::DictList>> dictList_ {};
      shared_ptr<string> domain_ {};
      shared_ptr<Result::ElasticDataNodeConfiguration> elasticDataNodeConfiguration_ {};
      shared_ptr<bool> enableKibanaPrivateNetwork_ {};
      shared_ptr<bool> enableKibanaPublicNetwork_ {};
      shared_ptr<bool> enablePublic_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<vector<Result::Endpoints>> endpoints_ {};
      Darabonba::Json esConfig_ {};
      shared_ptr<vector<string>> esIPBlacklist_ {};
      shared_ptr<vector<string>> esIPWhitelist_ {};
      shared_ptr<string> esVersion_ {};
      shared_ptr<vector<Darabonba::Json>> extendConfigs_ {};
      shared_ptr<bool> haveClientNode_ {};
      shared_ptr<bool> haveKibana_ {};
      shared_ptr<vector<Result::IkHotDicts>> ikHotDicts_ {};
      shared_ptr<bool> inited_ {};
      shared_ptr<string> instanceCategory_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<bool> isNewDeployment_ {};
      shared_ptr<Result::KibanaConfiguration> kibanaConfiguration_ {};
      shared_ptr<string> kibanaDomain_ {};
      shared_ptr<vector<string>> kibanaIPWhitelist_ {};
      shared_ptr<int32_t> kibanaPort_ {};
      shared_ptr<string> kibanaPrivateDomain_ {};
      shared_ptr<vector<string>> kibanaPrivateIPWhitelist_ {};
      shared_ptr<string> kibanaPrivatePort_ {};
      shared_ptr<Result::MasterConfiguration> masterConfiguration_ {};
      shared_ptr<Result::NetworkConfig> networkConfig_ {};
      shared_ptr<int32_t> nodeAmount_ {};
      shared_ptr<Result::NodeSpec> nodeSpec_ {};
      shared_ptr<string> paymentType_ {};
      shared_ptr<int32_t> port_ {};
      shared_ptr<string> postpaidServiceStatus_ {};
      shared_ptr<vector<string>> privateNetworkIpWhiteList_ {};
      shared_ptr<string> protocol_ {};
      shared_ptr<string> publicDomain_ {};
      shared_ptr<vector<string>> publicIpWhitelist_ {};
      shared_ptr<int32_t> publicPort_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<bool> serviceVpc_ {};
      shared_ptr<string> status_ {};
      shared_ptr<vector<Result::SynonymsDicts>> synonymsDicts_ {};
      shared_ptr<vector<Result::Tags>> tags_ {};
      shared_ptr<string> updatedAt_ {};
      shared_ptr<string> vpcInstanceId_ {};
      shared_ptr<bool> warmNode_ {};
      shared_ptr<Result::WarmNodeConfiguration> warmNodeConfiguration_ {};
      shared_ptr<int32_t> zoneCount_ {};
      shared_ptr<vector<Result::ZoneInfos>> zoneInfos_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DescribeInstanceResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, DescribeInstanceResponseBody::Result) };
    inline DescribeInstanceResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, DescribeInstanceResponseBody::Result) };
    inline DescribeInstanceResponseBody& setResult(const DescribeInstanceResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeInstanceResponseBody& setResult(DescribeInstanceResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeInstanceResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
