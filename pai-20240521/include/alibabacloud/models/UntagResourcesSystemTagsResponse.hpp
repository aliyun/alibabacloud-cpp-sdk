// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNTAGRESOURCESSYSTEMTAGSRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UNTAGRESOURCESSYSTEMTAGSRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UntagResourcesSystemTagsResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pai20240521
{
namespace Models
{
  class UntagResourcesSystemTagsResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UntagResourcesSystemTagsResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UntagResourcesSystemTagsResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UntagResourcesSystemTagsResponse() = default ;
    UntagResourcesSystemTagsResponse(const UntagResourcesSystemTagsResponse &) = default ;
    UntagResourcesSystemTagsResponse(UntagResourcesSystemTagsResponse &&) = default ;
    UntagResourcesSystemTagsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UntagResourcesSystemTagsResponse() = default ;
    UntagResourcesSystemTagsResponse& operator=(const UntagResourcesSystemTagsResponse &) = default ;
    UntagResourcesSystemTagsResponse& operator=(UntagResourcesSystemTagsResponse &&) = default ;
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
    inline UntagResourcesSystemTagsResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UntagResourcesSystemTagsResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UntagResourcesSystemTagsResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UntagResourcesSystemTagsResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, UntagResourcesSystemTagsResponseBody) };
    inline UntagResourcesSystemTagsResponseBody getBody() { DARABONBA_PTR_GET(body_, UntagResourcesSystemTagsResponseBody) };
    inline UntagResourcesSystemTagsResponse& setBody(const UntagResourcesSystemTagsResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UntagResourcesSystemTagsResponse& setBody(UntagResourcesSystemTagsResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<UntagResourcesSystemTagsResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pai20240521
#endif
