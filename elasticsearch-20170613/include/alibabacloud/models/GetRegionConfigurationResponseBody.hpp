// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGIONCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREGIONCONFIGURATIONRESPONSEBODY_HPP_
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
  class GetRegionConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegionConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegionConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetRegionConfigurationResponseBody() = default ;
    GetRegionConfigurationResponseBody(const GetRegionConfigurationResponseBody &) = default ;
    GetRegionConfigurationResponseBody(GetRegionConfigurationResponseBody &&) = default ;
    GetRegionConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegionConfigurationResponseBody() = default ;
    GetRegionConfigurationResponseBody& operator=(const GetRegionConfigurationResponseBody &) = default ;
    GetRegionConfigurationResponseBody& operator=(GetRegionConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(clientNodeAmountRange, clientNodeAmountRange_);
        DARABONBA_PTR_TO_JSON(clientNodeDiskList, clientNodeDiskList_);
        DARABONBA_PTR_TO_JSON(clientNodeSpec, clientNodeSpec_);
        DARABONBA_PTR_TO_JSON(createUrl, createUrl_);
        DARABONBA_PTR_TO_JSON(dataDiskList, dataDiskList_);
        DARABONBA_PTR_TO_JSON(elasticNodeProperties, elasticNodeProperties_);
        DARABONBA_PTR_TO_JSON(env, env_);
        DARABONBA_PTR_TO_JSON(esVersions, esVersions_);
        DARABONBA_PTR_TO_JSON(esVersionsLatestList, esVersionsLatestList_);
        DARABONBA_PTR_TO_JSON(instanceSupportNodes, instanceSupportNodes_);
        DARABONBA_PTR_TO_JSON(jvmConfine, jvmConfine_);
        DARABONBA_PTR_TO_JSON(kibanaNodeProperties, kibanaNodeProperties_);
        DARABONBA_PTR_TO_JSON(logstashZones, logstashZones_);
        DARABONBA_PTR_TO_JSON(masterDiskList, masterDiskList_);
        DARABONBA_PTR_TO_JSON(masterSpec, masterSpec_);
        DARABONBA_PTR_TO_JSON(node, node_);
        DARABONBA_PTR_TO_JSON(nodeSpecList, nodeSpecList_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(supportVersions, supportVersions_);
        DARABONBA_PTR_TO_JSON(warmNodeProperties, warmNodeProperties_);
        DARABONBA_PTR_TO_JSON(zones, zones_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(clientNodeAmountRange, clientNodeAmountRange_);
        DARABONBA_PTR_FROM_JSON(clientNodeDiskList, clientNodeDiskList_);
        DARABONBA_PTR_FROM_JSON(clientNodeSpec, clientNodeSpec_);
        DARABONBA_PTR_FROM_JSON(createUrl, createUrl_);
        DARABONBA_PTR_FROM_JSON(dataDiskList, dataDiskList_);
        DARABONBA_PTR_FROM_JSON(elasticNodeProperties, elasticNodeProperties_);
        DARABONBA_PTR_FROM_JSON(env, env_);
        DARABONBA_PTR_FROM_JSON(esVersions, esVersions_);
        DARABONBA_PTR_FROM_JSON(esVersionsLatestList, esVersionsLatestList_);
        DARABONBA_PTR_FROM_JSON(instanceSupportNodes, instanceSupportNodes_);
        DARABONBA_PTR_FROM_JSON(jvmConfine, jvmConfine_);
        DARABONBA_PTR_FROM_JSON(kibanaNodeProperties, kibanaNodeProperties_);
        DARABONBA_PTR_FROM_JSON(logstashZones, logstashZones_);
        DARABONBA_PTR_FROM_JSON(masterDiskList, masterDiskList_);
        DARABONBA_PTR_FROM_JSON(masterSpec, masterSpec_);
        DARABONBA_PTR_FROM_JSON(node, node_);
        DARABONBA_PTR_FROM_JSON(nodeSpecList, nodeSpecList_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(supportVersions, supportVersions_);
        DARABONBA_PTR_FROM_JSON(warmNodeProperties, warmNodeProperties_);
        DARABONBA_PTR_FROM_JSON(zones, zones_);
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
      class WarmNodeProperties : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WarmNodeProperties& obj) { 
          DARABONBA_PTR_TO_JSON(amountRange, amountRange_);
          DARABONBA_PTR_TO_JSON(diskList, diskList_);
          DARABONBA_PTR_TO_JSON(spec, spec_);
        };
        friend void from_json(const Darabonba::Json& j, WarmNodeProperties& obj) { 
          DARABONBA_PTR_FROM_JSON(amountRange, amountRange_);
          DARABONBA_PTR_FROM_JSON(diskList, diskList_);
          DARABONBA_PTR_FROM_JSON(spec, spec_);
        };
        WarmNodeProperties() = default ;
        WarmNodeProperties(const WarmNodeProperties &) = default ;
        WarmNodeProperties(WarmNodeProperties &&) = default ;
        WarmNodeProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WarmNodeProperties() = default ;
        WarmNodeProperties& operator=(const WarmNodeProperties &) = default ;
        WarmNodeProperties& operator=(WarmNodeProperties &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DiskList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DiskList& obj) { 
            DARABONBA_PTR_TO_JSON(diskEncryption, diskEncryption_);
            DARABONBA_PTR_TO_JSON(diskType, diskType_);
            DARABONBA_PTR_TO_JSON(maxSize, maxSize_);
            DARABONBA_PTR_TO_JSON(minSize, minSize_);
            DARABONBA_PTR_TO_JSON(scaleLimit, scaleLimit_);
            DARABONBA_PTR_TO_JSON(valueLimitSet, valueLimitSet_);
          };
          friend void from_json(const Darabonba::Json& j, DiskList& obj) { 
            DARABONBA_PTR_FROM_JSON(diskEncryption, diskEncryption_);
            DARABONBA_PTR_FROM_JSON(diskType, diskType_);
            DARABONBA_PTR_FROM_JSON(maxSize, maxSize_);
            DARABONBA_PTR_FROM_JSON(minSize, minSize_);
            DARABONBA_PTR_FROM_JSON(scaleLimit, scaleLimit_);
            DARABONBA_PTR_FROM_JSON(valueLimitSet, valueLimitSet_);
          };
          DiskList() = default ;
          DiskList(const DiskList &) = default ;
          DiskList(DiskList &&) = default ;
          DiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DiskList() = default ;
          DiskList& operator=(const DiskList &) = default ;
          DiskList& operator=(DiskList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->diskEncryption_ == nullptr
        && this->diskType_ == nullptr && this->maxSize_ == nullptr && this->minSize_ == nullptr && this->scaleLimit_ == nullptr && this->valueLimitSet_ == nullptr; };
          // diskEncryption Field Functions 
          bool hasDiskEncryption() const { return this->diskEncryption_ != nullptr;};
          void deleteDiskEncryption() { this->diskEncryption_ = nullptr;};
          inline bool getDiskEncryption() const { DARABONBA_PTR_GET_DEFAULT(diskEncryption_, false) };
          inline DiskList& setDiskEncryption(bool diskEncryption) { DARABONBA_PTR_SET_VALUE(diskEncryption_, diskEncryption) };


          // diskType Field Functions 
          bool hasDiskType() const { return this->diskType_ != nullptr;};
          void deleteDiskType() { this->diskType_ = nullptr;};
          inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
          inline DiskList& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


          // maxSize Field Functions 
          bool hasMaxSize() const { return this->maxSize_ != nullptr;};
          void deleteMaxSize() { this->maxSize_ = nullptr;};
          inline int32_t getMaxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
          inline DiskList& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


          // minSize Field Functions 
          bool hasMinSize() const { return this->minSize_ != nullptr;};
          void deleteMinSize() { this->minSize_ = nullptr;};
          inline int32_t getMinSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
          inline DiskList& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


          // scaleLimit Field Functions 
          bool hasScaleLimit() const { return this->scaleLimit_ != nullptr;};
          void deleteScaleLimit() { this->scaleLimit_ = nullptr;};
          inline int32_t getScaleLimit() const { DARABONBA_PTR_GET_DEFAULT(scaleLimit_, 0) };
          inline DiskList& setScaleLimit(int32_t scaleLimit) { DARABONBA_PTR_SET_VALUE(scaleLimit_, scaleLimit) };


          // valueLimitSet Field Functions 
          bool hasValueLimitSet() const { return this->valueLimitSet_ != nullptr;};
          void deleteValueLimitSet() { this->valueLimitSet_ = nullptr;};
          inline const vector<string> & getValueLimitSet() const { DARABONBA_PTR_GET_CONST(valueLimitSet_, vector<string>) };
          inline vector<string> getValueLimitSet() { DARABONBA_PTR_GET(valueLimitSet_, vector<string>) };
          inline DiskList& setValueLimitSet(const vector<string> & valueLimitSet) { DARABONBA_PTR_SET_VALUE(valueLimitSet_, valueLimitSet) };
          inline DiskList& setValueLimitSet(vector<string> && valueLimitSet) { DARABONBA_PTR_SET_RVALUE(valueLimitSet_, valueLimitSet) };


        protected:
          shared_ptr<bool> diskEncryption_ {};
          shared_ptr<string> diskType_ {};
          shared_ptr<int32_t> maxSize_ {};
          shared_ptr<int32_t> minSize_ {};
          shared_ptr<int32_t> scaleLimit_ {};
          shared_ptr<vector<string>> valueLimitSet_ {};
        };

        class AmountRange : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AmountRange& obj) { 
            DARABONBA_PTR_TO_JSON(maxAmount, maxAmount_);
            DARABONBA_PTR_TO_JSON(minAmount, minAmount_);
          };
          friend void from_json(const Darabonba::Json& j, AmountRange& obj) { 
            DARABONBA_PTR_FROM_JSON(maxAmount, maxAmount_);
            DARABONBA_PTR_FROM_JSON(minAmount, minAmount_);
          };
          AmountRange() = default ;
          AmountRange(const AmountRange &) = default ;
          AmountRange(AmountRange &&) = default ;
          AmountRange(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AmountRange() = default ;
          AmountRange& operator=(const AmountRange &) = default ;
          AmountRange& operator=(AmountRange &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->maxAmount_ == nullptr
        && this->minAmount_ == nullptr; };
          // maxAmount Field Functions 
          bool hasMaxAmount() const { return this->maxAmount_ != nullptr;};
          void deleteMaxAmount() { this->maxAmount_ = nullptr;};
          inline int32_t getMaxAmount() const { DARABONBA_PTR_GET_DEFAULT(maxAmount_, 0) };
          inline AmountRange& setMaxAmount(int32_t maxAmount) { DARABONBA_PTR_SET_VALUE(maxAmount_, maxAmount) };


          // minAmount Field Functions 
          bool hasMinAmount() const { return this->minAmount_ != nullptr;};
          void deleteMinAmount() { this->minAmount_ = nullptr;};
          inline int32_t getMinAmount() const { DARABONBA_PTR_GET_DEFAULT(minAmount_, 0) };
          inline AmountRange& setMinAmount(int32_t minAmount) { DARABONBA_PTR_SET_VALUE(minAmount_, minAmount) };


        protected:
          shared_ptr<int32_t> maxAmount_ {};
          shared_ptr<int32_t> minAmount_ {};
        };

        virtual bool empty() const override { return this->amountRange_ == nullptr
        && this->diskList_ == nullptr && this->spec_ == nullptr; };
        // amountRange Field Functions 
        bool hasAmountRange() const { return this->amountRange_ != nullptr;};
        void deleteAmountRange() { this->amountRange_ = nullptr;};
        inline const WarmNodeProperties::AmountRange & getAmountRange() const { DARABONBA_PTR_GET_CONST(amountRange_, WarmNodeProperties::AmountRange) };
        inline WarmNodeProperties::AmountRange getAmountRange() { DARABONBA_PTR_GET(amountRange_, WarmNodeProperties::AmountRange) };
        inline WarmNodeProperties& setAmountRange(const WarmNodeProperties::AmountRange & amountRange) { DARABONBA_PTR_SET_VALUE(amountRange_, amountRange) };
        inline WarmNodeProperties& setAmountRange(WarmNodeProperties::AmountRange && amountRange) { DARABONBA_PTR_SET_RVALUE(amountRange_, amountRange) };


        // diskList Field Functions 
        bool hasDiskList() const { return this->diskList_ != nullptr;};
        void deleteDiskList() { this->diskList_ = nullptr;};
        inline const vector<WarmNodeProperties::DiskList> & getDiskList() const { DARABONBA_PTR_GET_CONST(diskList_, vector<WarmNodeProperties::DiskList>) };
        inline vector<WarmNodeProperties::DiskList> getDiskList() { DARABONBA_PTR_GET(diskList_, vector<WarmNodeProperties::DiskList>) };
        inline WarmNodeProperties& setDiskList(const vector<WarmNodeProperties::DiskList> & diskList) { DARABONBA_PTR_SET_VALUE(diskList_, diskList) };
        inline WarmNodeProperties& setDiskList(vector<WarmNodeProperties::DiskList> && diskList) { DARABONBA_PTR_SET_RVALUE(diskList_, diskList) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline const vector<string> & getSpec() const { DARABONBA_PTR_GET_CONST(spec_, vector<string>) };
        inline vector<string> getSpec() { DARABONBA_PTR_GET(spec_, vector<string>) };
        inline WarmNodeProperties& setSpec(const vector<string> & spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };
        inline WarmNodeProperties& setSpec(vector<string> && spec) { DARABONBA_PTR_SET_RVALUE(spec_, spec) };


      protected:
        shared_ptr<WarmNodeProperties::AmountRange> amountRange_ {};
        shared_ptr<vector<WarmNodeProperties::DiskList>> diskList_ {};
        shared_ptr<vector<string>> spec_ {};
      };

      class SupportVersions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SupportVersions& obj) { 
          DARABONBA_PTR_TO_JSON(instanceCategory, instanceCategory_);
          DARABONBA_PTR_TO_JSON(supportVersionList, supportVersionList_);
        };
        friend void from_json(const Darabonba::Json& j, SupportVersions& obj) { 
          DARABONBA_PTR_FROM_JSON(instanceCategory, instanceCategory_);
          DARABONBA_PTR_FROM_JSON(supportVersionList, supportVersionList_);
        };
        SupportVersions() = default ;
        SupportVersions(const SupportVersions &) = default ;
        SupportVersions(SupportVersions &&) = default ;
        SupportVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SupportVersions() = default ;
        SupportVersions& operator=(const SupportVersions &) = default ;
        SupportVersions& operator=(SupportVersions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SupportVersionList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SupportVersionList& obj) { 
            DARABONBA_PTR_TO_JSON(key, key_);
            DARABONBA_PTR_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, SupportVersionList& obj) { 
            DARABONBA_PTR_FROM_JSON(key, key_);
            DARABONBA_PTR_FROM_JSON(value, value_);
          };
          SupportVersionList() = default ;
          SupportVersionList(const SupportVersionList &) = default ;
          SupportVersionList(SupportVersionList &&) = default ;
          SupportVersionList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SupportVersionList() = default ;
          SupportVersionList& operator=(const SupportVersionList &) = default ;
          SupportVersionList& operator=(SupportVersionList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline SupportVersionList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline SupportVersionList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> key_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->instanceCategory_ == nullptr
        && this->supportVersionList_ == nullptr; };
        // instanceCategory Field Functions 
        bool hasInstanceCategory() const { return this->instanceCategory_ != nullptr;};
        void deleteInstanceCategory() { this->instanceCategory_ = nullptr;};
        inline string getInstanceCategory() const { DARABONBA_PTR_GET_DEFAULT(instanceCategory_, "") };
        inline SupportVersions& setInstanceCategory(string instanceCategory) { DARABONBA_PTR_SET_VALUE(instanceCategory_, instanceCategory) };


        // supportVersionList Field Functions 
        bool hasSupportVersionList() const { return this->supportVersionList_ != nullptr;};
        void deleteSupportVersionList() { this->supportVersionList_ = nullptr;};
        inline const vector<SupportVersions::SupportVersionList> & getSupportVersionList() const { DARABONBA_PTR_GET_CONST(supportVersionList_, vector<SupportVersions::SupportVersionList>) };
        inline vector<SupportVersions::SupportVersionList> getSupportVersionList() { DARABONBA_PTR_GET(supportVersionList_, vector<SupportVersions::SupportVersionList>) };
        inline SupportVersions& setSupportVersionList(const vector<SupportVersions::SupportVersionList> & supportVersionList) { DARABONBA_PTR_SET_VALUE(supportVersionList_, supportVersionList) };
        inline SupportVersions& setSupportVersionList(vector<SupportVersions::SupportVersionList> && supportVersionList) { DARABONBA_PTR_SET_RVALUE(supportVersionList_, supportVersionList) };


      protected:
        shared_ptr<string> instanceCategory_ {};
        shared_ptr<vector<SupportVersions::SupportVersionList>> supportVersionList_ {};
      };

      class NodeSpecList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeSpecList& obj) { 
          DARABONBA_PTR_TO_JSON(cpuCount, cpuCount_);
          DARABONBA_PTR_TO_JSON(disk, disk_);
          DARABONBA_PTR_TO_JSON(diskType, diskType_);
          DARABONBA_PTR_TO_JSON(enable, enable_);
          DARABONBA_PTR_TO_JSON(memorySize, memorySize_);
          DARABONBA_PTR_TO_JSON(spec, spec_);
          DARABONBA_PTR_TO_JSON(specGroupType, specGroupType_);
        };
        friend void from_json(const Darabonba::Json& j, NodeSpecList& obj) { 
          DARABONBA_PTR_FROM_JSON(cpuCount, cpuCount_);
          DARABONBA_PTR_FROM_JSON(disk, disk_);
          DARABONBA_PTR_FROM_JSON(diskType, diskType_);
          DARABONBA_PTR_FROM_JSON(enable, enable_);
          DARABONBA_PTR_FROM_JSON(memorySize, memorySize_);
          DARABONBA_PTR_FROM_JSON(spec, spec_);
          DARABONBA_PTR_FROM_JSON(specGroupType, specGroupType_);
        };
        NodeSpecList() = default ;
        NodeSpecList(const NodeSpecList &) = default ;
        NodeSpecList(NodeSpecList &&) = default ;
        NodeSpecList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeSpecList() = default ;
        NodeSpecList& operator=(const NodeSpecList &) = default ;
        NodeSpecList& operator=(NodeSpecList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpuCount_ == nullptr
        && this->disk_ == nullptr && this->diskType_ == nullptr && this->enable_ == nullptr && this->memorySize_ == nullptr && this->spec_ == nullptr
        && this->specGroupType_ == nullptr; };
        // cpuCount Field Functions 
        bool hasCpuCount() const { return this->cpuCount_ != nullptr;};
        void deleteCpuCount() { this->cpuCount_ = nullptr;};
        inline int32_t getCpuCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCount_, 0) };
        inline NodeSpecList& setCpuCount(int32_t cpuCount) { DARABONBA_PTR_SET_VALUE(cpuCount_, cpuCount) };


        // disk Field Functions 
        bool hasDisk() const { return this->disk_ != nullptr;};
        void deleteDisk() { this->disk_ = nullptr;};
        inline int32_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
        inline NodeSpecList& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline NodeSpecList& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline NodeSpecList& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // memorySize Field Functions 
        bool hasMemorySize() const { return this->memorySize_ != nullptr;};
        void deleteMemorySize() { this->memorySize_ = nullptr;};
        inline int32_t getMemorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0) };
        inline NodeSpecList& setMemorySize(int32_t memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline NodeSpecList& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // specGroupType Field Functions 
        bool hasSpecGroupType() const { return this->specGroupType_ != nullptr;};
        void deleteSpecGroupType() { this->specGroupType_ = nullptr;};
        inline string getSpecGroupType() const { DARABONBA_PTR_GET_DEFAULT(specGroupType_, "") };
        inline NodeSpecList& setSpecGroupType(string specGroupType) { DARABONBA_PTR_SET_VALUE(specGroupType_, specGroupType) };


      protected:
        shared_ptr<int32_t> cpuCount_ {};
        shared_ptr<int32_t> disk_ {};
        shared_ptr<string> diskType_ {};
        shared_ptr<bool> enable_ {};
        shared_ptr<int32_t> memorySize_ {};
        shared_ptr<string> spec_ {};
        shared_ptr<string> specGroupType_ {};
      };

      class Node : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Node& obj) { 
          DARABONBA_PTR_TO_JSON(maxAmount, maxAmount_);
          DARABONBA_PTR_TO_JSON(minAmount, minAmount_);
        };
        friend void from_json(const Darabonba::Json& j, Node& obj) { 
          DARABONBA_PTR_FROM_JSON(maxAmount, maxAmount_);
          DARABONBA_PTR_FROM_JSON(minAmount, minAmount_);
        };
        Node() = default ;
        Node(const Node &) = default ;
        Node(Node &&) = default ;
        Node(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Node() = default ;
        Node& operator=(const Node &) = default ;
        Node& operator=(Node &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->maxAmount_ == nullptr
        && this->minAmount_ == nullptr; };
        // maxAmount Field Functions 
        bool hasMaxAmount() const { return this->maxAmount_ != nullptr;};
        void deleteMaxAmount() { this->maxAmount_ = nullptr;};
        inline int32_t getMaxAmount() const { DARABONBA_PTR_GET_DEFAULT(maxAmount_, 0) };
        inline Node& setMaxAmount(int32_t maxAmount) { DARABONBA_PTR_SET_VALUE(maxAmount_, maxAmount) };


        // minAmount Field Functions 
        bool hasMinAmount() const { return this->minAmount_ != nullptr;};
        void deleteMinAmount() { this->minAmount_ = nullptr;};
        inline int32_t getMinAmount() const { DARABONBA_PTR_GET_DEFAULT(minAmount_, 0) };
        inline Node& setMinAmount(int32_t minAmount) { DARABONBA_PTR_SET_VALUE(minAmount_, minAmount) };


      protected:
        shared_ptr<int32_t> maxAmount_ {};
        shared_ptr<int32_t> minAmount_ {};
      };

      class MasterDiskList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MasterDiskList& obj) { 
          DARABONBA_PTR_TO_JSON(diskType, diskType_);
          DARABONBA_PTR_TO_JSON(maxSize, maxSize_);
          DARABONBA_PTR_TO_JSON(minSize, minSize_);
          DARABONBA_PTR_TO_JSON(scaleLimit, scaleLimit_);
        };
        friend void from_json(const Darabonba::Json& j, MasterDiskList& obj) { 
          DARABONBA_PTR_FROM_JSON(diskType, diskType_);
          DARABONBA_PTR_FROM_JSON(maxSize, maxSize_);
          DARABONBA_PTR_FROM_JSON(minSize, minSize_);
          DARABONBA_PTR_FROM_JSON(scaleLimit, scaleLimit_);
        };
        MasterDiskList() = default ;
        MasterDiskList(const MasterDiskList &) = default ;
        MasterDiskList(MasterDiskList &&) = default ;
        MasterDiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MasterDiskList() = default ;
        MasterDiskList& operator=(const MasterDiskList &) = default ;
        MasterDiskList& operator=(MasterDiskList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->diskType_ == nullptr
        && this->maxSize_ == nullptr && this->minSize_ == nullptr && this->scaleLimit_ == nullptr; };
        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline MasterDiskList& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // maxSize Field Functions 
        bool hasMaxSize() const { return this->maxSize_ != nullptr;};
        void deleteMaxSize() { this->maxSize_ = nullptr;};
        inline int32_t getMaxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
        inline MasterDiskList& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


        // minSize Field Functions 
        bool hasMinSize() const { return this->minSize_ != nullptr;};
        void deleteMinSize() { this->minSize_ = nullptr;};
        inline int32_t getMinSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
        inline MasterDiskList& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


        // scaleLimit Field Functions 
        bool hasScaleLimit() const { return this->scaleLimit_ != nullptr;};
        void deleteScaleLimit() { this->scaleLimit_ = nullptr;};
        inline int32_t getScaleLimit() const { DARABONBA_PTR_GET_DEFAULT(scaleLimit_, 0) };
        inline MasterDiskList& setScaleLimit(int32_t scaleLimit) { DARABONBA_PTR_SET_VALUE(scaleLimit_, scaleLimit) };


      protected:
        shared_ptr<string> diskType_ {};
        shared_ptr<int32_t> maxSize_ {};
        shared_ptr<int32_t> minSize_ {};
        shared_ptr<int32_t> scaleLimit_ {};
      };

      class KibanaNodeProperties : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KibanaNodeProperties& obj) { 
          DARABONBA_PTR_TO_JSON(amountRange, amountRange_);
          DARABONBA_PTR_TO_JSON(spec, spec_);
        };
        friend void from_json(const Darabonba::Json& j, KibanaNodeProperties& obj) { 
          DARABONBA_PTR_FROM_JSON(amountRange, amountRange_);
          DARABONBA_PTR_FROM_JSON(spec, spec_);
        };
        KibanaNodeProperties() = default ;
        KibanaNodeProperties(const KibanaNodeProperties &) = default ;
        KibanaNodeProperties(KibanaNodeProperties &&) = default ;
        KibanaNodeProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KibanaNodeProperties() = default ;
        KibanaNodeProperties& operator=(const KibanaNodeProperties &) = default ;
        KibanaNodeProperties& operator=(KibanaNodeProperties &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AmountRange : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AmountRange& obj) { 
            DARABONBA_PTR_TO_JSON(maxAmount, maxAmount_);
            DARABONBA_PTR_TO_JSON(minAmount, minAmount_);
          };
          friend void from_json(const Darabonba::Json& j, AmountRange& obj) { 
            DARABONBA_PTR_FROM_JSON(maxAmount, maxAmount_);
            DARABONBA_PTR_FROM_JSON(minAmount, minAmount_);
          };
          AmountRange() = default ;
          AmountRange(const AmountRange &) = default ;
          AmountRange(AmountRange &&) = default ;
          AmountRange(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AmountRange() = default ;
          AmountRange& operator=(const AmountRange &) = default ;
          AmountRange& operator=(AmountRange &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->maxAmount_ == nullptr
        && this->minAmount_ == nullptr; };
          // maxAmount Field Functions 
          bool hasMaxAmount() const { return this->maxAmount_ != nullptr;};
          void deleteMaxAmount() { this->maxAmount_ = nullptr;};
          inline int32_t getMaxAmount() const { DARABONBA_PTR_GET_DEFAULT(maxAmount_, 0) };
          inline AmountRange& setMaxAmount(int32_t maxAmount) { DARABONBA_PTR_SET_VALUE(maxAmount_, maxAmount) };


          // minAmount Field Functions 
          bool hasMinAmount() const { return this->minAmount_ != nullptr;};
          void deleteMinAmount() { this->minAmount_ = nullptr;};
          inline int32_t getMinAmount() const { DARABONBA_PTR_GET_DEFAULT(minAmount_, 0) };
          inline AmountRange& setMinAmount(int32_t minAmount) { DARABONBA_PTR_SET_VALUE(minAmount_, minAmount) };


        protected:
          shared_ptr<int32_t> maxAmount_ {};
          shared_ptr<int32_t> minAmount_ {};
        };

        virtual bool empty() const override { return this->amountRange_ == nullptr
        && this->spec_ == nullptr; };
        // amountRange Field Functions 
        bool hasAmountRange() const { return this->amountRange_ != nullptr;};
        void deleteAmountRange() { this->amountRange_ = nullptr;};
        inline const KibanaNodeProperties::AmountRange & getAmountRange() const { DARABONBA_PTR_GET_CONST(amountRange_, KibanaNodeProperties::AmountRange) };
        inline KibanaNodeProperties::AmountRange getAmountRange() { DARABONBA_PTR_GET(amountRange_, KibanaNodeProperties::AmountRange) };
        inline KibanaNodeProperties& setAmountRange(const KibanaNodeProperties::AmountRange & amountRange) { DARABONBA_PTR_SET_VALUE(amountRange_, amountRange) };
        inline KibanaNodeProperties& setAmountRange(KibanaNodeProperties::AmountRange && amountRange) { DARABONBA_PTR_SET_RVALUE(amountRange_, amountRange) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline const vector<string> & getSpec() const { DARABONBA_PTR_GET_CONST(spec_, vector<string>) };
        inline vector<string> getSpec() { DARABONBA_PTR_GET(spec_, vector<string>) };
        inline KibanaNodeProperties& setSpec(const vector<string> & spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };
        inline KibanaNodeProperties& setSpec(vector<string> && spec) { DARABONBA_PTR_SET_RVALUE(spec_, spec) };


      protected:
        shared_ptr<KibanaNodeProperties::AmountRange> amountRange_ {};
        shared_ptr<vector<string>> spec_ {};
      };

      class JvmConfine : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JvmConfine& obj) { 
          DARABONBA_PTR_TO_JSON(memory, memory_);
          DARABONBA_PTR_TO_JSON(supportEsVersions, supportEsVersions_);
          DARABONBA_PTR_TO_JSON(supportGcs, supportGcs_);
        };
        friend void from_json(const Darabonba::Json& j, JvmConfine& obj) { 
          DARABONBA_PTR_FROM_JSON(memory, memory_);
          DARABONBA_PTR_FROM_JSON(supportEsVersions, supportEsVersions_);
          DARABONBA_PTR_FROM_JSON(supportGcs, supportGcs_);
        };
        JvmConfine() = default ;
        JvmConfine(const JvmConfine &) = default ;
        JvmConfine(JvmConfine &&) = default ;
        JvmConfine(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~JvmConfine() = default ;
        JvmConfine& operator=(const JvmConfine &) = default ;
        JvmConfine& operator=(JvmConfine &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->memory_ == nullptr
        && this->supportEsVersions_ == nullptr && this->supportGcs_ == nullptr; };
        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
        inline JvmConfine& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


        // supportEsVersions Field Functions 
        bool hasSupportEsVersions() const { return this->supportEsVersions_ != nullptr;};
        void deleteSupportEsVersions() { this->supportEsVersions_ = nullptr;};
        inline const vector<string> & getSupportEsVersions() const { DARABONBA_PTR_GET_CONST(supportEsVersions_, vector<string>) };
        inline vector<string> getSupportEsVersions() { DARABONBA_PTR_GET(supportEsVersions_, vector<string>) };
        inline JvmConfine& setSupportEsVersions(const vector<string> & supportEsVersions) { DARABONBA_PTR_SET_VALUE(supportEsVersions_, supportEsVersions) };
        inline JvmConfine& setSupportEsVersions(vector<string> && supportEsVersions) { DARABONBA_PTR_SET_RVALUE(supportEsVersions_, supportEsVersions) };


        // supportGcs Field Functions 
        bool hasSupportGcs() const { return this->supportGcs_ != nullptr;};
        void deleteSupportGcs() { this->supportGcs_ = nullptr;};
        inline const vector<string> & getSupportGcs() const { DARABONBA_PTR_GET_CONST(supportGcs_, vector<string>) };
        inline vector<string> getSupportGcs() { DARABONBA_PTR_GET(supportGcs_, vector<string>) };
        inline JvmConfine& setSupportGcs(const vector<string> & supportGcs) { DARABONBA_PTR_SET_VALUE(supportGcs_, supportGcs) };
        inline JvmConfine& setSupportGcs(vector<string> && supportGcs) { DARABONBA_PTR_SET_RVALUE(supportGcs_, supportGcs) };


      protected:
        shared_ptr<int32_t> memory_ {};
        shared_ptr<vector<string>> supportEsVersions_ {};
        shared_ptr<vector<string>> supportGcs_ {};
      };

      class EsVersionsLatestList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EsVersionsLatestList& obj) { 
          DARABONBA_PTR_TO_JSON(key, key_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, EsVersionsLatestList& obj) { 
          DARABONBA_PTR_FROM_JSON(key, key_);
          DARABONBA_PTR_FROM_JSON(value, value_);
        };
        EsVersionsLatestList() = default ;
        EsVersionsLatestList(const EsVersionsLatestList &) = default ;
        EsVersionsLatestList(EsVersionsLatestList &&) = default ;
        EsVersionsLatestList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EsVersionsLatestList() = default ;
        EsVersionsLatestList& operator=(const EsVersionsLatestList &) = default ;
        EsVersionsLatestList& operator=(EsVersionsLatestList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline EsVersionsLatestList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline EsVersionsLatestList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      class ElasticNodeProperties : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ElasticNodeProperties& obj) { 
          DARABONBA_PTR_TO_JSON(amountRange, amountRange_);
          DARABONBA_PTR_TO_JSON(diskList, diskList_);
          DARABONBA_PTR_TO_JSON(spec, spec_);
        };
        friend void from_json(const Darabonba::Json& j, ElasticNodeProperties& obj) { 
          DARABONBA_PTR_FROM_JSON(amountRange, amountRange_);
          DARABONBA_PTR_FROM_JSON(diskList, diskList_);
          DARABONBA_PTR_FROM_JSON(spec, spec_);
        };
        ElasticNodeProperties() = default ;
        ElasticNodeProperties(const ElasticNodeProperties &) = default ;
        ElasticNodeProperties(ElasticNodeProperties &&) = default ;
        ElasticNodeProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ElasticNodeProperties() = default ;
        ElasticNodeProperties& operator=(const ElasticNodeProperties &) = default ;
        ElasticNodeProperties& operator=(ElasticNodeProperties &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DiskList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DiskList& obj) { 
            DARABONBA_PTR_TO_JSON(diskEncryption, diskEncryption_);
            DARABONBA_PTR_TO_JSON(diskType, diskType_);
            DARABONBA_PTR_TO_JSON(maxSize, maxSize_);
            DARABONBA_PTR_TO_JSON(minSize, minSize_);
            DARABONBA_PTR_TO_JSON(scaleLimit, scaleLimit_);
            DARABONBA_PTR_TO_JSON(valueLimitSet, valueLimitSet_);
          };
          friend void from_json(const Darabonba::Json& j, DiskList& obj) { 
            DARABONBA_PTR_FROM_JSON(diskEncryption, diskEncryption_);
            DARABONBA_PTR_FROM_JSON(diskType, diskType_);
            DARABONBA_PTR_FROM_JSON(maxSize, maxSize_);
            DARABONBA_PTR_FROM_JSON(minSize, minSize_);
            DARABONBA_PTR_FROM_JSON(scaleLimit, scaleLimit_);
            DARABONBA_PTR_FROM_JSON(valueLimitSet, valueLimitSet_);
          };
          DiskList() = default ;
          DiskList(const DiskList &) = default ;
          DiskList(DiskList &&) = default ;
          DiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DiskList() = default ;
          DiskList& operator=(const DiskList &) = default ;
          DiskList& operator=(DiskList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->diskEncryption_ == nullptr
        && this->diskType_ == nullptr && this->maxSize_ == nullptr && this->minSize_ == nullptr && this->scaleLimit_ == nullptr && this->valueLimitSet_ == nullptr; };
          // diskEncryption Field Functions 
          bool hasDiskEncryption() const { return this->diskEncryption_ != nullptr;};
          void deleteDiskEncryption() { this->diskEncryption_ = nullptr;};
          inline bool getDiskEncryption() const { DARABONBA_PTR_GET_DEFAULT(diskEncryption_, false) };
          inline DiskList& setDiskEncryption(bool diskEncryption) { DARABONBA_PTR_SET_VALUE(diskEncryption_, diskEncryption) };


          // diskType Field Functions 
          bool hasDiskType() const { return this->diskType_ != nullptr;};
          void deleteDiskType() { this->diskType_ = nullptr;};
          inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
          inline DiskList& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


          // maxSize Field Functions 
          bool hasMaxSize() const { return this->maxSize_ != nullptr;};
          void deleteMaxSize() { this->maxSize_ = nullptr;};
          inline int32_t getMaxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
          inline DiskList& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


          // minSize Field Functions 
          bool hasMinSize() const { return this->minSize_ != nullptr;};
          void deleteMinSize() { this->minSize_ = nullptr;};
          inline int32_t getMinSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
          inline DiskList& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


          // scaleLimit Field Functions 
          bool hasScaleLimit() const { return this->scaleLimit_ != nullptr;};
          void deleteScaleLimit() { this->scaleLimit_ = nullptr;};
          inline int32_t getScaleLimit() const { DARABONBA_PTR_GET_DEFAULT(scaleLimit_, 0) };
          inline DiskList& setScaleLimit(int32_t scaleLimit) { DARABONBA_PTR_SET_VALUE(scaleLimit_, scaleLimit) };


          // valueLimitSet Field Functions 
          bool hasValueLimitSet() const { return this->valueLimitSet_ != nullptr;};
          void deleteValueLimitSet() { this->valueLimitSet_ = nullptr;};
          inline const vector<string> & getValueLimitSet() const { DARABONBA_PTR_GET_CONST(valueLimitSet_, vector<string>) };
          inline vector<string> getValueLimitSet() { DARABONBA_PTR_GET(valueLimitSet_, vector<string>) };
          inline DiskList& setValueLimitSet(const vector<string> & valueLimitSet) { DARABONBA_PTR_SET_VALUE(valueLimitSet_, valueLimitSet) };
          inline DiskList& setValueLimitSet(vector<string> && valueLimitSet) { DARABONBA_PTR_SET_RVALUE(valueLimitSet_, valueLimitSet) };


        protected:
          shared_ptr<bool> diskEncryption_ {};
          shared_ptr<string> diskType_ {};
          shared_ptr<int32_t> maxSize_ {};
          shared_ptr<int32_t> minSize_ {};
          shared_ptr<int32_t> scaleLimit_ {};
          shared_ptr<vector<string>> valueLimitSet_ {};
        };

        class AmountRange : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AmountRange& obj) { 
            DARABONBA_PTR_TO_JSON(maxAmount, maxAmount_);
            DARABONBA_PTR_TO_JSON(minAmount, minAmount_);
          };
          friend void from_json(const Darabonba::Json& j, AmountRange& obj) { 
            DARABONBA_PTR_FROM_JSON(maxAmount, maxAmount_);
            DARABONBA_PTR_FROM_JSON(minAmount, minAmount_);
          };
          AmountRange() = default ;
          AmountRange(const AmountRange &) = default ;
          AmountRange(AmountRange &&) = default ;
          AmountRange(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AmountRange() = default ;
          AmountRange& operator=(const AmountRange &) = default ;
          AmountRange& operator=(AmountRange &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->maxAmount_ == nullptr
        && this->minAmount_ == nullptr; };
          // maxAmount Field Functions 
          bool hasMaxAmount() const { return this->maxAmount_ != nullptr;};
          void deleteMaxAmount() { this->maxAmount_ = nullptr;};
          inline int32_t getMaxAmount() const { DARABONBA_PTR_GET_DEFAULT(maxAmount_, 0) };
          inline AmountRange& setMaxAmount(int32_t maxAmount) { DARABONBA_PTR_SET_VALUE(maxAmount_, maxAmount) };


          // minAmount Field Functions 
          bool hasMinAmount() const { return this->minAmount_ != nullptr;};
          void deleteMinAmount() { this->minAmount_ = nullptr;};
          inline int32_t getMinAmount() const { DARABONBA_PTR_GET_DEFAULT(minAmount_, 0) };
          inline AmountRange& setMinAmount(int32_t minAmount) { DARABONBA_PTR_SET_VALUE(minAmount_, minAmount) };


        protected:
          shared_ptr<int32_t> maxAmount_ {};
          shared_ptr<int32_t> minAmount_ {};
        };

        virtual bool empty() const override { return this->amountRange_ == nullptr
        && this->diskList_ == nullptr && this->spec_ == nullptr; };
        // amountRange Field Functions 
        bool hasAmountRange() const { return this->amountRange_ != nullptr;};
        void deleteAmountRange() { this->amountRange_ = nullptr;};
        inline const ElasticNodeProperties::AmountRange & getAmountRange() const { DARABONBA_PTR_GET_CONST(amountRange_, ElasticNodeProperties::AmountRange) };
        inline ElasticNodeProperties::AmountRange getAmountRange() { DARABONBA_PTR_GET(amountRange_, ElasticNodeProperties::AmountRange) };
        inline ElasticNodeProperties& setAmountRange(const ElasticNodeProperties::AmountRange & amountRange) { DARABONBA_PTR_SET_VALUE(amountRange_, amountRange) };
        inline ElasticNodeProperties& setAmountRange(ElasticNodeProperties::AmountRange && amountRange) { DARABONBA_PTR_SET_RVALUE(amountRange_, amountRange) };


        // diskList Field Functions 
        bool hasDiskList() const { return this->diskList_ != nullptr;};
        void deleteDiskList() { this->diskList_ = nullptr;};
        inline const vector<ElasticNodeProperties::DiskList> & getDiskList() const { DARABONBA_PTR_GET_CONST(diskList_, vector<ElasticNodeProperties::DiskList>) };
        inline vector<ElasticNodeProperties::DiskList> getDiskList() { DARABONBA_PTR_GET(diskList_, vector<ElasticNodeProperties::DiskList>) };
        inline ElasticNodeProperties& setDiskList(const vector<ElasticNodeProperties::DiskList> & diskList) { DARABONBA_PTR_SET_VALUE(diskList_, diskList) };
        inline ElasticNodeProperties& setDiskList(vector<ElasticNodeProperties::DiskList> && diskList) { DARABONBA_PTR_SET_RVALUE(diskList_, diskList) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline const vector<string> & getSpec() const { DARABONBA_PTR_GET_CONST(spec_, vector<string>) };
        inline vector<string> getSpec() { DARABONBA_PTR_GET(spec_, vector<string>) };
        inline ElasticNodeProperties& setSpec(const vector<string> & spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };
        inline ElasticNodeProperties& setSpec(vector<string> && spec) { DARABONBA_PTR_SET_RVALUE(spec_, spec) };


      protected:
        shared_ptr<ElasticNodeProperties::AmountRange> amountRange_ {};
        shared_ptr<vector<ElasticNodeProperties::DiskList>> diskList_ {};
        shared_ptr<vector<string>> spec_ {};
      };

      class DataDiskList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataDiskList& obj) { 
          DARABONBA_PTR_TO_JSON(diskType, diskType_);
          DARABONBA_PTR_TO_JSON(maxSize, maxSize_);
          DARABONBA_PTR_TO_JSON(minSize, minSize_);
          DARABONBA_PTR_TO_JSON(scaleLimit, scaleLimit_);
          DARABONBA_PTR_TO_JSON(valueLimitSet, valueLimitSet_);
        };
        friend void from_json(const Darabonba::Json& j, DataDiskList& obj) { 
          DARABONBA_PTR_FROM_JSON(diskType, diskType_);
          DARABONBA_PTR_FROM_JSON(maxSize, maxSize_);
          DARABONBA_PTR_FROM_JSON(minSize, minSize_);
          DARABONBA_PTR_FROM_JSON(scaleLimit, scaleLimit_);
          DARABONBA_PTR_FROM_JSON(valueLimitSet, valueLimitSet_);
        };
        DataDiskList() = default ;
        DataDiskList(const DataDiskList &) = default ;
        DataDiskList(DataDiskList &&) = default ;
        DataDiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataDiskList() = default ;
        DataDiskList& operator=(const DataDiskList &) = default ;
        DataDiskList& operator=(DataDiskList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->diskType_ == nullptr
        && this->maxSize_ == nullptr && this->minSize_ == nullptr && this->scaleLimit_ == nullptr && this->valueLimitSet_ == nullptr; };
        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline DataDiskList& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // maxSize Field Functions 
        bool hasMaxSize() const { return this->maxSize_ != nullptr;};
        void deleteMaxSize() { this->maxSize_ = nullptr;};
        inline int32_t getMaxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
        inline DataDiskList& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


        // minSize Field Functions 
        bool hasMinSize() const { return this->minSize_ != nullptr;};
        void deleteMinSize() { this->minSize_ = nullptr;};
        inline int32_t getMinSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
        inline DataDiskList& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


        // scaleLimit Field Functions 
        bool hasScaleLimit() const { return this->scaleLimit_ != nullptr;};
        void deleteScaleLimit() { this->scaleLimit_ = nullptr;};
        inline int32_t getScaleLimit() const { DARABONBA_PTR_GET_DEFAULT(scaleLimit_, 0) };
        inline DataDiskList& setScaleLimit(int32_t scaleLimit) { DARABONBA_PTR_SET_VALUE(scaleLimit_, scaleLimit) };


        // valueLimitSet Field Functions 
        bool hasValueLimitSet() const { return this->valueLimitSet_ != nullptr;};
        void deleteValueLimitSet() { this->valueLimitSet_ = nullptr;};
        inline const vector<string> & getValueLimitSet() const { DARABONBA_PTR_GET_CONST(valueLimitSet_, vector<string>) };
        inline vector<string> getValueLimitSet() { DARABONBA_PTR_GET(valueLimitSet_, vector<string>) };
        inline DataDiskList& setValueLimitSet(const vector<string> & valueLimitSet) { DARABONBA_PTR_SET_VALUE(valueLimitSet_, valueLimitSet) };
        inline DataDiskList& setValueLimitSet(vector<string> && valueLimitSet) { DARABONBA_PTR_SET_RVALUE(valueLimitSet_, valueLimitSet) };


      protected:
        shared_ptr<string> diskType_ {};
        shared_ptr<int32_t> maxSize_ {};
        shared_ptr<int32_t> minSize_ {};
        shared_ptr<int32_t> scaleLimit_ {};
        shared_ptr<vector<string>> valueLimitSet_ {};
      };

      class ClientNodeDiskList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClientNodeDiskList& obj) { 
          DARABONBA_PTR_TO_JSON(diskType, diskType_);
          DARABONBA_PTR_TO_JSON(maxSize, maxSize_);
          DARABONBA_PTR_TO_JSON(minSize, minSize_);
          DARABONBA_PTR_TO_JSON(scaleLimit, scaleLimit_);
        };
        friend void from_json(const Darabonba::Json& j, ClientNodeDiskList& obj) { 
          DARABONBA_PTR_FROM_JSON(diskType, diskType_);
          DARABONBA_PTR_FROM_JSON(maxSize, maxSize_);
          DARABONBA_PTR_FROM_JSON(minSize, minSize_);
          DARABONBA_PTR_FROM_JSON(scaleLimit, scaleLimit_);
        };
        ClientNodeDiskList() = default ;
        ClientNodeDiskList(const ClientNodeDiskList &) = default ;
        ClientNodeDiskList(ClientNodeDiskList &&) = default ;
        ClientNodeDiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClientNodeDiskList() = default ;
        ClientNodeDiskList& operator=(const ClientNodeDiskList &) = default ;
        ClientNodeDiskList& operator=(ClientNodeDiskList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->diskType_ == nullptr
        && this->maxSize_ == nullptr && this->minSize_ == nullptr && this->scaleLimit_ == nullptr; };
        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline ClientNodeDiskList& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // maxSize Field Functions 
        bool hasMaxSize() const { return this->maxSize_ != nullptr;};
        void deleteMaxSize() { this->maxSize_ = nullptr;};
        inline int32_t getMaxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0) };
        inline ClientNodeDiskList& setMaxSize(int32_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


        // minSize Field Functions 
        bool hasMinSize() const { return this->minSize_ != nullptr;};
        void deleteMinSize() { this->minSize_ = nullptr;};
        inline int32_t getMinSize() const { DARABONBA_PTR_GET_DEFAULT(minSize_, 0) };
        inline ClientNodeDiskList& setMinSize(int32_t minSize) { DARABONBA_PTR_SET_VALUE(minSize_, minSize) };


        // scaleLimit Field Functions 
        bool hasScaleLimit() const { return this->scaleLimit_ != nullptr;};
        void deleteScaleLimit() { this->scaleLimit_ = nullptr;};
        inline int32_t getScaleLimit() const { DARABONBA_PTR_GET_DEFAULT(scaleLimit_, 0) };
        inline ClientNodeDiskList& setScaleLimit(int32_t scaleLimit) { DARABONBA_PTR_SET_VALUE(scaleLimit_, scaleLimit) };


      protected:
        shared_ptr<string> diskType_ {};
        shared_ptr<int32_t> maxSize_ {};
        shared_ptr<int32_t> minSize_ {};
        shared_ptr<int32_t> scaleLimit_ {};
      };

      class ClientNodeAmountRange : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClientNodeAmountRange& obj) { 
          DARABONBA_PTR_TO_JSON(maxAmount, maxAmount_);
          DARABONBA_PTR_TO_JSON(minAmount, minAmount_);
        };
        friend void from_json(const Darabonba::Json& j, ClientNodeAmountRange& obj) { 
          DARABONBA_PTR_FROM_JSON(maxAmount, maxAmount_);
          DARABONBA_PTR_FROM_JSON(minAmount, minAmount_);
        };
        ClientNodeAmountRange() = default ;
        ClientNodeAmountRange(const ClientNodeAmountRange &) = default ;
        ClientNodeAmountRange(ClientNodeAmountRange &&) = default ;
        ClientNodeAmountRange(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClientNodeAmountRange() = default ;
        ClientNodeAmountRange& operator=(const ClientNodeAmountRange &) = default ;
        ClientNodeAmountRange& operator=(ClientNodeAmountRange &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->maxAmount_ == nullptr
        && this->minAmount_ == nullptr; };
        // maxAmount Field Functions 
        bool hasMaxAmount() const { return this->maxAmount_ != nullptr;};
        void deleteMaxAmount() { this->maxAmount_ = nullptr;};
        inline int32_t getMaxAmount() const { DARABONBA_PTR_GET_DEFAULT(maxAmount_, 0) };
        inline ClientNodeAmountRange& setMaxAmount(int32_t maxAmount) { DARABONBA_PTR_SET_VALUE(maxAmount_, maxAmount) };


        // minAmount Field Functions 
        bool hasMinAmount() const { return this->minAmount_ != nullptr;};
        void deleteMinAmount() { this->minAmount_ = nullptr;};
        inline int32_t getMinAmount() const { DARABONBA_PTR_GET_DEFAULT(minAmount_, 0) };
        inline ClientNodeAmountRange& setMinAmount(int32_t minAmount) { DARABONBA_PTR_SET_VALUE(minAmount_, minAmount) };


      protected:
        shared_ptr<int32_t> maxAmount_ {};
        shared_ptr<int32_t> minAmount_ {};
      };

      virtual bool empty() const override { return this->clientNodeAmountRange_ == nullptr
        && this->clientNodeDiskList_ == nullptr && this->clientNodeSpec_ == nullptr && this->createUrl_ == nullptr && this->dataDiskList_ == nullptr && this->elasticNodeProperties_ == nullptr
        && this->env_ == nullptr && this->esVersions_ == nullptr && this->esVersionsLatestList_ == nullptr && this->instanceSupportNodes_ == nullptr && this->jvmConfine_ == nullptr
        && this->kibanaNodeProperties_ == nullptr && this->logstashZones_ == nullptr && this->masterDiskList_ == nullptr && this->masterSpec_ == nullptr && this->node_ == nullptr
        && this->nodeSpecList_ == nullptr && this->regionId_ == nullptr && this->supportVersions_ == nullptr && this->warmNodeProperties_ == nullptr && this->zones_ == nullptr; };
      // clientNodeAmountRange Field Functions 
      bool hasClientNodeAmountRange() const { return this->clientNodeAmountRange_ != nullptr;};
      void deleteClientNodeAmountRange() { this->clientNodeAmountRange_ = nullptr;};
      inline const Result::ClientNodeAmountRange & getClientNodeAmountRange() const { DARABONBA_PTR_GET_CONST(clientNodeAmountRange_, Result::ClientNodeAmountRange) };
      inline Result::ClientNodeAmountRange getClientNodeAmountRange() { DARABONBA_PTR_GET(clientNodeAmountRange_, Result::ClientNodeAmountRange) };
      inline Result& setClientNodeAmountRange(const Result::ClientNodeAmountRange & clientNodeAmountRange) { DARABONBA_PTR_SET_VALUE(clientNodeAmountRange_, clientNodeAmountRange) };
      inline Result& setClientNodeAmountRange(Result::ClientNodeAmountRange && clientNodeAmountRange) { DARABONBA_PTR_SET_RVALUE(clientNodeAmountRange_, clientNodeAmountRange) };


      // clientNodeDiskList Field Functions 
      bool hasClientNodeDiskList() const { return this->clientNodeDiskList_ != nullptr;};
      void deleteClientNodeDiskList() { this->clientNodeDiskList_ = nullptr;};
      inline const vector<Result::ClientNodeDiskList> & getClientNodeDiskList() const { DARABONBA_PTR_GET_CONST(clientNodeDiskList_, vector<Result::ClientNodeDiskList>) };
      inline vector<Result::ClientNodeDiskList> getClientNodeDiskList() { DARABONBA_PTR_GET(clientNodeDiskList_, vector<Result::ClientNodeDiskList>) };
      inline Result& setClientNodeDiskList(const vector<Result::ClientNodeDiskList> & clientNodeDiskList) { DARABONBA_PTR_SET_VALUE(clientNodeDiskList_, clientNodeDiskList) };
      inline Result& setClientNodeDiskList(vector<Result::ClientNodeDiskList> && clientNodeDiskList) { DARABONBA_PTR_SET_RVALUE(clientNodeDiskList_, clientNodeDiskList) };


      // clientNodeSpec Field Functions 
      bool hasClientNodeSpec() const { return this->clientNodeSpec_ != nullptr;};
      void deleteClientNodeSpec() { this->clientNodeSpec_ = nullptr;};
      inline const vector<string> & getClientNodeSpec() const { DARABONBA_PTR_GET_CONST(clientNodeSpec_, vector<string>) };
      inline vector<string> getClientNodeSpec() { DARABONBA_PTR_GET(clientNodeSpec_, vector<string>) };
      inline Result& setClientNodeSpec(const vector<string> & clientNodeSpec) { DARABONBA_PTR_SET_VALUE(clientNodeSpec_, clientNodeSpec) };
      inline Result& setClientNodeSpec(vector<string> && clientNodeSpec) { DARABONBA_PTR_SET_RVALUE(clientNodeSpec_, clientNodeSpec) };


      // createUrl Field Functions 
      bool hasCreateUrl() const { return this->createUrl_ != nullptr;};
      void deleteCreateUrl() { this->createUrl_ = nullptr;};
      inline string getCreateUrl() const { DARABONBA_PTR_GET_DEFAULT(createUrl_, "") };
      inline Result& setCreateUrl(string createUrl) { DARABONBA_PTR_SET_VALUE(createUrl_, createUrl) };


      // dataDiskList Field Functions 
      bool hasDataDiskList() const { return this->dataDiskList_ != nullptr;};
      void deleteDataDiskList() { this->dataDiskList_ = nullptr;};
      inline const vector<Result::DataDiskList> & getDataDiskList() const { DARABONBA_PTR_GET_CONST(dataDiskList_, vector<Result::DataDiskList>) };
      inline vector<Result::DataDiskList> getDataDiskList() { DARABONBA_PTR_GET(dataDiskList_, vector<Result::DataDiskList>) };
      inline Result& setDataDiskList(const vector<Result::DataDiskList> & dataDiskList) { DARABONBA_PTR_SET_VALUE(dataDiskList_, dataDiskList) };
      inline Result& setDataDiskList(vector<Result::DataDiskList> && dataDiskList) { DARABONBA_PTR_SET_RVALUE(dataDiskList_, dataDiskList) };


      // elasticNodeProperties Field Functions 
      bool hasElasticNodeProperties() const { return this->elasticNodeProperties_ != nullptr;};
      void deleteElasticNodeProperties() { this->elasticNodeProperties_ = nullptr;};
      inline const Result::ElasticNodeProperties & getElasticNodeProperties() const { DARABONBA_PTR_GET_CONST(elasticNodeProperties_, Result::ElasticNodeProperties) };
      inline Result::ElasticNodeProperties getElasticNodeProperties() { DARABONBA_PTR_GET(elasticNodeProperties_, Result::ElasticNodeProperties) };
      inline Result& setElasticNodeProperties(const Result::ElasticNodeProperties & elasticNodeProperties) { DARABONBA_PTR_SET_VALUE(elasticNodeProperties_, elasticNodeProperties) };
      inline Result& setElasticNodeProperties(Result::ElasticNodeProperties && elasticNodeProperties) { DARABONBA_PTR_SET_RVALUE(elasticNodeProperties_, elasticNodeProperties) };


      // env Field Functions 
      bool hasEnv() const { return this->env_ != nullptr;};
      void deleteEnv() { this->env_ = nullptr;};
      inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
      inline Result& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


      // esVersions Field Functions 
      bool hasEsVersions() const { return this->esVersions_ != nullptr;};
      void deleteEsVersions() { this->esVersions_ = nullptr;};
      inline const vector<string> & getEsVersions() const { DARABONBA_PTR_GET_CONST(esVersions_, vector<string>) };
      inline vector<string> getEsVersions() { DARABONBA_PTR_GET(esVersions_, vector<string>) };
      inline Result& setEsVersions(const vector<string> & esVersions) { DARABONBA_PTR_SET_VALUE(esVersions_, esVersions) };
      inline Result& setEsVersions(vector<string> && esVersions) { DARABONBA_PTR_SET_RVALUE(esVersions_, esVersions) };


      // esVersionsLatestList Field Functions 
      bool hasEsVersionsLatestList() const { return this->esVersionsLatestList_ != nullptr;};
      void deleteEsVersionsLatestList() { this->esVersionsLatestList_ = nullptr;};
      inline const vector<Result::EsVersionsLatestList> & getEsVersionsLatestList() const { DARABONBA_PTR_GET_CONST(esVersionsLatestList_, vector<Result::EsVersionsLatestList>) };
      inline vector<Result::EsVersionsLatestList> getEsVersionsLatestList() { DARABONBA_PTR_GET(esVersionsLatestList_, vector<Result::EsVersionsLatestList>) };
      inline Result& setEsVersionsLatestList(const vector<Result::EsVersionsLatestList> & esVersionsLatestList) { DARABONBA_PTR_SET_VALUE(esVersionsLatestList_, esVersionsLatestList) };
      inline Result& setEsVersionsLatestList(vector<Result::EsVersionsLatestList> && esVersionsLatestList) { DARABONBA_PTR_SET_RVALUE(esVersionsLatestList_, esVersionsLatestList) };


      // instanceSupportNodes Field Functions 
      bool hasInstanceSupportNodes() const { return this->instanceSupportNodes_ != nullptr;};
      void deleteInstanceSupportNodes() { this->instanceSupportNodes_ = nullptr;};
      inline const vector<string> & getInstanceSupportNodes() const { DARABONBA_PTR_GET_CONST(instanceSupportNodes_, vector<string>) };
      inline vector<string> getInstanceSupportNodes() { DARABONBA_PTR_GET(instanceSupportNodes_, vector<string>) };
      inline Result& setInstanceSupportNodes(const vector<string> & instanceSupportNodes) { DARABONBA_PTR_SET_VALUE(instanceSupportNodes_, instanceSupportNodes) };
      inline Result& setInstanceSupportNodes(vector<string> && instanceSupportNodes) { DARABONBA_PTR_SET_RVALUE(instanceSupportNodes_, instanceSupportNodes) };


      // jvmConfine Field Functions 
      bool hasJvmConfine() const { return this->jvmConfine_ != nullptr;};
      void deleteJvmConfine() { this->jvmConfine_ = nullptr;};
      inline const Result::JvmConfine & getJvmConfine() const { DARABONBA_PTR_GET_CONST(jvmConfine_, Result::JvmConfine) };
      inline Result::JvmConfine getJvmConfine() { DARABONBA_PTR_GET(jvmConfine_, Result::JvmConfine) };
      inline Result& setJvmConfine(const Result::JvmConfine & jvmConfine) { DARABONBA_PTR_SET_VALUE(jvmConfine_, jvmConfine) };
      inline Result& setJvmConfine(Result::JvmConfine && jvmConfine) { DARABONBA_PTR_SET_RVALUE(jvmConfine_, jvmConfine) };


      // kibanaNodeProperties Field Functions 
      bool hasKibanaNodeProperties() const { return this->kibanaNodeProperties_ != nullptr;};
      void deleteKibanaNodeProperties() { this->kibanaNodeProperties_ = nullptr;};
      inline const Result::KibanaNodeProperties & getKibanaNodeProperties() const { DARABONBA_PTR_GET_CONST(kibanaNodeProperties_, Result::KibanaNodeProperties) };
      inline Result::KibanaNodeProperties getKibanaNodeProperties() { DARABONBA_PTR_GET(kibanaNodeProperties_, Result::KibanaNodeProperties) };
      inline Result& setKibanaNodeProperties(const Result::KibanaNodeProperties & kibanaNodeProperties) { DARABONBA_PTR_SET_VALUE(kibanaNodeProperties_, kibanaNodeProperties) };
      inline Result& setKibanaNodeProperties(Result::KibanaNodeProperties && kibanaNodeProperties) { DARABONBA_PTR_SET_RVALUE(kibanaNodeProperties_, kibanaNodeProperties) };


      // logstashZones Field Functions 
      bool hasLogstashZones() const { return this->logstashZones_ != nullptr;};
      void deleteLogstashZones() { this->logstashZones_ = nullptr;};
      inline const vector<string> & getLogstashZones() const { DARABONBA_PTR_GET_CONST(logstashZones_, vector<string>) };
      inline vector<string> getLogstashZones() { DARABONBA_PTR_GET(logstashZones_, vector<string>) };
      inline Result& setLogstashZones(const vector<string> & logstashZones) { DARABONBA_PTR_SET_VALUE(logstashZones_, logstashZones) };
      inline Result& setLogstashZones(vector<string> && logstashZones) { DARABONBA_PTR_SET_RVALUE(logstashZones_, logstashZones) };


      // masterDiskList Field Functions 
      bool hasMasterDiskList() const { return this->masterDiskList_ != nullptr;};
      void deleteMasterDiskList() { this->masterDiskList_ = nullptr;};
      inline const vector<Result::MasterDiskList> & getMasterDiskList() const { DARABONBA_PTR_GET_CONST(masterDiskList_, vector<Result::MasterDiskList>) };
      inline vector<Result::MasterDiskList> getMasterDiskList() { DARABONBA_PTR_GET(masterDiskList_, vector<Result::MasterDiskList>) };
      inline Result& setMasterDiskList(const vector<Result::MasterDiskList> & masterDiskList) { DARABONBA_PTR_SET_VALUE(masterDiskList_, masterDiskList) };
      inline Result& setMasterDiskList(vector<Result::MasterDiskList> && masterDiskList) { DARABONBA_PTR_SET_RVALUE(masterDiskList_, masterDiskList) };


      // masterSpec Field Functions 
      bool hasMasterSpec() const { return this->masterSpec_ != nullptr;};
      void deleteMasterSpec() { this->masterSpec_ = nullptr;};
      inline const vector<string> & getMasterSpec() const { DARABONBA_PTR_GET_CONST(masterSpec_, vector<string>) };
      inline vector<string> getMasterSpec() { DARABONBA_PTR_GET(masterSpec_, vector<string>) };
      inline Result& setMasterSpec(const vector<string> & masterSpec) { DARABONBA_PTR_SET_VALUE(masterSpec_, masterSpec) };
      inline Result& setMasterSpec(vector<string> && masterSpec) { DARABONBA_PTR_SET_RVALUE(masterSpec_, masterSpec) };


      // node Field Functions 
      bool hasNode() const { return this->node_ != nullptr;};
      void deleteNode() { this->node_ = nullptr;};
      inline const Result::Node & getNode() const { DARABONBA_PTR_GET_CONST(node_, Result::Node) };
      inline Result::Node getNode() { DARABONBA_PTR_GET(node_, Result::Node) };
      inline Result& setNode(const Result::Node & node) { DARABONBA_PTR_SET_VALUE(node_, node) };
      inline Result& setNode(Result::Node && node) { DARABONBA_PTR_SET_RVALUE(node_, node) };


      // nodeSpecList Field Functions 
      bool hasNodeSpecList() const { return this->nodeSpecList_ != nullptr;};
      void deleteNodeSpecList() { this->nodeSpecList_ = nullptr;};
      inline const vector<Result::NodeSpecList> & getNodeSpecList() const { DARABONBA_PTR_GET_CONST(nodeSpecList_, vector<Result::NodeSpecList>) };
      inline vector<Result::NodeSpecList> getNodeSpecList() { DARABONBA_PTR_GET(nodeSpecList_, vector<Result::NodeSpecList>) };
      inline Result& setNodeSpecList(const vector<Result::NodeSpecList> & nodeSpecList) { DARABONBA_PTR_SET_VALUE(nodeSpecList_, nodeSpecList) };
      inline Result& setNodeSpecList(vector<Result::NodeSpecList> && nodeSpecList) { DARABONBA_PTR_SET_RVALUE(nodeSpecList_, nodeSpecList) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Result& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // supportVersions Field Functions 
      bool hasSupportVersions() const { return this->supportVersions_ != nullptr;};
      void deleteSupportVersions() { this->supportVersions_ = nullptr;};
      inline const vector<Result::SupportVersions> & getSupportVersions() const { DARABONBA_PTR_GET_CONST(supportVersions_, vector<Result::SupportVersions>) };
      inline vector<Result::SupportVersions> getSupportVersions() { DARABONBA_PTR_GET(supportVersions_, vector<Result::SupportVersions>) };
      inline Result& setSupportVersions(const vector<Result::SupportVersions> & supportVersions) { DARABONBA_PTR_SET_VALUE(supportVersions_, supportVersions) };
      inline Result& setSupportVersions(vector<Result::SupportVersions> && supportVersions) { DARABONBA_PTR_SET_RVALUE(supportVersions_, supportVersions) };


      // warmNodeProperties Field Functions 
      bool hasWarmNodeProperties() const { return this->warmNodeProperties_ != nullptr;};
      void deleteWarmNodeProperties() { this->warmNodeProperties_ = nullptr;};
      inline const Result::WarmNodeProperties & getWarmNodeProperties() const { DARABONBA_PTR_GET_CONST(warmNodeProperties_, Result::WarmNodeProperties) };
      inline Result::WarmNodeProperties getWarmNodeProperties() { DARABONBA_PTR_GET(warmNodeProperties_, Result::WarmNodeProperties) };
      inline Result& setWarmNodeProperties(const Result::WarmNodeProperties & warmNodeProperties) { DARABONBA_PTR_SET_VALUE(warmNodeProperties_, warmNodeProperties) };
      inline Result& setWarmNodeProperties(Result::WarmNodeProperties && warmNodeProperties) { DARABONBA_PTR_SET_RVALUE(warmNodeProperties_, warmNodeProperties) };


      // zones Field Functions 
      bool hasZones() const { return this->zones_ != nullptr;};
      void deleteZones() { this->zones_ = nullptr;};
      inline const vector<string> & getZones() const { DARABONBA_PTR_GET_CONST(zones_, vector<string>) };
      inline vector<string> getZones() { DARABONBA_PTR_GET(zones_, vector<string>) };
      inline Result& setZones(const vector<string> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
      inline Result& setZones(vector<string> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


    protected:
      shared_ptr<Result::ClientNodeAmountRange> clientNodeAmountRange_ {};
      shared_ptr<vector<Result::ClientNodeDiskList>> clientNodeDiskList_ {};
      shared_ptr<vector<string>> clientNodeSpec_ {};
      shared_ptr<string> createUrl_ {};
      shared_ptr<vector<Result::DataDiskList>> dataDiskList_ {};
      shared_ptr<Result::ElasticNodeProperties> elasticNodeProperties_ {};
      shared_ptr<string> env_ {};
      shared_ptr<vector<string>> esVersions_ {};
      shared_ptr<vector<Result::EsVersionsLatestList>> esVersionsLatestList_ {};
      shared_ptr<vector<string>> instanceSupportNodes_ {};
      shared_ptr<Result::JvmConfine> jvmConfine_ {};
      shared_ptr<Result::KibanaNodeProperties> kibanaNodeProperties_ {};
      shared_ptr<vector<string>> logstashZones_ {};
      shared_ptr<vector<Result::MasterDiskList>> masterDiskList_ {};
      shared_ptr<vector<string>> masterSpec_ {};
      shared_ptr<Result::Node> node_ {};
      shared_ptr<vector<Result::NodeSpecList>> nodeSpecList_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<vector<Result::SupportVersions>> supportVersions_ {};
      shared_ptr<Result::WarmNodeProperties> warmNodeProperties_ {};
      shared_ptr<vector<string>> zones_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRegionConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetRegionConfigurationResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetRegionConfigurationResponseBody::Result) };
    inline GetRegionConfigurationResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetRegionConfigurationResponseBody::Result) };
    inline GetRegionConfigurationResponseBody& setResult(const GetRegionConfigurationResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetRegionConfigurationResponseBody& setResult(GetRegionConfigurationResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetRegionConfigurationResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
