// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTEMPLATEBYPARAMRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_QUERYTEMPLATEBYPARAMRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/QueryTemplateByParamResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class QueryTemplateByParamResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTemplateByParamResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTemplateByParamResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    QueryTemplateByParamResponse() = default ;
    QueryTemplateByParamResponse(const QueryTemplateByParamResponse &) = default ;
    QueryTemplateByParamResponse(QueryTemplateByParamResponse &&) = default ;
    QueryTemplateByParamResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTemplateByParamResponse() = default ;
    QueryTemplateByParamResponse& operator=(const QueryTemplateByParamResponse &) = default ;
    QueryTemplateByParamResponse& operator=(QueryTemplateByParamResponse &&) = default ;
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
    inline QueryTemplateByParamResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline QueryTemplateByParamResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline QueryTemplateByParamResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const QueryTemplateByParamResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, QueryTemplateByParamResponseBody) };
    inline QueryTemplateByParamResponseBody getBody() { DARABONBA_PTR_GET(body_, QueryTemplateByParamResponseBody) };
    inline QueryTemplateByParamResponse& setBody(const QueryTemplateByParamResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline QueryTemplateByParamResponse& setBody(QueryTemplateByParamResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<QueryTemplateByParamResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
