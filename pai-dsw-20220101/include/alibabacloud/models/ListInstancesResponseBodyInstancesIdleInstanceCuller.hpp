// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCESIDLEINSTANCECULLER_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCESIDLEINSTANCECULLER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class ListInstancesResponseBodyInstancesIdleInstanceCuller : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyInstancesIdleInstanceCuller& obj) { 
      DARABONBA_PTR_TO_JSON(CpuPercentThreshold, cpuPercentThreshold_);
      DARABONBA_PTR_TO_JSON(GpuPercentThreshold, gpuPercentThreshold_);
      DARABONBA_PTR_TO_JSON(IdleTimeInMinutes, idleTimeInMinutes_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxIdleTimeInMinutes, maxIdleTimeInMinutes_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyInstancesIdleInstanceCuller& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuPercentThreshold, cpuPercentThreshold_);
      DARABONBA_PTR_FROM_JSON(GpuPercentThreshold, gpuPercentThreshold_);
      DARABONBA_PTR_FROM_JSON(IdleTimeInMinutes, idleTimeInMinutes_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxIdleTimeInMinutes, maxIdleTimeInMinutes_);
    };
    ListInstancesResponseBodyInstancesIdleInstanceCuller() = default ;
    ListInstancesResponseBodyInstancesIdleInstanceCuller(const ListInstancesResponseBodyInstancesIdleInstanceCuller &) = default ;
    ListInstancesResponseBodyInstancesIdleInstanceCuller(ListInstancesResponseBodyInstancesIdleInstanceCuller &&) = default ;
    ListInstancesResponseBodyInstancesIdleInstanceCuller(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyInstancesIdleInstanceCuller() = default ;
    ListInstancesResponseBodyInstancesIdleInstanceCuller& operator=(const ListInstancesResponseBodyInstancesIdleInstanceCuller &) = default ;
    ListInstancesResponseBodyInstancesIdleInstanceCuller& operator=(ListInstancesResponseBodyInstancesIdleInstanceCuller &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpuPercentThreshold_ == nullptr
        && return this->gpuPercentThreshold_ == nullptr && return this->idleTimeInMinutes_ == nullptr && return this->instanceId_ == nullptr && return this->maxIdleTimeInMinutes_ == nullptr; };
    // cpuPercentThreshold Field Functions 
    bool hasCpuPercentThreshold() const { return this->cpuPercentThreshold_ != nullptr;};
    void deleteCpuPercentThreshold() { this->cpuPercentThreshold_ = nullptr;};
    inline int32_t cpuPercentThreshold() const { DARABONBA_PTR_GET_DEFAULT(cpuPercentThreshold_, 0) };
    inline ListInstancesResponseBodyInstancesIdleInstanceCuller& setCpuPercentThreshold(int32_t cpuPercentThreshold) { DARABONBA_PTR_SET_VALUE(cpuPercentThreshold_, cpuPercentThreshold) };


    // gpuPercentThreshold Field Functions 
    bool hasGpuPercentThreshold() const { return this->gpuPercentThreshold_ != nullptr;};
    void deleteGpuPercentThreshold() { this->gpuPercentThreshold_ = nullptr;};
    inline int32_t gpuPercentThreshold() const { DARABONBA_PTR_GET_DEFAULT(gpuPercentThreshold_, 0) };
    inline ListInstancesResponseBodyInstancesIdleInstanceCuller& setGpuPercentThreshold(int32_t gpuPercentThreshold) { DARABONBA_PTR_SET_VALUE(gpuPercentThreshold_, gpuPercentThreshold) };


    // idleTimeInMinutes Field Functions 
    bool hasIdleTimeInMinutes() const { return this->idleTimeInMinutes_ != nullptr;};
    void deleteIdleTimeInMinutes() { this->idleTimeInMinutes_ = nullptr;};
    inline int32_t idleTimeInMinutes() const { DARABONBA_PTR_GET_DEFAULT(idleTimeInMinutes_, 0) };
    inline ListInstancesResponseBodyInstancesIdleInstanceCuller& setIdleTimeInMinutes(int32_t idleTimeInMinutes) { DARABONBA_PTR_SET_VALUE(idleTimeInMinutes_, idleTimeInMinutes) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstancesResponseBodyInstancesIdleInstanceCuller& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxIdleTimeInMinutes Field Functions 
    bool hasMaxIdleTimeInMinutes() const { return this->maxIdleTimeInMinutes_ != nullptr;};
    void deleteMaxIdleTimeInMinutes() { this->maxIdleTimeInMinutes_ = nullptr;};
    inline int32_t maxIdleTimeInMinutes() const { DARABONBA_PTR_GET_DEFAULT(maxIdleTimeInMinutes_, 0) };
    inline ListInstancesResponseBodyInstancesIdleInstanceCuller& setMaxIdleTimeInMinutes(int32_t maxIdleTimeInMinutes) { DARABONBA_PTR_SET_VALUE(maxIdleTimeInMinutes_, maxIdleTimeInMinutes) };


  protected:
    // The CPU utilization threshold. Unit: percentage. Valid values: 1 to 100. If the CPU utilization of the instance is lower than this threshold, the instance is considered idle.
    std::shared_ptr<int32_t> cpuPercentThreshold_ = nullptr;
    // The GPU utilization threshold. Unit: percentage. Valid values: 1 to 100. This parameter takes effect only if the instance is of the GPU instance type. If both CPU and GPU utilization is lower than the thresholds, the instance is considered idle.
    std::shared_ptr<int32_t> gpuPercentThreshold_ = nullptr;
    // The time duration for which the instance is idle. Unit: minutes.
    std::shared_ptr<int32_t> idleTimeInMinutes_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The maximum time duration for which the instance is idle. Unit: minutes. If the time duration for which the instance is idle exceeds this value, the system automatically stops the instance.
    std::shared_ptr<int32_t> maxIdleTimeInMinutes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
