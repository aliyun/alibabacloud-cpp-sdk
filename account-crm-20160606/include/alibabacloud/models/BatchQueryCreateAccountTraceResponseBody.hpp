// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHQUERYCREATEACCOUNTTRACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHQUERYCREATEACCOUNTTRACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class BatchQueryCreateAccountTraceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchQueryCreateAccountTraceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Traces, traces_);
    };
    friend void from_json(const Darabonba::Json& j, BatchQueryCreateAccountTraceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Traces, traces_);
    };
    BatchQueryCreateAccountTraceResponseBody() = default ;
    BatchQueryCreateAccountTraceResponseBody(const BatchQueryCreateAccountTraceResponseBody &) = default ;
    BatchQueryCreateAccountTraceResponseBody(BatchQueryCreateAccountTraceResponseBody &&) = default ;
    BatchQueryCreateAccountTraceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchQueryCreateAccountTraceResponseBody() = default ;
    BatchQueryCreateAccountTraceResponseBody& operator=(const BatchQueryCreateAccountTraceResponseBody &) = default ;
    BatchQueryCreateAccountTraceResponseBody& operator=(BatchQueryCreateAccountTraceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Traces : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Traces& obj) { 
        DARABONBA_PTR_TO_JSON(NowLoginEmail, nowLoginEmail_);
        DARABONBA_PTR_TO_JSON(Pk, pk_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TraceNo, traceNo_);
      };
      friend void from_json(const Darabonba::Json& j, Traces& obj) { 
        DARABONBA_PTR_FROM_JSON(NowLoginEmail, nowLoginEmail_);
        DARABONBA_PTR_FROM_JSON(Pk, pk_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TraceNo, traceNo_);
      };
      Traces() = default ;
      Traces(const Traces &) = default ;
      Traces(Traces &&) = default ;
      Traces(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Traces() = default ;
      Traces& operator=(const Traces &) = default ;
      Traces& operator=(Traces &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->nowLoginEmail_ == nullptr
        && this->pk_ == nullptr && this->status_ == nullptr && this->traceNo_ == nullptr; };
      // nowLoginEmail Field Functions 
      bool hasNowLoginEmail() const { return this->nowLoginEmail_ != nullptr;};
      void deleteNowLoginEmail() { this->nowLoginEmail_ = nullptr;};
      inline string getNowLoginEmail() const { DARABONBA_PTR_GET_DEFAULT(nowLoginEmail_, "") };
      inline Traces& setNowLoginEmail(string nowLoginEmail) { DARABONBA_PTR_SET_VALUE(nowLoginEmail_, nowLoginEmail) };


      // pk Field Functions 
      bool hasPk() const { return this->pk_ != nullptr;};
      void deletePk() { this->pk_ = nullptr;};
      inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
      inline Traces& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Traces& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // traceNo Field Functions 
      bool hasTraceNo() const { return this->traceNo_ != nullptr;};
      void deleteTraceNo() { this->traceNo_ = nullptr;};
      inline string getTraceNo() const { DARABONBA_PTR_GET_DEFAULT(traceNo_, "") };
      inline Traces& setTraceNo(string traceNo) { DARABONBA_PTR_SET_VALUE(traceNo_, traceNo) };


    protected:
      shared_ptr<string> nowLoginEmail_ {};
      shared_ptr<string> pk_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> traceNo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traces_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BatchQueryCreateAccountTraceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchQueryCreateAccountTraceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchQueryCreateAccountTraceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchQueryCreateAccountTraceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traces Field Functions 
    bool hasTraces() const { return this->traces_ != nullptr;};
    void deleteTraces() { this->traces_ = nullptr;};
    inline const vector<BatchQueryCreateAccountTraceResponseBody::Traces> & getTraces() const { DARABONBA_PTR_GET_CONST(traces_, vector<BatchQueryCreateAccountTraceResponseBody::Traces>) };
    inline vector<BatchQueryCreateAccountTraceResponseBody::Traces> getTraces() { DARABONBA_PTR_GET(traces_, vector<BatchQueryCreateAccountTraceResponseBody::Traces>) };
    inline BatchQueryCreateAccountTraceResponseBody& setTraces(const vector<BatchQueryCreateAccountTraceResponseBody::Traces> & traces) { DARABONBA_PTR_SET_VALUE(traces_, traces) };
    inline BatchQueryCreateAccountTraceResponseBody& setTraces(vector<BatchQueryCreateAccountTraceResponseBody::Traces> && traces) { DARABONBA_PTR_SET_RVALUE(traces_, traces) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<vector<BatchQueryCreateAccountTraceResponseBody::Traces>> traces_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
