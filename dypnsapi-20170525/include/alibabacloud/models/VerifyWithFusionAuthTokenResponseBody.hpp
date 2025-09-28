// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYWITHFUSIONAUTHTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_VERIFYWITHFUSIONAUTHTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VerifyWithFusionAuthTokenResponseBodyModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class VerifyWithFusionAuthTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyWithFusionAuthTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyWithFusionAuthTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    VerifyWithFusionAuthTokenResponseBody() = default ;
    VerifyWithFusionAuthTokenResponseBody(const VerifyWithFusionAuthTokenResponseBody &) = default ;
    VerifyWithFusionAuthTokenResponseBody(VerifyWithFusionAuthTokenResponseBody &&) = default ;
    VerifyWithFusionAuthTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyWithFusionAuthTokenResponseBody() = default ;
    VerifyWithFusionAuthTokenResponseBody& operator=(const VerifyWithFusionAuthTokenResponseBody &) = default ;
    VerifyWithFusionAuthTokenResponseBody& operator=(VerifyWithFusionAuthTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->model_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline VerifyWithFusionAuthTokenResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline VerifyWithFusionAuthTokenResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const VerifyWithFusionAuthTokenResponseBodyModel & model() const { DARABONBA_PTR_GET_CONST(model_, VerifyWithFusionAuthTokenResponseBodyModel) };
    inline VerifyWithFusionAuthTokenResponseBodyModel model() { DARABONBA_PTR_GET(model_, VerifyWithFusionAuthTokenResponseBodyModel) };
    inline VerifyWithFusionAuthTokenResponseBody& setModel(const VerifyWithFusionAuthTokenResponseBodyModel & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline VerifyWithFusionAuthTokenResponseBody& setModel(VerifyWithFusionAuthTokenResponseBodyModel && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline VerifyWithFusionAuthTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline VerifyWithFusionAuthTokenResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. If OK is returned, the request is successful. Other values indicate that the request failed. For more information, see Error codes.
    std::shared_ptr<string> code_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The returned data.
    std::shared_ptr<VerifyWithFusionAuthTokenResponseBodyModel> model_ = nullptr;
    // The request ID, which is used to troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful. Valid values: true false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
