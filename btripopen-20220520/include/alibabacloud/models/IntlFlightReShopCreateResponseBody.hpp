// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPCREATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPCREATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightReShopCreateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopCreateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopCreateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    IntlFlightReShopCreateResponseBody() = default ;
    IntlFlightReShopCreateResponseBody(const IntlFlightReShopCreateResponseBody &) = default ;
    IntlFlightReShopCreateResponseBody(IntlFlightReShopCreateResponseBody &&) = default ;
    IntlFlightReShopCreateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopCreateResponseBody() = default ;
    IntlFlightReShopCreateResponseBody& operator=(const IntlFlightReShopCreateResponseBody &) = default ;
    IntlFlightReShopCreateResponseBody& operator=(IntlFlightReShopCreateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(async_apply_key, asyncApplyKey_);
        DARABONBA_PTR_TO_JSON(need_retry, needRetry_);
        DARABONBA_PTR_TO_JSON(next_retry_interval, nextRetryInterval_);
        DARABONBA_PTR_TO_JSON(out_re_shop_apply_id, outReShopApplyId_);
        DARABONBA_PTR_TO_JSON(re_shop_apply_id, reShopApplyId_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(async_apply_key, asyncApplyKey_);
        DARABONBA_PTR_FROM_JSON(need_retry, needRetry_);
        DARABONBA_PTR_FROM_JSON(next_retry_interval, nextRetryInterval_);
        DARABONBA_PTR_FROM_JSON(out_re_shop_apply_id, outReShopApplyId_);
        DARABONBA_PTR_FROM_JSON(re_shop_apply_id, reShopApplyId_);
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
      virtual bool empty() const override { return this->asyncApplyKey_ == nullptr
        && this->needRetry_ == nullptr && this->nextRetryInterval_ == nullptr && this->outReShopApplyId_ == nullptr && this->reShopApplyId_ == nullptr; };
      // asyncApplyKey Field Functions 
      bool hasAsyncApplyKey() const { return this->asyncApplyKey_ != nullptr;};
      void deleteAsyncApplyKey() { this->asyncApplyKey_ = nullptr;};
      inline string getAsyncApplyKey() const { DARABONBA_PTR_GET_DEFAULT(asyncApplyKey_, "") };
      inline Module& setAsyncApplyKey(string asyncApplyKey) { DARABONBA_PTR_SET_VALUE(asyncApplyKey_, asyncApplyKey) };


      // needRetry Field Functions 
      bool hasNeedRetry() const { return this->needRetry_ != nullptr;};
      void deleteNeedRetry() { this->needRetry_ = nullptr;};
      inline bool getNeedRetry() const { DARABONBA_PTR_GET_DEFAULT(needRetry_, false) };
      inline Module& setNeedRetry(bool needRetry) { DARABONBA_PTR_SET_VALUE(needRetry_, needRetry) };


      // nextRetryInterval Field Functions 
      bool hasNextRetryInterval() const { return this->nextRetryInterval_ != nullptr;};
      void deleteNextRetryInterval() { this->nextRetryInterval_ = nullptr;};
      inline int64_t getNextRetryInterval() const { DARABONBA_PTR_GET_DEFAULT(nextRetryInterval_, 0L) };
      inline Module& setNextRetryInterval(int64_t nextRetryInterval) { DARABONBA_PTR_SET_VALUE(nextRetryInterval_, nextRetryInterval) };


      // outReShopApplyId Field Functions 
      bool hasOutReShopApplyId() const { return this->outReShopApplyId_ != nullptr;};
      void deleteOutReShopApplyId() { this->outReShopApplyId_ = nullptr;};
      inline string getOutReShopApplyId() const { DARABONBA_PTR_GET_DEFAULT(outReShopApplyId_, "") };
      inline Module& setOutReShopApplyId(string outReShopApplyId) { DARABONBA_PTR_SET_VALUE(outReShopApplyId_, outReShopApplyId) };


      // reShopApplyId Field Functions 
      bool hasReShopApplyId() const { return this->reShopApplyId_ != nullptr;};
      void deleteReShopApplyId() { this->reShopApplyId_ = nullptr;};
      inline string getReShopApplyId() const { DARABONBA_PTR_GET_DEFAULT(reShopApplyId_, "") };
      inline Module& setReShopApplyId(string reShopApplyId) { DARABONBA_PTR_SET_VALUE(reShopApplyId_, reShopApplyId) };


    protected:
      shared_ptr<string> asyncApplyKey_ {};
      shared_ptr<bool> needRetry_ {};
      shared_ptr<int64_t> nextRetryInterval_ {};
      shared_ptr<string> outReShopApplyId_ {};
      shared_ptr<string> reShopApplyId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline IntlFlightReShopCreateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline IntlFlightReShopCreateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const IntlFlightReShopCreateResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, IntlFlightReShopCreateResponseBody::Module) };
    inline IntlFlightReShopCreateResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, IntlFlightReShopCreateResponseBody::Module) };
    inline IntlFlightReShopCreateResponseBody& setModule(const IntlFlightReShopCreateResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline IntlFlightReShopCreateResponseBody& setModule(IntlFlightReShopCreateResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline IntlFlightReShopCreateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline IntlFlightReShopCreateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline IntlFlightReShopCreateResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<IntlFlightReShopCreateResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
