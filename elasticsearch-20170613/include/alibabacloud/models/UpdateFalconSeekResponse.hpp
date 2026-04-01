// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFALCONSEEKRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFALCONSEEKRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/UpdateFalconSeekResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateFalconSeekResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFalconSeekResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFalconSeekResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateFalconSeekResponse() = default ;
    UpdateFalconSeekResponse(const UpdateFalconSeekResponse &) = default ;
    UpdateFalconSeekResponse(UpdateFalconSeekResponse &&) = default ;
    UpdateFalconSeekResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFalconSeekResponse() = default ;
    UpdateFalconSeekResponse& operator=(const UpdateFalconSeekResponse &) = default ;
    UpdateFalconSeekResponse& operator=(UpdateFalconSeekResponse &&) = default ;
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
    inline UpdateFalconSeekResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UpdateFalconSeekResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline UpdateFalconSeekResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateFalconSeekResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateFalconSeekResponseBody) };
    inline UpdateFalconSeekResponseBody getBody() { DARABONBA_PTR_GET(body_, UpdateFalconSeekResponseBody) };
    inline UpdateFalconSeekResponse& setBody(const UpdateFalconSeekResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateFalconSeekResponse& setBody(UpdateFalconSeekResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<UpdateFalconSeekResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
