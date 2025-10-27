// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCAPTCHARESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCAPTCHARESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Captcha20230305
{
namespace Models
{
  class VerifyCaptchaResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyCaptchaResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(VerifyResult, verifyResult_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyCaptchaResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(VerifyResult, verifyResult_);
    };
    VerifyCaptchaResponseBodyResult() = default ;
    VerifyCaptchaResponseBodyResult(const VerifyCaptchaResponseBodyResult &) = default ;
    VerifyCaptchaResponseBodyResult(VerifyCaptchaResponseBodyResult &&) = default ;
    VerifyCaptchaResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyCaptchaResponseBodyResult() = default ;
    VerifyCaptchaResponseBodyResult& operator=(const VerifyCaptchaResponseBodyResult &) = default ;
    VerifyCaptchaResponseBodyResult& operator=(VerifyCaptchaResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->verifyResult_ == nullptr; };
    // verifyResult Field Functions 
    bool hasVerifyResult() const { return this->verifyResult_ != nullptr;};
    void deleteVerifyResult() { this->verifyResult_ = nullptr;};
    inline bool verifyResult() const { DARABONBA_PTR_GET_DEFAULT(verifyResult_, false) };
    inline VerifyCaptchaResponseBodyResult& setVerifyResult(bool verifyResult) { DARABONBA_PTR_SET_VALUE(verifyResult_, verifyResult) };


  protected:
    std::shared_ptr<bool> verifyResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Captcha20230305
#endif
