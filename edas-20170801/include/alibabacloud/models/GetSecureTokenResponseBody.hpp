// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURETOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSECURETOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSecureTokenResponseBodySecureToken.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetSecureTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecureTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecureToken, secureToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecureTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecureToken, secureToken_);
    };
    GetSecureTokenResponseBody() = default ;
    GetSecureTokenResponseBody(const GetSecureTokenResponseBody &) = default ;
    GetSecureTokenResponseBody(GetSecureTokenResponseBody &&) = default ;
    GetSecureTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecureTokenResponseBody() = default ;
    GetSecureTokenResponseBody& operator=(const GetSecureTokenResponseBody &) = default ;
    GetSecureTokenResponseBody& operator=(GetSecureTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->secureToken_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetSecureTokenResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSecureTokenResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSecureTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // secureToken Field Functions 
    bool hasSecureToken() const { return this->secureToken_ != nullptr;};
    void deleteSecureToken() { this->secureToken_ = nullptr;};
    inline const GetSecureTokenResponseBodySecureToken & secureToken() const { DARABONBA_PTR_GET_CONST(secureToken_, GetSecureTokenResponseBodySecureToken) };
    inline GetSecureTokenResponseBodySecureToken secureToken() { DARABONBA_PTR_GET(secureToken_, GetSecureTokenResponseBodySecureToken) };
    inline GetSecureTokenResponseBody& setSecureToken(const GetSecureTokenResponseBodySecureToken & secureToken) { DARABONBA_PTR_SET_VALUE(secureToken_, secureToken) };
    inline GetSecureTokenResponseBody& setSecureToken(GetSecureTokenResponseBodySecureToken && secureToken) { DARABONBA_PTR_SET_RVALUE(secureToken_, secureToken) };


  protected:
    // The HTTP status code that is returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The message returned for the request.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The returned security token.
    std::shared_ptr<GetSecureTokenResponseBodySecureToken> secureToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
