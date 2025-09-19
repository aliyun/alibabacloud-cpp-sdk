// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSETSPROPERTYITEMRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETASSETSPROPERTYITEMRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetAssetsPropertyItemResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAssetsPropertyItemResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssetsPropertyItemResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssetsPropertyItemResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetAssetsPropertyItemResponse() = default ;
    GetAssetsPropertyItemResponse(const GetAssetsPropertyItemResponse &) = default ;
    GetAssetsPropertyItemResponse(GetAssetsPropertyItemResponse &&) = default ;
    GetAssetsPropertyItemResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssetsPropertyItemResponse() = default ;
    GetAssetsPropertyItemResponse& operator=(const GetAssetsPropertyItemResponse &) = default ;
    GetAssetsPropertyItemResponse& operator=(GetAssetsPropertyItemResponse &&) = default ;
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
    inline GetAssetsPropertyItemResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetAssetsPropertyItemResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetAssetsPropertyItemResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetAssetsPropertyItemResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetAssetsPropertyItemResponseBody) };
    inline GetAssetsPropertyItemResponseBody body() { DARABONBA_PTR_GET(body_, GetAssetsPropertyItemResponseBody) };
    inline GetAssetsPropertyItemResponse& setBody(const GetAssetsPropertyItemResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetAssetsPropertyItemResponse& setBody(GetAssetsPropertyItemResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetAssetsPropertyItemResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
