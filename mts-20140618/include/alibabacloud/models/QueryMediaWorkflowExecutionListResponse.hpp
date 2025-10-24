// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIAWORKFLOWEXECUTIONLISTRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIAWORKFLOWEXECUTIONLISTRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/QueryMediaWorkflowExecutionListResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaWorkflowExecutionListResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaWorkflowExecutionListResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaWorkflowExecutionListResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    QueryMediaWorkflowExecutionListResponse() = default ;
    QueryMediaWorkflowExecutionListResponse(const QueryMediaWorkflowExecutionListResponse &) = default ;
    QueryMediaWorkflowExecutionListResponse(QueryMediaWorkflowExecutionListResponse &&) = default ;
    QueryMediaWorkflowExecutionListResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaWorkflowExecutionListResponse() = default ;
    QueryMediaWorkflowExecutionListResponse& operator=(const QueryMediaWorkflowExecutionListResponse &) = default ;
    QueryMediaWorkflowExecutionListResponse& operator=(QueryMediaWorkflowExecutionListResponse &&) = default ;
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
    inline QueryMediaWorkflowExecutionListResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline QueryMediaWorkflowExecutionListResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline QueryMediaWorkflowExecutionListResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const QueryMediaWorkflowExecutionListResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, QueryMediaWorkflowExecutionListResponseBody) };
    inline QueryMediaWorkflowExecutionListResponseBody body() { DARABONBA_PTR_GET(body_, QueryMediaWorkflowExecutionListResponseBody) };
    inline QueryMediaWorkflowExecutionListResponse& setBody(const QueryMediaWorkflowExecutionListResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline QueryMediaWorkflowExecutionListResponse& setBody(QueryMediaWorkflowExecutionListResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<QueryMediaWorkflowExecutionListResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
