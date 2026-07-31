// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDKNOWLEDGEFILERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_ADDKNOWLEDGEFILERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/AddKnowledgeFileResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class AddKnowledgeFileResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddKnowledgeFileResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, AddKnowledgeFileResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    AddKnowledgeFileResponse() = default ;
    AddKnowledgeFileResponse(const AddKnowledgeFileResponse &) = default ;
    AddKnowledgeFileResponse(AddKnowledgeFileResponse &&) = default ;
    AddKnowledgeFileResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddKnowledgeFileResponse() = default ;
    AddKnowledgeFileResponse& operator=(const AddKnowledgeFileResponse &) = default ;
    AddKnowledgeFileResponse& operator=(AddKnowledgeFileResponse &&) = default ;
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
    inline AddKnowledgeFileResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline AddKnowledgeFileResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline AddKnowledgeFileResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const AddKnowledgeFileResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, AddKnowledgeFileResponseBody) };
    inline AddKnowledgeFileResponseBody getBody() { DARABONBA_PTR_GET(body_, AddKnowledgeFileResponseBody) };
    inline AddKnowledgeFileResponse& setBody(const AddKnowledgeFileResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline AddKnowledgeFileResponse& setBody(AddKnowledgeFileResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<AddKnowledgeFileResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
