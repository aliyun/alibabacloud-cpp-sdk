// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDLIVEMESSAGEGROUPRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_SENDLIVEMESSAGEGROUPRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SendLiveMessageGroupResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendLiveMessageGroupResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, SendLiveMessageGroupResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    SendLiveMessageGroupResponse() = default ;
    SendLiveMessageGroupResponse(const SendLiveMessageGroupResponse &) = default ;
    SendLiveMessageGroupResponse(SendLiveMessageGroupResponse &&) = default ;
    SendLiveMessageGroupResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendLiveMessageGroupResponse() = default ;
    SendLiveMessageGroupResponse& operator=(const SendLiveMessageGroupResponse &) = default ;
    SendLiveMessageGroupResponse& operator=(SendLiveMessageGroupResponse &&) = default ;
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
    inline SendLiveMessageGroupResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline SendLiveMessageGroupResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline SendLiveMessageGroupResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SendLiveMessageGroupResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, SendLiveMessageGroupResponseBody) };
    inline SendLiveMessageGroupResponseBody body() { DARABONBA_PTR_GET(body_, SendLiveMessageGroupResponseBody) };
    inline SendLiveMessageGroupResponse& setBody(const SendLiveMessageGroupResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline SendLiveMessageGroupResponse& setBody(SendLiveMessageGroupResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<SendLiveMessageGroupResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
