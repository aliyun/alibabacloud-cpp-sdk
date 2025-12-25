// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCENEPREVIEWINFORESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETSCENEPREVIEWINFORESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetScenePreviewInfoResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class GetScenePreviewInfoResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScenePreviewInfoResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetScenePreviewInfoResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetScenePreviewInfoResponse() = default ;
    GetScenePreviewInfoResponse(const GetScenePreviewInfoResponse &) = default ;
    GetScenePreviewInfoResponse(GetScenePreviewInfoResponse &&) = default ;
    GetScenePreviewInfoResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScenePreviewInfoResponse() = default ;
    GetScenePreviewInfoResponse& operator=(const GetScenePreviewInfoResponse &) = default ;
    GetScenePreviewInfoResponse& operator=(GetScenePreviewInfoResponse &&) = default ;
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
    inline GetScenePreviewInfoResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetScenePreviewInfoResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetScenePreviewInfoResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetScenePreviewInfoResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetScenePreviewInfoResponseBody) };
    inline GetScenePreviewInfoResponseBody body() { DARABONBA_PTR_GET(body_, GetScenePreviewInfoResponseBody) };
    inline GetScenePreviewInfoResponse& setBody(const GetScenePreviewInfoResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetScenePreviewInfoResponse& setBody(GetScenePreviewInfoResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetScenePreviewInfoResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
