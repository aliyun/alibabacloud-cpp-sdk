// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPINSTANCEFORPARTNERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPINSTANCEFORPARTNERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetAppInstanceForPartnerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppInstanceForPartnerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RootErrorCode, rootErrorCode_);
      DARABONBA_PTR_TO_JSON(RootErrorMsg, rootErrorMsg_);
      DARABONBA_PTR_TO_JSON(Synchro, synchro_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppInstanceForPartnerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RootErrorCode, rootErrorCode_);
      DARABONBA_PTR_FROM_JSON(RootErrorMsg, rootErrorMsg_);
      DARABONBA_PTR_FROM_JSON(Synchro, synchro_);
    };
    GetAppInstanceForPartnerResponseBody() = default ;
    GetAppInstanceForPartnerResponseBody(const GetAppInstanceForPartnerResponseBody &) = default ;
    GetAppInstanceForPartnerResponseBody(GetAppInstanceForPartnerResponseBody &&) = default ;
    GetAppInstanceForPartnerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppInstanceForPartnerResponseBody() = default ;
    GetAppInstanceForPartnerResponseBody& operator=(const GetAppInstanceForPartnerResponseBody &) = default ;
    GetAppInstanceForPartnerResponseBody& operator=(GetAppInstanceForPartnerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(AiStaffList, aiStaffList_);
        DARABONBA_PTR_TO_JSON(AppDesignSpec, appDesignSpec_);
        DARABONBA_PTR_TO_JSON(AppOperationAddress, appOperationAddress_);
        DARABONBA_PTR_TO_JSON(AppServiceList, appServiceList_);
        DARABONBA_PTR_TO_JSON(AppSubType, appSubType_);
        DARABONBA_PTR_TO_JSON(AppType, appType_);
        DARABONBA_PTR_TO_JSON(BizId, bizId_);
        DARABONBA_PTR_TO_JSON(BuildType, buildType_);
        DARABONBA_PTR_TO_JSON(Deleted, deleted_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DesignSpecBizId, designSpecBizId_);
        DARABONBA_PTR_TO_JSON(DesignSpecId, designSpecId_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Env, env_);
        DARABONBA_PTR_TO_JSON(EspBizId, espBizId_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtDelete, gmtDelete_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(GmtPublish, gmtPublish_);
        DARABONBA_PTR_TO_JSON(IconUrl, iconUrl_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OrderId, orderId_);
        DARABONBA_PTR_TO_JSON(PartnerDetail, partnerDetail_);
        DARABONBA_PTR_TO_JSON(Profile, profile_);
        DARABONBA_PTR_TO_JSON(RelatedInstanceList, relatedInstanceList_);
        DARABONBA_PTR_TO_JSON(SiteHost, siteHost_);
        DARABONBA_PTR_TO_JSON(Slug, slug_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusText, statusText_);
        DARABONBA_PTR_TO_JSON(ThumbnailUrl, thumbnailUrl_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(AiStaffList, aiStaffList_);
        DARABONBA_PTR_FROM_JSON(AppDesignSpec, appDesignSpec_);
        DARABONBA_PTR_FROM_JSON(AppOperationAddress, appOperationAddress_);
        DARABONBA_PTR_FROM_JSON(AppServiceList, appServiceList_);
        DARABONBA_PTR_FROM_JSON(AppSubType, appSubType_);
        DARABONBA_PTR_FROM_JSON(AppType, appType_);
        DARABONBA_PTR_FROM_JSON(BizId, bizId_);
        DARABONBA_PTR_FROM_JSON(BuildType, buildType_);
        DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DesignSpecBizId, designSpecBizId_);
        DARABONBA_PTR_FROM_JSON(DesignSpecId, designSpecId_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Env, env_);
        DARABONBA_PTR_FROM_JSON(EspBizId, espBizId_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtDelete, gmtDelete_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(GmtPublish, gmtPublish_);
        DARABONBA_PTR_FROM_JSON(IconUrl, iconUrl_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
        DARABONBA_PTR_FROM_JSON(PartnerDetail, partnerDetail_);
        DARABONBA_PTR_FROM_JSON(Profile, profile_);
        DARABONBA_PTR_FROM_JSON(RelatedInstanceList, relatedInstanceList_);
        DARABONBA_PTR_FROM_JSON(SiteHost, siteHost_);
        DARABONBA_PTR_FROM_JSON(Slug, slug_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusText, statusText_);
        DARABONBA_PTR_FROM_JSON(ThumbnailUrl, thumbnailUrl_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RelatedInstanceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RelatedInstanceList& obj) { 
          DARABONBA_PTR_TO_JSON(AppSubType, appSubType_);
          DARABONBA_PTR_TO_JSON(AppType, appType_);
          DARABONBA_PTR_TO_JSON(BizId, bizId_);
          DARABONBA_PTR_TO_JSON(BuildType, buildType_);
          DARABONBA_PTR_TO_JSON(Deleted, deleted_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DesignSpecBizId, designSpecBizId_);
          DARABONBA_PTR_TO_JSON(DesignSpecId, designSpecId_);
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Env, env_);
          DARABONBA_PTR_TO_JSON(EspBizId, espBizId_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtDelete, gmtDelete_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(GmtPublish, gmtPublish_);
          DARABONBA_PTR_TO_JSON(IconUrl, iconUrl_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OrderId, orderId_);
          DARABONBA_PTR_TO_JSON(Profile, profile_);
          DARABONBA_PTR_TO_JSON(SiteHost, siteHost_);
          DARABONBA_PTR_TO_JSON(Slug, slug_);
          DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusText, statusText_);
          DARABONBA_PTR_TO_JSON(ThumbnailUrl, thumbnailUrl_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, RelatedInstanceList& obj) { 
          DARABONBA_PTR_FROM_JSON(AppSubType, appSubType_);
          DARABONBA_PTR_FROM_JSON(AppType, appType_);
          DARABONBA_PTR_FROM_JSON(BizId, bizId_);
          DARABONBA_PTR_FROM_JSON(BuildType, buildType_);
          DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DesignSpecBizId, designSpecBizId_);
          DARABONBA_PTR_FROM_JSON(DesignSpecId, designSpecId_);
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Env, env_);
          DARABONBA_PTR_FROM_JSON(EspBizId, espBizId_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtDelete, gmtDelete_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(GmtPublish, gmtPublish_);
          DARABONBA_PTR_FROM_JSON(IconUrl, iconUrl_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
          DARABONBA_PTR_FROM_JSON(Profile, profile_);
          DARABONBA_PTR_FROM_JSON(SiteHost, siteHost_);
          DARABONBA_PTR_FROM_JSON(Slug, slug_);
          DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusText, statusText_);
          DARABONBA_PTR_FROM_JSON(ThumbnailUrl, thumbnailUrl_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        RelatedInstanceList() = default ;
        RelatedInstanceList(const RelatedInstanceList &) = default ;
        RelatedInstanceList(RelatedInstanceList &&) = default ;
        RelatedInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RelatedInstanceList() = default ;
        RelatedInstanceList& operator=(const RelatedInstanceList &) = default ;
        RelatedInstanceList& operator=(RelatedInstanceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Profile : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Profile& obj) { 
            DARABONBA_PTR_TO_JSON(AdminUrl, adminUrl_);
            DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
            DARABONBA_PTR_TO_JSON(ApplicationTypeText, applicationTypeText_);
            DARABONBA_PTR_TO_JSON(BindCname, bindCname_);
            DARABONBA_PTR_TO_JSON(BizId, bizId_);
            DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
            DARABONBA_PTR_TO_JSON(CustomerService, customerService_);
            DARABONBA_PTR_TO_JSON(DeployArea, deployArea_);
            DARABONBA_PTR_TO_JSON(DomainList, domainList_);
            DARABONBA_PTR_TO_JSON(EditorUrl, editorUrl_);
            DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_TO_JSON(IcpbaNo, icpbaNo_);
            DARABONBA_PTR_TO_JSON(ImageList, imageList_);
            DARABONBA_PTR_TO_JSON(LxInstanceId, lxInstanceId_);
            DARABONBA_PTR_TO_JSON(OrdTime, ordTime_);
            DARABONBA_PTR_TO_JSON(OrderId, orderId_);
            DARABONBA_PTR_TO_JSON(OrderNum, orderNum_);
            DARABONBA_PTR_TO_JSON(PartnerId, partnerId_);
            DARABONBA_PTR_TO_JSON(PayTime, payTime_);
            DARABONBA_PTR_TO_JSON(PreviewUrl, previewUrl_);
            DARABONBA_PTR_TO_JSON(SeoSite, seoSite_);
            DARABONBA_PTR_TO_JSON(SiteLogo, siteLogo_);
            DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
            DARABONBA_PTR_TO_JSON(SiteVersionText, siteVersionText_);
            DARABONBA_PTR_TO_JSON(Source, source_);
            DARABONBA_PTR_TO_JSON(TemplateEtag, templateEtag_);
            DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
            DARABONBA_PTR_TO_JSON(TextList, textList_);
            DARABONBA_PTR_TO_JSON(Thumbnail, thumbnail_);
            DARABONBA_PTR_TO_JSON(UpgradeStatus, upgradeStatus_);
          };
          friend void from_json(const Darabonba::Json& j, Profile& obj) { 
            DARABONBA_PTR_FROM_JSON(AdminUrl, adminUrl_);
            DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
            DARABONBA_PTR_FROM_JSON(ApplicationTypeText, applicationTypeText_);
            DARABONBA_PTR_FROM_JSON(BindCname, bindCname_);
            DARABONBA_PTR_FROM_JSON(BizId, bizId_);
            DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
            DARABONBA_PTR_FROM_JSON(CustomerService, customerService_);
            DARABONBA_PTR_FROM_JSON(DeployArea, deployArea_);
            DARABONBA_PTR_FROM_JSON(DomainList, domainList_);
            DARABONBA_PTR_FROM_JSON(EditorUrl, editorUrl_);
            DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_FROM_JSON(IcpbaNo, icpbaNo_);
            DARABONBA_PTR_FROM_JSON(ImageList, imageList_);
            DARABONBA_PTR_FROM_JSON(LxInstanceId, lxInstanceId_);
            DARABONBA_PTR_FROM_JSON(OrdTime, ordTime_);
            DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
            DARABONBA_PTR_FROM_JSON(OrderNum, orderNum_);
            DARABONBA_PTR_FROM_JSON(PartnerId, partnerId_);
            DARABONBA_PTR_FROM_JSON(PayTime, payTime_);
            DARABONBA_PTR_FROM_JSON(PreviewUrl, previewUrl_);
            DARABONBA_PTR_FROM_JSON(SeoSite, seoSite_);
            DARABONBA_PTR_FROM_JSON(SiteLogo, siteLogo_);
            DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
            DARABONBA_PTR_FROM_JSON(SiteVersionText, siteVersionText_);
            DARABONBA_PTR_FROM_JSON(Source, source_);
            DARABONBA_PTR_FROM_JSON(TemplateEtag, templateEtag_);
            DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
            DARABONBA_PTR_FROM_JSON(TextList, textList_);
            DARABONBA_PTR_FROM_JSON(Thumbnail, thumbnail_);
            DARABONBA_PTR_FROM_JSON(UpgradeStatus, upgradeStatus_);
          };
          Profile() = default ;
          Profile(const Profile &) = default ;
          Profile(Profile &&) = default ;
          Profile(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Profile() = default ;
          Profile& operator=(const Profile &) = default ;
          Profile& operator=(Profile &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->adminUrl_ == nullptr
        && this->applicationType_ == nullptr && this->applicationTypeText_ == nullptr && this->bindCname_ == nullptr && this->bizId_ == nullptr && this->commodityCode_ == nullptr
        && this->customerService_ == nullptr && this->deployArea_ == nullptr && this->domainList_ == nullptr && this->editorUrl_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->icpbaNo_ == nullptr && this->imageList_ == nullptr && this->lxInstanceId_ == nullptr && this->ordTime_ == nullptr
        && this->orderId_ == nullptr && this->orderNum_ == nullptr && this->partnerId_ == nullptr && this->payTime_ == nullptr && this->previewUrl_ == nullptr
        && this->seoSite_ == nullptr && this->siteLogo_ == nullptr && this->siteVersion_ == nullptr && this->siteVersionText_ == nullptr && this->source_ == nullptr
        && this->templateEtag_ == nullptr && this->templateId_ == nullptr && this->textList_ == nullptr && this->thumbnail_ == nullptr && this->upgradeStatus_ == nullptr; };
          // adminUrl Field Functions 
          bool hasAdminUrl() const { return this->adminUrl_ != nullptr;};
          void deleteAdminUrl() { this->adminUrl_ = nullptr;};
          inline string getAdminUrl() const { DARABONBA_PTR_GET_DEFAULT(adminUrl_, "") };
          inline Profile& setAdminUrl(string adminUrl) { DARABONBA_PTR_SET_VALUE(adminUrl_, adminUrl) };


          // applicationType Field Functions 
          bool hasApplicationType() const { return this->applicationType_ != nullptr;};
          void deleteApplicationType() { this->applicationType_ = nullptr;};
          inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
          inline Profile& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


          // applicationTypeText Field Functions 
          bool hasApplicationTypeText() const { return this->applicationTypeText_ != nullptr;};
          void deleteApplicationTypeText() { this->applicationTypeText_ = nullptr;};
          inline string getApplicationTypeText() const { DARABONBA_PTR_GET_DEFAULT(applicationTypeText_, "") };
          inline Profile& setApplicationTypeText(string applicationTypeText) { DARABONBA_PTR_SET_VALUE(applicationTypeText_, applicationTypeText) };


          // bindCname Field Functions 
          bool hasBindCname() const { return this->bindCname_ != nullptr;};
          void deleteBindCname() { this->bindCname_ = nullptr;};
          inline string getBindCname() const { DARABONBA_PTR_GET_DEFAULT(bindCname_, "") };
          inline Profile& setBindCname(string bindCname) { DARABONBA_PTR_SET_VALUE(bindCname_, bindCname) };


          // bizId Field Functions 
          bool hasBizId() const { return this->bizId_ != nullptr;};
          void deleteBizId() { this->bizId_ = nullptr;};
          inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
          inline Profile& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


          // commodityCode Field Functions 
          bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
          void deleteCommodityCode() { this->commodityCode_ = nullptr;};
          inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
          inline Profile& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


          // customerService Field Functions 
          bool hasCustomerService() const { return this->customerService_ != nullptr;};
          void deleteCustomerService() { this->customerService_ = nullptr;};
          inline string getCustomerService() const { DARABONBA_PTR_GET_DEFAULT(customerService_, "") };
          inline Profile& setCustomerService(string customerService) { DARABONBA_PTR_SET_VALUE(customerService_, customerService) };


          // deployArea Field Functions 
          bool hasDeployArea() const { return this->deployArea_ != nullptr;};
          void deleteDeployArea() { this->deployArea_ = nullptr;};
          inline string getDeployArea() const { DARABONBA_PTR_GET_DEFAULT(deployArea_, "") };
          inline Profile& setDeployArea(string deployArea) { DARABONBA_PTR_SET_VALUE(deployArea_, deployArea) };


          // domainList Field Functions 
          bool hasDomainList() const { return this->domainList_ != nullptr;};
          void deleteDomainList() { this->domainList_ = nullptr;};
          inline string getDomainList() const { DARABONBA_PTR_GET_DEFAULT(domainList_, "") };
          inline Profile& setDomainList(string domainList) { DARABONBA_PTR_SET_VALUE(domainList_, domainList) };


          // editorUrl Field Functions 
          bool hasEditorUrl() const { return this->editorUrl_ != nullptr;};
          void deleteEditorUrl() { this->editorUrl_ = nullptr;};
          inline string getEditorUrl() const { DARABONBA_PTR_GET_DEFAULT(editorUrl_, "") };
          inline Profile& setEditorUrl(string editorUrl) { DARABONBA_PTR_SET_VALUE(editorUrl_, editorUrl) };


          // gmtCreate Field Functions 
          bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
          void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
          inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
          inline Profile& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


          // gmtModified Field Functions 
          bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
          void deleteGmtModified() { this->gmtModified_ = nullptr;};
          inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
          inline Profile& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


          // icpbaNo Field Functions 
          bool hasIcpbaNo() const { return this->icpbaNo_ != nullptr;};
          void deleteIcpbaNo() { this->icpbaNo_ = nullptr;};
          inline string getIcpbaNo() const { DARABONBA_PTR_GET_DEFAULT(icpbaNo_, "") };
          inline Profile& setIcpbaNo(string icpbaNo) { DARABONBA_PTR_SET_VALUE(icpbaNo_, icpbaNo) };


          // imageList Field Functions 
          bool hasImageList() const { return this->imageList_ != nullptr;};
          void deleteImageList() { this->imageList_ = nullptr;};
          inline string getImageList() const { DARABONBA_PTR_GET_DEFAULT(imageList_, "") };
          inline Profile& setImageList(string imageList) { DARABONBA_PTR_SET_VALUE(imageList_, imageList) };


          // lxInstanceId Field Functions 
          bool hasLxInstanceId() const { return this->lxInstanceId_ != nullptr;};
          void deleteLxInstanceId() { this->lxInstanceId_ = nullptr;};
          inline string getLxInstanceId() const { DARABONBA_PTR_GET_DEFAULT(lxInstanceId_, "") };
          inline Profile& setLxInstanceId(string lxInstanceId) { DARABONBA_PTR_SET_VALUE(lxInstanceId_, lxInstanceId) };


          // ordTime Field Functions 
          bool hasOrdTime() const { return this->ordTime_ != nullptr;};
          void deleteOrdTime() { this->ordTime_ = nullptr;};
          inline string getOrdTime() const { DARABONBA_PTR_GET_DEFAULT(ordTime_, "") };
          inline Profile& setOrdTime(string ordTime) { DARABONBA_PTR_SET_VALUE(ordTime_, ordTime) };


          // orderId Field Functions 
          bool hasOrderId() const { return this->orderId_ != nullptr;};
          void deleteOrderId() { this->orderId_ = nullptr;};
          inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
          inline Profile& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


          // orderNum Field Functions 
          bool hasOrderNum() const { return this->orderNum_ != nullptr;};
          void deleteOrderNum() { this->orderNum_ = nullptr;};
          inline int32_t getOrderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0) };
          inline Profile& setOrderNum(int32_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


          // partnerId Field Functions 
          bool hasPartnerId() const { return this->partnerId_ != nullptr;};
          void deletePartnerId() { this->partnerId_ = nullptr;};
          inline string getPartnerId() const { DARABONBA_PTR_GET_DEFAULT(partnerId_, "") };
          inline Profile& setPartnerId(string partnerId) { DARABONBA_PTR_SET_VALUE(partnerId_, partnerId) };


          // payTime Field Functions 
          bool hasPayTime() const { return this->payTime_ != nullptr;};
          void deletePayTime() { this->payTime_ = nullptr;};
          inline string getPayTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
          inline Profile& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


          // previewUrl Field Functions 
          bool hasPreviewUrl() const { return this->previewUrl_ != nullptr;};
          void deletePreviewUrl() { this->previewUrl_ = nullptr;};
          inline string getPreviewUrl() const { DARABONBA_PTR_GET_DEFAULT(previewUrl_, "") };
          inline Profile& setPreviewUrl(string previewUrl) { DARABONBA_PTR_SET_VALUE(previewUrl_, previewUrl) };


          // seoSite Field Functions 
          bool hasSeoSite() const { return this->seoSite_ != nullptr;};
          void deleteSeoSite() { this->seoSite_ = nullptr;};
          inline string getSeoSite() const { DARABONBA_PTR_GET_DEFAULT(seoSite_, "") };
          inline Profile& setSeoSite(string seoSite) { DARABONBA_PTR_SET_VALUE(seoSite_, seoSite) };


          // siteLogo Field Functions 
          bool hasSiteLogo() const { return this->siteLogo_ != nullptr;};
          void deleteSiteLogo() { this->siteLogo_ = nullptr;};
          inline string getSiteLogo() const { DARABONBA_PTR_GET_DEFAULT(siteLogo_, "") };
          inline Profile& setSiteLogo(string siteLogo) { DARABONBA_PTR_SET_VALUE(siteLogo_, siteLogo) };


          // siteVersion Field Functions 
          bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
          void deleteSiteVersion() { this->siteVersion_ = nullptr;};
          inline string getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, "") };
          inline Profile& setSiteVersion(string siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


          // siteVersionText Field Functions 
          bool hasSiteVersionText() const { return this->siteVersionText_ != nullptr;};
          void deleteSiteVersionText() { this->siteVersionText_ = nullptr;};
          inline string getSiteVersionText() const { DARABONBA_PTR_GET_DEFAULT(siteVersionText_, "") };
          inline Profile& setSiteVersionText(string siteVersionText) { DARABONBA_PTR_SET_VALUE(siteVersionText_, siteVersionText) };


          // source Field Functions 
          bool hasSource() const { return this->source_ != nullptr;};
          void deleteSource() { this->source_ = nullptr;};
          inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
          inline Profile& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


          // templateEtag Field Functions 
          bool hasTemplateEtag() const { return this->templateEtag_ != nullptr;};
          void deleteTemplateEtag() { this->templateEtag_ = nullptr;};
          inline string getTemplateEtag() const { DARABONBA_PTR_GET_DEFAULT(templateEtag_, "") };
          inline Profile& setTemplateEtag(string templateEtag) { DARABONBA_PTR_SET_VALUE(templateEtag_, templateEtag) };


          // templateId Field Functions 
          bool hasTemplateId() const { return this->templateId_ != nullptr;};
          void deleteTemplateId() { this->templateId_ = nullptr;};
          inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
          inline Profile& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


          // textList Field Functions 
          bool hasTextList() const { return this->textList_ != nullptr;};
          void deleteTextList() { this->textList_ = nullptr;};
          inline string getTextList() const { DARABONBA_PTR_GET_DEFAULT(textList_, "") };
          inline Profile& setTextList(string textList) { DARABONBA_PTR_SET_VALUE(textList_, textList) };


          // thumbnail Field Functions 
          bool hasThumbnail() const { return this->thumbnail_ != nullptr;};
          void deleteThumbnail() { this->thumbnail_ = nullptr;};
          inline string getThumbnail() const { DARABONBA_PTR_GET_DEFAULT(thumbnail_, "") };
          inline Profile& setThumbnail(string thumbnail) { DARABONBA_PTR_SET_VALUE(thumbnail_, thumbnail) };


          // upgradeStatus Field Functions 
          bool hasUpgradeStatus() const { return this->upgradeStatus_ != nullptr;};
          void deleteUpgradeStatus() { this->upgradeStatus_ = nullptr;};
          inline string getUpgradeStatus() const { DARABONBA_PTR_GET_DEFAULT(upgradeStatus_, "") };
          inline Profile& setUpgradeStatus(string upgradeStatus) { DARABONBA_PTR_SET_VALUE(upgradeStatus_, upgradeStatus) };


        protected:
          shared_ptr<string> adminUrl_ {};
          shared_ptr<string> applicationType_ {};
          shared_ptr<string> applicationTypeText_ {};
          shared_ptr<string> bindCname_ {};
          shared_ptr<string> bizId_ {};
          shared_ptr<string> commodityCode_ {};
          shared_ptr<string> customerService_ {};
          shared_ptr<string> deployArea_ {};
          shared_ptr<string> domainList_ {};
          shared_ptr<string> editorUrl_ {};
          shared_ptr<string> gmtCreate_ {};
          shared_ptr<string> gmtModified_ {};
          shared_ptr<string> icpbaNo_ {};
          shared_ptr<string> imageList_ {};
          shared_ptr<string> lxInstanceId_ {};
          shared_ptr<string> ordTime_ {};
          shared_ptr<string> orderId_ {};
          shared_ptr<int32_t> orderNum_ {};
          shared_ptr<string> partnerId_ {};
          shared_ptr<string> payTime_ {};
          shared_ptr<string> previewUrl_ {};
          shared_ptr<string> seoSite_ {};
          shared_ptr<string> siteLogo_ {};
          shared_ptr<string> siteVersion_ {};
          shared_ptr<string> siteVersionText_ {};
          shared_ptr<string> source_ {};
          shared_ptr<string> templateEtag_ {};
          shared_ptr<string> templateId_ {};
          shared_ptr<string> textList_ {};
          shared_ptr<string> thumbnail_ {};
          shared_ptr<string> upgradeStatus_ {};
        };

        virtual bool empty() const override { return this->appSubType_ == nullptr
        && this->appType_ == nullptr && this->bizId_ == nullptr && this->buildType_ == nullptr && this->deleted_ == nullptr && this->description_ == nullptr
        && this->designSpecBizId_ == nullptr && this->designSpecId_ == nullptr && this->domain_ == nullptr && this->endTime_ == nullptr && this->env_ == nullptr
        && this->espBizId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtDelete_ == nullptr && this->gmtModified_ == nullptr && this->gmtPublish_ == nullptr
        && this->iconUrl_ == nullptr && this->name_ == nullptr && this->orderId_ == nullptr && this->profile_ == nullptr && this->siteHost_ == nullptr
        && this->slug_ == nullptr && this->sourceType_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->statusText_ == nullptr
        && this->thumbnailUrl_ == nullptr && this->userId_ == nullptr && this->version_ == nullptr; };
        // appSubType Field Functions 
        bool hasAppSubType() const { return this->appSubType_ != nullptr;};
        void deleteAppSubType() { this->appSubType_ = nullptr;};
        inline string getAppSubType() const { DARABONBA_PTR_GET_DEFAULT(appSubType_, "") };
        inline RelatedInstanceList& setAppSubType(string appSubType) { DARABONBA_PTR_SET_VALUE(appSubType_, appSubType) };


        // appType Field Functions 
        bool hasAppType() const { return this->appType_ != nullptr;};
        void deleteAppType() { this->appType_ = nullptr;};
        inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
        inline RelatedInstanceList& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


        // bizId Field Functions 
        bool hasBizId() const { return this->bizId_ != nullptr;};
        void deleteBizId() { this->bizId_ = nullptr;};
        inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
        inline RelatedInstanceList& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


        // buildType Field Functions 
        bool hasBuildType() const { return this->buildType_ != nullptr;};
        void deleteBuildType() { this->buildType_ = nullptr;};
        inline string getBuildType() const { DARABONBA_PTR_GET_DEFAULT(buildType_, "") };
        inline RelatedInstanceList& setBuildType(string buildType) { DARABONBA_PTR_SET_VALUE(buildType_, buildType) };


        // deleted Field Functions 
        bool hasDeleted() const { return this->deleted_ != nullptr;};
        void deleteDeleted() { this->deleted_ = nullptr;};
        inline int32_t getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, 0) };
        inline RelatedInstanceList& setDeleted(int32_t deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline RelatedInstanceList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // designSpecBizId Field Functions 
        bool hasDesignSpecBizId() const { return this->designSpecBizId_ != nullptr;};
        void deleteDesignSpecBizId() { this->designSpecBizId_ = nullptr;};
        inline string getDesignSpecBizId() const { DARABONBA_PTR_GET_DEFAULT(designSpecBizId_, "") };
        inline RelatedInstanceList& setDesignSpecBizId(string designSpecBizId) { DARABONBA_PTR_SET_VALUE(designSpecBizId_, designSpecBizId) };


        // designSpecId Field Functions 
        bool hasDesignSpecId() const { return this->designSpecId_ != nullptr;};
        void deleteDesignSpecId() { this->designSpecId_ = nullptr;};
        inline string getDesignSpecId() const { DARABONBA_PTR_GET_DEFAULT(designSpecId_, "") };
        inline RelatedInstanceList& setDesignSpecId(string designSpecId) { DARABONBA_PTR_SET_VALUE(designSpecId_, designSpecId) };


        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline RelatedInstanceList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline RelatedInstanceList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // env Field Functions 
        bool hasEnv() const { return this->env_ != nullptr;};
        void deleteEnv() { this->env_ = nullptr;};
        inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
        inline RelatedInstanceList& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


        // espBizId Field Functions 
        bool hasEspBizId() const { return this->espBizId_ != nullptr;};
        void deleteEspBizId() { this->espBizId_ = nullptr;};
        inline string getEspBizId() const { DARABONBA_PTR_GET_DEFAULT(espBizId_, "") };
        inline RelatedInstanceList& setEspBizId(string espBizId) { DARABONBA_PTR_SET_VALUE(espBizId_, espBizId) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline RelatedInstanceList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtDelete Field Functions 
        bool hasGmtDelete() const { return this->gmtDelete_ != nullptr;};
        void deleteGmtDelete() { this->gmtDelete_ = nullptr;};
        inline string getGmtDelete() const { DARABONBA_PTR_GET_DEFAULT(gmtDelete_, "") };
        inline RelatedInstanceList& setGmtDelete(string gmtDelete) { DARABONBA_PTR_SET_VALUE(gmtDelete_, gmtDelete) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline RelatedInstanceList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // gmtPublish Field Functions 
        bool hasGmtPublish() const { return this->gmtPublish_ != nullptr;};
        void deleteGmtPublish() { this->gmtPublish_ = nullptr;};
        inline string getGmtPublish() const { DARABONBA_PTR_GET_DEFAULT(gmtPublish_, "") };
        inline RelatedInstanceList& setGmtPublish(string gmtPublish) { DARABONBA_PTR_SET_VALUE(gmtPublish_, gmtPublish) };


        // iconUrl Field Functions 
        bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
        void deleteIconUrl() { this->iconUrl_ = nullptr;};
        inline string getIconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
        inline RelatedInstanceList& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RelatedInstanceList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
        inline RelatedInstanceList& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        // profile Field Functions 
        bool hasProfile() const { return this->profile_ != nullptr;};
        void deleteProfile() { this->profile_ = nullptr;};
        inline const RelatedInstanceList::Profile & getProfile() const { DARABONBA_PTR_GET_CONST(profile_, RelatedInstanceList::Profile) };
        inline RelatedInstanceList::Profile getProfile() { DARABONBA_PTR_GET(profile_, RelatedInstanceList::Profile) };
        inline RelatedInstanceList& setProfile(const RelatedInstanceList::Profile & profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };
        inline RelatedInstanceList& setProfile(RelatedInstanceList::Profile && profile) { DARABONBA_PTR_SET_RVALUE(profile_, profile) };


        // siteHost Field Functions 
        bool hasSiteHost() const { return this->siteHost_ != nullptr;};
        void deleteSiteHost() { this->siteHost_ = nullptr;};
        inline string getSiteHost() const { DARABONBA_PTR_GET_DEFAULT(siteHost_, "") };
        inline RelatedInstanceList& setSiteHost(string siteHost) { DARABONBA_PTR_SET_VALUE(siteHost_, siteHost) };


        // slug Field Functions 
        bool hasSlug() const { return this->slug_ != nullptr;};
        void deleteSlug() { this->slug_ = nullptr;};
        inline string getSlug() const { DARABONBA_PTR_GET_DEFAULT(slug_, "") };
        inline RelatedInstanceList& setSlug(string slug) { DARABONBA_PTR_SET_VALUE(slug_, slug) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline RelatedInstanceList& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline RelatedInstanceList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline RelatedInstanceList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusText Field Functions 
        bool hasStatusText() const { return this->statusText_ != nullptr;};
        void deleteStatusText() { this->statusText_ = nullptr;};
        inline string getStatusText() const { DARABONBA_PTR_GET_DEFAULT(statusText_, "") };
        inline RelatedInstanceList& setStatusText(string statusText) { DARABONBA_PTR_SET_VALUE(statusText_, statusText) };


        // thumbnailUrl Field Functions 
        bool hasThumbnailUrl() const { return this->thumbnailUrl_ != nullptr;};
        void deleteThumbnailUrl() { this->thumbnailUrl_ = nullptr;};
        inline string getThumbnailUrl() const { DARABONBA_PTR_GET_DEFAULT(thumbnailUrl_, "") };
        inline RelatedInstanceList& setThumbnailUrl(string thumbnailUrl) { DARABONBA_PTR_SET_VALUE(thumbnailUrl_, thumbnailUrl) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline RelatedInstanceList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline RelatedInstanceList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        shared_ptr<string> appSubType_ {};
        shared_ptr<string> appType_ {};
        shared_ptr<string> bizId_ {};
        shared_ptr<string> buildType_ {};
        shared_ptr<int32_t> deleted_ {};
        shared_ptr<string> description_ {};
        // placeHolder
        shared_ptr<string> designSpecBizId_ {};
        shared_ptr<string> designSpecId_ {};
        shared_ptr<string> domain_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<string> env_ {};
        shared_ptr<string> espBizId_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtDelete_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<string> gmtPublish_ {};
        shared_ptr<string> iconUrl_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> orderId_ {};
        shared_ptr<RelatedInstanceList::Profile> profile_ {};
        shared_ptr<string> siteHost_ {};
        shared_ptr<string> slug_ {};
        shared_ptr<string> sourceType_ {};
        shared_ptr<string> startTime_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> statusText_ {};
        shared_ptr<string> thumbnailUrl_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> version_ {};
      };

      class Profile : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Profile& obj) { 
          DARABONBA_PTR_TO_JSON(AdminUrl, adminUrl_);
          DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
          DARABONBA_PTR_TO_JSON(ApplicationTypeText, applicationTypeText_);
          DARABONBA_PTR_TO_JSON(BindCname, bindCname_);
          DARABONBA_PTR_TO_JSON(BizId, bizId_);
          DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_TO_JSON(CustomerService, customerService_);
          DARABONBA_PTR_TO_JSON(DeployArea, deployArea_);
          DARABONBA_PTR_TO_JSON(DomainList, domainList_);
          DARABONBA_PTR_TO_JSON(EditorUrl, editorUrl_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(IcpbaNo, icpbaNo_);
          DARABONBA_PTR_TO_JSON(ImageList, imageList_);
          DARABONBA_PTR_TO_JSON(LxInstanceId, lxInstanceId_);
          DARABONBA_PTR_TO_JSON(OrdTime, ordTime_);
          DARABONBA_PTR_TO_JSON(OrderId, orderId_);
          DARABONBA_PTR_TO_JSON(OrderNum, orderNum_);
          DARABONBA_PTR_TO_JSON(PartnerId, partnerId_);
          DARABONBA_PTR_TO_JSON(PayTime, payTime_);
          DARABONBA_PTR_TO_JSON(PreviewUrl, previewUrl_);
          DARABONBA_PTR_TO_JSON(SeoSite, seoSite_);
          DARABONBA_PTR_TO_JSON(SiteLogo, siteLogo_);
          DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
          DARABONBA_PTR_TO_JSON(SiteVersionText, siteVersionText_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(TemplateEtag, templateEtag_);
          DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
          DARABONBA_PTR_TO_JSON(TextList, textList_);
          DARABONBA_PTR_TO_JSON(Thumbnail, thumbnail_);
          DARABONBA_PTR_TO_JSON(UpgradeStatus, upgradeStatus_);
        };
        friend void from_json(const Darabonba::Json& j, Profile& obj) { 
          DARABONBA_PTR_FROM_JSON(AdminUrl, adminUrl_);
          DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
          DARABONBA_PTR_FROM_JSON(ApplicationTypeText, applicationTypeText_);
          DARABONBA_PTR_FROM_JSON(BindCname, bindCname_);
          DARABONBA_PTR_FROM_JSON(BizId, bizId_);
          DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_FROM_JSON(CustomerService, customerService_);
          DARABONBA_PTR_FROM_JSON(DeployArea, deployArea_);
          DARABONBA_PTR_FROM_JSON(DomainList, domainList_);
          DARABONBA_PTR_FROM_JSON(EditorUrl, editorUrl_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(IcpbaNo, icpbaNo_);
          DARABONBA_PTR_FROM_JSON(ImageList, imageList_);
          DARABONBA_PTR_FROM_JSON(LxInstanceId, lxInstanceId_);
          DARABONBA_PTR_FROM_JSON(OrdTime, ordTime_);
          DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
          DARABONBA_PTR_FROM_JSON(OrderNum, orderNum_);
          DARABONBA_PTR_FROM_JSON(PartnerId, partnerId_);
          DARABONBA_PTR_FROM_JSON(PayTime, payTime_);
          DARABONBA_PTR_FROM_JSON(PreviewUrl, previewUrl_);
          DARABONBA_PTR_FROM_JSON(SeoSite, seoSite_);
          DARABONBA_PTR_FROM_JSON(SiteLogo, siteLogo_);
          DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
          DARABONBA_PTR_FROM_JSON(SiteVersionText, siteVersionText_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(TemplateEtag, templateEtag_);
          DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
          DARABONBA_PTR_FROM_JSON(TextList, textList_);
          DARABONBA_PTR_FROM_JSON(Thumbnail, thumbnail_);
          DARABONBA_PTR_FROM_JSON(UpgradeStatus, upgradeStatus_);
        };
        Profile() = default ;
        Profile(const Profile &) = default ;
        Profile(Profile &&) = default ;
        Profile(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Profile() = default ;
        Profile& operator=(const Profile &) = default ;
        Profile& operator=(Profile &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->adminUrl_ == nullptr
        && this->applicationType_ == nullptr && this->applicationTypeText_ == nullptr && this->bindCname_ == nullptr && this->bizId_ == nullptr && this->commodityCode_ == nullptr
        && this->customerService_ == nullptr && this->deployArea_ == nullptr && this->domainList_ == nullptr && this->editorUrl_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->icpbaNo_ == nullptr && this->imageList_ == nullptr && this->lxInstanceId_ == nullptr && this->ordTime_ == nullptr
        && this->orderId_ == nullptr && this->orderNum_ == nullptr && this->partnerId_ == nullptr && this->payTime_ == nullptr && this->previewUrl_ == nullptr
        && this->seoSite_ == nullptr && this->siteLogo_ == nullptr && this->siteVersion_ == nullptr && this->siteVersionText_ == nullptr && this->source_ == nullptr
        && this->templateEtag_ == nullptr && this->templateId_ == nullptr && this->textList_ == nullptr && this->thumbnail_ == nullptr && this->upgradeStatus_ == nullptr; };
        // adminUrl Field Functions 
        bool hasAdminUrl() const { return this->adminUrl_ != nullptr;};
        void deleteAdminUrl() { this->adminUrl_ = nullptr;};
        inline string getAdminUrl() const { DARABONBA_PTR_GET_DEFAULT(adminUrl_, "") };
        inline Profile& setAdminUrl(string adminUrl) { DARABONBA_PTR_SET_VALUE(adminUrl_, adminUrl) };


        // applicationType Field Functions 
        bool hasApplicationType() const { return this->applicationType_ != nullptr;};
        void deleteApplicationType() { this->applicationType_ = nullptr;};
        inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
        inline Profile& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


        // applicationTypeText Field Functions 
        bool hasApplicationTypeText() const { return this->applicationTypeText_ != nullptr;};
        void deleteApplicationTypeText() { this->applicationTypeText_ = nullptr;};
        inline string getApplicationTypeText() const { DARABONBA_PTR_GET_DEFAULT(applicationTypeText_, "") };
        inline Profile& setApplicationTypeText(string applicationTypeText) { DARABONBA_PTR_SET_VALUE(applicationTypeText_, applicationTypeText) };


        // bindCname Field Functions 
        bool hasBindCname() const { return this->bindCname_ != nullptr;};
        void deleteBindCname() { this->bindCname_ = nullptr;};
        inline string getBindCname() const { DARABONBA_PTR_GET_DEFAULT(bindCname_, "") };
        inline Profile& setBindCname(string bindCname) { DARABONBA_PTR_SET_VALUE(bindCname_, bindCname) };


        // bizId Field Functions 
        bool hasBizId() const { return this->bizId_ != nullptr;};
        void deleteBizId() { this->bizId_ = nullptr;};
        inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
        inline Profile& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


        // commodityCode Field Functions 
        bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
        void deleteCommodityCode() { this->commodityCode_ = nullptr;};
        inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
        inline Profile& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


        // customerService Field Functions 
        bool hasCustomerService() const { return this->customerService_ != nullptr;};
        void deleteCustomerService() { this->customerService_ = nullptr;};
        inline string getCustomerService() const { DARABONBA_PTR_GET_DEFAULT(customerService_, "") };
        inline Profile& setCustomerService(string customerService) { DARABONBA_PTR_SET_VALUE(customerService_, customerService) };


        // deployArea Field Functions 
        bool hasDeployArea() const { return this->deployArea_ != nullptr;};
        void deleteDeployArea() { this->deployArea_ = nullptr;};
        inline string getDeployArea() const { DARABONBA_PTR_GET_DEFAULT(deployArea_, "") };
        inline Profile& setDeployArea(string deployArea) { DARABONBA_PTR_SET_VALUE(deployArea_, deployArea) };


        // domainList Field Functions 
        bool hasDomainList() const { return this->domainList_ != nullptr;};
        void deleteDomainList() { this->domainList_ = nullptr;};
        inline string getDomainList() const { DARABONBA_PTR_GET_DEFAULT(domainList_, "") };
        inline Profile& setDomainList(string domainList) { DARABONBA_PTR_SET_VALUE(domainList_, domainList) };


        // editorUrl Field Functions 
        bool hasEditorUrl() const { return this->editorUrl_ != nullptr;};
        void deleteEditorUrl() { this->editorUrl_ = nullptr;};
        inline string getEditorUrl() const { DARABONBA_PTR_GET_DEFAULT(editorUrl_, "") };
        inline Profile& setEditorUrl(string editorUrl) { DARABONBA_PTR_SET_VALUE(editorUrl_, editorUrl) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Profile& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Profile& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // icpbaNo Field Functions 
        bool hasIcpbaNo() const { return this->icpbaNo_ != nullptr;};
        void deleteIcpbaNo() { this->icpbaNo_ = nullptr;};
        inline string getIcpbaNo() const { DARABONBA_PTR_GET_DEFAULT(icpbaNo_, "") };
        inline Profile& setIcpbaNo(string icpbaNo) { DARABONBA_PTR_SET_VALUE(icpbaNo_, icpbaNo) };


        // imageList Field Functions 
        bool hasImageList() const { return this->imageList_ != nullptr;};
        void deleteImageList() { this->imageList_ = nullptr;};
        inline string getImageList() const { DARABONBA_PTR_GET_DEFAULT(imageList_, "") };
        inline Profile& setImageList(string imageList) { DARABONBA_PTR_SET_VALUE(imageList_, imageList) };


        // lxInstanceId Field Functions 
        bool hasLxInstanceId() const { return this->lxInstanceId_ != nullptr;};
        void deleteLxInstanceId() { this->lxInstanceId_ = nullptr;};
        inline string getLxInstanceId() const { DARABONBA_PTR_GET_DEFAULT(lxInstanceId_, "") };
        inline Profile& setLxInstanceId(string lxInstanceId) { DARABONBA_PTR_SET_VALUE(lxInstanceId_, lxInstanceId) };


        // ordTime Field Functions 
        bool hasOrdTime() const { return this->ordTime_ != nullptr;};
        void deleteOrdTime() { this->ordTime_ = nullptr;};
        inline string getOrdTime() const { DARABONBA_PTR_GET_DEFAULT(ordTime_, "") };
        inline Profile& setOrdTime(string ordTime) { DARABONBA_PTR_SET_VALUE(ordTime_, ordTime) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
        inline Profile& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        // orderNum Field Functions 
        bool hasOrderNum() const { return this->orderNum_ != nullptr;};
        void deleteOrderNum() { this->orderNum_ = nullptr;};
        inline int32_t getOrderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0) };
        inline Profile& setOrderNum(int32_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


        // partnerId Field Functions 
        bool hasPartnerId() const { return this->partnerId_ != nullptr;};
        void deletePartnerId() { this->partnerId_ = nullptr;};
        inline string getPartnerId() const { DARABONBA_PTR_GET_DEFAULT(partnerId_, "") };
        inline Profile& setPartnerId(string partnerId) { DARABONBA_PTR_SET_VALUE(partnerId_, partnerId) };


        // payTime Field Functions 
        bool hasPayTime() const { return this->payTime_ != nullptr;};
        void deletePayTime() { this->payTime_ = nullptr;};
        inline string getPayTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
        inline Profile& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


        // previewUrl Field Functions 
        bool hasPreviewUrl() const { return this->previewUrl_ != nullptr;};
        void deletePreviewUrl() { this->previewUrl_ = nullptr;};
        inline string getPreviewUrl() const { DARABONBA_PTR_GET_DEFAULT(previewUrl_, "") };
        inline Profile& setPreviewUrl(string previewUrl) { DARABONBA_PTR_SET_VALUE(previewUrl_, previewUrl) };


        // seoSite Field Functions 
        bool hasSeoSite() const { return this->seoSite_ != nullptr;};
        void deleteSeoSite() { this->seoSite_ = nullptr;};
        inline string getSeoSite() const { DARABONBA_PTR_GET_DEFAULT(seoSite_, "") };
        inline Profile& setSeoSite(string seoSite) { DARABONBA_PTR_SET_VALUE(seoSite_, seoSite) };


        // siteLogo Field Functions 
        bool hasSiteLogo() const { return this->siteLogo_ != nullptr;};
        void deleteSiteLogo() { this->siteLogo_ = nullptr;};
        inline string getSiteLogo() const { DARABONBA_PTR_GET_DEFAULT(siteLogo_, "") };
        inline Profile& setSiteLogo(string siteLogo) { DARABONBA_PTR_SET_VALUE(siteLogo_, siteLogo) };


        // siteVersion Field Functions 
        bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
        void deleteSiteVersion() { this->siteVersion_ = nullptr;};
        inline string getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, "") };
        inline Profile& setSiteVersion(string siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


        // siteVersionText Field Functions 
        bool hasSiteVersionText() const { return this->siteVersionText_ != nullptr;};
        void deleteSiteVersionText() { this->siteVersionText_ = nullptr;};
        inline string getSiteVersionText() const { DARABONBA_PTR_GET_DEFAULT(siteVersionText_, "") };
        inline Profile& setSiteVersionText(string siteVersionText) { DARABONBA_PTR_SET_VALUE(siteVersionText_, siteVersionText) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline Profile& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // templateEtag Field Functions 
        bool hasTemplateEtag() const { return this->templateEtag_ != nullptr;};
        void deleteTemplateEtag() { this->templateEtag_ = nullptr;};
        inline string getTemplateEtag() const { DARABONBA_PTR_GET_DEFAULT(templateEtag_, "") };
        inline Profile& setTemplateEtag(string templateEtag) { DARABONBA_PTR_SET_VALUE(templateEtag_, templateEtag) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
        inline Profile& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        // textList Field Functions 
        bool hasTextList() const { return this->textList_ != nullptr;};
        void deleteTextList() { this->textList_ = nullptr;};
        inline string getTextList() const { DARABONBA_PTR_GET_DEFAULT(textList_, "") };
        inline Profile& setTextList(string textList) { DARABONBA_PTR_SET_VALUE(textList_, textList) };


        // thumbnail Field Functions 
        bool hasThumbnail() const { return this->thumbnail_ != nullptr;};
        void deleteThumbnail() { this->thumbnail_ = nullptr;};
        inline string getThumbnail() const { DARABONBA_PTR_GET_DEFAULT(thumbnail_, "") };
        inline Profile& setThumbnail(string thumbnail) { DARABONBA_PTR_SET_VALUE(thumbnail_, thumbnail) };


        // upgradeStatus Field Functions 
        bool hasUpgradeStatus() const { return this->upgradeStatus_ != nullptr;};
        void deleteUpgradeStatus() { this->upgradeStatus_ = nullptr;};
        inline string getUpgradeStatus() const { DARABONBA_PTR_GET_DEFAULT(upgradeStatus_, "") };
        inline Profile& setUpgradeStatus(string upgradeStatus) { DARABONBA_PTR_SET_VALUE(upgradeStatus_, upgradeStatus) };


      protected:
        shared_ptr<string> adminUrl_ {};
        shared_ptr<string> applicationType_ {};
        shared_ptr<string> applicationTypeText_ {};
        shared_ptr<string> bindCname_ {};
        shared_ptr<string> bizId_ {};
        shared_ptr<string> commodityCode_ {};
        shared_ptr<string> customerService_ {};
        shared_ptr<string> deployArea_ {};
        shared_ptr<string> domainList_ {};
        shared_ptr<string> editorUrl_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<string> icpbaNo_ {};
        shared_ptr<string> imageList_ {};
        shared_ptr<string> lxInstanceId_ {};
        shared_ptr<string> ordTime_ {};
        shared_ptr<string> orderId_ {};
        shared_ptr<int32_t> orderNum_ {};
        shared_ptr<string> partnerId_ {};
        shared_ptr<string> payTime_ {};
        shared_ptr<string> previewUrl_ {};
        shared_ptr<string> seoSite_ {};
        shared_ptr<string> siteLogo_ {};
        shared_ptr<string> siteVersion_ {};
        shared_ptr<string> siteVersionText_ {};
        shared_ptr<string> source_ {};
        shared_ptr<string> templateEtag_ {};
        shared_ptr<string> templateId_ {};
        shared_ptr<string> textList_ {};
        shared_ptr<string> thumbnail_ {};
        shared_ptr<string> upgradeStatus_ {};
      };

      class PartnerDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PartnerDetail& obj) { 
          DARABONBA_PTR_TO_JSON(BindData, bindData_);
          DARABONBA_PTR_TO_JSON(PartnerId, partnerId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, PartnerDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(BindData, bindData_);
          DARABONBA_PTR_FROM_JSON(PartnerId, partnerId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        PartnerDetail() = default ;
        PartnerDetail(const PartnerDetail &) = default ;
        PartnerDetail(PartnerDetail &&) = default ;
        PartnerDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PartnerDetail() = default ;
        PartnerDetail& operator=(const PartnerDetail &) = default ;
        PartnerDetail& operator=(PartnerDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class BindData : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BindData& obj) { 
            DARABONBA_PTR_TO_JSON(AliyunPk, aliyunPk_);
            DARABONBA_PTR_TO_JSON(BizId, bizId_);
            DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_TO_JSON(GrantAliyunPk, grantAliyunPk_);
            DARABONBA_PTR_TO_JSON(Mobile, mobile_);
            DARABONBA_PTR_TO_JSON(ParentPk, parentPk_);
            DARABONBA_PTR_TO_JSON(PartnerId, partnerId_);
            DARABONBA_PTR_TO_JSON(UserDisplayName, userDisplayName_);
          };
          friend void from_json(const Darabonba::Json& j, BindData& obj) { 
            DARABONBA_PTR_FROM_JSON(AliyunPk, aliyunPk_);
            DARABONBA_PTR_FROM_JSON(BizId, bizId_);
            DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_FROM_JSON(GrantAliyunPk, grantAliyunPk_);
            DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
            DARABONBA_PTR_FROM_JSON(ParentPk, parentPk_);
            DARABONBA_PTR_FROM_JSON(PartnerId, partnerId_);
            DARABONBA_PTR_FROM_JSON(UserDisplayName, userDisplayName_);
          };
          BindData() = default ;
          BindData(const BindData &) = default ;
          BindData(BindData &&) = default ;
          BindData(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BindData() = default ;
          BindData& operator=(const BindData &) = default ;
          BindData& operator=(BindData &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->aliyunPk_ == nullptr
        && this->bizId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->grantAliyunPk_ == nullptr && this->mobile_ == nullptr
        && this->parentPk_ == nullptr && this->partnerId_ == nullptr && this->userDisplayName_ == nullptr; };
          // aliyunPk Field Functions 
          bool hasAliyunPk() const { return this->aliyunPk_ != nullptr;};
          void deleteAliyunPk() { this->aliyunPk_ = nullptr;};
          inline string getAliyunPk() const { DARABONBA_PTR_GET_DEFAULT(aliyunPk_, "") };
          inline BindData& setAliyunPk(string aliyunPk) { DARABONBA_PTR_SET_VALUE(aliyunPk_, aliyunPk) };


          // bizId Field Functions 
          bool hasBizId() const { return this->bizId_ != nullptr;};
          void deleteBizId() { this->bizId_ = nullptr;};
          inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
          inline BindData& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


          // gmtCreate Field Functions 
          bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
          void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
          inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
          inline BindData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


          // gmtModified Field Functions 
          bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
          void deleteGmtModified() { this->gmtModified_ = nullptr;};
          inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
          inline BindData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


          // grantAliyunPk Field Functions 
          bool hasGrantAliyunPk() const { return this->grantAliyunPk_ != nullptr;};
          void deleteGrantAliyunPk() { this->grantAliyunPk_ = nullptr;};
          inline string getGrantAliyunPk() const { DARABONBA_PTR_GET_DEFAULT(grantAliyunPk_, "") };
          inline BindData& setGrantAliyunPk(string grantAliyunPk) { DARABONBA_PTR_SET_VALUE(grantAliyunPk_, grantAliyunPk) };


          // mobile Field Functions 
          bool hasMobile() const { return this->mobile_ != nullptr;};
          void deleteMobile() { this->mobile_ = nullptr;};
          inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
          inline BindData& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


          // parentPk Field Functions 
          bool hasParentPk() const { return this->parentPk_ != nullptr;};
          void deleteParentPk() { this->parentPk_ = nullptr;};
          inline string getParentPk() const { DARABONBA_PTR_GET_DEFAULT(parentPk_, "") };
          inline BindData& setParentPk(string parentPk) { DARABONBA_PTR_SET_VALUE(parentPk_, parentPk) };


          // partnerId Field Functions 
          bool hasPartnerId() const { return this->partnerId_ != nullptr;};
          void deletePartnerId() { this->partnerId_ = nullptr;};
          inline string getPartnerId() const { DARABONBA_PTR_GET_DEFAULT(partnerId_, "") };
          inline BindData& setPartnerId(string partnerId) { DARABONBA_PTR_SET_VALUE(partnerId_, partnerId) };


          // userDisplayName Field Functions 
          bool hasUserDisplayName() const { return this->userDisplayName_ != nullptr;};
          void deleteUserDisplayName() { this->userDisplayName_ = nullptr;};
          inline string getUserDisplayName() const { DARABONBA_PTR_GET_DEFAULT(userDisplayName_, "") };
          inline BindData& setUserDisplayName(string userDisplayName) { DARABONBA_PTR_SET_VALUE(userDisplayName_, userDisplayName) };


        protected:
          // aliyun_pk
          shared_ptr<string> aliyunPk_ {};
          shared_ptr<string> bizId_ {};
          shared_ptr<string> gmtCreate_ {};
          shared_ptr<string> gmtModified_ {};
          shared_ptr<string> grantAliyunPk_ {};
          shared_ptr<string> mobile_ {};
          // parent_pk
          shared_ptr<string> parentPk_ {};
          shared_ptr<string> partnerId_ {};
          shared_ptr<string> userDisplayName_ {};
        };

        virtual bool empty() const override { return this->bindData_ == nullptr
        && this->partnerId_ == nullptr && this->status_ == nullptr; };
        // bindData Field Functions 
        bool hasBindData() const { return this->bindData_ != nullptr;};
        void deleteBindData() { this->bindData_ = nullptr;};
        inline const PartnerDetail::BindData & getBindData() const { DARABONBA_PTR_GET_CONST(bindData_, PartnerDetail::BindData) };
        inline PartnerDetail::BindData getBindData() { DARABONBA_PTR_GET(bindData_, PartnerDetail::BindData) };
        inline PartnerDetail& setBindData(const PartnerDetail::BindData & bindData) { DARABONBA_PTR_SET_VALUE(bindData_, bindData) };
        inline PartnerDetail& setBindData(PartnerDetail::BindData && bindData) { DARABONBA_PTR_SET_RVALUE(bindData_, bindData) };


        // partnerId Field Functions 
        bool hasPartnerId() const { return this->partnerId_ != nullptr;};
        void deletePartnerId() { this->partnerId_ = nullptr;};
        inline string getPartnerId() const { DARABONBA_PTR_GET_DEFAULT(partnerId_, "") };
        inline PartnerDetail& setPartnerId(string partnerId) { DARABONBA_PTR_SET_VALUE(partnerId_, partnerId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PartnerDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // data
        shared_ptr<PartnerDetail::BindData> bindData_ {};
        shared_ptr<string> partnerId_ {};
        shared_ptr<string> status_ {};
      };

      class AppServiceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppServiceList& obj) { 
          DARABONBA_PTR_TO_JSON(BizId, bizId_);
          DARABONBA_PTR_TO_JSON(Deleted, deleted_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(EspBizId, espBizId_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Group, group_);
          DARABONBA_PTR_TO_JSON(InstanceBizId, instanceBizId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NodeList, nodeList_);
          DARABONBA_PTR_TO_JSON(OperationAddress, operationAddress_);
          DARABONBA_PTR_TO_JSON(OrderId, orderId_);
          DARABONBA_PTR_TO_JSON(Profile, profile_);
          DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
          DARABONBA_PTR_TO_JSON(ServiceTypeText, serviceTypeText_);
          DARABONBA_PTR_TO_JSON(Slug, slug_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, AppServiceList& obj) { 
          DARABONBA_PTR_FROM_JSON(BizId, bizId_);
          DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(EspBizId, espBizId_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Group, group_);
          DARABONBA_PTR_FROM_JSON(InstanceBizId, instanceBizId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NodeList, nodeList_);
          DARABONBA_PTR_FROM_JSON(OperationAddress, operationAddress_);
          DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
          DARABONBA_PTR_FROM_JSON(Profile, profile_);
          DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
          DARABONBA_PTR_FROM_JSON(ServiceTypeText, serviceTypeText_);
          DARABONBA_PTR_FROM_JSON(Slug, slug_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        AppServiceList() = default ;
        AppServiceList(const AppServiceList &) = default ;
        AppServiceList(AppServiceList &&) = default ;
        AppServiceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppServiceList() = default ;
        AppServiceList& operator=(const AppServiceList &) = default ;
        AppServiceList& operator=(AppServiceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Profile : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Profile& obj) { 
            DARABONBA_PTR_TO_JSON(BizId, bizId_);
            DARABONBA_PTR_TO_JSON(DesignType, designType_);
            DARABONBA_PTR_TO_JSON(DesignTypeText, designTypeText_);
            DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(LxInstanceId, lxInstanceId_);
            DARABONBA_PTR_TO_JSON(OrderId, orderId_);
            DARABONBA_PTR_TO_JSON(ServiceSpec, serviceSpec_);
            DARABONBA_PTR_TO_JSON(ServiceSpecText, serviceSpecText_);
            DARABONBA_PTR_TO_JSON(UpgradeStatus, upgradeStatus_);
          };
          friend void from_json(const Darabonba::Json& j, Profile& obj) { 
            DARABONBA_PTR_FROM_JSON(BizId, bizId_);
            DARABONBA_PTR_FROM_JSON(DesignType, designType_);
            DARABONBA_PTR_FROM_JSON(DesignTypeText, designTypeText_);
            DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
            DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(LxInstanceId, lxInstanceId_);
            DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
            DARABONBA_PTR_FROM_JSON(ServiceSpec, serviceSpec_);
            DARABONBA_PTR_FROM_JSON(ServiceSpecText, serviceSpecText_);
            DARABONBA_PTR_FROM_JSON(UpgradeStatus, upgradeStatus_);
          };
          Profile() = default ;
          Profile(const Profile &) = default ;
          Profile(Profile &&) = default ;
          Profile(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Profile() = default ;
          Profile& operator=(const Profile &) = default ;
          Profile& operator=(Profile &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bizId_ == nullptr
        && this->designType_ == nullptr && this->designTypeText_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr
        && this->lxInstanceId_ == nullptr && this->orderId_ == nullptr && this->serviceSpec_ == nullptr && this->serviceSpecText_ == nullptr && this->upgradeStatus_ == nullptr; };
          // bizId Field Functions 
          bool hasBizId() const { return this->bizId_ != nullptr;};
          void deleteBizId() { this->bizId_ = nullptr;};
          inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
          inline Profile& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


          // designType Field Functions 
          bool hasDesignType() const { return this->designType_ != nullptr;};
          void deleteDesignType() { this->designType_ = nullptr;};
          inline string getDesignType() const { DARABONBA_PTR_GET_DEFAULT(designType_, "") };
          inline Profile& setDesignType(string designType) { DARABONBA_PTR_SET_VALUE(designType_, designType) };


          // designTypeText Field Functions 
          bool hasDesignTypeText() const { return this->designTypeText_ != nullptr;};
          void deleteDesignTypeText() { this->designTypeText_ = nullptr;};
          inline string getDesignTypeText() const { DARABONBA_PTR_GET_DEFAULT(designTypeText_, "") };
          inline Profile& setDesignTypeText(string designTypeText) { DARABONBA_PTR_SET_VALUE(designTypeText_, designTypeText) };


          // gmtCreate Field Functions 
          bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
          void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
          inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
          inline Profile& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


          // gmtModified Field Functions 
          bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
          void deleteGmtModified() { this->gmtModified_ = nullptr;};
          inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
          inline Profile& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Profile& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // lxInstanceId Field Functions 
          bool hasLxInstanceId() const { return this->lxInstanceId_ != nullptr;};
          void deleteLxInstanceId() { this->lxInstanceId_ = nullptr;};
          inline string getLxInstanceId() const { DARABONBA_PTR_GET_DEFAULT(lxInstanceId_, "") };
          inline Profile& setLxInstanceId(string lxInstanceId) { DARABONBA_PTR_SET_VALUE(lxInstanceId_, lxInstanceId) };


          // orderId Field Functions 
          bool hasOrderId() const { return this->orderId_ != nullptr;};
          void deleteOrderId() { this->orderId_ = nullptr;};
          inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
          inline Profile& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


          // serviceSpec Field Functions 
          bool hasServiceSpec() const { return this->serviceSpec_ != nullptr;};
          void deleteServiceSpec() { this->serviceSpec_ = nullptr;};
          inline string getServiceSpec() const { DARABONBA_PTR_GET_DEFAULT(serviceSpec_, "") };
          inline Profile& setServiceSpec(string serviceSpec) { DARABONBA_PTR_SET_VALUE(serviceSpec_, serviceSpec) };


          // serviceSpecText Field Functions 
          bool hasServiceSpecText() const { return this->serviceSpecText_ != nullptr;};
          void deleteServiceSpecText() { this->serviceSpecText_ = nullptr;};
          inline string getServiceSpecText() const { DARABONBA_PTR_GET_DEFAULT(serviceSpecText_, "") };
          inline Profile& setServiceSpecText(string serviceSpecText) { DARABONBA_PTR_SET_VALUE(serviceSpecText_, serviceSpecText) };


          // upgradeStatus Field Functions 
          bool hasUpgradeStatus() const { return this->upgradeStatus_ != nullptr;};
          void deleteUpgradeStatus() { this->upgradeStatus_ = nullptr;};
          inline string getUpgradeStatus() const { DARABONBA_PTR_GET_DEFAULT(upgradeStatus_, "") };
          inline Profile& setUpgradeStatus(string upgradeStatus) { DARABONBA_PTR_SET_VALUE(upgradeStatus_, upgradeStatus) };


        protected:
          shared_ptr<string> bizId_ {};
          shared_ptr<string> designType_ {};
          shared_ptr<string> designTypeText_ {};
          shared_ptr<string> gmtCreate_ {};
          shared_ptr<string> gmtModified_ {};
          shared_ptr<string> id_ {};
          shared_ptr<string> lxInstanceId_ {};
          shared_ptr<string> orderId_ {};
          shared_ptr<string> serviceSpec_ {};
          shared_ptr<string> serviceSpecText_ {};
          shared_ptr<string> upgradeStatus_ {};
        };

        class OperationAddress : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OperationAddress& obj) { 
            DARABONBA_PTR_TO_JSON(Actions, actions_);
            DARABONBA_PTR_TO_JSON(AiCustomerConfigUrl, aiCustomerConfigUrl_);
            DARABONBA_PTR_TO_JSON(AiDesignUrl, aiDesignUrl_);
            DARABONBA_PTR_TO_JSON(AppPublishUrl, appPublishUrl_);
            DARABONBA_PTR_TO_JSON(DashboardActions, dashboardActions_);
            DARABONBA_PTR_TO_JSON(DesignUrl, designUrl_);
            DARABONBA_PTR_TO_JSON(InstanceLoginUrl, instanceLoginUrl_);
            DARABONBA_PTR_TO_JSON(RenewBuyUrl, renewBuyUrl_);
            DARABONBA_PTR_TO_JSON(ServerDeliveryUrl, serverDeliveryUrl_);
            DARABONBA_PTR_TO_JSON(UpgradeBuyUrl, upgradeBuyUrl_);
          };
          friend void from_json(const Darabonba::Json& j, OperationAddress& obj) { 
            DARABONBA_PTR_FROM_JSON(Actions, actions_);
            DARABONBA_PTR_FROM_JSON(AiCustomerConfigUrl, aiCustomerConfigUrl_);
            DARABONBA_PTR_FROM_JSON(AiDesignUrl, aiDesignUrl_);
            DARABONBA_PTR_FROM_JSON(AppPublishUrl, appPublishUrl_);
            DARABONBA_PTR_FROM_JSON(DashboardActions, dashboardActions_);
            DARABONBA_PTR_FROM_JSON(DesignUrl, designUrl_);
            DARABONBA_PTR_FROM_JSON(InstanceLoginUrl, instanceLoginUrl_);
            DARABONBA_PTR_FROM_JSON(RenewBuyUrl, renewBuyUrl_);
            DARABONBA_PTR_FROM_JSON(ServerDeliveryUrl, serverDeliveryUrl_);
            DARABONBA_PTR_FROM_JSON(UpgradeBuyUrl, upgradeBuyUrl_);
          };
          OperationAddress() = default ;
          OperationAddress(const OperationAddress &) = default ;
          OperationAddress(OperationAddress &&) = default ;
          OperationAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OperationAddress() = default ;
          OperationAddress& operator=(const OperationAddress &) = default ;
          OperationAddress& operator=(OperationAddress &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class DashboardActions : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DashboardActions& obj) { 
              DARABONBA_PTR_TO_JSON(ActionKey, actionKey_);
              DARABONBA_PTR_TO_JSON(ActionText, actionText_);
              DARABONBA_PTR_TO_JSON(Enable, enable_);
              DARABONBA_PTR_TO_JSON(Href, href_);
            };
            friend void from_json(const Darabonba::Json& j, DashboardActions& obj) { 
              DARABONBA_PTR_FROM_JSON(ActionKey, actionKey_);
              DARABONBA_PTR_FROM_JSON(ActionText, actionText_);
              DARABONBA_PTR_FROM_JSON(Enable, enable_);
              DARABONBA_PTR_FROM_JSON(Href, href_);
            };
            DashboardActions() = default ;
            DashboardActions(const DashboardActions &) = default ;
            DashboardActions(DashboardActions &&) = default ;
            DashboardActions(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DashboardActions() = default ;
            DashboardActions& operator=(const DashboardActions &) = default ;
            DashboardActions& operator=(DashboardActions &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->actionKey_ == nullptr
        && this->actionText_ == nullptr && this->enable_ == nullptr && this->href_ == nullptr; };
            // actionKey Field Functions 
            bool hasActionKey() const { return this->actionKey_ != nullptr;};
            void deleteActionKey() { this->actionKey_ = nullptr;};
            inline string getActionKey() const { DARABONBA_PTR_GET_DEFAULT(actionKey_, "") };
            inline DashboardActions& setActionKey(string actionKey) { DARABONBA_PTR_SET_VALUE(actionKey_, actionKey) };


            // actionText Field Functions 
            bool hasActionText() const { return this->actionText_ != nullptr;};
            void deleteActionText() { this->actionText_ = nullptr;};
            inline string getActionText() const { DARABONBA_PTR_GET_DEFAULT(actionText_, "") };
            inline DashboardActions& setActionText(string actionText) { DARABONBA_PTR_SET_VALUE(actionText_, actionText) };


            // enable Field Functions 
            bool hasEnable() const { return this->enable_ != nullptr;};
            void deleteEnable() { this->enable_ = nullptr;};
            inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
            inline DashboardActions& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


            // href Field Functions 
            bool hasHref() const { return this->href_ != nullptr;};
            void deleteHref() { this->href_ = nullptr;};
            inline string getHref() const { DARABONBA_PTR_GET_DEFAULT(href_, "") };
            inline DashboardActions& setHref(string href) { DARABONBA_PTR_SET_VALUE(href_, href) };


          protected:
            shared_ptr<string> actionKey_ {};
            shared_ptr<string> actionText_ {};
            shared_ptr<bool> enable_ {};
            shared_ptr<string> href_ {};
          };

          class Actions : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Actions& obj) { 
              DARABONBA_PTR_TO_JSON(ActionKey, actionKey_);
              DARABONBA_PTR_TO_JSON(ActionText, actionText_);
              DARABONBA_PTR_TO_JSON(Enable, enable_);
              DARABONBA_PTR_TO_JSON(Href, href_);
            };
            friend void from_json(const Darabonba::Json& j, Actions& obj) { 
              DARABONBA_PTR_FROM_JSON(ActionKey, actionKey_);
              DARABONBA_PTR_FROM_JSON(ActionText, actionText_);
              DARABONBA_PTR_FROM_JSON(Enable, enable_);
              DARABONBA_PTR_FROM_JSON(Href, href_);
            };
            Actions() = default ;
            Actions(const Actions &) = default ;
            Actions(Actions &&) = default ;
            Actions(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Actions() = default ;
            Actions& operator=(const Actions &) = default ;
            Actions& operator=(Actions &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->actionKey_ == nullptr
        && this->actionText_ == nullptr && this->enable_ == nullptr && this->href_ == nullptr; };
            // actionKey Field Functions 
            bool hasActionKey() const { return this->actionKey_ != nullptr;};
            void deleteActionKey() { this->actionKey_ = nullptr;};
            inline string getActionKey() const { DARABONBA_PTR_GET_DEFAULT(actionKey_, "") };
            inline Actions& setActionKey(string actionKey) { DARABONBA_PTR_SET_VALUE(actionKey_, actionKey) };


            // actionText Field Functions 
            bool hasActionText() const { return this->actionText_ != nullptr;};
            void deleteActionText() { this->actionText_ = nullptr;};
            inline string getActionText() const { DARABONBA_PTR_GET_DEFAULT(actionText_, "") };
            inline Actions& setActionText(string actionText) { DARABONBA_PTR_SET_VALUE(actionText_, actionText) };


            // enable Field Functions 
            bool hasEnable() const { return this->enable_ != nullptr;};
            void deleteEnable() { this->enable_ = nullptr;};
            inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
            inline Actions& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


            // href Field Functions 
            bool hasHref() const { return this->href_ != nullptr;};
            void deleteHref() { this->href_ = nullptr;};
            inline string getHref() const { DARABONBA_PTR_GET_DEFAULT(href_, "") };
            inline Actions& setHref(string href) { DARABONBA_PTR_SET_VALUE(href_, href) };


          protected:
            shared_ptr<string> actionKey_ {};
            shared_ptr<string> actionText_ {};
            shared_ptr<bool> enable_ {};
            shared_ptr<string> href_ {};
          };

          virtual bool empty() const override { return this->actions_ == nullptr
        && this->aiCustomerConfigUrl_ == nullptr && this->aiDesignUrl_ == nullptr && this->appPublishUrl_ == nullptr && this->dashboardActions_ == nullptr && this->designUrl_ == nullptr
        && this->instanceLoginUrl_ == nullptr && this->renewBuyUrl_ == nullptr && this->serverDeliveryUrl_ == nullptr && this->upgradeBuyUrl_ == nullptr; };
          // actions Field Functions 
          bool hasActions() const { return this->actions_ != nullptr;};
          void deleteActions() { this->actions_ = nullptr;};
          inline const vector<OperationAddress::Actions> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<OperationAddress::Actions>) };
          inline vector<OperationAddress::Actions> getActions() { DARABONBA_PTR_GET(actions_, vector<OperationAddress::Actions>) };
          inline OperationAddress& setActions(const vector<OperationAddress::Actions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
          inline OperationAddress& setActions(vector<OperationAddress::Actions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


          // aiCustomerConfigUrl Field Functions 
          bool hasAiCustomerConfigUrl() const { return this->aiCustomerConfigUrl_ != nullptr;};
          void deleteAiCustomerConfigUrl() { this->aiCustomerConfigUrl_ = nullptr;};
          inline string getAiCustomerConfigUrl() const { DARABONBA_PTR_GET_DEFAULT(aiCustomerConfigUrl_, "") };
          inline OperationAddress& setAiCustomerConfigUrl(string aiCustomerConfigUrl) { DARABONBA_PTR_SET_VALUE(aiCustomerConfigUrl_, aiCustomerConfigUrl) };


          // aiDesignUrl Field Functions 
          bool hasAiDesignUrl() const { return this->aiDesignUrl_ != nullptr;};
          void deleteAiDesignUrl() { this->aiDesignUrl_ = nullptr;};
          inline string getAiDesignUrl() const { DARABONBA_PTR_GET_DEFAULT(aiDesignUrl_, "") };
          inline OperationAddress& setAiDesignUrl(string aiDesignUrl) { DARABONBA_PTR_SET_VALUE(aiDesignUrl_, aiDesignUrl) };


          // appPublishUrl Field Functions 
          bool hasAppPublishUrl() const { return this->appPublishUrl_ != nullptr;};
          void deleteAppPublishUrl() { this->appPublishUrl_ = nullptr;};
          inline string getAppPublishUrl() const { DARABONBA_PTR_GET_DEFAULT(appPublishUrl_, "") };
          inline OperationAddress& setAppPublishUrl(string appPublishUrl) { DARABONBA_PTR_SET_VALUE(appPublishUrl_, appPublishUrl) };


          // dashboardActions Field Functions 
          bool hasDashboardActions() const { return this->dashboardActions_ != nullptr;};
          void deleteDashboardActions() { this->dashboardActions_ = nullptr;};
          inline const vector<OperationAddress::DashboardActions> & getDashboardActions() const { DARABONBA_PTR_GET_CONST(dashboardActions_, vector<OperationAddress::DashboardActions>) };
          inline vector<OperationAddress::DashboardActions> getDashboardActions() { DARABONBA_PTR_GET(dashboardActions_, vector<OperationAddress::DashboardActions>) };
          inline OperationAddress& setDashboardActions(const vector<OperationAddress::DashboardActions> & dashboardActions) { DARABONBA_PTR_SET_VALUE(dashboardActions_, dashboardActions) };
          inline OperationAddress& setDashboardActions(vector<OperationAddress::DashboardActions> && dashboardActions) { DARABONBA_PTR_SET_RVALUE(dashboardActions_, dashboardActions) };


          // designUrl Field Functions 
          bool hasDesignUrl() const { return this->designUrl_ != nullptr;};
          void deleteDesignUrl() { this->designUrl_ = nullptr;};
          inline string getDesignUrl() const { DARABONBA_PTR_GET_DEFAULT(designUrl_, "") };
          inline OperationAddress& setDesignUrl(string designUrl) { DARABONBA_PTR_SET_VALUE(designUrl_, designUrl) };


          // instanceLoginUrl Field Functions 
          bool hasInstanceLoginUrl() const { return this->instanceLoginUrl_ != nullptr;};
          void deleteInstanceLoginUrl() { this->instanceLoginUrl_ = nullptr;};
          inline string getInstanceLoginUrl() const { DARABONBA_PTR_GET_DEFAULT(instanceLoginUrl_, "") };
          inline OperationAddress& setInstanceLoginUrl(string instanceLoginUrl) { DARABONBA_PTR_SET_VALUE(instanceLoginUrl_, instanceLoginUrl) };


          // renewBuyUrl Field Functions 
          bool hasRenewBuyUrl() const { return this->renewBuyUrl_ != nullptr;};
          void deleteRenewBuyUrl() { this->renewBuyUrl_ = nullptr;};
          inline string getRenewBuyUrl() const { DARABONBA_PTR_GET_DEFAULT(renewBuyUrl_, "") };
          inline OperationAddress& setRenewBuyUrl(string renewBuyUrl) { DARABONBA_PTR_SET_VALUE(renewBuyUrl_, renewBuyUrl) };


          // serverDeliveryUrl Field Functions 
          bool hasServerDeliveryUrl() const { return this->serverDeliveryUrl_ != nullptr;};
          void deleteServerDeliveryUrl() { this->serverDeliveryUrl_ = nullptr;};
          inline string getServerDeliveryUrl() const { DARABONBA_PTR_GET_DEFAULT(serverDeliveryUrl_, "") };
          inline OperationAddress& setServerDeliveryUrl(string serverDeliveryUrl) { DARABONBA_PTR_SET_VALUE(serverDeliveryUrl_, serverDeliveryUrl) };


          // upgradeBuyUrl Field Functions 
          bool hasUpgradeBuyUrl() const { return this->upgradeBuyUrl_ != nullptr;};
          void deleteUpgradeBuyUrl() { this->upgradeBuyUrl_ = nullptr;};
          inline string getUpgradeBuyUrl() const { DARABONBA_PTR_GET_DEFAULT(upgradeBuyUrl_, "") };
          inline OperationAddress& setUpgradeBuyUrl(string upgradeBuyUrl) { DARABONBA_PTR_SET_VALUE(upgradeBuyUrl_, upgradeBuyUrl) };


        protected:
          shared_ptr<vector<OperationAddress::Actions>> actions_ {};
          shared_ptr<string> aiCustomerConfigUrl_ {};
          shared_ptr<string> aiDesignUrl_ {};
          shared_ptr<string> appPublishUrl_ {};
          shared_ptr<vector<OperationAddress::DashboardActions>> dashboardActions_ {};
          shared_ptr<string> designUrl_ {};
          shared_ptr<string> instanceLoginUrl_ {};
          shared_ptr<string> renewBuyUrl_ {};
          shared_ptr<string> serverDeliveryUrl_ {};
          shared_ptr<string> upgradeBuyUrl_ {};
        };

        class NodeList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NodeList& obj) { 
            DARABONBA_PTR_TO_JSON(Children, children_);
            DARABONBA_PTR_TO_JSON(FinalStepNo, finalStepNo_);
            DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
            DARABONBA_PTR_TO_JSON(IsContainerNode, isContainerNode_);
            DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
            DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
            DARABONBA_PTR_TO_JSON(NodeStatus, nodeStatus_);
            DARABONBA_PTR_TO_JSON(OperatorRole, operatorRole_);
            DARABONBA_PTR_TO_JSON(ParentNodeId, parentNodeId_);
            DARABONBA_PTR_TO_JSON(StepNo, stepNo_);
          };
          friend void from_json(const Darabonba::Json& j, NodeList& obj) { 
            DARABONBA_PTR_FROM_JSON(Children, children_);
            DARABONBA_PTR_FROM_JSON(FinalStepNo, finalStepNo_);
            DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
            DARABONBA_PTR_FROM_JSON(IsContainerNode, isContainerNode_);
            DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
            DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
            DARABONBA_PTR_FROM_JSON(NodeStatus, nodeStatus_);
            DARABONBA_PTR_FROM_JSON(OperatorRole, operatorRole_);
            DARABONBA_PTR_FROM_JSON(ParentNodeId, parentNodeId_);
            DARABONBA_PTR_FROM_JSON(StepNo, stepNo_);
          };
          NodeList() = default ;
          NodeList(const NodeList &) = default ;
          NodeList(NodeList &&) = default ;
          NodeList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NodeList() = default ;
          NodeList& operator=(const NodeList &) = default ;
          NodeList& operator=(NodeList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->children_ == nullptr
        && this->finalStepNo_ == nullptr && this->finishTime_ == nullptr && this->isContainerNode_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr
        && this->nodeStatus_ == nullptr && this->operatorRole_ == nullptr && this->parentNodeId_ == nullptr && this->stepNo_ == nullptr; };
          // children Field Functions 
          bool hasChildren() const { return this->children_ != nullptr;};
          void deleteChildren() { this->children_ = nullptr;};
          inline const vector<Darabonba::Json> & getChildren() const { DARABONBA_PTR_GET_CONST(children_, vector<Darabonba::Json>) };
          inline vector<Darabonba::Json> getChildren() { DARABONBA_PTR_GET(children_, vector<Darabonba::Json>) };
          inline NodeList& setChildren(const vector<Darabonba::Json> & children) { DARABONBA_PTR_SET_VALUE(children_, children) };
          inline NodeList& setChildren(vector<Darabonba::Json> && children) { DARABONBA_PTR_SET_RVALUE(children_, children) };


          // finalStepNo Field Functions 
          bool hasFinalStepNo() const { return this->finalStepNo_ != nullptr;};
          void deleteFinalStepNo() { this->finalStepNo_ = nullptr;};
          inline int32_t getFinalStepNo() const { DARABONBA_PTR_GET_DEFAULT(finalStepNo_, 0) };
          inline NodeList& setFinalStepNo(int32_t finalStepNo) { DARABONBA_PTR_SET_VALUE(finalStepNo_, finalStepNo) };


          // finishTime Field Functions 
          bool hasFinishTime() const { return this->finishTime_ != nullptr;};
          void deleteFinishTime() { this->finishTime_ = nullptr;};
          inline int64_t getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
          inline NodeList& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


          // isContainerNode Field Functions 
          bool hasIsContainerNode() const { return this->isContainerNode_ != nullptr;};
          void deleteIsContainerNode() { this->isContainerNode_ = nullptr;};
          inline bool getIsContainerNode() const { DARABONBA_PTR_GET_DEFAULT(isContainerNode_, false) };
          inline NodeList& setIsContainerNode(bool isContainerNode) { DARABONBA_PTR_SET_VALUE(isContainerNode_, isContainerNode) };


          // nodeId Field Functions 
          bool hasNodeId() const { return this->nodeId_ != nullptr;};
          void deleteNodeId() { this->nodeId_ = nullptr;};
          inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
          inline NodeList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


          // nodeName Field Functions 
          bool hasNodeName() const { return this->nodeName_ != nullptr;};
          void deleteNodeName() { this->nodeName_ = nullptr;};
          inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
          inline NodeList& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


          // nodeStatus Field Functions 
          bool hasNodeStatus() const { return this->nodeStatus_ != nullptr;};
          void deleteNodeStatus() { this->nodeStatus_ = nullptr;};
          inline string getNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(nodeStatus_, "") };
          inline NodeList& setNodeStatus(string nodeStatus) { DARABONBA_PTR_SET_VALUE(nodeStatus_, nodeStatus) };


          // operatorRole Field Functions 
          bool hasOperatorRole() const { return this->operatorRole_ != nullptr;};
          void deleteOperatorRole() { this->operatorRole_ = nullptr;};
          inline string getOperatorRole() const { DARABONBA_PTR_GET_DEFAULT(operatorRole_, "") };
          inline NodeList& setOperatorRole(string operatorRole) { DARABONBA_PTR_SET_VALUE(operatorRole_, operatorRole) };


          // parentNodeId Field Functions 
          bool hasParentNodeId() const { return this->parentNodeId_ != nullptr;};
          void deleteParentNodeId() { this->parentNodeId_ = nullptr;};
          inline string getParentNodeId() const { DARABONBA_PTR_GET_DEFAULT(parentNodeId_, "") };
          inline NodeList& setParentNodeId(string parentNodeId) { DARABONBA_PTR_SET_VALUE(parentNodeId_, parentNodeId) };


          // stepNo Field Functions 
          bool hasStepNo() const { return this->stepNo_ != nullptr;};
          void deleteStepNo() { this->stepNo_ = nullptr;};
          inline int32_t getStepNo() const { DARABONBA_PTR_GET_DEFAULT(stepNo_, 0) };
          inline NodeList& setStepNo(int32_t stepNo) { DARABONBA_PTR_SET_VALUE(stepNo_, stepNo) };


        protected:
          shared_ptr<vector<Darabonba::Json>> children_ {};
          shared_ptr<int32_t> finalStepNo_ {};
          shared_ptr<int64_t> finishTime_ {};
          // IsContainerNode
          shared_ptr<bool> isContainerNode_ {};
          shared_ptr<string> nodeId_ {};
          shared_ptr<string> nodeName_ {};
          shared_ptr<string> nodeStatus_ {};
          shared_ptr<string> operatorRole_ {};
          shared_ptr<string> parentNodeId_ {};
          shared_ptr<int32_t> stepNo_ {};
        };

        class Group : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Group& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(QrCode, qrCode_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, Group& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(QrCode, qrCode_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
          };
          Group() = default ;
          Group(const Group &) = default ;
          Group(Group &&) = default ;
          Group(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Group() = default ;
          Group& operator=(const Group &) = default ;
          Group& operator=(Group &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->qrCode_ == nullptr && this->type_ == nullptr && this->url_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Group& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Group& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // qrCode Field Functions 
          bool hasQrCode() const { return this->qrCode_ != nullptr;};
          void deleteQrCode() { this->qrCode_ = nullptr;};
          inline string getQrCode() const { DARABONBA_PTR_GET_DEFAULT(qrCode_, "") };
          inline Group& setQrCode(string qrCode) { DARABONBA_PTR_SET_VALUE(qrCode_, qrCode) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Group& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline Group& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          shared_ptr<string> id_ {};
          shared_ptr<string> name_ {};
          // QrCode
          shared_ptr<string> qrCode_ {};
          // dingtalk wx...
          shared_ptr<string> type_ {};
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->bizId_ == nullptr
        && this->deleted_ == nullptr && this->endTime_ == nullptr && this->espBizId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->group_ == nullptr && this->instanceBizId_ == nullptr && this->name_ == nullptr && this->nodeList_ == nullptr && this->operationAddress_ == nullptr
        && this->orderId_ == nullptr && this->profile_ == nullptr && this->serviceType_ == nullptr && this->serviceTypeText_ == nullptr && this->slug_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->userId_ == nullptr; };
        // bizId Field Functions 
        bool hasBizId() const { return this->bizId_ != nullptr;};
        void deleteBizId() { this->bizId_ = nullptr;};
        inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
        inline AppServiceList& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


        // deleted Field Functions 
        bool hasDeleted() const { return this->deleted_ != nullptr;};
        void deleteDeleted() { this->deleted_ = nullptr;};
        inline int32_t getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, 0) };
        inline AppServiceList& setDeleted(int32_t deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline AppServiceList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // espBizId Field Functions 
        bool hasEspBizId() const { return this->espBizId_ != nullptr;};
        void deleteEspBizId() { this->espBizId_ = nullptr;};
        inline string getEspBizId() const { DARABONBA_PTR_GET_DEFAULT(espBizId_, "") };
        inline AppServiceList& setEspBizId(string espBizId) { DARABONBA_PTR_SET_VALUE(espBizId_, espBizId) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline AppServiceList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline AppServiceList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // group Field Functions 
        bool hasGroup() const { return this->group_ != nullptr;};
        void deleteGroup() { this->group_ = nullptr;};
        inline const AppServiceList::Group & getGroup() const { DARABONBA_PTR_GET_CONST(group_, AppServiceList::Group) };
        inline AppServiceList::Group getGroup() { DARABONBA_PTR_GET(group_, AppServiceList::Group) };
        inline AppServiceList& setGroup(const AppServiceList::Group & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
        inline AppServiceList& setGroup(AppServiceList::Group && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


        // instanceBizId Field Functions 
        bool hasInstanceBizId() const { return this->instanceBizId_ != nullptr;};
        void deleteInstanceBizId() { this->instanceBizId_ = nullptr;};
        inline string getInstanceBizId() const { DARABONBA_PTR_GET_DEFAULT(instanceBizId_, "") };
        inline AppServiceList& setInstanceBizId(string instanceBizId) { DARABONBA_PTR_SET_VALUE(instanceBizId_, instanceBizId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AppServiceList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nodeList Field Functions 
        bool hasNodeList() const { return this->nodeList_ != nullptr;};
        void deleteNodeList() { this->nodeList_ = nullptr;};
        inline const vector<AppServiceList::NodeList> & getNodeList() const { DARABONBA_PTR_GET_CONST(nodeList_, vector<AppServiceList::NodeList>) };
        inline vector<AppServiceList::NodeList> getNodeList() { DARABONBA_PTR_GET(nodeList_, vector<AppServiceList::NodeList>) };
        inline AppServiceList& setNodeList(const vector<AppServiceList::NodeList> & nodeList) { DARABONBA_PTR_SET_VALUE(nodeList_, nodeList) };
        inline AppServiceList& setNodeList(vector<AppServiceList::NodeList> && nodeList) { DARABONBA_PTR_SET_RVALUE(nodeList_, nodeList) };


        // operationAddress Field Functions 
        bool hasOperationAddress() const { return this->operationAddress_ != nullptr;};
        void deleteOperationAddress() { this->operationAddress_ = nullptr;};
        inline const AppServiceList::OperationAddress & getOperationAddress() const { DARABONBA_PTR_GET_CONST(operationAddress_, AppServiceList::OperationAddress) };
        inline AppServiceList::OperationAddress getOperationAddress() { DARABONBA_PTR_GET(operationAddress_, AppServiceList::OperationAddress) };
        inline AppServiceList& setOperationAddress(const AppServiceList::OperationAddress & operationAddress) { DARABONBA_PTR_SET_VALUE(operationAddress_, operationAddress) };
        inline AppServiceList& setOperationAddress(AppServiceList::OperationAddress && operationAddress) { DARABONBA_PTR_SET_RVALUE(operationAddress_, operationAddress) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
        inline AppServiceList& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        // profile Field Functions 
        bool hasProfile() const { return this->profile_ != nullptr;};
        void deleteProfile() { this->profile_ = nullptr;};
        inline const AppServiceList::Profile & getProfile() const { DARABONBA_PTR_GET_CONST(profile_, AppServiceList::Profile) };
        inline AppServiceList::Profile getProfile() { DARABONBA_PTR_GET(profile_, AppServiceList::Profile) };
        inline AppServiceList& setProfile(const AppServiceList::Profile & profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };
        inline AppServiceList& setProfile(AppServiceList::Profile && profile) { DARABONBA_PTR_SET_RVALUE(profile_, profile) };


        // serviceType Field Functions 
        bool hasServiceType() const { return this->serviceType_ != nullptr;};
        void deleteServiceType() { this->serviceType_ = nullptr;};
        inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
        inline AppServiceList& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


        // serviceTypeText Field Functions 
        bool hasServiceTypeText() const { return this->serviceTypeText_ != nullptr;};
        void deleteServiceTypeText() { this->serviceTypeText_ = nullptr;};
        inline string getServiceTypeText() const { DARABONBA_PTR_GET_DEFAULT(serviceTypeText_, "") };
        inline AppServiceList& setServiceTypeText(string serviceTypeText) { DARABONBA_PTR_SET_VALUE(serviceTypeText_, serviceTypeText) };


        // slug Field Functions 
        bool hasSlug() const { return this->slug_ != nullptr;};
        void deleteSlug() { this->slug_ = nullptr;};
        inline string getSlug() const { DARABONBA_PTR_GET_DEFAULT(slug_, "") };
        inline AppServiceList& setSlug(string slug) { DARABONBA_PTR_SET_VALUE(slug_, slug) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline AppServiceList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AppServiceList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline AppServiceList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> bizId_ {};
        shared_ptr<int32_t> deleted_ {};
        shared_ptr<string> endTime_ {};
        // esp bizId
        shared_ptr<string> espBizId_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<AppServiceList::Group> group_ {};
        shared_ptr<string> instanceBizId_ {};
        shared_ptr<string> name_ {};
        shared_ptr<vector<AppServiceList::NodeList>> nodeList_ {};
        shared_ptr<AppServiceList::OperationAddress> operationAddress_ {};
        shared_ptr<string> orderId_ {};
        shared_ptr<AppServiceList::Profile> profile_ {};
        shared_ptr<string> serviceType_ {};
        shared_ptr<string> serviceTypeText_ {};
        shared_ptr<string> slug_ {};
        shared_ptr<string> startTime_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> userId_ {};
      };

      class AppOperationAddress : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppOperationAddress& obj) { 
          DARABONBA_PTR_TO_JSON(Actions, actions_);
          DARABONBA_PTR_TO_JSON(AiCustomerConfigUrl, aiCustomerConfigUrl_);
          DARABONBA_PTR_TO_JSON(AiDesignUrl, aiDesignUrl_);
          DARABONBA_PTR_TO_JSON(AppPublishUrl, appPublishUrl_);
          DARABONBA_PTR_TO_JSON(DashboardActions, dashboardActions_);
          DARABONBA_PTR_TO_JSON(DesignUrl, designUrl_);
          DARABONBA_PTR_TO_JSON(InstanceLoginUrl, instanceLoginUrl_);
          DARABONBA_PTR_TO_JSON(RenewBuyUrl, renewBuyUrl_);
          DARABONBA_PTR_TO_JSON(ServerDeliveryUrl, serverDeliveryUrl_);
          DARABONBA_PTR_TO_JSON(UpgradeBuyUrl, upgradeBuyUrl_);
        };
        friend void from_json(const Darabonba::Json& j, AppOperationAddress& obj) { 
          DARABONBA_PTR_FROM_JSON(Actions, actions_);
          DARABONBA_PTR_FROM_JSON(AiCustomerConfigUrl, aiCustomerConfigUrl_);
          DARABONBA_PTR_FROM_JSON(AiDesignUrl, aiDesignUrl_);
          DARABONBA_PTR_FROM_JSON(AppPublishUrl, appPublishUrl_);
          DARABONBA_PTR_FROM_JSON(DashboardActions, dashboardActions_);
          DARABONBA_PTR_FROM_JSON(DesignUrl, designUrl_);
          DARABONBA_PTR_FROM_JSON(InstanceLoginUrl, instanceLoginUrl_);
          DARABONBA_PTR_FROM_JSON(RenewBuyUrl, renewBuyUrl_);
          DARABONBA_PTR_FROM_JSON(ServerDeliveryUrl, serverDeliveryUrl_);
          DARABONBA_PTR_FROM_JSON(UpgradeBuyUrl, upgradeBuyUrl_);
        };
        AppOperationAddress() = default ;
        AppOperationAddress(const AppOperationAddress &) = default ;
        AppOperationAddress(AppOperationAddress &&) = default ;
        AppOperationAddress(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppOperationAddress() = default ;
        AppOperationAddress& operator=(const AppOperationAddress &) = default ;
        AppOperationAddress& operator=(AppOperationAddress &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DashboardActions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DashboardActions& obj) { 
            DARABONBA_PTR_TO_JSON(ActionKey, actionKey_);
            DARABONBA_PTR_TO_JSON(ActionText, actionText_);
            DARABONBA_PTR_TO_JSON(Enable, enable_);
            DARABONBA_PTR_TO_JSON(Href, href_);
          };
          friend void from_json(const Darabonba::Json& j, DashboardActions& obj) { 
            DARABONBA_PTR_FROM_JSON(ActionKey, actionKey_);
            DARABONBA_PTR_FROM_JSON(ActionText, actionText_);
            DARABONBA_PTR_FROM_JSON(Enable, enable_);
            DARABONBA_PTR_FROM_JSON(Href, href_);
          };
          DashboardActions() = default ;
          DashboardActions(const DashboardActions &) = default ;
          DashboardActions(DashboardActions &&) = default ;
          DashboardActions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DashboardActions() = default ;
          DashboardActions& operator=(const DashboardActions &) = default ;
          DashboardActions& operator=(DashboardActions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->actionKey_ == nullptr
        && this->actionText_ == nullptr && this->enable_ == nullptr && this->href_ == nullptr; };
          // actionKey Field Functions 
          bool hasActionKey() const { return this->actionKey_ != nullptr;};
          void deleteActionKey() { this->actionKey_ = nullptr;};
          inline string getActionKey() const { DARABONBA_PTR_GET_DEFAULT(actionKey_, "") };
          inline DashboardActions& setActionKey(string actionKey) { DARABONBA_PTR_SET_VALUE(actionKey_, actionKey) };


          // actionText Field Functions 
          bool hasActionText() const { return this->actionText_ != nullptr;};
          void deleteActionText() { this->actionText_ = nullptr;};
          inline string getActionText() const { DARABONBA_PTR_GET_DEFAULT(actionText_, "") };
          inline DashboardActions& setActionText(string actionText) { DARABONBA_PTR_SET_VALUE(actionText_, actionText) };


          // enable Field Functions 
          bool hasEnable() const { return this->enable_ != nullptr;};
          void deleteEnable() { this->enable_ = nullptr;};
          inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
          inline DashboardActions& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


          // href Field Functions 
          bool hasHref() const { return this->href_ != nullptr;};
          void deleteHref() { this->href_ = nullptr;};
          inline string getHref() const { DARABONBA_PTR_GET_DEFAULT(href_, "") };
          inline DashboardActions& setHref(string href) { DARABONBA_PTR_SET_VALUE(href_, href) };


        protected:
          shared_ptr<string> actionKey_ {};
          shared_ptr<string> actionText_ {};
          shared_ptr<bool> enable_ {};
          shared_ptr<string> href_ {};
        };

        class Actions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Actions& obj) { 
            DARABONBA_PTR_TO_JSON(ActionKey, actionKey_);
            DARABONBA_PTR_TO_JSON(ActionText, actionText_);
            DARABONBA_PTR_TO_JSON(Enable, enable_);
            DARABONBA_PTR_TO_JSON(Href, href_);
          };
          friend void from_json(const Darabonba::Json& j, Actions& obj) { 
            DARABONBA_PTR_FROM_JSON(ActionKey, actionKey_);
            DARABONBA_PTR_FROM_JSON(ActionText, actionText_);
            DARABONBA_PTR_FROM_JSON(Enable, enable_);
            DARABONBA_PTR_FROM_JSON(Href, href_);
          };
          Actions() = default ;
          Actions(const Actions &) = default ;
          Actions(Actions &&) = default ;
          Actions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Actions() = default ;
          Actions& operator=(const Actions &) = default ;
          Actions& operator=(Actions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->actionKey_ == nullptr
        && this->actionText_ == nullptr && this->enable_ == nullptr && this->href_ == nullptr; };
          // actionKey Field Functions 
          bool hasActionKey() const { return this->actionKey_ != nullptr;};
          void deleteActionKey() { this->actionKey_ = nullptr;};
          inline string getActionKey() const { DARABONBA_PTR_GET_DEFAULT(actionKey_, "") };
          inline Actions& setActionKey(string actionKey) { DARABONBA_PTR_SET_VALUE(actionKey_, actionKey) };


          // actionText Field Functions 
          bool hasActionText() const { return this->actionText_ != nullptr;};
          void deleteActionText() { this->actionText_ = nullptr;};
          inline string getActionText() const { DARABONBA_PTR_GET_DEFAULT(actionText_, "") };
          inline Actions& setActionText(string actionText) { DARABONBA_PTR_SET_VALUE(actionText_, actionText) };


          // enable Field Functions 
          bool hasEnable() const { return this->enable_ != nullptr;};
          void deleteEnable() { this->enable_ = nullptr;};
          inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
          inline Actions& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


          // href Field Functions 
          bool hasHref() const { return this->href_ != nullptr;};
          void deleteHref() { this->href_ = nullptr;};
          inline string getHref() const { DARABONBA_PTR_GET_DEFAULT(href_, "") };
          inline Actions& setHref(string href) { DARABONBA_PTR_SET_VALUE(href_, href) };


        protected:
          shared_ptr<string> actionKey_ {};
          shared_ptr<string> actionText_ {};
          shared_ptr<bool> enable_ {};
          shared_ptr<string> href_ {};
        };

        virtual bool empty() const override { return this->actions_ == nullptr
        && this->aiCustomerConfigUrl_ == nullptr && this->aiDesignUrl_ == nullptr && this->appPublishUrl_ == nullptr && this->dashboardActions_ == nullptr && this->designUrl_ == nullptr
        && this->instanceLoginUrl_ == nullptr && this->renewBuyUrl_ == nullptr && this->serverDeliveryUrl_ == nullptr && this->upgradeBuyUrl_ == nullptr; };
        // actions Field Functions 
        bool hasActions() const { return this->actions_ != nullptr;};
        void deleteActions() { this->actions_ = nullptr;};
        inline const vector<AppOperationAddress::Actions> & getActions() const { DARABONBA_PTR_GET_CONST(actions_, vector<AppOperationAddress::Actions>) };
        inline vector<AppOperationAddress::Actions> getActions() { DARABONBA_PTR_GET(actions_, vector<AppOperationAddress::Actions>) };
        inline AppOperationAddress& setActions(const vector<AppOperationAddress::Actions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
        inline AppOperationAddress& setActions(vector<AppOperationAddress::Actions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


        // aiCustomerConfigUrl Field Functions 
        bool hasAiCustomerConfigUrl() const { return this->aiCustomerConfigUrl_ != nullptr;};
        void deleteAiCustomerConfigUrl() { this->aiCustomerConfigUrl_ = nullptr;};
        inline string getAiCustomerConfigUrl() const { DARABONBA_PTR_GET_DEFAULT(aiCustomerConfigUrl_, "") };
        inline AppOperationAddress& setAiCustomerConfigUrl(string aiCustomerConfigUrl) { DARABONBA_PTR_SET_VALUE(aiCustomerConfigUrl_, aiCustomerConfigUrl) };


        // aiDesignUrl Field Functions 
        bool hasAiDesignUrl() const { return this->aiDesignUrl_ != nullptr;};
        void deleteAiDesignUrl() { this->aiDesignUrl_ = nullptr;};
        inline string getAiDesignUrl() const { DARABONBA_PTR_GET_DEFAULT(aiDesignUrl_, "") };
        inline AppOperationAddress& setAiDesignUrl(string aiDesignUrl) { DARABONBA_PTR_SET_VALUE(aiDesignUrl_, aiDesignUrl) };


        // appPublishUrl Field Functions 
        bool hasAppPublishUrl() const { return this->appPublishUrl_ != nullptr;};
        void deleteAppPublishUrl() { this->appPublishUrl_ = nullptr;};
        inline string getAppPublishUrl() const { DARABONBA_PTR_GET_DEFAULT(appPublishUrl_, "") };
        inline AppOperationAddress& setAppPublishUrl(string appPublishUrl) { DARABONBA_PTR_SET_VALUE(appPublishUrl_, appPublishUrl) };


        // dashboardActions Field Functions 
        bool hasDashboardActions() const { return this->dashboardActions_ != nullptr;};
        void deleteDashboardActions() { this->dashboardActions_ = nullptr;};
        inline const vector<AppOperationAddress::DashboardActions> & getDashboardActions() const { DARABONBA_PTR_GET_CONST(dashboardActions_, vector<AppOperationAddress::DashboardActions>) };
        inline vector<AppOperationAddress::DashboardActions> getDashboardActions() { DARABONBA_PTR_GET(dashboardActions_, vector<AppOperationAddress::DashboardActions>) };
        inline AppOperationAddress& setDashboardActions(const vector<AppOperationAddress::DashboardActions> & dashboardActions) { DARABONBA_PTR_SET_VALUE(dashboardActions_, dashboardActions) };
        inline AppOperationAddress& setDashboardActions(vector<AppOperationAddress::DashboardActions> && dashboardActions) { DARABONBA_PTR_SET_RVALUE(dashboardActions_, dashboardActions) };


        // designUrl Field Functions 
        bool hasDesignUrl() const { return this->designUrl_ != nullptr;};
        void deleteDesignUrl() { this->designUrl_ = nullptr;};
        inline string getDesignUrl() const { DARABONBA_PTR_GET_DEFAULT(designUrl_, "") };
        inline AppOperationAddress& setDesignUrl(string designUrl) { DARABONBA_PTR_SET_VALUE(designUrl_, designUrl) };


        // instanceLoginUrl Field Functions 
        bool hasInstanceLoginUrl() const { return this->instanceLoginUrl_ != nullptr;};
        void deleteInstanceLoginUrl() { this->instanceLoginUrl_ = nullptr;};
        inline string getInstanceLoginUrl() const { DARABONBA_PTR_GET_DEFAULT(instanceLoginUrl_, "") };
        inline AppOperationAddress& setInstanceLoginUrl(string instanceLoginUrl) { DARABONBA_PTR_SET_VALUE(instanceLoginUrl_, instanceLoginUrl) };


        // renewBuyUrl Field Functions 
        bool hasRenewBuyUrl() const { return this->renewBuyUrl_ != nullptr;};
        void deleteRenewBuyUrl() { this->renewBuyUrl_ = nullptr;};
        inline string getRenewBuyUrl() const { DARABONBA_PTR_GET_DEFAULT(renewBuyUrl_, "") };
        inline AppOperationAddress& setRenewBuyUrl(string renewBuyUrl) { DARABONBA_PTR_SET_VALUE(renewBuyUrl_, renewBuyUrl) };


        // serverDeliveryUrl Field Functions 
        bool hasServerDeliveryUrl() const { return this->serverDeliveryUrl_ != nullptr;};
        void deleteServerDeliveryUrl() { this->serverDeliveryUrl_ = nullptr;};
        inline string getServerDeliveryUrl() const { DARABONBA_PTR_GET_DEFAULT(serverDeliveryUrl_, "") };
        inline AppOperationAddress& setServerDeliveryUrl(string serverDeliveryUrl) { DARABONBA_PTR_SET_VALUE(serverDeliveryUrl_, serverDeliveryUrl) };


        // upgradeBuyUrl Field Functions 
        bool hasUpgradeBuyUrl() const { return this->upgradeBuyUrl_ != nullptr;};
        void deleteUpgradeBuyUrl() { this->upgradeBuyUrl_ = nullptr;};
        inline string getUpgradeBuyUrl() const { DARABONBA_PTR_GET_DEFAULT(upgradeBuyUrl_, "") };
        inline AppOperationAddress& setUpgradeBuyUrl(string upgradeBuyUrl) { DARABONBA_PTR_SET_VALUE(upgradeBuyUrl_, upgradeBuyUrl) };


      protected:
        shared_ptr<vector<AppOperationAddress::Actions>> actions_ {};
        shared_ptr<string> aiCustomerConfigUrl_ {};
        shared_ptr<string> aiDesignUrl_ {};
        shared_ptr<string> appPublishUrl_ {};
        shared_ptr<vector<AppOperationAddress::DashboardActions>> dashboardActions_ {};
        shared_ptr<string> designUrl_ {};
        shared_ptr<string> instanceLoginUrl_ {};
        shared_ptr<string> renewBuyUrl_ {};
        shared_ptr<string> serverDeliveryUrl_ {};
        shared_ptr<string> upgradeBuyUrl_ {};
      };

      class AppDesignSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppDesignSpec& obj) { 
          DARABONBA_PTR_TO_JSON(Bilingual, bilingual_);
          DARABONBA_PTR_TO_JSON(BizId, bizId_);
          DARABONBA_PTR_TO_JSON(BusinessScope, businessScope_);
          DARABONBA_PTR_TO_JSON(ColorStyle, colorStyle_);
          DARABONBA_PTR_TO_JSON(CompanyName, companyName_);
          DARABONBA_PTR_TO_JSON(DeployArea, deployArea_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(MainBusiness, mainBusiness_);
          DARABONBA_PTR_TO_JSON(ReferenceWebsite, referenceWebsite_);
          DARABONBA_PTR_TO_JSON(SiteGoals, siteGoals_);
          DARABONBA_PTR_TO_JSON(SiteLanguage, siteLanguage_);
          DARABONBA_PTR_TO_JSON(SiteLogo, siteLogo_);
          DARABONBA_PTR_TO_JSON(SiteSlogan, siteSlogan_);
          DARABONBA_PTR_TO_JSON(SiteStyle, siteStyle_);
          DARABONBA_PTR_TO_JSON(SiteTitle, siteTitle_);
          DARABONBA_PTR_TO_JSON(SiteType, siteType_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, AppDesignSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(Bilingual, bilingual_);
          DARABONBA_PTR_FROM_JSON(BizId, bizId_);
          DARABONBA_PTR_FROM_JSON(BusinessScope, businessScope_);
          DARABONBA_PTR_FROM_JSON(ColorStyle, colorStyle_);
          DARABONBA_PTR_FROM_JSON(CompanyName, companyName_);
          DARABONBA_PTR_FROM_JSON(DeployArea, deployArea_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(MainBusiness, mainBusiness_);
          DARABONBA_PTR_FROM_JSON(ReferenceWebsite, referenceWebsite_);
          DARABONBA_PTR_FROM_JSON(SiteGoals, siteGoals_);
          DARABONBA_PTR_FROM_JSON(SiteLanguage, siteLanguage_);
          DARABONBA_PTR_FROM_JSON(SiteLogo, siteLogo_);
          DARABONBA_PTR_FROM_JSON(SiteSlogan, siteSlogan_);
          DARABONBA_PTR_FROM_JSON(SiteStyle, siteStyle_);
          DARABONBA_PTR_FROM_JSON(SiteTitle, siteTitle_);
          DARABONBA_PTR_FROM_JSON(SiteType, siteType_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        AppDesignSpec() = default ;
        AppDesignSpec(const AppDesignSpec &) = default ;
        AppDesignSpec(AppDesignSpec &&) = default ;
        AppDesignSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppDesignSpec() = default ;
        AppDesignSpec& operator=(const AppDesignSpec &) = default ;
        AppDesignSpec& operator=(AppDesignSpec &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bilingual_ == nullptr
        && this->bizId_ == nullptr && this->businessScope_ == nullptr && this->colorStyle_ == nullptr && this->companyName_ == nullptr && this->deployArea_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->mainBusiness_ == nullptr && this->referenceWebsite_ == nullptr
        && this->siteGoals_ == nullptr && this->siteLanguage_ == nullptr && this->siteLogo_ == nullptr && this->siteSlogan_ == nullptr && this->siteStyle_ == nullptr
        && this->siteTitle_ == nullptr && this->siteType_ == nullptr && this->userId_ == nullptr; };
        // bilingual Field Functions 
        bool hasBilingual() const { return this->bilingual_ != nullptr;};
        void deleteBilingual() { this->bilingual_ = nullptr;};
        inline bool getBilingual() const { DARABONBA_PTR_GET_DEFAULT(bilingual_, false) };
        inline AppDesignSpec& setBilingual(bool bilingual) { DARABONBA_PTR_SET_VALUE(bilingual_, bilingual) };


        // bizId Field Functions 
        bool hasBizId() const { return this->bizId_ != nullptr;};
        void deleteBizId() { this->bizId_ = nullptr;};
        inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
        inline AppDesignSpec& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


        // businessScope Field Functions 
        bool hasBusinessScope() const { return this->businessScope_ != nullptr;};
        void deleteBusinessScope() { this->businessScope_ = nullptr;};
        inline string getBusinessScope() const { DARABONBA_PTR_GET_DEFAULT(businessScope_, "") };
        inline AppDesignSpec& setBusinessScope(string businessScope) { DARABONBA_PTR_SET_VALUE(businessScope_, businessScope) };


        // colorStyle Field Functions 
        bool hasColorStyle() const { return this->colorStyle_ != nullptr;};
        void deleteColorStyle() { this->colorStyle_ = nullptr;};
        inline string getColorStyle() const { DARABONBA_PTR_GET_DEFAULT(colorStyle_, "") };
        inline AppDesignSpec& setColorStyle(string colorStyle) { DARABONBA_PTR_SET_VALUE(colorStyle_, colorStyle) };


        // companyName Field Functions 
        bool hasCompanyName() const { return this->companyName_ != nullptr;};
        void deleteCompanyName() { this->companyName_ = nullptr;};
        inline string getCompanyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
        inline AppDesignSpec& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


        // deployArea Field Functions 
        bool hasDeployArea() const { return this->deployArea_ != nullptr;};
        void deleteDeployArea() { this->deployArea_ = nullptr;};
        inline string getDeployArea() const { DARABONBA_PTR_GET_DEFAULT(deployArea_, "") };
        inline AppDesignSpec& setDeployArea(string deployArea) { DARABONBA_PTR_SET_VALUE(deployArea_, deployArea) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline AppDesignSpec& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline AppDesignSpec& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline AppDesignSpec& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // mainBusiness Field Functions 
        bool hasMainBusiness() const { return this->mainBusiness_ != nullptr;};
        void deleteMainBusiness() { this->mainBusiness_ = nullptr;};
        inline string getMainBusiness() const { DARABONBA_PTR_GET_DEFAULT(mainBusiness_, "") };
        inline AppDesignSpec& setMainBusiness(string mainBusiness) { DARABONBA_PTR_SET_VALUE(mainBusiness_, mainBusiness) };


        // referenceWebsite Field Functions 
        bool hasReferenceWebsite() const { return this->referenceWebsite_ != nullptr;};
        void deleteReferenceWebsite() { this->referenceWebsite_ = nullptr;};
        inline string getReferenceWebsite() const { DARABONBA_PTR_GET_DEFAULT(referenceWebsite_, "") };
        inline AppDesignSpec& setReferenceWebsite(string referenceWebsite) { DARABONBA_PTR_SET_VALUE(referenceWebsite_, referenceWebsite) };


        // siteGoals Field Functions 
        bool hasSiteGoals() const { return this->siteGoals_ != nullptr;};
        void deleteSiteGoals() { this->siteGoals_ = nullptr;};
        inline string getSiteGoals() const { DARABONBA_PTR_GET_DEFAULT(siteGoals_, "") };
        inline AppDesignSpec& setSiteGoals(string siteGoals) { DARABONBA_PTR_SET_VALUE(siteGoals_, siteGoals) };


        // siteLanguage Field Functions 
        bool hasSiteLanguage() const { return this->siteLanguage_ != nullptr;};
        void deleteSiteLanguage() { this->siteLanguage_ = nullptr;};
        inline string getSiteLanguage() const { DARABONBA_PTR_GET_DEFAULT(siteLanguage_, "") };
        inline AppDesignSpec& setSiteLanguage(string siteLanguage) { DARABONBA_PTR_SET_VALUE(siteLanguage_, siteLanguage) };


        // siteLogo Field Functions 
        bool hasSiteLogo() const { return this->siteLogo_ != nullptr;};
        void deleteSiteLogo() { this->siteLogo_ = nullptr;};
        inline string getSiteLogo() const { DARABONBA_PTR_GET_DEFAULT(siteLogo_, "") };
        inline AppDesignSpec& setSiteLogo(string siteLogo) { DARABONBA_PTR_SET_VALUE(siteLogo_, siteLogo) };


        // siteSlogan Field Functions 
        bool hasSiteSlogan() const { return this->siteSlogan_ != nullptr;};
        void deleteSiteSlogan() { this->siteSlogan_ = nullptr;};
        inline string getSiteSlogan() const { DARABONBA_PTR_GET_DEFAULT(siteSlogan_, "") };
        inline AppDesignSpec& setSiteSlogan(string siteSlogan) { DARABONBA_PTR_SET_VALUE(siteSlogan_, siteSlogan) };


        // siteStyle Field Functions 
        bool hasSiteStyle() const { return this->siteStyle_ != nullptr;};
        void deleteSiteStyle() { this->siteStyle_ = nullptr;};
        inline string getSiteStyle() const { DARABONBA_PTR_GET_DEFAULT(siteStyle_, "") };
        inline AppDesignSpec& setSiteStyle(string siteStyle) { DARABONBA_PTR_SET_VALUE(siteStyle_, siteStyle) };


        // siteTitle Field Functions 
        bool hasSiteTitle() const { return this->siteTitle_ != nullptr;};
        void deleteSiteTitle() { this->siteTitle_ = nullptr;};
        inline string getSiteTitle() const { DARABONBA_PTR_GET_DEFAULT(siteTitle_, "") };
        inline AppDesignSpec& setSiteTitle(string siteTitle) { DARABONBA_PTR_SET_VALUE(siteTitle_, siteTitle) };


        // siteType Field Functions 
        bool hasSiteType() const { return this->siteType_ != nullptr;};
        void deleteSiteType() { this->siteType_ = nullptr;};
        inline string getSiteType() const { DARABONBA_PTR_GET_DEFAULT(siteType_, "") };
        inline AppDesignSpec& setSiteType(string siteType) { DARABONBA_PTR_SET_VALUE(siteType_, siteType) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline AppDesignSpec& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // bill
        shared_ptr<bool> bilingual_ {};
        shared_ptr<string> bizId_ {};
        // busincessScope
        shared_ptr<string> businessScope_ {};
        shared_ptr<string> colorStyle_ {};
        shared_ptr<string> companyName_ {};
        shared_ptr<string> deployArea_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<int64_t> id_ {};
        // business
        shared_ptr<string> mainBusiness_ {};
        // website
        shared_ptr<string> referenceWebsite_ {};
        // sitegolas
        shared_ptr<string> siteGoals_ {};
        // language
        shared_ptr<string> siteLanguage_ {};
        // sitelogo
        shared_ptr<string> siteLogo_ {};
        // siteslogan
        shared_ptr<string> siteSlogan_ {};
        // sitestyle
        shared_ptr<string> siteStyle_ {};
        // sitetitle
        shared_ptr<string> siteTitle_ {};
        shared_ptr<string> siteType_ {};
        // userid
        shared_ptr<string> userId_ {};
      };

      class AiStaffList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AiStaffList& obj) { 
          DARABONBA_PTR_TO_JSON(StaffId, staffId_);
          DARABONBA_PTR_TO_JSON(StaffName, staffName_);
          DARABONBA_PTR_TO_JSON(StaffType, staffType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, AiStaffList& obj) { 
          DARABONBA_PTR_FROM_JSON(StaffId, staffId_);
          DARABONBA_PTR_FROM_JSON(StaffName, staffName_);
          DARABONBA_PTR_FROM_JSON(StaffType, staffType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        AiStaffList() = default ;
        AiStaffList(const AiStaffList &) = default ;
        AiStaffList(AiStaffList &&) = default ;
        AiStaffList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AiStaffList() = default ;
        AiStaffList& operator=(const AiStaffList &) = default ;
        AiStaffList& operator=(AiStaffList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->staffId_ == nullptr
        && this->staffName_ == nullptr && this->staffType_ == nullptr && this->status_ == nullptr; };
        // staffId Field Functions 
        bool hasStaffId() const { return this->staffId_ != nullptr;};
        void deleteStaffId() { this->staffId_ = nullptr;};
        inline string getStaffId() const { DARABONBA_PTR_GET_DEFAULT(staffId_, "") };
        inline AiStaffList& setStaffId(string staffId) { DARABONBA_PTR_SET_VALUE(staffId_, staffId) };


        // staffName Field Functions 
        bool hasStaffName() const { return this->staffName_ != nullptr;};
        void deleteStaffName() { this->staffName_ = nullptr;};
        inline string getStaffName() const { DARABONBA_PTR_GET_DEFAULT(staffName_, "") };
        inline AiStaffList& setStaffName(string staffName) { DARABONBA_PTR_SET_VALUE(staffName_, staffName) };


        // staffType Field Functions 
        bool hasStaffType() const { return this->staffType_ != nullptr;};
        void deleteStaffType() { this->staffType_ = nullptr;};
        inline string getStaffType() const { DARABONBA_PTR_GET_DEFAULT(staffType_, "") };
        inline AiStaffList& setStaffType(string staffType) { DARABONBA_PTR_SET_VALUE(staffType_, staffType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AiStaffList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> staffId_ {};
        shared_ptr<string> staffName_ {};
        shared_ptr<string> staffType_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->aiStaffList_ == nullptr
        && this->appDesignSpec_ == nullptr && this->appOperationAddress_ == nullptr && this->appServiceList_ == nullptr && this->appSubType_ == nullptr && this->appType_ == nullptr
        && this->bizId_ == nullptr && this->buildType_ == nullptr && this->deleted_ == nullptr && this->description_ == nullptr && this->designSpecBizId_ == nullptr
        && this->designSpecId_ == nullptr && this->domain_ == nullptr && this->endTime_ == nullptr && this->env_ == nullptr && this->espBizId_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtDelete_ == nullptr && this->gmtModified_ == nullptr && this->gmtPublish_ == nullptr && this->iconUrl_ == nullptr
        && this->name_ == nullptr && this->orderId_ == nullptr && this->partnerDetail_ == nullptr && this->profile_ == nullptr && this->relatedInstanceList_ == nullptr
        && this->siteHost_ == nullptr && this->slug_ == nullptr && this->sourceType_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->statusText_ == nullptr && this->thumbnailUrl_ == nullptr && this->userId_ == nullptr && this->version_ == nullptr; };
      // aiStaffList Field Functions 
      bool hasAiStaffList() const { return this->aiStaffList_ != nullptr;};
      void deleteAiStaffList() { this->aiStaffList_ = nullptr;};
      inline const vector<Module::AiStaffList> & getAiStaffList() const { DARABONBA_PTR_GET_CONST(aiStaffList_, vector<Module::AiStaffList>) };
      inline vector<Module::AiStaffList> getAiStaffList() { DARABONBA_PTR_GET(aiStaffList_, vector<Module::AiStaffList>) };
      inline Module& setAiStaffList(const vector<Module::AiStaffList> & aiStaffList) { DARABONBA_PTR_SET_VALUE(aiStaffList_, aiStaffList) };
      inline Module& setAiStaffList(vector<Module::AiStaffList> && aiStaffList) { DARABONBA_PTR_SET_RVALUE(aiStaffList_, aiStaffList) };


      // appDesignSpec Field Functions 
      bool hasAppDesignSpec() const { return this->appDesignSpec_ != nullptr;};
      void deleteAppDesignSpec() { this->appDesignSpec_ = nullptr;};
      inline const Module::AppDesignSpec & getAppDesignSpec() const { DARABONBA_PTR_GET_CONST(appDesignSpec_, Module::AppDesignSpec) };
      inline Module::AppDesignSpec getAppDesignSpec() { DARABONBA_PTR_GET(appDesignSpec_, Module::AppDesignSpec) };
      inline Module& setAppDesignSpec(const Module::AppDesignSpec & appDesignSpec) { DARABONBA_PTR_SET_VALUE(appDesignSpec_, appDesignSpec) };
      inline Module& setAppDesignSpec(Module::AppDesignSpec && appDesignSpec) { DARABONBA_PTR_SET_RVALUE(appDesignSpec_, appDesignSpec) };


      // appOperationAddress Field Functions 
      bool hasAppOperationAddress() const { return this->appOperationAddress_ != nullptr;};
      void deleteAppOperationAddress() { this->appOperationAddress_ = nullptr;};
      inline const Module::AppOperationAddress & getAppOperationAddress() const { DARABONBA_PTR_GET_CONST(appOperationAddress_, Module::AppOperationAddress) };
      inline Module::AppOperationAddress getAppOperationAddress() { DARABONBA_PTR_GET(appOperationAddress_, Module::AppOperationAddress) };
      inline Module& setAppOperationAddress(const Module::AppOperationAddress & appOperationAddress) { DARABONBA_PTR_SET_VALUE(appOperationAddress_, appOperationAddress) };
      inline Module& setAppOperationAddress(Module::AppOperationAddress && appOperationAddress) { DARABONBA_PTR_SET_RVALUE(appOperationAddress_, appOperationAddress) };


      // appServiceList Field Functions 
      bool hasAppServiceList() const { return this->appServiceList_ != nullptr;};
      void deleteAppServiceList() { this->appServiceList_ = nullptr;};
      inline const vector<Module::AppServiceList> & getAppServiceList() const { DARABONBA_PTR_GET_CONST(appServiceList_, vector<Module::AppServiceList>) };
      inline vector<Module::AppServiceList> getAppServiceList() { DARABONBA_PTR_GET(appServiceList_, vector<Module::AppServiceList>) };
      inline Module& setAppServiceList(const vector<Module::AppServiceList> & appServiceList) { DARABONBA_PTR_SET_VALUE(appServiceList_, appServiceList) };
      inline Module& setAppServiceList(vector<Module::AppServiceList> && appServiceList) { DARABONBA_PTR_SET_RVALUE(appServiceList_, appServiceList) };


      // appSubType Field Functions 
      bool hasAppSubType() const { return this->appSubType_ != nullptr;};
      void deleteAppSubType() { this->appSubType_ = nullptr;};
      inline string getAppSubType() const { DARABONBA_PTR_GET_DEFAULT(appSubType_, "") };
      inline Module& setAppSubType(string appSubType) { DARABONBA_PTR_SET_VALUE(appSubType_, appSubType) };


      // appType Field Functions 
      bool hasAppType() const { return this->appType_ != nullptr;};
      void deleteAppType() { this->appType_ = nullptr;};
      inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
      inline Module& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


      // bizId Field Functions 
      bool hasBizId() const { return this->bizId_ != nullptr;};
      void deleteBizId() { this->bizId_ = nullptr;};
      inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
      inline Module& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


      // buildType Field Functions 
      bool hasBuildType() const { return this->buildType_ != nullptr;};
      void deleteBuildType() { this->buildType_ = nullptr;};
      inline string getBuildType() const { DARABONBA_PTR_GET_DEFAULT(buildType_, "") };
      inline Module& setBuildType(string buildType) { DARABONBA_PTR_SET_VALUE(buildType_, buildType) };


      // deleted Field Functions 
      bool hasDeleted() const { return this->deleted_ != nullptr;};
      void deleteDeleted() { this->deleted_ = nullptr;};
      inline int32_t getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, 0) };
      inline Module& setDeleted(int32_t deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Module& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // designSpecBizId Field Functions 
      bool hasDesignSpecBizId() const { return this->designSpecBizId_ != nullptr;};
      void deleteDesignSpecBizId() { this->designSpecBizId_ = nullptr;};
      inline string getDesignSpecBizId() const { DARABONBA_PTR_GET_DEFAULT(designSpecBizId_, "") };
      inline Module& setDesignSpecBizId(string designSpecBizId) { DARABONBA_PTR_SET_VALUE(designSpecBizId_, designSpecBizId) };


      // designSpecId Field Functions 
      bool hasDesignSpecId() const { return this->designSpecId_ != nullptr;};
      void deleteDesignSpecId() { this->designSpecId_ = nullptr;};
      inline string getDesignSpecId() const { DARABONBA_PTR_GET_DEFAULT(designSpecId_, "") };
      inline Module& setDesignSpecId(string designSpecId) { DARABONBA_PTR_SET_VALUE(designSpecId_, designSpecId) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Module& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Module& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // env Field Functions 
      bool hasEnv() const { return this->env_ != nullptr;};
      void deleteEnv() { this->env_ = nullptr;};
      inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
      inline Module& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


      // espBizId Field Functions 
      bool hasEspBizId() const { return this->espBizId_ != nullptr;};
      void deleteEspBizId() { this->espBizId_ = nullptr;};
      inline string getEspBizId() const { DARABONBA_PTR_GET_DEFAULT(espBizId_, "") };
      inline Module& setEspBizId(string espBizId) { DARABONBA_PTR_SET_VALUE(espBizId_, espBizId) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Module& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtDelete Field Functions 
      bool hasGmtDelete() const { return this->gmtDelete_ != nullptr;};
      void deleteGmtDelete() { this->gmtDelete_ = nullptr;};
      inline string getGmtDelete() const { DARABONBA_PTR_GET_DEFAULT(gmtDelete_, "") };
      inline Module& setGmtDelete(string gmtDelete) { DARABONBA_PTR_SET_VALUE(gmtDelete_, gmtDelete) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Module& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // gmtPublish Field Functions 
      bool hasGmtPublish() const { return this->gmtPublish_ != nullptr;};
      void deleteGmtPublish() { this->gmtPublish_ = nullptr;};
      inline string getGmtPublish() const { DARABONBA_PTR_GET_DEFAULT(gmtPublish_, "") };
      inline Module& setGmtPublish(string gmtPublish) { DARABONBA_PTR_SET_VALUE(gmtPublish_, gmtPublish) };


      // iconUrl Field Functions 
      bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
      void deleteIconUrl() { this->iconUrl_ = nullptr;};
      inline string getIconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
      inline Module& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Module& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
      inline Module& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // partnerDetail Field Functions 
      bool hasPartnerDetail() const { return this->partnerDetail_ != nullptr;};
      void deletePartnerDetail() { this->partnerDetail_ = nullptr;};
      inline const Module::PartnerDetail & getPartnerDetail() const { DARABONBA_PTR_GET_CONST(partnerDetail_, Module::PartnerDetail) };
      inline Module::PartnerDetail getPartnerDetail() { DARABONBA_PTR_GET(partnerDetail_, Module::PartnerDetail) };
      inline Module& setPartnerDetail(const Module::PartnerDetail & partnerDetail) { DARABONBA_PTR_SET_VALUE(partnerDetail_, partnerDetail) };
      inline Module& setPartnerDetail(Module::PartnerDetail && partnerDetail) { DARABONBA_PTR_SET_RVALUE(partnerDetail_, partnerDetail) };


      // profile Field Functions 
      bool hasProfile() const { return this->profile_ != nullptr;};
      void deleteProfile() { this->profile_ = nullptr;};
      inline const Module::Profile & getProfile() const { DARABONBA_PTR_GET_CONST(profile_, Module::Profile) };
      inline Module::Profile getProfile() { DARABONBA_PTR_GET(profile_, Module::Profile) };
      inline Module& setProfile(const Module::Profile & profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };
      inline Module& setProfile(Module::Profile && profile) { DARABONBA_PTR_SET_RVALUE(profile_, profile) };


      // relatedInstanceList Field Functions 
      bool hasRelatedInstanceList() const { return this->relatedInstanceList_ != nullptr;};
      void deleteRelatedInstanceList() { this->relatedInstanceList_ = nullptr;};
      inline const vector<Module::RelatedInstanceList> & getRelatedInstanceList() const { DARABONBA_PTR_GET_CONST(relatedInstanceList_, vector<Module::RelatedInstanceList>) };
      inline vector<Module::RelatedInstanceList> getRelatedInstanceList() { DARABONBA_PTR_GET(relatedInstanceList_, vector<Module::RelatedInstanceList>) };
      inline Module& setRelatedInstanceList(const vector<Module::RelatedInstanceList> & relatedInstanceList) { DARABONBA_PTR_SET_VALUE(relatedInstanceList_, relatedInstanceList) };
      inline Module& setRelatedInstanceList(vector<Module::RelatedInstanceList> && relatedInstanceList) { DARABONBA_PTR_SET_RVALUE(relatedInstanceList_, relatedInstanceList) };


      // siteHost Field Functions 
      bool hasSiteHost() const { return this->siteHost_ != nullptr;};
      void deleteSiteHost() { this->siteHost_ = nullptr;};
      inline string getSiteHost() const { DARABONBA_PTR_GET_DEFAULT(siteHost_, "") };
      inline Module& setSiteHost(string siteHost) { DARABONBA_PTR_SET_VALUE(siteHost_, siteHost) };


      // slug Field Functions 
      bool hasSlug() const { return this->slug_ != nullptr;};
      void deleteSlug() { this->slug_ = nullptr;};
      inline string getSlug() const { DARABONBA_PTR_GET_DEFAULT(slug_, "") };
      inline Module& setSlug(string slug) { DARABONBA_PTR_SET_VALUE(slug_, slug) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline Module& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Module& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Module& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusText Field Functions 
      bool hasStatusText() const { return this->statusText_ != nullptr;};
      void deleteStatusText() { this->statusText_ = nullptr;};
      inline string getStatusText() const { DARABONBA_PTR_GET_DEFAULT(statusText_, "") };
      inline Module& setStatusText(string statusText) { DARABONBA_PTR_SET_VALUE(statusText_, statusText) };


      // thumbnailUrl Field Functions 
      bool hasThumbnailUrl() const { return this->thumbnailUrl_ != nullptr;};
      void deleteThumbnailUrl() { this->thumbnailUrl_ = nullptr;};
      inline string getThumbnailUrl() const { DARABONBA_PTR_GET_DEFAULT(thumbnailUrl_, "") };
      inline Module& setThumbnailUrl(string thumbnailUrl) { DARABONBA_PTR_SET_VALUE(thumbnailUrl_, thumbnailUrl) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Module& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Module& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<vector<Module::AiStaffList>> aiStaffList_ {};
      shared_ptr<Module::AppDesignSpec> appDesignSpec_ {};
      shared_ptr<Module::AppOperationAddress> appOperationAddress_ {};
      shared_ptr<vector<Module::AppServiceList>> appServiceList_ {};
      shared_ptr<string> appSubType_ {};
      shared_ptr<string> appType_ {};
      shared_ptr<string> bizId_ {};
      shared_ptr<string> buildType_ {};
      shared_ptr<int32_t> deleted_ {};
      shared_ptr<string> description_ {};
      // placeHolder
      shared_ptr<string> designSpecBizId_ {};
      shared_ptr<string> designSpecId_ {};
      shared_ptr<string> domain_ {};
      shared_ptr<string> endTime_ {};
      shared_ptr<string> env_ {};
      shared_ptr<string> espBizId_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtDelete_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<string> gmtPublish_ {};
      shared_ptr<string> iconUrl_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> orderId_ {};
      shared_ptr<Module::PartnerDetail> partnerDetail_ {};
      shared_ptr<Module::Profile> profile_ {};
      shared_ptr<vector<Module::RelatedInstanceList>> relatedInstanceList_ {};
      shared_ptr<string> siteHost_ {};
      shared_ptr<string> slug_ {};
      shared_ptr<string> sourceType_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> statusText_ {};
      shared_ptr<string> thumbnailUrl_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->appName_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr
        && this->module_ == nullptr && this->requestId_ == nullptr && this->rootErrorCode_ == nullptr && this->rootErrorMsg_ == nullptr && this->synchro_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetAppInstanceForPartnerResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline GetAppInstanceForPartnerResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetAppInstanceForPartnerResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline GetAppInstanceForPartnerResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline GetAppInstanceForPartnerResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline GetAppInstanceForPartnerResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline GetAppInstanceForPartnerResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const GetAppInstanceForPartnerResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, GetAppInstanceForPartnerResponseBody::Module) };
    inline GetAppInstanceForPartnerResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, GetAppInstanceForPartnerResponseBody::Module) };
    inline GetAppInstanceForPartnerResponseBody& setModule(const GetAppInstanceForPartnerResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline GetAppInstanceForPartnerResponseBody& setModule(GetAppInstanceForPartnerResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAppInstanceForPartnerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline GetAppInstanceForPartnerResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline GetAppInstanceForPartnerResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline GetAppInstanceForPartnerResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<bool> allowRetry_ {};
    shared_ptr<string> appName_ {};
    shared_ptr<string> dynamicCode_ {};
    shared_ptr<string> dynamicMessage_ {};
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    shared_ptr<GetAppInstanceForPartnerResponseBody::Module> module_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> rootErrorCode_ {};
    shared_ptr<string> rootErrorMsg_ {};
    shared_ptr<bool> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
