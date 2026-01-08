// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTECSSPECSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTECSSPECSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class ListEcsSpecsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEcsSpecsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EcsSpecs, ecsSpecs_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListEcsSpecsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EcsSpecs, ecsSpecs_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListEcsSpecsResponseBody() = default ;
    ListEcsSpecsResponseBody(const ListEcsSpecsResponseBody &) = default ;
    ListEcsSpecsResponseBody(ListEcsSpecsResponseBody &&) = default ;
    ListEcsSpecsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEcsSpecsResponseBody() = default ;
    ListEcsSpecsResponseBody& operator=(const ListEcsSpecsResponseBody &) = default ;
    ListEcsSpecsResponseBody& operator=(ListEcsSpecsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EcsSpecs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EcsSpecs& obj) { 
        DARABONBA_PTR_TO_JSON(AcceleratorType, acceleratorType_);
        DARABONBA_PTR_TO_JSON(CPU, CPU_);
        DARABONBA_PTR_TO_JSON(Currency, currency_);
        DARABONBA_PTR_TO_JSON(GPU, GPU_);
        DARABONBA_PTR_TO_JSON(GPUMemorySize, GPUMemorySize_);
        DARABONBA_PTR_TO_JSON(GPUType, GPUType_);
        DARABONBA_PTR_TO_JSON(InstanceBandwidthRx, instanceBandwidthRx_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(IsAvailable, isAvailable_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(Price, price_);
        DARABONBA_PTR_TO_JSON(SpotStockStatus, spotStockStatus_);
        DARABONBA_PTR_TO_JSON(SystemDiskCapacity, systemDiskCapacity_);
      };
      friend void from_json(const Darabonba::Json& j, EcsSpecs& obj) { 
        DARABONBA_PTR_FROM_JSON(AcceleratorType, acceleratorType_);
        DARABONBA_PTR_FROM_JSON(CPU, CPU_);
        DARABONBA_PTR_FROM_JSON(Currency, currency_);
        DARABONBA_PTR_FROM_JSON(GPU, GPU_);
        DARABONBA_PTR_FROM_JSON(GPUMemorySize, GPUMemorySize_);
        DARABONBA_PTR_FROM_JSON(GPUType, GPUType_);
        DARABONBA_PTR_FROM_JSON(InstanceBandwidthRx, instanceBandwidthRx_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(IsAvailable, isAvailable_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(Price, price_);
        DARABONBA_PTR_FROM_JSON(SpotStockStatus, spotStockStatus_);
        DARABONBA_PTR_FROM_JSON(SystemDiskCapacity, systemDiskCapacity_);
      };
      EcsSpecs() = default ;
      EcsSpecs(const EcsSpecs &) = default ;
      EcsSpecs(EcsSpecs &&) = default ;
      EcsSpecs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EcsSpecs() = default ;
      EcsSpecs& operator=(const EcsSpecs &) = default ;
      EcsSpecs& operator=(EcsSpecs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Labels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Labels& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Labels& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Labels() = default ;
        Labels(const Labels &) = default ;
        Labels(Labels &&) = default ;
        Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Labels() = default ;
        Labels& operator=(const Labels &) = default ;
        Labels& operator=(Labels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Labels& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Labels& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The label key added to the ECS specification.
        shared_ptr<string> key_ {};
        // The label value added to the ECS specification.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->acceleratorType_ == nullptr
        && this->CPU_ == nullptr && this->currency_ == nullptr && this->GPU_ == nullptr && this->GPUMemorySize_ == nullptr && this->GPUType_ == nullptr
        && this->instanceBandwidthRx_ == nullptr && this->instanceType_ == nullptr && this->isAvailable_ == nullptr && this->labels_ == nullptr && this->memory_ == nullptr
        && this->price_ == nullptr && this->spotStockStatus_ == nullptr && this->systemDiskCapacity_ == nullptr; };
      // acceleratorType Field Functions 
      bool hasAcceleratorType() const { return this->acceleratorType_ != nullptr;};
      void deleteAcceleratorType() { this->acceleratorType_ = nullptr;};
      inline string getAcceleratorType() const { DARABONBA_PTR_GET_DEFAULT(acceleratorType_, "") };
      inline EcsSpecs& setAcceleratorType(string acceleratorType) { DARABONBA_PTR_SET_VALUE(acceleratorType_, acceleratorType) };


      // CPU Field Functions 
      bool hasCPU() const { return this->CPU_ != nullptr;};
      void deleteCPU() { this->CPU_ = nullptr;};
      inline int64_t getCPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, 0L) };
      inline EcsSpecs& setCPU(int64_t CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline EcsSpecs& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // GPU Field Functions 
      bool hasGPU() const { return this->GPU_ != nullptr;};
      void deleteGPU() { this->GPU_ = nullptr;};
      inline int64_t getGPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, 0L) };
      inline EcsSpecs& setGPU(int64_t GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


      // GPUMemorySize Field Functions 
      bool hasGPUMemorySize() const { return this->GPUMemorySize_ != nullptr;};
      void deleteGPUMemorySize() { this->GPUMemorySize_ = nullptr;};
      inline float getGPUMemorySize() const { DARABONBA_PTR_GET_DEFAULT(GPUMemorySize_, 0.0) };
      inline EcsSpecs& setGPUMemorySize(float GPUMemorySize) { DARABONBA_PTR_SET_VALUE(GPUMemorySize_, GPUMemorySize) };


      // GPUType Field Functions 
      bool hasGPUType() const { return this->GPUType_ != nullptr;};
      void deleteGPUType() { this->GPUType_ = nullptr;};
      inline string getGPUType() const { DARABONBA_PTR_GET_DEFAULT(GPUType_, "") };
      inline EcsSpecs& setGPUType(string GPUType) { DARABONBA_PTR_SET_VALUE(GPUType_, GPUType) };


      // instanceBandwidthRx Field Functions 
      bool hasInstanceBandwidthRx() const { return this->instanceBandwidthRx_ != nullptr;};
      void deleteInstanceBandwidthRx() { this->instanceBandwidthRx_ = nullptr;};
      inline int64_t getInstanceBandwidthRx() const { DARABONBA_PTR_GET_DEFAULT(instanceBandwidthRx_, 0L) };
      inline EcsSpecs& setInstanceBandwidthRx(int64_t instanceBandwidthRx) { DARABONBA_PTR_SET_VALUE(instanceBandwidthRx_, instanceBandwidthRx) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline EcsSpecs& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // isAvailable Field Functions 
      bool hasIsAvailable() const { return this->isAvailable_ != nullptr;};
      void deleteIsAvailable() { this->isAvailable_ = nullptr;};
      inline bool getIsAvailable() const { DARABONBA_PTR_GET_DEFAULT(isAvailable_, false) };
      inline EcsSpecs& setIsAvailable(bool isAvailable) { DARABONBA_PTR_SET_VALUE(isAvailable_, isAvailable) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<EcsSpecs::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<EcsSpecs::Labels>) };
      inline vector<EcsSpecs::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<EcsSpecs::Labels>) };
      inline EcsSpecs& setLabels(const vector<EcsSpecs::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline EcsSpecs& setLabels(vector<EcsSpecs::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline float getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
      inline EcsSpecs& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline double getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
      inline EcsSpecs& setPrice(double price) { DARABONBA_PTR_SET_VALUE(price_, price) };


      // spotStockStatus Field Functions 
      bool hasSpotStockStatus() const { return this->spotStockStatus_ != nullptr;};
      void deleteSpotStockStatus() { this->spotStockStatus_ = nullptr;};
      inline string getSpotStockStatus() const { DARABONBA_PTR_GET_DEFAULT(spotStockStatus_, "") };
      inline EcsSpecs& setSpotStockStatus(string spotStockStatus) { DARABONBA_PTR_SET_VALUE(spotStockStatus_, spotStockStatus) };


      // systemDiskCapacity Field Functions 
      bool hasSystemDiskCapacity() const { return this->systemDiskCapacity_ != nullptr;};
      void deleteSystemDiskCapacity() { this->systemDiskCapacity_ = nullptr;};
      inline int64_t getSystemDiskCapacity() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCapacity_, 0L) };
      inline EcsSpecs& setSystemDiskCapacity(int64_t systemDiskCapacity) { DARABONBA_PTR_SET_VALUE(systemDiskCapacity_, systemDiskCapacity) };


    protected:
      // The accelerator type.
      shared_ptr<string> acceleratorType_ {};
      // The number of vCPUs.
      shared_ptr<int64_t> CPU_ {};
      // The currency unit.
      shared_ptr<string> currency_ {};
      // The number of GPUs.
      shared_ptr<int64_t> GPU_ {};
      shared_ptr<float> GPUMemorySize_ {};
      // The GPU type. Valid values:
      // 
      // *   V100
      // *   A100
      // *   A10
      // *   T4
      // *   P100
      shared_ptr<string> GPUType_ {};
      // The inbound bandwidth of the instance.
      shared_ptr<int64_t> instanceBandwidthRx_ {};
      // The instance type.
      shared_ptr<string> instanceType_ {};
      // Indicates whether the resource was available.
      shared_ptr<bool> isAvailable_ {};
      // The labels of the ECS specification.
      shared_ptr<vector<EcsSpecs::Labels>> labels_ {};
      // The memory size. Unit: GB.
      shared_ptr<float> memory_ {};
      // The price.
      shared_ptr<double> price_ {};
      shared_ptr<string> spotStockStatus_ {};
      // The size of the system disk. Unit: GB.
      shared_ptr<int64_t> systemDiskCapacity_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->ecsSpecs_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListEcsSpecsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // ecsSpecs Field Functions 
    bool hasEcsSpecs() const { return this->ecsSpecs_ != nullptr;};
    void deleteEcsSpecs() { this->ecsSpecs_ = nullptr;};
    inline const vector<ListEcsSpecsResponseBody::EcsSpecs> & getEcsSpecs() const { DARABONBA_PTR_GET_CONST(ecsSpecs_, vector<ListEcsSpecsResponseBody::EcsSpecs>) };
    inline vector<ListEcsSpecsResponseBody::EcsSpecs> getEcsSpecs() { DARABONBA_PTR_GET(ecsSpecs_, vector<ListEcsSpecsResponseBody::EcsSpecs>) };
    inline ListEcsSpecsResponseBody& setEcsSpecs(const vector<ListEcsSpecsResponseBody::EcsSpecs> & ecsSpecs) { DARABONBA_PTR_SET_VALUE(ecsSpecs_, ecsSpecs) };
    inline ListEcsSpecsResponseBody& setEcsSpecs(vector<ListEcsSpecsResponseBody::EcsSpecs> && ecsSpecs) { DARABONBA_PTR_SET_RVALUE(ecsSpecs_, ecsSpecs) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListEcsSpecsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListEcsSpecsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEcsSpecsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListEcsSpecsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListEcsSpecsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The status code. Valid values:
    // 
    // *   InternalError: an internal error. All errors, except for parameter validation errors, are classified as internal errors.
    // *   ValidationError: a parameter validation error.
    shared_ptr<string> code_ {};
    // The specifications of the ECS instances returned on this page.
    shared_ptr<vector<ListEcsSpecsResponseBody::EcsSpecs>> ecsSpecs_ {};
    // The HTTP status code. Valid values:
    // 
    // *   400
    // *   404
    shared_ptr<int32_t> httpStatusCode_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
    // The total number of ECS instances.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
