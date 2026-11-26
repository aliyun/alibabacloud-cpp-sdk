// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTA_HPP_
#define ALIBABACLOUD_MODELS_QUOTA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class Quota : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Quota& obj) { 
      DARABONBA_PTR_TO_JSON(cpuCores, cpuCores_);
      DARABONBA_PTR_TO_JSON(createSandboxWithSnapshotConcurrency, createSandboxWithSnapshotConcurrency_);
      DARABONBA_PTR_TO_JSON(createSnapshotConcurrency, createSnapshotConcurrency_);
      DARABONBA_PTR_TO_JSON(instanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(memoryGB, memoryGB_);
      DARABONBA_PTR_TO_JSON(pauseConcurrency, pauseConcurrency_);
      DARABONBA_PTR_TO_JSON(resumeConcurrency, resumeConcurrency_);
      DARABONBA_PTR_TO_JSON(scalingCpuCoresPerMinute, scalingCpuCoresPerMinute_);
      DARABONBA_PTR_TO_JSON(tagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, Quota& obj) { 
      DARABONBA_PTR_FROM_JSON(cpuCores, cpuCores_);
      DARABONBA_PTR_FROM_JSON(createSandboxWithSnapshotConcurrency, createSandboxWithSnapshotConcurrency_);
      DARABONBA_PTR_FROM_JSON(createSnapshotConcurrency, createSnapshotConcurrency_);
      DARABONBA_PTR_FROM_JSON(instanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(memoryGB, memoryGB_);
      DARABONBA_PTR_FROM_JSON(pauseConcurrency, pauseConcurrency_);
      DARABONBA_PTR_FROM_JSON(resumeConcurrency, resumeConcurrency_);
      DARABONBA_PTR_FROM_JSON(scalingCpuCoresPerMinute, scalingCpuCoresPerMinute_);
      DARABONBA_PTR_FROM_JSON(tagValue, tagValue_);
    };
    Quota() = default ;
    Quota(const Quota &) = default ;
    Quota(Quota &&) = default ;
    Quota(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Quota() = default ;
    Quota& operator=(const Quota &) = default ;
    Quota& operator=(Quota &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpuCores_ == nullptr
        && this->createSandboxWithSnapshotConcurrency_ == nullptr && this->createSnapshotConcurrency_ == nullptr && this->instanceCount_ == nullptr && this->memoryGB_ == nullptr && this->pauseConcurrency_ == nullptr
        && this->resumeConcurrency_ == nullptr && this->scalingCpuCoresPerMinute_ == nullptr && this->tagValue_ == nullptr; };
    // cpuCores Field Functions 
    bool hasCpuCores() const { return this->cpuCores_ != nullptr;};
    void deleteCpuCores() { this->cpuCores_ = nullptr;};
    inline int32_t getCpuCores() const { DARABONBA_PTR_GET_DEFAULT(cpuCores_, 0) };
    inline Quota& setCpuCores(int32_t cpuCores) { DARABONBA_PTR_SET_VALUE(cpuCores_, cpuCores) };


    // createSandboxWithSnapshotConcurrency Field Functions 
    bool hasCreateSandboxWithSnapshotConcurrency() const { return this->createSandboxWithSnapshotConcurrency_ != nullptr;};
    void deleteCreateSandboxWithSnapshotConcurrency() { this->createSandboxWithSnapshotConcurrency_ = nullptr;};
    inline int32_t getCreateSandboxWithSnapshotConcurrency() const { DARABONBA_PTR_GET_DEFAULT(createSandboxWithSnapshotConcurrency_, 0) };
    inline Quota& setCreateSandboxWithSnapshotConcurrency(int32_t createSandboxWithSnapshotConcurrency) { DARABONBA_PTR_SET_VALUE(createSandboxWithSnapshotConcurrency_, createSandboxWithSnapshotConcurrency) };


    // createSnapshotConcurrency Field Functions 
    bool hasCreateSnapshotConcurrency() const { return this->createSnapshotConcurrency_ != nullptr;};
    void deleteCreateSnapshotConcurrency() { this->createSnapshotConcurrency_ = nullptr;};
    inline int32_t getCreateSnapshotConcurrency() const { DARABONBA_PTR_GET_DEFAULT(createSnapshotConcurrency_, 0) };
    inline Quota& setCreateSnapshotConcurrency(int32_t createSnapshotConcurrency) { DARABONBA_PTR_SET_VALUE(createSnapshotConcurrency_, createSnapshotConcurrency) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline Quota& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // memoryGB Field Functions 
    bool hasMemoryGB() const { return this->memoryGB_ != nullptr;};
    void deleteMemoryGB() { this->memoryGB_ = nullptr;};
    inline int32_t getMemoryGB() const { DARABONBA_PTR_GET_DEFAULT(memoryGB_, 0) };
    inline Quota& setMemoryGB(int32_t memoryGB) { DARABONBA_PTR_SET_VALUE(memoryGB_, memoryGB) };


    // pauseConcurrency Field Functions 
    bool hasPauseConcurrency() const { return this->pauseConcurrency_ != nullptr;};
    void deletePauseConcurrency() { this->pauseConcurrency_ = nullptr;};
    inline int32_t getPauseConcurrency() const { DARABONBA_PTR_GET_DEFAULT(pauseConcurrency_, 0) };
    inline Quota& setPauseConcurrency(int32_t pauseConcurrency) { DARABONBA_PTR_SET_VALUE(pauseConcurrency_, pauseConcurrency) };


    // resumeConcurrency Field Functions 
    bool hasResumeConcurrency() const { return this->resumeConcurrency_ != nullptr;};
    void deleteResumeConcurrency() { this->resumeConcurrency_ = nullptr;};
    inline int32_t getResumeConcurrency() const { DARABONBA_PTR_GET_DEFAULT(resumeConcurrency_, 0) };
    inline Quota& setResumeConcurrency(int32_t resumeConcurrency) { DARABONBA_PTR_SET_VALUE(resumeConcurrency_, resumeConcurrency) };


    // scalingCpuCoresPerMinute Field Functions 
    bool hasScalingCpuCoresPerMinute() const { return this->scalingCpuCoresPerMinute_ != nullptr;};
    void deleteScalingCpuCoresPerMinute() { this->scalingCpuCoresPerMinute_ = nullptr;};
    inline int64_t getScalingCpuCoresPerMinute() const { DARABONBA_PTR_GET_DEFAULT(scalingCpuCoresPerMinute_, 0L) };
    inline Quota& setScalingCpuCoresPerMinute(int64_t scalingCpuCoresPerMinute) { DARABONBA_PTR_SET_VALUE(scalingCpuCoresPerMinute_, scalingCpuCoresPerMinute) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline Quota& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    // The vCPU quota, in cores.
    shared_ptr<int32_t> cpuCores_ {};
    // The team snapshot-based sandbox creation concurrency quota, in requests. This value represents the maximum number of snapshot-based sandbox creation requests that can be executed at the same time. When updating, omit this parameter or set it to null to retain the original configuration. Set it to a positive integer to specify an exclusive quota. Set it to 0 to prohibit snapshot-based sandbox creation. Set it to -1 to clear the exclusive quota and restore the remaining quota of the shared account. In query responses, this parameter is omitted if it is not configured. An explicit value of 0 is retained, and -1 is not returned.
    shared_ptr<int32_t> createSandboxWithSnapshotConcurrency_ {};
    // The team snapshot creation concurrency quota, in requests. This value represents the maximum number of snapshot creation requests that can be executed at the same time. When updating, omit this parameter or set it to null to retain the original configuration. Set it to a positive integer to specify an exclusive quota. Set it to 0 to prohibit snapshot creation. Set it to -1 to clear the exclusive quota and restore the remaining quota of the shared account. In query responses, this parameter is omitted if it is not configured. An explicit value of 0 is retained, and -1 is not returned.
    shared_ptr<int32_t> createSnapshotConcurrency_ {};
    // The quota for active instances.
    shared_ptr<int32_t> instanceCount_ {};
    // The memory quota, in GB.
    shared_ptr<int32_t> memoryGB_ {};
    // The team sandbox hibernation concurrency quota, in requests. This value represents the maximum number of sandbox hibernation requests that can be executed at the same time. When updating, omit this parameter or set it to null to retain the original configuration. Set it to a positive integer to specify an exclusive quota. Set it to 0 to prohibit sandbox hibernation. Set it to -1 to clear the exclusive quota and restore the remaining quota of the shared account. In query responses, this parameter is omitted if it is not configured. An explicit value of 0 is retained, and -1 is not returned.
    shared_ptr<int32_t> pauseConcurrency_ {};
    // The team sandbox wake-up concurrency quota, in requests. This value represents the maximum number of sandbox wake-up requests that can be executed at the same time. When updating, omit this parameter or set it to null to retain the original configuration. Set it to a positive integer to specify an exclusive quota. Set it to 0 to prohibit sandbox wake-up. Set it to -1 to clear the exclusive quota and restore the remaining quota of the shared account. In query responses, this parameter is omitted if it is not configured. An explicit value of 0 is retained, and -1 is not returned.
    shared_ptr<int32_t> resumeConcurrency_ {};
    // The team CPU creation rate, in cores per minute. When updating, omit this parameter or set it to null to retain the original configuration. Set it to a positive integer to specify an exclusive rate. Set it to 0 to prohibit new CPU capacity. Set it to -1 to clear the exclusive rate and restore the remaining rate of the shared account. In query responses, this parameter is omitted if it is not configured. An explicit value of 0 is retained, and -1 is not returned.
    shared_ptr<int64_t> scalingCpuCoresPerMinute_ {};
    // The quota tag value, which represents the team ID. Quotas are independently calculated based on this dimension.
    shared_ptr<string> tagValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
