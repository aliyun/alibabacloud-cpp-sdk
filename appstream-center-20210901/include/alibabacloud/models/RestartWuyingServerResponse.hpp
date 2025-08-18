// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTARTWUYINGSERVERRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_RESTARTWUYINGSERVERRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/RestartWuyingServerResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class RestartWuyingServerResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestartWuyingServerResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, RestartWuyingServerResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    RestartWuyingServerResponse() = default ;
    RestartWuyingServerResponse(const RestartWuyingServerResponse &) = default ;
    RestartWuyingServerResponse(RestartWuyingServerResponse &&) = default ;
    RestartWuyingServerResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestartWuyingServerResponse() = default ;
    RestartWuyingServerResponse& operator=(const RestartWuyingServerResponse &) = default ;
    RestartWuyingServerResponse& operator=(RestartWuyingServerResponse &&) = default ;
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
    inline RestartWuyingServerResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline RestartWuyingServerResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline RestartWuyingServerResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const RestartWuyingServerResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, RestartWuyingServerResponseBody) };
    inline RestartWuyingServerResponseBody body() { DARABONBA_PTR_GET(body_, RestartWuyingServerResponseBody) };
    inline RestartWuyingServerResponse& setBody(const RestartWuyingServerResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline RestartWuyingServerResponse& setBody(RestartWuyingServerResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<RestartWuyingServerResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
