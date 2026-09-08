// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMESSAGELANGUAGERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMESSAGELANGUAGERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UpdateMessageLanguageResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Notifications20241225
{
namespace Models
{
  class UpdateMessageLanguageResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMessageLanguageResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMessageLanguageResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateMessageLanguageResponse() = default ;
    UpdateMessageLanguageResponse(const UpdateMessageLanguageResponse &) = default ;
    UpdateMessageLanguageResponse(UpdateMessageLanguageResponse &&) = default ;
    UpdateMessageLanguageResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMessageLanguageResponse() = default ;
    UpdateMessageLanguageResponse& operator=(const UpdateMessageLanguageResponse &) = default ;
    UpdateMessageLanguageResponse& operator=(UpdateMessageLanguageResponse &&) = default ;
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
    inline UpdateMessageLanguageResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UpdateMessageLanguageResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UpdateMessageLanguageResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateMessageLanguageResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateMessageLanguageResponseBody) };
    inline UpdateMessageLanguageResponseBody getBody() { DARABONBA_PTR_GET(body_, UpdateMessageLanguageResponseBody) };
    inline UpdateMessageLanguageResponse& setBody(const UpdateMessageLanguageResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateMessageLanguageResponse& setBody(UpdateMessageLanguageResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<UpdateMessageLanguageResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Notifications20241225
#endif
