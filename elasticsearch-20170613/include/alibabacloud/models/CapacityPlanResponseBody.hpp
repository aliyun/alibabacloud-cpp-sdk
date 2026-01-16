// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CAPACITYPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CAPACITYPLANRESPONSEBODY_HPP_
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
  class CapacityPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CapacityPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CapacityPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    CapacityPlanResponseBody() = default ;
    CapacityPlanResponseBody(const CapacityPlanResponseBody &) = default ;
    CapacityPlanResponseBody(CapacityPlanResponseBody &&) = default ;
    CapacityPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CapacityPlanResponseBody() = default ;
    CapacityPlanResponseBody& operator=(const CapacityPlanResponseBody &) = default ;
    CapacityPlanResponseBody& operator=(CapacityPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(ExtendConfigs, extendConfigs_);
        DARABONBA_PTR_TO_JSON(InstanceCategory, instanceCategory_);
        DARABONBA_PTR_TO_JSON(NodeConfigurations, nodeConfigurations_);
        DARABONBA_PTR_TO_JSON(OversizedCluster, oversizedCluster_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(ExtendConfigs, extendConfigs_);
        DARABONBA_PTR_FROM_JSON(InstanceCategory, instanceCategory_);
        DARABONBA_PTR_FROM_JSON(NodeConfigurations, nodeConfigurations_);
        DARABONBA_PTR_FROM_JSON(OversizedCluster, oversizedCluster_);
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
      class NodeConfigurations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeConfigurations& obj) { 
          DARABONBA_PTR_TO_JSON(Amount, amount_);
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(Disk, disk_);
          DARABONBA_PTR_TO_JSON(DiskType, diskType_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
        };
        friend void from_json(const Darabonba::Json& j, NodeConfigurations& obj) { 
          DARABONBA_PTR_FROM_JSON(Amount, amount_);
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(Disk, disk_);
          DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
        };
        NodeConfigurations() = default ;
        NodeConfigurations(const NodeConfigurations &) = default ;
        NodeConfigurations(NodeConfigurations &&) = default ;
        NodeConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeConfigurations() = default ;
        NodeConfigurations& operator=(const NodeConfigurations &) = default ;
        NodeConfigurations& operator=(NodeConfigurations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->cpu_ == nullptr && this->disk_ == nullptr && this->diskType_ == nullptr && this->memory_ == nullptr && this->nodeType_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline int64_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0L) };
        inline NodeConfigurations& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline int64_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0L) };
        inline NodeConfigurations& setCpu(int64_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // disk Field Functions 
        bool hasDisk() const { return this->disk_ != nullptr;};
        void deleteDisk() { this->disk_ = nullptr;};
        inline int64_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0L) };
        inline NodeConfigurations& setDisk(int64_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline NodeConfigurations& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline int64_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
        inline NodeConfigurations& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
        inline NodeConfigurations& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      protected:
        // Number of nodes.
        shared_ptr<int64_t> amount_ {};
        // Number of CPUs.
        shared_ptr<int64_t> cpu_ {};
        // Disk size, in GiB.
        shared_ptr<int64_t> disk_ {};
        // Disk type, with meanings as follows:
        // 
        // - cloud_essd: ESSD Cloud Disk
        // 
        // - cloud_ssd: SSD Cloud Disk
        // 
        // - cloud_efficiency: Efficient Cloud Disk
        // 
        // - local_ssd: Local SSD Disk
        // 
        // - local_efficiency: Local Efficient Disk
        shared_ptr<string> diskType_ {};
        // Specified memory size for the current node role.
        shared_ptr<int64_t> memory_ {};
        // Node type, with supported types as follows:
        // 
        // - WORKER: Data Node
        // 
        // - WORKER_WARM: Cold Data Node
        // 
        // - MASTER: Dedicated Master Node
        // 
        // - KIBANA: Kibana Node
        // 
        // - COORDINATING: Coordinator Node
        // 
        // - ELASTIC_WORKER: Elastic Node
        shared_ptr<string> nodeType_ {};
      };

      class ExtendConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExtendConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigType, configType_);
          DARABONBA_PTR_TO_JSON(Disk, disk_);
          DARABONBA_PTR_TO_JSON(DiskType, diskType_);
        };
        friend void from_json(const Darabonba::Json& j, ExtendConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
          DARABONBA_PTR_FROM_JSON(Disk, disk_);
          DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
        };
        ExtendConfigs() = default ;
        ExtendConfigs(const ExtendConfigs &) = default ;
        ExtendConfigs(ExtendConfigs &&) = default ;
        ExtendConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExtendConfigs() = default ;
        ExtendConfigs& operator=(const ExtendConfigs &) = default ;
        ExtendConfigs& operator=(ExtendConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configType_ == nullptr
        && this->disk_ == nullptr && this->diskType_ == nullptr; };
        // configType Field Functions 
        bool hasConfigType() const { return this->configType_ != nullptr;};
        void deleteConfigType() { this->configType_ = nullptr;};
        inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
        inline ExtendConfigs& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


        // disk Field Functions 
        bool hasDisk() const { return this->disk_ != nullptr;};
        void deleteDisk() { this->disk_ = nullptr;};
        inline int64_t getDisk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0L) };
        inline ExtendConfigs& setDisk(int64_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
        inline ExtendConfigs& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


      protected:
        // Configuration type, with a single value: sharedDisk.
        // 
        // > This extendConfigs attribute may appear when the planned instance type is Advanced.
        shared_ptr<string> configType_ {};
        // Disk size, in GiB.
        shared_ptr<int64_t> disk_ {};
        // Disk type, with a single value: CPFS_PREMIUM.
        // 
        // > This extendConfigs attribute may appear when the planned instance type is Advanced.
        shared_ptr<string> diskType_ {};
      };

      virtual bool empty() const override { return this->extendConfigs_ == nullptr
        && this->instanceCategory_ == nullptr && this->nodeConfigurations_ == nullptr && this->oversizedCluster_ == nullptr; };
      // extendConfigs Field Functions 
      bool hasExtendConfigs() const { return this->extendConfigs_ != nullptr;};
      void deleteExtendConfigs() { this->extendConfigs_ = nullptr;};
      inline const vector<Result::ExtendConfigs> & getExtendConfigs() const { DARABONBA_PTR_GET_CONST(extendConfigs_, vector<Result::ExtendConfigs>) };
      inline vector<Result::ExtendConfigs> getExtendConfigs() { DARABONBA_PTR_GET(extendConfigs_, vector<Result::ExtendConfigs>) };
      inline Result& setExtendConfigs(const vector<Result::ExtendConfigs> & extendConfigs) { DARABONBA_PTR_SET_VALUE(extendConfigs_, extendConfigs) };
      inline Result& setExtendConfigs(vector<Result::ExtendConfigs> && extendConfigs) { DARABONBA_PTR_SET_RVALUE(extendConfigs_, extendConfigs) };


      // instanceCategory Field Functions 
      bool hasInstanceCategory() const { return this->instanceCategory_ != nullptr;};
      void deleteInstanceCategory() { this->instanceCategory_ = nullptr;};
      inline string getInstanceCategory() const { DARABONBA_PTR_GET_DEFAULT(instanceCategory_, "") };
      inline Result& setInstanceCategory(string instanceCategory) { DARABONBA_PTR_SET_VALUE(instanceCategory_, instanceCategory) };


      // nodeConfigurations Field Functions 
      bool hasNodeConfigurations() const { return this->nodeConfigurations_ != nullptr;};
      void deleteNodeConfigurations() { this->nodeConfigurations_ = nullptr;};
      inline const vector<Result::NodeConfigurations> & getNodeConfigurations() const { DARABONBA_PTR_GET_CONST(nodeConfigurations_, vector<Result::NodeConfigurations>) };
      inline vector<Result::NodeConfigurations> getNodeConfigurations() { DARABONBA_PTR_GET(nodeConfigurations_, vector<Result::NodeConfigurations>) };
      inline Result& setNodeConfigurations(const vector<Result::NodeConfigurations> & nodeConfigurations) { DARABONBA_PTR_SET_VALUE(nodeConfigurations_, nodeConfigurations) };
      inline Result& setNodeConfigurations(vector<Result::NodeConfigurations> && nodeConfigurations) { DARABONBA_PTR_SET_RVALUE(nodeConfigurations_, nodeConfigurations) };


      // oversizedCluster Field Functions 
      bool hasOversizedCluster() const { return this->oversizedCluster_ != nullptr;};
      void deleteOversizedCluster() { this->oversizedCluster_ = nullptr;};
      inline bool getOversizedCluster() const { DARABONBA_PTR_GET_DEFAULT(oversizedCluster_, false) };
      inline Result& setOversizedCluster(bool oversizedCluster) { DARABONBA_PTR_SET_VALUE(oversizedCluster_, oversizedCluster) };


    protected:
      // Extended configuration information.
      shared_ptr<vector<Result::ExtendConfigs>> extendConfigs_ {};
      // Edition type, with values meaning as follows:
      // 
      // - advanced: Enhanced Edition
      // 
      // - x-pack: Commercial Edition
      // 
      // - community: Community Edition
      shared_ptr<string> instanceCategory_ {};
      // Node information.
      shared_ptr<vector<Result::NodeConfigurations>> nodeConfigurations_ {};
      // Based on the capacity planning calculation, there is no default value. The meanings of the values are as follows:
      // 
      // - true: Represents an oversized cluster, indicating that the number of data nodes calculated by the capacity planning exceeds the threshold of 50.
      // 
      // - false: The number of data nodes calculated by the capacity planning is within 50.
      shared_ptr<bool> oversizedCluster_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CapacityPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CapacityPlanResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, CapacityPlanResponseBody::Result) };
    inline CapacityPlanResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, CapacityPlanResponseBody::Result) };
    inline CapacityPlanResponseBody& setResult(const CapacityPlanResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CapacityPlanResponseBody& setResult(CapacityPlanResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // ID of the current request.
    shared_ptr<string> requestId_ {};
    // Returned result of the request.
    shared_ptr<CapacityPlanResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
