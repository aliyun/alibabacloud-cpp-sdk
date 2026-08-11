// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIAPPSTATSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETAIAPPSTATSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetAiAppStatsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetAiAppStatsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAiAppStatsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetAiAppStatsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetAiAppStatsResponse() = default ;
    GetAiAppStatsResponse(const GetAiAppStatsResponse &) = default ;
    GetAiAppStatsResponse(GetAiAppStatsResponse &&) = default ;
    GetAiAppStatsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAiAppStatsResponse() = default ;
    GetAiAppStatsResponse& operator=(const GetAiAppStatsResponse &) = default ;
    GetAiAppStatsResponse& operator=(GetAiAppStatsResponse &&) = default ;
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
    inline GetAiAppStatsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetAiAppStatsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetAiAppStatsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetAiAppStatsResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, GetAiAppStatsResponseBody) };
    inline GetAiAppStatsResponseBody getBody() { DARABONBA_PTR_GET(body_, GetAiAppStatsResponseBody) };
    inline GetAiAppStatsResponse& setBody(const GetAiAppStatsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetAiAppStatsResponse& setBody(GetAiAppStatsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<GetAiAppStatsResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
