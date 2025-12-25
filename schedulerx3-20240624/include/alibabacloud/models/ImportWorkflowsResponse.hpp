// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTWORKFLOWSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_IMPORTWORKFLOWSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ImportWorkflowsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ImportWorkflowsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportWorkflowsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ImportWorkflowsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ImportWorkflowsResponse() = default ;
    ImportWorkflowsResponse(const ImportWorkflowsResponse &) = default ;
    ImportWorkflowsResponse(ImportWorkflowsResponse &&) = default ;
    ImportWorkflowsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportWorkflowsResponse() = default ;
    ImportWorkflowsResponse& operator=(const ImportWorkflowsResponse &) = default ;
    ImportWorkflowsResponse& operator=(ImportWorkflowsResponse &&) = default ;
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
    inline ImportWorkflowsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ImportWorkflowsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline ImportWorkflowsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ImportWorkflowsResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, ImportWorkflowsResponseBody) };
    inline ImportWorkflowsResponseBody body() { DARABONBA_PTR_GET(body_, ImportWorkflowsResponseBody) };
    inline ImportWorkflowsResponse& setBody(const ImportWorkflowsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ImportWorkflowsResponse& setBody(ImportWorkflowsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<ImportWorkflowsResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
