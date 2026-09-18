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
      DARABONBA_PTR_TO_JSON(ChatbiTaskId, chatbiTaskId_);
      DARABONBA_PTR_TO_JSON(ChatbiTaskStatus, chatbiTaskStatus_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CustomerService, customerService_);
      DARABONBA_PTR_TO_JSON(DeployArea, deployArea_);
      DARABONBA_PTR_TO_JSON(IcpbaNo, icpbaNo_);
      DARABONBA_PTR_TO_JSON(IndependentDeployment, independentDeployment_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OpenChatBi, openChatBi_);
      DARABONBA_PTR_TO_JSON(OrdTime, ordTime_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(PayTime, payTime_);
      DARABONBA_PTR_TO_JSON(PreviewUrl, previewUrl_);
      DARABONBA_PTR_TO_JSON(SeoSite, seoSite_);
      DARABONBA_PTR_TO_JSON(ShareRenderWatermark, shareRenderWatermark_);
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
      DARABONBA_PTR_FROM_JSON(ChatbiTaskId, chatbiTaskId_);
      DARABONBA_PTR_FROM_JSON(ChatbiTaskStatus, chatbiTaskStatus_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CustomerService, customerService_);
      DARABONBA_PTR_FROM_JSON(DeployArea, deployArea_);
      DARABONBA_PTR_FROM_JSON(IcpbaNo, icpbaNo_);
      DARABONBA_PTR_FROM_JSON(IndependentDeployment, independentDeployment_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OpenChatBi, openChatBi_);
      DARABONBA_PTR_FROM_JSON(OrdTime, ordTime_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(PayTime, payTime_);
      DARABONBA_PTR_FROM_JSON(PreviewUrl, previewUrl_);
      DARABONBA_PTR_FROM_JSON(SeoSite, seoSite_);
      DARABONBA_PTR_FROM_JSON(ShareRenderWatermark, shareRenderWatermark_);
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
    class IndependentDeployment : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IndependentDeployment& obj) { 
        DARABONBA_PTR_TO_JSON(CanRetry, canRetry_);
        DARABONBA_PTR_TO_JSON(DeployArea, deployArea_);
        DARABONBA_PTR_TO_JSON(DnsRecordType, dnsRecordType_);
        DARABONBA_PTR_TO_JSON(Eligibility, eligibility_);
        DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
        DARABONBA_PTR_TO_JSON(IndependentIp, independentIp_);
        DARABONBA_PTR_TO_JSON(ServerSpec, serverSpec_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, IndependentDeployment& obj) { 
        DARABONBA_PTR_FROM_JSON(CanRetry, canRetry_);
        DARABONBA_PTR_FROM_JSON(DeployArea, deployArea_);
        DARABONBA_PTR_FROM_JSON(DnsRecordType, dnsRecordType_);
        DARABONBA_PTR_FROM_JSON(Eligibility, eligibility_);
        DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
        DARABONBA_PTR_FROM_JSON(IndependentIp, independentIp_);
        DARABONBA_PTR_FROM_JSON(ServerSpec, serverSpec_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      IndependentDeployment() = default ;
      IndependentDeployment(const IndependentDeployment &) = default ;
      IndependentDeployment(IndependentDeployment &&) = default ;
      IndependentDeployment(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IndependentDeployment() = default ;
      IndependentDeployment& operator=(const IndependentDeployment &) = default ;
      IndependentDeployment& operator=(IndependentDeployment &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->canRetry_ == nullptr
        && this->deployArea_ == nullptr && this->dnsRecordType_ == nullptr && this->eligibility_ == nullptr && this->enableStatus_ == nullptr && this->independentIp_ == nullptr
        && this->serverSpec_ == nullptr && this->taskId_ == nullptr; };
      // canRetry Field Functions 
      bool hasCanRetry() const { return this->canRetry_ != nullptr;};
      void deleteCanRetry() { this->canRetry_ = nullptr;};
      inline bool getCanRetry() const { DARABONBA_PTR_GET_DEFAULT(canRetry_, false) };
      inline IndependentDeployment& setCanRetry(bool canRetry) { DARABONBA_PTR_SET_VALUE(canRetry_, canRetry) };


      // deployArea Field Functions 
      bool hasDeployArea() const { return this->deployArea_ != nullptr;};
      void deleteDeployArea() { this->deployArea_ = nullptr;};
      inline string getDeployArea() const { DARABONBA_PTR_GET_DEFAULT(deployArea_, "") };
      inline IndependentDeployment& setDeployArea(string deployArea) { DARABONBA_PTR_SET_VALUE(deployArea_, deployArea) };


      // dnsRecordType Field Functions 
      bool hasDnsRecordType() const { return this->dnsRecordType_ != nullptr;};
      void deleteDnsRecordType() { this->dnsRecordType_ = nullptr;};
      inline string getDnsRecordType() const { DARABONBA_PTR_GET_DEFAULT(dnsRecordType_, "") };
      inline IndependentDeployment& setDnsRecordType(string dnsRecordType) { DARABONBA_PTR_SET_VALUE(dnsRecordType_, dnsRecordType) };


      // eligibility Field Functions 
      bool hasEligibility() const { return this->eligibility_ != nullptr;};
      void deleteEligibility() { this->eligibility_ = nullptr;};
      inline string getEligibility() const { DARABONBA_PTR_GET_DEFAULT(eligibility_, "") };
      inline IndependentDeployment& setEligibility(string eligibility) { DARABONBA_PTR_SET_VALUE(eligibility_, eligibility) };


      // enableStatus Field Functions 
      bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
      void deleteEnableStatus() { this->enableStatus_ = nullptr;};
      inline string getEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
      inline IndependentDeployment& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


      // independentIp Field Functions 
      bool hasIndependentIp() const { return this->independentIp_ != nullptr;};
      void deleteIndependentIp() { this->independentIp_ = nullptr;};
      inline string getIndependentIp() const { DARABONBA_PTR_GET_DEFAULT(independentIp_, "") };
      inline IndependentDeployment& setIndependentIp(string independentIp) { DARABONBA_PTR_SET_VALUE(independentIp_, independentIp) };


      // serverSpec Field Functions 
      bool hasServerSpec() const { return this->serverSpec_ != nullptr;};
      void deleteServerSpec() { this->serverSpec_ = nullptr;};
      inline string getServerSpec() const { DARABONBA_PTR_GET_DEFAULT(serverSpec_, "") };
      inline IndependentDeployment& setServerSpec(string serverSpec) { DARABONBA_PTR_SET_VALUE(serverSpec_, serverSpec) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
      inline IndependentDeployment& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // Indicates whether a retry is allowed after the dedicated server fails to start.
      shared_ptr<bool> canRetry_ {};
      // The deployment region code of the dedicated server.
      shared_ptr<string> deployArea_ {};
      // The DNS record type used when binding a domain name to the dedicated IP address.
      shared_ptr<string> dnsRecordType_ {};
      // The eligibility status of the dedicated server. Valid values:
      // - UPGRADE_REQUIRED: A version upgrade is required.
      // - AVAILABLE: The dedicated server can be started.
      // - UNAVAILABLE: The dedicated server is currently unavailable.
      shared_ptr<string> eligibility_ {};
      // The status of the dedicated server. Valid values:
      // - NOT_ENABLED: Not started.
      // - ENABLING: Starting.
      // - ACTIVE: Started.
      // - FAILED: Failed to start.
      shared_ptr<string> enableStatus_ {};
      // The dedicated IP address assigned after the dedicated server is started.
      shared_ptr<string> independentIp_ {};
      // The unified display specification of the dedicated server. This does not represent the real-time resource usage of the container.
      shared_ptr<string> serverSpec_ {};
      // The task ID for starting the dedicated server.
      shared_ptr<int64_t> taskId_ {};
    };

    virtual bool empty() const override { return this->applicationType_ == nullptr
        && this->applicationTypeText_ == nullptr && this->bizId_ == nullptr && this->chatbiTaskId_ == nullptr && this->chatbiTaskStatus_ == nullptr && this->commodityCode_ == nullptr
        && this->customerService_ == nullptr && this->deployArea_ == nullptr && this->icpbaNo_ == nullptr && this->independentDeployment_ == nullptr && this->instanceId_ == nullptr
        && this->openChatBi_ == nullptr && this->ordTime_ == nullptr && this->orderId_ == nullptr && this->payTime_ == nullptr && this->previewUrl_ == nullptr
        && this->seoSite_ == nullptr && this->shareRenderWatermark_ == nullptr && this->siteVersion_ == nullptr && this->siteVersionText_ == nullptr && this->source_ == nullptr
        && this->templateEtag_ == nullptr && this->templateId_ == nullptr; };
    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline AppInstanceProfile& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // applicationTypeText Field Functions 
    bool hasApplicationTypeText() const { return this->applicationTypeText_ != nullptr;};
    void deleteApplicationTypeText() { this->applicationTypeText_ = nullptr;};
    inline string getApplicationTypeText() const { DARABONBA_PTR_GET_DEFAULT(applicationTypeText_, "") };
    inline AppInstanceProfile& setApplicationTypeText(string applicationTypeText) { DARABONBA_PTR_SET_VALUE(applicationTypeText_, applicationTypeText) };


    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline AppInstanceProfile& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // chatbiTaskId Field Functions 
    bool hasChatbiTaskId() const { return this->chatbiTaskId_ != nullptr;};
    void deleteChatbiTaskId() { this->chatbiTaskId_ = nullptr;};
    inline string getChatbiTaskId() const { DARABONBA_PTR_GET_DEFAULT(chatbiTaskId_, "") };
    inline AppInstanceProfile& setChatbiTaskId(string chatbiTaskId) { DARABONBA_PTR_SET_VALUE(chatbiTaskId_, chatbiTaskId) };


    // chatbiTaskStatus Field Functions 
    bool hasChatbiTaskStatus() const { return this->chatbiTaskStatus_ != nullptr;};
    void deleteChatbiTaskStatus() { this->chatbiTaskStatus_ = nullptr;};
    inline string getChatbiTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(chatbiTaskStatus_, "") };
    inline AppInstanceProfile& setChatbiTaskStatus(string chatbiTaskStatus) { DARABONBA_PTR_SET_VALUE(chatbiTaskStatus_, chatbiTaskStatus) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline AppInstanceProfile& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // customerService Field Functions 
    bool hasCustomerService() const { return this->customerService_ != nullptr;};
    void deleteCustomerService() { this->customerService_ = nullptr;};
    inline string getCustomerService() const { DARABONBA_PTR_GET_DEFAULT(customerService_, "") };
    inline AppInstanceProfile& setCustomerService(string customerService) { DARABONBA_PTR_SET_VALUE(customerService_, customerService) };


    // deployArea Field Functions 
    bool hasDeployArea() const { return this->deployArea_ != nullptr;};
    void deleteDeployArea() { this->deployArea_ = nullptr;};
    inline string getDeployArea() const { DARABONBA_PTR_GET_DEFAULT(deployArea_, "") };
    inline AppInstanceProfile& setDeployArea(string deployArea) { DARABONBA_PTR_SET_VALUE(deployArea_, deployArea) };


    // icpbaNo Field Functions 
    bool hasIcpbaNo() const { return this->icpbaNo_ != nullptr;};
    void deleteIcpbaNo() { this->icpbaNo_ = nullptr;};
    inline string getIcpbaNo() const { DARABONBA_PTR_GET_DEFAULT(icpbaNo_, "") };
    inline AppInstanceProfile& setIcpbaNo(string icpbaNo) { DARABONBA_PTR_SET_VALUE(icpbaNo_, icpbaNo) };


    // independentDeployment Field Functions 
    bool hasIndependentDeployment() const { return this->independentDeployment_ != nullptr;};
    void deleteIndependentDeployment() { this->independentDeployment_ = nullptr;};
    inline const AppInstanceProfile::IndependentDeployment & getIndependentDeployment() const { DARABONBA_PTR_GET_CONST(independentDeployment_, AppInstanceProfile::IndependentDeployment) };
    inline AppInstanceProfile::IndependentDeployment getIndependentDeployment() { DARABONBA_PTR_GET(independentDeployment_, AppInstanceProfile::IndependentDeployment) };
    inline AppInstanceProfile& setIndependentDeployment(const AppInstanceProfile::IndependentDeployment & independentDeployment) { DARABONBA_PTR_SET_VALUE(independentDeployment_, independentDeployment) };
    inline AppInstanceProfile& setIndependentDeployment(AppInstanceProfile::IndependentDeployment && independentDeployment) { DARABONBA_PTR_SET_RVALUE(independentDeployment_, independentDeployment) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AppInstanceProfile& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // openChatBi Field Functions 
    bool hasOpenChatBi() const { return this->openChatBi_ != nullptr;};
    void deleteOpenChatBi() { this->openChatBi_ = nullptr;};
    inline bool getOpenChatBi() const { DARABONBA_PTR_GET_DEFAULT(openChatBi_, false) };
    inline AppInstanceProfile& setOpenChatBi(bool openChatBi) { DARABONBA_PTR_SET_VALUE(openChatBi_, openChatBi) };


    // ordTime Field Functions 
    bool hasOrdTime() const { return this->ordTime_ != nullptr;};
    void deleteOrdTime() { this->ordTime_ = nullptr;};
    inline string getOrdTime() const { DARABONBA_PTR_GET_DEFAULT(ordTime_, "") };
    inline AppInstanceProfile& setOrdTime(string ordTime) { DARABONBA_PTR_SET_VALUE(ordTime_, ordTime) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline AppInstanceProfile& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // payTime Field Functions 
    bool hasPayTime() const { return this->payTime_ != nullptr;};
    void deletePayTime() { this->payTime_ = nullptr;};
    inline string getPayTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
    inline AppInstanceProfile& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


    // previewUrl Field Functions 
    bool hasPreviewUrl() const { return this->previewUrl_ != nullptr;};
    void deletePreviewUrl() { this->previewUrl_ = nullptr;};
    inline string getPreviewUrl() const { DARABONBA_PTR_GET_DEFAULT(previewUrl_, "") };
    inline AppInstanceProfile& setPreviewUrl(string previewUrl) { DARABONBA_PTR_SET_VALUE(previewUrl_, previewUrl) };


    // seoSite Field Functions 
    bool hasSeoSite() const { return this->seoSite_ != nullptr;};
    void deleteSeoSite() { this->seoSite_ = nullptr;};
    inline string getSeoSite() const { DARABONBA_PTR_GET_DEFAULT(seoSite_, "") };
    inline AppInstanceProfile& setSeoSite(string seoSite) { DARABONBA_PTR_SET_VALUE(seoSite_, seoSite) };


    // shareRenderWatermark Field Functions 
    bool hasShareRenderWatermark() const { return this->shareRenderWatermark_ != nullptr;};
    void deleteShareRenderWatermark() { this->shareRenderWatermark_ = nullptr;};
    inline string getShareRenderWatermark() const { DARABONBA_PTR_GET_DEFAULT(shareRenderWatermark_, "") };
    inline AppInstanceProfile& setShareRenderWatermark(string shareRenderWatermark) { DARABONBA_PTR_SET_VALUE(shareRenderWatermark_, shareRenderWatermark) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline string getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, "") };
    inline AppInstanceProfile& setSiteVersion(string siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


    // siteVersionText Field Functions 
    bool hasSiteVersionText() const { return this->siteVersionText_ != nullptr;};
    void deleteSiteVersionText() { this->siteVersionText_ = nullptr;};
    inline string getSiteVersionText() const { DARABONBA_PTR_GET_DEFAULT(siteVersionText_, "") };
    inline AppInstanceProfile& setSiteVersionText(string siteVersionText) { DARABONBA_PTR_SET_VALUE(siteVersionText_, siteVersionText) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline AppInstanceProfile& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // templateEtag Field Functions 
    bool hasTemplateEtag() const { return this->templateEtag_ != nullptr;};
    void deleteTemplateEtag() { this->templateEtag_ = nullptr;};
    inline string getTemplateEtag() const { DARABONBA_PTR_GET_DEFAULT(templateEtag_, "") };
    inline AppInstanceProfile& setTemplateEtag(string templateEtag) { DARABONBA_PTR_SET_VALUE(templateEtag_, templateEtag) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline AppInstanceProfile& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The application type code. For example, PC_WebSite indicates a PC website.
    shared_ptr<string> applicationType_ {};
    // The display name of the application type.
    shared_ptr<string> applicationTypeText_ {};
    // The business identifier of the application instance.
    shared_ptr<string> bizId_ {};
    // The asynchronous task ID of ChatBI BuildSchemaIndex.
    shared_ptr<string> chatbiTaskId_ {};
    // The task status of ChatBI BuildSchemaIndex. Valid values: running, finish, and failed.
    shared_ptr<string> chatbiTaskStatus_ {};
    // The commodity code used for placing the order.
    shared_ptr<string> commodityCode_ {};
    // The contact information or description of customer service.
    shared_ptr<string> customerService_ {};
    // The deployment region code of the application.
    shared_ptr<string> deployArea_ {};
    // The ICP filing number bound to the custom domain name. Multiple filing numbers are separated by commas (,).
    shared_ptr<string> icpbaNo_ {};
    // The dedicated server information. Computed in real time by DescribeAppInstance. Not populated by list operations.
    shared_ptr<AppInstanceProfile::IndependentDeployment> independentDeployment_ {};
    // The associated Lingxiao instance ID.
    shared_ptr<string> instanceId_ {};
    // Indicates whether the current user is included in the ChatBI feature canary release whitelist.
    shared_ptr<bool> openChatBi_ {};
    // The time when the order was placed, in the yyyy-MM-dd HH:mm:ss format.
    shared_ptr<string> ordTime_ {};
    // The order ID.
    shared_ptr<string> orderId_ {};
    // The time when the payment was made, in the yyyy-MM-dd HH:mm:ss format.
    shared_ptr<string> payTime_ {};
    // The URL used to access the application preview page.
    shared_ptr<string> previewUrl_ {};
    // The SEO site configuration identifier.
    shared_ptr<string> seoSite_ {};
    // The switch for the share rendering watermark. A value of 1 indicates enabled, and a value of 0 indicates disabled. This field is empty if not configured.
    shared_ptr<string> shareRenderWatermark_ {};
    // The site version code.
    shared_ptr<string> siteVersion_ {};
    // The display name of the site version, including the deployment region.
    shared_ptr<string> siteVersionText_ {};
    // The identifier of the creation or synchronization source.
    shared_ptr<string> source_ {};
    // The ETag identifier of the current application template.
    shared_ptr<string> templateEtag_ {};
    // The template ID used by the current application.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
