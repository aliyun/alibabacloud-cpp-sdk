// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTARTINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESTARTINSTANCERESPONSEBODY_HPP_
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
  class RestartInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestartInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, RestartInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    RestartInstanceResponseBody() = default ;
    RestartInstanceResponseBody(const RestartInstanceResponseBody &) = default ;
    RestartInstanceResponseBody(RestartInstanceResponseBody &&) = default ;
    RestartInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestartInstanceResponseBody() = default ;
    RestartInstanceResponseBody& operator=(const RestartInstanceResponseBody &) = default ;
    RestartInstanceResponseBody& operator=(RestartInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(dictList, dictList_);
        DARABONBA_PTR_TO_JSON(domain, domain_);
        DARABONBA_PTR_TO_JSON(esVersion, esVersion_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(kibanaConfiguration, kibanaConfiguration_);
        DARABONBA_PTR_TO_JSON(kibanaDomain, kibanaDomain_);
        DARABONBA_PTR_TO_JSON(kibanaPort, kibanaPort_);
        DARABONBA_PTR_TO_JSON(masterConfiguration, masterConfiguration_);
        DARABONBA_PTR_TO_JSON(networkConfig, networkConfig_);
        DARABONBA_PTR_TO_JSON(nodeAmount, nodeAmount_);
        DARABONBA_PTR_TO_JSON(nodeSpec, nodeSpec_);
        DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
        DARABONBA_PTR_TO_JSON(publicDomain, publicDomain_);
        DARABONBA_PTR_TO_JSON(publicPort, publicPort_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(synonymsDicts, synonymsDicts_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(dictList, dictList_);
        DARABONBA_PTR_FROM_JSON(domain, domain_);
        DARABONBA_PTR_FROM_JSON(esVersion, esVersion_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(kibanaConfiguration, kibanaConfiguration_);
        DARABONBA_PTR_FROM_JSON(kibanaDomain, kibanaDomain_);
        DARABONBA_PTR_FROM_JSON(kibanaPort, kibanaPort_);
        DARABONBA_PTR_FROM_JSON(masterConfiguration, masterConfiguration_);
        DARABONBA_PTR_FROM_JSON(networkConfig, networkConfig_);
        DARABONBA_PTR_FROM_JSON(nodeAmount, nodeAmount_);
        DARABONBA_PTR_FROM_JSON(nodeSpec, nodeSpec_);
        DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
        DARABONBA_PTR_FROM_JSON(publicDomain, publicDomain_);
        DARABONBA_PTR_FROM_JSON(publicPort, publicPort_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(synonymsDicts, synonymsDicts_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
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
        // The size of the Dictionary File. Unit: bytes.
        shared_ptr<int64_t> fileSize_ {};
        // The name of the dictionary file.
        shared_ptr<string> name_ {};
        // The source type. Valid values:
        // 
        // *   OSS:OSS open storage (the OSS storage space must be publicly readable.)
        // *   ORIGIN: open-source Elasticsearch
        // *   UPLOAD
        shared_ptr<string> sourceType_ {};
        // The type of the dictionary. Valid values:
        // 
        // *   STOP: The STOP word.
        // *   MAIN: MAIN Dictionary
        // *   SYNONYMS: SYNONYMS
        // *   ALI_WS: an Alibaba Dictionary.
        shared_ptr<string> type_ {};
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
        inline int32_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0) };
        inline NodeSpec& setDisk(int32_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


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
        // The storage space size per data node. Unit: GB.
        shared_ptr<int32_t> disk_ {};
        // The storage type of the node. Valid values: cloud_ssd and cloud_efficiency.
        shared_ptr<string> diskType_ {};
        // The specification of data nodes.
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
        // The network type. Only Virtual Private Cloud (VPC) is supported.
        shared_ptr<string> type_ {};
        // The ID of the VPC.
        shared_ptr<string> vpcId_ {};
        // The zone where the instance is deployed.
        shared_ptr<string> vsArea_ {};
        // The ID of the vSwitch associated with the specified VPC.
        shared_ptr<string> vswitchId_ {};
      };

      class MasterConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MasterConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(amount, amount_);
          DARABONBA_PTR_TO_JSON(disk, disk_);
          DARABONBA_PTR_TO_JSON(diskType, diskType_);
          DARABONBA_PTR_TO_JSON(spec, spec_);
        };
        friend void from_json(const Darabonba::Json& j, MasterConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(amount, amount_);
          DARABONBA_PTR_FROM_JSON(disk, disk_);
          DARABONBA_PTR_FROM_JSON(diskType, diskType_);
          DARABONBA_PTR_FROM_JSON(spec, spec_);
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
        && this->disk_ == nullptr && this->diskType_ == nullptr && this->spec_ == nullptr; };
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


      protected:
        // The number of nodes in the cluster.
        shared_ptr<int32_t> amount_ {};
        // The size of the node storage space. Unit: GB.
        shared_ptr<int32_t> disk_ {};
        // The storage type of the node. This tool only supports cloud_ssd (cloud SSD) disks.
        shared_ptr<string> diskType_ {};
        // The node specifications of the cluster.
        shared_ptr<string> spec_ {};
      };

      class KibanaConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KibanaConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(amount, amount_);
          DARABONBA_PTR_TO_JSON(disk, disk_);
          DARABONBA_PTR_TO_JSON(diskType, diskType_);
          DARABONBA_PTR_TO_JSON(spec, spec_);
        };
        friend void from_json(const Darabonba::Json& j, KibanaConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(amount, amount_);
          DARABONBA_PTR_FROM_JSON(disk, disk_);
          DARABONBA_PTR_FROM_JSON(diskType, diskType_);
          DARABONBA_PTR_FROM_JSON(spec, spec_);
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
        && this->disk_ == nullptr && this->diskType_ == nullptr && this->spec_ == nullptr; };
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


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline KibanaConfiguration& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline KibanaConfiguration& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


      protected:
        // The number of performance metrics.
        shared_ptr<int32_t> amount_ {};
        // The size of the node storage space. Unit: GB.
        shared_ptr<int32_t> disk_ {};
        // The storage type of the node.
        shared_ptr<string> diskType_ {};
        // The specification of data nodes.
        shared_ptr<string> spec_ {};
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
        // The size of the Dictionary File. Unit: bytes.
        shared_ptr<int64_t> fileSize_ {};
        // The name of the dictionary file.
        shared_ptr<string> name_ {};
        // The source type. Valid values:
        // 
        // *   OSS: OSS open storage (need to ensure that OSS storage space is public readable.)
        // *   ORIGIN: Open source Elasticsearch
        // *   UPLOAD: Uploaded files
        shared_ptr<string> sourceType_ {};
        // The type of the dictionary. Valid values:
        // 
        // *   STOP: The STOP word.
        // *   MAIN: MAIN Dictionary
        // *   SYNONYMS: SYNONYMS
        // *   ALI_WS: an Alibaba Dictionary.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->description_ == nullptr && this->dictList_ == nullptr && this->domain_ == nullptr && this->esVersion_ == nullptr && this->instanceId_ == nullptr
        && this->kibanaConfiguration_ == nullptr && this->kibanaDomain_ == nullptr && this->kibanaPort_ == nullptr && this->masterConfiguration_ == nullptr && this->networkConfig_ == nullptr
        && this->nodeAmount_ == nullptr && this->nodeSpec_ == nullptr && this->paymentType_ == nullptr && this->publicDomain_ == nullptr && this->publicPort_ == nullptr
        && this->status_ == nullptr && this->synonymsDicts_ == nullptr && this->updatedAt_ == nullptr; };
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


      // esVersion Field Functions 
      bool hasEsVersion() const { return this->esVersion_ != nullptr;};
      void deleteEsVersion() { this->esVersion_ = nullptr;};
      inline string getEsVersion() const { DARABONBA_PTR_GET_DEFAULT(esVersion_, "") };
      inline Result& setEsVersion(string esVersion) { DARABONBA_PTR_SET_VALUE(esVersion_, esVersion) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Result& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


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


      // kibanaPort Field Functions 
      bool hasKibanaPort() const { return this->kibanaPort_ != nullptr;};
      void deleteKibanaPort() { this->kibanaPort_ = nullptr;};
      inline int32_t getKibanaPort() const { DARABONBA_PTR_GET_DEFAULT(kibanaPort_, 0) };
      inline Result& setKibanaPort(int32_t kibanaPort) { DARABONBA_PTR_SET_VALUE(kibanaPort_, kibanaPort) };


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


      // publicDomain Field Functions 
      bool hasPublicDomain() const { return this->publicDomain_ != nullptr;};
      void deletePublicDomain() { this->publicDomain_ = nullptr;};
      inline string getPublicDomain() const { DARABONBA_PTR_GET_DEFAULT(publicDomain_, "") };
      inline Result& setPublicDomain(string publicDomain) { DARABONBA_PTR_SET_VALUE(publicDomain_, publicDomain) };


      // publicPort Field Functions 
      bool hasPublicPort() const { return this->publicPort_ != nullptr;};
      void deletePublicPort() { this->publicPort_ = nullptr;};
      inline int32_t getPublicPort() const { DARABONBA_PTR_GET_DEFAULT(publicPort_, 0) };
      inline Result& setPublicPort(int32_t publicPort) { DARABONBA_PTR_SET_VALUE(publicPort_, publicPort) };


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


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline string getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
      inline Result& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    protected:
      // The time when the instance was created.
      shared_ptr<string> createdAt_ {};
      // The name of the instance.
      shared_ptr<string> description_ {};
      // The configuration of the IK dictionaries.
      shared_ptr<vector<Result::DictList>> dictList_ {};
      // The intranet access address of the instance.
      shared_ptr<string> domain_ {};
      // The version of the instance.
      shared_ptr<string> esVersion_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The configuration of Kibana nodes.
      shared_ptr<Result::KibanaConfiguration> kibanaConfiguration_ {};
      // The public network access address of Kibana.
      shared_ptr<string> kibanaDomain_ {};
      // The public port of the Kibana network.
      shared_ptr<int32_t> kibanaPort_ {};
      // The configuration of dedicated master nodes.
      shared_ptr<Result::MasterConfiguration> masterConfiguration_ {};
      // The network configuration.
      shared_ptr<Result::NetworkConfig> networkConfig_ {};
      // The number of data nodes.
      shared_ptr<int32_t> nodeAmount_ {};
      // The configuration of data nodes.
      shared_ptr<Result::NodeSpec> nodeSpec_ {};
      // The billing method of the created ECS instance.
      // 
      // Valid values: prepaid and postpaid.
      shared_ptr<string> paymentType_ {};
      // The public network access address.
      shared_ptr<string> publicDomain_ {};
      // The public network port.
      shared_ptr<int32_t> publicPort_ {};
      // The state of the cluster.
      // 
      // Supported: active (normal), activating (initializing), inactive (blocked), and invalid (expired).
      shared_ptr<string> status_ {};
      // The configuration of the synonym dictionaries.
      shared_ptr<vector<Result::SynonymsDicts>> synonymsDicts_ {};
      // The time when the instance was last updated.
      shared_ptr<string> updatedAt_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RestartInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const RestartInstanceResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, RestartInstanceResponseBody::Result) };
    inline RestartInstanceResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, RestartInstanceResponseBody::Result) };
    inline RestartInstanceResponseBody& setResult(const RestartInstanceResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline RestartInstanceResponseBody& setResult(RestartInstanceResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The return results.
    shared_ptr<RestartInstanceResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
