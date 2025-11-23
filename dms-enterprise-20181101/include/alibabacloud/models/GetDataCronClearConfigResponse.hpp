// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACRONCLEARCONFIGRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETDATACRONCLEARCONFIGRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetDataCronClearConfigResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataCronClearConfigResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCronClearConfigResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCronClearConfigResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetDataCronClearConfigResponse() = default ;
    GetDataCronClearConfigResponse(const GetDataCronClearConfigResponse &) = default ;
    GetDataCronClearConfigResponse(GetDataCronClearConfigResponse &&) = default ;
    GetDataCronClearConfigResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCronClearConfigResponse() = default ;
    GetDataCronClearConfigResponse& operator=(const GetDataCronClearConfigResponse &) = default ;
    GetDataCronClearConfigResponse& operator=(GetDataCronClearConfigResponse &&) = default ;
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
    inline GetDataCronClearConfigResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetDataCronClearConfigResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetDataCronClearConfigResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetDataCronClearConfigResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetDataCronClearConfigResponseBody) };
    inline GetDataCronClearConfigResponseBody body() { DARABONBA_PTR_GET(body_, GetDataCronClearConfigResponseBody) };
    inline GetDataCronClearConfigResponse& setBody(const GetDataCronClearConfigResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetDataCronClearConfigResponse& setBody(GetDataCronClearConfigResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetDataCronClearConfigResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
