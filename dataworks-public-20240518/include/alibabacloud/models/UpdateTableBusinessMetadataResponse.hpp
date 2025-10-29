// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETABLEBUSINESSMETADATARESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UPDATETABLEBUSINESSMETADATARESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UpdateTableBusinessMetadataResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateTableBusinessMetadataResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTableBusinessMetadataResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTableBusinessMetadataResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateTableBusinessMetadataResponse() = default ;
    UpdateTableBusinessMetadataResponse(const UpdateTableBusinessMetadataResponse &) = default ;
    UpdateTableBusinessMetadataResponse(UpdateTableBusinessMetadataResponse &&) = default ;
    UpdateTableBusinessMetadataResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTableBusinessMetadataResponse() = default ;
    UpdateTableBusinessMetadataResponse& operator=(const UpdateTableBusinessMetadataResponse &) = default ;
    UpdateTableBusinessMetadataResponse& operator=(UpdateTableBusinessMetadataResponse &&) = default ;
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
    inline UpdateTableBusinessMetadataResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UpdateTableBusinessMetadataResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UpdateTableBusinessMetadataResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateTableBusinessMetadataResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, UpdateTableBusinessMetadataResponseBody) };
    inline UpdateTableBusinessMetadataResponseBody body() { DARABONBA_PTR_GET(body_, UpdateTableBusinessMetadataResponseBody) };
    inline UpdateTableBusinessMetadataResponse& setBody(const UpdateTableBusinessMetadataResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateTableBusinessMetadataResponse& setBody(UpdateTableBusinessMetadataResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<UpdateTableBusinessMetadataResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
