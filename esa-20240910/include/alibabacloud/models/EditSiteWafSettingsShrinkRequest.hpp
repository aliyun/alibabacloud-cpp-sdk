// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITSITEWAFSETTINGSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITSITEWAFSETTINGSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class EditSiteWafSettingsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditSiteWafSettingsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Settings, settingsShrink_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, EditSiteWafSettingsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Settings, settingsShrink_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    EditSiteWafSettingsShrinkRequest() = default ;
    EditSiteWafSettingsShrinkRequest(const EditSiteWafSettingsShrinkRequest &) = default ;
    EditSiteWafSettingsShrinkRequest(EditSiteWafSettingsShrinkRequest &&) = default ;
    EditSiteWafSettingsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditSiteWafSettingsShrinkRequest() = default ;
    EditSiteWafSettingsShrinkRequest& operator=(const EditSiteWafSettingsShrinkRequest &) = default ;
    EditSiteWafSettingsShrinkRequest& operator=(EditSiteWafSettingsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->settingsShrink_ != nullptr
        && this->siteId_ != nullptr && this->siteVersion_ != nullptr; };
    // settingsShrink Field Functions 
    bool hasSettingsShrink() const { return this->settingsShrink_ != nullptr;};
    void deleteSettingsShrink() { this->settingsShrink_ = nullptr;};
    inline string settingsShrink() const { DARABONBA_PTR_GET_DEFAULT(settingsShrink_, "") };
    inline EditSiteWafSettingsShrinkRequest& setSettingsShrink(string settingsShrink) { DARABONBA_PTR_SET_VALUE(settingsShrink_, settingsShrink) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline EditSiteWafSettingsShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline EditSiteWafSettingsShrinkRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // WAF configuration information for the site, passed in JSON format.
    std::shared_ptr<string> settingsShrink_ = nullptr;
    // Site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) API.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // Site version.
    std::shared_ptr<int32_t> siteVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
