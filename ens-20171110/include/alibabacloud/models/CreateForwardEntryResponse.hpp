// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFORWARDENTRYRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATEFORWARDENTRYRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateForwardEntryResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateForwardEntryResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateForwardEntryResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateForwardEntryResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateForwardEntryResponse() = default ;
    CreateForwardEntryResponse(const CreateForwardEntryResponse &) = default ;
    CreateForwardEntryResponse(CreateForwardEntryResponse &&) = default ;
    CreateForwardEntryResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateForwardEntryResponse() = default ;
    CreateForwardEntryResponse& operator=(const CreateForwardEntryResponse &) = default ;
    CreateForwardEntryResponse& operator=(CreateForwardEntryResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->statusCode_ != nullptr && this->body_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline CreateForwardEntryResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreateForwardEntryResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CreateForwardEntryResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateForwardEntryResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, CreateForwardEntryResponseBody) };
    inline CreateForwardEntryResponseBody body() { DARABONBA_PTR_GET(body_, CreateForwardEntryResponseBody) };
    inline CreateForwardEntryResponse& setBody(const CreateForwardEntryResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateForwardEntryResponse& setBody(CreateForwardEntryResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<CreateForwardEntryResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
