// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTOPICSUBSCRIPTIONSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTTOPICSUBSCRIPTIONSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListTopicSubscriptionsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListTopicSubscriptionsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTopicSubscriptionsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListTopicSubscriptionsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListTopicSubscriptionsResponse() = default ;
    ListTopicSubscriptionsResponse(const ListTopicSubscriptionsResponse &) = default ;
    ListTopicSubscriptionsResponse(ListTopicSubscriptionsResponse &&) = default ;
    ListTopicSubscriptionsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTopicSubscriptionsResponse() = default ;
    ListTopicSubscriptionsResponse& operator=(const ListTopicSubscriptionsResponse &) = default ;
    ListTopicSubscriptionsResponse& operator=(ListTopicSubscriptionsResponse &&) = default ;
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
    inline ListTopicSubscriptionsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListTopicSubscriptionsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListTopicSubscriptionsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListTopicSubscriptionsResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ListTopicSubscriptionsResponseBody) };
    inline ListTopicSubscriptionsResponseBody body() { DARABONBA_PTR_GET(body_, ListTopicSubscriptionsResponseBody) };
    inline ListTopicSubscriptionsResponse& setBody(const ListTopicSubscriptionsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListTopicSubscriptionsResponse& setBody(ListTopicSubscriptionsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ListTopicSubscriptionsResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
