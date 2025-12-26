// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEKNOWLEDGEBASEJOBRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DELETEKNOWLEDGEBASEJOBRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DeleteKnowledgeBaseJobResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class DeleteKnowledgeBaseJobResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteKnowledgeBaseJobResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteKnowledgeBaseJobResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DeleteKnowledgeBaseJobResponse() = default ;
    DeleteKnowledgeBaseJobResponse(const DeleteKnowledgeBaseJobResponse &) = default ;
    DeleteKnowledgeBaseJobResponse(DeleteKnowledgeBaseJobResponse &&) = default ;
    DeleteKnowledgeBaseJobResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteKnowledgeBaseJobResponse() = default ;
    DeleteKnowledgeBaseJobResponse& operator=(const DeleteKnowledgeBaseJobResponse &) = default ;
    DeleteKnowledgeBaseJobResponse& operator=(DeleteKnowledgeBaseJobResponse &&) = default ;
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
    inline DeleteKnowledgeBaseJobResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DeleteKnowledgeBaseJobResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DeleteKnowledgeBaseJobResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeleteKnowledgeBaseJobResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DeleteKnowledgeBaseJobResponseBody) };
    inline DeleteKnowledgeBaseJobResponseBody body() { DARABONBA_PTR_GET(body_, DeleteKnowledgeBaseJobResponseBody) };
    inline DeleteKnowledgeBaseJobResponse& setBody(const DeleteKnowledgeBaseJobResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DeleteKnowledgeBaseJobResponse& setBody(DeleteKnowledgeBaseJobResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DeleteKnowledgeBaseJobResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
