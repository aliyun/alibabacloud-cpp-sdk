// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETADVANCEDMONITORSTATERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_SETADVANCEDMONITORSTATERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/SetAdvancedMonitorStateResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class SetAdvancedMonitorStateResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAdvancedMonitorStateResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, SetAdvancedMonitorStateResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    SetAdvancedMonitorStateResponse() = default ;
    SetAdvancedMonitorStateResponse(const SetAdvancedMonitorStateResponse &) = default ;
    SetAdvancedMonitorStateResponse(SetAdvancedMonitorStateResponse &&) = default ;
    SetAdvancedMonitorStateResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAdvancedMonitorStateResponse() = default ;
    SetAdvancedMonitorStateResponse& operator=(const SetAdvancedMonitorStateResponse &) = default ;
    SetAdvancedMonitorStateResponse& operator=(SetAdvancedMonitorStateResponse &&) = default ;
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
    inline SetAdvancedMonitorStateResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline SetAdvancedMonitorStateResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline SetAdvancedMonitorStateResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SetAdvancedMonitorStateResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, SetAdvancedMonitorStateResponseBody) };
    inline SetAdvancedMonitorStateResponseBody getBody() { DARABONBA_PTR_GET(body_, SetAdvancedMonitorStateResponseBody) };
    inline SetAdvancedMonitorStateResponse& setBody(const SetAdvancedMonitorStateResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline SetAdvancedMonitorStateResponse& setBody(SetAdvancedMonitorStateResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<SetAdvancedMonitorStateResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
