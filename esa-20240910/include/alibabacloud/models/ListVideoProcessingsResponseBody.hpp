// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIDEOPROCESSINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVIDEOPROCESSINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListVideoProcessingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVideoProcessingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListVideoProcessingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListVideoProcessingsResponseBody() = default ;
    ListVideoProcessingsResponseBody(const ListVideoProcessingsResponseBody &) = default ;
    ListVideoProcessingsResponseBody(ListVideoProcessingsResponseBody &&) = default ;
    ListVideoProcessingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVideoProcessingsResponseBody() = default ;
    ListVideoProcessingsResponseBody& operator=(const ListVideoProcessingsResponseBody &) = default ;
    ListVideoProcessingsResponseBody& operator=(ListVideoProcessingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Configs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configs& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Configs& obj) { 
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
      Configs() = default ;
      Configs(const Configs &) = default ;
      Configs(Configs &&) = default ;
      Configs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Configs() = default ;
      Configs& operator=(const Configs &) = default ;
      Configs& operator=(Configs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->configId_ == nullptr
        && this->configType_ == nullptr && this->flvSeekEnd_ == nullptr && this->flvSeekStart_ == nullptr && this->flvVideoSeekMode_ == nullptr && this->mp4SeekEnd_ == nullptr
        && this->mp4SeekStart_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->sequence_ == nullptr
        && this->siteVersion_ == nullptr && this->videoSeekEnable_ == nullptr; };
      // configId Field Functions 
      bool hasConfigId() const { return this->configId_ != nullptr;};
      void deleteConfigId() { this->configId_ = nullptr;};
      inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
      inline Configs& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


      // configType Field Functions 
      bool hasConfigType() const { return this->configType_ != nullptr;};
      void deleteConfigType() { this->configType_ = nullptr;};
      inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
      inline Configs& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


      // flvSeekEnd Field Functions 
      bool hasFlvSeekEnd() const { return this->flvSeekEnd_ != nullptr;};
      void deleteFlvSeekEnd() { this->flvSeekEnd_ = nullptr;};
      inline string getFlvSeekEnd() const { DARABONBA_PTR_GET_DEFAULT(flvSeekEnd_, "") };
      inline Configs& setFlvSeekEnd(string flvSeekEnd) { DARABONBA_PTR_SET_VALUE(flvSeekEnd_, flvSeekEnd) };


      // flvSeekStart Field Functions 
      bool hasFlvSeekStart() const { return this->flvSeekStart_ != nullptr;};
      void deleteFlvSeekStart() { this->flvSeekStart_ = nullptr;};
      inline string getFlvSeekStart() const { DARABONBA_PTR_GET_DEFAULT(flvSeekStart_, "") };
      inline Configs& setFlvSeekStart(string flvSeekStart) { DARABONBA_PTR_SET_VALUE(flvSeekStart_, flvSeekStart) };


      // flvVideoSeekMode Field Functions 
      bool hasFlvVideoSeekMode() const { return this->flvVideoSeekMode_ != nullptr;};
      void deleteFlvVideoSeekMode() { this->flvVideoSeekMode_ = nullptr;};
      inline string getFlvVideoSeekMode() const { DARABONBA_PTR_GET_DEFAULT(flvVideoSeekMode_, "") };
      inline Configs& setFlvVideoSeekMode(string flvVideoSeekMode) { DARABONBA_PTR_SET_VALUE(flvVideoSeekMode_, flvVideoSeekMode) };


      // mp4SeekEnd Field Functions 
      bool hasMp4SeekEnd() const { return this->mp4SeekEnd_ != nullptr;};
      void deleteMp4SeekEnd() { this->mp4SeekEnd_ = nullptr;};
      inline string getMp4SeekEnd() const { DARABONBA_PTR_GET_DEFAULT(mp4SeekEnd_, "") };
      inline Configs& setMp4SeekEnd(string mp4SeekEnd) { DARABONBA_PTR_SET_VALUE(mp4SeekEnd_, mp4SeekEnd) };


      // mp4SeekStart Field Functions 
      bool hasMp4SeekStart() const { return this->mp4SeekStart_ != nullptr;};
      void deleteMp4SeekStart() { this->mp4SeekStart_ = nullptr;};
      inline string getMp4SeekStart() const { DARABONBA_PTR_GET_DEFAULT(mp4SeekStart_, "") };
      inline Configs& setMp4SeekStart(string mp4SeekStart) { DARABONBA_PTR_SET_VALUE(mp4SeekStart_, mp4SeekStart) };


      // rule Field Functions 
      bool hasRule() const { return this->rule_ != nullptr;};
      void deleteRule() { this->rule_ = nullptr;};
      inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
      inline Configs& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


      // ruleEnable Field Functions 
      bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
      void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
      inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
      inline Configs& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Configs& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // sequence Field Functions 
      bool hasSequence() const { return this->sequence_ != nullptr;};
      void deleteSequence() { this->sequence_ = nullptr;};
      inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
      inline Configs& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      // siteVersion Field Functions 
      bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
      void deleteSiteVersion() { this->siteVersion_ = nullptr;};
      inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
      inline Configs& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


      // videoSeekEnable Field Functions 
      bool hasVideoSeekEnable() const { return this->videoSeekEnable_ != nullptr;};
      void deleteVideoSeekEnable() { this->videoSeekEnable_ = nullptr;};
      inline string getVideoSeekEnable() const { DARABONBA_PTR_GET_DEFAULT(videoSeekEnable_, "") };
      inline Configs& setVideoSeekEnable(string videoSeekEnable) { DARABONBA_PTR_SET_VALUE(videoSeekEnable_, videoSeekEnable) };


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
      // FLV seeking. Valid values:
      // 
      // *   by_byte: Seek by byte.
      // *   by_time: Seek by time.
      shared_ptr<string> flvVideoSeekMode_ {};
      // Customize the mp4 end parameter.
      shared_ptr<string> mp4SeekEnd_ {};
      // Customize the mp4 start parameter.
      shared_ptr<string> mp4SeekStart_ {};
      // The rule content.
      shared_ptr<string> rule_ {};
      // Indicates whether the rule is enabled. Valid values:
      // 
      // *   on
      // *   off
      shared_ptr<string> ruleEnable_ {};
      // The rule name.
      shared_ptr<string> ruleName_ {};
      // The order in which the rule is executed. The smaller the value, the higher the priority.
      shared_ptr<int32_t> sequence_ {};
      // The version number of the website configurations.
      shared_ptr<int32_t> siteVersion_ {};
      // Video seeking. Valid values:
      // 
      // *   on
      // *   off
      shared_ptr<string> videoSeekEnable_ {};
    };

    virtual bool empty() const override { return this->configs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<ListVideoProcessingsResponseBody::Configs> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, vector<ListVideoProcessingsResponseBody::Configs>) };
    inline vector<ListVideoProcessingsResponseBody::Configs> getConfigs() { DARABONBA_PTR_GET(configs_, vector<ListVideoProcessingsResponseBody::Configs>) };
    inline ListVideoProcessingsResponseBody& setConfigs(const vector<ListVideoProcessingsResponseBody::Configs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline ListVideoProcessingsResponseBody& setConfigs(vector<ListVideoProcessingsResponseBody::Configs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListVideoProcessingsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListVideoProcessingsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVideoProcessingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListVideoProcessingsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListVideoProcessingsResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The configurations.
    shared_ptr<vector<ListVideoProcessingsResponseBody::Configs>> configs_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
