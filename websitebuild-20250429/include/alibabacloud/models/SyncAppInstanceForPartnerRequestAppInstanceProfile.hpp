// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCAPPINSTANCEFORPARTNERREQUESTAPPINSTANCEPROFILE_HPP_
#define ALIBABACLOUD_MODELS_SYNCAPPINSTANCEFORPARTNERREQUESTAPPINSTANCEPROFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class SyncAppInstanceForPartnerRequestAppInstanceProfile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncAppInstanceForPartnerRequestAppInstanceProfile& obj) { 
      DARABONBA_PTR_TO_JSON(DeployArea, deployArea_);
      DARABONBA_PTR_TO_JSON(LxInstanceId, lxInstanceId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_TO_JSON(TemplateEtag, templateEtag_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, SyncAppInstanceForPartnerRequestAppInstanceProfile& obj) { 
      DARABONBA_PTR_FROM_JSON(DeployArea, deployArea_);
      DARABONBA_PTR_FROM_JSON(LxInstanceId, lxInstanceId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_FROM_JSON(TemplateEtag, templateEtag_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    SyncAppInstanceForPartnerRequestAppInstanceProfile() = default ;
    SyncAppInstanceForPartnerRequestAppInstanceProfile(const SyncAppInstanceForPartnerRequestAppInstanceProfile &) = default ;
    SyncAppInstanceForPartnerRequestAppInstanceProfile(SyncAppInstanceForPartnerRequestAppInstanceProfile &&) = default ;
    SyncAppInstanceForPartnerRequestAppInstanceProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncAppInstanceForPartnerRequestAppInstanceProfile() = default ;
    SyncAppInstanceForPartnerRequestAppInstanceProfile& operator=(const SyncAppInstanceForPartnerRequestAppInstanceProfile &) = default ;
    SyncAppInstanceForPartnerRequestAppInstanceProfile& operator=(SyncAppInstanceForPartnerRequestAppInstanceProfile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deployArea_ != nullptr
        && this->lxInstanceId_ != nullptr && this->orderId_ != nullptr && this->siteVersion_ != nullptr && this->templateEtag_ != nullptr && this->templateId_ != nullptr; };
    // deployArea Field Functions 
    bool hasDeployArea() const { return this->deployArea_ != nullptr;};
    void deleteDeployArea() { this->deployArea_ = nullptr;};
    inline string deployArea() const { DARABONBA_PTR_GET_DEFAULT(deployArea_, "") };
    inline SyncAppInstanceForPartnerRequestAppInstanceProfile& setDeployArea(string deployArea) { DARABONBA_PTR_SET_VALUE(deployArea_, deployArea) };


    // lxInstanceId Field Functions 
    bool hasLxInstanceId() const { return this->lxInstanceId_ != nullptr;};
    void deleteLxInstanceId() { this->lxInstanceId_ = nullptr;};
    inline string lxInstanceId() const { DARABONBA_PTR_GET_DEFAULT(lxInstanceId_, "") };
    inline SyncAppInstanceForPartnerRequestAppInstanceProfile& setLxInstanceId(string lxInstanceId) { DARABONBA_PTR_SET_VALUE(lxInstanceId_, lxInstanceId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline SyncAppInstanceForPartnerRequestAppInstanceProfile& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline string siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, "") };
    inline SyncAppInstanceForPartnerRequestAppInstanceProfile& setSiteVersion(string siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


    // templateEtag Field Functions 
    bool hasTemplateEtag() const { return this->templateEtag_ != nullptr;};
    void deleteTemplateEtag() { this->templateEtag_ = nullptr;};
    inline string templateEtag() const { DARABONBA_PTR_GET_DEFAULT(templateEtag_, "") };
    inline SyncAppInstanceForPartnerRequestAppInstanceProfile& setTemplateEtag(string templateEtag) { DARABONBA_PTR_SET_VALUE(templateEtag_, templateEtag) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SyncAppInstanceForPartnerRequestAppInstanceProfile& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    std::shared_ptr<string> deployArea_ = nullptr;
    std::shared_ptr<string> lxInstanceId_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> siteVersion_ = nullptr;
    std::shared_ptr<string> templateEtag_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
