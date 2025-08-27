// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIPTASKQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRIPTASKQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TripTaskQueryResponseBodyModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TripTaskQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TripTaskQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, TripTaskQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    TripTaskQueryResponseBody() = default ;
    TripTaskQueryResponseBody(const TripTaskQueryResponseBody &) = default ;
    TripTaskQueryResponseBody(TripTaskQueryResponseBody &&) = default ;
    TripTaskQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TripTaskQueryResponseBody() = default ;
    TripTaskQueryResponseBody& operator=(const TripTaskQueryResponseBody &) = default ;
    TripTaskQueryResponseBody& operator=(TripTaskQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->module_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->traceId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TripTaskQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TripTaskQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const TripTaskQueryResponseBodyModule & module() const { DARABONBA_PTR_GET_CONST(module_, TripTaskQueryResponseBodyModule) };
    inline TripTaskQueryResponseBodyModule module() { DARABONBA_PTR_GET(module_, TripTaskQueryResponseBodyModule) };
    inline TripTaskQueryResponseBody& setModule(const TripTaskQueryResponseBodyModule & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline TripTaskQueryResponseBody& setModule(TripTaskQueryResponseBodyModule && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TripTaskQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TripTaskQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline TripTaskQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    // module。
    std::shared_ptr<TripTaskQueryResponseBodyModule> module_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    // traceId
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
