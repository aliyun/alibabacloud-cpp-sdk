// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENUMBERBINDINGSOFINSTANCERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UPDATENUMBERBINDINGSOFINSTANCERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UpdateNumberBindingsOfInstanceResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class UpdateNumberBindingsOfInstanceResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNumberBindingsOfInstanceResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNumberBindingsOfInstanceResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateNumberBindingsOfInstanceResponse() = default ;
    UpdateNumberBindingsOfInstanceResponse(const UpdateNumberBindingsOfInstanceResponse &) = default ;
    UpdateNumberBindingsOfInstanceResponse(UpdateNumberBindingsOfInstanceResponse &&) = default ;
    UpdateNumberBindingsOfInstanceResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNumberBindingsOfInstanceResponse() = default ;
    UpdateNumberBindingsOfInstanceResponse& operator=(const UpdateNumberBindingsOfInstanceResponse &) = default ;
    UpdateNumberBindingsOfInstanceResponse& operator=(UpdateNumberBindingsOfInstanceResponse &&) = default ;
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
    inline UpdateNumberBindingsOfInstanceResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UpdateNumberBindingsOfInstanceResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UpdateNumberBindingsOfInstanceResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateNumberBindingsOfInstanceResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateNumberBindingsOfInstanceResponseBody) };
    inline UpdateNumberBindingsOfInstanceResponseBody getBody() { DARABONBA_PTR_GET(body_, UpdateNumberBindingsOfInstanceResponseBody) };
    inline UpdateNumberBindingsOfInstanceResponse& setBody(const UpdateNumberBindingsOfInstanceResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateNumberBindingsOfInstanceResponse& setBody(UpdateNumberBindingsOfInstanceResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<UpdateNumberBindingsOfInstanceResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
