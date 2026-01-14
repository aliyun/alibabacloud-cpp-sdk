// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCAPPINSTANCEFORPARTNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCAPPINSTANCEFORPARTNERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class SyncAppInstanceForPartnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncAppInstanceForPartnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstance, appInstance_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(SourceBizId, sourceBizId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, SyncAppInstanceForPartnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstance, appInstance_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(SourceBizId, sourceBizId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    SyncAppInstanceForPartnerRequest() = default ;
    SyncAppInstanceForPartnerRequest(const SyncAppInstanceForPartnerRequest &) = default ;
    SyncAppInstanceForPartnerRequest(SyncAppInstanceForPartnerRequest &&) = default ;
    SyncAppInstanceForPartnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncAppInstanceForPartnerRequest() = default ;
    SyncAppInstanceForPartnerRequest& operator=(const SyncAppInstanceForPartnerRequest &) = default ;
    SyncAppInstanceForPartnerRequest& operator=(SyncAppInstanceForPartnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppInstance : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppInstance& obj) { 
        DARABONBA_PTR_TO_JSON(AppType, appType_);
        DARABONBA_PTR_TO_JSON(BizId, bizId_);
        DARABONBA_PTR_TO_JSON(Deleted, deleted_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(GmtDelete, gmtDelete_);
        DARABONBA_PTR_TO_JSON(GmtPublish, gmtPublish_);
        DARABONBA_PTR_TO_JSON(IconUrl, iconUrl_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Profile, profile_);
        DARABONBA_PTR_TO_JSON(SiteHost, siteHost_);
        DARABONBA_PTR_TO_JSON(Slug, slug_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(ThumbnailUrl, thumbnailUrl_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, AppInstance& obj) { 
        DARABONBA_PTR_FROM_JSON(AppType, appType_);
        DARABONBA_PTR_FROM_JSON(BizId, bizId_);
        DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(GmtDelete, gmtDelete_);
        DARABONBA_PTR_FROM_JSON(GmtPublish, gmtPublish_);
        DARABONBA_PTR_FROM_JSON(IconUrl, iconUrl_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Profile, profile_);
        DARABONBA_PTR_FROM_JSON(SiteHost, siteHost_);
        DARABONBA_PTR_FROM_JSON(Slug, slug_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(ThumbnailUrl, thumbnailUrl_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      AppInstance() = default ;
      AppInstance(const AppInstance &) = default ;
      AppInstance(AppInstance &&) = default ;
      AppInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppInstance() = default ;
      AppInstance& operator=(const AppInstance &) = default ;
      AppInstance& operator=(AppInstance &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Profile : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Profile& obj) { 
          DARABONBA_PTR_TO_JSON(DeployArea, deployArea_);
          DARABONBA_PTR_TO_JSON(LxInstanceId, lxInstanceId_);
          DARABONBA_PTR_TO_JSON(OrderId, orderId_);
          DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
          DARABONBA_PTR_TO_JSON(TemplateEtag, templateEtag_);
          DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        };
        friend void from_json(const Darabonba::Json& j, Profile& obj) { 
          DARABONBA_PTR_FROM_JSON(DeployArea, deployArea_);
          DARABONBA_PTR_FROM_JSON(LxInstanceId, lxInstanceId_);
          DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
          DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
          DARABONBA_PTR_FROM_JSON(TemplateEtag, templateEtag_);
          DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
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
        virtual bool empty() const override { return this->deployArea_ == nullptr
        && this->lxInstanceId_ == nullptr && this->orderId_ == nullptr && this->siteVersion_ == nullptr && this->templateEtag_ == nullptr && this->templateId_ == nullptr; };
        // deployArea Field Functions 
        bool hasDeployArea() const { return this->deployArea_ != nullptr;};
        void deleteDeployArea() { this->deployArea_ = nullptr;};
        inline string getDeployArea() const { DARABONBA_PTR_GET_DEFAULT(deployArea_, "") };
        inline Profile& setDeployArea(string deployArea) { DARABONBA_PTR_SET_VALUE(deployArea_, deployArea) };


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


        // siteVersion Field Functions 
        bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
        void deleteSiteVersion() { this->siteVersion_ = nullptr;};
        inline string getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, "") };
        inline Profile& setSiteVersion(string siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


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


      protected:
        shared_ptr<string> deployArea_ {};
        shared_ptr<string> lxInstanceId_ {};
        shared_ptr<string> orderId_ {};
        shared_ptr<string> siteVersion_ {};
        shared_ptr<string> templateEtag_ {};
        shared_ptr<string> templateId_ {};
      };

      virtual bool empty() const override { return this->appType_ == nullptr
        && this->bizId_ == nullptr && this->deleted_ == nullptr && this->domain_ == nullptr && this->endTime_ == nullptr && this->gmtDelete_ == nullptr
        && this->gmtPublish_ == nullptr && this->iconUrl_ == nullptr && this->name_ == nullptr && this->profile_ == nullptr && this->siteHost_ == nullptr
        && this->slug_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->thumbnailUrl_ == nullptr && this->userId_ == nullptr; };
      // appType Field Functions 
      bool hasAppType() const { return this->appType_ != nullptr;};
      void deleteAppType() { this->appType_ = nullptr;};
      inline string getAppType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
      inline AppInstance& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


      // bizId Field Functions 
      bool hasBizId() const { return this->bizId_ != nullptr;};
      void deleteBizId() { this->bizId_ = nullptr;};
      inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
      inline AppInstance& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


      // deleted Field Functions 
      bool hasDeleted() const { return this->deleted_ != nullptr;};
      void deleteDeleted() { this->deleted_ = nullptr;};
      inline string getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, "") };
      inline AppInstance& setDeleted(string deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline AppInstance& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline AppInstance& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // gmtDelete Field Functions 
      bool hasGmtDelete() const { return this->gmtDelete_ != nullptr;};
      void deleteGmtDelete() { this->gmtDelete_ = nullptr;};
      inline string getGmtDelete() const { DARABONBA_PTR_GET_DEFAULT(gmtDelete_, "") };
      inline AppInstance& setGmtDelete(string gmtDelete) { DARABONBA_PTR_SET_VALUE(gmtDelete_, gmtDelete) };


      // gmtPublish Field Functions 
      bool hasGmtPublish() const { return this->gmtPublish_ != nullptr;};
      void deleteGmtPublish() { this->gmtPublish_ = nullptr;};
      inline string getGmtPublish() const { DARABONBA_PTR_GET_DEFAULT(gmtPublish_, "") };
      inline AppInstance& setGmtPublish(string gmtPublish) { DARABONBA_PTR_SET_VALUE(gmtPublish_, gmtPublish) };


      // iconUrl Field Functions 
      bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
      void deleteIconUrl() { this->iconUrl_ = nullptr;};
      inline string getIconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
      inline AppInstance& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline AppInstance& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // profile Field Functions 
      bool hasProfile() const { return this->profile_ != nullptr;};
      void deleteProfile() { this->profile_ = nullptr;};
      inline const AppInstance::Profile & getProfile() const { DARABONBA_PTR_GET_CONST(profile_, AppInstance::Profile) };
      inline AppInstance::Profile getProfile() { DARABONBA_PTR_GET(profile_, AppInstance::Profile) };
      inline AppInstance& setProfile(const AppInstance::Profile & profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };
      inline AppInstance& setProfile(AppInstance::Profile && profile) { DARABONBA_PTR_SET_RVALUE(profile_, profile) };


      // siteHost Field Functions 
      bool hasSiteHost() const { return this->siteHost_ != nullptr;};
      void deleteSiteHost() { this->siteHost_ = nullptr;};
      inline string getSiteHost() const { DARABONBA_PTR_GET_DEFAULT(siteHost_, "") };
      inline AppInstance& setSiteHost(string siteHost) { DARABONBA_PTR_SET_VALUE(siteHost_, siteHost) };


      // slug Field Functions 
      bool hasSlug() const { return this->slug_ != nullptr;};
      void deleteSlug() { this->slug_ = nullptr;};
      inline string getSlug() const { DARABONBA_PTR_GET_DEFAULT(slug_, "") };
      inline AppInstance& setSlug(string slug) { DARABONBA_PTR_SET_VALUE(slug_, slug) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline AppInstance& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AppInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // thumbnailUrl Field Functions 
      bool hasThumbnailUrl() const { return this->thumbnailUrl_ != nullptr;};
      void deleteThumbnailUrl() { this->thumbnailUrl_ = nullptr;};
      inline string getThumbnailUrl() const { DARABONBA_PTR_GET_DEFAULT(thumbnailUrl_, "") };
      inline AppInstance& setThumbnailUrl(string thumbnailUrl) { DARABONBA_PTR_SET_VALUE(thumbnailUrl_, thumbnailUrl) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline AppInstance& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<string> appType_ {};
      shared_ptr<string> bizId_ {};
      shared_ptr<string> deleted_ {};
      shared_ptr<string> domain_ {};
      shared_ptr<string> endTime_ {};
      shared_ptr<string> gmtDelete_ {};
      shared_ptr<string> gmtPublish_ {};
      shared_ptr<string> iconUrl_ {};
      shared_ptr<string> name_ {};
      shared_ptr<AppInstance::Profile> profile_ {};
      // siteId
      shared_ptr<string> siteHost_ {};
      shared_ptr<string> slug_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> thumbnailUrl_ {};
      // 123123123131232
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->appInstance_ == nullptr
        && this->eventType_ == nullptr && this->operator_ == nullptr && this->sourceBizId_ == nullptr && this->sourceType_ == nullptr; };
    // appInstance Field Functions 
    bool hasAppInstance() const { return this->appInstance_ != nullptr;};
    void deleteAppInstance() { this->appInstance_ = nullptr;};
    inline const SyncAppInstanceForPartnerRequest::AppInstance & getAppInstance() const { DARABONBA_PTR_GET_CONST(appInstance_, SyncAppInstanceForPartnerRequest::AppInstance) };
    inline SyncAppInstanceForPartnerRequest::AppInstance getAppInstance() { DARABONBA_PTR_GET(appInstance_, SyncAppInstanceForPartnerRequest::AppInstance) };
    inline SyncAppInstanceForPartnerRequest& setAppInstance(const SyncAppInstanceForPartnerRequest::AppInstance & appInstance) { DARABONBA_PTR_SET_VALUE(appInstance_, appInstance) };
    inline SyncAppInstanceForPartnerRequest& setAppInstance(SyncAppInstanceForPartnerRequest::AppInstance && appInstance) { DARABONBA_PTR_SET_RVALUE(appInstance_, appInstance) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline SyncAppInstanceForPartnerRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline SyncAppInstanceForPartnerRequest& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // sourceBizId Field Functions 
    bool hasSourceBizId() const { return this->sourceBizId_ != nullptr;};
    void deleteSourceBizId() { this->sourceBizId_ = nullptr;};
    inline string getSourceBizId() const { DARABONBA_PTR_GET_DEFAULT(sourceBizId_, "") };
    inline SyncAppInstanceForPartnerRequest& setSourceBizId(string sourceBizId) { DARABONBA_PTR_SET_VALUE(sourceBizId_, sourceBizId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline SyncAppInstanceForPartnerRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    shared_ptr<SyncAppInstanceForPartnerRequest::AppInstance> appInstance_ {};
    shared_ptr<string> eventType_ {};
    shared_ptr<string> operator_ {};
    shared_ptr<string> sourceBizId_ {};
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
