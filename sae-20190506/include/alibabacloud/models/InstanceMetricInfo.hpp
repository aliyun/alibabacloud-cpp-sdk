// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTANCEMETRICINFO_HPP_
#define ALIBABACLOUD_MODELS_INSTANCEMETRICINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class InstanceMetricInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstanceMetricInfo& obj) { 
      DARABONBA_PTR_TO_JSON(applicationID, applicationID_);
      DARABONBA_PTR_TO_JSON(cpuPercent, cpuPercent_);
      DARABONBA_PTR_TO_JSON(cpuQuotaPercent, cpuQuotaPercent_);
      DARABONBA_PTR_TO_JSON(instanceID, instanceID_);
      DARABONBA_PTR_TO_JSON(memoryLimitMB, memoryLimitMB_);
      DARABONBA_PTR_TO_JSON(memoryUsageMB, memoryUsageMB_);
      DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, InstanceMetricInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(applicationID, applicationID_);
      DARABONBA_PTR_FROM_JSON(cpuPercent, cpuPercent_);
      DARABONBA_PTR_FROM_JSON(cpuQuotaPercent, cpuQuotaPercent_);
      DARABONBA_PTR_FROM_JSON(instanceID, instanceID_);
      DARABONBA_PTR_FROM_JSON(memoryLimitMB, memoryLimitMB_);
      DARABONBA_PTR_FROM_JSON(memoryUsageMB, memoryUsageMB_);
      DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
    };
    InstanceMetricInfo() = default ;
    InstanceMetricInfo(const InstanceMetricInfo &) = default ;
    InstanceMetricInfo(InstanceMetricInfo &&) = default ;
    InstanceMetricInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstanceMetricInfo() = default ;
    InstanceMetricInfo& operator=(const InstanceMetricInfo &) = default ;
    InstanceMetricInfo& operator=(InstanceMetricInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationID_ == nullptr
        && return this->cpuPercent_ == nullptr && return this->cpuQuotaPercent_ == nullptr && return this->instanceID_ == nullptr && return this->memoryLimitMB_ == nullptr && return this->memoryUsageMB_ == nullptr
        && return this->timestamp_ == nullptr; };
    // applicationID Field Functions 
    bool hasApplicationID() const { return this->applicationID_ != nullptr;};
    void deleteApplicationID() { this->applicationID_ = nullptr;};
    inline string applicationID() const { DARABONBA_PTR_GET_DEFAULT(applicationID_, "") };
    inline InstanceMetricInfo& setApplicationID(string applicationID) { DARABONBA_PTR_SET_VALUE(applicationID_, applicationID) };


    // cpuPercent Field Functions 
    bool hasCpuPercent() const { return this->cpuPercent_ != nullptr;};
    void deleteCpuPercent() { this->cpuPercent_ = nullptr;};
    inline float cpuPercent() const { DARABONBA_PTR_GET_DEFAULT(cpuPercent_, 0.0) };
    inline InstanceMetricInfo& setCpuPercent(float cpuPercent) { DARABONBA_PTR_SET_VALUE(cpuPercent_, cpuPercent) };


    // cpuQuotaPercent Field Functions 
    bool hasCpuQuotaPercent() const { return this->cpuQuotaPercent_ != nullptr;};
    void deleteCpuQuotaPercent() { this->cpuQuotaPercent_ = nullptr;};
    inline float cpuQuotaPercent() const { DARABONBA_PTR_GET_DEFAULT(cpuQuotaPercent_, 0.0) };
    inline InstanceMetricInfo& setCpuQuotaPercent(float cpuQuotaPercent) { DARABONBA_PTR_SET_VALUE(cpuQuotaPercent_, cpuQuotaPercent) };


    // instanceID Field Functions 
    bool hasInstanceID() const { return this->instanceID_ != nullptr;};
    void deleteInstanceID() { this->instanceID_ = nullptr;};
    inline string instanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
    inline InstanceMetricInfo& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


    // memoryLimitMB Field Functions 
    bool hasMemoryLimitMB() const { return this->memoryLimitMB_ != nullptr;};
    void deleteMemoryLimitMB() { this->memoryLimitMB_ = nullptr;};
    inline float memoryLimitMB() const { DARABONBA_PTR_GET_DEFAULT(memoryLimitMB_, 0.0) };
    inline InstanceMetricInfo& setMemoryLimitMB(float memoryLimitMB) { DARABONBA_PTR_SET_VALUE(memoryLimitMB_, memoryLimitMB) };


    // memoryUsageMB Field Functions 
    bool hasMemoryUsageMB() const { return this->memoryUsageMB_ != nullptr;};
    void deleteMemoryUsageMB() { this->memoryUsageMB_ = nullptr;};
    inline float memoryUsageMB() const { DARABONBA_PTR_GET_DEFAULT(memoryUsageMB_, 0.0) };
    inline InstanceMetricInfo& setMemoryUsageMB(float memoryUsageMB) { DARABONBA_PTR_SET_VALUE(memoryUsageMB_, memoryUsageMB) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline InstanceMetricInfo& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    std::shared_ptr<string> applicationID_ = nullptr;
    std::shared_ptr<float> cpuPercent_ = nullptr;
    std::shared_ptr<float> cpuQuotaPercent_ = nullptr;
    std::shared_ptr<string> instanceID_ = nullptr;
    std::shared_ptr<float> memoryLimitMB_ = nullptr;
    std::shared_ptr<float> memoryUsageMB_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
