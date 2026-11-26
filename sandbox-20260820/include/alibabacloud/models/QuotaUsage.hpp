// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTAUSAGE_HPP_
#define ALIBABACLOUD_MODELS_QUOTAUSAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class QuotaUsage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuotaUsage& obj) { 
      DARABONBA_PTR_TO_JSON(cpuCores, cpuCores_);
      DARABONBA_PTR_TO_JSON(createSandboxWithSnapshotConcurrency, createSandboxWithSnapshotConcurrency_);
      DARABONBA_PTR_TO_JSON(createSnapshotConcurrency, createSnapshotConcurrency_);
      DARABONBA_PTR_TO_JSON(instanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(memoryGB, memoryGB_);
      DARABONBA_PTR_TO_JSON(pauseConcurrency, pauseConcurrency_);
      DARABONBA_PTR_TO_JSON(resumeConcurrency, resumeConcurrency_);
      DARABONBA_PTR_TO_JSON(scalingCpuCoresPerMinute, scalingCpuCoresPerMinute_);
    };
    friend void from_json(const Darabonba::Json& j, QuotaUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(cpuCores, cpuCores_);
      DARABONBA_PTR_FROM_JSON(createSandboxWithSnapshotConcurrency, createSandboxWithSnapshotConcurrency_);
      DARABONBA_PTR_FROM_JSON(createSnapshotConcurrency, createSnapshotConcurrency_);
      DARABONBA_PTR_FROM_JSON(instanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(memoryGB, memoryGB_);
      DARABONBA_PTR_FROM_JSON(pauseConcurrency, pauseConcurrency_);
      DARABONBA_PTR_FROM_JSON(resumeConcurrency, resumeConcurrency_);
      DARABONBA_PTR_FROM_JSON(scalingCpuCoresPerMinute, scalingCpuCoresPerMinute_);
    };
    QuotaUsage() = default ;
    QuotaUsage(const QuotaUsage &) = default ;
    QuotaUsage(QuotaUsage &&) = default ;
    QuotaUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuotaUsage() = default ;
    QuotaUsage& operator=(const QuotaUsage &) = default ;
    QuotaUsage& operator=(QuotaUsage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpuCores_ == nullptr
        && this->createSandboxWithSnapshotConcurrency_ == nullptr && this->createSnapshotConcurrency_ == nullptr && this->instanceCount_ == nullptr && this->memoryGB_ == nullptr && this->pauseConcurrency_ == nullptr
        && this->resumeConcurrency_ == nullptr && this->scalingCpuCoresPerMinute_ == nullptr; };
    // cpuCores Field Functions 
    bool hasCpuCores() const { return this->cpuCores_ != nullptr;};
    void deleteCpuCores() { this->cpuCores_ = nullptr;};
    inline double getCpuCores() const { DARABONBA_PTR_GET_DEFAULT(cpuCores_, 0.0) };
    inline QuotaUsage& setCpuCores(double cpuCores) { DARABONBA_PTR_SET_VALUE(cpuCores_, cpuCores) };


    // createSandboxWithSnapshotConcurrency Field Functions 
    bool hasCreateSandboxWithSnapshotConcurrency() const { return this->createSandboxWithSnapshotConcurrency_ != nullptr;};
    void deleteCreateSandboxWithSnapshotConcurrency() { this->createSandboxWithSnapshotConcurrency_ = nullptr;};
    inline int32_t getCreateSandboxWithSnapshotConcurrency() const { DARABONBA_PTR_GET_DEFAULT(createSandboxWithSnapshotConcurrency_, 0) };
    inline QuotaUsage& setCreateSandboxWithSnapshotConcurrency(int32_t createSandboxWithSnapshotConcurrency) { DARABONBA_PTR_SET_VALUE(createSandboxWithSnapshotConcurrency_, createSandboxWithSnapshotConcurrency) };


    // createSnapshotConcurrency Field Functions 
    bool hasCreateSnapshotConcurrency() const { return this->createSnapshotConcurrency_ != nullptr;};
    void deleteCreateSnapshotConcurrency() { this->createSnapshotConcurrency_ = nullptr;};
    inline int32_t getCreateSnapshotConcurrency() const { DARABONBA_PTR_GET_DEFAULT(createSnapshotConcurrency_, 0) };
    inline QuotaUsage& setCreateSnapshotConcurrency(int32_t createSnapshotConcurrency) { DARABONBA_PTR_SET_VALUE(createSnapshotConcurrency_, createSnapshotConcurrency) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int64_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0L) };
    inline QuotaUsage& setInstanceCount(int64_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // memoryGB Field Functions 
    bool hasMemoryGB() const { return this->memoryGB_ != nullptr;};
    void deleteMemoryGB() { this->memoryGB_ = nullptr;};
    inline double getMemoryGB() const { DARABONBA_PTR_GET_DEFAULT(memoryGB_, 0.0) };
    inline QuotaUsage& setMemoryGB(double memoryGB) { DARABONBA_PTR_SET_VALUE(memoryGB_, memoryGB) };


    // pauseConcurrency Field Functions 
    bool hasPauseConcurrency() const { return this->pauseConcurrency_ != nullptr;};
    void deletePauseConcurrency() { this->pauseConcurrency_ = nullptr;};
    inline int32_t getPauseConcurrency() const { DARABONBA_PTR_GET_DEFAULT(pauseConcurrency_, 0) };
    inline QuotaUsage& setPauseConcurrency(int32_t pauseConcurrency) { DARABONBA_PTR_SET_VALUE(pauseConcurrency_, pauseConcurrency) };


    // resumeConcurrency Field Functions 
    bool hasResumeConcurrency() const { return this->resumeConcurrency_ != nullptr;};
    void deleteResumeConcurrency() { this->resumeConcurrency_ = nullptr;};
    inline int32_t getResumeConcurrency() const { DARABONBA_PTR_GET_DEFAULT(resumeConcurrency_, 0) };
    inline QuotaUsage& setResumeConcurrency(int32_t resumeConcurrency) { DARABONBA_PTR_SET_VALUE(resumeConcurrency_, resumeConcurrency) };


    // scalingCpuCoresPerMinute Field Functions 
    bool hasScalingCpuCoresPerMinute() const { return this->scalingCpuCoresPerMinute_ != nullptr;};
    void deleteScalingCpuCoresPerMinute() { this->scalingCpuCoresPerMinute_ = nullptr;};
    inline double getScalingCpuCoresPerMinute() const { DARABONBA_PTR_GET_DEFAULT(scalingCpuCoresPerMinute_, 0.0) };
    inline QuotaUsage& setScalingCpuCoresPerMinute(double scalingCpuCoresPerMinute) { DARABONBA_PTR_SET_VALUE(scalingCpuCoresPerMinute_, scalingCpuCoresPerMinute) };


  protected:
    // The consumed CPU quota in vCPUs, which is not the CPU utilization.
    shared_ptr<double> cpuCores_ {};
    // The number of unreleased concurrency authorizations for snapshot-based sandbox creation.
    shared_ptr<int32_t> createSandboxWithSnapshotConcurrency_ {};
    // The number of unreleased concurrency authorizations for snapshot creation.
    shared_ptr<int32_t> createSnapshotConcurrency_ {};
    // The number of unreleased instance authorizations.
    shared_ptr<int64_t> instanceCount_ {};
    // The consumed memory quota in GB, which is not the actual memory used by processes.
    shared_ptr<double> memoryGB_ {};
    // The number of unreleased concurrency authorizations for sandbox hibernation.
    shared_ptr<int32_t> pauseConcurrency_ {};
    // The number of unreleased concurrency authorizations for resuming sandboxes.
    shared_ptr<int32_t> resumeConcurrency_ {};
    // The number of cores consumed from the exclusive CPU creation quota of the team that have not yet been naturally replenished. This is not the cumulative creation volume over the last minute. This field is omitted when no valid exclusive bucket snapshot is available. Actual zeros and decimals are retained.
    shared_ptr<double> scalingCpuCoresPerMinute_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
