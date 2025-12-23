// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASOURCETABLESRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASOURCETABLESRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListDataSourceTablesResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListDataSourceTablesResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSourceTablesResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSourceTablesResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListDataSourceTablesResponse() = default ;
    ListDataSourceTablesResponse(const ListDataSourceTablesResponse &) = default ;
    ListDataSourceTablesResponse(ListDataSourceTablesResponse &&) = default ;
    ListDataSourceTablesResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSourceTablesResponse() = default ;
    ListDataSourceTablesResponse& operator=(const ListDataSourceTablesResponse &) = default ;
    ListDataSourceTablesResponse& operator=(ListDataSourceTablesResponse &&) = default ;
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
    inline ListDataSourceTablesResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListDataSourceTablesResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListDataSourceTablesResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListDataSourceTablesResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ListDataSourceTablesResponseBody) };
    inline ListDataSourceTablesResponseBody body() { DARABONBA_PTR_GET(body_, ListDataSourceTablesResponseBody) };
    inline ListDataSourceTablesResponse& setBody(const ListDataSourceTablesResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListDataSourceTablesResponse& setBody(ListDataSourceTablesResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ListDataSourceTablesResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
