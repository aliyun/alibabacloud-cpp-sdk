// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEDATABASESRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEDATABASESRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListInstanceDatabasesResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListInstanceDatabasesResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceDatabasesResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceDatabasesResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListInstanceDatabasesResponse() = default ;
    ListInstanceDatabasesResponse(const ListInstanceDatabasesResponse &) = default ;
    ListInstanceDatabasesResponse(ListInstanceDatabasesResponse &&) = default ;
    ListInstanceDatabasesResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceDatabasesResponse() = default ;
    ListInstanceDatabasesResponse& operator=(const ListInstanceDatabasesResponse &) = default ;
    ListInstanceDatabasesResponse& operator=(ListInstanceDatabasesResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && this->statusCode_ == nullptr && this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline ListInstanceDatabasesResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListInstanceDatabasesResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListInstanceDatabasesResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListInstanceDatabasesResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ListInstanceDatabasesResponseBody) };
    inline ListInstanceDatabasesResponseBody getBody() { DARABONBA_PTR_GET(body_, ListInstanceDatabasesResponseBody) };
    inline ListInstanceDatabasesResponse& setBody(const ListInstanceDatabasesResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListInstanceDatabasesResponse& setBody(ListInstanceDatabasesResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<ListInstanceDatabasesResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
