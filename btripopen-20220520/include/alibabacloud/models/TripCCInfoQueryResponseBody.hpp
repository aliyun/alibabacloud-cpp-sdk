// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIPCCINFOQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRIPCCINFOQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TripCCInfoQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TripCCInfoQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, TripCCInfoQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    TripCCInfoQueryResponseBody() = default ;
    TripCCInfoQueryResponseBody(const TripCCInfoQueryResponseBody &) = default ;
    TripCCInfoQueryResponseBody(TripCCInfoQueryResponseBody &&) = default ;
    TripCCInfoQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TripCCInfoQueryResponseBody() = default ;
    TripCCInfoQueryResponseBody& operator=(const TripCCInfoQueryResponseBody &) = default ;
    TripCCInfoQueryResponseBody& operator=(TripCCInfoQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(notifier, notifier_);
        DARABONBA_PTR_TO_JSON(notify_start_time, notifyStartTime_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(notifier, notifier_);
        DARABONBA_PTR_FROM_JSON(notify_start_time, notifyStartTime_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->notifier_ == nullptr
        && this->notifyStartTime_ == nullptr; };
      // notifier Field Functions 
      bool hasNotifier() const { return this->notifier_ != nullptr;};
      void deleteNotifier() { this->notifier_ = nullptr;};
      inline string getNotifier() const { DARABONBA_PTR_GET_DEFAULT(notifier_, "") };
      inline Module& setNotifier(string notifier) { DARABONBA_PTR_SET_VALUE(notifier_, notifier) };


      // notifyStartTime Field Functions 
      bool hasNotifyStartTime() const { return this->notifyStartTime_ != nullptr;};
      void deleteNotifyStartTime() { this->notifyStartTime_ = nullptr;};
      inline int64_t getNotifyStartTime() const { DARABONBA_PTR_GET_DEFAULT(notifyStartTime_, 0L) };
      inline Module& setNotifyStartTime(int64_t notifyStartTime) { DARABONBA_PTR_SET_VALUE(notifyStartTime_, notifyStartTime) };


    protected:
      shared_ptr<string> notifier_ {};
      shared_ptr<int64_t> notifyStartTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TripCCInfoQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TripCCInfoQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const vector<TripCCInfoQueryResponseBody::Module> & getModule() const { DARABONBA_PTR_GET_CONST(module_, vector<TripCCInfoQueryResponseBody::Module>) };
    inline vector<TripCCInfoQueryResponseBody::Module> getModule() { DARABONBA_PTR_GET(module_, vector<TripCCInfoQueryResponseBody::Module>) };
    inline TripCCInfoQueryResponseBody& setModule(const vector<TripCCInfoQueryResponseBody::Module> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline TripCCInfoQueryResponseBody& setModule(vector<TripCCInfoQueryResponseBody::Module> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TripCCInfoQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TripCCInfoQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline TripCCInfoQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<TripCCInfoQueryResponseBody::Module>> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
