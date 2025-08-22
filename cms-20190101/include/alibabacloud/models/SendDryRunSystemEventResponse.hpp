// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDDRYRUNSYSTEMEVENTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_SENDDRYRUNSYSTEMEVENTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/SendDryRunSystemEventResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class SendDryRunSystemEventResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendDryRunSystemEventResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, SendDryRunSystemEventResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    SendDryRunSystemEventResponse() = default ;
    SendDryRunSystemEventResponse(const SendDryRunSystemEventResponse &) = default ;
    SendDryRunSystemEventResponse(SendDryRunSystemEventResponse &&) = default ;
    SendDryRunSystemEventResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendDryRunSystemEventResponse() = default ;
    SendDryRunSystemEventResponse& operator=(const SendDryRunSystemEventResponse &) = default ;
    SendDryRunSystemEventResponse& operator=(SendDryRunSystemEventResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->statusCode_ != nullptr && this->body_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline SendDryRunSystemEventResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline SendDryRunSystemEventResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline SendDryRunSystemEventResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SendDryRunSystemEventResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, SendDryRunSystemEventResponseBody) };
    inline SendDryRunSystemEventResponseBody body() { DARABONBA_PTR_GET(body_, SendDryRunSystemEventResponseBody) };
    inline SendDryRunSystemEventResponse& setBody(const SendDryRunSystemEventResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline SendDryRunSystemEventResponse& setBody(SendDryRunSystemEventResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<SendDryRunSystemEventResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
