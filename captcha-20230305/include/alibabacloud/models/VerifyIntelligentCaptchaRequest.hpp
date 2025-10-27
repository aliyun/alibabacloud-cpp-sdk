// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYINTELLIGENTCAPTCHAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYINTELLIGENTCAPTCHAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Captcha20230305
{
namespace Models
{
  class VerifyIntelligentCaptchaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyIntelligentCaptchaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CaptchaVerifyParam, captchaVerifyParam_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyIntelligentCaptchaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CaptchaVerifyParam, captchaVerifyParam_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    VerifyIntelligentCaptchaRequest() = default ;
    VerifyIntelligentCaptchaRequest(const VerifyIntelligentCaptchaRequest &) = default ;
    VerifyIntelligentCaptchaRequest(VerifyIntelligentCaptchaRequest &&) = default ;
    VerifyIntelligentCaptchaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyIntelligentCaptchaRequest() = default ;
    VerifyIntelligentCaptchaRequest& operator=(const VerifyIntelligentCaptchaRequest &) = default ;
    VerifyIntelligentCaptchaRequest& operator=(VerifyIntelligentCaptchaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->captchaVerifyParam_ == nullptr
        && return this->sceneId_ == nullptr; };
    // captchaVerifyParam Field Functions 
    bool hasCaptchaVerifyParam() const { return this->captchaVerifyParam_ != nullptr;};
    void deleteCaptchaVerifyParam() { this->captchaVerifyParam_ = nullptr;};
    inline string captchaVerifyParam() const { DARABONBA_PTR_GET_DEFAULT(captchaVerifyParam_, "") };
    inline VerifyIntelligentCaptchaRequest& setCaptchaVerifyParam(string captchaVerifyParam) { DARABONBA_PTR_SET_VALUE(captchaVerifyParam_, captchaVerifyParam) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline VerifyIntelligentCaptchaRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    std::shared_ptr<string> captchaVerifyParam_ = nullptr;
    std::shared_ptr<string> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Captcha20230305
#endif
