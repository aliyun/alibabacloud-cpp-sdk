// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPINSTANCEPROFILE_HPP_
#define ALIBABACLOUD_MODELS_APPINSTANCEPROFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class AppInstanceProfile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppInstanceProfile& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(ApplicationTypeText, applicationTypeText_);
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CustomerService, customerService_);
      DARABONBA_PTR_TO_JSON(DeployArea, deployArea_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrdTime, ordTime_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(PayTime, payTime_);
      DARABONBA_PTR_TO_JSON(SeoSite, seoSite_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_TO_JSON(SiteVersionText, siteVersionText_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(TemplateEtag, templateEtag_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, AppInstanceProfile& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(ApplicationTypeText, applicationTypeText_);
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CustomerService, customerService_);
      DARABONBA_PTR_FROM_JSON(DeployArea, deployArea_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrdTime, ordTime_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(PayTime, payTime_);
      DARABONBA_PTR_FROM_JSON(SeoSite, seoSite_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_FROM_JSON(SiteVersionText, siteVersionText_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(TemplateEtag, templateEtag_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    AppInstanceProfile() = default ;
    AppInstanceProfile(const AppInstanceProfile &) = default ;
    AppInstanceProfile(AppInstanceProfile &&) = default ;
    AppInstanceProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppInstanceProfile() = default ;
    AppInstanceProfile& operator=(const AppInstanceProfile &) = default ;
    AppInstanceProfile& operator=(AppInstanceProfile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationType_ == nullptr
        && return this->applicationTypeText_ == nullptr && return this->bizId_ == nullptr && return this->commodityCode_ == nullptr && return this->customerService_ == nullptr && return this->deployArea_ == nullptr
        && return this->instanceId_ == nullptr && return this->ordTime_ == nullptr && return this->orderId_ == nullptr && return this->payTime_ == nullptr && return this->seoSite_ == nullptr
        && return this->siteVersion_ == nullptr && return this->siteVersionText_ == nullptr && return this->source_ == nullptr && return this->templateEtag_ == nullptr && return this->templateId_ == nullptr; };
    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string applicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline AppInstanceProfile& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // applicationTypeText Field Functions 
    bool hasApplicationTypeText() const { return this->applicationTypeText_ != nullptr;};
    void deleteApplicationTypeText() { this->applicationTypeText_ = nullptr;};
    inline string applicationTypeText() const { DARABONBA_PTR_GET_DEFAULT(applicationTypeText_, "") };
    inline AppInstanceProfile& setApplicationTypeText(string applicationTypeText) { DARABONBA_PTR_SET_VALUE(applicationTypeText_, applicationTypeText) };


    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline AppInstanceProfile& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline AppInstanceProfile& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // customerService Field Functions 
    bool hasCustomerService() const { return this->customerService_ != nullptr;};
    void deleteCustomerService() { this->customerService_ = nullptr;};
    inline string customerService() const { DARABONBA_PTR_GET_DEFAULT(customerService_, "") };
    inline AppInstanceProfile& setCustomerService(string customerService) { DARABONBA_PTR_SET_VALUE(customerService_, customerService) };


    // deployArea Field Functions 
    bool hasDeployArea() const { return this->deployArea_ != nullptr;};
    void deleteDeployArea() { this->deployArea_ = nullptr;};
    inline string deployArea() const { DARABONBA_PTR_GET_DEFAULT(deployArea_, "") };
    inline AppInstanceProfile& setDeployArea(string deployArea) { DARABONBA_PTR_SET_VALUE(deployArea_, deployArea) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AppInstanceProfile& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ordTime Field Functions 
    bool hasOrdTime() const { return this->ordTime_ != nullptr;};
    void deleteOrdTime() { this->ordTime_ = nullptr;};
    inline string ordTime() const { DARABONBA_PTR_GET_DEFAULT(ordTime_, "") };
    inline AppInstanceProfile& setOrdTime(string ordTime) { DARABONBA_PTR_SET_VALUE(ordTime_, ordTime) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline AppInstanceProfile& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // payTime Field Functions 
    bool hasPayTime() const { return this->payTime_ != nullptr;};
    void deletePayTime() { this->payTime_ = nullptr;};
    inline string payTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
    inline AppInstanceProfile& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


    // seoSite Field Functions 
    bool hasSeoSite() const { return this->seoSite_ != nullptr;};
    void deleteSeoSite() { this->seoSite_ = nullptr;};
    inline string seoSite() const { DARABONBA_PTR_GET_DEFAULT(seoSite_, "") };
    inline AppInstanceProfile& setSeoSite(string seoSite) { DARABONBA_PTR_SET_VALUE(seoSite_, seoSite) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline string siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, "") };
    inline AppInstanceProfile& setSiteVersion(string siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


    // siteVersionText Field Functions 
    bool hasSiteVersionText() const { return this->siteVersionText_ != nullptr;};
    void deleteSiteVersionText() { this->siteVersionText_ = nullptr;};
    inline string siteVersionText() const { DARABONBA_PTR_GET_DEFAULT(siteVersionText_, "") };
    inline AppInstanceProfile& setSiteVersionText(string siteVersionText) { DARABONBA_PTR_SET_VALUE(siteVersionText_, siteVersionText) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline AppInstanceProfile& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // templateEtag Field Functions 
    bool hasTemplateEtag() const { return this->templateEtag_ != nullptr;};
    void deleteTemplateEtag() { this->templateEtag_ = nullptr;};
    inline string templateEtag() const { DARABONBA_PTR_GET_DEFAULT(templateEtag_, "") };
    inline AppInstanceProfile& setTemplateEtag(string templateEtag) { DARABONBA_PTR_SET_VALUE(templateEtag_, templateEtag) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline AppInstanceProfile& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    std::shared_ptr<string> applicationType_ = nullptr;
    std::shared_ptr<string> applicationTypeText_ = nullptr;
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<string> customerService_ = nullptr;
    std::shared_ptr<string> deployArea_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> ordTime_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> payTime_ = nullptr;
    std::shared_ptr<string> seoSite_ = nullptr;
    std::shared_ptr<string> siteVersion_ = nullptr;
    std::shared_ptr<string> siteVersionText_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> templateEtag_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
