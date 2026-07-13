// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKERSTATSSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKERSTATSSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentTeams20260605
{
namespace Models
{
  class GetWorkerStatsSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkerStatsSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkerStatsSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetWorkerStatsSummaryResponseBody() = default ;
    GetWorkerStatsSummaryResponseBody(const GetWorkerStatsSummaryResponseBody &) = default ;
    GetWorkerStatsSummaryResponseBody(GetWorkerStatsSummaryResponseBody &&) = default ;
    GetWorkerStatsSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkerStatsSummaryResponseBody() = default ;
    GetWorkerStatsSummaryResponseBody& operator=(const GetWorkerStatsSummaryResponseBody &) = default ;
    GetWorkerStatsSummaryResponseBody& operator=(GetWorkerStatsSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(OtherWorkers, otherWorkers_);
        DARABONBA_PTR_TO_JSON(RunningWorkers, runningWorkers_);
        DARABONBA_PTR_TO_JSON(StoppedWorkers, stoppedWorkers_);
        DARABONBA_PTR_TO_JSON(TotalWorkers, totalWorkers_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(OtherWorkers, otherWorkers_);
        DARABONBA_PTR_FROM_JSON(RunningWorkers, runningWorkers_);
        DARABONBA_PTR_FROM_JSON(StoppedWorkers, stoppedWorkers_);
        DARABONBA_PTR_FROM_JSON(TotalWorkers, totalWorkers_);
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
      virtual bool empty() const override { return this->otherWorkers_ == nullptr
        && this->runningWorkers_ == nullptr && this->stoppedWorkers_ == nullptr && this->totalWorkers_ == nullptr; };
      // otherWorkers Field Functions 
      bool hasOtherWorkers() const { return this->otherWorkers_ != nullptr;};
      void deleteOtherWorkers() { this->otherWorkers_ = nullptr;};
      inline int32_t getOtherWorkers() const { DARABONBA_PTR_GET_DEFAULT(otherWorkers_, 0) };
      inline Data& setOtherWorkers(int32_t otherWorkers) { DARABONBA_PTR_SET_VALUE(otherWorkers_, otherWorkers) };


      // runningWorkers Field Functions 
      bool hasRunningWorkers() const { return this->runningWorkers_ != nullptr;};
      void deleteRunningWorkers() { this->runningWorkers_ = nullptr;};
      inline int32_t getRunningWorkers() const { DARABONBA_PTR_GET_DEFAULT(runningWorkers_, 0) };
      inline Data& setRunningWorkers(int32_t runningWorkers) { DARABONBA_PTR_SET_VALUE(runningWorkers_, runningWorkers) };


      // stoppedWorkers Field Functions 
      bool hasStoppedWorkers() const { return this->stoppedWorkers_ != nullptr;};
      void deleteStoppedWorkers() { this->stoppedWorkers_ = nullptr;};
      inline int32_t getStoppedWorkers() const { DARABONBA_PTR_GET_DEFAULT(stoppedWorkers_, 0) };
      inline Data& setStoppedWorkers(int32_t stoppedWorkers) { DARABONBA_PTR_SET_VALUE(stoppedWorkers_, stoppedWorkers) };


      // totalWorkers Field Functions 
      bool hasTotalWorkers() const { return this->totalWorkers_ != nullptr;};
      void deleteTotalWorkers() { this->totalWorkers_ = nullptr;};
      inline int32_t getTotalWorkers() const { DARABONBA_PTR_GET_DEFAULT(totalWorkers_, 0) };
      inline Data& setTotalWorkers(int32_t totalWorkers) { DARABONBA_PTR_SET_VALUE(totalWorkers_, totalWorkers) };


    protected:
      shared_ptr<int32_t> otherWorkers_ {};
      shared_ptr<int32_t> runningWorkers_ {};
      shared_ptr<int32_t> stoppedWorkers_ {};
      shared_ptr<int32_t> totalWorkers_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetWorkerStatsSummaryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetWorkerStatsSummaryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetWorkerStatsSummaryResponseBody::Data) };
    inline GetWorkerStatsSummaryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetWorkerStatsSummaryResponseBody::Data) };
    inline GetWorkerStatsSummaryResponseBody& setData(const GetWorkerStatsSummaryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetWorkerStatsSummaryResponseBody& setData(GetWorkerStatsSummaryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetWorkerStatsSummaryResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetWorkerStatsSummaryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkerStatsSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetWorkerStatsSummaryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetWorkerStatsSummaryResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentTeams20260605
#endif
