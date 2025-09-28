// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTHTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTHTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAuthTokenResponseBodyTokenInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class GetAuthTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuthTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TokenInfo, tokenInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuthTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TokenInfo, tokenInfo_);
    };
    GetAuthTokenResponseBody() = default ;
    GetAuthTokenResponseBody(const GetAuthTokenResponseBody &) = default ;
    GetAuthTokenResponseBody(GetAuthTokenResponseBody &&) = default ;
    GetAuthTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuthTokenResponseBody() = default ;
    GetAuthTokenResponseBody& operator=(const GetAuthTokenResponseBody &) = default ;
    GetAuthTokenResponseBody& operator=(GetAuthTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr && this->tokenInfo_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAuthTokenResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAuthTokenResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAuthTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tokenInfo Field Functions 
    bool hasTokenInfo() const { return this->tokenInfo_ != nullptr;};
    void deleteTokenInfo() { this->tokenInfo_ = nullptr;};
    inline const GetAuthTokenResponseBodyTokenInfo & tokenInfo() const { DARABONBA_PTR_GET_CONST(tokenInfo_, GetAuthTokenResponseBodyTokenInfo) };
    inline GetAuthTokenResponseBodyTokenInfo tokenInfo() { DARABONBA_PTR_GET(tokenInfo_, GetAuthTokenResponseBodyTokenInfo) };
    inline GetAuthTokenResponseBody& setTokenInfo(const GetAuthTokenResponseBodyTokenInfo & tokenInfo) { DARABONBA_PTR_SET_VALUE(tokenInfo_, tokenInfo) };
    inline GetAuthTokenResponseBody& setTokenInfo(GetAuthTokenResponseBodyTokenInfo && tokenInfo) { DARABONBA_PTR_SET_RVALUE(tokenInfo_, tokenInfo) };


  protected:
    // The response code.
    // 
    // *   If OK is returned, the request is successful.
    // *   For more information about other error codes, see [API response codes](https://help.aliyun.com/document_detail/85198.html).
    std::shared_ptr<string> code_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The response parameters.
    std::shared_ptr<GetAuthTokenResponseBodyTokenInfo> tokenInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
