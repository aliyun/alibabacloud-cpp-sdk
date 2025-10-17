// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITIALIZERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INITIALIZERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InitializeResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class InitializeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitializeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, InitializeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    InitializeResponseBody() = default ;
    InitializeResponseBody(const InitializeResponseBody &) = default ;
    InitializeResponseBody(InitializeResponseBody &&) = default ;
    InitializeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitializeResponseBody() = default ;
    InitializeResponseBody& operator=(const InitializeResponseBody &) = default ;
    InitializeResponseBody& operator=(InitializeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InitializeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InitializeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InitializeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const InitializeResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, InitializeResponseBodyResult) };
    inline InitializeResponseBodyResult result() { DARABONBA_PTR_GET(result_, InitializeResponseBodyResult) };
    inline InitializeResponseBody& setResult(const InitializeResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline InitializeResponseBody& setResult(InitializeResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Return code
    std::shared_ptr<string> code_ = nullptr;
    // Return message
    std::shared_ptr<string> message_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // Return result
    std::shared_ptr<InitializeResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
