// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CAPACITYPLANRESPONSEBODYRESULTNODECONFIGURATIONS_HPP_
#define ALIBABACLOUD_MODELS_CAPACITYPLANRESPONSEBODYRESULTNODECONFIGURATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CapacityPlanResponseBodyResultNodeConfigurations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CapacityPlanResponseBodyResultNodeConfigurations& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(Disk, disk_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
    };
    friend void from_json(const Darabonba::Json& j, CapacityPlanResponseBodyResultNodeConfigurations& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(Disk, disk_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
    };
    CapacityPlanResponseBodyResultNodeConfigurations() = default ;
    CapacityPlanResponseBodyResultNodeConfigurations(const CapacityPlanResponseBodyResultNodeConfigurations &) = default ;
    CapacityPlanResponseBodyResultNodeConfigurations(CapacityPlanResponseBodyResultNodeConfigurations &&) = default ;
    CapacityPlanResponseBodyResultNodeConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CapacityPlanResponseBodyResultNodeConfigurations() = default ;
    CapacityPlanResponseBodyResultNodeConfigurations& operator=(const CapacityPlanResponseBodyResultNodeConfigurations &) = default ;
    CapacityPlanResponseBodyResultNodeConfigurations& operator=(CapacityPlanResponseBodyResultNodeConfigurations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amount_ != nullptr
        && this->cpu_ != nullptr && this->disk_ != nullptr && this->diskType_ != nullptr && this->memory_ != nullptr && this->nodeType_ != nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int64_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0L) };
    inline CapacityPlanResponseBodyResultNodeConfigurations& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int64_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0L) };
    inline CapacityPlanResponseBodyResultNodeConfigurations& setCpu(int64_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // disk Field Functions 
    bool hasDisk() const { return this->disk_ != nullptr;};
    void deleteDisk() { this->disk_ = nullptr;};
    inline int64_t disk() const { DARABONBA_PTR_GET_DEFAULT(disk_, 0L) };
    inline CapacityPlanResponseBodyResultNodeConfigurations& setDisk(int64_t disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline CapacityPlanResponseBodyResultNodeConfigurations& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int64_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
    inline CapacityPlanResponseBodyResultNodeConfigurations& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline CapacityPlanResponseBodyResultNodeConfigurations& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


  protected:
    // Number of nodes.
    std::shared_ptr<int64_t> amount_ = nullptr;
    // Number of CPUs.
    std::shared_ptr<int64_t> cpu_ = nullptr;
    // Disk size, in GiB.
    std::shared_ptr<int64_t> disk_ = nullptr;
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
    std::shared_ptr<string> diskType_ = nullptr;
    // Specified memory size for the current node role.
    std::shared_ptr<int64_t> memory_ = nullptr;
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
    std::shared_ptr<string> nodeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
