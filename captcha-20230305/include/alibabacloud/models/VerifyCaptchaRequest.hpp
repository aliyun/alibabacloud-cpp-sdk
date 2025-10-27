// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCAPTCHAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCAPTCHAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Captcha20230305
{
namespace Models
{
  class VerifyCaptchaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyCaptchaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CaptchaVerifyParam, captchaVerifyParam_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyCaptchaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CaptchaVerifyParam, captchaVerifyParam_);
    };
    VerifyCaptchaRequest() = default ;
    VerifyCaptchaRequest(const VerifyCaptchaRequest &) = default ;
    VerifyCaptchaRequest(VerifyCaptchaRequest &&) = default ;
    VerifyCaptchaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyCaptchaRequest() = default ;
    VerifyCaptchaRequest& operator=(const VerifyCaptchaRequest &) = default ;
    VerifyCaptchaRequest& operator=(VerifyCaptchaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->captchaVerifyParam_ == nullptr; };
    // captchaVerifyParam Field Functions 
    bool hasCaptchaVerifyParam() const { return this->captchaVerifyParam_ != nullptr;};
    void deleteCaptchaVerifyParam() { this->captchaVerifyParam_ = nullptr;};
    inline string captchaVerifyParam() const { DARABONBA_PTR_GET_DEFAULT(captchaVerifyParam_, "") };
    inline VerifyCaptchaRequest& setCaptchaVerifyParam(string captchaVerifyParam) { DARABONBA_PTR_SET_VALUE(captchaVerifyParam_, captchaVerifyParam) };


  protected:
    std::shared_ptr<string> captchaVerifyParam_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Captcha20230305
#endif
