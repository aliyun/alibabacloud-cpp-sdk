// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHDMALIYUNRESOURCESYNCRESULTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETHDMALIYUNRESOURCESYNCRESULTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetHDMAliyunResourceSyncResultResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetHDMAliyunResourceSyncResultResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHDMAliyunResourceSyncResultResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetHDMAliyunResourceSyncResultResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetHDMAliyunResourceSyncResultResponse() = default ;
    GetHDMAliyunResourceSyncResultResponse(const GetHDMAliyunResourceSyncResultResponse &) = default ;
    GetHDMAliyunResourceSyncResultResponse(GetHDMAliyunResourceSyncResultResponse &&) = default ;
    GetHDMAliyunResourceSyncResultResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHDMAliyunResourceSyncResultResponse() = default ;
    GetHDMAliyunResourceSyncResultResponse& operator=(const GetHDMAliyunResourceSyncResultResponse &) = default ;
    GetHDMAliyunResourceSyncResultResponse& operator=(GetHDMAliyunResourceSyncResultResponse &&) = default ;
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
    inline GetHDMAliyunResourceSyncResultResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetHDMAliyunResourceSyncResultResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetHDMAliyunResourceSyncResultResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetHDMAliyunResourceSyncResultResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetHDMAliyunResourceSyncResultResponseBody) };
    inline GetHDMAliyunResourceSyncResultResponseBody body() { DARABONBA_PTR_GET(body_, GetHDMAliyunResourceSyncResultResponseBody) };
    inline GetHDMAliyunResourceSyncResultResponse& setBody(const GetHDMAliyunResourceSyncResultResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetHDMAliyunResourceSyncResultResponse& setBody(GetHDMAliyunResourceSyncResultResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetHDMAliyunResourceSyncResultResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
