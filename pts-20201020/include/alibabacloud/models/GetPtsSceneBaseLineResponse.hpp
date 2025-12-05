// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSSCENEBASELINERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETPTSSCENEBASELINERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetPtsSceneBaseLineResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsSceneBaseLineResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsSceneBaseLineResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsSceneBaseLineResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetPtsSceneBaseLineResponse() = default ;
    GetPtsSceneBaseLineResponse(const GetPtsSceneBaseLineResponse &) = default ;
    GetPtsSceneBaseLineResponse(GetPtsSceneBaseLineResponse &&) = default ;
    GetPtsSceneBaseLineResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsSceneBaseLineResponse() = default ;
    GetPtsSceneBaseLineResponse& operator=(const GetPtsSceneBaseLineResponse &) = default ;
    GetPtsSceneBaseLineResponse& operator=(GetPtsSceneBaseLineResponse &&) = default ;
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
    inline GetPtsSceneBaseLineResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetPtsSceneBaseLineResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetPtsSceneBaseLineResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetPtsSceneBaseLineResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetPtsSceneBaseLineResponseBody) };
    inline GetPtsSceneBaseLineResponseBody body() { DARABONBA_PTR_GET(body_, GetPtsSceneBaseLineResponseBody) };
    inline GetPtsSceneBaseLineResponse& setBody(const GetPtsSceneBaseLineResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetPtsSceneBaseLineResponse& setBody(GetPtsSceneBaseLineResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetPtsSceneBaseLineResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
