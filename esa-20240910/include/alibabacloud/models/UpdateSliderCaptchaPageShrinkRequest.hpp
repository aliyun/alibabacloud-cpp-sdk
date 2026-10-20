// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESLIDERCAPTCHAPAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESLIDERCAPTCHAPAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateSliderCaptchaPageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSliderCaptchaPageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configsShrink_);
      DARABONBA_PTR_TO_JSON(CustomContent, customContent_);
      DARABONBA_PTR_TO_JSON(ForceLanguage, forceLanguage_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SiteIds, siteIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSliderCaptchaPageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configsShrink_);
      DARABONBA_PTR_FROM_JSON(CustomContent, customContent_);
      DARABONBA_PTR_FROM_JSON(ForceLanguage, forceLanguage_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SiteIds, siteIdsShrink_);
    };
    UpdateSliderCaptchaPageShrinkRequest() = default ;
    UpdateSliderCaptchaPageShrinkRequest(const UpdateSliderCaptchaPageShrinkRequest &) = default ;
    UpdateSliderCaptchaPageShrinkRequest(UpdateSliderCaptchaPageShrinkRequest &&) = default ;
    UpdateSliderCaptchaPageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSliderCaptchaPageShrinkRequest() = default ;
    UpdateSliderCaptchaPageShrinkRequest& operator=(const UpdateSliderCaptchaPageShrinkRequest &) = default ;
    UpdateSliderCaptchaPageShrinkRequest& operator=(UpdateSliderCaptchaPageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configsShrink_ == nullptr
        && this->customContent_ == nullptr && this->forceLanguage_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->siteIdsShrink_ == nullptr; };
    // configsShrink Field Functions 
    bool hasConfigsShrink() const { return this->configsShrink_ != nullptr;};
    void deleteConfigsShrink() { this->configsShrink_ = nullptr;};
    inline string getConfigsShrink() const { DARABONBA_PTR_GET_DEFAULT(configsShrink_, "") };
    inline UpdateSliderCaptchaPageShrinkRequest& setConfigsShrink(string configsShrink) { DARABONBA_PTR_SET_VALUE(configsShrink_, configsShrink) };


    // customContent Field Functions 
    bool hasCustomContent() const { return this->customContent_ != nullptr;};
    void deleteCustomContent() { this->customContent_ = nullptr;};
    inline string getCustomContent() const { DARABONBA_PTR_GET_DEFAULT(customContent_, "") };
    inline UpdateSliderCaptchaPageShrinkRequest& setCustomContent(string customContent) { DARABONBA_PTR_SET_VALUE(customContent_, customContent) };


    // forceLanguage Field Functions 
    bool hasForceLanguage() const { return this->forceLanguage_ != nullptr;};
    void deleteForceLanguage() { this->forceLanguage_ = nullptr;};
    inline string getForceLanguage() const { DARABONBA_PTR_GET_DEFAULT(forceLanguage_, "") };
    inline UpdateSliderCaptchaPageShrinkRequest& setForceLanguage(string forceLanguage) { DARABONBA_PTR_SET_VALUE(forceLanguage_, forceLanguage) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateSliderCaptchaPageShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateSliderCaptchaPageShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // siteIdsShrink Field Functions 
    bool hasSiteIdsShrink() const { return this->siteIdsShrink_ != nullptr;};
    void deleteSiteIdsShrink() { this->siteIdsShrink_ = nullptr;};
    inline string getSiteIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(siteIdsShrink_, "") };
    inline UpdateSliderCaptchaPageShrinkRequest& setSiteIdsShrink(string siteIdsShrink) { DARABONBA_PTR_SET_VALUE(siteIdsShrink_, siteIdsShrink) };


  protected:
    // The predefined configurations of the custom slider page.
    shared_ptr<string> configsShrink_ {};
    // The custom slider configuration.
    shared_ptr<string> customContent_ {};
    // The forced language.
    shared_ptr<string> forceLanguage_ {};
    // The ID of the custom slider page.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // The name of the custom slider page.
    shared_ptr<string> name_ {};
    // The list of bound site IDs.
    shared_ptr<string> siteIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
