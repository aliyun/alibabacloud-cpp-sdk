// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBUSINESSLOCATIONSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_QUERYBUSINESSLOCATIONSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/QueryBusinessLocationsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryBusinessLocationsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBusinessLocationsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBusinessLocationsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    QueryBusinessLocationsResponse() = default ;
    QueryBusinessLocationsResponse(const QueryBusinessLocationsResponse &) = default ;
    QueryBusinessLocationsResponse(QueryBusinessLocationsResponse &&) = default ;
    QueryBusinessLocationsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBusinessLocationsResponse() = default ;
    QueryBusinessLocationsResponse& operator=(const QueryBusinessLocationsResponse &) = default ;
    QueryBusinessLocationsResponse& operator=(QueryBusinessLocationsResponse &&) = default ;
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
    inline QueryBusinessLocationsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline QueryBusinessLocationsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline QueryBusinessLocationsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const QueryBusinessLocationsResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, QueryBusinessLocationsResponseBody) };
    inline QueryBusinessLocationsResponseBody getBody() { DARABONBA_PTR_GET(body_, QueryBusinessLocationsResponseBody) };
    inline QueryBusinessLocationsResponse& setBody(const QueryBusinessLocationsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline QueryBusinessLocationsResponse& setBody(QueryBusinessLocationsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<QueryBusinessLocationsResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
