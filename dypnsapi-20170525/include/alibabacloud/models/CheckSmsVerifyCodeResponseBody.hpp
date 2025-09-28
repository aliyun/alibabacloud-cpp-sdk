// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSMSVERIFYCODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKSMSVERIFYCODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CheckSmsVerifyCodeResponseBodyModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class CheckSmsVerifyCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckSmsVerifyCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CheckSmsVerifyCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CheckSmsVerifyCodeResponseBody() = default ;
    CheckSmsVerifyCodeResponseBody(const CheckSmsVerifyCodeResponseBody &) = default ;
    CheckSmsVerifyCodeResponseBody(CheckSmsVerifyCodeResponseBody &&) = default ;
    CheckSmsVerifyCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckSmsVerifyCodeResponseBody() = default ;
    CheckSmsVerifyCodeResponseBody& operator=(const CheckSmsVerifyCodeResponseBody &) = default ;
    CheckSmsVerifyCodeResponseBody& operator=(CheckSmsVerifyCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessDeniedDetail_ != nullptr
        && this->code_ != nullptr && this->message_ != nullptr && this->model_ != nullptr && this->success_ != nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string accessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CheckSmsVerifyCodeResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CheckSmsVerifyCodeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CheckSmsVerifyCodeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const CheckSmsVerifyCodeResponseBodyModel & model() const { DARABONBA_PTR_GET_CONST(model_, CheckSmsVerifyCodeResponseBodyModel) };
    inline CheckSmsVerifyCodeResponseBodyModel model() { DARABONBA_PTR_GET(model_, CheckSmsVerifyCodeResponseBodyModel) };
    inline CheckSmsVerifyCodeResponseBody& setModel(const CheckSmsVerifyCodeResponseBodyModel & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline CheckSmsVerifyCodeResponseBody& setModel(CheckSmsVerifyCodeResponseBodyModel && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CheckSmsVerifyCodeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details about the access denial.
    std::shared_ptr<string> accessDeniedDetail_ = nullptr;
    // The response code.
    // 
    // *   If OK is returned, the request is successful.
    // *   For more information about other error codes, see [Response codes](https://help.aliyun.com/zh/pnvs/developer-reference/api-return-code?spm=a2c4g.11174283.0.0.70c5616bkj38Wa).
    std::shared_ptr<string> code_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The returned data.
    std::shared_ptr<CheckSmsVerifyCodeResponseBodyModel> model_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
