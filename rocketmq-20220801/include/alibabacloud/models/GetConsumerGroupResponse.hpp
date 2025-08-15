// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERGROUPRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERGROUPRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/GetConsumerGroupResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetConsumerGroupResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerGroupResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerGroupResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GetConsumerGroupResponse() = default ;
    GetConsumerGroupResponse(const GetConsumerGroupResponse &) = default ;
    GetConsumerGroupResponse(GetConsumerGroupResponse &&) = default ;
    GetConsumerGroupResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerGroupResponse() = default ;
    GetConsumerGroupResponse& operator=(const GetConsumerGroupResponse &) = default ;
    GetConsumerGroupResponse& operator=(GetConsumerGroupResponse &&) = default ;
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
    inline GetConsumerGroupResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline GetConsumerGroupResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline GetConsumerGroupResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const GetConsumerGroupResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, GetConsumerGroupResponseBody) };
    inline GetConsumerGroupResponseBody body() { DARABONBA_PTR_GET(body_, GetConsumerGroupResponseBody) };
    inline GetConsumerGroupResponse& setBody(const GetConsumerGroupResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GetConsumerGroupResponse& setBody(GetConsumerGroupResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<GetConsumerGroupResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
