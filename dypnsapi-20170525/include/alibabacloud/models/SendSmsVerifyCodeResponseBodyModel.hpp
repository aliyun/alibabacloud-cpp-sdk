// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDSMSVERIFYCODERESPONSEBODYMODEL_HPP_
#define ALIBABACLOUD_MODELS_SENDSMSVERIFYCODERESPONSEBODYMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class SendSmsVerifyCodeResponseBodyModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendSmsVerifyCodeResponseBodyModel& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VerifyCode, verifyCode_);
    };
    friend void from_json(const Darabonba::Json& j, SendSmsVerifyCodeResponseBodyModel& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VerifyCode, verifyCode_);
    };
    SendSmsVerifyCodeResponseBodyModel() = default ;
    SendSmsVerifyCodeResponseBodyModel(const SendSmsVerifyCodeResponseBodyModel &) = default ;
    SendSmsVerifyCodeResponseBodyModel(SendSmsVerifyCodeResponseBodyModel &&) = default ;
    SendSmsVerifyCodeResponseBodyModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendSmsVerifyCodeResponseBodyModel() = default ;
    SendSmsVerifyCodeResponseBodyModel& operator=(const SendSmsVerifyCodeResponseBodyModel &) = default ;
    SendSmsVerifyCodeResponseBodyModel& operator=(SendSmsVerifyCodeResponseBodyModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizId_ != nullptr
        && this->outId_ != nullptr && this->requestId_ != nullptr && this->verifyCode_ != nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline SendSmsVerifyCodeResponseBodyModel& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string outId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline SendSmsVerifyCodeResponseBodyModel& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendSmsVerifyCodeResponseBodyModel& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // verifyCode Field Functions 
    bool hasVerifyCode() const { return this->verifyCode_ != nullptr;};
    void deleteVerifyCode() { this->verifyCode_ = nullptr;};
    inline string verifyCode() const { DARABONBA_PTR_GET_DEFAULT(verifyCode_, "") };
    inline SendSmsVerifyCodeResponseBodyModel& setVerifyCode(string verifyCode) { DARABONBA_PTR_SET_VALUE(verifyCode_, verifyCode) };


  protected:
    // The business ID.
    std::shared_ptr<string> bizId_ = nullptr;
    // The external ID.
    std::shared_ptr<string> outId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The verification code.
    std::shared_ptr<string> verifyCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
