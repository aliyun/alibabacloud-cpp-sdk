// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCESSTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ACCESSTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AccessTokenResponseBodyData.hpp>
#include <alibabacloud/models/AccessTokenResponseBodyModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class AccessTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AccessTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, AccessTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    AccessTokenResponseBody() = default ;
    AccessTokenResponseBody(const AccessTokenResponseBody &) = default ;
    AccessTokenResponseBody(AccessTokenResponseBody &&) = default ;
    AccessTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AccessTokenResponseBody() = default ;
    AccessTokenResponseBody& operator=(const AccessTokenResponseBody &) = default ;
    AccessTokenResponseBody& operator=(AccessTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->module_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr
        && this->traceId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AccessTokenResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AccessTokenResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, AccessTokenResponseBodyData) };
    inline AccessTokenResponseBodyData data() { DARABONBA_PTR_GET(data_, AccessTokenResponseBodyData) };
    inline AccessTokenResponseBody& setData(const AccessTokenResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AccessTokenResponseBody& setData(AccessTokenResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AccessTokenResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const AccessTokenResponseBodyModule & module() const { DARABONBA_PTR_GET_CONST(module_, AccessTokenResponseBodyModule) };
    inline AccessTokenResponseBodyModule module() { DARABONBA_PTR_GET(module_, AccessTokenResponseBodyModule) };
    inline AccessTokenResponseBody& setModule(const AccessTokenResponseBodyModule & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline AccessTokenResponseBody& setModule(AccessTokenResponseBodyModule && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AccessTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AccessTokenResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline AccessTokenResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<AccessTokenResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<AccessTokenResponseBodyModule> module_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    // 成功标识
    std::shared_ptr<bool> success_ = nullptr;
    // traceId
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
