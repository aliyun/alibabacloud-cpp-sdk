// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRESOURCESTATICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYRESOURCESTATICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class QueryResourceStaticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryResourceStaticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryResourceStaticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    QueryResourceStaticsResponseBody() = default ;
    QueryResourceStaticsResponseBody(const QueryResourceStaticsResponseBody &) = default ;
    QueryResourceStaticsResponseBody(QueryResourceStaticsResponseBody &&) = default ;
    QueryResourceStaticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryResourceStaticsResponseBody() = default ;
    QueryResourceStaticsResponseBody& operator=(const QueryResourceStaticsResponseBody &) = default ;
    QueryResourceStaticsResponseBody& operator=(QueryResourceStaticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(RealTimeRes, realTimeRes_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(RealTimeRes, realTimeRes_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Summary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Summary& obj) { 
          DARABONBA_PTR_TO_JSON(ActiveCpu, activeCpu_);
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(Cu, cu_);
          DARABONBA_PTR_TO_JSON(EphemeralStorage, ephemeralStorage_);
          DARABONBA_PTR_TO_JSON(GpuA10, gpuA10_);
          DARABONBA_PTR_TO_JSON(GpuPpu810e, gpuPpu810e_);
          DARABONBA_PTR_TO_JSON(IdleCpu, idleCpu_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
        };
        friend void from_json(const Darabonba::Json& j, Summary& obj) { 
          DARABONBA_PTR_FROM_JSON(ActiveCpu, activeCpu_);
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(Cu, cu_);
          DARABONBA_PTR_FROM_JSON(EphemeralStorage, ephemeralStorage_);
          DARABONBA_PTR_FROM_JSON(GpuA10, gpuA10_);
          DARABONBA_PTR_FROM_JSON(GpuPpu810e, gpuPpu810e_);
          DARABONBA_PTR_FROM_JSON(IdleCpu, idleCpu_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
        };
        Summary() = default ;
        Summary(const Summary &) = default ;
        Summary(Summary &&) = default ;
        Summary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Summary() = default ;
        Summary& operator=(const Summary &) = default ;
        Summary& operator=(Summary &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->activeCpu_ == nullptr
        && this->cpu_ == nullptr && this->cu_ == nullptr && this->ephemeralStorage_ == nullptr && this->gpuA10_ == nullptr && this->gpuPpu810e_ == nullptr
        && this->idleCpu_ == nullptr && this->memory_ == nullptr; };
        // activeCpu Field Functions 
        bool hasActiveCpu() const { return this->activeCpu_ != nullptr;};
        void deleteActiveCpu() { this->activeCpu_ = nullptr;};
        inline float getActiveCpu() const { DARABONBA_PTR_GET_DEFAULT(activeCpu_, 0.0) };
        inline Summary& setActiveCpu(float activeCpu) { DARABONBA_PTR_SET_VALUE(activeCpu_, activeCpu) };


        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline float getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
        inline Summary& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // cu Field Functions 
        bool hasCu() const { return this->cu_ != nullptr;};
        void deleteCu() { this->cu_ = nullptr;};
        inline float getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0.0) };
        inline Summary& setCu(float cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


        // ephemeralStorage Field Functions 
        bool hasEphemeralStorage() const { return this->ephemeralStorage_ != nullptr;};
        void deleteEphemeralStorage() { this->ephemeralStorage_ = nullptr;};
        inline float getEphemeralStorage() const { DARABONBA_PTR_GET_DEFAULT(ephemeralStorage_, 0.0) };
        inline Summary& setEphemeralStorage(float ephemeralStorage) { DARABONBA_PTR_SET_VALUE(ephemeralStorage_, ephemeralStorage) };


        // gpuA10 Field Functions 
        bool hasGpuA10() const { return this->gpuA10_ != nullptr;};
        void deleteGpuA10() { this->gpuA10_ = nullptr;};
        inline float getGpuA10() const { DARABONBA_PTR_GET_DEFAULT(gpuA10_, 0.0) };
        inline Summary& setGpuA10(float gpuA10) { DARABONBA_PTR_SET_VALUE(gpuA10_, gpuA10) };


        // gpuPpu810e Field Functions 
        bool hasGpuPpu810e() const { return this->gpuPpu810e_ != nullptr;};
        void deleteGpuPpu810e() { this->gpuPpu810e_ = nullptr;};
        inline float getGpuPpu810e() const { DARABONBA_PTR_GET_DEFAULT(gpuPpu810e_, 0.0) };
        inline Summary& setGpuPpu810e(float gpuPpu810e) { DARABONBA_PTR_SET_VALUE(gpuPpu810e_, gpuPpu810e) };


        // idleCpu Field Functions 
        bool hasIdleCpu() const { return this->idleCpu_ != nullptr;};
        void deleteIdleCpu() { this->idleCpu_ = nullptr;};
        inline float getIdleCpu() const { DARABONBA_PTR_GET_DEFAULT(idleCpu_, 0.0) };
        inline Summary& setIdleCpu(float idleCpu) { DARABONBA_PTR_SET_VALUE(idleCpu_, idleCpu) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline float getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
        inline Summary& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      protected:
        // The usage of active vCPU. Unit: Core*min.
        shared_ptr<float> activeCpu_ {};
        // The CPU usage. Unit: core per minute.
        shared_ptr<float> cpu_ {};
        // The CU usage.
        shared_ptr<float> cu_ {};
        // The storage size of the temporary storage space. Unit: GiB.
        shared_ptr<float> ephemeralStorage_ {};
        shared_ptr<float> gpuA10_ {};
        shared_ptr<float> gpuPpu810e_ {};
        // The usage of idle CPU. Unit: Core*min.
        shared_ptr<float> idleCpu_ {};
        // The memory usage. Unit: GiB per minute.
        shared_ptr<float> memory_ {};
      };

      class RealTimeRes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RealTimeRes& obj) { 
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(EphemeralStorage, ephemeralStorage_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
        };
        friend void from_json(const Darabonba::Json& j, RealTimeRes& obj) { 
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(EphemeralStorage, ephemeralStorage_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
        };
        RealTimeRes() = default ;
        RealTimeRes(const RealTimeRes &) = default ;
        RealTimeRes(RealTimeRes &&) = default ;
        RealTimeRes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RealTimeRes() = default ;
        RealTimeRes& operator=(const RealTimeRes &) = default ;
        RealTimeRes& operator=(RealTimeRes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpu_ == nullptr
        && this->ephemeralStorage_ == nullptr && this->memory_ == nullptr; };
        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline float getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
        inline RealTimeRes& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // ephemeralStorage Field Functions 
        bool hasEphemeralStorage() const { return this->ephemeralStorage_ != nullptr;};
        void deleteEphemeralStorage() { this->ephemeralStorage_ = nullptr;};
        inline float getEphemeralStorage() const { DARABONBA_PTR_GET_DEFAULT(ephemeralStorage_, 0.0) };
        inline RealTimeRes& setEphemeralStorage(float ephemeralStorage) { DARABONBA_PTR_SET_VALUE(ephemeralStorage_, ephemeralStorage) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline float getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
        inline RealTimeRes& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      protected:
        // The CPU usage. Unit: core per minute.
        shared_ptr<float> cpu_ {};
        // The storage size of the temporary storage space. Unit: GiB.
        shared_ptr<float> ephemeralStorage_ {};
        // The memory usage. Unit: GiB per minute.
        shared_ptr<float> memory_ {};
      };

      virtual bool empty() const override { return this->realTimeRes_ == nullptr
        && this->summary_ == nullptr; };
      // realTimeRes Field Functions 
      bool hasRealTimeRes() const { return this->realTimeRes_ != nullptr;};
      void deleteRealTimeRes() { this->realTimeRes_ = nullptr;};
      inline const Data::RealTimeRes & getRealTimeRes() const { DARABONBA_PTR_GET_CONST(realTimeRes_, Data::RealTimeRes) };
      inline Data::RealTimeRes getRealTimeRes() { DARABONBA_PTR_GET(realTimeRes_, Data::RealTimeRes) };
      inline Data& setRealTimeRes(const Data::RealTimeRes & realTimeRes) { DARABONBA_PTR_SET_VALUE(realTimeRes_, realTimeRes) };
      inline Data& setRealTimeRes(Data::RealTimeRes && realTimeRes) { DARABONBA_PTR_SET_RVALUE(realTimeRes_, realTimeRes) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline const Data::Summary & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, Data::Summary) };
      inline Data::Summary getSummary() { DARABONBA_PTR_GET(summary_, Data::Summary) };
      inline Data& setSummary(const Data::Summary & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
      inline Data& setSummary(Data::Summary && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


    protected:
      // The real-time resource usage.
      shared_ptr<Data::RealTimeRes> realTimeRes_ {};
      // The resource usage of the current month.
      shared_ptr<Data::Summary> summary_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryResourceStaticsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryResourceStaticsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryResourceStaticsResponseBody::Data) };
    inline QueryResourceStaticsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryResourceStaticsResponseBody::Data) };
    inline QueryResourceStaticsResponseBody& setData(const QueryResourceStaticsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryResourceStaticsResponseBody& setData(QueryResourceStaticsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline QueryResourceStaticsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryResourceStaticsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryResourceStaticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryResourceStaticsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline QueryResourceStaticsResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // *   **2xx**: indicates that the request was successful.
    // *   **3xx**: indicates that the request was redirected.
    // *   **4xx**: indicates that the request was invalid.
    // *   **5xx**: indicates that a server error occurred.
    shared_ptr<string> code_ {};
    // The resource usage.
    shared_ptr<QueryResourceStaticsResponseBody::Data> data_ {};
    // The error code. 
    // 
    // - The **ErrorCode** parameter is not returned when the request succeeds.
    // - The **ErrorCode** parameter is returned when the request fails. For more information, see **Error codes** in this topic.
    shared_ptr<string> errorCode_ {};
    // The returned message.
    // 
    // *   **success** is returned when the request succeeds.
    // *   An error code is returned when the request fails.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the resource usage of an application was obtained. Valid values:
    // 
    // *   **true**: indicates that the resource usage was obtained.
    // *   **false**: indicates that the resource usage could not be obtained.
    shared_ptr<bool> success_ {};
    // The ID of the trace. It can be used to query the details of a request.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
