// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTICDBBRANCHRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTICDBBRANCHRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateAgenticDBBranchResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateAgenticDBBranchResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgenticDBBranchResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgenticDBBranchResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateAgenticDBBranchResponse() = default ;
    CreateAgenticDBBranchResponse(const CreateAgenticDBBranchResponse &) = default ;
    CreateAgenticDBBranchResponse(CreateAgenticDBBranchResponse &&) = default ;
    CreateAgenticDBBranchResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgenticDBBranchResponse() = default ;
    CreateAgenticDBBranchResponse& operator=(const CreateAgenticDBBranchResponse &) = default ;
    CreateAgenticDBBranchResponse& operator=(CreateAgenticDBBranchResponse &&) = default ;
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
    inline CreateAgenticDBBranchResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreateAgenticDBBranchResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CreateAgenticDBBranchResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateAgenticDBBranchResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateAgenticDBBranchResponseBody) };
    inline CreateAgenticDBBranchResponseBody getBody() { DARABONBA_PTR_GET(body_, CreateAgenticDBBranchResponseBody) };
    inline CreateAgenticDBBranchResponse& setBody(const CreateAgenticDBBranchResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateAgenticDBBranchResponse& setBody(CreateAgenticDBBranchResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<CreateAgenticDBBranchResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
