// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SINGLECALLBYTTSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_SINGLECALLBYTTSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/SingleCallByTtsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class SingleCallByTtsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SingleCallByTtsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, SingleCallByTtsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    SingleCallByTtsResponse() = default ;
    SingleCallByTtsResponse(const SingleCallByTtsResponse &) = default ;
    SingleCallByTtsResponse(SingleCallByTtsResponse &&) = default ;
    SingleCallByTtsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SingleCallByTtsResponse() = default ;
    SingleCallByTtsResponse& operator=(const SingleCallByTtsResponse &) = default ;
    SingleCallByTtsResponse& operator=(SingleCallByTtsResponse &&) = default ;
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
    inline SingleCallByTtsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline SingleCallByTtsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline SingleCallByTtsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SingleCallByTtsResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, SingleCallByTtsResponseBody) };
    inline SingleCallByTtsResponseBody body() { DARABONBA_PTR_GET(body_, SingleCallByTtsResponseBody) };
    inline SingleCallByTtsResponse& setBody(const SingleCallByTtsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline SingleCallByTtsResponse& setBody(SingleCallByTtsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<SingleCallByTtsResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
