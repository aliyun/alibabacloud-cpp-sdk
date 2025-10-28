// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREQUESTDIAGNOSISPAGERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETREQUESTDIAGNOSISPAGERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetRequestDiagnosisPageResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetRequestDiagnosisPageResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRequestDiagnosisPageResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetRequestDiagnosisPageResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetRequestDiagnosisPageResponse() = default ;
    GetRequestDiagnosisPageResponse(const GetRequestDiagnosisPageResponse &) = default ;
    GetRequestDiagnosisPageResponse(GetRequestDiagnosisPageResponse &&) = default ;
    GetRequestDiagnosisPageResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRequestDiagnosisPageResponse() = default ;
    GetRequestDiagnosisPageResponse& operator=(const GetRequestDiagnosisPageResponse &) = default ;
    GetRequestDiagnosisPageResponse& operator=(GetRequestDiagnosisPageResponse &&) = default ;
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
    inline GetRequestDiagnosisPageResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetRequestDiagnosisPageResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetRequestDiagnosisPageResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetRequestDiagnosisPageResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetRequestDiagnosisPageResponseBody) };
    inline GetRequestDiagnosisPageResponseBody body() { DARABONBA_PTR_GET(body_, GetRequestDiagnosisPageResponseBody) };
    inline GetRequestDiagnosisPageResponse& setBody(const GetRequestDiagnosisPageResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetRequestDiagnosisPageResponse& setBody(GetRequestDiagnosisPageResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetRequestDiagnosisPageResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
