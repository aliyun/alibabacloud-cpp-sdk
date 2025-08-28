// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXPRESSCONNECTTRAFFICQOSQUEUERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXPRESSCONNECTTRAFFICQOSQUEUERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CreateExpressConnectTrafficQosQueueResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateExpressConnectTrafficQosQueueResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExpressConnectTrafficQosQueueResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExpressConnectTrafficQosQueueResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateExpressConnectTrafficQosQueueResponse() = default ;
    CreateExpressConnectTrafficQosQueueResponse(const CreateExpressConnectTrafficQosQueueResponse &) = default ;
    CreateExpressConnectTrafficQosQueueResponse(CreateExpressConnectTrafficQosQueueResponse &&) = default ;
    CreateExpressConnectTrafficQosQueueResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExpressConnectTrafficQosQueueResponse() = default ;
    CreateExpressConnectTrafficQosQueueResponse& operator=(const CreateExpressConnectTrafficQosQueueResponse &) = default ;
    CreateExpressConnectTrafficQosQueueResponse& operator=(CreateExpressConnectTrafficQosQueueResponse &&) = default ;
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
    inline CreateExpressConnectTrafficQosQueueResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreateExpressConnectTrafficQosQueueResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline CreateExpressConnectTrafficQosQueueResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateExpressConnectTrafficQosQueueResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, CreateExpressConnectTrafficQosQueueResponseBody) };
    inline CreateExpressConnectTrafficQosQueueResponseBody body() { DARABONBA_PTR_GET(body_, CreateExpressConnectTrafficQosQueueResponseBody) };
    inline CreateExpressConnectTrafficQosQueueResponse& setBody(const CreateExpressConnectTrafficQosQueueResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateExpressConnectTrafficQosQueueResponse& setBody(CreateExpressConnectTrafficQosQueueResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<CreateExpressConnectTrafficQosQueueResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
