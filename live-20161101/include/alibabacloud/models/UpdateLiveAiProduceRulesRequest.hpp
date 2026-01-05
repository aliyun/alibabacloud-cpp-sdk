// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEAIPRODUCERULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEAIPRODUCERULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateLiveAIProduceRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveAIProduceRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(IsLazy, isLazy_);
      DARABONBA_PTR_TO_JSON(LiveTemplate, liveTemplate_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RulesId, rulesId_);
      DARABONBA_PTR_TO_JSON(StudioName, studioName_);
      DARABONBA_PTR_TO_JSON(SubtitleId, subtitleId_);
      DARABONBA_PTR_TO_JSON(SubtitleName, subtitleName_);
      DARABONBA_PTR_TO_JSON(Suffix, suffix_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveAIProduceRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(IsLazy, isLazy_);
      DARABONBA_PTR_FROM_JSON(LiveTemplate, liveTemplate_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RulesId, rulesId_);
      DARABONBA_PTR_FROM_JSON(StudioName, studioName_);
      DARABONBA_PTR_FROM_JSON(SubtitleId, subtitleId_);
      DARABONBA_PTR_FROM_JSON(SubtitleName, subtitleName_);
      DARABONBA_PTR_FROM_JSON(Suffix, suffix_);
    };
    UpdateLiveAIProduceRulesRequest() = default ;
    UpdateLiveAIProduceRulesRequest(const UpdateLiveAIProduceRulesRequest &) = default ;
    UpdateLiveAIProduceRulesRequest(UpdateLiveAIProduceRulesRequest &&) = default ;
    UpdateLiveAIProduceRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveAIProduceRulesRequest() = default ;
    UpdateLiveAIProduceRulesRequest& operator=(const UpdateLiveAIProduceRulesRequest &) = default ;
    UpdateLiveAIProduceRulesRequest& operator=(UpdateLiveAIProduceRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->app_ == nullptr
        && this->description_ == nullptr && this->domain_ == nullptr && this->isLazy_ == nullptr && this->liveTemplate_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->rulesId_ == nullptr && this->studioName_ == nullptr && this->subtitleId_ == nullptr && this->subtitleName_ == nullptr
        && this->suffix_ == nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string getApp() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline UpdateLiveAIProduceRulesRequest& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateLiveAIProduceRulesRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline UpdateLiveAIProduceRulesRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // isLazy Field Functions 
    bool hasIsLazy() const { return this->isLazy_ != nullptr;};
    void deleteIsLazy() { this->isLazy_ = nullptr;};
    inline bool getIsLazy() const { DARABONBA_PTR_GET_DEFAULT(isLazy_, false) };
    inline UpdateLiveAIProduceRulesRequest& setIsLazy(bool isLazy) { DARABONBA_PTR_SET_VALUE(isLazy_, isLazy) };


    // liveTemplate Field Functions 
    bool hasLiveTemplate() const { return this->liveTemplate_ != nullptr;};
    void deleteLiveTemplate() { this->liveTemplate_ = nullptr;};
    inline string getLiveTemplate() const { DARABONBA_PTR_GET_DEFAULT(liveTemplate_, "") };
    inline UpdateLiveAIProduceRulesRequest& setLiveTemplate(string liveTemplate) { DARABONBA_PTR_SET_VALUE(liveTemplate_, liveTemplate) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateLiveAIProduceRulesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateLiveAIProduceRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rulesId Field Functions 
    bool hasRulesId() const { return this->rulesId_ != nullptr;};
    void deleteRulesId() { this->rulesId_ = nullptr;};
    inline string getRulesId() const { DARABONBA_PTR_GET_DEFAULT(rulesId_, "") };
    inline UpdateLiveAIProduceRulesRequest& setRulesId(string rulesId) { DARABONBA_PTR_SET_VALUE(rulesId_, rulesId) };


    // studioName Field Functions 
    bool hasStudioName() const { return this->studioName_ != nullptr;};
    void deleteStudioName() { this->studioName_ = nullptr;};
    inline string getStudioName() const { DARABONBA_PTR_GET_DEFAULT(studioName_, "") };
    inline UpdateLiveAIProduceRulesRequest& setStudioName(string studioName) { DARABONBA_PTR_SET_VALUE(studioName_, studioName) };


    // subtitleId Field Functions 
    bool hasSubtitleId() const { return this->subtitleId_ != nullptr;};
    void deleteSubtitleId() { this->subtitleId_ = nullptr;};
    inline string getSubtitleId() const { DARABONBA_PTR_GET_DEFAULT(subtitleId_, "") };
    inline UpdateLiveAIProduceRulesRequest& setSubtitleId(string subtitleId) { DARABONBA_PTR_SET_VALUE(subtitleId_, subtitleId) };


    // subtitleName Field Functions 
    bool hasSubtitleName() const { return this->subtitleName_ != nullptr;};
    void deleteSubtitleName() { this->subtitleName_ = nullptr;};
    inline string getSubtitleName() const { DARABONBA_PTR_GET_DEFAULT(subtitleName_, "") };
    inline UpdateLiveAIProduceRulesRequest& setSubtitleName(string subtitleName) { DARABONBA_PTR_SET_VALUE(subtitleName_, subtitleName) };


    // suffix Field Functions 
    bool hasSuffix() const { return this->suffix_ != nullptr;};
    void deleteSuffix() { this->suffix_ = nullptr;};
    inline string getSuffix() const { DARABONBA_PTR_GET_DEFAULT(suffix_, "") };
    inline UpdateLiveAIProduceRulesRequest& setSuffix(string suffix) { DARABONBA_PTR_SET_VALUE(suffix_, suffix) };


  protected:
    // The name of the application to which the live stream belongs.
    // 
    // This parameter is required.
    shared_ptr<string> app_ {};
    // The description of the subtitle rule. The description can be up to 128 characters in length and can contain letters, digits, and special characters.
    shared_ptr<string> description_ {};
    // The main streaming domain.
    // 
    // This parameter is required.
    shared_ptr<string> domain_ {};
    // Specifies whether to generate live subtitles when stream pulling starts. Valid values:
    // 
    // *   true: generates live subtitles when stream pulling starts and stops generating live subtitles when no streams are pulled for 5 minutes. When stream pulling restarts, live subtitles are generated again.
    // *   false: generates live subtitles when stream ingest starts.
    shared_ptr<bool> isLazy_ {};
    // The specification of the output subtitles. Valid values:
    // 
    // *   `lp_ld`: 360p (640 × 360)
    // *   `lp_ld_v`: 360p (360 × 640)
    // *   `lp_sd`: 480p (854 × 480)
    // *   `lp_sd_v`: 480p (480 × 854)
    // *   `lp_hd`: 720p (1280 × 720)
    // *   `lp_hd_v`: 720p (720 × 1280)
    // *   `lp_ud`: 1080p (1920 × 1080)
    // *   `lp_ud_v`: 1080p (1080 × 1920)
    shared_ptr<string> liveTemplate_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> regionId_ {};
    // The ID of the subtitle rule.
    shared_ptr<string> rulesId_ {};
    // The name of the virtual background template.
    shared_ptr<string> studioName_ {};
    // The ID of the subtitle template.
    shared_ptr<string> subtitleId_ {};
    // The name of the subtitle template.
    shared_ptr<string> subtitleName_ {};
    // The suffix to match.
    shared_ptr<string> suffix_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
