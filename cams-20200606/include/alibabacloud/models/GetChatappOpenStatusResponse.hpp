// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHATAPPOPENSTATUSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETCHATAPPOPENSTATUSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetChatappOpenStatusResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class GetChatappOpenStatusResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChatappOpenStatusResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetChatappOpenStatusResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetChatappOpenStatusResponse() = default ;
    GetChatappOpenStatusResponse(const GetChatappOpenStatusResponse &) = default ;
    GetChatappOpenStatusResponse(GetChatappOpenStatusResponse &&) = default ;
    GetChatappOpenStatusResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChatappOpenStatusResponse() = default ;
    GetChatappOpenStatusResponse& operator=(const GetChatappOpenStatusResponse &) = default ;
    GetChatappOpenStatusResponse& operator=(GetChatappOpenStatusResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && this->statusCode_ == nullptr && this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline GetChatappOpenStatusResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetChatappOpenStatusResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetChatappOpenStatusResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetChatappOpenStatusResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, GetChatappOpenStatusResponseBody) };
    inline GetChatappOpenStatusResponseBody getBody() { DARABONBA_PTR_GET(body_, GetChatappOpenStatusResponseBody) };
    inline GetChatappOpenStatusResponse& setBody(const GetChatappOpenStatusResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetChatappOpenStatusResponse& setBody(GetChatappOpenStatusResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<GetChatappOpenStatusResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
