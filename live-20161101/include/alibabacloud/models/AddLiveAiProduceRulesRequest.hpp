// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDLIVEAIPRODUCERULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDLIVEAIPRODUCERULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddLiveAIProduceRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddLiveAIProduceRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(IsLazy, isLazy_);
      DARABONBA_PTR_TO_JSON(LiveTemplate, liveTemplate_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StudioName, studioName_);
      DARABONBA_PTR_TO_JSON(SubtitleName, subtitleName_);
      DARABONBA_PTR_TO_JSON(Suffix, suffix_);
    };
    friend void from_json(const Darabonba::Json& j, AddLiveAIProduceRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(IsLazy, isLazy_);
      DARABONBA_PTR_FROM_JSON(LiveTemplate, liveTemplate_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StudioName, studioName_);
      DARABONBA_PTR_FROM_JSON(SubtitleName, subtitleName_);
      DARABONBA_PTR_FROM_JSON(Suffix, suffix_);
    };
    AddLiveAIProduceRulesRequest() = default ;
    AddLiveAIProduceRulesRequest(const AddLiveAIProduceRulesRequest &) = default ;
    AddLiveAIProduceRulesRequest(AddLiveAIProduceRulesRequest &&) = default ;
    AddLiveAIProduceRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddLiveAIProduceRulesRequest() = default ;
    AddLiveAIProduceRulesRequest& operator=(const AddLiveAIProduceRulesRequest &) = default ;
    AddLiveAIProduceRulesRequest& operator=(AddLiveAIProduceRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->app_ == nullptr
        && return this->description_ == nullptr && return this->domain_ == nullptr && return this->isLazy_ == nullptr && return this->liveTemplate_ == nullptr && return this->ownerId_ == nullptr
        && return this->regionId_ == nullptr && return this->studioName_ == nullptr && return this->subtitleName_ == nullptr && return this->suffix_ == nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string app() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline AddLiveAIProduceRulesRequest& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddLiveAIProduceRulesRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline AddLiveAIProduceRulesRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // isLazy Field Functions 
    bool hasIsLazy() const { return this->isLazy_ != nullptr;};
    void deleteIsLazy() { this->isLazy_ = nullptr;};
    inline bool isLazy() const { DARABONBA_PTR_GET_DEFAULT(isLazy_, false) };
    inline AddLiveAIProduceRulesRequest& setIsLazy(bool isLazy) { DARABONBA_PTR_SET_VALUE(isLazy_, isLazy) };


    // liveTemplate Field Functions 
    bool hasLiveTemplate() const { return this->liveTemplate_ != nullptr;};
    void deleteLiveTemplate() { this->liveTemplate_ = nullptr;};
    inline string liveTemplate() const { DARABONBA_PTR_GET_DEFAULT(liveTemplate_, "") };
    inline AddLiveAIProduceRulesRequest& setLiveTemplate(string liveTemplate) { DARABONBA_PTR_SET_VALUE(liveTemplate_, liveTemplate) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddLiveAIProduceRulesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddLiveAIProduceRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // studioName Field Functions 
    bool hasStudioName() const { return this->studioName_ != nullptr;};
    void deleteStudioName() { this->studioName_ = nullptr;};
    inline string studioName() const { DARABONBA_PTR_GET_DEFAULT(studioName_, "") };
    inline AddLiveAIProduceRulesRequest& setStudioName(string studioName) { DARABONBA_PTR_SET_VALUE(studioName_, studioName) };


    // subtitleName Field Functions 
    bool hasSubtitleName() const { return this->subtitleName_ != nullptr;};
    void deleteSubtitleName() { this->subtitleName_ = nullptr;};
    inline string subtitleName() const { DARABONBA_PTR_GET_DEFAULT(subtitleName_, "") };
    inline AddLiveAIProduceRulesRequest& setSubtitleName(string subtitleName) { DARABONBA_PTR_SET_VALUE(subtitleName_, subtitleName) };


    // suffix Field Functions 
    bool hasSuffix() const { return this->suffix_ != nullptr;};
    void deleteSuffix() { this->suffix_ = nullptr;};
    inline string suffix() const { DARABONBA_PTR_GET_DEFAULT(suffix_, "") };
    inline AddLiveAIProduceRulesRequest& setSuffix(string suffix) { DARABONBA_PTR_SET_VALUE(suffix_, suffix) };


  protected:
    // The name of the application to which the live stream belongs. The name can be up to 256 characters in length and can contain digits, letters, hyphens (-), and underscores (_). The name must be the same as the application name in the ingest URL. Otherwise, the rule does not take effect.
    // 
    // This parameter is required.
    std::shared_ptr<string> app_ = nullptr;
    // The description of the subtitle rule. The description can be up to 128 characters in length and can contain letters, digits, and special characters.
    std::shared_ptr<string> description_ = nullptr;
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    // Specifies whether to trigger the subtitle rule when stream pulling starts. Valid values:
    // 
    // *   true: generates live subtitles when stream pulling starts and stops generating live subtitles when no stream is pulled for 5 minutes. When stream pulling restarts, live subtitles are generated again.
    // *   false: generates live subtitles when stream ingest starts, regardless of whether stream pulling starts.
    std::shared_ptr<bool> isLazy_ = nullptr;
    // The specification of the output subtitles. Valid values:
    // 
    // *   `lp_ld`: landscape low definition 360p (640×360)
    // *   `lp_ld_v`: portrait low definition 360p (360×640)
    // *   `lp_sd`: landscape standard definition 480p (854×480)
    // *   `lp_sd_v`: portrait standard definition 480p (480×854)
    // *   `lp_hd`: landscape high definition 720p (1280×720)
    // *   `lp_hd_v`: portrait high definition 720p (720×1280)
    // *   `lp_ud`: landscape ultra-high definition 1080p (1920×1080)
    // *   `lp_ud_v`: portrait ultra-high definition 1080p (1080×1920)
    // 
    // This parameter is required.
    std::shared_ptr<string> liveTemplate_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the virtual background template.
    std::shared_ptr<string> studioName_ = nullptr;
    // The name of the subtitle template.
    std::shared_ptr<string> subtitleName_ = nullptr;
    // The suffix to match.
    std::shared_ptr<string> suffix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
