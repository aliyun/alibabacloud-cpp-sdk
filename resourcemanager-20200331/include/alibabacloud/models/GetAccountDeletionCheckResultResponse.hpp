// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTDELETIONCHECKRESULTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTDELETIONCHECKRESULTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetAccountDeletionCheckResultResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetAccountDeletionCheckResultResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountDeletionCheckResultResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountDeletionCheckResultResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetAccountDeletionCheckResultResponse() = default ;
    GetAccountDeletionCheckResultResponse(const GetAccountDeletionCheckResultResponse &) = default ;
    GetAccountDeletionCheckResultResponse(GetAccountDeletionCheckResultResponse &&) = default ;
    GetAccountDeletionCheckResultResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountDeletionCheckResultResponse() = default ;
    GetAccountDeletionCheckResultResponse& operator=(const GetAccountDeletionCheckResultResponse &) = default ;
    GetAccountDeletionCheckResultResponse& operator=(GetAccountDeletionCheckResultResponse &&) = default ;
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
    inline GetAccountDeletionCheckResultResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetAccountDeletionCheckResultResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetAccountDeletionCheckResultResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetAccountDeletionCheckResultResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetAccountDeletionCheckResultResponseBody) };
    inline GetAccountDeletionCheckResultResponseBody body() { DARABONBA_PTR_GET(body_, GetAccountDeletionCheckResultResponseBody) };
    inline GetAccountDeletionCheckResultResponse& setBody(const GetAccountDeletionCheckResultResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetAccountDeletionCheckResultResponse& setBody(GetAccountDeletionCheckResultResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetAccountDeletionCheckResultResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
