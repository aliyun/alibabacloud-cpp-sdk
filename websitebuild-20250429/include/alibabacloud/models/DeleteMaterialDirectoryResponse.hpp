// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMATERIALDIRECTORYRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DELETEMATERIALDIRECTORYRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DeleteMaterialDirectoryResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class DeleteMaterialDirectoryResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMaterialDirectoryResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMaterialDirectoryResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DeleteMaterialDirectoryResponse() = default ;
    DeleteMaterialDirectoryResponse(const DeleteMaterialDirectoryResponse &) = default ;
    DeleteMaterialDirectoryResponse(DeleteMaterialDirectoryResponse &&) = default ;
    DeleteMaterialDirectoryResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMaterialDirectoryResponse() = default ;
    DeleteMaterialDirectoryResponse& operator=(const DeleteMaterialDirectoryResponse &) = default ;
    DeleteMaterialDirectoryResponse& operator=(DeleteMaterialDirectoryResponse &&) = default ;
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
    inline DeleteMaterialDirectoryResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DeleteMaterialDirectoryResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DeleteMaterialDirectoryResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeleteMaterialDirectoryResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, DeleteMaterialDirectoryResponseBody) };
    inline DeleteMaterialDirectoryResponseBody getBody() { DARABONBA_PTR_GET(body_, DeleteMaterialDirectoryResponseBody) };
    inline DeleteMaterialDirectoryResponse& setBody(const DeleteMaterialDirectoryResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DeleteMaterialDirectoryResponse& setBody(DeleteMaterialDirectoryResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<DeleteMaterialDirectoryResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
