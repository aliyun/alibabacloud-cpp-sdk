// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPREPAIDINSTANCESTOCKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPREPAIDINSTANCESTOCKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribePrePaidInstanceStockResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrePaidInstanceStockResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvaliableCount, avaliableCount_);
      DARABONBA_PTR_TO_JSON(Cores, cores_);
      DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGap, resourceGap_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrePaidInstanceStockResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvaliableCount, avaliableCount_);
      DARABONBA_PTR_FROM_JSON(Cores, cores_);
      DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGap, resourceGap_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
    };
    DescribePrePaidInstanceStockResponseBody() = default ;
    DescribePrePaidInstanceStockResponseBody(const DescribePrePaidInstanceStockResponseBody &) = default ;
    DescribePrePaidInstanceStockResponseBody(DescribePrePaidInstanceStockResponseBody &&) = default ;
    DescribePrePaidInstanceStockResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrePaidInstanceStockResponseBody() = default ;
    DescribePrePaidInstanceStockResponseBody& operator=(const DescribePrePaidInstanceStockResponseBody &) = default ;
    DescribePrePaidInstanceStockResponseBody& operator=(DescribePrePaidInstanceStockResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avaliableCount_ == nullptr
        && this->cores_ == nullptr && this->dataDiskSize_ == nullptr && this->ensRegionId_ == nullptr && this->instanceSpec_ == nullptr && this->memory_ == nullptr
        && this->requestId_ == nullptr && this->resourceGap_ == nullptr && this->systemDiskSize_ == nullptr; };
    // avaliableCount Field Functions 
    bool hasAvaliableCount() const { return this->avaliableCount_ != nullptr;};
    void deleteAvaliableCount() { this->avaliableCount_ = nullptr;};
    inline int32_t getAvaliableCount() const { DARABONBA_PTR_GET_DEFAULT(avaliableCount_, 0) };
    inline DescribePrePaidInstanceStockResponseBody& setAvaliableCount(int32_t avaliableCount) { DARABONBA_PTR_SET_VALUE(avaliableCount_, avaliableCount) };


    // cores Field Functions 
    bool hasCores() const { return this->cores_ != nullptr;};
    void deleteCores() { this->cores_ = nullptr;};
    inline int32_t getCores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0) };
    inline DescribePrePaidInstanceStockResponseBody& setCores(int32_t cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline int32_t getDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
    inline DescribePrePaidInstanceStockResponseBody& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribePrePaidInstanceStockResponseBody& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline string getInstanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
    inline DescribePrePaidInstanceStockResponseBody& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline DescribePrePaidInstanceStockResponseBody& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePrePaidInstanceStockResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGap Field Functions 
    bool hasResourceGap() const { return this->resourceGap_ != nullptr;};
    void deleteResourceGap() { this->resourceGap_ = nullptr;};
    inline string getResourceGap() const { DARABONBA_PTR_GET_DEFAULT(resourceGap_, "") };
    inline DescribePrePaidInstanceStockResponseBody& setResourceGap(string resourceGap) { DARABONBA_PTR_SET_VALUE(resourceGap_, resourceGap) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline DescribePrePaidInstanceStockResponseBody& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


  protected:
    // The number of resources that you can purchase.
    shared_ptr<int32_t> avaliableCount_ {};
    // The number of CPU cores.
    shared_ptr<int32_t> cores_ {};
    // The size of the data disk.
    shared_ptr<int32_t> dataDiskSize_ {};
    // The ID of the node.
    shared_ptr<string> ensRegionId_ {};
    // The specification of the instance.
    shared_ptr<string> instanceSpec_ {};
    // The memory size. Unit: GB.
    shared_ptr<int32_t> memory_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The reason why resources are insufficient.
    shared_ptr<string> resourceGap_ {};
    // The size of the system disk.
    shared_ptr<int32_t> systemDiskSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
