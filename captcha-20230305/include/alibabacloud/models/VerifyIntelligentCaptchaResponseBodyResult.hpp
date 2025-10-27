// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYINTELLIGENTCAPTCHARESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_VERIFYINTELLIGENTCAPTCHARESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Captcha20230305
{
namespace Models
{
  class VerifyIntelligentCaptchaResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyIntelligentCaptchaResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_TO_JSON(VerifyCode, verifyCode_);
      DARABONBA_PTR_TO_JSON(VerifyResult, verifyResult_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyIntelligentCaptchaResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
      DARABONBA_PTR_FROM_JSON(VerifyCode, verifyCode_);
      DARABONBA_PTR_FROM_JSON(VerifyResult, verifyResult_);
    };
    VerifyIntelligentCaptchaResponseBodyResult() = default ;
    VerifyIntelligentCaptchaResponseBodyResult(const VerifyIntelligentCaptchaResponseBodyResult &) = default ;
    VerifyIntelligentCaptchaResponseBodyResult(VerifyIntelligentCaptchaResponseBodyResult &&) = default ;
    VerifyIntelligentCaptchaResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyIntelligentCaptchaResponseBodyResult() = default ;
    VerifyIntelligentCaptchaResponseBodyResult& operator=(const VerifyIntelligentCaptchaResponseBodyResult &) = default ;
    VerifyIntelligentCaptchaResponseBodyResult& operator=(VerifyIntelligentCaptchaResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certifyId_ == nullptr
        && return this->verifyCode_ == nullptr && return this->verifyResult_ == nullptr; };
    // certifyId Field Functions 
    bool hasCertifyId() const { return this->certifyId_ != nullptr;};
    void deleteCertifyId() { this->certifyId_ = nullptr;};
    inline string certifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
    inline VerifyIntelligentCaptchaResponseBodyResult& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


    // verifyCode Field Functions 
    bool hasVerifyCode() const { return this->verifyCode_ != nullptr;};
    void deleteVerifyCode() { this->verifyCode_ = nullptr;};
    inline string verifyCode() const { DARABONBA_PTR_GET_DEFAULT(verifyCode_, "") };
    inline VerifyIntelligentCaptchaResponseBodyResult& setVerifyCode(string verifyCode) { DARABONBA_PTR_SET_VALUE(verifyCode_, verifyCode) };


    // verifyResult Field Functions 
    bool hasVerifyResult() const { return this->verifyResult_ != nullptr;};
    void deleteVerifyResult() { this->verifyResult_ = nullptr;};
    inline bool verifyResult() const { DARABONBA_PTR_GET_DEFAULT(verifyResult_, false) };
    inline VerifyIntelligentCaptchaResponseBodyResult& setVerifyResult(bool verifyResult) { DARABONBA_PTR_SET_VALUE(verifyResult_, verifyResult) };


  protected:
    std::shared_ptr<string> certifyId_ = nullptr;
    std::shared_ptr<string> verifyCode_ = nullptr;
    std::shared_ptr<bool> verifyResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Captcha20230305
#endif
