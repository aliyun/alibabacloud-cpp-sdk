// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHQUERYMODIFYLOGINEMAILTRACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHQUERYMODIFYLOGINEMAILTRACERESPONSEBODY_HPP_
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
  class BatchQueryModifyLoginEmailTraceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchQueryModifyLoginEmailTraceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Traces, traces_);
    };
    friend void from_json(const Darabonba::Json& j, BatchQueryModifyLoginEmailTraceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Traces, traces_);
    };
    BatchQueryModifyLoginEmailTraceResponseBody() = default ;
    BatchQueryModifyLoginEmailTraceResponseBody(const BatchQueryModifyLoginEmailTraceResponseBody &) = default ;
    BatchQueryModifyLoginEmailTraceResponseBody(BatchQueryModifyLoginEmailTraceResponseBody &&) = default ;
    BatchQueryModifyLoginEmailTraceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchQueryModifyLoginEmailTraceResponseBody() = default ;
    BatchQueryModifyLoginEmailTraceResponseBody& operator=(const BatchQueryModifyLoginEmailTraceResponseBody &) = default ;
    BatchQueryModifyLoginEmailTraceResponseBody& operator=(BatchQueryModifyLoginEmailTraceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Traces : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Traces& obj) { 
        DARABONBA_PTR_TO_JSON(NewLoginEmail, newLoginEmail_);
        DARABONBA_PTR_TO_JSON(NowLoginEmail, nowLoginEmail_);
        DARABONBA_PTR_TO_JSON(OldLoginEmail, oldLoginEmail_);
        DARABONBA_PTR_TO_JSON(Pk, pk_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TraceNo, traceNo_);
      };
      friend void from_json(const Darabonba::Json& j, Traces& obj) { 
        DARABONBA_PTR_FROM_JSON(NewLoginEmail, newLoginEmail_);
        DARABONBA_PTR_FROM_JSON(NowLoginEmail, nowLoginEmail_);
        DARABONBA_PTR_FROM_JSON(OldLoginEmail, oldLoginEmail_);
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
      virtual bool empty() const override { return this->newLoginEmail_ == nullptr
        && this->nowLoginEmail_ == nullptr && this->oldLoginEmail_ == nullptr && this->pk_ == nullptr && this->status_ == nullptr && this->traceNo_ == nullptr; };
      // newLoginEmail Field Functions 
      bool hasNewLoginEmail() const { return this->newLoginEmail_ != nullptr;};
      void deleteNewLoginEmail() { this->newLoginEmail_ = nullptr;};
      inline string getNewLoginEmail() const { DARABONBA_PTR_GET_DEFAULT(newLoginEmail_, "") };
      inline Traces& setNewLoginEmail(string newLoginEmail) { DARABONBA_PTR_SET_VALUE(newLoginEmail_, newLoginEmail) };


      // nowLoginEmail Field Functions 
      bool hasNowLoginEmail() const { return this->nowLoginEmail_ != nullptr;};
      void deleteNowLoginEmail() { this->nowLoginEmail_ = nullptr;};
      inline string getNowLoginEmail() const { DARABONBA_PTR_GET_DEFAULT(nowLoginEmail_, "") };
      inline Traces& setNowLoginEmail(string nowLoginEmail) { DARABONBA_PTR_SET_VALUE(nowLoginEmail_, nowLoginEmail) };


      // oldLoginEmail Field Functions 
      bool hasOldLoginEmail() const { return this->oldLoginEmail_ != nullptr;};
      void deleteOldLoginEmail() { this->oldLoginEmail_ = nullptr;};
      inline string getOldLoginEmail() const { DARABONBA_PTR_GET_DEFAULT(oldLoginEmail_, "") };
      inline Traces& setOldLoginEmail(string oldLoginEmail) { DARABONBA_PTR_SET_VALUE(oldLoginEmail_, oldLoginEmail) };


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
      shared_ptr<string> newLoginEmail_ {};
      shared_ptr<string> nowLoginEmail_ {};
      shared_ptr<string> oldLoginEmail_ {};
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
    inline BatchQueryModifyLoginEmailTraceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchQueryModifyLoginEmailTraceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchQueryModifyLoginEmailTraceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline BatchQueryModifyLoginEmailTraceResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traces Field Functions 
    bool hasTraces() const { return this->traces_ != nullptr;};
    void deleteTraces() { this->traces_ = nullptr;};
    inline const vector<BatchQueryModifyLoginEmailTraceResponseBody::Traces> & getTraces() const { DARABONBA_PTR_GET_CONST(traces_, vector<BatchQueryModifyLoginEmailTraceResponseBody::Traces>) };
    inline vector<BatchQueryModifyLoginEmailTraceResponseBody::Traces> getTraces() { DARABONBA_PTR_GET(traces_, vector<BatchQueryModifyLoginEmailTraceResponseBody::Traces>) };
    inline BatchQueryModifyLoginEmailTraceResponseBody& setTraces(const vector<BatchQueryModifyLoginEmailTraceResponseBody::Traces> & traces) { DARABONBA_PTR_SET_VALUE(traces_, traces) };
    inline BatchQueryModifyLoginEmailTraceResponseBody& setTraces(vector<BatchQueryModifyLoginEmailTraceResponseBody::Traces> && traces) { DARABONBA_PTR_SET_RVALUE(traces_, traces) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
    shared_ptr<vector<BatchQueryModifyLoginEmailTraceResponseBody::Traces>> traces_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
