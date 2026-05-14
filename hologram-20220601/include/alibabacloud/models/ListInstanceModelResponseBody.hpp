// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEMODELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEMODELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class ListInstanceModelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceModelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(instanceModelList, instanceModelList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceModelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceModelList, instanceModelList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListInstanceModelResponseBody() = default ;
    ListInstanceModelResponseBody(const ListInstanceModelResponseBody &) = default ;
    ListInstanceModelResponseBody(ListInstanceModelResponseBody &&) = default ;
    ListInstanceModelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceModelResponseBody() = default ;
    ListInstanceModelResponseBody& operator=(const ListInstanceModelResponseBody &) = default ;
    ListInstanceModelResponseBody& operator=(ListInstanceModelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceModelList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceModelList& obj) { 
        DARABONBA_PTR_TO_JSON(aiInstanceId, aiInstanceId_);
        DARABONBA_PTR_TO_JSON(aiSpec, aiSpec_);
        DARABONBA_PTR_TO_JSON(autoRenewal, autoRenewal_);
        DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(commodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(cpu, cpu_);
        DARABONBA_PTR_TO_JSON(cpuUsed, cpuUsed_);
        DARABONBA_PTR_TO_JSON(expirationTime, expirationTime_);
        DARABONBA_PTR_TO_JSON(gpu, gpu_);
        DARABONBA_PTR_TO_JSON(gpuMemory, gpuMemory_);
        DARABONBA_PTR_TO_JSON(gpuMemoryUsed, gpuMemoryUsed_);
        DARABONBA_PTR_TO_JSON(gpuUsed, gpuUsed_);
        DARABONBA_PTR_TO_JSON(holoInstanceId, holoInstanceId_);
        DARABONBA_PTR_TO_JSON(holoInstanceName, holoInstanceName_);
        DARABONBA_PTR_TO_JSON(memory, memory_);
        DARABONBA_PTR_TO_JSON(memoryUsed, memoryUsed_);
        DARABONBA_PTR_TO_JSON(nodeCount, nodeCount_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceModelList& obj) { 
        DARABONBA_PTR_FROM_JSON(aiInstanceId, aiInstanceId_);
        DARABONBA_PTR_FROM_JSON(aiSpec, aiSpec_);
        DARABONBA_PTR_FROM_JSON(autoRenewal, autoRenewal_);
        DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(commodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(cpuUsed, cpuUsed_);
        DARABONBA_PTR_FROM_JSON(expirationTime, expirationTime_);
        DARABONBA_PTR_FROM_JSON(gpu, gpu_);
        DARABONBA_PTR_FROM_JSON(gpuMemory, gpuMemory_);
        DARABONBA_PTR_FROM_JSON(gpuMemoryUsed, gpuMemoryUsed_);
        DARABONBA_PTR_FROM_JSON(gpuUsed, gpuUsed_);
        DARABONBA_PTR_FROM_JSON(holoInstanceId, holoInstanceId_);
        DARABONBA_PTR_FROM_JSON(holoInstanceName, holoInstanceName_);
        DARABONBA_PTR_FROM_JSON(memory, memory_);
        DARABONBA_PTR_FROM_JSON(memoryUsed, memoryUsed_);
        DARABONBA_PTR_FROM_JSON(nodeCount, nodeCount_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(status, status_);
      };
      InstanceModelList() = default ;
      InstanceModelList(const InstanceModelList &) = default ;
      InstanceModelList(InstanceModelList &&) = default ;
      InstanceModelList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceModelList() = default ;
      InstanceModelList& operator=(const InstanceModelList &) = default ;
      InstanceModelList& operator=(InstanceModelList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aiInstanceId_ == nullptr
        && this->aiSpec_ == nullptr && this->autoRenewal_ == nullptr && this->chargeType_ == nullptr && this->commodityCode_ == nullptr && this->cpu_ == nullptr
        && this->cpuUsed_ == nullptr && this->expirationTime_ == nullptr && this->gpu_ == nullptr && this->gpuMemory_ == nullptr && this->gpuMemoryUsed_ == nullptr
        && this->gpuUsed_ == nullptr && this->holoInstanceId_ == nullptr && this->holoInstanceName_ == nullptr && this->memory_ == nullptr && this->memoryUsed_ == nullptr
        && this->nodeCount_ == nullptr && this->regionId_ == nullptr && this->resourceType_ == nullptr && this->status_ == nullptr; };
      // aiInstanceId Field Functions 
      bool hasAiInstanceId() const { return this->aiInstanceId_ != nullptr;};
      void deleteAiInstanceId() { this->aiInstanceId_ = nullptr;};
      inline string getAiInstanceId() const { DARABONBA_PTR_GET_DEFAULT(aiInstanceId_, "") };
      inline InstanceModelList& setAiInstanceId(string aiInstanceId) { DARABONBA_PTR_SET_VALUE(aiInstanceId_, aiInstanceId) };


      // aiSpec Field Functions 
      bool hasAiSpec() const { return this->aiSpec_ != nullptr;};
      void deleteAiSpec() { this->aiSpec_ = nullptr;};
      inline string getAiSpec() const { DARABONBA_PTR_GET_DEFAULT(aiSpec_, "") };
      inline InstanceModelList& setAiSpec(string aiSpec) { DARABONBA_PTR_SET_VALUE(aiSpec_, aiSpec) };


      // autoRenewal Field Functions 
      bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
      void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
      inline bool getAutoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, false) };
      inline InstanceModelList& setAutoRenewal(bool autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline InstanceModelList& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline InstanceModelList& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline int64_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0L) };
      inline InstanceModelList& setCpu(int64_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // cpuUsed Field Functions 
      bool hasCpuUsed() const { return this->cpuUsed_ != nullptr;};
      void deleteCpuUsed() { this->cpuUsed_ = nullptr;};
      inline int64_t getCpuUsed() const { DARABONBA_PTR_GET_DEFAULT(cpuUsed_, 0L) };
      inline InstanceModelList& setCpuUsed(int64_t cpuUsed) { DARABONBA_PTR_SET_VALUE(cpuUsed_, cpuUsed) };


      // expirationTime Field Functions 
      bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
      void deleteExpirationTime() { this->expirationTime_ = nullptr;};
      inline string getExpirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, "") };
      inline InstanceModelList& setExpirationTime(string expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


      // gpu Field Functions 
      bool hasGpu() const { return this->gpu_ != nullptr;};
      void deleteGpu() { this->gpu_ = nullptr;};
      inline int64_t getGpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, 0L) };
      inline InstanceModelList& setGpu(int64_t gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


      // gpuMemory Field Functions 
      bool hasGpuMemory() const { return this->gpuMemory_ != nullptr;};
      void deleteGpuMemory() { this->gpuMemory_ = nullptr;};
      inline int64_t getGpuMemory() const { DARABONBA_PTR_GET_DEFAULT(gpuMemory_, 0L) };
      inline InstanceModelList& setGpuMemory(int64_t gpuMemory) { DARABONBA_PTR_SET_VALUE(gpuMemory_, gpuMemory) };


      // gpuMemoryUsed Field Functions 
      bool hasGpuMemoryUsed() const { return this->gpuMemoryUsed_ != nullptr;};
      void deleteGpuMemoryUsed() { this->gpuMemoryUsed_ = nullptr;};
      inline int64_t getGpuMemoryUsed() const { DARABONBA_PTR_GET_DEFAULT(gpuMemoryUsed_, 0L) };
      inline InstanceModelList& setGpuMemoryUsed(int64_t gpuMemoryUsed) { DARABONBA_PTR_SET_VALUE(gpuMemoryUsed_, gpuMemoryUsed) };


      // gpuUsed Field Functions 
      bool hasGpuUsed() const { return this->gpuUsed_ != nullptr;};
      void deleteGpuUsed() { this->gpuUsed_ = nullptr;};
      inline int64_t getGpuUsed() const { DARABONBA_PTR_GET_DEFAULT(gpuUsed_, 0L) };
      inline InstanceModelList& setGpuUsed(int64_t gpuUsed) { DARABONBA_PTR_SET_VALUE(gpuUsed_, gpuUsed) };


      // holoInstanceId Field Functions 
      bool hasHoloInstanceId() const { return this->holoInstanceId_ != nullptr;};
      void deleteHoloInstanceId() { this->holoInstanceId_ = nullptr;};
      inline string getHoloInstanceId() const { DARABONBA_PTR_GET_DEFAULT(holoInstanceId_, "") };
      inline InstanceModelList& setHoloInstanceId(string holoInstanceId) { DARABONBA_PTR_SET_VALUE(holoInstanceId_, holoInstanceId) };


      // holoInstanceName Field Functions 
      bool hasHoloInstanceName() const { return this->holoInstanceName_ != nullptr;};
      void deleteHoloInstanceName() { this->holoInstanceName_ = nullptr;};
      inline string getHoloInstanceName() const { DARABONBA_PTR_GET_DEFAULT(holoInstanceName_, "") };
      inline InstanceModelList& setHoloInstanceName(string holoInstanceName) { DARABONBA_PTR_SET_VALUE(holoInstanceName_, holoInstanceName) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int64_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
      inline InstanceModelList& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // memoryUsed Field Functions 
      bool hasMemoryUsed() const { return this->memoryUsed_ != nullptr;};
      void deleteMemoryUsed() { this->memoryUsed_ = nullptr;};
      inline int64_t getMemoryUsed() const { DARABONBA_PTR_GET_DEFAULT(memoryUsed_, 0L) };
      inline InstanceModelList& setMemoryUsed(int64_t memoryUsed) { DARABONBA_PTR_SET_VALUE(memoryUsed_, memoryUsed) };


      // nodeCount Field Functions 
      bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
      void deleteNodeCount() { this->nodeCount_ = nullptr;};
      inline int64_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0L) };
      inline InstanceModelList& setNodeCount(int64_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline InstanceModelList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline InstanceModelList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline InstanceModelList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> aiInstanceId_ {};
      shared_ptr<string> aiSpec_ {};
      shared_ptr<bool> autoRenewal_ {};
      shared_ptr<string> chargeType_ {};
      shared_ptr<string> commodityCode_ {};
      shared_ptr<int64_t> cpu_ {};
      shared_ptr<int64_t> cpuUsed_ {};
      shared_ptr<string> expirationTime_ {};
      shared_ptr<int64_t> gpu_ {};
      shared_ptr<int64_t> gpuMemory_ {};
      shared_ptr<int64_t> gpuMemoryUsed_ {};
      shared_ptr<int64_t> gpuUsed_ {};
      shared_ptr<string> holoInstanceId_ {};
      shared_ptr<string> holoInstanceName_ {};
      shared_ptr<int64_t> memory_ {};
      shared_ptr<int64_t> memoryUsed_ {};
      shared_ptr<int64_t> nodeCount_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> resourceType_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->instanceModelList_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceModelList Field Functions 
    bool hasInstanceModelList() const { return this->instanceModelList_ != nullptr;};
    void deleteInstanceModelList() { this->instanceModelList_ = nullptr;};
    inline const vector<ListInstanceModelResponseBody::InstanceModelList> & getInstanceModelList() const { DARABONBA_PTR_GET_CONST(instanceModelList_, vector<ListInstanceModelResponseBody::InstanceModelList>) };
    inline vector<ListInstanceModelResponseBody::InstanceModelList> getInstanceModelList() { DARABONBA_PTR_GET(instanceModelList_, vector<ListInstanceModelResponseBody::InstanceModelList>) };
    inline ListInstanceModelResponseBody& setInstanceModelList(const vector<ListInstanceModelResponseBody::InstanceModelList> & instanceModelList) { DARABONBA_PTR_SET_VALUE(instanceModelList_, instanceModelList) };
    inline ListInstanceModelResponseBody& setInstanceModelList(vector<ListInstanceModelResponseBody::InstanceModelList> && instanceModelList) { DARABONBA_PTR_SET_RVALUE(instanceModelList_, instanceModelList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstanceModelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListInstanceModelResponseBody::InstanceModelList>> instanceModelList_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
