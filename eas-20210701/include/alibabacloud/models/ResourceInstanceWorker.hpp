// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCEINSTANCEWORKER_HPP_
#define ALIBABACLOUD_MODELS_RESOURCEINSTANCEWORKER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ResourceInstanceWorker : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResourceInstanceWorker& obj) { 
      DARABONBA_PTR_TO_JSON(CpuLimit, cpuLimit_);
      DARABONBA_PTR_TO_JSON(CpuRequest, cpuRequest_);
      DARABONBA_PTR_TO_JSON(GpuLimit, gpuLimit_);
      DARABONBA_PTR_TO_JSON(GpuRequest, gpuRequest_);
      DARABONBA_PTR_TO_JSON(MemoryLimit, memoryLimit_);
      DARABONBA_PTR_TO_JSON(MemoryRquest, memoryRquest_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Ready, ready_);
      DARABONBA_PTR_TO_JSON(RestartCount, restartCount_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ResourceInstanceWorker& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuLimit, cpuLimit_);
      DARABONBA_PTR_FROM_JSON(CpuRequest, cpuRequest_);
      DARABONBA_PTR_FROM_JSON(GpuLimit, gpuLimit_);
      DARABONBA_PTR_FROM_JSON(GpuRequest, gpuRequest_);
      DARABONBA_PTR_FROM_JSON(MemoryLimit, memoryLimit_);
      DARABONBA_PTR_FROM_JSON(MemoryRquest, memoryRquest_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Ready, ready_);
      DARABONBA_PTR_FROM_JSON(RestartCount, restartCount_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ResourceInstanceWorker() = default ;
    ResourceInstanceWorker(const ResourceInstanceWorker &) = default ;
    ResourceInstanceWorker(ResourceInstanceWorker &&) = default ;
    ResourceInstanceWorker(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResourceInstanceWorker() = default ;
    ResourceInstanceWorker& operator=(const ResourceInstanceWorker &) = default ;
    ResourceInstanceWorker& operator=(ResourceInstanceWorker &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpuLimit_ == nullptr
        && this->cpuRequest_ == nullptr && this->gpuLimit_ == nullptr && this->gpuRequest_ == nullptr && this->memoryLimit_ == nullptr && this->memoryRquest_ == nullptr
        && this->name_ == nullptr && this->ready_ == nullptr && this->restartCount_ == nullptr && this->serviceName_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr; };
    // cpuLimit Field Functions 
    bool hasCpuLimit() const { return this->cpuLimit_ != nullptr;};
    void deleteCpuLimit() { this->cpuLimit_ = nullptr;};
    inline int32_t getCpuLimit() const { DARABONBA_PTR_GET_DEFAULT(cpuLimit_, 0) };
    inline ResourceInstanceWorker& setCpuLimit(int32_t cpuLimit) { DARABONBA_PTR_SET_VALUE(cpuLimit_, cpuLimit) };


    // cpuRequest Field Functions 
    bool hasCpuRequest() const { return this->cpuRequest_ != nullptr;};
    void deleteCpuRequest() { this->cpuRequest_ = nullptr;};
    inline int32_t getCpuRequest() const { DARABONBA_PTR_GET_DEFAULT(cpuRequest_, 0) };
    inline ResourceInstanceWorker& setCpuRequest(int32_t cpuRequest) { DARABONBA_PTR_SET_VALUE(cpuRequest_, cpuRequest) };


    // gpuLimit Field Functions 
    bool hasGpuLimit() const { return this->gpuLimit_ != nullptr;};
    void deleteGpuLimit() { this->gpuLimit_ = nullptr;};
    inline int32_t getGpuLimit() const { DARABONBA_PTR_GET_DEFAULT(gpuLimit_, 0) };
    inline ResourceInstanceWorker& setGpuLimit(int32_t gpuLimit) { DARABONBA_PTR_SET_VALUE(gpuLimit_, gpuLimit) };


    // gpuRequest Field Functions 
    bool hasGpuRequest() const { return this->gpuRequest_ != nullptr;};
    void deleteGpuRequest() { this->gpuRequest_ = nullptr;};
    inline int32_t getGpuRequest() const { DARABONBA_PTR_GET_DEFAULT(gpuRequest_, 0) };
    inline ResourceInstanceWorker& setGpuRequest(int32_t gpuRequest) { DARABONBA_PTR_SET_VALUE(gpuRequest_, gpuRequest) };


    // memoryLimit Field Functions 
    bool hasMemoryLimit() const { return this->memoryLimit_ != nullptr;};
    void deleteMemoryLimit() { this->memoryLimit_ = nullptr;};
    inline int32_t getMemoryLimit() const { DARABONBA_PTR_GET_DEFAULT(memoryLimit_, 0) };
    inline ResourceInstanceWorker& setMemoryLimit(int32_t memoryLimit) { DARABONBA_PTR_SET_VALUE(memoryLimit_, memoryLimit) };


    // memoryRquest Field Functions 
    bool hasMemoryRquest() const { return this->memoryRquest_ != nullptr;};
    void deleteMemoryRquest() { this->memoryRquest_ = nullptr;};
    inline int32_t getMemoryRquest() const { DARABONBA_PTR_GET_DEFAULT(memoryRquest_, 0) };
    inline ResourceInstanceWorker& setMemoryRquest(int32_t memoryRquest) { DARABONBA_PTR_SET_VALUE(memoryRquest_, memoryRquest) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ResourceInstanceWorker& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ready Field Functions 
    bool hasReady() const { return this->ready_ != nullptr;};
    void deleteReady() { this->ready_ = nullptr;};
    inline bool getReady() const { DARABONBA_PTR_GET_DEFAULT(ready_, false) };
    inline ResourceInstanceWorker& setReady(bool ready) { DARABONBA_PTR_SET_VALUE(ready_, ready) };


    // restartCount Field Functions 
    bool hasRestartCount() const { return this->restartCount_ != nullptr;};
    void deleteRestartCount() { this->restartCount_ = nullptr;};
    inline int32_t getRestartCount() const { DARABONBA_PTR_GET_DEFAULT(restartCount_, 0) };
    inline ResourceInstanceWorker& setRestartCount(int32_t restartCount) { DARABONBA_PTR_SET_VALUE(restartCount_, restartCount) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ResourceInstanceWorker& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ResourceInstanceWorker& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ResourceInstanceWorker& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<int32_t> cpuLimit_ {};
    shared_ptr<int32_t> cpuRequest_ {};
    shared_ptr<int32_t> gpuLimit_ {};
    shared_ptr<int32_t> gpuRequest_ {};
    shared_ptr<int32_t> memoryLimit_ {};
    shared_ptr<int32_t> memoryRquest_ {};
    shared_ptr<string> name_ {};
    shared_ptr<bool> ready_ {};
    shared_ptr<int32_t> restartCount_ {};
    shared_ptr<string> serviceName_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
