// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTORCOMPUTESUMMARYRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTORCOMPUTESUMMARYRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetDoctorComputeSummaryResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetDoctorComputeSummaryResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDoctorComputeSummaryResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetDoctorComputeSummaryResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetDoctorComputeSummaryResponse() = default ;
    GetDoctorComputeSummaryResponse(const GetDoctorComputeSummaryResponse &) = default ;
    GetDoctorComputeSummaryResponse(GetDoctorComputeSummaryResponse &&) = default ;
    GetDoctorComputeSummaryResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDoctorComputeSummaryResponse() = default ;
    GetDoctorComputeSummaryResponse& operator=(const GetDoctorComputeSummaryResponse &) = default ;
    GetDoctorComputeSummaryResponse& operator=(GetDoctorComputeSummaryResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && return this->statusCode_ == nullptr && return this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline GetDoctorComputeSummaryResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetDoctorComputeSummaryResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetDoctorComputeSummaryResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetDoctorComputeSummaryResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetDoctorComputeSummaryResponseBody) };
    inline GetDoctorComputeSummaryResponseBody body() { DARABONBA_PTR_GET(body_, GetDoctorComputeSummaryResponseBody) };
    inline GetDoctorComputeSummaryResponse& setBody(const GetDoctorComputeSummaryResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetDoctorComputeSummaryResponse& setBody(GetDoctorComputeSummaryResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetDoctorComputeSummaryResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
