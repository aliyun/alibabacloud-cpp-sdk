// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFUNDACCOUNTLOWAVAILABLEAMOUNTALARMRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETFUNDACCOUNTLOWAVAILABLEAMOUNTALARMRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetFundAccountLowAvailableAmountAlarmResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetFundAccountLowAvailableAmountAlarmResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFundAccountLowAvailableAmountAlarmResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetFundAccountLowAvailableAmountAlarmResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetFundAccountLowAvailableAmountAlarmResponse() = default ;
    GetFundAccountLowAvailableAmountAlarmResponse(const GetFundAccountLowAvailableAmountAlarmResponse &) = default ;
    GetFundAccountLowAvailableAmountAlarmResponse(GetFundAccountLowAvailableAmountAlarmResponse &&) = default ;
    GetFundAccountLowAvailableAmountAlarmResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFundAccountLowAvailableAmountAlarmResponse() = default ;
    GetFundAccountLowAvailableAmountAlarmResponse& operator=(const GetFundAccountLowAvailableAmountAlarmResponse &) = default ;
    GetFundAccountLowAvailableAmountAlarmResponse& operator=(GetFundAccountLowAvailableAmountAlarmResponse &&) = default ;
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
    inline GetFundAccountLowAvailableAmountAlarmResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetFundAccountLowAvailableAmountAlarmResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetFundAccountLowAvailableAmountAlarmResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetFundAccountLowAvailableAmountAlarmResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetFundAccountLowAvailableAmountAlarmResponseBody) };
    inline GetFundAccountLowAvailableAmountAlarmResponseBody body() { DARABONBA_PTR_GET(body_, GetFundAccountLowAvailableAmountAlarmResponseBody) };
    inline GetFundAccountLowAvailableAmountAlarmResponse& setBody(const GetFundAccountLowAvailableAmountAlarmResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetFundAccountLowAvailableAmountAlarmResponse& setBody(GetFundAccountLowAvailableAmountAlarmResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetFundAccountLowAvailableAmountAlarmResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
