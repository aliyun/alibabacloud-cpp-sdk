// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOTASKINFORESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOTASKINFORESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetVideoTaskInfoResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class GetVideoTaskInfoResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoTaskInfoResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoTaskInfoResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetVideoTaskInfoResponse() = default ;
    GetVideoTaskInfoResponse(const GetVideoTaskInfoResponse &) = default ;
    GetVideoTaskInfoResponse(GetVideoTaskInfoResponse &&) = default ;
    GetVideoTaskInfoResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoTaskInfoResponse() = default ;
    GetVideoTaskInfoResponse& operator=(const GetVideoTaskInfoResponse &) = default ;
    GetVideoTaskInfoResponse& operator=(GetVideoTaskInfoResponse &&) = default ;
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
    inline GetVideoTaskInfoResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetVideoTaskInfoResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetVideoTaskInfoResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetVideoTaskInfoResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetVideoTaskInfoResponseBody) };
    inline GetVideoTaskInfoResponseBody body() { DARABONBA_PTR_GET(body_, GetVideoTaskInfoResponseBody) };
    inline GetVideoTaskInfoResponse& setBody(const GetVideoTaskInfoResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetVideoTaskInfoResponse& setBody(GetVideoTaskInfoResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetVideoTaskInfoResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
