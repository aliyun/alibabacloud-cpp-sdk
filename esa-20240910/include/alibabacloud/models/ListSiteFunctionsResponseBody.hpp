// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSITEFUNCTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSITEFUNCTIONSRESPONSEBODY_HPP_
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
  class ListSiteFunctionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSiteFunctionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListSiteFunctionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListSiteFunctionsResponseBody() = default ;
    ListSiteFunctionsResponseBody(const ListSiteFunctionsResponseBody &) = default ;
    ListSiteFunctionsResponseBody(ListSiteFunctionsResponseBody &&) = default ;
    ListSiteFunctionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSiteFunctionsResponseBody() = default ;
    ListSiteFunctionsResponseBody& operator=(const ListSiteFunctionsResponseBody &) = default ;
    ListSiteFunctionsResponseBody& operator=(ListSiteFunctionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Configs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configs& obj) { 
        DARABONBA_PTR_TO_JSON(CacheReserve, cacheReserve_);
        DARABONBA_PTR_TO_JSON(CacheRules, cacheRules_);
        DARABONBA_PTR_TO_JSON(CacheTags, cacheTags_);
        DARABONBA_PTR_TO_JSON(CnameFlattening, cnameFlattening_);
        DARABONBA_PTR_TO_JSON(CompressionRules, compressionRules_);
        DARABONBA_PTR_TO_JSON(CrossBorderOptimization, crossBorderOptimization_);
        DARABONBA_PTR_TO_JSON(CustomResponseCode, customResponseCode_);
        DARABONBA_PTR_TO_JSON(DevelopmentMode, developmentMode_);
        DARABONBA_PTR_TO_JSON(ErrorPagesRedirects, errorPagesRedirects_);
        DARABONBA_PTR_TO_JSON(HttpIncomingRequestHeaderModificationRules, httpIncomingRequestHeaderModificationRules_);
        DARABONBA_PTR_TO_JSON(HttpIncomingResponseHeaderModificationRules, httpIncomingResponseHeaderModificationRules_);
        DARABONBA_PTR_TO_JSON(HttpRequestHeaderModificationRules, httpRequestHeaderModificationRules_);
        DARABONBA_PTR_TO_JSON(HttpResponseHeaderModificationRules, httpResponseHeaderModificationRules_);
        DARABONBA_PTR_TO_JSON(HttpsApplicationConfiguration, httpsApplicationConfiguration_);
        DARABONBA_PTR_TO_JSON(HttpsBasicConfiguration, httpsBasicConfiguration_);
        DARABONBA_PTR_TO_JSON(ImageTransform, imageTransform_);
        DARABONBA_PTR_TO_JSON(Ipv6, ipv6_);
        DARABONBA_PTR_TO_JSON(ManagedTransforms, managedTransforms_);
        DARABONBA_PTR_TO_JSON(NetworkOptimization, networkOptimization_);
        DARABONBA_PTR_TO_JSON(OriginRules, originRules_);
        DARABONBA_PTR_TO_JSON(RedirectRules, redirectRules_);
        DARABONBA_PTR_TO_JSON(RewriteUrlRules, rewriteUrlRules_);
        DARABONBA_PTR_TO_JSON(SeoBypass, seoBypass_);
        DARABONBA_PTR_TO_JSON(SiteNameExclusive, siteNameExclusive_);
        DARABONBA_PTR_TO_JSON(SitePause, sitePause_);
        DARABONBA_PTR_TO_JSON(TieredCache, tieredCache_);
        DARABONBA_PTR_TO_JSON(VideoProcessing, videoProcessing_);
      };
      friend void from_json(const Darabonba::Json& j, Configs& obj) { 
        DARABONBA_PTR_FROM_JSON(CacheReserve, cacheReserve_);
        DARABONBA_PTR_FROM_JSON(CacheRules, cacheRules_);
        DARABONBA_PTR_FROM_JSON(CacheTags, cacheTags_);
        DARABONBA_PTR_FROM_JSON(CnameFlattening, cnameFlattening_);
        DARABONBA_PTR_FROM_JSON(CompressionRules, compressionRules_);
        DARABONBA_PTR_FROM_JSON(CrossBorderOptimization, crossBorderOptimization_);
        DARABONBA_PTR_FROM_JSON(CustomResponseCode, customResponseCode_);
        DARABONBA_PTR_FROM_JSON(DevelopmentMode, developmentMode_);
        DARABONBA_PTR_FROM_JSON(ErrorPagesRedirects, errorPagesRedirects_);
        DARABONBA_PTR_FROM_JSON(HttpIncomingRequestHeaderModificationRules, httpIncomingRequestHeaderModificationRules_);
        DARABONBA_PTR_FROM_JSON(HttpIncomingResponseHeaderModificationRules, httpIncomingResponseHeaderModificationRules_);
        DARABONBA_PTR_FROM_JSON(HttpRequestHeaderModificationRules, httpRequestHeaderModificationRules_);
        DARABONBA_PTR_FROM_JSON(HttpResponseHeaderModificationRules, httpResponseHeaderModificationRules_);
        DARABONBA_PTR_FROM_JSON(HttpsApplicationConfiguration, httpsApplicationConfiguration_);
        DARABONBA_PTR_FROM_JSON(HttpsBasicConfiguration, httpsBasicConfiguration_);
        DARABONBA_PTR_FROM_JSON(ImageTransform, imageTransform_);
        DARABONBA_PTR_FROM_JSON(Ipv6, ipv6_);
        DARABONBA_PTR_FROM_JSON(ManagedTransforms, managedTransforms_);
        DARABONBA_PTR_FROM_JSON(NetworkOptimization, networkOptimization_);
        DARABONBA_PTR_FROM_JSON(OriginRules, originRules_);
        DARABONBA_PTR_FROM_JSON(RedirectRules, redirectRules_);
        DARABONBA_PTR_FROM_JSON(RewriteUrlRules, rewriteUrlRules_);
        DARABONBA_PTR_FROM_JSON(SeoBypass, seoBypass_);
        DARABONBA_PTR_FROM_JSON(SiteNameExclusive, siteNameExclusive_);
        DARABONBA_PTR_FROM_JSON(SitePause, sitePause_);
        DARABONBA_PTR_FROM_JSON(TieredCache, tieredCache_);
        DARABONBA_PTR_FROM_JSON(VideoProcessing, videoProcessing_);
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
      class VideoProcessing : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VideoProcessing& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(FlvSeekEnd, flvSeekEnd_);
          DARABONBA_PTR_TO_JSON(FlvSeekStart, flvSeekStart_);
          DARABONBA_PTR_TO_JSON(FlvVideoSeekMode, flvVideoSeekMode_);
          DARABONBA_PTR_TO_JSON(Mp4SeekEnd, mp4SeekEnd_);
          DARABONBA_PTR_TO_JSON(Mp4SeekStart, mp4SeekStart_);
          DARABONBA_PTR_TO_JSON(Rule, rule_);
          DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
          DARABONBA_PTR_TO_JSON(VideoSeekEnable, videoSeekEnable_);
        };
        friend void from_json(const Darabonba::Json& j, VideoProcessing& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(FlvSeekEnd, flvSeekEnd_);
          DARABONBA_PTR_FROM_JSON(FlvSeekStart, flvSeekStart_);
          DARABONBA_PTR_FROM_JSON(FlvVideoSeekMode, flvVideoSeekMode_);
          DARABONBA_PTR_FROM_JSON(Mp4SeekEnd, mp4SeekEnd_);
          DARABONBA_PTR_FROM_JSON(Mp4SeekStart, mp4SeekStart_);
          DARABONBA_PTR_FROM_JSON(Rule, rule_);
          DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
          DARABONBA_PTR_FROM_JSON(VideoSeekEnable, videoSeekEnable_);
        };
        VideoProcessing() = default ;
        VideoProcessing(const VideoProcessing &) = default ;
        VideoProcessing(VideoProcessing &&) = default ;
        VideoProcessing(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VideoProcessing() = default ;
        VideoProcessing& operator=(const VideoProcessing &) = default ;
        VideoProcessing& operator=(VideoProcessing &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configId_ == nullptr
        && this->flvSeekEnd_ == nullptr && this->flvSeekStart_ == nullptr && this->flvVideoSeekMode_ == nullptr && this->mp4SeekEnd_ == nullptr && this->mp4SeekStart_ == nullptr
        && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->sequence_ == nullptr && this->videoSeekEnable_ == nullptr; };
        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline VideoProcessing& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // flvSeekEnd Field Functions 
        bool hasFlvSeekEnd() const { return this->flvSeekEnd_ != nullptr;};
        void deleteFlvSeekEnd() { this->flvSeekEnd_ = nullptr;};
        inline string getFlvSeekEnd() const { DARABONBA_PTR_GET_DEFAULT(flvSeekEnd_, "") };
        inline VideoProcessing& setFlvSeekEnd(string flvSeekEnd) { DARABONBA_PTR_SET_VALUE(flvSeekEnd_, flvSeekEnd) };


        // flvSeekStart Field Functions 
        bool hasFlvSeekStart() const { return this->flvSeekStart_ != nullptr;};
        void deleteFlvSeekStart() { this->flvSeekStart_ = nullptr;};
        inline string getFlvSeekStart() const { DARABONBA_PTR_GET_DEFAULT(flvSeekStart_, "") };
        inline VideoProcessing& setFlvSeekStart(string flvSeekStart) { DARABONBA_PTR_SET_VALUE(flvSeekStart_, flvSeekStart) };


        // flvVideoSeekMode Field Functions 
        bool hasFlvVideoSeekMode() const { return this->flvVideoSeekMode_ != nullptr;};
        void deleteFlvVideoSeekMode() { this->flvVideoSeekMode_ = nullptr;};
        inline string getFlvVideoSeekMode() const { DARABONBA_PTR_GET_DEFAULT(flvVideoSeekMode_, "") };
        inline VideoProcessing& setFlvVideoSeekMode(string flvVideoSeekMode) { DARABONBA_PTR_SET_VALUE(flvVideoSeekMode_, flvVideoSeekMode) };


        // mp4SeekEnd Field Functions 
        bool hasMp4SeekEnd() const { return this->mp4SeekEnd_ != nullptr;};
        void deleteMp4SeekEnd() { this->mp4SeekEnd_ = nullptr;};
        inline string getMp4SeekEnd() const { DARABONBA_PTR_GET_DEFAULT(mp4SeekEnd_, "") };
        inline VideoProcessing& setMp4SeekEnd(string mp4SeekEnd) { DARABONBA_PTR_SET_VALUE(mp4SeekEnd_, mp4SeekEnd) };


        // mp4SeekStart Field Functions 
        bool hasMp4SeekStart() const { return this->mp4SeekStart_ != nullptr;};
        void deleteMp4SeekStart() { this->mp4SeekStart_ = nullptr;};
        inline string getMp4SeekStart() const { DARABONBA_PTR_GET_DEFAULT(mp4SeekStart_, "") };
        inline VideoProcessing& setMp4SeekStart(string mp4SeekStart) { DARABONBA_PTR_SET_VALUE(mp4SeekStart_, mp4SeekStart) };


        // rule Field Functions 
        bool hasRule() const { return this->rule_ != nullptr;};
        void deleteRule() { this->rule_ = nullptr;};
        inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
        inline VideoProcessing& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


        // ruleEnable Field Functions 
        bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
        void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
        inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
        inline VideoProcessing& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline VideoProcessing& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
        inline VideoProcessing& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


        // videoSeekEnable Field Functions 
        bool hasVideoSeekEnable() const { return this->videoSeekEnable_ != nullptr;};
        void deleteVideoSeekEnable() { this->videoSeekEnable_ = nullptr;};
        inline string getVideoSeekEnable() const { DARABONBA_PTR_GET_DEFAULT(videoSeekEnable_, "") };
        inline VideoProcessing& setVideoSeekEnable(string videoSeekEnable) { DARABONBA_PTR_SET_VALUE(videoSeekEnable_, videoSeekEnable) };


      protected:
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // The custom FLV end parameter.
        shared_ptr<string> flvSeekEnd_ {};
        // The custom FLV start parameter.
        shared_ptr<string> flvSeekStart_ {};
        // The FLV seeking mode. Valid values:
        // - by_byte: seeks by byte.
        // - by_time: seeks by time.
        shared_ptr<string> flvVideoSeekMode_ {};
        // The custom MP4 end parameter.
        shared_ptr<string> mp4SeekEnd_ {};
        // The custom MP4 start parameter.
        shared_ptr<string> mp4SeekStart_ {};
        // The rule content.
        shared_ptr<string> rule_ {};
        // The rule switch. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> ruleEnable_ {};
        // The rule name.
        shared_ptr<string> ruleName_ {};
        // The rule execution order.
        shared_ptr<string> sequence_ {};
        // The video seeking switch. Valid values:
        // 
        // - on: enabled.
        // 
        // - off: disabled.
        shared_ptr<string> videoSeekEnable_ {};
      };

      class TieredCache : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TieredCache& obj) { 
          DARABONBA_PTR_TO_JSON(CacheArchitectureMode, cacheArchitectureMode_);
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        };
        friend void from_json(const Darabonba::Json& j, TieredCache& obj) { 
          DARABONBA_PTR_FROM_JSON(CacheArchitectureMode, cacheArchitectureMode_);
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        };
        TieredCache() = default ;
        TieredCache(const TieredCache &) = default ;
        TieredCache(TieredCache &&) = default ;
        TieredCache(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TieredCache() = default ;
        TieredCache& operator=(const TieredCache &) = default ;
        TieredCache& operator=(TieredCache &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cacheArchitectureMode_ == nullptr
        && this->configId_ == nullptr && this->sequence_ == nullptr; };
        // cacheArchitectureMode Field Functions 
        bool hasCacheArchitectureMode() const { return this->cacheArchitectureMode_ != nullptr;};
        void deleteCacheArchitectureMode() { this->cacheArchitectureMode_ = nullptr;};
        inline string getCacheArchitectureMode() const { DARABONBA_PTR_GET_DEFAULT(cacheArchitectureMode_, "") };
        inline TieredCache& setCacheArchitectureMode(string cacheArchitectureMode) { DARABONBA_PTR_SET_VALUE(cacheArchitectureMode_, cacheArchitectureMode) };


        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline TieredCache& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
        inline TieredCache& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      protected:
        // The tiered cache architecture mode. Valid values:
        // - edge: edge cache layer.
        // - edge_smart: edge cache layer + smart cache layer.
        // - edge_regional: edge cache layer + regional cache layer.
        // - edge_regional_smart: edge cache layer + regional cache layer + smart cache layer.
        shared_ptr<string> cacheArchitectureMode_ {};
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // The rule execution order.
        shared_ptr<string> sequence_ {};
      };

      class SitePause : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SitePause& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(Paused, paused_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        };
        friend void from_json(const Darabonba::Json& j, SitePause& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(Paused, paused_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        };
        SitePause() = default ;
        SitePause(const SitePause &) = default ;
        SitePause(SitePause &&) = default ;
        SitePause(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SitePause() = default ;
        SitePause& operator=(const SitePause &) = default ;
        SitePause& operator=(SitePause &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configId_ == nullptr
        && this->paused_ == nullptr && this->sequence_ == nullptr; };
        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline SitePause& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // paused Field Functions 
        bool hasPaused() const { return this->paused_ != nullptr;};
        void deletePaused() { this->paused_ = nullptr;};
        inline string getPaused() const { DARABONBA_PTR_GET_DEFAULT(paused_, "") };
        inline SitePause& setPaused(string paused) { DARABONBA_PTR_SET_VALUE(paused_, paused) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
        inline SitePause& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      protected:
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // Temporarily pauses the proxy acceleration feature for the entire site. When enabled, all DNS records directly return record values to clients. Valid values:
        // - true: site acceleration is paused.
        // - false: site acceleration is active.
        shared_ptr<string> paused_ {};
        // The rule execution order.
        shared_ptr<string> sequence_ {};
      };

      class SiteNameExclusive : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SiteNameExclusive& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        };
        friend void from_json(const Darabonba::Json& j, SiteNameExclusive& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        };
        SiteNameExclusive() = default ;
        SiteNameExclusive(const SiteNameExclusive &) = default ;
        SiteNameExclusive(SiteNameExclusive &&) = default ;
        SiteNameExclusive(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SiteNameExclusive() = default ;
        SiteNameExclusive& operator=(const SiteNameExclusive &) = default ;
        SiteNameExclusive& operator=(SiteNameExclusive &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configId_ == nullptr
        && this->enable_ == nullptr && this->sequence_ == nullptr; };
        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline SiteNameExclusive& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
        inline SiteNameExclusive& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
        inline SiteNameExclusive& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      protected:
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // The feature switch. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> enable_ {};
        // The rule execution order.
        shared_ptr<string> sequence_ {};
      };

      class SeoBypass : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SeoBypass& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        };
        friend void from_json(const Darabonba::Json& j, SeoBypass& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        };
        SeoBypass() = default ;
        SeoBypass(const SeoBypass &) = default ;
        SeoBypass(SeoBypass &&) = default ;
        SeoBypass(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SeoBypass() = default ;
        SeoBypass& operator=(const SeoBypass &) = default ;
        SeoBypass& operator=(SeoBypass &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configId_ == nullptr
        && this->enable_ == nullptr && this->sequence_ == nullptr; };
        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline SeoBypass& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
        inline SeoBypass& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
        inline SeoBypass& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      protected:
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // The feature switch. Disabled by default. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> enable_ {};
        // The rule execution order.
        shared_ptr<string> sequence_ {};
      };

      class RewriteUrlRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RewriteUrlRules& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(QueryString, queryString_);
          DARABONBA_PTR_TO_JSON(RewriteQueryStringType, rewriteQueryStringType_);
          DARABONBA_PTR_TO_JSON(RewriteUriType, rewriteUriType_);
          DARABONBA_PTR_TO_JSON(Rule, rule_);
          DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
          DARABONBA_PTR_TO_JSON(Uri, uri_);
        };
        friend void from_json(const Darabonba::Json& j, RewriteUrlRules& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(QueryString, queryString_);
          DARABONBA_PTR_FROM_JSON(RewriteQueryStringType, rewriteQueryStringType_);
          DARABONBA_PTR_FROM_JSON(RewriteUriType, rewriteUriType_);
          DARABONBA_PTR_FROM_JSON(Rule, rule_);
          DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
          DARABONBA_PTR_FROM_JSON(Uri, uri_);
        };
        RewriteUrlRules() = default ;
        RewriteUrlRules(const RewriteUrlRules &) = default ;
        RewriteUrlRules(RewriteUrlRules &&) = default ;
        RewriteUrlRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RewriteUrlRules() = default ;
        RewriteUrlRules& operator=(const RewriteUrlRules &) = default ;
        RewriteUrlRules& operator=(RewriteUrlRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configId_ == nullptr
        && this->queryString_ == nullptr && this->rewriteQueryStringType_ == nullptr && this->rewriteUriType_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr
        && this->ruleName_ == nullptr && this->sequence_ == nullptr && this->uri_ == nullptr; };
        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline RewriteUrlRules& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // queryString Field Functions 
        bool hasQueryString() const { return this->queryString_ != nullptr;};
        void deleteQueryString() { this->queryString_ = nullptr;};
        inline string getQueryString() const { DARABONBA_PTR_GET_DEFAULT(queryString_, "") };
        inline RewriteUrlRules& setQueryString(string queryString) { DARABONBA_PTR_SET_VALUE(queryString_, queryString) };


        // rewriteQueryStringType Field Functions 
        bool hasRewriteQueryStringType() const { return this->rewriteQueryStringType_ != nullptr;};
        void deleteRewriteQueryStringType() { this->rewriteQueryStringType_ = nullptr;};
        inline string getRewriteQueryStringType() const { DARABONBA_PTR_GET_DEFAULT(rewriteQueryStringType_, "") };
        inline RewriteUrlRules& setRewriteQueryStringType(string rewriteQueryStringType) { DARABONBA_PTR_SET_VALUE(rewriteQueryStringType_, rewriteQueryStringType) };


        // rewriteUriType Field Functions 
        bool hasRewriteUriType() const { return this->rewriteUriType_ != nullptr;};
        void deleteRewriteUriType() { this->rewriteUriType_ = nullptr;};
        inline string getRewriteUriType() const { DARABONBA_PTR_GET_DEFAULT(rewriteUriType_, "") };
        inline RewriteUrlRules& setRewriteUriType(string rewriteUriType) { DARABONBA_PTR_SET_VALUE(rewriteUriType_, rewriteUriType) };


        // rule Field Functions 
        bool hasRule() const { return this->rule_ != nullptr;};
        void deleteRule() { this->rule_ = nullptr;};
        inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
        inline RewriteUrlRules& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


        // ruleEnable Field Functions 
        bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
        void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
        inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
        inline RewriteUrlRules& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline RewriteUrlRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
        inline RewriteUrlRules& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


        // uri Field Functions 
        bool hasUri() const { return this->uri_ != nullptr;};
        void deleteUri() { this->uri_ = nullptr;};
        inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
        inline RewriteUrlRules& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


      protected:
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // The query string after rewriting.
        shared_ptr<string> queryString_ {};
        // The query string rewrite type. Valid values:
        // - static: static mode.
        shared_ptr<string> rewriteQueryStringType_ {};
        // The path rewrite type. Valid values:
        // - static: static mode.
        shared_ptr<string> rewriteUriType_ {};
        // The rule content.
        shared_ptr<string> rule_ {};
        // The rule switch. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> ruleEnable_ {};
        // The rule name.
        shared_ptr<string> ruleName_ {};
        // The rule execution order.
        shared_ptr<string> sequence_ {};
        // The target URI after rewriting.
        shared_ptr<string> uri_ {};
      };

      class RedirectRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RedirectRules& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(ReserveQueryString, reserveQueryString_);
          DARABONBA_PTR_TO_JSON(Rule, rule_);
          DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
          DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
          DARABONBA_PTR_TO_JSON(TargetUrl, targetUrl_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, RedirectRules& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(ReserveQueryString, reserveQueryString_);
          DARABONBA_PTR_FROM_JSON(Rule, rule_);
          DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
          DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
          DARABONBA_PTR_FROM_JSON(TargetUrl, targetUrl_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        RedirectRules() = default ;
        RedirectRules(const RedirectRules &) = default ;
        RedirectRules(RedirectRules &&) = default ;
        RedirectRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RedirectRules() = default ;
        RedirectRules& operator=(const RedirectRules &) = default ;
        RedirectRules& operator=(RedirectRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configId_ == nullptr
        && this->reserveQueryString_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->sequence_ == nullptr
        && this->statusCode_ == nullptr && this->targetUrl_ == nullptr && this->type_ == nullptr; };
        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline RedirectRules& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // reserveQueryString Field Functions 
        bool hasReserveQueryString() const { return this->reserveQueryString_ != nullptr;};
        void deleteReserveQueryString() { this->reserveQueryString_ = nullptr;};
        inline string getReserveQueryString() const { DARABONBA_PTR_GET_DEFAULT(reserveQueryString_, "") };
        inline RedirectRules& setReserveQueryString(string reserveQueryString) { DARABONBA_PTR_SET_VALUE(reserveQueryString_, reserveQueryString) };


        // rule Field Functions 
        bool hasRule() const { return this->rule_ != nullptr;};
        void deleteRule() { this->rule_ = nullptr;};
        inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
        inline RedirectRules& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


        // ruleEnable Field Functions 
        bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
        void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
        inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
        inline RedirectRules& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline RedirectRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
        inline RedirectRules& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


        // statusCode Field Functions 
        bool hasStatusCode() const { return this->statusCode_ != nullptr;};
        void deleteStatusCode() { this->statusCode_ = nullptr;};
        inline string getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
        inline RedirectRules& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


        // targetUrl Field Functions 
        bool hasTargetUrl() const { return this->targetUrl_ != nullptr;};
        void deleteTargetUrl() { this->targetUrl_ = nullptr;};
        inline string getTargetUrl() const { DARABONBA_PTR_GET_DEFAULT(targetUrl_, "") };
        inline RedirectRules& setTargetUrl(string targetUrl) { DARABONBA_PTR_SET_VALUE(targetUrl_, targetUrl) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline RedirectRules& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // Specifies whether to preserve the query string. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> reserveQueryString_ {};
        // The rule content.
        shared_ptr<string> rule_ {};
        // The rule switch. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> ruleEnable_ {};
        // The rule name.
        shared_ptr<string> ruleName_ {};
        // The rule execution order.
        shared_ptr<string> sequence_ {};
        // The response status code used by the edge node when responding with the redirect address to the client. Valid values:
        // - 301
        // - 302
        // - 303
        // - 307
        // - 308
        shared_ptr<string> statusCode_ {};
        // The target URL after redirection.
        shared_ptr<string> targetUrl_ {};
        // The redirect type. Valid values:
        // - static: static mode.
        shared_ptr<string> type_ {};
      };

      class OriginRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OriginRules& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(DnsRecord, dnsRecord_);
          DARABONBA_PTR_TO_JSON(OriginHost, originHost_);
          DARABONBA_PTR_TO_JSON(OriginHttpPort, originHttpPort_);
          DARABONBA_PTR_TO_JSON(OriginHttpsPort, originHttpsPort_);
          DARABONBA_PTR_TO_JSON(OriginMtls, originMtls_);
          DARABONBA_PTR_TO_JSON(OriginReadTimeout, originReadTimeout_);
          DARABONBA_PTR_TO_JSON(OriginScheme, originScheme_);
          DARABONBA_PTR_TO_JSON(OriginSni, originSni_);
          DARABONBA_PTR_TO_JSON(OriginVerify, originVerify_);
          DARABONBA_PTR_TO_JSON(Range, range_);
          DARABONBA_PTR_TO_JSON(RangeChunkSize, rangeChunkSize_);
          DARABONBA_PTR_TO_JSON(Rule, rule_);
          DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        };
        friend void from_json(const Darabonba::Json& j, OriginRules& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(DnsRecord, dnsRecord_);
          DARABONBA_PTR_FROM_JSON(OriginHost, originHost_);
          DARABONBA_PTR_FROM_JSON(OriginHttpPort, originHttpPort_);
          DARABONBA_PTR_FROM_JSON(OriginHttpsPort, originHttpsPort_);
          DARABONBA_PTR_FROM_JSON(OriginMtls, originMtls_);
          DARABONBA_PTR_FROM_JSON(OriginReadTimeout, originReadTimeout_);
          DARABONBA_PTR_FROM_JSON(OriginScheme, originScheme_);
          DARABONBA_PTR_FROM_JSON(OriginSni, originSni_);
          DARABONBA_PTR_FROM_JSON(OriginVerify, originVerify_);
          DARABONBA_PTR_FROM_JSON(Range, range_);
          DARABONBA_PTR_FROM_JSON(RangeChunkSize, rangeChunkSize_);
          DARABONBA_PTR_FROM_JSON(Rule, rule_);
          DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        };
        OriginRules() = default ;
        OriginRules(const OriginRules &) = default ;
        OriginRules(OriginRules &&) = default ;
        OriginRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OriginRules() = default ;
        OriginRules& operator=(const OriginRules &) = default ;
        OriginRules& operator=(OriginRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configId_ == nullptr
        && this->dnsRecord_ == nullptr && this->originHost_ == nullptr && this->originHttpPort_ == nullptr && this->originHttpsPort_ == nullptr && this->originMtls_ == nullptr
        && this->originReadTimeout_ == nullptr && this->originScheme_ == nullptr && this->originSni_ == nullptr && this->originVerify_ == nullptr && this->range_ == nullptr
        && this->rangeChunkSize_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->sequence_ == nullptr; };
        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline OriginRules& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // dnsRecord Field Functions 
        bool hasDnsRecord() const { return this->dnsRecord_ != nullptr;};
        void deleteDnsRecord() { this->dnsRecord_ = nullptr;};
        inline string getDnsRecord() const { DARABONBA_PTR_GET_DEFAULT(dnsRecord_, "") };
        inline OriginRules& setDnsRecord(string dnsRecord) { DARABONBA_PTR_SET_VALUE(dnsRecord_, dnsRecord) };


        // originHost Field Functions 
        bool hasOriginHost() const { return this->originHost_ != nullptr;};
        void deleteOriginHost() { this->originHost_ = nullptr;};
        inline string getOriginHost() const { DARABONBA_PTR_GET_DEFAULT(originHost_, "") };
        inline OriginRules& setOriginHost(string originHost) { DARABONBA_PTR_SET_VALUE(originHost_, originHost) };


        // originHttpPort Field Functions 
        bool hasOriginHttpPort() const { return this->originHttpPort_ != nullptr;};
        void deleteOriginHttpPort() { this->originHttpPort_ = nullptr;};
        inline string getOriginHttpPort() const { DARABONBA_PTR_GET_DEFAULT(originHttpPort_, "") };
        inline OriginRules& setOriginHttpPort(string originHttpPort) { DARABONBA_PTR_SET_VALUE(originHttpPort_, originHttpPort) };


        // originHttpsPort Field Functions 
        bool hasOriginHttpsPort() const { return this->originHttpsPort_ != nullptr;};
        void deleteOriginHttpsPort() { this->originHttpsPort_ = nullptr;};
        inline string getOriginHttpsPort() const { DARABONBA_PTR_GET_DEFAULT(originHttpsPort_, "") };
        inline OriginRules& setOriginHttpsPort(string originHttpsPort) { DARABONBA_PTR_SET_VALUE(originHttpsPort_, originHttpsPort) };


        // originMtls Field Functions 
        bool hasOriginMtls() const { return this->originMtls_ != nullptr;};
        void deleteOriginMtls() { this->originMtls_ = nullptr;};
        inline string getOriginMtls() const { DARABONBA_PTR_GET_DEFAULT(originMtls_, "") };
        inline OriginRules& setOriginMtls(string originMtls) { DARABONBA_PTR_SET_VALUE(originMtls_, originMtls) };


        // originReadTimeout Field Functions 
        bool hasOriginReadTimeout() const { return this->originReadTimeout_ != nullptr;};
        void deleteOriginReadTimeout() { this->originReadTimeout_ = nullptr;};
        inline string getOriginReadTimeout() const { DARABONBA_PTR_GET_DEFAULT(originReadTimeout_, "") };
        inline OriginRules& setOriginReadTimeout(string originReadTimeout) { DARABONBA_PTR_SET_VALUE(originReadTimeout_, originReadTimeout) };


        // originScheme Field Functions 
        bool hasOriginScheme() const { return this->originScheme_ != nullptr;};
        void deleteOriginScheme() { this->originScheme_ = nullptr;};
        inline string getOriginScheme() const { DARABONBA_PTR_GET_DEFAULT(originScheme_, "") };
        inline OriginRules& setOriginScheme(string originScheme) { DARABONBA_PTR_SET_VALUE(originScheme_, originScheme) };


        // originSni Field Functions 
        bool hasOriginSni() const { return this->originSni_ != nullptr;};
        void deleteOriginSni() { this->originSni_ = nullptr;};
        inline string getOriginSni() const { DARABONBA_PTR_GET_DEFAULT(originSni_, "") };
        inline OriginRules& setOriginSni(string originSni) { DARABONBA_PTR_SET_VALUE(originSni_, originSni) };


        // originVerify Field Functions 
        bool hasOriginVerify() const { return this->originVerify_ != nullptr;};
        void deleteOriginVerify() { this->originVerify_ = nullptr;};
        inline string getOriginVerify() const { DARABONBA_PTR_GET_DEFAULT(originVerify_, "") };
        inline OriginRules& setOriginVerify(string originVerify) { DARABONBA_PTR_SET_VALUE(originVerify_, originVerify) };


        // range Field Functions 
        bool hasRange() const { return this->range_ != nullptr;};
        void deleteRange() { this->range_ = nullptr;};
        inline string getRange() const { DARABONBA_PTR_GET_DEFAULT(range_, "") };
        inline OriginRules& setRange(string range) { DARABONBA_PTR_SET_VALUE(range_, range) };


        // rangeChunkSize Field Functions 
        bool hasRangeChunkSize() const { return this->rangeChunkSize_ != nullptr;};
        void deleteRangeChunkSize() { this->rangeChunkSize_ = nullptr;};
        inline string getRangeChunkSize() const { DARABONBA_PTR_GET_DEFAULT(rangeChunkSize_, "") };
        inline OriginRules& setRangeChunkSize(string rangeChunkSize) { DARABONBA_PTR_SET_VALUE(rangeChunkSize_, rangeChunkSize) };


        // rule Field Functions 
        bool hasRule() const { return this->rule_ != nullptr;};
        void deleteRule() { this->rule_ = nullptr;};
        inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
        inline OriginRules& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


        // ruleEnable Field Functions 
        bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
        void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
        inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
        inline OriginRules& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline OriginRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
        inline OriginRules& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      protected:
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // The overridden DNS resolution record for back-to-origin requests.
        shared_ptr<string> dnsRecord_ {};
        // The HOST header carried in the back-to-origin request.
        shared_ptr<string> originHost_ {};
        // The origin server port used when fetching content over HTTP.
        shared_ptr<string> originHttpPort_ {};
        // The origin server port used when fetching content over HTTPS.
        shared_ptr<string> originHttpsPort_ {};
        // Specifies whether to enable mTLS for back-to-origin. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> originMtls_ {};
        // The origin read timeout, in seconds.
        shared_ptr<string> originReadTimeout_ {};
        // The protocol used for back-to-origin requests. Valid values:
        // - http: uses HTTP for back-to-origin.
        // - https: uses HTTPS for back-to-origin.
        // - follow: follows the client protocol for back-to-origin.
        shared_ptr<string> originScheme_ {};
        // The SNI carried in the back-to-origin request.
        shared_ptr<string> originSni_ {};
        // Specifies whether to enable origin server certificate verification. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> originVerify_ {};
        // Specifies whether to use range-based origin fetch for file downloads. Valid values:
        // - on: enabled.
        // - off: disabled.
        // - force: forced.
        shared_ptr<string> range_ {};
        // The range chunk size. Valid values:
        // - 512KB
        // - 1MB
        // - 2MB
        // - 4MB
        shared_ptr<string> rangeChunkSize_ {};
        // The rule content.
        shared_ptr<string> rule_ {};
        // The rule switch. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> ruleEnable_ {};
        // The rule name.
        shared_ptr<string> ruleName_ {};
        // The rule execution order.
        shared_ptr<string> sequence_ {};
      };

      class NetworkOptimization : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetworkOptimization& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(Grpc, grpc_);
          DARABONBA_PTR_TO_JSON(Http2Origin, http2Origin_);
          DARABONBA_PTR_TO_JSON(Rule, rule_);
          DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
          DARABONBA_PTR_TO_JSON(SmartRouting, smartRouting_);
          DARABONBA_PTR_TO_JSON(UploadMaxFilesize, uploadMaxFilesize_);
          DARABONBA_PTR_TO_JSON(Websocket, websocket_);
        };
        friend void from_json(const Darabonba::Json& j, NetworkOptimization& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(Grpc, grpc_);
          DARABONBA_PTR_FROM_JSON(Http2Origin, http2Origin_);
          DARABONBA_PTR_FROM_JSON(Rule, rule_);
          DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
          DARABONBA_PTR_FROM_JSON(SmartRouting, smartRouting_);
          DARABONBA_PTR_FROM_JSON(UploadMaxFilesize, uploadMaxFilesize_);
          DARABONBA_PTR_FROM_JSON(Websocket, websocket_);
        };
        NetworkOptimization() = default ;
        NetworkOptimization(const NetworkOptimization &) = default ;
        NetworkOptimization(NetworkOptimization &&) = default ;
        NetworkOptimization(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NetworkOptimization() = default ;
        NetworkOptimization& operator=(const NetworkOptimization &) = default ;
        NetworkOptimization& operator=(NetworkOptimization &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configId_ == nullptr
        && this->grpc_ == nullptr && this->http2Origin_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr
        && this->sequence_ == nullptr && this->smartRouting_ == nullptr && this->uploadMaxFilesize_ == nullptr && this->websocket_ == nullptr; };
        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline NetworkOptimization& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // grpc Field Functions 
        bool hasGrpc() const { return this->grpc_ != nullptr;};
        void deleteGrpc() { this->grpc_ = nullptr;};
        inline string getGrpc() const { DARABONBA_PTR_GET_DEFAULT(grpc_, "") };
        inline NetworkOptimization& setGrpc(string grpc) { DARABONBA_PTR_SET_VALUE(grpc_, grpc) };


        // http2Origin Field Functions 
        bool hasHttp2Origin() const { return this->http2Origin_ != nullptr;};
        void deleteHttp2Origin() { this->http2Origin_ = nullptr;};
        inline string getHttp2Origin() const { DARABONBA_PTR_GET_DEFAULT(http2Origin_, "") };
        inline NetworkOptimization& setHttp2Origin(string http2Origin) { DARABONBA_PTR_SET_VALUE(http2Origin_, http2Origin) };


        // rule Field Functions 
        bool hasRule() const { return this->rule_ != nullptr;};
        void deleteRule() { this->rule_ = nullptr;};
        inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
        inline NetworkOptimization& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


        // ruleEnable Field Functions 
        bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
        void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
        inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
        inline NetworkOptimization& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline NetworkOptimization& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
        inline NetworkOptimization& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


        // smartRouting Field Functions 
        bool hasSmartRouting() const { return this->smartRouting_ != nullptr;};
        void deleteSmartRouting() { this->smartRouting_ = nullptr;};
        inline string getSmartRouting() const { DARABONBA_PTR_GET_DEFAULT(smartRouting_, "") };
        inline NetworkOptimization& setSmartRouting(string smartRouting) { DARABONBA_PTR_SET_VALUE(smartRouting_, smartRouting) };


        // uploadMaxFilesize Field Functions 
        bool hasUploadMaxFilesize() const { return this->uploadMaxFilesize_ != nullptr;};
        void deleteUploadMaxFilesize() { this->uploadMaxFilesize_ = nullptr;};
        inline string getUploadMaxFilesize() const { DARABONBA_PTR_GET_DEFAULT(uploadMaxFilesize_, "") };
        inline NetworkOptimization& setUploadMaxFilesize(string uploadMaxFilesize) { DARABONBA_PTR_SET_VALUE(uploadMaxFilesize_, uploadMaxFilesize) };


        // websocket Field Functions 
        bool hasWebsocket() const { return this->websocket_ != nullptr;};
        void deleteWebsocket() { this->websocket_ = nullptr;};
        inline string getWebsocket() const { DARABONBA_PTR_GET_DEFAULT(websocket_, "") };
        inline NetworkOptimization& setWebsocket(string websocket) { DARABONBA_PTR_SET_VALUE(websocket_, websocket) };


      protected:
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // Specifies whether to enable gRPC. Disabled by default. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> grpc_ {};
        // Specifies whether to enable HTTP/2 back-to-origin. Disabled by default. Valid values:
        // 
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> http2Origin_ {};
        // The rule content.
        shared_ptr<string> rule_ {};
        // The rule switch. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> ruleEnable_ {};
        // The rule name.
        shared_ptr<string> ruleName_ {};
        // The rule execution order.
        shared_ptr<string> sequence_ {};
        // Specifies whether to enable smart routing. Disabled by default. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> smartRouting_ {};
        // The maximum upload file size, in MB. Valid values: 100 to 500.
        shared_ptr<string> uploadMaxFilesize_ {};
        // Specifies whether to enable WebSocket. Enabled by default. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> websocket_ {};
      };

      class ManagedTransforms : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ManagedTransforms& obj) { 
          DARABONBA_PTR_TO_JSON(AddClientGeolocationHeaders, addClientGeolocationHeaders_);
          DARABONBA_PTR_TO_JSON(AddRealClientIpHeader, addRealClientIpHeader_);
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        };
        friend void from_json(const Darabonba::Json& j, ManagedTransforms& obj) { 
          DARABONBA_PTR_FROM_JSON(AddClientGeolocationHeaders, addClientGeolocationHeaders_);
          DARABONBA_PTR_FROM_JSON(AddRealClientIpHeader, addRealClientIpHeader_);
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        };
        ManagedTransforms() = default ;
        ManagedTransforms(const ManagedTransforms &) = default ;
        ManagedTransforms(ManagedTransforms &&) = default ;
        ManagedTransforms(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ManagedTransforms() = default ;
        ManagedTransforms& operator=(const ManagedTransforms &) = default ;
        ManagedTransforms& operator=(ManagedTransforms &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->addClientGeolocationHeaders_ == nullptr
        && this->addRealClientIpHeader_ == nullptr && this->configId_ == nullptr && this->sequence_ == nullptr; };
        // addClientGeolocationHeaders Field Functions 
        bool hasAddClientGeolocationHeaders() const { return this->addClientGeolocationHeaders_ != nullptr;};
        void deleteAddClientGeolocationHeaders() { this->addClientGeolocationHeaders_ = nullptr;};
        inline string getAddClientGeolocationHeaders() const { DARABONBA_PTR_GET_DEFAULT(addClientGeolocationHeaders_, "") };
        inline ManagedTransforms& setAddClientGeolocationHeaders(string addClientGeolocationHeaders) { DARABONBA_PTR_SET_VALUE(addClientGeolocationHeaders_, addClientGeolocationHeaders) };


        // addRealClientIpHeader Field Functions 
        bool hasAddRealClientIpHeader() const { return this->addRealClientIpHeader_ != nullptr;};
        void deleteAddRealClientIpHeader() { this->addRealClientIpHeader_ = nullptr;};
        inline string getAddRealClientIpHeader() const { DARABONBA_PTR_GET_DEFAULT(addRealClientIpHeader_, "") };
        inline ManagedTransforms& setAddRealClientIpHeader(string addRealClientIpHeader) { DARABONBA_PTR_SET_VALUE(addRealClientIpHeader_, addRealClientIpHeader) };


        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline ManagedTransforms& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
        inline ManagedTransforms& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      protected:
        // Specifies whether to add visitor geolocation headers. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> addClientGeolocationHeaders_ {};
        // Specifies whether to add the "ali-real-client-ip" header that contains the real client IP address. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> addRealClientIpHeader_ {};
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // The rule execution order.
        shared_ptr<string> sequence_ {};
      };

      class Ipv6 : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ipv6& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        };
        friend void from_json(const Darabonba::Json& j, Ipv6& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        };
        Ipv6() = default ;
        Ipv6(const Ipv6 &) = default ;
        Ipv6(Ipv6 &&) = default ;
        Ipv6(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ipv6() = default ;
        Ipv6& operator=(const Ipv6 &) = default ;
        Ipv6& operator=(Ipv6 &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configId_ == nullptr
        && this->enable_ == nullptr && this->sequence_ == nullptr; };
        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline Ipv6& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
        inline Ipv6& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
        inline Ipv6& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      protected:
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // Specifies whether to enable IPv6. Enabled by default. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> enable_ {};
        // The rule execution order.
        shared_ptr<string> sequence_ {};
      };

      class ImageTransform : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImageTransform& obj) { 
          DARABONBA_PTR_TO_JSON(AutoAvif, autoAvif_);
          DARABONBA_PTR_TO_JSON(AutoWebp, autoWebp_);
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(Rule, rule_);
          DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        };
        friend void from_json(const Darabonba::Json& j, ImageTransform& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoAvif, autoAvif_);
          DARABONBA_PTR_FROM_JSON(AutoWebp, autoWebp_);
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(Rule, rule_);
          DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        };
        ImageTransform() = default ;
        ImageTransform(const ImageTransform &) = default ;
        ImageTransform(ImageTransform &&) = default ;
        ImageTransform(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ImageTransform() = default ;
        ImageTransform& operator=(const ImageTransform &) = default ;
        ImageTransform& operator=(ImageTransform &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoAvif_ == nullptr
        && this->autoWebp_ == nullptr && this->configId_ == nullptr && this->enable_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr
        && this->ruleName_ == nullptr && this->sequence_ == nullptr; };
        // autoAvif Field Functions 
        bool hasAutoAvif() const { return this->autoAvif_ != nullptr;};
        void deleteAutoAvif() { this->autoAvif_ = nullptr;};
        inline string getAutoAvif() const { DARABONBA_PTR_GET_DEFAULT(autoAvif_, "") };
        inline ImageTransform& setAutoAvif(string autoAvif) { DARABONBA_PTR_SET_VALUE(autoAvif_, autoAvif) };


        // autoWebp Field Functions 
        bool hasAutoWebp() const { return this->autoWebp_ != nullptr;};
        void deleteAutoWebp() { this->autoWebp_ = nullptr;};
        inline string getAutoWebp() const { DARABONBA_PTR_GET_DEFAULT(autoWebp_, "") };
        inline ImageTransform& setAutoWebp(string autoWebp) { DARABONBA_PTR_SET_VALUE(autoWebp_, autoWebp) };


        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline ImageTransform& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
        inline ImageTransform& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // rule Field Functions 
        bool hasRule() const { return this->rule_ != nullptr;};
        void deleteRule() { this->rule_ = nullptr;};
        inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
        inline ImageTransform& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


        // ruleEnable Field Functions 
        bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
        void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
        inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
        inline ImageTransform& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline ImageTransform& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
        inline ImageTransform& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      protected:
        // The adaptive AVIF setting.
        shared_ptr<string> autoAvif_ {};
        // The adaptive WebP setting.
        shared_ptr<string> autoWebp_ {};
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // Specifies whether to enable image transformation. Disabled by default. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> enable_ {};
        // The rule content.
        shared_ptr<string> rule_ {};
        // The rule switch. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> ruleEnable_ {};
        // The rule name.
        shared_ptr<string> ruleName_ {};
        // The rule execution order.
        shared_ptr<string> sequence_ {};
      };

      class HttpsBasicConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HttpsBasicConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(Ciphersuite, ciphersuite_);
          DARABONBA_PTR_TO_JSON(CiphersuiteGroup, ciphersuiteGroup_);
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(Http2, http2_);
          DARABONBA_PTR_TO_JSON(Http3, http3_);
          DARABONBA_PTR_TO_JSON(Https, https_);
          DARABONBA_PTR_TO_JSON(OcspStapling, ocspStapling_);
          DARABONBA_PTR_TO_JSON(Rule, rule_);
          DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
          DARABONBA_PTR_TO_JSON(Tls10, tls10_);
          DARABONBA_PTR_TO_JSON(Tls11, tls11_);
          DARABONBA_PTR_TO_JSON(Tls12, tls12_);
          DARABONBA_PTR_TO_JSON(Tls13, tls13_);
        };
        friend void from_json(const Darabonba::Json& j, HttpsBasicConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(Ciphersuite, ciphersuite_);
          DARABONBA_PTR_FROM_JSON(CiphersuiteGroup, ciphersuiteGroup_);
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(Http2, http2_);
          DARABONBA_PTR_FROM_JSON(Http3, http3_);
          DARABONBA_PTR_FROM_JSON(Https, https_);
          DARABONBA_PTR_FROM_JSON(OcspStapling, ocspStapling_);
          DARABONBA_PTR_FROM_JSON(Rule, rule_);
          DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
          DARABONBA_PTR_FROM_JSON(Tls10, tls10_);
          DARABONBA_PTR_FROM_JSON(Tls11, tls11_);
          DARABONBA_PTR_FROM_JSON(Tls12, tls12_);
          DARABONBA_PTR_FROM_JSON(Tls13, tls13_);
        };
        HttpsBasicConfiguration() = default ;
        HttpsBasicConfiguration(const HttpsBasicConfiguration &) = default ;
        HttpsBasicConfiguration(HttpsBasicConfiguration &&) = default ;
        HttpsBasicConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HttpsBasicConfiguration() = default ;
        HttpsBasicConfiguration& operator=(const HttpsBasicConfiguration &) = default ;
        HttpsBasicConfiguration& operator=(HttpsBasicConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ciphersuite_ == nullptr
        && this->ciphersuiteGroup_ == nullptr && this->configId_ == nullptr && this->http2_ == nullptr && this->http3_ == nullptr && this->https_ == nullptr
        && this->ocspStapling_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->sequence_ == nullptr
        && this->tls10_ == nullptr && this->tls11_ == nullptr && this->tls12_ == nullptr && this->tls13_ == nullptr; };
        // ciphersuite Field Functions 
        bool hasCiphersuite() const { return this->ciphersuite_ != nullptr;};
        void deleteCiphersuite() { this->ciphersuite_ = nullptr;};
        inline string getCiphersuite() const { DARABONBA_PTR_GET_DEFAULT(ciphersuite_, "") };
        inline HttpsBasicConfiguration& setCiphersuite(string ciphersuite) { DARABONBA_PTR_SET_VALUE(ciphersuite_, ciphersuite) };


        // ciphersuiteGroup Field Functions 
        bool hasCiphersuiteGroup() const { return this->ciphersuiteGroup_ != nullptr;};
        void deleteCiphersuiteGroup() { this->ciphersuiteGroup_ = nullptr;};
        inline string getCiphersuiteGroup() const { DARABONBA_PTR_GET_DEFAULT(ciphersuiteGroup_, "") };
        inline HttpsBasicConfiguration& setCiphersuiteGroup(string ciphersuiteGroup) { DARABONBA_PTR_SET_VALUE(ciphersuiteGroup_, ciphersuiteGroup) };


        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline HttpsBasicConfiguration& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // http2 Field Functions 
        bool hasHttp2() const { return this->http2_ != nullptr;};
        void deleteHttp2() { this->http2_ = nullptr;};
        inline string getHttp2() const { DARABONBA_PTR_GET_DEFAULT(http2_, "") };
        inline HttpsBasicConfiguration& setHttp2(string http2) { DARABONBA_PTR_SET_VALUE(http2_, http2) };


        // http3 Field Functions 
        bool hasHttp3() const { return this->http3_ != nullptr;};
        void deleteHttp3() { this->http3_ = nullptr;};
        inline string getHttp3() const { DARABONBA_PTR_GET_DEFAULT(http3_, "") };
        inline HttpsBasicConfiguration& setHttp3(string http3) { DARABONBA_PTR_SET_VALUE(http3_, http3) };


        // https Field Functions 
        bool hasHttps() const { return this->https_ != nullptr;};
        void deleteHttps() { this->https_ = nullptr;};
        inline string getHttps() const { DARABONBA_PTR_GET_DEFAULT(https_, "") };
        inline HttpsBasicConfiguration& setHttps(string https) { DARABONBA_PTR_SET_VALUE(https_, https) };


        // ocspStapling Field Functions 
        bool hasOcspStapling() const { return this->ocspStapling_ != nullptr;};
        void deleteOcspStapling() { this->ocspStapling_ = nullptr;};
        inline string getOcspStapling() const { DARABONBA_PTR_GET_DEFAULT(ocspStapling_, "") };
        inline HttpsBasicConfiguration& setOcspStapling(string ocspStapling) { DARABONBA_PTR_SET_VALUE(ocspStapling_, ocspStapling) };


        // rule Field Functions 
        bool hasRule() const { return this->rule_ != nullptr;};
        void deleteRule() { this->rule_ = nullptr;};
        inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
        inline HttpsBasicConfiguration& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


        // ruleEnable Field Functions 
        bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
        void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
        inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
        inline HttpsBasicConfiguration& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline HttpsBasicConfiguration& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
        inline HttpsBasicConfiguration& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


        // tls10 Field Functions 
        bool hasTls10() const { return this->tls10_ != nullptr;};
        void deleteTls10() { this->tls10_ = nullptr;};
        inline string getTls10() const { DARABONBA_PTR_GET_DEFAULT(tls10_, "") };
        inline HttpsBasicConfiguration& setTls10(string tls10) { DARABONBA_PTR_SET_VALUE(tls10_, tls10) };


        // tls11 Field Functions 
        bool hasTls11() const { return this->tls11_ != nullptr;};
        void deleteTls11() { this->tls11_ = nullptr;};
        inline string getTls11() const { DARABONBA_PTR_GET_DEFAULT(tls11_, "") };
        inline HttpsBasicConfiguration& setTls11(string tls11) { DARABONBA_PTR_SET_VALUE(tls11_, tls11) };


        // tls12 Field Functions 
        bool hasTls12() const { return this->tls12_ != nullptr;};
        void deleteTls12() { this->tls12_ = nullptr;};
        inline string getTls12() const { DARABONBA_PTR_GET_DEFAULT(tls12_, "") };
        inline HttpsBasicConfiguration& setTls12(string tls12) { DARABONBA_PTR_SET_VALUE(tls12_, tls12) };


        // tls13 Field Functions 
        bool hasTls13() const { return this->tls13_ != nullptr;};
        void deleteTls13() { this->tls13_ = nullptr;};
        inline string getTls13() const { DARABONBA_PTR_GET_DEFAULT(tls13_, "") };
        inline HttpsBasicConfiguration& setTls13(string tls13) { DARABONBA_PTR_SET_VALUE(tls13_, tls13) };


      protected:
        // The custom cipher suites. Specifies the specific encryption algorithms selected when CiphersuiteGroup is set to custom.
        shared_ptr<string> ciphersuite_ {};
        // The cipher suite group. All cipher suites are enabled by default. Valid values:
        // - all: all cipher suites.
        // - strict: strong cipher suites.
        // - custom: custom cipher suites.
        shared_ptr<string> ciphersuiteGroup_ {};
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // Specifies whether to enable HTTP/2. Enabled by default. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> http2_ {};
        // Specifies whether to enable HTTP/3. Enabled by default. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> http3_ {};
        // Specifies whether to enable HTTPS. Enabled by default. Valid values:
        // 
        // - on: enabled.
        // 
        // - off: disabled.
        shared_ptr<string> https_ {};
        // Specifies whether to enable OCSP stapling. Disabled by default. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> ocspStapling_ {};
        // The matching rule content.
        shared_ptr<string> rule_ {};
        // The rule switch. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> ruleEnable_ {};
        // The rule name.
        shared_ptr<string> ruleName_ {};
        // The rule execution order.
        shared_ptr<string> sequence_ {};
        // Specifies whether to enable TLS 1.0. Disabled by default. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> tls10_ {};
        // Specifies whether to enable TLS 1.1. Enabled by default. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> tls11_ {};
        // Specifies whether to enable TLS 1.2. Enabled by default. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> tls12_ {};
        // Specifies whether to enable TLS 1.3. Enabled by default. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> tls13_ {};
      };

      class HttpsApplicationConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HttpsApplicationConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(AltSvc, altSvc_);
          DARABONBA_PTR_TO_JSON(AltSvcClear, altSvcClear_);
          DARABONBA_PTR_TO_JSON(AltSvcMa, altSvcMa_);
          DARABONBA_PTR_TO_JSON(AltSvcPersist, altSvcPersist_);
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(Hsts, hsts_);
          DARABONBA_PTR_TO_JSON(HstsIncludeSubdomains, hstsIncludeSubdomains_);
          DARABONBA_PTR_TO_JSON(HstsMaxAge, hstsMaxAge_);
          DARABONBA_PTR_TO_JSON(HstsPreload, hstsPreload_);
          DARABONBA_PTR_TO_JSON(HttpsForce, httpsForce_);
          DARABONBA_PTR_TO_JSON(HttpsForceCode, httpsForceCode_);
          DARABONBA_PTR_TO_JSON(Rule, rule_);
          DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        };
        friend void from_json(const Darabonba::Json& j, HttpsApplicationConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(AltSvc, altSvc_);
          DARABONBA_PTR_FROM_JSON(AltSvcClear, altSvcClear_);
          DARABONBA_PTR_FROM_JSON(AltSvcMa, altSvcMa_);
          DARABONBA_PTR_FROM_JSON(AltSvcPersist, altSvcPersist_);
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(Hsts, hsts_);
          DARABONBA_PTR_FROM_JSON(HstsIncludeSubdomains, hstsIncludeSubdomains_);
          DARABONBA_PTR_FROM_JSON(HstsMaxAge, hstsMaxAge_);
          DARABONBA_PTR_FROM_JSON(HstsPreload, hstsPreload_);
          DARABONBA_PTR_FROM_JSON(HttpsForce, httpsForce_);
          DARABONBA_PTR_FROM_JSON(HttpsForceCode, httpsForceCode_);
          DARABONBA_PTR_FROM_JSON(Rule, rule_);
          DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        };
        HttpsApplicationConfiguration() = default ;
        HttpsApplicationConfiguration(const HttpsApplicationConfiguration &) = default ;
        HttpsApplicationConfiguration(HttpsApplicationConfiguration &&) = default ;
        HttpsApplicationConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HttpsApplicationConfiguration() = default ;
        HttpsApplicationConfiguration& operator=(const HttpsApplicationConfiguration &) = default ;
        HttpsApplicationConfiguration& operator=(HttpsApplicationConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->altSvc_ == nullptr
        && this->altSvcClear_ == nullptr && this->altSvcMa_ == nullptr && this->altSvcPersist_ == nullptr && this->configId_ == nullptr && this->hsts_ == nullptr
        && this->hstsIncludeSubdomains_ == nullptr && this->hstsMaxAge_ == nullptr && this->hstsPreload_ == nullptr && this->httpsForce_ == nullptr && this->httpsForceCode_ == nullptr
        && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->sequence_ == nullptr; };
        // altSvc Field Functions 
        bool hasAltSvc() const { return this->altSvc_ != nullptr;};
        void deleteAltSvc() { this->altSvc_ = nullptr;};
        inline string getAltSvc() const { DARABONBA_PTR_GET_DEFAULT(altSvc_, "") };
        inline HttpsApplicationConfiguration& setAltSvc(string altSvc) { DARABONBA_PTR_SET_VALUE(altSvc_, altSvc) };


        // altSvcClear Field Functions 
        bool hasAltSvcClear() const { return this->altSvcClear_ != nullptr;};
        void deleteAltSvcClear() { this->altSvcClear_ = nullptr;};
        inline string getAltSvcClear() const { DARABONBA_PTR_GET_DEFAULT(altSvcClear_, "") };
        inline HttpsApplicationConfiguration& setAltSvcClear(string altSvcClear) { DARABONBA_PTR_SET_VALUE(altSvcClear_, altSvcClear) };


        // altSvcMa Field Functions 
        bool hasAltSvcMa() const { return this->altSvcMa_ != nullptr;};
        void deleteAltSvcMa() { this->altSvcMa_ = nullptr;};
        inline string getAltSvcMa() const { DARABONBA_PTR_GET_DEFAULT(altSvcMa_, "") };
        inline HttpsApplicationConfiguration& setAltSvcMa(string altSvcMa) { DARABONBA_PTR_SET_VALUE(altSvcMa_, altSvcMa) };


        // altSvcPersist Field Functions 
        bool hasAltSvcPersist() const { return this->altSvcPersist_ != nullptr;};
        void deleteAltSvcPersist() { this->altSvcPersist_ = nullptr;};
        inline string getAltSvcPersist() const { DARABONBA_PTR_GET_DEFAULT(altSvcPersist_, "") };
        inline HttpsApplicationConfiguration& setAltSvcPersist(string altSvcPersist) { DARABONBA_PTR_SET_VALUE(altSvcPersist_, altSvcPersist) };


        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline HttpsApplicationConfiguration& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // hsts Field Functions 
        bool hasHsts() const { return this->hsts_ != nullptr;};
        void deleteHsts() { this->hsts_ = nullptr;};
        inline string getHsts() const { DARABONBA_PTR_GET_DEFAULT(hsts_, "") };
        inline HttpsApplicationConfiguration& setHsts(string hsts) { DARABONBA_PTR_SET_VALUE(hsts_, hsts) };


        // hstsIncludeSubdomains Field Functions 
        bool hasHstsIncludeSubdomains() const { return this->hstsIncludeSubdomains_ != nullptr;};
        void deleteHstsIncludeSubdomains() { this->hstsIncludeSubdomains_ = nullptr;};
        inline string getHstsIncludeSubdomains() const { DARABONBA_PTR_GET_DEFAULT(hstsIncludeSubdomains_, "") };
        inline HttpsApplicationConfiguration& setHstsIncludeSubdomains(string hstsIncludeSubdomains) { DARABONBA_PTR_SET_VALUE(hstsIncludeSubdomains_, hstsIncludeSubdomains) };


        // hstsMaxAge Field Functions 
        bool hasHstsMaxAge() const { return this->hstsMaxAge_ != nullptr;};
        void deleteHstsMaxAge() { this->hstsMaxAge_ = nullptr;};
        inline string getHstsMaxAge() const { DARABONBA_PTR_GET_DEFAULT(hstsMaxAge_, "") };
        inline HttpsApplicationConfiguration& setHstsMaxAge(string hstsMaxAge) { DARABONBA_PTR_SET_VALUE(hstsMaxAge_, hstsMaxAge) };


        // hstsPreload Field Functions 
        bool hasHstsPreload() const { return this->hstsPreload_ != nullptr;};
        void deleteHstsPreload() { this->hstsPreload_ = nullptr;};
        inline string getHstsPreload() const { DARABONBA_PTR_GET_DEFAULT(hstsPreload_, "") };
        inline HttpsApplicationConfiguration& setHstsPreload(string hstsPreload) { DARABONBA_PTR_SET_VALUE(hstsPreload_, hstsPreload) };


        // httpsForce Field Functions 
        bool hasHttpsForce() const { return this->httpsForce_ != nullptr;};
        void deleteHttpsForce() { this->httpsForce_ = nullptr;};
        inline string getHttpsForce() const { DARABONBA_PTR_GET_DEFAULT(httpsForce_, "") };
        inline HttpsApplicationConfiguration& setHttpsForce(string httpsForce) { DARABONBA_PTR_SET_VALUE(httpsForce_, httpsForce) };


        // httpsForceCode Field Functions 
        bool hasHttpsForceCode() const { return this->httpsForceCode_ != nullptr;};
        void deleteHttpsForceCode() { this->httpsForceCode_ = nullptr;};
        inline string getHttpsForceCode() const { DARABONBA_PTR_GET_DEFAULT(httpsForceCode_, "") };
        inline HttpsApplicationConfiguration& setHttpsForceCode(string httpsForceCode) { DARABONBA_PTR_SET_VALUE(httpsForceCode_, httpsForceCode) };


        // rule Field Functions 
        bool hasRule() const { return this->rule_ != nullptr;};
        void deleteRule() { this->rule_ = nullptr;};
        inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
        inline HttpsApplicationConfiguration& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


        // ruleEnable Field Functions 
        bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
        void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
        inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
        inline HttpsApplicationConfiguration& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline HttpsApplicationConfiguration& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
        inline HttpsApplicationConfiguration& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      protected:
        // The Alt-Svc feature switch. Disabled by default. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> altSvc_ {};
        // Specifies whether the Alt-Svc header includes the clear parameter. Disabled by default. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> altSvcClear_ {};
        // The Alt-Svc validity period, in seconds. Default value: 86400.
        shared_ptr<string> altSvcMa_ {};
        // Specifies whether the Alt-Svc header includes the persist parameter. Disabled by default. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> altSvcPersist_ {};
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // Specifies whether to enable HSTS. Disabled by default. Valid values:
        // 
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> hsts_ {};
        // Specifies whether to include subdomains in HSTS. Disabled by default. Valid values:
        // 
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> hstsIncludeSubdomains_ {};
        // The HSTS expiration time, in seconds.
        shared_ptr<string> hstsMaxAge_ {};
        // Specifies whether to enable HSTS preload. Disabled by default. Valid values:
        // 
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> hstsPreload_ {};
        // Specifies whether to enable forced HTTPS. Disabled by default. Valid values:
        // 
        // - on: enabled.
        // 
        // - off: disabled.
        shared_ptr<string> httpsForce_ {};
        // The status code used for forced HTTPS redirect. Valid values:
        // - 301
        // - 302
        // - 307
        // - 308
        shared_ptr<string> httpsForceCode_ {};
        // The rule content.
        shared_ptr<string> rule_ {};
        // The rule switch. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> ruleEnable_ {};
        // The rule name.
        shared_ptr<string> ruleName_ {};
        // The rule execution order.
        shared_ptr<string> sequence_ {};
      };

      class HttpResponseHeaderModificationRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HttpResponseHeaderModificationRules& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(ResponseHeaderModification, responseHeaderModification_);
          DARABONBA_PTR_TO_JSON(Rule, rule_);
          DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        };
        friend void from_json(const Darabonba::Json& j, HttpResponseHeaderModificationRules& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(ResponseHeaderModification, responseHeaderModification_);
          DARABONBA_PTR_FROM_JSON(Rule, rule_);
          DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        };
        HttpResponseHeaderModificationRules() = default ;
        HttpResponseHeaderModificationRules(const HttpResponseHeaderModificationRules &) = default ;
        HttpResponseHeaderModificationRules(HttpResponseHeaderModificationRules &&) = default ;
        HttpResponseHeaderModificationRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HttpResponseHeaderModificationRules() = default ;
        HttpResponseHeaderModificationRules& operator=(const HttpResponseHeaderModificationRules &) = default ;
        HttpResponseHeaderModificationRules& operator=(HttpResponseHeaderModificationRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ResponseHeaderModification : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResponseHeaderModification& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Operation, operation_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ResponseHeaderModification& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Operation, operation_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          ResponseHeaderModification() = default ;
          ResponseHeaderModification(const ResponseHeaderModification &) = default ;
          ResponseHeaderModification(ResponseHeaderModification &&) = default ;
          ResponseHeaderModification(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResponseHeaderModification() = default ;
          ResponseHeaderModification& operator=(const ResponseHeaderModification &) = default ;
          ResponseHeaderModification& operator=(ResponseHeaderModification &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->operation_ == nullptr && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ResponseHeaderModification& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // operation Field Functions 
          bool hasOperation() const { return this->operation_ != nullptr;};
          void deleteOperation() { this->operation_ = nullptr;};
          inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
          inline ResponseHeaderModification& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline ResponseHeaderModification& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The response header name.
          shared_ptr<string> name_ {};
          // The operation type. Valid values:
          // - add: adds a header.
          // - del: deletes a header.
          // - modify: modifies a header.
          shared_ptr<string> operation_ {};
          // The response header value.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->configId_ == nullptr
        && this->responseHeaderModification_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->sequence_ == nullptr; };
        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline HttpResponseHeaderModificationRules& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // responseHeaderModification Field Functions 
        bool hasResponseHeaderModification() const { return this->responseHeaderModification_ != nullptr;};
        void deleteResponseHeaderModification() { this->responseHeaderModification_ = nullptr;};
        inline const vector<HttpResponseHeaderModificationRules::ResponseHeaderModification> & getResponseHeaderModification() const { DARABONBA_PTR_GET_CONST(responseHeaderModification_, vector<HttpResponseHeaderModificationRules::ResponseHeaderModification>) };
        inline vector<HttpResponseHeaderModificationRules::ResponseHeaderModification> getResponseHeaderModification() { DARABONBA_PTR_GET(responseHeaderModification_, vector<HttpResponseHeaderModificationRules::ResponseHeaderModification>) };
        inline HttpResponseHeaderModificationRules& setResponseHeaderModification(const vector<HttpResponseHeaderModificationRules::ResponseHeaderModification> & responseHeaderModification) { DARABONBA_PTR_SET_VALUE(responseHeaderModification_, responseHeaderModification) };
        inline HttpResponseHeaderModificationRules& setResponseHeaderModification(vector<HttpResponseHeaderModificationRules::ResponseHeaderModification> && responseHeaderModification) { DARABONBA_PTR_SET_RVALUE(responseHeaderModification_, responseHeaderModification) };


        // rule Field Functions 
        bool hasRule() const { return this->rule_ != nullptr;};
        void deleteRule() { this->rule_ = nullptr;};
        inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
        inline HttpResponseHeaderModificationRules& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


        // ruleEnable Field Functions 
        bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
        void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
        inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
        inline HttpResponseHeaderModificationRules& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline HttpResponseHeaderModificationRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
        inline HttpResponseHeaderModificationRules& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      protected:
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // The response header modifications. Supports add, delete, and modify operations.
        shared_ptr<vector<HttpResponseHeaderModificationRules::ResponseHeaderModification>> responseHeaderModification_ {};
        // The rule content.
        shared_ptr<string> rule_ {};
        // The rule switch. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> ruleEnable_ {};
        // The rule name.
        shared_ptr<string> ruleName_ {};
        // The rule execution order.
        shared_ptr<string> sequence_ {};
      };

      class HttpRequestHeaderModificationRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HttpRequestHeaderModificationRules& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(RequestHeaderModification, requestHeaderModification_);
          DARABONBA_PTR_TO_JSON(Rule, rule_);
          DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        };
        friend void from_json(const Darabonba::Json& j, HttpRequestHeaderModificationRules& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(RequestHeaderModification, requestHeaderModification_);
          DARABONBA_PTR_FROM_JSON(Rule, rule_);
          DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        };
        HttpRequestHeaderModificationRules() = default ;
        HttpRequestHeaderModificationRules(const HttpRequestHeaderModificationRules &) = default ;
        HttpRequestHeaderModificationRules(HttpRequestHeaderModificationRules &&) = default ;
        HttpRequestHeaderModificationRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HttpRequestHeaderModificationRules() = default ;
        HttpRequestHeaderModificationRules& operator=(const HttpRequestHeaderModificationRules &) = default ;
        HttpRequestHeaderModificationRules& operator=(HttpRequestHeaderModificationRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RequestHeaderModification : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RequestHeaderModification& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Operation, operation_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, RequestHeaderModification& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Operation, operation_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          RequestHeaderModification() = default ;
          RequestHeaderModification(const RequestHeaderModification &) = default ;
          RequestHeaderModification(RequestHeaderModification &&) = default ;
          RequestHeaderModification(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RequestHeaderModification() = default ;
          RequestHeaderModification& operator=(const RequestHeaderModification &) = default ;
          RequestHeaderModification& operator=(RequestHeaderModification &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->operation_ == nullptr && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline RequestHeaderModification& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // operation Field Functions 
          bool hasOperation() const { return this->operation_ != nullptr;};
          void deleteOperation() { this->operation_ = nullptr;};
          inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
          inline RequestHeaderModification& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline RequestHeaderModification& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The request header name.
          shared_ptr<string> name_ {};
          // The operation type. Valid values:
          // - add: adds a header.
          // - del: deletes a header.
          // - modify: modifies a header.
          shared_ptr<string> operation_ {};
          // The request header value.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->configId_ == nullptr
        && this->requestHeaderModification_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->sequence_ == nullptr; };
        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline HttpRequestHeaderModificationRules& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // requestHeaderModification Field Functions 
        bool hasRequestHeaderModification() const { return this->requestHeaderModification_ != nullptr;};
        void deleteRequestHeaderModification() { this->requestHeaderModification_ = nullptr;};
        inline const vector<HttpRequestHeaderModificationRules::RequestHeaderModification> & getRequestHeaderModification() const { DARABONBA_PTR_GET_CONST(requestHeaderModification_, vector<HttpRequestHeaderModificationRules::RequestHeaderModification>) };
        inline vector<HttpRequestHeaderModificationRules::RequestHeaderModification> getRequestHeaderModification() { DARABONBA_PTR_GET(requestHeaderModification_, vector<HttpRequestHeaderModificationRules::RequestHeaderModification>) };
        inline HttpRequestHeaderModificationRules& setRequestHeaderModification(const vector<HttpRequestHeaderModificationRules::RequestHeaderModification> & requestHeaderModification) { DARABONBA_PTR_SET_VALUE(requestHeaderModification_, requestHeaderModification) };
        inline HttpRequestHeaderModificationRules& setRequestHeaderModification(vector<HttpRequestHeaderModificationRules::RequestHeaderModification> && requestHeaderModification) { DARABONBA_PTR_SET_RVALUE(requestHeaderModification_, requestHeaderModification) };


        // rule Field Functions 
        bool hasRule() const { return this->rule_ != nullptr;};
        void deleteRule() { this->rule_ = nullptr;};
        inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
        inline HttpRequestHeaderModificationRules& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


        // ruleEnable Field Functions 
        bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
        void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
        inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
        inline HttpRequestHeaderModificationRules& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline HttpRequestHeaderModificationRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
        inline HttpRequestHeaderModificationRules& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      protected:
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // The request header modifications. Supports add, delete, and modify operations.
        shared_ptr<vector<HttpRequestHeaderModificationRules::RequestHeaderModification>> requestHeaderModification_ {};
        // The rule content.
        shared_ptr<string> rule_ {};
        // The rule switch. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> ruleEnable_ {};
        // The rule name.
        shared_ptr<string> ruleName_ {};
        // The rule execution order.
        shared_ptr<string> sequence_ {};
      };

      class HttpIncomingResponseHeaderModificationRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HttpIncomingResponseHeaderModificationRules& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(ResponseHeaderModification, responseHeaderModification_);
          DARABONBA_PTR_TO_JSON(Rule, rule_);
          DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        };
        friend void from_json(const Darabonba::Json& j, HttpIncomingResponseHeaderModificationRules& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(ResponseHeaderModification, responseHeaderModification_);
          DARABONBA_PTR_FROM_JSON(Rule, rule_);
          DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        };
        HttpIncomingResponseHeaderModificationRules() = default ;
        HttpIncomingResponseHeaderModificationRules(const HttpIncomingResponseHeaderModificationRules &) = default ;
        HttpIncomingResponseHeaderModificationRules(HttpIncomingResponseHeaderModificationRules &&) = default ;
        HttpIncomingResponseHeaderModificationRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HttpIncomingResponseHeaderModificationRules() = default ;
        HttpIncomingResponseHeaderModificationRules& operator=(const HttpIncomingResponseHeaderModificationRules &) = default ;
        HttpIncomingResponseHeaderModificationRules& operator=(HttpIncomingResponseHeaderModificationRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ResponseHeaderModification : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResponseHeaderModification& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Operation, operation_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ResponseHeaderModification& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Operation, operation_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          ResponseHeaderModification() = default ;
          ResponseHeaderModification(const ResponseHeaderModification &) = default ;
          ResponseHeaderModification(ResponseHeaderModification &&) = default ;
          ResponseHeaderModification(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResponseHeaderModification() = default ;
          ResponseHeaderModification& operator=(const ResponseHeaderModification &) = default ;
          ResponseHeaderModification& operator=(ResponseHeaderModification &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->operation_ == nullptr && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ResponseHeaderModification& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // operation Field Functions 
          bool hasOperation() const { return this->operation_ != nullptr;};
          void deleteOperation() { this->operation_ = nullptr;};
          inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
          inline ResponseHeaderModification& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline ResponseHeaderModification& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The response header name.
          shared_ptr<string> name_ {};
          // The operation type. Valid values:
          // - add: adds a header.
          // - del: deletes a header.
          // - modify: modifies a header.
          shared_ptr<string> operation_ {};
          // The response header value.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->configId_ == nullptr
        && this->responseHeaderModification_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->sequence_ == nullptr; };
        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline HttpIncomingResponseHeaderModificationRules& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // responseHeaderModification Field Functions 
        bool hasResponseHeaderModification() const { return this->responseHeaderModification_ != nullptr;};
        void deleteResponseHeaderModification() { this->responseHeaderModification_ = nullptr;};
        inline const vector<HttpIncomingResponseHeaderModificationRules::ResponseHeaderModification> & getResponseHeaderModification() const { DARABONBA_PTR_GET_CONST(responseHeaderModification_, vector<HttpIncomingResponseHeaderModificationRules::ResponseHeaderModification>) };
        inline vector<HttpIncomingResponseHeaderModificationRules::ResponseHeaderModification> getResponseHeaderModification() { DARABONBA_PTR_GET(responseHeaderModification_, vector<HttpIncomingResponseHeaderModificationRules::ResponseHeaderModification>) };
        inline HttpIncomingResponseHeaderModificationRules& setResponseHeaderModification(const vector<HttpIncomingResponseHeaderModificationRules::ResponseHeaderModification> & responseHeaderModification) { DARABONBA_PTR_SET_VALUE(responseHeaderModification_, responseHeaderModification) };
        inline HttpIncomingResponseHeaderModificationRules& setResponseHeaderModification(vector<HttpIncomingResponseHeaderModificationRules::ResponseHeaderModification> && responseHeaderModification) { DARABONBA_PTR_SET_RVALUE(responseHeaderModification_, responseHeaderModification) };


        // rule Field Functions 
        bool hasRule() const { return this->rule_ != nullptr;};
        void deleteRule() { this->rule_ = nullptr;};
        inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
        inline HttpIncomingResponseHeaderModificationRules& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


        // ruleEnable Field Functions 
        bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
        void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
        inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
        inline HttpIncomingResponseHeaderModificationRules& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline HttpIncomingResponseHeaderModificationRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
        inline HttpIncomingResponseHeaderModificationRules& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      protected:
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // The response header modifications. Supports add, delete, and modify operations.
        shared_ptr<vector<HttpIncomingResponseHeaderModificationRules::ResponseHeaderModification>> responseHeaderModification_ {};
        // The rule content.
        shared_ptr<string> rule_ {};
        // The rule switch. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> ruleEnable_ {};
        // The rule name.
        shared_ptr<string> ruleName_ {};
        // The rule execution order.
        shared_ptr<string> sequence_ {};
      };

      class HttpIncomingRequestHeaderModificationRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HttpIncomingRequestHeaderModificationRules& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(RequestHeaderModification, requestHeaderModification_);
          DARABONBA_PTR_TO_JSON(Rule, rule_);
          DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        };
        friend void from_json(const Darabonba::Json& j, HttpIncomingRequestHeaderModificationRules& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(RequestHeaderModification, requestHeaderModification_);
          DARABONBA_PTR_FROM_JSON(Rule, rule_);
          DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        };
        HttpIncomingRequestHeaderModificationRules() = default ;
        HttpIncomingRequestHeaderModificationRules(const HttpIncomingRequestHeaderModificationRules &) = default ;
        HttpIncomingRequestHeaderModificationRules(HttpIncomingRequestHeaderModificationRules &&) = default ;
        HttpIncomingRequestHeaderModificationRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HttpIncomingRequestHeaderModificationRules() = default ;
        HttpIncomingRequestHeaderModificationRules& operator=(const HttpIncomingRequestHeaderModificationRules &) = default ;
        HttpIncomingRequestHeaderModificationRules& operator=(HttpIncomingRequestHeaderModificationRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RequestHeaderModification : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RequestHeaderModification& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Operation, operation_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, RequestHeaderModification& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Operation, operation_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          RequestHeaderModification() = default ;
          RequestHeaderModification(const RequestHeaderModification &) = default ;
          RequestHeaderModification(RequestHeaderModification &&) = default ;
          RequestHeaderModification(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RequestHeaderModification() = default ;
          RequestHeaderModification& operator=(const RequestHeaderModification &) = default ;
          RequestHeaderModification& operator=(RequestHeaderModification &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->operation_ == nullptr && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline RequestHeaderModification& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // operation Field Functions 
          bool hasOperation() const { return this->operation_ != nullptr;};
          void deleteOperation() { this->operation_ = nullptr;};
          inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
          inline RequestHeaderModification& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline RequestHeaderModification& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The request header name.
          shared_ptr<string> name_ {};
          // The operation type. Valid values:
          // - add: adds a header.
          // - del: deletes a header.
          // - modify: modifies a header.
          shared_ptr<string> operation_ {};
          // The request header value.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->configId_ == nullptr
        && this->requestHeaderModification_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->sequence_ == nullptr; };
        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline HttpIncomingRequestHeaderModificationRules& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // requestHeaderModification Field Functions 
        bool hasRequestHeaderModification() const { return this->requestHeaderModification_ != nullptr;};
        void deleteRequestHeaderModification() { this->requestHeaderModification_ = nullptr;};
        inline const vector<HttpIncomingRequestHeaderModificationRules::RequestHeaderModification> & getRequestHeaderModification() const { DARABONBA_PTR_GET_CONST(requestHeaderModification_, vector<HttpIncomingRequestHeaderModificationRules::RequestHeaderModification>) };
        inline vector<HttpIncomingRequestHeaderModificationRules::RequestHeaderModification> getRequestHeaderModification() { DARABONBA_PTR_GET(requestHeaderModification_, vector<HttpIncomingRequestHeaderModificationRules::RequestHeaderModification>) };
        inline HttpIncomingRequestHeaderModificationRules& setRequestHeaderModification(const vector<HttpIncomingRequestHeaderModificationRules::RequestHeaderModification> & requestHeaderModification) { DARABONBA_PTR_SET_VALUE(requestHeaderModification_, requestHeaderModification) };
        inline HttpIncomingRequestHeaderModificationRules& setRequestHeaderModification(vector<HttpIncomingRequestHeaderModificationRules::RequestHeaderModification> && requestHeaderModification) { DARABONBA_PTR_SET_RVALUE(requestHeaderModification_, requestHeaderModification) };


        // rule Field Functions 
        bool hasRule() const { return this->rule_ != nullptr;};
        void deleteRule() { this->rule_ = nullptr;};
        inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
        inline HttpIncomingRequestHeaderModificationRules& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


        // ruleEnable Field Functions 
        bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
        void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
        inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
        inline HttpIncomingRequestHeaderModificationRules& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline HttpIncomingRequestHeaderModificationRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
        inline HttpIncomingRequestHeaderModificationRules& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      protected:
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // The request header modifications. Supports add, delete, and modify operations.
        shared_ptr<vector<HttpIncomingRequestHeaderModificationRules::RequestHeaderModification>> requestHeaderModification_ {};
        // The rule content.
        shared_ptr<string> rule_ {};
        // The rule switch. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> ruleEnable_ {};
        // The rule name.
        shared_ptr<string> ruleName_ {};
        // The rule execution order.
        shared_ptr<string> sequence_ {};
      };

      class ErrorPagesRedirects : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ErrorPagesRedirects& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(ErrorPagesRedirect, errorPagesRedirect_);
          DARABONBA_PTR_TO_JSON(Rule, rule_);
          DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        };
        friend void from_json(const Darabonba::Json& j, ErrorPagesRedirects& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(ErrorPagesRedirect, errorPagesRedirect_);
          DARABONBA_PTR_FROM_JSON(Rule, rule_);
          DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        };
        ErrorPagesRedirects() = default ;
        ErrorPagesRedirects(const ErrorPagesRedirects &) = default ;
        ErrorPagesRedirects(ErrorPagesRedirects &&) = default ;
        ErrorPagesRedirects(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ErrorPagesRedirects() = default ;
        ErrorPagesRedirects& operator=(const ErrorPagesRedirects &) = default ;
        ErrorPagesRedirects& operator=(ErrorPagesRedirects &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ErrorPagesRedirect : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ErrorPagesRedirect& obj) { 
            DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
            DARABONBA_PTR_TO_JSON(TargetURL, targetURL_);
          };
          friend void from_json(const Darabonba::Json& j, ErrorPagesRedirect& obj) { 
            DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
            DARABONBA_PTR_FROM_JSON(TargetURL, targetURL_);
          };
          ErrorPagesRedirect() = default ;
          ErrorPagesRedirect(const ErrorPagesRedirect &) = default ;
          ErrorPagesRedirect(ErrorPagesRedirect &&) = default ;
          ErrorPagesRedirect(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ErrorPagesRedirect() = default ;
          ErrorPagesRedirect& operator=(const ErrorPagesRedirect &) = default ;
          ErrorPagesRedirect& operator=(ErrorPagesRedirect &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->statusCode_ == nullptr
        && this->targetURL_ == nullptr; };
          // statusCode Field Functions 
          bool hasStatusCode() const { return this->statusCode_ != nullptr;};
          void deleteStatusCode() { this->statusCode_ = nullptr;};
          inline string getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
          inline ErrorPagesRedirect& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


          // targetURL Field Functions 
          bool hasTargetURL() const { return this->targetURL_ != nullptr;};
          void deleteTargetURL() { this->targetURL_ = nullptr;};
          inline string getTargetURL() const { DARABONBA_PTR_GET_DEFAULT(targetURL_, "") };
          inline ErrorPagesRedirect& setTargetURL(string targetURL) { DARABONBA_PTR_SET_VALUE(targetURL_, targetURL) };


        protected:
          // The response status code used by the edge node when responding with the redirect address to the client. Valid values:
          // - 400
          // - 403
          // - 404
          // - 405
          // - 414
          // - 416
          // - 500
          // - 501
          // - 502
          // - 503
          // - 504
          shared_ptr<string> statusCode_ {};
          // The target URL after redirection.
          shared_ptr<string> targetURL_ {};
        };

        virtual bool empty() const override { return this->configId_ == nullptr
        && this->errorPagesRedirect_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->sequence_ == nullptr; };
        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline ErrorPagesRedirects& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // errorPagesRedirect Field Functions 
        bool hasErrorPagesRedirect() const { return this->errorPagesRedirect_ != nullptr;};
        void deleteErrorPagesRedirect() { this->errorPagesRedirect_ = nullptr;};
        inline const vector<ErrorPagesRedirects::ErrorPagesRedirect> & getErrorPagesRedirect() const { DARABONBA_PTR_GET_CONST(errorPagesRedirect_, vector<ErrorPagesRedirects::ErrorPagesRedirect>) };
        inline vector<ErrorPagesRedirects::ErrorPagesRedirect> getErrorPagesRedirect() { DARABONBA_PTR_GET(errorPagesRedirect_, vector<ErrorPagesRedirects::ErrorPagesRedirect>) };
        inline ErrorPagesRedirects& setErrorPagesRedirect(const vector<ErrorPagesRedirects::ErrorPagesRedirect> & errorPagesRedirect) { DARABONBA_PTR_SET_VALUE(errorPagesRedirect_, errorPagesRedirect) };
        inline ErrorPagesRedirects& setErrorPagesRedirect(vector<ErrorPagesRedirects::ErrorPagesRedirect> && errorPagesRedirect) { DARABONBA_PTR_SET_RVALUE(errorPagesRedirect_, errorPagesRedirect) };


        // rule Field Functions 
        bool hasRule() const { return this->rule_ != nullptr;};
        void deleteRule() { this->rule_ = nullptr;};
        inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
        inline ErrorPagesRedirects& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


        // ruleEnable Field Functions 
        bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
        void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
        inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
        inline ErrorPagesRedirects& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline ErrorPagesRedirects& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
        inline ErrorPagesRedirects& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      protected:
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // The error page redirect configuration.
        shared_ptr<vector<ErrorPagesRedirects::ErrorPagesRedirect>> errorPagesRedirect_ {};
        // The rule content. Uses conditional expressions to match user requests. This parameter is not required when adding a global configuration. Two scenarios are supported:
        // - Match all incoming requests: set the value to true.
        // - Match specified requests: set the value to a custom expression, such as (http.host eq \\"video.example.com\\").
        shared_ptr<string> rule_ {};
        // The rule switch. This parameter is not required when adding a global configuration. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> ruleEnable_ {};
        // The rule name. This parameter is not required when adding a global configuration.
        shared_ptr<string> ruleName_ {};
        // The rule execution order. A smaller value indicates a higher priority.
        shared_ptr<string> sequence_ {};
      };

      class DevelopmentMode : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DevelopmentMode& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        };
        friend void from_json(const Darabonba::Json& j, DevelopmentMode& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        };
        DevelopmentMode() = default ;
        DevelopmentMode(const DevelopmentMode &) = default ;
        DevelopmentMode(DevelopmentMode &&) = default ;
        DevelopmentMode(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DevelopmentMode() = default ;
        DevelopmentMode& operator=(const DevelopmentMode &) = default ;
        DevelopmentMode& operator=(DevelopmentMode &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configId_ == nullptr
        && this->enable_ == nullptr && this->sequence_ == nullptr; };
        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline DevelopmentMode& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
        inline DevelopmentMode& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
        inline DevelopmentMode& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      protected:
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // The feature switch. Disabled by default. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> enable_ {};
        // The rule execution order.
        shared_ptr<string> sequence_ {};
      };

      class CustomResponseCode : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomResponseCode& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(PageId, pageId_);
          DARABONBA_PTR_TO_JSON(ReturnCode, returnCode_);
          DARABONBA_PTR_TO_JSON(Rule, rule_);
          DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        };
        friend void from_json(const Darabonba::Json& j, CustomResponseCode& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(PageId, pageId_);
          DARABONBA_PTR_FROM_JSON(ReturnCode, returnCode_);
          DARABONBA_PTR_FROM_JSON(Rule, rule_);
          DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        };
        CustomResponseCode() = default ;
        CustomResponseCode(const CustomResponseCode &) = default ;
        CustomResponseCode(CustomResponseCode &&) = default ;
        CustomResponseCode(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomResponseCode() = default ;
        CustomResponseCode& operator=(const CustomResponseCode &) = default ;
        CustomResponseCode& operator=(CustomResponseCode &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configId_ == nullptr
        && this->pageId_ == nullptr && this->returnCode_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr
        && this->sequence_ == nullptr; };
        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline CustomResponseCode& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // pageId Field Functions 
        bool hasPageId() const { return this->pageId_ != nullptr;};
        void deletePageId() { this->pageId_ = nullptr;};
        inline string getPageId() const { DARABONBA_PTR_GET_DEFAULT(pageId_, "") };
        inline CustomResponseCode& setPageId(string pageId) { DARABONBA_PTR_SET_VALUE(pageId_, pageId) };


        // returnCode Field Functions 
        bool hasReturnCode() const { return this->returnCode_ != nullptr;};
        void deleteReturnCode() { this->returnCode_ = nullptr;};
        inline string getReturnCode() const { DARABONBA_PTR_GET_DEFAULT(returnCode_, "") };
        inline CustomResponseCode& setReturnCode(string returnCode) { DARABONBA_PTR_SET_VALUE(returnCode_, returnCode) };


        // rule Field Functions 
        bool hasRule() const { return this->rule_ != nullptr;};
        void deleteRule() { this->rule_ = nullptr;};
        inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
        inline CustomResponseCode& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


        // ruleEnable Field Functions 
        bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
        void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
        inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
        inline CustomResponseCode& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline CustomResponseCode& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
        inline CustomResponseCode& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      protected:
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // The response page.
        shared_ptr<string> pageId_ {};
        // The response code.
        shared_ptr<string> returnCode_ {};
        // The rule content. Uses conditional expressions to match user requests. This parameter is not required when adding a global configuration. Two scenarios are supported:
        // - Match all incoming requests: set the value to true.
        // - Match specified requests: set the value to a custom expression, such as (http.host eq \\"video.example.com\\").
        shared_ptr<string> rule_ {};
        // The rule switch. This parameter is not required when adding a global configuration. Valid values:
        // 
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> ruleEnable_ {};
        // The rule name. This parameter is not required when adding a global configuration.
        shared_ptr<string> ruleName_ {};
        // The rule execution order. A smaller value indicates a higher priority.
        shared_ptr<string> sequence_ {};
      };

      class CrossBorderOptimization : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CrossBorderOptimization& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        };
        friend void from_json(const Darabonba::Json& j, CrossBorderOptimization& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        };
        CrossBorderOptimization() = default ;
        CrossBorderOptimization(const CrossBorderOptimization &) = default ;
        CrossBorderOptimization(CrossBorderOptimization &&) = default ;
        CrossBorderOptimization(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CrossBorderOptimization() = default ;
        CrossBorderOptimization& operator=(const CrossBorderOptimization &) = default ;
        CrossBorderOptimization& operator=(CrossBorderOptimization &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configId_ == nullptr
        && this->enable_ == nullptr && this->sequence_ == nullptr; };
        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline CrossBorderOptimization& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
        inline CrossBorderOptimization& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
        inline CrossBorderOptimization& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      protected:
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // Specifies whether to enable Chinese mainland network access optimization. Disabled by default. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> enable_ {};
        // The rule execution order.
        shared_ptr<string> sequence_ {};
      };

      class CompressionRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CompressionRules& obj) { 
          DARABONBA_PTR_TO_JSON(Brotli, brotli_);
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(Gzip, gzip_);
          DARABONBA_PTR_TO_JSON(Rule, rule_);
          DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
          DARABONBA_PTR_TO_JSON(Zstd, zstd_);
        };
        friend void from_json(const Darabonba::Json& j, CompressionRules& obj) { 
          DARABONBA_PTR_FROM_JSON(Brotli, brotli_);
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(Gzip, gzip_);
          DARABONBA_PTR_FROM_JSON(Rule, rule_);
          DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
          DARABONBA_PTR_FROM_JSON(Zstd, zstd_);
        };
        CompressionRules() = default ;
        CompressionRules(const CompressionRules &) = default ;
        CompressionRules(CompressionRules &&) = default ;
        CompressionRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CompressionRules() = default ;
        CompressionRules& operator=(const CompressionRules &) = default ;
        CompressionRules& operator=(CompressionRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->brotli_ == nullptr
        && this->configId_ == nullptr && this->gzip_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr
        && this->sequence_ == nullptr && this->zstd_ == nullptr; };
        // brotli Field Functions 
        bool hasBrotli() const { return this->brotli_ != nullptr;};
        void deleteBrotli() { this->brotli_ = nullptr;};
        inline string getBrotli() const { DARABONBA_PTR_GET_DEFAULT(brotli_, "") };
        inline CompressionRules& setBrotli(string brotli) { DARABONBA_PTR_SET_VALUE(brotli_, brotli) };


        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline CompressionRules& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // gzip Field Functions 
        bool hasGzip() const { return this->gzip_ != nullptr;};
        void deleteGzip() { this->gzip_ = nullptr;};
        inline string getGzip() const { DARABONBA_PTR_GET_DEFAULT(gzip_, "") };
        inline CompressionRules& setGzip(string gzip) { DARABONBA_PTR_SET_VALUE(gzip_, gzip) };


        // rule Field Functions 
        bool hasRule() const { return this->rule_ != nullptr;};
        void deleteRule() { this->rule_ = nullptr;};
        inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
        inline CompressionRules& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


        // ruleEnable Field Functions 
        bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
        void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
        inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
        inline CompressionRules& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline CompressionRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
        inline CompressionRules& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


        // zstd Field Functions 
        bool hasZstd() const { return this->zstd_ != nullptr;};
        void deleteZstd() { this->zstd_ = nullptr;};
        inline string getZstd() const { DARABONBA_PTR_GET_DEFAULT(zstd_, "") };
        inline CompressionRules& setZstd(string zstd) { DARABONBA_PTR_SET_VALUE(zstd_, zstd) };


      protected:
        // Specifies whether to enable Brotli compression. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> brotli_ {};
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // Specifies whether to enable Gzip compression. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> gzip_ {};
        // The rule content.
        shared_ptr<string> rule_ {};
        // The rule switch. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> ruleEnable_ {};
        // The rule name.
        shared_ptr<string> ruleName_ {};
        // The rule execution order.
        shared_ptr<string> sequence_ {};
        // Specifies whether to enable Zstd compression. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> zstd_ {};
      };

      class CnameFlattening : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CnameFlattening& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(FlattenMode, flattenMode_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        };
        friend void from_json(const Darabonba::Json& j, CnameFlattening& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(FlattenMode, flattenMode_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        };
        CnameFlattening() = default ;
        CnameFlattening(const CnameFlattening &) = default ;
        CnameFlattening(CnameFlattening &&) = default ;
        CnameFlattening(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CnameFlattening() = default ;
        CnameFlattening& operator=(const CnameFlattening &) = default ;
        CnameFlattening& operator=(CnameFlattening &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configId_ == nullptr
        && this->flattenMode_ == nullptr && this->sequence_ == nullptr; };
        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline CnameFlattening& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // flattenMode Field Functions 
        bool hasFlattenMode() const { return this->flattenMode_ != nullptr;};
        void deleteFlattenMode() { this->flattenMode_ = nullptr;};
        inline string getFlattenMode() const { DARABONBA_PTR_GET_DEFAULT(flattenMode_, "") };
        inline CnameFlattening& setFlattenMode(string flattenMode) { DARABONBA_PTR_SET_VALUE(flattenMode_, flattenMode) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
        inline CnameFlattening& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      protected:
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // The flattening mode. Valid values:
        // - flatten_all: flattens all records.
        // - flatten_at_root: flattens only the root domain. This is the default value.
        shared_ptr<string> flattenMode_ {};
        // The rule execution order.
        shared_ptr<string> sequence_ {};
      };

      class CacheTags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CacheTags& obj) { 
          DARABONBA_PTR_TO_JSON(CaseInsensitive, caseInsensitive_);
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
          DARABONBA_PTR_TO_JSON(TagName, tagName_);
        };
        friend void from_json(const Darabonba::Json& j, CacheTags& obj) { 
          DARABONBA_PTR_FROM_JSON(CaseInsensitive, caseInsensitive_);
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
          DARABONBA_PTR_FROM_JSON(TagName, tagName_);
        };
        CacheTags() = default ;
        CacheTags(const CacheTags &) = default ;
        CacheTags(CacheTags &&) = default ;
        CacheTags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CacheTags() = default ;
        CacheTags& operator=(const CacheTags &) = default ;
        CacheTags& operator=(CacheTags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->caseInsensitive_ == nullptr
        && this->configId_ == nullptr && this->sequence_ == nullptr && this->tagName_ == nullptr; };
        // caseInsensitive Field Functions 
        bool hasCaseInsensitive() const { return this->caseInsensitive_ != nullptr;};
        void deleteCaseInsensitive() { this->caseInsensitive_ = nullptr;};
        inline string getCaseInsensitive() const { DARABONBA_PTR_GET_DEFAULT(caseInsensitive_, "") };
        inline CacheTags& setCaseInsensitive(string caseInsensitive) { DARABONBA_PTR_SET_VALUE(caseInsensitive_, caseInsensitive) };


        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline CacheTags& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
        inline CacheTags& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


        // tagName Field Functions 
        bool hasTagName() const { return this->tagName_ != nullptr;};
        void deleteTagName() { this->tagName_ = nullptr;};
        inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
        inline CacheTags& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


      protected:
        // Specifies whether to ignore case. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> caseInsensitive_ {};
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // The rule execution order.
        shared_ptr<string> sequence_ {};
        // The custom CacheTag name.
        shared_ptr<string> tagName_ {};
      };

      class CacheRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CacheRules& obj) { 
          DARABONBA_PTR_TO_JSON(AdditionalCacheablePorts, additionalCacheablePorts_);
          DARABONBA_PTR_TO_JSON(BrowserCacheMode, browserCacheMode_);
          DARABONBA_PTR_TO_JSON(BrowserCacheTtl, browserCacheTtl_);
          DARABONBA_PTR_TO_JSON(BypassCache, bypassCache_);
          DARABONBA_PTR_TO_JSON(CacheDeceptionArmor, cacheDeceptionArmor_);
          DARABONBA_PTR_TO_JSON(CacheReserveEligibility, cacheReserveEligibility_);
          DARABONBA_PTR_TO_JSON(CheckPresenceCookie, checkPresenceCookie_);
          DARABONBA_PTR_TO_JSON(CheckPresenceHeader, checkPresenceHeader_);
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(EdgeCacheMode, edgeCacheMode_);
          DARABONBA_PTR_TO_JSON(EdgeCacheTtl, edgeCacheTtl_);
          DARABONBA_PTR_TO_JSON(EdgeStatusCodeCacheTtl, edgeStatusCodeCacheTtl_);
          DARABONBA_PTR_TO_JSON(IncludeCookie, includeCookie_);
          DARABONBA_PTR_TO_JSON(IncludeHeader, includeHeader_);
          DARABONBA_PTR_TO_JSON(PostBodyCacheKey, postBodyCacheKey_);
          DARABONBA_PTR_TO_JSON(PostBodySizeLimit, postBodySizeLimit_);
          DARABONBA_PTR_TO_JSON(PostCache, postCache_);
          DARABONBA_PTR_TO_JSON(QueryString, queryString_);
          DARABONBA_PTR_TO_JSON(QueryStringMode, queryStringMode_);
          DARABONBA_PTR_TO_JSON(Rule, rule_);
          DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(Sequence, sequence_);
          DARABONBA_PTR_TO_JSON(ServeStale, serveStale_);
          DARABONBA_PTR_TO_JSON(SortQueryStringForCache, sortQueryStringForCache_);
          DARABONBA_PTR_TO_JSON(UserDeviceType, userDeviceType_);
          DARABONBA_PTR_TO_JSON(UserGeo, userGeo_);
          DARABONBA_PTR_TO_JSON(UserLanguage, userLanguage_);
        };
        friend void from_json(const Darabonba::Json& j, CacheRules& obj) { 
          DARABONBA_PTR_FROM_JSON(AdditionalCacheablePorts, additionalCacheablePorts_);
          DARABONBA_PTR_FROM_JSON(BrowserCacheMode, browserCacheMode_);
          DARABONBA_PTR_FROM_JSON(BrowserCacheTtl, browserCacheTtl_);
          DARABONBA_PTR_FROM_JSON(BypassCache, bypassCache_);
          DARABONBA_PTR_FROM_JSON(CacheDeceptionArmor, cacheDeceptionArmor_);
          DARABONBA_PTR_FROM_JSON(CacheReserveEligibility, cacheReserveEligibility_);
          DARABONBA_PTR_FROM_JSON(CheckPresenceCookie, checkPresenceCookie_);
          DARABONBA_PTR_FROM_JSON(CheckPresenceHeader, checkPresenceHeader_);
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(EdgeCacheMode, edgeCacheMode_);
          DARABONBA_PTR_FROM_JSON(EdgeCacheTtl, edgeCacheTtl_);
          DARABONBA_PTR_FROM_JSON(EdgeStatusCodeCacheTtl, edgeStatusCodeCacheTtl_);
          DARABONBA_PTR_FROM_JSON(IncludeCookie, includeCookie_);
          DARABONBA_PTR_FROM_JSON(IncludeHeader, includeHeader_);
          DARABONBA_PTR_FROM_JSON(PostBodyCacheKey, postBodyCacheKey_);
          DARABONBA_PTR_FROM_JSON(PostBodySizeLimit, postBodySizeLimit_);
          DARABONBA_PTR_FROM_JSON(PostCache, postCache_);
          DARABONBA_PTR_FROM_JSON(QueryString, queryString_);
          DARABONBA_PTR_FROM_JSON(QueryStringMode, queryStringMode_);
          DARABONBA_PTR_FROM_JSON(Rule, rule_);
          DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
          DARABONBA_PTR_FROM_JSON(ServeStale, serveStale_);
          DARABONBA_PTR_FROM_JSON(SortQueryStringForCache, sortQueryStringForCache_);
          DARABONBA_PTR_FROM_JSON(UserDeviceType, userDeviceType_);
          DARABONBA_PTR_FROM_JSON(UserGeo, userGeo_);
          DARABONBA_PTR_FROM_JSON(UserLanguage, userLanguage_);
        };
        CacheRules() = default ;
        CacheRules(const CacheRules &) = default ;
        CacheRules(CacheRules &&) = default ;
        CacheRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CacheRules() = default ;
        CacheRules& operator=(const CacheRules &) = default ;
        CacheRules& operator=(CacheRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->additionalCacheablePorts_ == nullptr
        && this->browserCacheMode_ == nullptr && this->browserCacheTtl_ == nullptr && this->bypassCache_ == nullptr && this->cacheDeceptionArmor_ == nullptr && this->cacheReserveEligibility_ == nullptr
        && this->checkPresenceCookie_ == nullptr && this->checkPresenceHeader_ == nullptr && this->configId_ == nullptr && this->edgeCacheMode_ == nullptr && this->edgeCacheTtl_ == nullptr
        && this->edgeStatusCodeCacheTtl_ == nullptr && this->includeCookie_ == nullptr && this->includeHeader_ == nullptr && this->postBodyCacheKey_ == nullptr && this->postBodySizeLimit_ == nullptr
        && this->postCache_ == nullptr && this->queryString_ == nullptr && this->queryStringMode_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr
        && this->ruleName_ == nullptr && this->sequence_ == nullptr && this->serveStale_ == nullptr && this->sortQueryStringForCache_ == nullptr && this->userDeviceType_ == nullptr
        && this->userGeo_ == nullptr && this->userLanguage_ == nullptr; };
        // additionalCacheablePorts Field Functions 
        bool hasAdditionalCacheablePorts() const { return this->additionalCacheablePorts_ != nullptr;};
        void deleteAdditionalCacheablePorts() { this->additionalCacheablePorts_ = nullptr;};
        inline string getAdditionalCacheablePorts() const { DARABONBA_PTR_GET_DEFAULT(additionalCacheablePorts_, "") };
        inline CacheRules& setAdditionalCacheablePorts(string additionalCacheablePorts) { DARABONBA_PTR_SET_VALUE(additionalCacheablePorts_, additionalCacheablePorts) };


        // browserCacheMode Field Functions 
        bool hasBrowserCacheMode() const { return this->browserCacheMode_ != nullptr;};
        void deleteBrowserCacheMode() { this->browserCacheMode_ = nullptr;};
        inline string getBrowserCacheMode() const { DARABONBA_PTR_GET_DEFAULT(browserCacheMode_, "") };
        inline CacheRules& setBrowserCacheMode(string browserCacheMode) { DARABONBA_PTR_SET_VALUE(browserCacheMode_, browserCacheMode) };


        // browserCacheTtl Field Functions 
        bool hasBrowserCacheTtl() const { return this->browserCacheTtl_ != nullptr;};
        void deleteBrowserCacheTtl() { this->browserCacheTtl_ = nullptr;};
        inline string getBrowserCacheTtl() const { DARABONBA_PTR_GET_DEFAULT(browserCacheTtl_, "") };
        inline CacheRules& setBrowserCacheTtl(string browserCacheTtl) { DARABONBA_PTR_SET_VALUE(browserCacheTtl_, browserCacheTtl) };


        // bypassCache Field Functions 
        bool hasBypassCache() const { return this->bypassCache_ != nullptr;};
        void deleteBypassCache() { this->bypassCache_ = nullptr;};
        inline string getBypassCache() const { DARABONBA_PTR_GET_DEFAULT(bypassCache_, "") };
        inline CacheRules& setBypassCache(string bypassCache) { DARABONBA_PTR_SET_VALUE(bypassCache_, bypassCache) };


        // cacheDeceptionArmor Field Functions 
        bool hasCacheDeceptionArmor() const { return this->cacheDeceptionArmor_ != nullptr;};
        void deleteCacheDeceptionArmor() { this->cacheDeceptionArmor_ = nullptr;};
        inline string getCacheDeceptionArmor() const { DARABONBA_PTR_GET_DEFAULT(cacheDeceptionArmor_, "") };
        inline CacheRules& setCacheDeceptionArmor(string cacheDeceptionArmor) { DARABONBA_PTR_SET_VALUE(cacheDeceptionArmor_, cacheDeceptionArmor) };


        // cacheReserveEligibility Field Functions 
        bool hasCacheReserveEligibility() const { return this->cacheReserveEligibility_ != nullptr;};
        void deleteCacheReserveEligibility() { this->cacheReserveEligibility_ = nullptr;};
        inline string getCacheReserveEligibility() const { DARABONBA_PTR_GET_DEFAULT(cacheReserveEligibility_, "") };
        inline CacheRules& setCacheReserveEligibility(string cacheReserveEligibility) { DARABONBA_PTR_SET_VALUE(cacheReserveEligibility_, cacheReserveEligibility) };


        // checkPresenceCookie Field Functions 
        bool hasCheckPresenceCookie() const { return this->checkPresenceCookie_ != nullptr;};
        void deleteCheckPresenceCookie() { this->checkPresenceCookie_ = nullptr;};
        inline string getCheckPresenceCookie() const { DARABONBA_PTR_GET_DEFAULT(checkPresenceCookie_, "") };
        inline CacheRules& setCheckPresenceCookie(string checkPresenceCookie) { DARABONBA_PTR_SET_VALUE(checkPresenceCookie_, checkPresenceCookie) };


        // checkPresenceHeader Field Functions 
        bool hasCheckPresenceHeader() const { return this->checkPresenceHeader_ != nullptr;};
        void deleteCheckPresenceHeader() { this->checkPresenceHeader_ = nullptr;};
        inline string getCheckPresenceHeader() const { DARABONBA_PTR_GET_DEFAULT(checkPresenceHeader_, "") };
        inline CacheRules& setCheckPresenceHeader(string checkPresenceHeader) { DARABONBA_PTR_SET_VALUE(checkPresenceHeader_, checkPresenceHeader) };


        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline CacheRules& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // edgeCacheMode Field Functions 
        bool hasEdgeCacheMode() const { return this->edgeCacheMode_ != nullptr;};
        void deleteEdgeCacheMode() { this->edgeCacheMode_ = nullptr;};
        inline string getEdgeCacheMode() const { DARABONBA_PTR_GET_DEFAULT(edgeCacheMode_, "") };
        inline CacheRules& setEdgeCacheMode(string edgeCacheMode) { DARABONBA_PTR_SET_VALUE(edgeCacheMode_, edgeCacheMode) };


        // edgeCacheTtl Field Functions 
        bool hasEdgeCacheTtl() const { return this->edgeCacheTtl_ != nullptr;};
        void deleteEdgeCacheTtl() { this->edgeCacheTtl_ = nullptr;};
        inline string getEdgeCacheTtl() const { DARABONBA_PTR_GET_DEFAULT(edgeCacheTtl_, "") };
        inline CacheRules& setEdgeCacheTtl(string edgeCacheTtl) { DARABONBA_PTR_SET_VALUE(edgeCacheTtl_, edgeCacheTtl) };


        // edgeStatusCodeCacheTtl Field Functions 
        bool hasEdgeStatusCodeCacheTtl() const { return this->edgeStatusCodeCacheTtl_ != nullptr;};
        void deleteEdgeStatusCodeCacheTtl() { this->edgeStatusCodeCacheTtl_ = nullptr;};
        inline string getEdgeStatusCodeCacheTtl() const { DARABONBA_PTR_GET_DEFAULT(edgeStatusCodeCacheTtl_, "") };
        inline CacheRules& setEdgeStatusCodeCacheTtl(string edgeStatusCodeCacheTtl) { DARABONBA_PTR_SET_VALUE(edgeStatusCodeCacheTtl_, edgeStatusCodeCacheTtl) };


        // includeCookie Field Functions 
        bool hasIncludeCookie() const { return this->includeCookie_ != nullptr;};
        void deleteIncludeCookie() { this->includeCookie_ = nullptr;};
        inline string getIncludeCookie() const { DARABONBA_PTR_GET_DEFAULT(includeCookie_, "") };
        inline CacheRules& setIncludeCookie(string includeCookie) { DARABONBA_PTR_SET_VALUE(includeCookie_, includeCookie) };


        // includeHeader Field Functions 
        bool hasIncludeHeader() const { return this->includeHeader_ != nullptr;};
        void deleteIncludeHeader() { this->includeHeader_ = nullptr;};
        inline string getIncludeHeader() const { DARABONBA_PTR_GET_DEFAULT(includeHeader_, "") };
        inline CacheRules& setIncludeHeader(string includeHeader) { DARABONBA_PTR_SET_VALUE(includeHeader_, includeHeader) };


        // postBodyCacheKey Field Functions 
        bool hasPostBodyCacheKey() const { return this->postBodyCacheKey_ != nullptr;};
        void deletePostBodyCacheKey() { this->postBodyCacheKey_ = nullptr;};
        inline string getPostBodyCacheKey() const { DARABONBA_PTR_GET_DEFAULT(postBodyCacheKey_, "") };
        inline CacheRules& setPostBodyCacheKey(string postBodyCacheKey) { DARABONBA_PTR_SET_VALUE(postBodyCacheKey_, postBodyCacheKey) };


        // postBodySizeLimit Field Functions 
        bool hasPostBodySizeLimit() const { return this->postBodySizeLimit_ != nullptr;};
        void deletePostBodySizeLimit() { this->postBodySizeLimit_ = nullptr;};
        inline string getPostBodySizeLimit() const { DARABONBA_PTR_GET_DEFAULT(postBodySizeLimit_, "") };
        inline CacheRules& setPostBodySizeLimit(string postBodySizeLimit) { DARABONBA_PTR_SET_VALUE(postBodySizeLimit_, postBodySizeLimit) };


        // postCache Field Functions 
        bool hasPostCache() const { return this->postCache_ != nullptr;};
        void deletePostCache() { this->postCache_ = nullptr;};
        inline string getPostCache() const { DARABONBA_PTR_GET_DEFAULT(postCache_, "") };
        inline CacheRules& setPostCache(string postCache) { DARABONBA_PTR_SET_VALUE(postCache_, postCache) };


        // queryString Field Functions 
        bool hasQueryString() const { return this->queryString_ != nullptr;};
        void deleteQueryString() { this->queryString_ = nullptr;};
        inline string getQueryString() const { DARABONBA_PTR_GET_DEFAULT(queryString_, "") };
        inline CacheRules& setQueryString(string queryString) { DARABONBA_PTR_SET_VALUE(queryString_, queryString) };


        // queryStringMode Field Functions 
        bool hasQueryStringMode() const { return this->queryStringMode_ != nullptr;};
        void deleteQueryStringMode() { this->queryStringMode_ = nullptr;};
        inline string getQueryStringMode() const { DARABONBA_PTR_GET_DEFAULT(queryStringMode_, "") };
        inline CacheRules& setQueryStringMode(string queryStringMode) { DARABONBA_PTR_SET_VALUE(queryStringMode_, queryStringMode) };


        // rule Field Functions 
        bool hasRule() const { return this->rule_ != nullptr;};
        void deleteRule() { this->rule_ = nullptr;};
        inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
        inline CacheRules& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


        // ruleEnable Field Functions 
        bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
        void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
        inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
        inline CacheRules& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline CacheRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // sequence Field Functions 
        bool hasSequence() const { return this->sequence_ != nullptr;};
        void deleteSequence() { this->sequence_ = nullptr;};
        inline string getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, "") };
        inline CacheRules& setSequence(string sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


        // serveStale Field Functions 
        bool hasServeStale() const { return this->serveStale_ != nullptr;};
        void deleteServeStale() { this->serveStale_ = nullptr;};
        inline string getServeStale() const { DARABONBA_PTR_GET_DEFAULT(serveStale_, "") };
        inline CacheRules& setServeStale(string serveStale) { DARABONBA_PTR_SET_VALUE(serveStale_, serveStale) };


        // sortQueryStringForCache Field Functions 
        bool hasSortQueryStringForCache() const { return this->sortQueryStringForCache_ != nullptr;};
        void deleteSortQueryStringForCache() { this->sortQueryStringForCache_ = nullptr;};
        inline string getSortQueryStringForCache() const { DARABONBA_PTR_GET_DEFAULT(sortQueryStringForCache_, "") };
        inline CacheRules& setSortQueryStringForCache(string sortQueryStringForCache) { DARABONBA_PTR_SET_VALUE(sortQueryStringForCache_, sortQueryStringForCache) };


        // userDeviceType Field Functions 
        bool hasUserDeviceType() const { return this->userDeviceType_ != nullptr;};
        void deleteUserDeviceType() { this->userDeviceType_ = nullptr;};
        inline string getUserDeviceType() const { DARABONBA_PTR_GET_DEFAULT(userDeviceType_, "") };
        inline CacheRules& setUserDeviceType(string userDeviceType) { DARABONBA_PTR_SET_VALUE(userDeviceType_, userDeviceType) };


        // userGeo Field Functions 
        bool hasUserGeo() const { return this->userGeo_ != nullptr;};
        void deleteUserGeo() { this->userGeo_ = nullptr;};
        inline string getUserGeo() const { DARABONBA_PTR_GET_DEFAULT(userGeo_, "") };
        inline CacheRules& setUserGeo(string userGeo) { DARABONBA_PTR_SET_VALUE(userGeo_, userGeo) };


        // userLanguage Field Functions 
        bool hasUserLanguage() const { return this->userLanguage_ != nullptr;};
        void deleteUserLanguage() { this->userLanguage_ = nullptr;};
        inline string getUserLanguage() const { DARABONBA_PTR_GET_DEFAULT(userLanguage_, "") };
        inline CacheRules& setUserLanguage(string userLanguage) { DARABONBA_PTR_SET_VALUE(userLanguage_, userLanguage) };


      protected:
        // The ports on which caching is enabled. Valid values: 8880, 2052, 2082, 2086, 2095, 2053, 2083, 2087, and 2096.
        shared_ptr<string> additionalCacheablePorts_ {};
        // The browser cache mode. Valid values:
        // - no_cache: no caching.
        // - follow_origin: follows the origin server cache policy.
        // - override_origin: overrides the origin server cache policy.
        shared_ptr<string> browserCacheMode_ {};
        // The browser cache expiration time, in seconds.
        shared_ptr<string> browserCacheTtl_ {};
        // The bypass cache mode. Valid values:
        // - cache_all: all requests are cached.
        // - bypass_all: all requests bypass the cache.
        shared_ptr<string> bypassCache_ {};
        // Specifies whether to enable cache deception armor. This feature protects against web cache deception attacks by caching only content that passes validation. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> cacheDeceptionArmor_ {};
        // The cache reserve eligibility. Controls whether requests bypass the cache reserve node during back-to-origin. Valid values:
        // - bypass_cache_reserve: requests bypass cache reserve.
        // - eligible_for_cache_reserve: requests are eligible for cache reserve.
        shared_ptr<string> cacheReserveEligibility_ {};
        // Checks whether a cookie exists when generating cache keys. If the cookie exists, the cookie name (case-insensitive) is added to the cache key. Multiple cookie names are supported and separated by spaces.
        shared_ptr<string> checkPresenceCookie_ {};
        // Checks whether a header exists when generating cache keys. If the header exists, the header name (case-insensitive) is added to the cache key. Multiple header names are supported and separated by spaces.
        shared_ptr<string> checkPresenceHeader_ {};
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // The edge cache mode. Valid values:
        // - follow_origin: follows the origin server cache policy (if present). Otherwise, uses the default cache policy.
        // - no_cache: no caching.
        // - override_origin: overrides the origin server cache policy.
        // - follow_origin_bypass: follows the origin server cache policy (if present). Otherwise, does not cache.
        shared_ptr<string> edgeCacheMode_ {};
        // The edge cache expiration time, in seconds.
        shared_ptr<string> edgeCacheTtl_ {};
        // The status code cache expiration time, in seconds.
        shared_ptr<string> edgeStatusCodeCacheTtl_ {};
        // The cookie names and their values to include when generating cache keys. Multiple values are supported and separated by spaces.
        shared_ptr<string> includeCookie_ {};
        // The header names and their values to include when generating cache keys. Multiple values are supported and separated by spaces.
        shared_ptr<string> includeHeader_ {};
        // The cache key processing mode.
        shared_ptr<string> postBodyCacheKey_ {};
        // The body size limit, in KB. Supports body sizes from 1 to 8 KB. If left empty, the default value of 8 KB is used.
        shared_ptr<string> postBodySizeLimit_ {};
        // The POST cache switch.
        shared_ptr<string> postCache_ {};
        // The query strings to retain or remove. Multiple values are supported and separated by spaces.
        shared_ptr<string> queryString_ {};
        // The query string processing mode when generating cache keys. Valid values:
        // - ignore_all: ignores all query strings.
        // - exclude_query_string: removes specified query strings.
        // - reserve_all: retains all query strings. This is the default value.
        // - include_query_string: retains specified query strings.
        shared_ptr<string> queryStringMode_ {};
        // The rule content.
        shared_ptr<string> rule_ {};
        // The rule switch. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> ruleEnable_ {};
        // The rule name.
        shared_ptr<string> ruleName_ {};
        // The rule execution order.
        shared_ptr<string> sequence_ {};
        // Specifies whether to serve stale cache. When enabled, the edge node can respond to user requests with cached expired content when the origin server is unavailable. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> serveStale_ {};
        // Specifies whether to sort query strings. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> sortQueryStringForCache_ {};
        // Specifies whether to include the type of the client when generating cache keys. Valid values:
        // - on: enabled.
        // - off: shutdown.
        shared_ptr<string> userDeviceType_ {};
        // Specifies whether to include the client geographic location when generating cache keys. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> userGeo_ {};
        // Specifies whether to include the client language type when generating cache keys. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> userLanguage_ {};
      };

      class CacheReserve : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CacheReserve& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigId, configId_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        };
        friend void from_json(const Darabonba::Json& j, CacheReserve& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        };
        CacheReserve() = default ;
        CacheReserve(const CacheReserve &) = default ;
        CacheReserve(CacheReserve &&) = default ;
        CacheReserve(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CacheReserve() = default ;
        CacheReserve& operator=(const CacheReserve &) = default ;
        CacheReserve& operator=(CacheReserve &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->configId_ == nullptr
        && this->enable_ == nullptr && this->instanceId_ == nullptr; };
        // configId Field Functions 
        bool hasConfigId() const { return this->configId_ != nullptr;};
        void deleteConfigId() { this->configId_ = nullptr;};
        inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
        inline CacheReserve& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
        inline CacheReserve& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline CacheReserve& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      protected:
        // The configuration ID.
        shared_ptr<int64_t> configId_ {};
        // Specifies whether to enable cache reserve. Disabled by default. Valid values:
        // - on: enabled.
        // - off: disabled.
        shared_ptr<string> enable_ {};
        // The cache reserve instance ID.
        shared_ptr<string> instanceId_ {};
      };

      virtual bool empty() const override { return this->cacheReserve_ == nullptr
        && this->cacheRules_ == nullptr && this->cacheTags_ == nullptr && this->cnameFlattening_ == nullptr && this->compressionRules_ == nullptr && this->crossBorderOptimization_ == nullptr
        && this->customResponseCode_ == nullptr && this->developmentMode_ == nullptr && this->errorPagesRedirects_ == nullptr && this->httpIncomingRequestHeaderModificationRules_ == nullptr && this->httpIncomingResponseHeaderModificationRules_ == nullptr
        && this->httpRequestHeaderModificationRules_ == nullptr && this->httpResponseHeaderModificationRules_ == nullptr && this->httpsApplicationConfiguration_ == nullptr && this->httpsBasicConfiguration_ == nullptr && this->imageTransform_ == nullptr
        && this->ipv6_ == nullptr && this->managedTransforms_ == nullptr && this->networkOptimization_ == nullptr && this->originRules_ == nullptr && this->redirectRules_ == nullptr
        && this->rewriteUrlRules_ == nullptr && this->seoBypass_ == nullptr && this->siteNameExclusive_ == nullptr && this->sitePause_ == nullptr && this->tieredCache_ == nullptr
        && this->videoProcessing_ == nullptr; };
      // cacheReserve Field Functions 
      bool hasCacheReserve() const { return this->cacheReserve_ != nullptr;};
      void deleteCacheReserve() { this->cacheReserve_ = nullptr;};
      inline const vector<Configs::CacheReserve> & getCacheReserve() const { DARABONBA_PTR_GET_CONST(cacheReserve_, vector<Configs::CacheReserve>) };
      inline vector<Configs::CacheReserve> getCacheReserve() { DARABONBA_PTR_GET(cacheReserve_, vector<Configs::CacheReserve>) };
      inline Configs& setCacheReserve(const vector<Configs::CacheReserve> & cacheReserve) { DARABONBA_PTR_SET_VALUE(cacheReserve_, cacheReserve) };
      inline Configs& setCacheReserve(vector<Configs::CacheReserve> && cacheReserve) { DARABONBA_PTR_SET_RVALUE(cacheReserve_, cacheReserve) };


      // cacheRules Field Functions 
      bool hasCacheRules() const { return this->cacheRules_ != nullptr;};
      void deleteCacheRules() { this->cacheRules_ = nullptr;};
      inline const vector<Configs::CacheRules> & getCacheRules() const { DARABONBA_PTR_GET_CONST(cacheRules_, vector<Configs::CacheRules>) };
      inline vector<Configs::CacheRules> getCacheRules() { DARABONBA_PTR_GET(cacheRules_, vector<Configs::CacheRules>) };
      inline Configs& setCacheRules(const vector<Configs::CacheRules> & cacheRules) { DARABONBA_PTR_SET_VALUE(cacheRules_, cacheRules) };
      inline Configs& setCacheRules(vector<Configs::CacheRules> && cacheRules) { DARABONBA_PTR_SET_RVALUE(cacheRules_, cacheRules) };


      // cacheTags Field Functions 
      bool hasCacheTags() const { return this->cacheTags_ != nullptr;};
      void deleteCacheTags() { this->cacheTags_ = nullptr;};
      inline const vector<Configs::CacheTags> & getCacheTags() const { DARABONBA_PTR_GET_CONST(cacheTags_, vector<Configs::CacheTags>) };
      inline vector<Configs::CacheTags> getCacheTags() { DARABONBA_PTR_GET(cacheTags_, vector<Configs::CacheTags>) };
      inline Configs& setCacheTags(const vector<Configs::CacheTags> & cacheTags) { DARABONBA_PTR_SET_VALUE(cacheTags_, cacheTags) };
      inline Configs& setCacheTags(vector<Configs::CacheTags> && cacheTags) { DARABONBA_PTR_SET_RVALUE(cacheTags_, cacheTags) };


      // cnameFlattening Field Functions 
      bool hasCnameFlattening() const { return this->cnameFlattening_ != nullptr;};
      void deleteCnameFlattening() { this->cnameFlattening_ = nullptr;};
      inline const vector<Configs::CnameFlattening> & getCnameFlattening() const { DARABONBA_PTR_GET_CONST(cnameFlattening_, vector<Configs::CnameFlattening>) };
      inline vector<Configs::CnameFlattening> getCnameFlattening() { DARABONBA_PTR_GET(cnameFlattening_, vector<Configs::CnameFlattening>) };
      inline Configs& setCnameFlattening(const vector<Configs::CnameFlattening> & cnameFlattening) { DARABONBA_PTR_SET_VALUE(cnameFlattening_, cnameFlattening) };
      inline Configs& setCnameFlattening(vector<Configs::CnameFlattening> && cnameFlattening) { DARABONBA_PTR_SET_RVALUE(cnameFlattening_, cnameFlattening) };


      // compressionRules Field Functions 
      bool hasCompressionRules() const { return this->compressionRules_ != nullptr;};
      void deleteCompressionRules() { this->compressionRules_ = nullptr;};
      inline const vector<Configs::CompressionRules> & getCompressionRules() const { DARABONBA_PTR_GET_CONST(compressionRules_, vector<Configs::CompressionRules>) };
      inline vector<Configs::CompressionRules> getCompressionRules() { DARABONBA_PTR_GET(compressionRules_, vector<Configs::CompressionRules>) };
      inline Configs& setCompressionRules(const vector<Configs::CompressionRules> & compressionRules) { DARABONBA_PTR_SET_VALUE(compressionRules_, compressionRules) };
      inline Configs& setCompressionRules(vector<Configs::CompressionRules> && compressionRules) { DARABONBA_PTR_SET_RVALUE(compressionRules_, compressionRules) };


      // crossBorderOptimization Field Functions 
      bool hasCrossBorderOptimization() const { return this->crossBorderOptimization_ != nullptr;};
      void deleteCrossBorderOptimization() { this->crossBorderOptimization_ = nullptr;};
      inline const vector<Configs::CrossBorderOptimization> & getCrossBorderOptimization() const { DARABONBA_PTR_GET_CONST(crossBorderOptimization_, vector<Configs::CrossBorderOptimization>) };
      inline vector<Configs::CrossBorderOptimization> getCrossBorderOptimization() { DARABONBA_PTR_GET(crossBorderOptimization_, vector<Configs::CrossBorderOptimization>) };
      inline Configs& setCrossBorderOptimization(const vector<Configs::CrossBorderOptimization> & crossBorderOptimization) { DARABONBA_PTR_SET_VALUE(crossBorderOptimization_, crossBorderOptimization) };
      inline Configs& setCrossBorderOptimization(vector<Configs::CrossBorderOptimization> && crossBorderOptimization) { DARABONBA_PTR_SET_RVALUE(crossBorderOptimization_, crossBorderOptimization) };


      // customResponseCode Field Functions 
      bool hasCustomResponseCode() const { return this->customResponseCode_ != nullptr;};
      void deleteCustomResponseCode() { this->customResponseCode_ = nullptr;};
      inline const vector<Configs::CustomResponseCode> & getCustomResponseCode() const { DARABONBA_PTR_GET_CONST(customResponseCode_, vector<Configs::CustomResponseCode>) };
      inline vector<Configs::CustomResponseCode> getCustomResponseCode() { DARABONBA_PTR_GET(customResponseCode_, vector<Configs::CustomResponseCode>) };
      inline Configs& setCustomResponseCode(const vector<Configs::CustomResponseCode> & customResponseCode) { DARABONBA_PTR_SET_VALUE(customResponseCode_, customResponseCode) };
      inline Configs& setCustomResponseCode(vector<Configs::CustomResponseCode> && customResponseCode) { DARABONBA_PTR_SET_RVALUE(customResponseCode_, customResponseCode) };


      // developmentMode Field Functions 
      bool hasDevelopmentMode() const { return this->developmentMode_ != nullptr;};
      void deleteDevelopmentMode() { this->developmentMode_ = nullptr;};
      inline const vector<Configs::DevelopmentMode> & getDevelopmentMode() const { DARABONBA_PTR_GET_CONST(developmentMode_, vector<Configs::DevelopmentMode>) };
      inline vector<Configs::DevelopmentMode> getDevelopmentMode() { DARABONBA_PTR_GET(developmentMode_, vector<Configs::DevelopmentMode>) };
      inline Configs& setDevelopmentMode(const vector<Configs::DevelopmentMode> & developmentMode) { DARABONBA_PTR_SET_VALUE(developmentMode_, developmentMode) };
      inline Configs& setDevelopmentMode(vector<Configs::DevelopmentMode> && developmentMode) { DARABONBA_PTR_SET_RVALUE(developmentMode_, developmentMode) };


      // errorPagesRedirects Field Functions 
      bool hasErrorPagesRedirects() const { return this->errorPagesRedirects_ != nullptr;};
      void deleteErrorPagesRedirects() { this->errorPagesRedirects_ = nullptr;};
      inline const vector<Configs::ErrorPagesRedirects> & getErrorPagesRedirects() const { DARABONBA_PTR_GET_CONST(errorPagesRedirects_, vector<Configs::ErrorPagesRedirects>) };
      inline vector<Configs::ErrorPagesRedirects> getErrorPagesRedirects() { DARABONBA_PTR_GET(errorPagesRedirects_, vector<Configs::ErrorPagesRedirects>) };
      inline Configs& setErrorPagesRedirects(const vector<Configs::ErrorPagesRedirects> & errorPagesRedirects) { DARABONBA_PTR_SET_VALUE(errorPagesRedirects_, errorPagesRedirects) };
      inline Configs& setErrorPagesRedirects(vector<Configs::ErrorPagesRedirects> && errorPagesRedirects) { DARABONBA_PTR_SET_RVALUE(errorPagesRedirects_, errorPagesRedirects) };


      // httpIncomingRequestHeaderModificationRules Field Functions 
      bool hasHttpIncomingRequestHeaderModificationRules() const { return this->httpIncomingRequestHeaderModificationRules_ != nullptr;};
      void deleteHttpIncomingRequestHeaderModificationRules() { this->httpIncomingRequestHeaderModificationRules_ = nullptr;};
      inline const vector<Configs::HttpIncomingRequestHeaderModificationRules> & getHttpIncomingRequestHeaderModificationRules() const { DARABONBA_PTR_GET_CONST(httpIncomingRequestHeaderModificationRules_, vector<Configs::HttpIncomingRequestHeaderModificationRules>) };
      inline vector<Configs::HttpIncomingRequestHeaderModificationRules> getHttpIncomingRequestHeaderModificationRules() { DARABONBA_PTR_GET(httpIncomingRequestHeaderModificationRules_, vector<Configs::HttpIncomingRequestHeaderModificationRules>) };
      inline Configs& setHttpIncomingRequestHeaderModificationRules(const vector<Configs::HttpIncomingRequestHeaderModificationRules> & httpIncomingRequestHeaderModificationRules) { DARABONBA_PTR_SET_VALUE(httpIncomingRequestHeaderModificationRules_, httpIncomingRequestHeaderModificationRules) };
      inline Configs& setHttpIncomingRequestHeaderModificationRules(vector<Configs::HttpIncomingRequestHeaderModificationRules> && httpIncomingRequestHeaderModificationRules) { DARABONBA_PTR_SET_RVALUE(httpIncomingRequestHeaderModificationRules_, httpIncomingRequestHeaderModificationRules) };


      // httpIncomingResponseHeaderModificationRules Field Functions 
      bool hasHttpIncomingResponseHeaderModificationRules() const { return this->httpIncomingResponseHeaderModificationRules_ != nullptr;};
      void deleteHttpIncomingResponseHeaderModificationRules() { this->httpIncomingResponseHeaderModificationRules_ = nullptr;};
      inline const vector<Configs::HttpIncomingResponseHeaderModificationRules> & getHttpIncomingResponseHeaderModificationRules() const { DARABONBA_PTR_GET_CONST(httpIncomingResponseHeaderModificationRules_, vector<Configs::HttpIncomingResponseHeaderModificationRules>) };
      inline vector<Configs::HttpIncomingResponseHeaderModificationRules> getHttpIncomingResponseHeaderModificationRules() { DARABONBA_PTR_GET(httpIncomingResponseHeaderModificationRules_, vector<Configs::HttpIncomingResponseHeaderModificationRules>) };
      inline Configs& setHttpIncomingResponseHeaderModificationRules(const vector<Configs::HttpIncomingResponseHeaderModificationRules> & httpIncomingResponseHeaderModificationRules) { DARABONBA_PTR_SET_VALUE(httpIncomingResponseHeaderModificationRules_, httpIncomingResponseHeaderModificationRules) };
      inline Configs& setHttpIncomingResponseHeaderModificationRules(vector<Configs::HttpIncomingResponseHeaderModificationRules> && httpIncomingResponseHeaderModificationRules) { DARABONBA_PTR_SET_RVALUE(httpIncomingResponseHeaderModificationRules_, httpIncomingResponseHeaderModificationRules) };


      // httpRequestHeaderModificationRules Field Functions 
      bool hasHttpRequestHeaderModificationRules() const { return this->httpRequestHeaderModificationRules_ != nullptr;};
      void deleteHttpRequestHeaderModificationRules() { this->httpRequestHeaderModificationRules_ = nullptr;};
      inline const vector<Configs::HttpRequestHeaderModificationRules> & getHttpRequestHeaderModificationRules() const { DARABONBA_PTR_GET_CONST(httpRequestHeaderModificationRules_, vector<Configs::HttpRequestHeaderModificationRules>) };
      inline vector<Configs::HttpRequestHeaderModificationRules> getHttpRequestHeaderModificationRules() { DARABONBA_PTR_GET(httpRequestHeaderModificationRules_, vector<Configs::HttpRequestHeaderModificationRules>) };
      inline Configs& setHttpRequestHeaderModificationRules(const vector<Configs::HttpRequestHeaderModificationRules> & httpRequestHeaderModificationRules) { DARABONBA_PTR_SET_VALUE(httpRequestHeaderModificationRules_, httpRequestHeaderModificationRules) };
      inline Configs& setHttpRequestHeaderModificationRules(vector<Configs::HttpRequestHeaderModificationRules> && httpRequestHeaderModificationRules) { DARABONBA_PTR_SET_RVALUE(httpRequestHeaderModificationRules_, httpRequestHeaderModificationRules) };


      // httpResponseHeaderModificationRules Field Functions 
      bool hasHttpResponseHeaderModificationRules() const { return this->httpResponseHeaderModificationRules_ != nullptr;};
      void deleteHttpResponseHeaderModificationRules() { this->httpResponseHeaderModificationRules_ = nullptr;};
      inline const vector<Configs::HttpResponseHeaderModificationRules> & getHttpResponseHeaderModificationRules() const { DARABONBA_PTR_GET_CONST(httpResponseHeaderModificationRules_, vector<Configs::HttpResponseHeaderModificationRules>) };
      inline vector<Configs::HttpResponseHeaderModificationRules> getHttpResponseHeaderModificationRules() { DARABONBA_PTR_GET(httpResponseHeaderModificationRules_, vector<Configs::HttpResponseHeaderModificationRules>) };
      inline Configs& setHttpResponseHeaderModificationRules(const vector<Configs::HttpResponseHeaderModificationRules> & httpResponseHeaderModificationRules) { DARABONBA_PTR_SET_VALUE(httpResponseHeaderModificationRules_, httpResponseHeaderModificationRules) };
      inline Configs& setHttpResponseHeaderModificationRules(vector<Configs::HttpResponseHeaderModificationRules> && httpResponseHeaderModificationRules) { DARABONBA_PTR_SET_RVALUE(httpResponseHeaderModificationRules_, httpResponseHeaderModificationRules) };


      // httpsApplicationConfiguration Field Functions 
      bool hasHttpsApplicationConfiguration() const { return this->httpsApplicationConfiguration_ != nullptr;};
      void deleteHttpsApplicationConfiguration() { this->httpsApplicationConfiguration_ = nullptr;};
      inline const vector<Configs::HttpsApplicationConfiguration> & getHttpsApplicationConfiguration() const { DARABONBA_PTR_GET_CONST(httpsApplicationConfiguration_, vector<Configs::HttpsApplicationConfiguration>) };
      inline vector<Configs::HttpsApplicationConfiguration> getHttpsApplicationConfiguration() { DARABONBA_PTR_GET(httpsApplicationConfiguration_, vector<Configs::HttpsApplicationConfiguration>) };
      inline Configs& setHttpsApplicationConfiguration(const vector<Configs::HttpsApplicationConfiguration> & httpsApplicationConfiguration) { DARABONBA_PTR_SET_VALUE(httpsApplicationConfiguration_, httpsApplicationConfiguration) };
      inline Configs& setHttpsApplicationConfiguration(vector<Configs::HttpsApplicationConfiguration> && httpsApplicationConfiguration) { DARABONBA_PTR_SET_RVALUE(httpsApplicationConfiguration_, httpsApplicationConfiguration) };


      // httpsBasicConfiguration Field Functions 
      bool hasHttpsBasicConfiguration() const { return this->httpsBasicConfiguration_ != nullptr;};
      void deleteHttpsBasicConfiguration() { this->httpsBasicConfiguration_ = nullptr;};
      inline const vector<Configs::HttpsBasicConfiguration> & getHttpsBasicConfiguration() const { DARABONBA_PTR_GET_CONST(httpsBasicConfiguration_, vector<Configs::HttpsBasicConfiguration>) };
      inline vector<Configs::HttpsBasicConfiguration> getHttpsBasicConfiguration() { DARABONBA_PTR_GET(httpsBasicConfiguration_, vector<Configs::HttpsBasicConfiguration>) };
      inline Configs& setHttpsBasicConfiguration(const vector<Configs::HttpsBasicConfiguration> & httpsBasicConfiguration) { DARABONBA_PTR_SET_VALUE(httpsBasicConfiguration_, httpsBasicConfiguration) };
      inline Configs& setHttpsBasicConfiguration(vector<Configs::HttpsBasicConfiguration> && httpsBasicConfiguration) { DARABONBA_PTR_SET_RVALUE(httpsBasicConfiguration_, httpsBasicConfiguration) };


      // imageTransform Field Functions 
      bool hasImageTransform() const { return this->imageTransform_ != nullptr;};
      void deleteImageTransform() { this->imageTransform_ = nullptr;};
      inline const vector<Configs::ImageTransform> & getImageTransform() const { DARABONBA_PTR_GET_CONST(imageTransform_, vector<Configs::ImageTransform>) };
      inline vector<Configs::ImageTransform> getImageTransform() { DARABONBA_PTR_GET(imageTransform_, vector<Configs::ImageTransform>) };
      inline Configs& setImageTransform(const vector<Configs::ImageTransform> & imageTransform) { DARABONBA_PTR_SET_VALUE(imageTransform_, imageTransform) };
      inline Configs& setImageTransform(vector<Configs::ImageTransform> && imageTransform) { DARABONBA_PTR_SET_RVALUE(imageTransform_, imageTransform) };


      // ipv6 Field Functions 
      bool hasIpv6() const { return this->ipv6_ != nullptr;};
      void deleteIpv6() { this->ipv6_ = nullptr;};
      inline const vector<Configs::Ipv6> & getIpv6() const { DARABONBA_PTR_GET_CONST(ipv6_, vector<Configs::Ipv6>) };
      inline vector<Configs::Ipv6> getIpv6() { DARABONBA_PTR_GET(ipv6_, vector<Configs::Ipv6>) };
      inline Configs& setIpv6(const vector<Configs::Ipv6> & ipv6) { DARABONBA_PTR_SET_VALUE(ipv6_, ipv6) };
      inline Configs& setIpv6(vector<Configs::Ipv6> && ipv6) { DARABONBA_PTR_SET_RVALUE(ipv6_, ipv6) };


      // managedTransforms Field Functions 
      bool hasManagedTransforms() const { return this->managedTransforms_ != nullptr;};
      void deleteManagedTransforms() { this->managedTransforms_ = nullptr;};
      inline const vector<Configs::ManagedTransforms> & getManagedTransforms() const { DARABONBA_PTR_GET_CONST(managedTransforms_, vector<Configs::ManagedTransforms>) };
      inline vector<Configs::ManagedTransforms> getManagedTransforms() { DARABONBA_PTR_GET(managedTransforms_, vector<Configs::ManagedTransforms>) };
      inline Configs& setManagedTransforms(const vector<Configs::ManagedTransforms> & managedTransforms) { DARABONBA_PTR_SET_VALUE(managedTransforms_, managedTransforms) };
      inline Configs& setManagedTransforms(vector<Configs::ManagedTransforms> && managedTransforms) { DARABONBA_PTR_SET_RVALUE(managedTransforms_, managedTransforms) };


      // networkOptimization Field Functions 
      bool hasNetworkOptimization() const { return this->networkOptimization_ != nullptr;};
      void deleteNetworkOptimization() { this->networkOptimization_ = nullptr;};
      inline const vector<Configs::NetworkOptimization> & getNetworkOptimization() const { DARABONBA_PTR_GET_CONST(networkOptimization_, vector<Configs::NetworkOptimization>) };
      inline vector<Configs::NetworkOptimization> getNetworkOptimization() { DARABONBA_PTR_GET(networkOptimization_, vector<Configs::NetworkOptimization>) };
      inline Configs& setNetworkOptimization(const vector<Configs::NetworkOptimization> & networkOptimization) { DARABONBA_PTR_SET_VALUE(networkOptimization_, networkOptimization) };
      inline Configs& setNetworkOptimization(vector<Configs::NetworkOptimization> && networkOptimization) { DARABONBA_PTR_SET_RVALUE(networkOptimization_, networkOptimization) };


      // originRules Field Functions 
      bool hasOriginRules() const { return this->originRules_ != nullptr;};
      void deleteOriginRules() { this->originRules_ = nullptr;};
      inline const vector<Configs::OriginRules> & getOriginRules() const { DARABONBA_PTR_GET_CONST(originRules_, vector<Configs::OriginRules>) };
      inline vector<Configs::OriginRules> getOriginRules() { DARABONBA_PTR_GET(originRules_, vector<Configs::OriginRules>) };
      inline Configs& setOriginRules(const vector<Configs::OriginRules> & originRules) { DARABONBA_PTR_SET_VALUE(originRules_, originRules) };
      inline Configs& setOriginRules(vector<Configs::OriginRules> && originRules) { DARABONBA_PTR_SET_RVALUE(originRules_, originRules) };


      // redirectRules Field Functions 
      bool hasRedirectRules() const { return this->redirectRules_ != nullptr;};
      void deleteRedirectRules() { this->redirectRules_ = nullptr;};
      inline const vector<Configs::RedirectRules> & getRedirectRules() const { DARABONBA_PTR_GET_CONST(redirectRules_, vector<Configs::RedirectRules>) };
      inline vector<Configs::RedirectRules> getRedirectRules() { DARABONBA_PTR_GET(redirectRules_, vector<Configs::RedirectRules>) };
      inline Configs& setRedirectRules(const vector<Configs::RedirectRules> & redirectRules) { DARABONBA_PTR_SET_VALUE(redirectRules_, redirectRules) };
      inline Configs& setRedirectRules(vector<Configs::RedirectRules> && redirectRules) { DARABONBA_PTR_SET_RVALUE(redirectRules_, redirectRules) };


      // rewriteUrlRules Field Functions 
      bool hasRewriteUrlRules() const { return this->rewriteUrlRules_ != nullptr;};
      void deleteRewriteUrlRules() { this->rewriteUrlRules_ = nullptr;};
      inline const vector<Configs::RewriteUrlRules> & getRewriteUrlRules() const { DARABONBA_PTR_GET_CONST(rewriteUrlRules_, vector<Configs::RewriteUrlRules>) };
      inline vector<Configs::RewriteUrlRules> getRewriteUrlRules() { DARABONBA_PTR_GET(rewriteUrlRules_, vector<Configs::RewriteUrlRules>) };
      inline Configs& setRewriteUrlRules(const vector<Configs::RewriteUrlRules> & rewriteUrlRules) { DARABONBA_PTR_SET_VALUE(rewriteUrlRules_, rewriteUrlRules) };
      inline Configs& setRewriteUrlRules(vector<Configs::RewriteUrlRules> && rewriteUrlRules) { DARABONBA_PTR_SET_RVALUE(rewriteUrlRules_, rewriteUrlRules) };


      // seoBypass Field Functions 
      bool hasSeoBypass() const { return this->seoBypass_ != nullptr;};
      void deleteSeoBypass() { this->seoBypass_ = nullptr;};
      inline const vector<Configs::SeoBypass> & getSeoBypass() const { DARABONBA_PTR_GET_CONST(seoBypass_, vector<Configs::SeoBypass>) };
      inline vector<Configs::SeoBypass> getSeoBypass() { DARABONBA_PTR_GET(seoBypass_, vector<Configs::SeoBypass>) };
      inline Configs& setSeoBypass(const vector<Configs::SeoBypass> & seoBypass) { DARABONBA_PTR_SET_VALUE(seoBypass_, seoBypass) };
      inline Configs& setSeoBypass(vector<Configs::SeoBypass> && seoBypass) { DARABONBA_PTR_SET_RVALUE(seoBypass_, seoBypass) };


      // siteNameExclusive Field Functions 
      bool hasSiteNameExclusive() const { return this->siteNameExclusive_ != nullptr;};
      void deleteSiteNameExclusive() { this->siteNameExclusive_ = nullptr;};
      inline const vector<Configs::SiteNameExclusive> & getSiteNameExclusive() const { DARABONBA_PTR_GET_CONST(siteNameExclusive_, vector<Configs::SiteNameExclusive>) };
      inline vector<Configs::SiteNameExclusive> getSiteNameExclusive() { DARABONBA_PTR_GET(siteNameExclusive_, vector<Configs::SiteNameExclusive>) };
      inline Configs& setSiteNameExclusive(const vector<Configs::SiteNameExclusive> & siteNameExclusive) { DARABONBA_PTR_SET_VALUE(siteNameExclusive_, siteNameExclusive) };
      inline Configs& setSiteNameExclusive(vector<Configs::SiteNameExclusive> && siteNameExclusive) { DARABONBA_PTR_SET_RVALUE(siteNameExclusive_, siteNameExclusive) };


      // sitePause Field Functions 
      bool hasSitePause() const { return this->sitePause_ != nullptr;};
      void deleteSitePause() { this->sitePause_ = nullptr;};
      inline const vector<Configs::SitePause> & getSitePause() const { DARABONBA_PTR_GET_CONST(sitePause_, vector<Configs::SitePause>) };
      inline vector<Configs::SitePause> getSitePause() { DARABONBA_PTR_GET(sitePause_, vector<Configs::SitePause>) };
      inline Configs& setSitePause(const vector<Configs::SitePause> & sitePause) { DARABONBA_PTR_SET_VALUE(sitePause_, sitePause) };
      inline Configs& setSitePause(vector<Configs::SitePause> && sitePause) { DARABONBA_PTR_SET_RVALUE(sitePause_, sitePause) };


      // tieredCache Field Functions 
      bool hasTieredCache() const { return this->tieredCache_ != nullptr;};
      void deleteTieredCache() { this->tieredCache_ = nullptr;};
      inline const vector<Configs::TieredCache> & getTieredCache() const { DARABONBA_PTR_GET_CONST(tieredCache_, vector<Configs::TieredCache>) };
      inline vector<Configs::TieredCache> getTieredCache() { DARABONBA_PTR_GET(tieredCache_, vector<Configs::TieredCache>) };
      inline Configs& setTieredCache(const vector<Configs::TieredCache> & tieredCache) { DARABONBA_PTR_SET_VALUE(tieredCache_, tieredCache) };
      inline Configs& setTieredCache(vector<Configs::TieredCache> && tieredCache) { DARABONBA_PTR_SET_RVALUE(tieredCache_, tieredCache) };


      // videoProcessing Field Functions 
      bool hasVideoProcessing() const { return this->videoProcessing_ != nullptr;};
      void deleteVideoProcessing() { this->videoProcessing_ = nullptr;};
      inline const vector<Configs::VideoProcessing> & getVideoProcessing() const { DARABONBA_PTR_GET_CONST(videoProcessing_, vector<Configs::VideoProcessing>) };
      inline vector<Configs::VideoProcessing> getVideoProcessing() { DARABONBA_PTR_GET(videoProcessing_, vector<Configs::VideoProcessing>) };
      inline Configs& setVideoProcessing(const vector<Configs::VideoProcessing> & videoProcessing) { DARABONBA_PTR_SET_VALUE(videoProcessing_, videoProcessing) };
      inline Configs& setVideoProcessing(vector<Configs::VideoProcessing> && videoProcessing) { DARABONBA_PTR_SET_RVALUE(videoProcessing_, videoProcessing) };


    protected:
      // The cache reserve configuration.
      shared_ptr<vector<Configs::CacheReserve>> cacheReserve_ {};
      // The cache rules.
      shared_ptr<vector<Configs::CacheRules>> cacheRules_ {};
      // The cache tags. When using the purge-by-cache-tag feature, specifies the CacheTag name carried in the origin server response.
      shared_ptr<vector<Configs::CacheTags>> cacheTags_ {};
      // The CNAME flattening configuration.
      shared_ptr<vector<Configs::CnameFlattening>> cnameFlattening_ {};
      // The compression rules.
      shared_ptr<vector<Configs::CompressionRules>> compressionRules_ {};
      // The Chinese mainland network optimization configuration.
      shared_ptr<vector<Configs::CrossBorderOptimization>> crossBorderOptimization_ {};
      // The custom response code rules.
      shared_ptr<vector<Configs::CustomResponseCode>> customResponseCode_ {};
      // The development mode configuration.
      shared_ptr<vector<Configs::DevelopmentMode>> developmentMode_ {};
      // The error page redirect rules.
      shared_ptr<vector<Configs::ErrorPagesRedirects>> errorPagesRedirects_ {};
      // The inbound request header modification rules.
      shared_ptr<vector<Configs::HttpIncomingRequestHeaderModificationRules>> httpIncomingRequestHeaderModificationRules_ {};
      // The inbound response header modification rules.
      shared_ptr<vector<Configs::HttpIncomingResponseHeaderModificationRules>> httpIncomingResponseHeaderModificationRules_ {};
      // The request header modification rules.
      shared_ptr<vector<Configs::HttpRequestHeaderModificationRules>> httpRequestHeaderModificationRules_ {};
      // The response header modification rules.
      shared_ptr<vector<Configs::HttpResponseHeaderModificationRules>> httpResponseHeaderModificationRules_ {};
      // The HTTPS application configuration.
      shared_ptr<vector<Configs::HttpsApplicationConfiguration>> httpsApplicationConfiguration_ {};
      // The HTTPS basic configuration.
      shared_ptr<vector<Configs::HttpsBasicConfiguration>> httpsBasicConfiguration_ {};
      // The image transformation configuration.
      shared_ptr<vector<Configs::ImageTransform>> imageTransform_ {};
      // The IPv6 configuration.
      shared_ptr<vector<Configs::Ipv6>> ipv6_ {};
      // The managed transforms.
      shared_ptr<vector<Configs::ManagedTransforms>> managedTransforms_ {};
      // The network optimization configuration.
      shared_ptr<vector<Configs::NetworkOptimization>> networkOptimization_ {};
      // The back-to-origin rules.
      shared_ptr<vector<Configs::OriginRules>> originRules_ {};
      // The redirect rules.
      shared_ptr<vector<Configs::RedirectRules>> redirectRules_ {};
      // The URL rewrite rules.
      shared_ptr<vector<Configs::RewriteUrlRules>> rewriteUrlRules_ {};
      // The search engine crawler bypass configuration.
      shared_ptr<vector<Configs::SeoBypass>> seoBypass_ {};
      // The site name exclusive configuration. When enabled, other accounts cannot create sites or subsites with the same name as the current site.
      shared_ptr<vector<Configs::SiteNameExclusive>> siteNameExclusive_ {};
      // The site acceleration pause configuration. Temporarily pauses the proxy acceleration feature for the entire site. When enabled, all DNS records directly return record values to clients.
      shared_ptr<vector<Configs::SitePause>> sitePause_ {};
      // The tiered cache configuration.
      shared_ptr<vector<Configs::TieredCache>> tieredCache_ {};
      // The video processing configuration.
      shared_ptr<vector<Configs::VideoProcessing>> videoProcessing_ {};
    };

    virtual bool empty() const override { return this->configs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const ListSiteFunctionsResponseBody::Configs & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, ListSiteFunctionsResponseBody::Configs) };
    inline ListSiteFunctionsResponseBody::Configs getConfigs() { DARABONBA_PTR_GET(configs_, ListSiteFunctionsResponseBody::Configs) };
    inline ListSiteFunctionsResponseBody& setConfigs(const ListSiteFunctionsResponseBody::Configs & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline ListSiteFunctionsResponseBody& setConfigs(ListSiteFunctionsResponseBody::Configs && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSiteFunctionsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSiteFunctionsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSiteFunctionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSiteFunctionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListSiteFunctionsResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The configuration information.
    shared_ptr<ListSiteFunctionsResponseBody::Configs> configs_ {};
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The page size.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int32_t> totalCount_ {};
    // The total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
