// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTWORKFLOWSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_EXPORTWORKFLOWSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ExportWorkflowsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportWorkflowsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ExportWorkflowsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_FROM_JSON(body, body_);
    };
    ExportWorkflowsResponse() = default ;
    ExportWorkflowsResponse(const ExportWorkflowsResponse &) = default ;
    ExportWorkflowsResponse(ExportWorkflowsResponse &&) = default ;
    ExportWorkflowsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportWorkflowsResponse() = default ;
    ExportWorkflowsResponse& operator=(const ExportWorkflowsResponse &) = default ;
    ExportWorkflowsResponse& operator=(ExportWorkflowsResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && this->statusCode_ == nullptr && this->body_.empty(); };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline ExportWorkflowsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ExportWorkflowsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ExportWorkflowsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return !this->body_.empty();};
    void deleteBody() { this->body_.clear();};
    inline Darabonba::Bytes getBody() const { DARABONBA_GET(body_) };
    inline ExportWorkflowsResponse& setBody(Darabonba::Bytes body) { DARABONBA_SET_VALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    Darabonba::Bytes body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
