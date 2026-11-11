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
      DARABONBA_PTR_TO_JSON(instanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(memoryGB, memoryGB_);
    };
    friend void from_json(const Darabonba::Json& j, QuotaUsage& obj) { 
      DARABONBA_PTR_FROM_JSON(cpuCores, cpuCores_);
      DARABONBA_PTR_FROM_JSON(instanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(memoryGB, memoryGB_);
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
        && this->instanceCount_ == nullptr && this->memoryGB_ == nullptr; };
    // cpuCores Field Functions 
    bool hasCpuCores() const { return this->cpuCores_ != nullptr;};
    void deleteCpuCores() { this->cpuCores_ = nullptr;};
    inline double getCpuCores() const { DARABONBA_PTR_GET_DEFAULT(cpuCores_, 0.0) };
    inline QuotaUsage& setCpuCores(double cpuCores) { DARABONBA_PTR_SET_VALUE(cpuCores_, cpuCores) };


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


  protected:
    // The consumed CPU quota in vCPUs, not the CPU utilization.
    shared_ptr<double> cpuCores_ {};
    // The number of unreleased instance authorizations.
    shared_ptr<int64_t> instanceCount_ {};
    // The consumed memory quota in GB, not the actual memory used by processes.
    shared_ptr<double> memoryGB_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
