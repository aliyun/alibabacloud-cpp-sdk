// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBSCRIPTIONRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETSUBSCRIPTIONRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetSubscriptionResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
namespace Models
{
  class GetSubscriptionResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubscriptionResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubscriptionResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetSubscriptionResponse() = default ;
    GetSubscriptionResponse(const GetSubscriptionResponse &) = default ;
    GetSubscriptionResponse(GetSubscriptionResponse &&) = default ;
    GetSubscriptionResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubscriptionResponse() = default ;
    GetSubscriptionResponse& operator=(const GetSubscriptionResponse &) = default ;
    GetSubscriptionResponse& operator=(GetSubscriptionResponse &&) = default ;
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
    inline GetSubscriptionResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetSubscriptionResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetSubscriptionResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetSubscriptionResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, GetSubscriptionResponseBody) };
    inline GetSubscriptionResponseBody getBody() { DARABONBA_PTR_GET(body_, GetSubscriptionResponseBody) };
    inline GetSubscriptionResponse& setBody(const GetSubscriptionResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetSubscriptionResponse& setBody(GetSubscriptionResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<GetSubscriptionResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif
