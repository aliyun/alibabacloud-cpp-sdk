// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLETOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENABLETOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class EnableTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(token, token_);
      DARABONBA_PTR_TO_JSON(tokenMasked, tokenMasked_);
    };
    friend void from_json(const Darabonba::Json& j, EnableTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(token, token_);
      DARABONBA_PTR_FROM_JSON(tokenMasked, tokenMasked_);
    };
    EnableTokenResponseBody() = default ;
    EnableTokenResponseBody(const EnableTokenResponseBody &) = default ;
    EnableTokenResponseBody(EnableTokenResponseBody &&) = default ;
    EnableTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableTokenResponseBody() = default ;
    EnableTokenResponseBody& operator=(const EnableTokenResponseBody &) = default ;
    EnableTokenResponseBody& operator=(EnableTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->token_ == nullptr && this->tokenMasked_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline EnableTokenResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EnableTokenResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnableTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline EnableTokenResponseBody& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // tokenMasked Field Functions 
    bool hasTokenMasked() const { return this->tokenMasked_ != nullptr;};
    void deleteTokenMasked() { this->tokenMasked_ = nullptr;};
    inline string getTokenMasked() const { DARABONBA_PTR_GET_DEFAULT(tokenMasked_, "") };
    inline EnableTokenResponseBody& setTokenMasked(string tokenMasked) { DARABONBA_PTR_SET_VALUE(tokenMasked_, tokenMasked) };


  protected:
    // 业务状态码：成功为 200，失败为后端错误码（ERR.* / InvalidParameter.*）
    shared_ptr<string> code_ {};
    // 错误描述，成功时为空
    shared_ptr<string> message_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
    // Token 明文（仅本次返回，请妥善保管）
    shared_ptr<string> token_ {};
    // 脱敏后的 Token 值
    shared_ptr<string> tokenMasked_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
