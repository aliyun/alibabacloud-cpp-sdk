// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCAPPINSTANCEFORPARTNERREQUESTAPPINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_SYNCAPPINSTANCEFORPARTNERREQUESTAPPINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SyncAppInstanceForPartnerRequestAppInstanceProfile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class SyncAppInstanceForPartnerRequestAppInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncAppInstanceForPartnerRequestAppInstance& obj) { 
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
    friend void from_json(const Darabonba::Json& j, SyncAppInstanceForPartnerRequestAppInstance& obj) { 
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
    SyncAppInstanceForPartnerRequestAppInstance() = default ;
    SyncAppInstanceForPartnerRequestAppInstance(const SyncAppInstanceForPartnerRequestAppInstance &) = default ;
    SyncAppInstanceForPartnerRequestAppInstance(SyncAppInstanceForPartnerRequestAppInstance &&) = default ;
    SyncAppInstanceForPartnerRequestAppInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncAppInstanceForPartnerRequestAppInstance() = default ;
    SyncAppInstanceForPartnerRequestAppInstance& operator=(const SyncAppInstanceForPartnerRequestAppInstance &) = default ;
    SyncAppInstanceForPartnerRequestAppInstance& operator=(SyncAppInstanceForPartnerRequestAppInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appType_ != nullptr
        && this->bizId_ != nullptr && this->deleted_ != nullptr && this->domain_ != nullptr && this->endTime_ != nullptr && this->gmtDelete_ != nullptr
        && this->gmtPublish_ != nullptr && this->iconUrl_ != nullptr && this->name_ != nullptr && this->profile_ != nullptr && this->siteHost_ != nullptr
        && this->slug_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr && this->thumbnailUrl_ != nullptr && this->userId_ != nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline SyncAppInstanceForPartnerRequestAppInstance& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline SyncAppInstanceForPartnerRequestAppInstance& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline string deleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, "") };
    inline SyncAppInstanceForPartnerRequestAppInstance& setDeleted(string deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline SyncAppInstanceForPartnerRequestAppInstance& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline SyncAppInstanceForPartnerRequestAppInstance& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // gmtDelete Field Functions 
    bool hasGmtDelete() const { return this->gmtDelete_ != nullptr;};
    void deleteGmtDelete() { this->gmtDelete_ = nullptr;};
    inline string gmtDelete() const { DARABONBA_PTR_GET_DEFAULT(gmtDelete_, "") };
    inline SyncAppInstanceForPartnerRequestAppInstance& setGmtDelete(string gmtDelete) { DARABONBA_PTR_SET_VALUE(gmtDelete_, gmtDelete) };


    // gmtPublish Field Functions 
    bool hasGmtPublish() const { return this->gmtPublish_ != nullptr;};
    void deleteGmtPublish() { this->gmtPublish_ = nullptr;};
    inline string gmtPublish() const { DARABONBA_PTR_GET_DEFAULT(gmtPublish_, "") };
    inline SyncAppInstanceForPartnerRequestAppInstance& setGmtPublish(string gmtPublish) { DARABONBA_PTR_SET_VALUE(gmtPublish_, gmtPublish) };


    // iconUrl Field Functions 
    bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
    void deleteIconUrl() { this->iconUrl_ = nullptr;};
    inline string iconUrl() const { DARABONBA_PTR_GET_DEFAULT(iconUrl_, "") };
    inline SyncAppInstanceForPartnerRequestAppInstance& setIconUrl(string iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SyncAppInstanceForPartnerRequestAppInstance& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline const Models::SyncAppInstanceForPartnerRequestAppInstanceProfile & profile() const { DARABONBA_PTR_GET_CONST(profile_, Models::SyncAppInstanceForPartnerRequestAppInstanceProfile) };
    inline Models::SyncAppInstanceForPartnerRequestAppInstanceProfile profile() { DARABONBA_PTR_GET(profile_, Models::SyncAppInstanceForPartnerRequestAppInstanceProfile) };
    inline SyncAppInstanceForPartnerRequestAppInstance& setProfile(const Models::SyncAppInstanceForPartnerRequestAppInstanceProfile & profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };
    inline SyncAppInstanceForPartnerRequestAppInstance& setProfile(Models::SyncAppInstanceForPartnerRequestAppInstanceProfile && profile) { DARABONBA_PTR_SET_RVALUE(profile_, profile) };


    // siteHost Field Functions 
    bool hasSiteHost() const { return this->siteHost_ != nullptr;};
    void deleteSiteHost() { this->siteHost_ = nullptr;};
    inline string siteHost() const { DARABONBA_PTR_GET_DEFAULT(siteHost_, "") };
    inline SyncAppInstanceForPartnerRequestAppInstance& setSiteHost(string siteHost) { DARABONBA_PTR_SET_VALUE(siteHost_, siteHost) };


    // slug Field Functions 
    bool hasSlug() const { return this->slug_ != nullptr;};
    void deleteSlug() { this->slug_ = nullptr;};
    inline string slug() const { DARABONBA_PTR_GET_DEFAULT(slug_, "") };
    inline SyncAppInstanceForPartnerRequestAppInstance& setSlug(string slug) { DARABONBA_PTR_SET_VALUE(slug_, slug) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline SyncAppInstanceForPartnerRequestAppInstance& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SyncAppInstanceForPartnerRequestAppInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // thumbnailUrl Field Functions 
    bool hasThumbnailUrl() const { return this->thumbnailUrl_ != nullptr;};
    void deleteThumbnailUrl() { this->thumbnailUrl_ = nullptr;};
    inline string thumbnailUrl() const { DARABONBA_PTR_GET_DEFAULT(thumbnailUrl_, "") };
    inline SyncAppInstanceForPartnerRequestAppInstance& setThumbnailUrl(string thumbnailUrl) { DARABONBA_PTR_SET_VALUE(thumbnailUrl_, thumbnailUrl) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SyncAppInstanceForPartnerRequestAppInstance& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<string> deleted_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> gmtDelete_ = nullptr;
    std::shared_ptr<string> gmtPublish_ = nullptr;
    std::shared_ptr<string> iconUrl_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::SyncAppInstanceForPartnerRequestAppInstanceProfile> profile_ = nullptr;
    // siteId
    std::shared_ptr<string> siteHost_ = nullptr;
    std::shared_ptr<string> slug_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> thumbnailUrl_ = nullptr;
    // 123123123131232
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
