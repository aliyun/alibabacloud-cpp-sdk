// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITSITEWAFSETTINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITSITEWAFSETTINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WafSiteSettings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class EditSiteWafSettingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditSiteWafSettingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Settings, settings_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, EditSiteWafSettingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Settings, settings_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    EditSiteWafSettingsRequest() = default ;
    EditSiteWafSettingsRequest(const EditSiteWafSettingsRequest &) = default ;
    EditSiteWafSettingsRequest(EditSiteWafSettingsRequest &&) = default ;
    EditSiteWafSettingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditSiteWafSettingsRequest() = default ;
    EditSiteWafSettingsRequest& operator=(const EditSiteWafSettingsRequest &) = default ;
    EditSiteWafSettingsRequest& operator=(EditSiteWafSettingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->settings_ == nullptr
        && this->siteId_ == nullptr && this->siteVersion_ == nullptr; };
    // settings Field Functions 
    bool hasSettings() const { return this->settings_ != nullptr;};
    void deleteSettings() { this->settings_ = nullptr;};
    inline const WafSiteSettings & getSettings() const { DARABONBA_PTR_GET_CONST(settings_, WafSiteSettings) };
    inline WafSiteSettings getSettings() { DARABONBA_PTR_GET(settings_, WafSiteSettings) };
    inline EditSiteWafSettingsRequest& setSettings(const WafSiteSettings & settings) { DARABONBA_PTR_SET_VALUE(settings_, settings) };
    inline EditSiteWafSettingsRequest& setSettings(WafSiteSettings && settings) { DARABONBA_PTR_SET_RVALUE(settings_, settings) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline EditSiteWafSettingsRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline EditSiteWafSettingsRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // WAF configuration information for the site, passed in JSON format.
    shared_ptr<WafSiteSettings> settings_ {};
    // Site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) API.
    shared_ptr<int64_t> siteId_ {};
    // Site version.
    shared_ptr<int32_t> siteVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
