// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCRIPTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCRIPTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeScriptResponseBodyScript.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeScriptResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScriptResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NlsConfig, nlsConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Script, script_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScriptResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NlsConfig, nlsConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeScriptResponseBody() = default ;
    DescribeScriptResponseBody(const DescribeScriptResponseBody &) = default ;
    DescribeScriptResponseBody(DescribeScriptResponseBody &&) = default ;
    DescribeScriptResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScriptResponseBody() = default ;
    DescribeScriptResponseBody& operator=(const DescribeScriptResponseBody &) = default ;
    DescribeScriptResponseBody& operator=(DescribeScriptResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->nlsConfig_ == nullptr && return this->requestId_ == nullptr && return this->script_ == nullptr
        && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeScriptResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeScriptResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeScriptResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nlsConfig Field Functions 
    bool hasNlsConfig() const { return this->nlsConfig_ != nullptr;};
    void deleteNlsConfig() { this->nlsConfig_ = nullptr;};
    inline string nlsConfig() const { DARABONBA_PTR_GET_DEFAULT(nlsConfig_, "") };
    inline DescribeScriptResponseBody& setNlsConfig(string nlsConfig) { DARABONBA_PTR_SET_VALUE(nlsConfig_, nlsConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScriptResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline const DescribeScriptResponseBodyScript & script() const { DARABONBA_PTR_GET_CONST(script_, DescribeScriptResponseBodyScript) };
    inline DescribeScriptResponseBodyScript script() { DARABONBA_PTR_GET(script_, DescribeScriptResponseBodyScript) };
    inline DescribeScriptResponseBody& setScript(const DescribeScriptResponseBodyScript & script) { DARABONBA_PTR_SET_VALUE(script_, script) };
    inline DescribeScriptResponseBody& setScript(DescribeScriptResponseBodyScript && script) { DARABONBA_PTR_SET_RVALUE(script_, script) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeScriptResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> nlsConfig_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DescribeScriptResponseBodyScript> script_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
