// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGTYPEDISTRIBUTIONRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETLOGTYPEDISTRIBUTIONRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetLogTypeDistributionResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunDbaudit20180320
{
namespace Models
{
  class GetLogTypeDistributionResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLogTypeDistributionResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetLogTypeDistributionResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetLogTypeDistributionResponse() = default ;
    GetLogTypeDistributionResponse(const GetLogTypeDistributionResponse &) = default ;
    GetLogTypeDistributionResponse(GetLogTypeDistributionResponse &&) = default ;
    GetLogTypeDistributionResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLogTypeDistributionResponse() = default ;
    GetLogTypeDistributionResponse& operator=(const GetLogTypeDistributionResponse &) = default ;
    GetLogTypeDistributionResponse& operator=(GetLogTypeDistributionResponse &&) = default ;
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
    inline GetLogTypeDistributionResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetLogTypeDistributionResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetLogTypeDistributionResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetLogTypeDistributionResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, GetLogTypeDistributionResponseBody) };
    inline GetLogTypeDistributionResponseBody getBody() { DARABONBA_PTR_GET(body_, GetLogTypeDistributionResponseBody) };
    inline GetLogTypeDistributionResponse& setBody(const GetLogTypeDistributionResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetLogTypeDistributionResponse& setBody(GetLogTypeDistributionResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<GetLogTypeDistributionResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunDbaudit20180320
#endif
