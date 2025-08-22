// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNTHETICMONITORSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETSYNTHETICMONITORSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetSyntheticMonitorsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSyntheticMonitorsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyntheticMonitorsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyntheticMonitorsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetSyntheticMonitorsResponse() = default ;
    GetSyntheticMonitorsResponse(const GetSyntheticMonitorsResponse &) = default ;
    GetSyntheticMonitorsResponse(GetSyntheticMonitorsResponse &&) = default ;
    GetSyntheticMonitorsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyntheticMonitorsResponse() = default ;
    GetSyntheticMonitorsResponse& operator=(const GetSyntheticMonitorsResponse &) = default ;
    GetSyntheticMonitorsResponse& operator=(GetSyntheticMonitorsResponse &&) = default ;
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
    inline GetSyntheticMonitorsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetSyntheticMonitorsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetSyntheticMonitorsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetSyntheticMonitorsResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetSyntheticMonitorsResponseBody) };
    inline GetSyntheticMonitorsResponseBody body() { DARABONBA_PTR_GET(body_, GetSyntheticMonitorsResponseBody) };
    inline GetSyntheticMonitorsResponse& setBody(const GetSyntheticMonitorsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetSyntheticMonitorsResponse& setBody(GetSyntheticMonitorsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetSyntheticMonitorsResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
