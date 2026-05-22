// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOPROCESSINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOPROCESSINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetVideoProcessingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoProcessingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(FlvSeekEnd, flvSeekEnd_);
      DARABONBA_PTR_TO_JSON(FlvSeekStart, flvSeekStart_);
      DARABONBA_PTR_TO_JSON(FlvVideoSeekMode, flvVideoSeekMode_);
      DARABONBA_PTR_TO_JSON(Mp4SeekEnd, mp4SeekEnd_);
      DARABONBA_PTR_TO_JSON(Mp4SeekStart, mp4SeekStart_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_TO_JSON(VideoSeekEnable, videoSeekEnable_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoProcessingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(FlvSeekEnd, flvSeekEnd_);
      DARABONBA_PTR_FROM_JSON(FlvSeekStart, flvSeekStart_);
      DARABONBA_PTR_FROM_JSON(FlvVideoSeekMode, flvVideoSeekMode_);
      DARABONBA_PTR_FROM_JSON(Mp4SeekEnd, mp4SeekEnd_);
      DARABONBA_PTR_FROM_JSON(Mp4SeekStart, mp4SeekStart_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
      DARABONBA_PTR_FROM_JSON(VideoSeekEnable, videoSeekEnable_);
    };
    GetVideoProcessingResponseBody() = default ;
    GetVideoProcessingResponseBody(const GetVideoProcessingResponseBody &) = default ;
    GetVideoProcessingResponseBody(GetVideoProcessingResponseBody &&) = default ;
    GetVideoProcessingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoProcessingResponseBody() = default ;
    GetVideoProcessingResponseBody& operator=(const GetVideoProcessingResponseBody &) = default ;
    GetVideoProcessingResponseBody& operator=(GetVideoProcessingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && this->configType_ == nullptr && this->flvSeekEnd_ == nullptr && this->flvSeekStart_ == nullptr && this->flvVideoSeekMode_ == nullptr && this->mp4SeekEnd_ == nullptr
        && this->mp4SeekStart_ == nullptr && this->requestId_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr
        && this->sequence_ == nullptr && this->siteVersion_ == nullptr && this->videoSeekEnable_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline GetVideoProcessingResponseBody& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline GetVideoProcessingResponseBody& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // flvSeekEnd Field Functions 
    bool hasFlvSeekEnd() const { return this->flvSeekEnd_ != nullptr;};
    void deleteFlvSeekEnd() { this->flvSeekEnd_ = nullptr;};
    inline string getFlvSeekEnd() const { DARABONBA_PTR_GET_DEFAULT(flvSeekEnd_, "") };
    inline GetVideoProcessingResponseBody& setFlvSeekEnd(string flvSeekEnd) { DARABONBA_PTR_SET_VALUE(flvSeekEnd_, flvSeekEnd) };


    // flvSeekStart Field Functions 
    bool hasFlvSeekStart() const { return this->flvSeekStart_ != nullptr;};
    void deleteFlvSeekStart() { this->flvSeekStart_ = nullptr;};
    inline string getFlvSeekStart() const { DARABONBA_PTR_GET_DEFAULT(flvSeekStart_, "") };
    inline GetVideoProcessingResponseBody& setFlvSeekStart(string flvSeekStart) { DARABONBA_PTR_SET_VALUE(flvSeekStart_, flvSeekStart) };


    // flvVideoSeekMode Field Functions 
    bool hasFlvVideoSeekMode() const { return this->flvVideoSeekMode_ != nullptr;};
    void deleteFlvVideoSeekMode() { this->flvVideoSeekMode_ = nullptr;};
    inline string getFlvVideoSeekMode() const { DARABONBA_PTR_GET_DEFAULT(flvVideoSeekMode_, "") };
    inline GetVideoProcessingResponseBody& setFlvVideoSeekMode(string flvVideoSeekMode) { DARABONBA_PTR_SET_VALUE(flvVideoSeekMode_, flvVideoSeekMode) };


    // mp4SeekEnd Field Functions 
    bool hasMp4SeekEnd() const { return this->mp4SeekEnd_ != nullptr;};
    void deleteMp4SeekEnd() { this->mp4SeekEnd_ = nullptr;};
    inline string getMp4SeekEnd() const { DARABONBA_PTR_GET_DEFAULT(mp4SeekEnd_, "") };
    inline GetVideoProcessingResponseBody& setMp4SeekEnd(string mp4SeekEnd) { DARABONBA_PTR_SET_VALUE(mp4SeekEnd_, mp4SeekEnd) };


    // mp4SeekStart Field Functions 
    bool hasMp4SeekStart() const { return this->mp4SeekStart_ != nullptr;};
    void deleteMp4SeekStart() { this->mp4SeekStart_ = nullptr;};
    inline string getMp4SeekStart() const { DARABONBA_PTR_GET_DEFAULT(mp4SeekStart_, "") };
    inline GetVideoProcessingResponseBody& setMp4SeekStart(string mp4SeekStart) { DARABONBA_PTR_SET_VALUE(mp4SeekStart_, mp4SeekStart) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVideoProcessingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline GetVideoProcessingResponseBody& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline GetVideoProcessingResponseBody& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetVideoProcessingResponseBody& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline GetVideoProcessingResponseBody& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline GetVideoProcessingResponseBody& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


    // videoSeekEnable Field Functions 
    bool hasVideoSeekEnable() const { return this->videoSeekEnable_ != nullptr;};
    void deleteVideoSeekEnable() { this->videoSeekEnable_ = nullptr;};
    inline string getVideoSeekEnable() const { DARABONBA_PTR_GET_DEFAULT(videoSeekEnable_, "") };
    inline GetVideoProcessingResponseBody& setVideoSeekEnable(string videoSeekEnable) { DARABONBA_PTR_SET_VALUE(videoSeekEnable_, videoSeekEnable) };


  protected:
    // The configuration ID.
    shared_ptr<int64_t> configId_ {};
    // The type of the configuration. Valid values:
    // 
    // *   global: global configuration.
    // *   rule: rule configuration.
    shared_ptr<string> configType_ {};
    // The custom end parameter for FLV files.
    shared_ptr<string> flvSeekEnd_ {};
    // The custom start parameter for FLV files.
    shared_ptr<string> flvSeekStart_ {};
    // FLV Seeking Valid values:
    // 
    // *   by_byte: Seek by byte.
    // *   by_time: Seek by time.
    shared_ptr<string> flvVideoSeekMode_ {};
    // Customize the mp4 end parameter.
    shared_ptr<string> mp4SeekEnd_ {};
    // Customize the mp4 start parameter.
    shared_ptr<string> mp4SeekStart_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The rule content.
    shared_ptr<string> rule_ {};
    // Indicates whether the rule is enabled. Valid values:
    // 
    // *   on
    // *   off
    shared_ptr<string> ruleEnable_ {};
    // The name of the scaling rule.
    shared_ptr<string> ruleName_ {};
    // The order in which the rule is executed. A smaller value gives priority to the rule.
    shared_ptr<int32_t> sequence_ {};
    // The version number of the website configurations.
    shared_ptr<int32_t> siteVersion_ {};
    // Video seeking. Valid values:
    // 
    // *   on
    // *   off
    shared_ptr<string> videoSeekEnable_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
