// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_POSTINNERUPLOADCONVERTPACKAGERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_POSTINNERUPLOADCONVERTPACKAGERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/PostInnerUploadConvertPackageResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class PostInnerUploadConvertPackageResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PostInnerUploadConvertPackageResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, PostInnerUploadConvertPackageResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    PostInnerUploadConvertPackageResponse() = default ;
    PostInnerUploadConvertPackageResponse(const PostInnerUploadConvertPackageResponse &) = default ;
    PostInnerUploadConvertPackageResponse(PostInnerUploadConvertPackageResponse &&) = default ;
    PostInnerUploadConvertPackageResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PostInnerUploadConvertPackageResponse() = default ;
    PostInnerUploadConvertPackageResponse& operator=(const PostInnerUploadConvertPackageResponse &) = default ;
    PostInnerUploadConvertPackageResponse& operator=(PostInnerUploadConvertPackageResponse &&) = default ;
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
    inline PostInnerUploadConvertPackageResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline PostInnerUploadConvertPackageResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline PostInnerUploadConvertPackageResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PostInnerUploadConvertPackageResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, PostInnerUploadConvertPackageResponseBody) };
    inline PostInnerUploadConvertPackageResponseBody getBody() { DARABONBA_PTR_GET(body_, PostInnerUploadConvertPackageResponseBody) };
    inline PostInnerUploadConvertPackageResponse& setBody(const PostInnerUploadConvertPackageResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline PostInnerUploadConvertPackageResponse& setBody(PostInnerUploadConvertPackageResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<PostInnerUploadConvertPackageResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
