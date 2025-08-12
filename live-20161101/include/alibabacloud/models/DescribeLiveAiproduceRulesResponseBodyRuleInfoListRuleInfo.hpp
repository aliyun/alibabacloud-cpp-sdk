// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEAIPRODUCERULESRESPONSEBODYRULEINFOLISTRULEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEAIPRODUCERULESRESPONSEBODYRULEINFOLISTRULEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(GmtModifyTime, gmtModifyTime_);
      DARABONBA_PTR_TO_JSON(IsLazy, isLazy_);
      DARABONBA_PTR_TO_JSON(LiveTemplate, liveTemplate_);
      DARABONBA_PTR_TO_JSON(RulesId, rulesId_);
      DARABONBA_PTR_TO_JSON(StudioName, studioName_);
      DARABONBA_PTR_TO_JSON(SubtitleName, subtitleName_);
      DARABONBA_PTR_TO_JSON(SuffixName, suffixName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(GmtModifyTime, gmtModifyTime_);
      DARABONBA_PTR_FROM_JSON(IsLazy, isLazy_);
      DARABONBA_PTR_FROM_JSON(LiveTemplate, liveTemplate_);
      DARABONBA_PTR_FROM_JSON(RulesId, rulesId_);
      DARABONBA_PTR_FROM_JSON(StudioName, studioName_);
      DARABONBA_PTR_FROM_JSON(SubtitleName, subtitleName_);
      DARABONBA_PTR_FROM_JSON(SuffixName, suffixName_);
    };
    DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo() = default ;
    DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo(const DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo &) = default ;
    DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo(DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo &&) = default ;
    DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo() = default ;
    DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo& operator=(const DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo &) = default ;
    DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo& operator=(DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->app_ != nullptr
        && this->description_ != nullptr && this->domain_ != nullptr && this->gmtModifyTime_ != nullptr && this->isLazy_ != nullptr && this->liveTemplate_ != nullptr
        && this->rulesId_ != nullptr && this->studioName_ != nullptr && this->subtitleName_ != nullptr && this->suffixName_ != nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string app() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // gmtModifyTime Field Functions 
    bool hasGmtModifyTime() const { return this->gmtModifyTime_ != nullptr;};
    void deleteGmtModifyTime() { this->gmtModifyTime_ = nullptr;};
    inline string gmtModifyTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifyTime_, "") };
    inline DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo& setGmtModifyTime(string gmtModifyTime) { DARABONBA_PTR_SET_VALUE(gmtModifyTime_, gmtModifyTime) };


    // isLazy Field Functions 
    bool hasIsLazy() const { return this->isLazy_ != nullptr;};
    void deleteIsLazy() { this->isLazy_ = nullptr;};
    inline bool isLazy() const { DARABONBA_PTR_GET_DEFAULT(isLazy_, false) };
    inline DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo& setIsLazy(bool isLazy) { DARABONBA_PTR_SET_VALUE(isLazy_, isLazy) };


    // liveTemplate Field Functions 
    bool hasLiveTemplate() const { return this->liveTemplate_ != nullptr;};
    void deleteLiveTemplate() { this->liveTemplate_ = nullptr;};
    inline string liveTemplate() const { DARABONBA_PTR_GET_DEFAULT(liveTemplate_, "") };
    inline DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo& setLiveTemplate(string liveTemplate) { DARABONBA_PTR_SET_VALUE(liveTemplate_, liveTemplate) };


    // rulesId Field Functions 
    bool hasRulesId() const { return this->rulesId_ != nullptr;};
    void deleteRulesId() { this->rulesId_ = nullptr;};
    inline string rulesId() const { DARABONBA_PTR_GET_DEFAULT(rulesId_, "") };
    inline DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo& setRulesId(string rulesId) { DARABONBA_PTR_SET_VALUE(rulesId_, rulesId) };


    // studioName Field Functions 
    bool hasStudioName() const { return this->studioName_ != nullptr;};
    void deleteStudioName() { this->studioName_ = nullptr;};
    inline string studioName() const { DARABONBA_PTR_GET_DEFAULT(studioName_, "") };
    inline DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo& setStudioName(string studioName) { DARABONBA_PTR_SET_VALUE(studioName_, studioName) };


    // subtitleName Field Functions 
    bool hasSubtitleName() const { return this->subtitleName_ != nullptr;};
    void deleteSubtitleName() { this->subtitleName_ = nullptr;};
    inline string subtitleName() const { DARABONBA_PTR_GET_DEFAULT(subtitleName_, "") };
    inline DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo& setSubtitleName(string subtitleName) { DARABONBA_PTR_SET_VALUE(subtitleName_, subtitleName) };


    // suffixName Field Functions 
    bool hasSuffixName() const { return this->suffixName_ != nullptr;};
    void deleteSuffixName() { this->suffixName_ = nullptr;};
    inline string suffixName() const { DARABONBA_PTR_GET_DEFAULT(suffixName_, "") };
    inline DescribeLiveAIProduceRulesResponseBodyRuleInfoListRuleInfo& setSuffixName(string suffixName) { DARABONBA_PTR_SET_VALUE(suffixName_, suffixName) };


  protected:
    // The name of the application to which the live stream belongs.
    std::shared_ptr<string> app_ = nullptr;
    // The description of the rule.
    std::shared_ptr<string> description_ = nullptr;
    // The streaming domain.
    std::shared_ptr<string> domain_ = nullptr;
    // The last time when the rule was modified. The value is a timestamp.
    std::shared_ptr<string> gmtModifyTime_ = nullptr;
    // Indicates whether the rule takes effect when stream pulling starts.
    std::shared_ptr<bool> isLazy_ = nullptr;
    // The specification of the exported subtitles.
    std::shared_ptr<string> liveTemplate_ = nullptr;
    // The ID of the subtitle rule.
    std::shared_ptr<string> rulesId_ = nullptr;
    // The name of the virtual background template.
    std::shared_ptr<string> studioName_ = nullptr;
    // The name of the subtitle template.
    std::shared_ptr<string> subtitleName_ = nullptr;
    // The suffix of the subtitle rule.
    std::shared_ptr<string> suffixName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
