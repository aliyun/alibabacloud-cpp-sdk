// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTATICACCOUNTSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTSTATICACCOUNTSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListStaticAccountsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListStaticAccountsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStaticAccountsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListStaticAccountsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListStaticAccountsResponse() = default ;
    ListStaticAccountsResponse(const ListStaticAccountsResponse &) = default ;
    ListStaticAccountsResponse(ListStaticAccountsResponse &&) = default ;
    ListStaticAccountsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStaticAccountsResponse() = default ;
    ListStaticAccountsResponse& operator=(const ListStaticAccountsResponse &) = default ;
    ListStaticAccountsResponse& operator=(ListStaticAccountsResponse &&) = default ;
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
    inline ListStaticAccountsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListStaticAccountsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListStaticAccountsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListStaticAccountsResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ListStaticAccountsResponseBody) };
    inline ListStaticAccountsResponseBody body() { DARABONBA_PTR_GET(body_, ListStaticAccountsResponseBody) };
    inline ListStaticAccountsResponse& setBody(const ListStaticAccountsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListStaticAccountsResponse& setBody(ListStaticAccountsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ListStaticAccountsResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
