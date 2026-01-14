// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_APPINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AppInstanceProfile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class AppInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppInstance& obj) { 
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
      DARABONBA_PTR_TO_JSON(EspBizId, espBizId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtDelete, gmtDelete_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(GmtPublish, gmtPublish_);
      DARABONBA_PTR_TO_JSON(IconUrl, iconUrl_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(SiteHost, siteHost_);
      DARABONBA_PTR_TO_JSON(Slug, slug_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusText, statusText_);
      DARABONBA_PTR_TO_JSON(ThumbnailUrl, thumbnailUrl_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AppInstance& obj) { 
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
      DARABONBA_PTR_FROM_JSON(EspBizId, espBizId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtDelete, gmtDelete_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(GmtPublish, gmtPublish_);
      DARABONBA_PTR_FROM_JSON(IconUrl, iconUrl_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(SiteHost, siteHost_);
      DARABONBA_PTR_FROM_JSON(Slug, slug_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusText, statusText_);
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
    virtual bool empty() const override { return this->appSubType_ == nullptr
        && this->appType_ == nullptr && this->bizId_ == nullptr && this->buildType_ == nullptr && this->deleted_ == nullptr && this->description_ == nullptr
        && this->designSpecBizId_ == nullptr && this->designSpecId_ == nullptr && this->domain_ == nullptr && this->endTime_ == nullptr && this->espBizId_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtDelete_ == nullptr && this->gmtModified_ == nullptr && this->gmtPublish_ == nullptr && this->iconUrl_ == nullptr
        && this->name_ == nullptr && this->profile_ == nullptr && this->siteHost_ == nullptr && this->slug_ == nullptr && this->sourceType_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->statusText_ == nullptr && this->thumbnailUrl_ == nullptr && this->userId_ == nullptr; };
    // appSubType Field Functions 
    bool hasAppSubType() const { return this->appSubType_ != nullptr;};
    void deleteAppSubType() { this->appSubType_ = nullptr;};
    inline string getAppSubType() const { DARABONBA_PTR_GET_DEFAULT(appSubType_, "") };
    inline AppInstance& setAppSubType(string appSubType) { DARABONBA_PTR_SET_VALUE(appSubType_, appSubType) };


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


    // buildType Field Functions 
    bool hasBuildType() const { return this->buildType_ != nullptr;};
    void deleteBuildType() { this->buildType_ = nullptr;};
    inline string getBuildType() const { DARABONBA_PTR_GET_DEFAULT(buildType_, "") };
    inline AppInstance& setBuildType(string buildType) { DARABONBA_PTR_SET_VALUE(buildType_, buildType) };


    // deleted Field Functions 
    bool hasDeleted() const { return this->deleted_ != nullptr;};
    void deleteDeleted() { this->deleted_ = nullptr;};
    inline int32_t getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, 0) };
    inline AppInstance& setDeleted(int32_t deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AppInstance& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // designSpecBizId Field Functions 
    bool hasDesignSpecBizId() const { return this->designSpecBizId_ != nullptr;};
    void deleteDesignSpecBizId() { this->designSpecBizId_ = nullptr;};
    inline string getDesignSpecBizId() const { DARABONBA_PTR_GET_DEFAULT(designSpecBizId_, "") };
    inline AppInstance& setDesignSpecBizId(string designSpecBizId) { DARABONBA_PTR_SET_VALUE(designSpecBizId_, designSpecBizId) };


    // designSpecId Field Functions 
    bool hasDesignSpecId() const { return this->designSpecId_ != nullptr;};
    void deleteDesignSpecId() { this->designSpecId_ = nullptr;};
    inline string getDesignSpecId() const { DARABONBA_PTR_GET_DEFAULT(designSpecId_, "") };
    inline AppInstance& setDesignSpecId(string designSpecId) { DARABONBA_PTR_SET_VALUE(designSpecId_, designSpecId) };


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


    // espBizId Field Functions 
    bool hasEspBizId() const { return this->espBizId_ != nullptr;};
    void deleteEspBizId() { this->espBizId_ = nullptr;};
    inline string getEspBizId() const { DARABONBA_PTR_GET_DEFAULT(espBizId_, "") };
    inline AppInstance& setEspBizId(string espBizId) { DARABONBA_PTR_SET_VALUE(espBizId_, espBizId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline AppInstance& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtDelete Field Functions 
    bool hasGmtDelete() const { return this->gmtDelete_ != nullptr;};
    void deleteGmtDelete() { this->gmtDelete_ = nullptr;};
    inline string getGmtDelete() const { DARABONBA_PTR_GET_DEFAULT(gmtDelete_, "") };
    inline AppInstance& setGmtDelete(string gmtDelete) { DARABONBA_PTR_SET_VALUE(gmtDelete_, gmtDelete) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline AppInstance& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


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
    inline const AppInstanceProfile & getProfile() const { DARABONBA_PTR_GET_CONST(profile_, AppInstanceProfile) };
    inline AppInstanceProfile getProfile() { DARABONBA_PTR_GET(profile_, AppInstanceProfile) };
    inline AppInstance& setProfile(const AppInstanceProfile & profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };
    inline AppInstance& setProfile(AppInstanceProfile && profile) { DARABONBA_PTR_SET_RVALUE(profile_, profile) };


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


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline AppInstance& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


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


    // statusText Field Functions 
    bool hasStatusText() const { return this->statusText_ != nullptr;};
    void deleteStatusText() { this->statusText_ = nullptr;};
    inline string getStatusText() const { DARABONBA_PTR_GET_DEFAULT(statusText_, "") };
    inline AppInstance& setStatusText(string statusText) { DARABONBA_PTR_SET_VALUE(statusText_, statusText) };


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
    shared_ptr<string> appSubType_ {};
    shared_ptr<string> appType_ {};
    shared_ptr<string> bizId_ {};
    shared_ptr<string> buildType_ {};
    shared_ptr<int32_t> deleted_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> designSpecBizId_ {};
    shared_ptr<string> designSpecId_ {};
    shared_ptr<string> domain_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<string> espBizId_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtDelete_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<string> gmtPublish_ {};
    shared_ptr<string> iconUrl_ {};
    shared_ptr<string> name_ {};
    shared_ptr<AppInstanceProfile> profile_ {};
    shared_ptr<string> siteHost_ {};
    shared_ptr<string> slug_ {};
    shared_ptr<string> sourceType_ {};
    shared_ptr<string> startTime_ {};
    // trial,draft,live,refunded,expired,released
    shared_ptr<string> status_ {};
    shared_ptr<string> statusText_ {};
    shared_ptr<string> thumbnailUrl_ {};
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
