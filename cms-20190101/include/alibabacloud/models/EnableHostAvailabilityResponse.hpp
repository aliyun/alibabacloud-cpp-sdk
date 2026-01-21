// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEHOSTAVAILABILITYRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_ENABLEHOSTAVAILABILITYRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/EnableHostAvailabilityResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class EnableHostAvailabilityResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableHostAvailabilityResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, EnableHostAvailabilityResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    EnableHostAvailabilityResponse() = default ;
    EnableHostAvailabilityResponse(const EnableHostAvailabilityResponse &) = default ;
    EnableHostAvailabilityResponse(EnableHostAvailabilityResponse &&) = default ;
    EnableHostAvailabilityResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableHostAvailabilityResponse() = default ;
    EnableHostAvailabilityResponse& operator=(const EnableHostAvailabilityResponse &) = default ;
    EnableHostAvailabilityResponse& operator=(EnableHostAvailabilityResponse &&) = default ;
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
    inline EnableHostAvailabilityResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline EnableHostAvailabilityResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline EnableHostAvailabilityResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const EnableHostAvailabilityResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, EnableHostAvailabilityResponseBody) };
    inline EnableHostAvailabilityResponseBody getBody() { DARABONBA_PTR_GET(body_, EnableHostAvailabilityResponseBody) };
    inline EnableHostAvailabilityResponse& setBody(const EnableHostAvailabilityResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline EnableHostAvailabilityResponse& setBody(EnableHostAvailabilityResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<EnableHostAvailabilityResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
