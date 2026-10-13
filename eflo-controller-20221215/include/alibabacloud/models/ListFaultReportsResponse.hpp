// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFAULTREPORTSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTFAULTREPORTSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ListFaultReportsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListFaultReportsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFaultReportsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListFaultReportsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListFaultReportsResponse() = default ;
    ListFaultReportsResponse(const ListFaultReportsResponse &) = default ;
    ListFaultReportsResponse(ListFaultReportsResponse &&) = default ;
    ListFaultReportsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFaultReportsResponse() = default ;
    ListFaultReportsResponse& operator=(const ListFaultReportsResponse &) = default ;
    ListFaultReportsResponse& operator=(ListFaultReportsResponse &&) = default ;
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
    inline ListFaultReportsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListFaultReportsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ListFaultReportsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ListFaultReportsResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, ListFaultReportsResponseBody) };
    inline ListFaultReportsResponseBody getBody() { DARABONBA_PTR_GET(body_, ListFaultReportsResponseBody) };
    inline ListFaultReportsResponse& setBody(const ListFaultReportsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListFaultReportsResponse& setBody(ListFaultReportsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<ListFaultReportsResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
