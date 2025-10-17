// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARDOCRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CARDOCRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CardOcrResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class CardOcrResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CardOcrResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CardOcrResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    CardOcrResponseBody() = default ;
    CardOcrResponseBody(const CardOcrResponseBody &) = default ;
    CardOcrResponseBody(CardOcrResponseBody &&) = default ;
    CardOcrResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CardOcrResponseBody() = default ;
    CardOcrResponseBody& operator=(const CardOcrResponseBody &) = default ;
    CardOcrResponseBody& operator=(CardOcrResponseBody &&) = default ;
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
    inline CardOcrResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CardOcrResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CardOcrResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CardOcrResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, CardOcrResponseBodyResult) };
    inline CardOcrResponseBodyResult result() { DARABONBA_PTR_GET(result_, CardOcrResponseBodyResult) };
    inline CardOcrResponseBody& setResult(const CardOcrResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CardOcrResponseBody& setResult(CardOcrResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Return code
    std::shared_ptr<string> code_ = nullptr;
    // Return message
    std::shared_ptr<string> message_ = nullptr;
    // ID of the request
    std::shared_ptr<string> requestId_ = nullptr;
    // Return result
    std::shared_ptr<CardOcrResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
