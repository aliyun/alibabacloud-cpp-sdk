// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONDATABASEACCOUNTSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONDATABASEACCOUNTSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListOperationDatabaseAccountsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListOperationDatabaseAccountsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationDatabaseAccountsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationDatabaseAccountsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListOperationDatabaseAccountsResponse() = default ;
    ListOperationDatabaseAccountsResponse(const ListOperationDatabaseAccountsResponse &) = default ;
    ListOperationDatabaseAccountsResponse(ListOperationDatabaseAccountsResponse &&) = default ;
    ListOperationDatabaseAccountsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationDatabaseAccountsResponse() = default ;
    ListOperationDatabaseAccountsResponse& operator=(const ListOperationDatabaseAccountsResponse &) = default ;
    ListOperationDatabaseAccountsResponse& operator=(ListOperationDatabaseAccountsResponse &&) = default ;
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
    inline ListOperationDatabaseAccountsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListOperationDatabaseAccountsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListOperationDatabaseAccountsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListOperationDatabaseAccountsResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ListOperationDatabaseAccountsResponseBody) };
    inline ListOperationDatabaseAccountsResponseBody body() { DARABONBA_PTR_GET(body_, ListOperationDatabaseAccountsResponseBody) };
    inline ListOperationDatabaseAccountsResponse& setBody(const ListOperationDatabaseAccountsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListOperationDatabaseAccountsResponse& setBody(ListOperationDatabaseAccountsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ListOperationDatabaseAccountsResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
