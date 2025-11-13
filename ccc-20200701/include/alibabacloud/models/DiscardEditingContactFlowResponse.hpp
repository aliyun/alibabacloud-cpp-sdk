// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISCARDEDITINGCONTACTFLOWRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DISCARDEDITINGCONTACTFLOWRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DiscardEditingContactFlowResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class DiscardEditingContactFlowResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiscardEditingContactFlowResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DiscardEditingContactFlowResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DiscardEditingContactFlowResponse() = default ;
    DiscardEditingContactFlowResponse(const DiscardEditingContactFlowResponse &) = default ;
    DiscardEditingContactFlowResponse(DiscardEditingContactFlowResponse &&) = default ;
    DiscardEditingContactFlowResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiscardEditingContactFlowResponse() = default ;
    DiscardEditingContactFlowResponse& operator=(const DiscardEditingContactFlowResponse &) = default ;
    DiscardEditingContactFlowResponse& operator=(DiscardEditingContactFlowResponse &&) = default ;
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
    inline DiscardEditingContactFlowResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DiscardEditingContactFlowResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DiscardEditingContactFlowResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DiscardEditingContactFlowResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, DiscardEditingContactFlowResponseBody) };
    inline DiscardEditingContactFlowResponseBody body() { DARABONBA_PTR_GET(body_, DiscardEditingContactFlowResponseBody) };
    inline DiscardEditingContactFlowResponse& setBody(const DiscardEditingContactFlowResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DiscardEditingContactFlowResponse& setBody(DiscardEditingContactFlowResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<DiscardEditingContactFlowResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
