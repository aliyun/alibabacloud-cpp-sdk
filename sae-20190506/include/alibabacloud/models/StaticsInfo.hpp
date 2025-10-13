// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STATICSINFO_HPP_
#define ALIBABACLOUD_MODELS_STATICSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class StaticsInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StaticsInfo& obj) { 
      DARABONBA_PTR_TO_JSON(activeCPUUsage, activeCPUUsage_);
      DARABONBA_PTR_TO_JSON(cost, cost_);
      DARABONBA_PTR_TO_JSON(diskUsage, diskUsage_);
      DARABONBA_PTR_TO_JSON(functionName, functionName_);
      DARABONBA_PTR_TO_JSON(gpuUsage, gpuUsage_);
      DARABONBA_PTR_TO_JSON(idleCPUUsage, idleCPUUsage_);
      DARABONBA_PTR_TO_JSON(instanceTrafficOut, instanceTrafficOut_);
      DARABONBA_PTR_TO_JSON(invocations, invocations_);
      DARABONBA_PTR_TO_JSON(invokeCDNOut, invokeCDNOut_);
      DARABONBA_PTR_TO_JSON(invokeInternetOut, invokeInternetOut_);
      DARABONBA_PTR_TO_JSON(memoryUsage, memoryUsage_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, StaticsInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(activeCPUUsage, activeCPUUsage_);
      DARABONBA_PTR_FROM_JSON(cost, cost_);
      DARABONBA_PTR_FROM_JSON(diskUsage, diskUsage_);
      DARABONBA_PTR_FROM_JSON(functionName, functionName_);
      DARABONBA_PTR_FROM_JSON(gpuUsage, gpuUsage_);
      DARABONBA_PTR_FROM_JSON(idleCPUUsage, idleCPUUsage_);
      DARABONBA_PTR_FROM_JSON(instanceTrafficOut, instanceTrafficOut_);
      DARABONBA_PTR_FROM_JSON(invocations, invocations_);
      DARABONBA_PTR_FROM_JSON(invokeCDNOut, invokeCDNOut_);
      DARABONBA_PTR_FROM_JSON(invokeInternetOut, invokeInternetOut_);
      DARABONBA_PTR_FROM_JSON(memoryUsage, memoryUsage_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
    };
    StaticsInfo() = default ;
    StaticsInfo(const StaticsInfo &) = default ;
    StaticsInfo(StaticsInfo &&) = default ;
    StaticsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StaticsInfo() = default ;
    StaticsInfo& operator=(const StaticsInfo &) = default ;
    StaticsInfo& operator=(StaticsInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeCPUUsage_ == nullptr
        && return this->cost_ == nullptr && return this->diskUsage_ == nullptr && return this->functionName_ == nullptr && return this->gpuUsage_ == nullptr && return this->idleCPUUsage_ == nullptr
        && return this->instanceTrafficOut_ == nullptr && return this->invocations_ == nullptr && return this->invokeCDNOut_ == nullptr && return this->invokeInternetOut_ == nullptr && return this->memoryUsage_ == nullptr
        && return this->region_ == nullptr && return this->serviceName_ == nullptr; };
    // activeCPUUsage Field Functions 
    bool hasActiveCPUUsage() const { return this->activeCPUUsage_ != nullptr;};
    void deleteActiveCPUUsage() { this->activeCPUUsage_ = nullptr;};
    inline int64_t activeCPUUsage() const { DARABONBA_PTR_GET_DEFAULT(activeCPUUsage_, 0L) };
    inline StaticsInfo& setActiveCPUUsage(int64_t activeCPUUsage) { DARABONBA_PTR_SET_VALUE(activeCPUUsage_, activeCPUUsage) };


    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline float cost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0.0) };
    inline StaticsInfo& setCost(float cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // diskUsage Field Functions 
    bool hasDiskUsage() const { return this->diskUsage_ != nullptr;};
    void deleteDiskUsage() { this->diskUsage_ = nullptr;};
    inline int64_t diskUsage() const { DARABONBA_PTR_GET_DEFAULT(diskUsage_, 0L) };
    inline StaticsInfo& setDiskUsage(int64_t diskUsage) { DARABONBA_PTR_SET_VALUE(diskUsage_, diskUsage) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline StaticsInfo& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // gpuUsage Field Functions 
    bool hasGpuUsage() const { return this->gpuUsage_ != nullptr;};
    void deleteGpuUsage() { this->gpuUsage_ = nullptr;};
    inline int64_t gpuUsage() const { DARABONBA_PTR_GET_DEFAULT(gpuUsage_, 0L) };
    inline StaticsInfo& setGpuUsage(int64_t gpuUsage) { DARABONBA_PTR_SET_VALUE(gpuUsage_, gpuUsage) };


    // idleCPUUsage Field Functions 
    bool hasIdleCPUUsage() const { return this->idleCPUUsage_ != nullptr;};
    void deleteIdleCPUUsage() { this->idleCPUUsage_ = nullptr;};
    inline int64_t idleCPUUsage() const { DARABONBA_PTR_GET_DEFAULT(idleCPUUsage_, 0L) };
    inline StaticsInfo& setIdleCPUUsage(int64_t idleCPUUsage) { DARABONBA_PTR_SET_VALUE(idleCPUUsage_, idleCPUUsage) };


    // instanceTrafficOut Field Functions 
    bool hasInstanceTrafficOut() const { return this->instanceTrafficOut_ != nullptr;};
    void deleteInstanceTrafficOut() { this->instanceTrafficOut_ = nullptr;};
    inline int64_t instanceTrafficOut() const { DARABONBA_PTR_GET_DEFAULT(instanceTrafficOut_, 0L) };
    inline StaticsInfo& setInstanceTrafficOut(int64_t instanceTrafficOut) { DARABONBA_PTR_SET_VALUE(instanceTrafficOut_, instanceTrafficOut) };


    // invocations Field Functions 
    bool hasInvocations() const { return this->invocations_ != nullptr;};
    void deleteInvocations() { this->invocations_ = nullptr;};
    inline int64_t invocations() const { DARABONBA_PTR_GET_DEFAULT(invocations_, 0L) };
    inline StaticsInfo& setInvocations(int64_t invocations) { DARABONBA_PTR_SET_VALUE(invocations_, invocations) };


    // invokeCDNOut Field Functions 
    bool hasInvokeCDNOut() const { return this->invokeCDNOut_ != nullptr;};
    void deleteInvokeCDNOut() { this->invokeCDNOut_ = nullptr;};
    inline int64_t invokeCDNOut() const { DARABONBA_PTR_GET_DEFAULT(invokeCDNOut_, 0L) };
    inline StaticsInfo& setInvokeCDNOut(int64_t invokeCDNOut) { DARABONBA_PTR_SET_VALUE(invokeCDNOut_, invokeCDNOut) };


    // invokeInternetOut Field Functions 
    bool hasInvokeInternetOut() const { return this->invokeInternetOut_ != nullptr;};
    void deleteInvokeInternetOut() { this->invokeInternetOut_ = nullptr;};
    inline int64_t invokeInternetOut() const { DARABONBA_PTR_GET_DEFAULT(invokeInternetOut_, 0L) };
    inline StaticsInfo& setInvokeInternetOut(int64_t invokeInternetOut) { DARABONBA_PTR_SET_VALUE(invokeInternetOut_, invokeInternetOut) };


    // memoryUsage Field Functions 
    bool hasMemoryUsage() const { return this->memoryUsage_ != nullptr;};
    void deleteMemoryUsage() { this->memoryUsage_ = nullptr;};
    inline int64_t memoryUsage() const { DARABONBA_PTR_GET_DEFAULT(memoryUsage_, 0L) };
    inline StaticsInfo& setMemoryUsage(int64_t memoryUsage) { DARABONBA_PTR_SET_VALUE(memoryUsage_, memoryUsage) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline StaticsInfo& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline StaticsInfo& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    std::shared_ptr<int64_t> activeCPUUsage_ = nullptr;
    std::shared_ptr<float> cost_ = nullptr;
    std::shared_ptr<int64_t> diskUsage_ = nullptr;
    std::shared_ptr<string> functionName_ = nullptr;
    std::shared_ptr<int64_t> gpuUsage_ = nullptr;
    std::shared_ptr<int64_t> idleCPUUsage_ = nullptr;
    std::shared_ptr<int64_t> instanceTrafficOut_ = nullptr;
    std::shared_ptr<int64_t> invocations_ = nullptr;
    std::shared_ptr<int64_t> invokeCDNOut_ = nullptr;
    std::shared_ptr<int64_t> invokeInternetOut_ = nullptr;
    std::shared_ptr<int64_t> memoryUsage_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
