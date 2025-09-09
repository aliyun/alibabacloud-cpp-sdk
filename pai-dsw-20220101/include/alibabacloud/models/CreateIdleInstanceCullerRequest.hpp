// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDLEINSTANCECULLERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDLEINSTANCECULLERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class CreateIdleInstanceCullerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdleInstanceCullerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CpuPercentThreshold, cpuPercentThreshold_);
      DARABONBA_PTR_TO_JSON(GpuPercentThreshold, gpuPercentThreshold_);
      DARABONBA_PTR_TO_JSON(MaxIdleTimeInMinutes, maxIdleTimeInMinutes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdleInstanceCullerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuPercentThreshold, cpuPercentThreshold_);
      DARABONBA_PTR_FROM_JSON(GpuPercentThreshold, gpuPercentThreshold_);
      DARABONBA_PTR_FROM_JSON(MaxIdleTimeInMinutes, maxIdleTimeInMinutes_);
    };
    CreateIdleInstanceCullerRequest() = default ;
    CreateIdleInstanceCullerRequest(const CreateIdleInstanceCullerRequest &) = default ;
    CreateIdleInstanceCullerRequest(CreateIdleInstanceCullerRequest &&) = default ;
    CreateIdleInstanceCullerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdleInstanceCullerRequest() = default ;
    CreateIdleInstanceCullerRequest& operator=(const CreateIdleInstanceCullerRequest &) = default ;
    CreateIdleInstanceCullerRequest& operator=(CreateIdleInstanceCullerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cpuPercentThreshold_ != nullptr
        && this->gpuPercentThreshold_ != nullptr && this->maxIdleTimeInMinutes_ != nullptr; };
    // cpuPercentThreshold Field Functions 
    bool hasCpuPercentThreshold() const { return this->cpuPercentThreshold_ != nullptr;};
    void deleteCpuPercentThreshold() { this->cpuPercentThreshold_ = nullptr;};
    inline int32_t cpuPercentThreshold() const { DARABONBA_PTR_GET_DEFAULT(cpuPercentThreshold_, 0) };
    inline CreateIdleInstanceCullerRequest& setCpuPercentThreshold(int32_t cpuPercentThreshold) { DARABONBA_PTR_SET_VALUE(cpuPercentThreshold_, cpuPercentThreshold) };


    // gpuPercentThreshold Field Functions 
    bool hasGpuPercentThreshold() const { return this->gpuPercentThreshold_ != nullptr;};
    void deleteGpuPercentThreshold() { this->gpuPercentThreshold_ = nullptr;};
    inline int32_t gpuPercentThreshold() const { DARABONBA_PTR_GET_DEFAULT(gpuPercentThreshold_, 0) };
    inline CreateIdleInstanceCullerRequest& setGpuPercentThreshold(int32_t gpuPercentThreshold) { DARABONBA_PTR_SET_VALUE(gpuPercentThreshold_, gpuPercentThreshold) };


    // maxIdleTimeInMinutes Field Functions 
    bool hasMaxIdleTimeInMinutes() const { return this->maxIdleTimeInMinutes_ != nullptr;};
    void deleteMaxIdleTimeInMinutes() { this->maxIdleTimeInMinutes_ = nullptr;};
    inline int32_t maxIdleTimeInMinutes() const { DARABONBA_PTR_GET_DEFAULT(maxIdleTimeInMinutes_, 0) };
    inline CreateIdleInstanceCullerRequest& setMaxIdleTimeInMinutes(int32_t maxIdleTimeInMinutes) { DARABONBA_PTR_SET_VALUE(maxIdleTimeInMinutes_, maxIdleTimeInMinutes) };


  protected:
    // The CPU utilization threshold. Unit: percentage. Valid values: 1 to 100. If the CPU utilization of the instance is lower than this threshold, the instance is considered idle.
    std::shared_ptr<int32_t> cpuPercentThreshold_ = nullptr;
    // The GPU utilization threshold. Unit: percentage. Valid values: 1 to 100. This parameter takes effect only if the instance is of the GPU instance type. If both CPU and GPU utilization is lower than the thresholds, the instance is considered idle.
    std::shared_ptr<int32_t> gpuPercentThreshold_ = nullptr;
    // The maximum time duration for which the instance is idle. Unit: minutes. If the time duration for which the instance is idle exceeds this value, the system automatically stops the instance.
    std::shared_ptr<int32_t> maxIdleTimeInMinutes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
