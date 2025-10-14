// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIDEOPROCESSINGSRESPONSEBODYCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_LISTVIDEOPROCESSINGSRESPONSEBODYCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListVideoProcessingsResponseBodyConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVideoProcessingsResponseBodyConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(FlvSeekEnd, flvSeekEnd_);
      DARABONBA_PTR_TO_JSON(FlvSeekStart, flvSeekStart_);
      DARABONBA_PTR_TO_JSON(FlvVideoSeekMode, flvVideoSeekMode_);
      DARABONBA_PTR_TO_JSON(Mp4SeekEnd, mp4SeekEnd_);
      DARABONBA_PTR_TO_JSON(Mp4SeekStart, mp4SeekStart_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_TO_JSON(VideoSeekEnable, videoSeekEnable_);
    };
    friend void from_json(const Darabonba::Json& j, ListVideoProcessingsResponseBodyConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(FlvSeekEnd, flvSeekEnd_);
      DARABONBA_PTR_FROM_JSON(FlvSeekStart, flvSeekStart_);
      DARABONBA_PTR_FROM_JSON(FlvVideoSeekMode, flvVideoSeekMode_);
      DARABONBA_PTR_FROM_JSON(Mp4SeekEnd, mp4SeekEnd_);
      DARABONBA_PTR_FROM_JSON(Mp4SeekStart, mp4SeekStart_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_FROM_JSON(VideoSeekEnable, videoSeekEnable_);
    };
    ListVideoProcessingsResponseBodyConfigs() = default ;
    ListVideoProcessingsResponseBodyConfigs(const ListVideoProcessingsResponseBodyConfigs &) = default ;
    ListVideoProcessingsResponseBodyConfigs(ListVideoProcessingsResponseBodyConfigs &&) = default ;
    ListVideoProcessingsResponseBodyConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVideoProcessingsResponseBodyConfigs() = default ;
    ListVideoProcessingsResponseBodyConfigs& operator=(const ListVideoProcessingsResponseBodyConfigs &) = default ;
    ListVideoProcessingsResponseBodyConfigs& operator=(ListVideoProcessingsResponseBodyConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && return this->configType_ == nullptr && return this->flvSeekEnd_ == nullptr && return this->flvSeekStart_ == nullptr && return this->flvVideoSeekMode_ == nullptr && return this->mp4SeekEnd_ == nullptr
        && return this->mp4SeekStart_ == nullptr && return this->rule_ == nullptr && return this->ruleEnable_ == nullptr && return this->ruleName_ == nullptr && return this->sequence_ == nullptr
        && return this->siteVersion_ == nullptr && return this->videoSeekEnable_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline ListVideoProcessingsResponseBodyConfigs& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline ListVideoProcessingsResponseBodyConfigs& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // flvSeekEnd Field Functions 
    bool hasFlvSeekEnd() const { return this->flvSeekEnd_ != nullptr;};
    void deleteFlvSeekEnd() { this->flvSeekEnd_ = nullptr;};
    inline string flvSeekEnd() const { DARABONBA_PTR_GET_DEFAULT(flvSeekEnd_, "") };
    inline ListVideoProcessingsResponseBodyConfigs& setFlvSeekEnd(string flvSeekEnd) { DARABONBA_PTR_SET_VALUE(flvSeekEnd_, flvSeekEnd) };


    // flvSeekStart Field Functions 
    bool hasFlvSeekStart() const { return this->flvSeekStart_ != nullptr;};
    void deleteFlvSeekStart() { this->flvSeekStart_ = nullptr;};
    inline string flvSeekStart() const { DARABONBA_PTR_GET_DEFAULT(flvSeekStart_, "") };
    inline ListVideoProcessingsResponseBodyConfigs& setFlvSeekStart(string flvSeekStart) { DARABONBA_PTR_SET_VALUE(flvSeekStart_, flvSeekStart) };


    // flvVideoSeekMode Field Functions 
    bool hasFlvVideoSeekMode() const { return this->flvVideoSeekMode_ != nullptr;};
    void deleteFlvVideoSeekMode() { this->flvVideoSeekMode_ = nullptr;};
    inline string flvVideoSeekMode() const { DARABONBA_PTR_GET_DEFAULT(flvVideoSeekMode_, "") };
    inline ListVideoProcessingsResponseBodyConfigs& setFlvVideoSeekMode(string flvVideoSeekMode) { DARABONBA_PTR_SET_VALUE(flvVideoSeekMode_, flvVideoSeekMode) };


    // mp4SeekEnd Field Functions 
    bool hasMp4SeekEnd() const { return this->mp4SeekEnd_ != nullptr;};
    void deleteMp4SeekEnd() { this->mp4SeekEnd_ = nullptr;};
    inline string mp4SeekEnd() const { DARABONBA_PTR_GET_DEFAULT(mp4SeekEnd_, "") };
    inline ListVideoProcessingsResponseBodyConfigs& setMp4SeekEnd(string mp4SeekEnd) { DARABONBA_PTR_SET_VALUE(mp4SeekEnd_, mp4SeekEnd) };


    // mp4SeekStart Field Functions 
    bool hasMp4SeekStart() const { return this->mp4SeekStart_ != nullptr;};
    void deleteMp4SeekStart() { this->mp4SeekStart_ = nullptr;};
    inline string mp4SeekStart() const { DARABONBA_PTR_GET_DEFAULT(mp4SeekStart_, "") };
    inline ListVideoProcessingsResponseBodyConfigs& setMp4SeekStart(string mp4SeekStart) { DARABONBA_PTR_SET_VALUE(mp4SeekStart_, mp4SeekStart) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline ListVideoProcessingsResponseBodyConfigs& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string ruleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline ListVideoProcessingsResponseBodyConfigs& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListVideoProcessingsResponseBodyConfigs& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t sequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline ListVideoProcessingsResponseBodyConfigs& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t siteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline ListVideoProcessingsResponseBodyConfigs& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


    // videoSeekEnable Field Functions 
    bool hasVideoSeekEnable() const { return this->videoSeekEnable_ != nullptr;};
    void deleteVideoSeekEnable() { this->videoSeekEnable_ = nullptr;};
    inline string videoSeekEnable() const { DARABONBA_PTR_GET_DEFAULT(videoSeekEnable_, "") };
    inline ListVideoProcessingsResponseBodyConfigs& setVideoSeekEnable(string videoSeekEnable) { DARABONBA_PTR_SET_VALUE(videoSeekEnable_, videoSeekEnable) };


  protected:
    // The configuration ID.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // The type of the configuration. Valid values:
    // 
    // *   global: global configuration.
    // *   rule: rule configuration.
    std::shared_ptr<string> configType_ = nullptr;
    // The custom end parameter for FLV files.
    std::shared_ptr<string> flvSeekEnd_ = nullptr;
    // The custom start parameter for FLV files.
    std::shared_ptr<string> flvSeekStart_ = nullptr;
    // FLV seeking. Valid values:
    // 
    // *   by_byte: Seek by byte.
    // *   by_time: Seek by time.
    std::shared_ptr<string> flvVideoSeekMode_ = nullptr;
    // Customize the mp4 end parameter.
    std::shared_ptr<string> mp4SeekEnd_ = nullptr;
    // Customize the mp4 start parameter.
    std::shared_ptr<string> mp4SeekStart_ = nullptr;
    // The rule content.
    std::shared_ptr<string> rule_ = nullptr;
    // Indicates whether the rule is enabled. Valid values:
    // 
    // *   on
    // *   off
    std::shared_ptr<string> ruleEnable_ = nullptr;
    // The rule name.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The order in which the rule is executed. The smaller the value, the higher the priority.
    std::shared_ptr<int32_t> sequence_ = nullptr;
    // The version number of the website configurations.
    std::shared_ptr<int32_t> siteVersion_ = nullptr;
    // Video seeking. Valid values:
    // 
    // *   on
    // *   off
    std::shared_ptr<string> videoSeekEnable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
