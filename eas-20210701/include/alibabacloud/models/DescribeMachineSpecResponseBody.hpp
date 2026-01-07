// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMACHINESPECRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMACHINESPECRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeMachineSpecResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMachineSpecResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceMetas, instanceMetas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Types, types_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMachineSpecResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceMetas, instanceMetas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Types, types_);
    };
    DescribeMachineSpecResponseBody() = default ;
    DescribeMachineSpecResponseBody(const DescribeMachineSpecResponseBody &) = default ;
    DescribeMachineSpecResponseBody(DescribeMachineSpecResponseBody &&) = default ;
    DescribeMachineSpecResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMachineSpecResponseBody() = default ;
    DescribeMachineSpecResponseBody& operator=(const DescribeMachineSpecResponseBody &) = default ;
    DescribeMachineSpecResponseBody& operator=(DescribeMachineSpecResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Types : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Types& obj) { 
        DARABONBA_PTR_TO_JSON(CPU, CPU_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
      };
      friend void from_json(const Darabonba::Json& j, Types& obj) { 
        DARABONBA_PTR_FROM_JSON(CPU, CPU_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
      };
      Types() = default ;
      Types(const Types &) = default ;
      Types(Types &&) = default ;
      Types(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Types() = default ;
      Types& operator=(const Types &) = default ;
      Types& operator=(Types &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->CPU_ == nullptr
        && this->memory_ == nullptr; };
      // CPU Field Functions 
      bool hasCPU() const { return this->CPU_ != nullptr;};
      void deleteCPU() { this->CPU_ = nullptr;};
      inline int32_t getCPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, 0) };
      inline Types& setCPU(int32_t CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline const vector<int32_t> & getMemory() const { DARABONBA_PTR_GET_CONST(memory_, vector<int32_t>) };
      inline vector<int32_t> getMemory() { DARABONBA_PTR_GET(memory_, vector<int32_t>) };
      inline Types& setMemory(const vector<int32_t> & memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };
      inline Types& setMemory(vector<int32_t> && memory) { DARABONBA_PTR_SET_RVALUE(memory_, memory) };


    protected:
      // Valid values:
      shared_ptr<int32_t> CPU_ {};
      // The optional values for memory when CPU is set to a specific value as above.
      shared_ptr<vector<int32_t>> memory_ {};
    };

    class InstanceMetas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceMetas& obj) { 
        DARABONBA_PTR_TO_JSON(CPU, CPU_);
        DARABONBA_PTR_TO_JSON(GPU, GPU_);
        DARABONBA_PTR_TO_JSON(GPUAmount, GPUAmount_);
        DARABONBA_PTR_TO_JSON(GPUMemory, GPUMemory_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(IsAvailable, isAvailable_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(NonProtectSpotDiscount, nonProtectSpotDiscount_);
        DARABONBA_PTR_TO_JSON(SpotDiscount, spotDiscount_);
        DARABONBA_PTR_TO_JSON(StockStatus, stockStatus_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceMetas& obj) { 
        DARABONBA_PTR_FROM_JSON(CPU, CPU_);
        DARABONBA_PTR_FROM_JSON(GPU, GPU_);
        DARABONBA_PTR_FROM_JSON(GPUAmount, GPUAmount_);
        DARABONBA_PTR_FROM_JSON(GPUMemory, GPUMemory_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(IsAvailable, isAvailable_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(NonProtectSpotDiscount, nonProtectSpotDiscount_);
        DARABONBA_PTR_FROM_JSON(SpotDiscount, spotDiscount_);
        DARABONBA_PTR_FROM_JSON(StockStatus, stockStatus_);
        DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      };
      InstanceMetas() = default ;
      InstanceMetas(const InstanceMetas &) = default ;
      InstanceMetas(InstanceMetas &&) = default ;
      InstanceMetas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceMetas() = default ;
      InstanceMetas& operator=(const InstanceMetas &) = default ;
      InstanceMetas& operator=(InstanceMetas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->CPU_ == nullptr
        && this->GPU_ == nullptr && this->GPUAmount_ == nullptr && this->GPUMemory_ == nullptr && this->instanceType_ == nullptr && this->isAvailable_ == nullptr
        && this->memory_ == nullptr && this->nonProtectSpotDiscount_ == nullptr && this->spotDiscount_ == nullptr && this->stockStatus_ == nullptr && this->vendor_ == nullptr; };
      // CPU Field Functions 
      bool hasCPU() const { return this->CPU_ != nullptr;};
      void deleteCPU() { this->CPU_ = nullptr;};
      inline int32_t getCPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, 0) };
      inline InstanceMetas& setCPU(int32_t CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


      // GPU Field Functions 
      bool hasGPU() const { return this->GPU_ != nullptr;};
      void deleteGPU() { this->GPU_ = nullptr;};
      inline string getGPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, "") };
      inline InstanceMetas& setGPU(string GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


      // GPUAmount Field Functions 
      bool hasGPUAmount() const { return this->GPUAmount_ != nullptr;};
      void deleteGPUAmount() { this->GPUAmount_ = nullptr;};
      inline int32_t getGPUAmount() const { DARABONBA_PTR_GET_DEFAULT(GPUAmount_, 0) };
      inline InstanceMetas& setGPUAmount(int32_t GPUAmount) { DARABONBA_PTR_SET_VALUE(GPUAmount_, GPUAmount) };


      // GPUMemory Field Functions 
      bool hasGPUMemory() const { return this->GPUMemory_ != nullptr;};
      void deleteGPUMemory() { this->GPUMemory_ = nullptr;};
      inline float getGPUMemory() const { DARABONBA_PTR_GET_DEFAULT(GPUMemory_, 0.0) };
      inline InstanceMetas& setGPUMemory(float GPUMemory) { DARABONBA_PTR_SET_VALUE(GPUMemory_, GPUMemory) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline InstanceMetas& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // isAvailable Field Functions 
      bool hasIsAvailable() const { return this->isAvailable_ != nullptr;};
      void deleteIsAvailable() { this->isAvailable_ = nullptr;};
      inline bool getIsAvailable() const { DARABONBA_PTR_GET_DEFAULT(isAvailable_, false) };
      inline InstanceMetas& setIsAvailable(bool isAvailable) { DARABONBA_PTR_SET_VALUE(isAvailable_, isAvailable) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline float getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
      inline InstanceMetas& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // nonProtectSpotDiscount Field Functions 
      bool hasNonProtectSpotDiscount() const { return this->nonProtectSpotDiscount_ != nullptr;};
      void deleteNonProtectSpotDiscount() { this->nonProtectSpotDiscount_ = nullptr;};
      inline float getNonProtectSpotDiscount() const { DARABONBA_PTR_GET_DEFAULT(nonProtectSpotDiscount_, 0.0) };
      inline InstanceMetas& setNonProtectSpotDiscount(float nonProtectSpotDiscount) { DARABONBA_PTR_SET_VALUE(nonProtectSpotDiscount_, nonProtectSpotDiscount) };


      // spotDiscount Field Functions 
      bool hasSpotDiscount() const { return this->spotDiscount_ != nullptr;};
      void deleteSpotDiscount() { this->spotDiscount_ = nullptr;};
      inline float getSpotDiscount() const { DARABONBA_PTR_GET_DEFAULT(spotDiscount_, 0.0) };
      inline InstanceMetas& setSpotDiscount(float spotDiscount) { DARABONBA_PTR_SET_VALUE(spotDiscount_, spotDiscount) };


      // stockStatus Field Functions 
      bool hasStockStatus() const { return this->stockStatus_ != nullptr;};
      void deleteStockStatus() { this->stockStatus_ = nullptr;};
      inline string getStockStatus() const { DARABONBA_PTR_GET_DEFAULT(stockStatus_, "") };
      inline InstanceMetas& setStockStatus(string stockStatus) { DARABONBA_PTR_SET_VALUE(stockStatus_, stockStatus) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
      inline InstanceMetas& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    protected:
      // The number of CPU cores in the instance type.
      shared_ptr<int32_t> CPU_ {};
      // The GPU type in the instance type. If the instance type is not a GPU-based instance type, this parameter does not exist.
      shared_ptr<string> GPU_ {};
      // The number of GPUs in the instance type.
      shared_ptr<int32_t> GPUAmount_ {};
      // The GPU memory in the instance type. Unit: GB.
      shared_ptr<float> GPUMemory_ {};
      // The name of the instance type.
      shared_ptr<string> instanceType_ {};
      // Indicates whether the instance type is available.
      shared_ptr<bool> isAvailable_ {};
      // The memory size in the instance type. Unit: GB.
      shared_ptr<float> memory_ {};
      // The minimum discount that can be accepted when the preemptible instance type does not include a usage duration. 0.1 indicates one fold. If this parameter is not returned, the bidding feature is not supported.
      shared_ptr<float> nonProtectSpotDiscount_ {};
      // The minimum discount that can be accepted when the preemptible instance type has the 1-hour protection duration. 0.1 indicates one fold. If this parameter is not returned, the bidding feature is not supported.
      shared_ptr<float> spotDiscount_ {};
      // The inventory status of the instance type.
      // 
      // Valid values:
      // 
      // *   WithStock
      // *   ClosedWithStock
      // *   NoStock
      shared_ptr<string> stockStatus_ {};
      // The source of the instance type.
      // 
      // Valid values:
      // 
      // *   ECS
      // *   BareMetal
      // *   Lingjun
      shared_ptr<string> vendor_ {};
    };

    virtual bool empty() const override { return this->instanceMetas_ == nullptr
        && this->requestId_ == nullptr && this->types_ == nullptr; };
    // instanceMetas Field Functions 
    bool hasInstanceMetas() const { return this->instanceMetas_ != nullptr;};
    void deleteInstanceMetas() { this->instanceMetas_ = nullptr;};
    inline const vector<DescribeMachineSpecResponseBody::InstanceMetas> & getInstanceMetas() const { DARABONBA_PTR_GET_CONST(instanceMetas_, vector<DescribeMachineSpecResponseBody::InstanceMetas>) };
    inline vector<DescribeMachineSpecResponseBody::InstanceMetas> getInstanceMetas() { DARABONBA_PTR_GET(instanceMetas_, vector<DescribeMachineSpecResponseBody::InstanceMetas>) };
    inline DescribeMachineSpecResponseBody& setInstanceMetas(const vector<DescribeMachineSpecResponseBody::InstanceMetas> & instanceMetas) { DARABONBA_PTR_SET_VALUE(instanceMetas_, instanceMetas) };
    inline DescribeMachineSpecResponseBody& setInstanceMetas(vector<DescribeMachineSpecResponseBody::InstanceMetas> && instanceMetas) { DARABONBA_PTR_SET_RVALUE(instanceMetas_, instanceMetas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMachineSpecResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline const vector<DescribeMachineSpecResponseBody::Types> & getTypes() const { DARABONBA_PTR_GET_CONST(types_, vector<DescribeMachineSpecResponseBody::Types>) };
    inline vector<DescribeMachineSpecResponseBody::Types> getTypes() { DARABONBA_PTR_GET(types_, vector<DescribeMachineSpecResponseBody::Types>) };
    inline DescribeMachineSpecResponseBody& setTypes(const vector<DescribeMachineSpecResponseBody::Types> & types) { DARABONBA_PTR_SET_VALUE(types_, types) };
    inline DescribeMachineSpecResponseBody& setTypes(vector<DescribeMachineSpecResponseBody::Types> && types) { DARABONBA_PTR_SET_RVALUE(types_, types) };


  protected:
    // The instance types when the resources are specified.
    shared_ptr<vector<DescribeMachineSpecResponseBody::InstanceMetas>> instanceMetas_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The values that can be supported when the number of CPUs and memory size are specified for deployment.
    shared_ptr<vector<DescribeMachineSpecResponseBody::Types>> types_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
