// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUEUEERRORBYTASKIDRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETQUEUEERRORBYTASKIDRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetQueueErrorByTaskIdResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetQueueErrorByTaskIdResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueueErrorByTaskIdResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueueErrorByTaskIdResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetQueueErrorByTaskIdResponse() = default ;
    GetQueueErrorByTaskIdResponse(const GetQueueErrorByTaskIdResponse &) = default ;
    GetQueueErrorByTaskIdResponse(GetQueueErrorByTaskIdResponse &&) = default ;
    GetQueueErrorByTaskIdResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueueErrorByTaskIdResponse() = default ;
    GetQueueErrorByTaskIdResponse& operator=(const GetQueueErrorByTaskIdResponse &) = default ;
    GetQueueErrorByTaskIdResponse& operator=(GetQueueErrorByTaskIdResponse &&) = default ;
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
    inline GetQueueErrorByTaskIdResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetQueueErrorByTaskIdResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetQueueErrorByTaskIdResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetQueueErrorByTaskIdResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetQueueErrorByTaskIdResponseBody) };
    inline GetQueueErrorByTaskIdResponseBody body() { DARABONBA_PTR_GET(body_, GetQueueErrorByTaskIdResponseBody) };
    inline GetQueueErrorByTaskIdResponse& setBody(const GetQueueErrorByTaskIdResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetQueueErrorByTaskIdResponse& setBody(GetQueueErrorByTaskIdResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetQueueErrorByTaskIdResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
