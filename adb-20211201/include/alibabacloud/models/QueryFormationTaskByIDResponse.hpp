// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFORMATIONTASKBYIDRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_QUERYFORMATIONTASKBYIDRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/QueryFormationTaskByIDResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class QueryFormationTaskByIDResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFormationTaskByIDResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFormationTaskByIDResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    QueryFormationTaskByIDResponse() = default ;
    QueryFormationTaskByIDResponse(const QueryFormationTaskByIDResponse &) = default ;
    QueryFormationTaskByIDResponse(QueryFormationTaskByIDResponse &&) = default ;
    QueryFormationTaskByIDResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFormationTaskByIDResponse() = default ;
    QueryFormationTaskByIDResponse& operator=(const QueryFormationTaskByIDResponse &) = default ;
    QueryFormationTaskByIDResponse& operator=(QueryFormationTaskByIDResponse &&) = default ;
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
    inline QueryFormationTaskByIDResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline QueryFormationTaskByIDResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline QueryFormationTaskByIDResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const QueryFormationTaskByIDResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, QueryFormationTaskByIDResponseBody) };
    inline QueryFormationTaskByIDResponseBody getBody() { DARABONBA_PTR_GET(body_, QueryFormationTaskByIDResponseBody) };
    inline QueryFormationTaskByIDResponse& setBody(const QueryFormationTaskByIDResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline QueryFormationTaskByIDResponse& setBody(QueryFormationTaskByIDResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<QueryFormationTaskByIDResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
