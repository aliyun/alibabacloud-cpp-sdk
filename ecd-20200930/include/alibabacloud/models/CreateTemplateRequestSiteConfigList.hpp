// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATEREQUESTSITECONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATEREQUESTSITECONFIGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateTemplateRequestSiteConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateRequestSiteConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(AppRuleId, appRuleId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateRequestSiteConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppRuleId, appRuleId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    CreateTemplateRequestSiteConfigList() = default ;
    CreateTemplateRequestSiteConfigList(const CreateTemplateRequestSiteConfigList &) = default ;
    CreateTemplateRequestSiteConfigList(CreateTemplateRequestSiteConfigList &&) = default ;
    CreateTemplateRequestSiteConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateRequestSiteConfigList() = default ;
    CreateTemplateRequestSiteConfigList& operator=(const CreateTemplateRequestSiteConfigList &) = default ;
    CreateTemplateRequestSiteConfigList& operator=(CreateTemplateRequestSiteConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appRuleId_ != nullptr
        && this->siteId_ != nullptr; };
    // appRuleId Field Functions 
    bool hasAppRuleId() const { return this->appRuleId_ != nullptr;};
    void deleteAppRuleId() { this->appRuleId_ = nullptr;};
    inline string appRuleId() const { DARABONBA_PTR_GET_DEFAULT(appRuleId_, "") };
    inline CreateTemplateRequestSiteConfigList& setAppRuleId(string appRuleId) { DARABONBA_PTR_SET_VALUE(appRuleId_, appRuleId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline string siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, "") };
    inline CreateTemplateRequestSiteConfigList& setSiteId(string siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    std::shared_ptr<string> appRuleId_ = nullptr;
    std::shared_ptr<string> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
