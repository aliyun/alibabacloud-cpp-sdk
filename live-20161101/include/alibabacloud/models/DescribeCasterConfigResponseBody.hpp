// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoSwitchUrgentConfig, autoSwitchUrgentConfig_);
      DARABONBA_PTR_TO_JSON(AutoSwitchUrgentOn, autoSwitchUrgentOn_);
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(CasterName, casterName_);
      DARABONBA_PTR_TO_JSON(ChannelEnable, channelEnable_);
      DARABONBA_PTR_TO_JSON(Delay, delay_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ProgramEffect, programEffect_);
      DARABONBA_PTR_TO_JSON(ProgramName, programName_);
      DARABONBA_PTR_TO_JSON(RecordConfig, recordConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SideOutputUrl, sideOutputUrl_);
      DARABONBA_PTR_TO_JSON(SideOutputUrlList, sideOutputUrlList_);
      DARABONBA_PTR_TO_JSON(SyncGroupsConfig, syncGroupsConfig_);
      DARABONBA_PTR_TO_JSON(TranscodeConfig, transcodeConfig_);
      DARABONBA_PTR_TO_JSON(UrgentImageId, urgentImageId_);
      DARABONBA_PTR_TO_JSON(UrgentImageUrl, urgentImageUrl_);
      DARABONBA_PTR_TO_JSON(UrgentLiveStreamUrl, urgentLiveStreamUrl_);
      DARABONBA_PTR_TO_JSON(UrgentMaterialId, urgentMaterialId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoSwitchUrgentConfig, autoSwitchUrgentConfig_);
      DARABONBA_PTR_FROM_JSON(AutoSwitchUrgentOn, autoSwitchUrgentOn_);
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(CasterName, casterName_);
      DARABONBA_PTR_FROM_JSON(ChannelEnable, channelEnable_);
      DARABONBA_PTR_FROM_JSON(Delay, delay_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ProgramEffect, programEffect_);
      DARABONBA_PTR_FROM_JSON(ProgramName, programName_);
      DARABONBA_PTR_FROM_JSON(RecordConfig, recordConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SideOutputUrl, sideOutputUrl_);
      DARABONBA_PTR_FROM_JSON(SideOutputUrlList, sideOutputUrlList_);
      DARABONBA_PTR_FROM_JSON(SyncGroupsConfig, syncGroupsConfig_);
      DARABONBA_PTR_FROM_JSON(TranscodeConfig, transcodeConfig_);
      DARABONBA_PTR_FROM_JSON(UrgentImageId, urgentImageId_);
      DARABONBA_PTR_FROM_JSON(UrgentImageUrl, urgentImageUrl_);
      DARABONBA_PTR_FROM_JSON(UrgentLiveStreamUrl, urgentLiveStreamUrl_);
      DARABONBA_PTR_FROM_JSON(UrgentMaterialId, urgentMaterialId_);
    };
    DescribeCasterConfigResponseBody() = default ;
    DescribeCasterConfigResponseBody(const DescribeCasterConfigResponseBody &) = default ;
    DescribeCasterConfigResponseBody(DescribeCasterConfigResponseBody &&) = default ;
    DescribeCasterConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterConfigResponseBody() = default ;
    DescribeCasterConfigResponseBody& operator=(const DescribeCasterConfigResponseBody &) = default ;
    DescribeCasterConfigResponseBody& operator=(DescribeCasterConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TranscodeConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TranscodeConfig& obj) { 
        DARABONBA_PTR_TO_JSON(CasterTemplate, casterTemplate_);
        DARABONBA_PTR_TO_JSON(CustomParams, customParams_);
        DARABONBA_PTR_TO_JSON(LiveTemplateIds, liveTemplateIds_);
      };
      friend void from_json(const Darabonba::Json& j, TranscodeConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(CasterTemplate, casterTemplate_);
        DARABONBA_PTR_FROM_JSON(CustomParams, customParams_);
        DARABONBA_PTR_FROM_JSON(LiveTemplateIds, liveTemplateIds_);
      };
      TranscodeConfig() = default ;
      TranscodeConfig(const TranscodeConfig &) = default ;
      TranscodeConfig(TranscodeConfig &&) = default ;
      TranscodeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TranscodeConfig() = default ;
      TranscodeConfig& operator=(const TranscodeConfig &) = default ;
      TranscodeConfig& operator=(TranscodeConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LiveTemplateIds : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LiveTemplateIds& obj) { 
          DARABONBA_PTR_TO_JSON(LocationId, locationId_);
        };
        friend void from_json(const Darabonba::Json& j, LiveTemplateIds& obj) { 
          DARABONBA_PTR_FROM_JSON(LocationId, locationId_);
        };
        LiveTemplateIds() = default ;
        LiveTemplateIds(const LiveTemplateIds &) = default ;
        LiveTemplateIds(LiveTemplateIds &&) = default ;
        LiveTemplateIds(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LiveTemplateIds() = default ;
        LiveTemplateIds& operator=(const LiveTemplateIds &) = default ;
        LiveTemplateIds& operator=(LiveTemplateIds &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->locationId_ == nullptr; };
        // locationId Field Functions 
        bool hasLocationId() const { return this->locationId_ != nullptr;};
        void deleteLocationId() { this->locationId_ = nullptr;};
        inline const vector<string> & getLocationId() const { DARABONBA_PTR_GET_CONST(locationId_, vector<string>) };
        inline vector<string> getLocationId() { DARABONBA_PTR_GET(locationId_, vector<string>) };
        inline LiveTemplateIds& setLocationId(const vector<string> & locationId) { DARABONBA_PTR_SET_VALUE(locationId_, locationId) };
        inline LiveTemplateIds& setLocationId(vector<string> && locationId) { DARABONBA_PTR_SET_RVALUE(locationId_, locationId) };


      protected:
        shared_ptr<vector<string>> locationId_ {};
      };

      class CustomParams : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomParams& obj) { 
          DARABONBA_PTR_TO_JSON(video, video_);
        };
        friend void from_json(const Darabonba::Json& j, CustomParams& obj) { 
          DARABONBA_PTR_FROM_JSON(video, video_);
        };
        CustomParams() = default ;
        CustomParams(const CustomParams &) = default ;
        CustomParams(CustomParams &&) = default ;
        CustomParams(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomParams() = default ;
        CustomParams& operator=(const CustomParams &) = default ;
        CustomParams& operator=(CustomParams &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Video : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Video& obj) { 
            DARABONBA_PTR_TO_JSON(bitrate, bitrate_);
            DARABONBA_PTR_TO_JSON(fps, fps_);
            DARABONBA_PTR_TO_JSON(height, height_);
            DARABONBA_PTR_TO_JSON(width, width_);
          };
          friend void from_json(const Darabonba::Json& j, Video& obj) { 
            DARABONBA_PTR_FROM_JSON(bitrate, bitrate_);
            DARABONBA_PTR_FROM_JSON(fps, fps_);
            DARABONBA_PTR_FROM_JSON(height, height_);
            DARABONBA_PTR_FROM_JSON(width, width_);
          };
          Video() = default ;
          Video(const Video &) = default ;
          Video(Video &&) = default ;
          Video(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Video() = default ;
          Video& operator=(const Video &) = default ;
          Video& operator=(Video &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->fps_ == nullptr && this->height_ == nullptr && this->width_ == nullptr; };
          // bitrate Field Functions 
          bool hasBitrate() const { return this->bitrate_ != nullptr;};
          void deleteBitrate() { this->bitrate_ = nullptr;};
          inline int32_t getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0) };
          inline Video& setBitrate(int32_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


          // fps Field Functions 
          bool hasFps() const { return this->fps_ != nullptr;};
          void deleteFps() { this->fps_ = nullptr;};
          inline int32_t getFps() const { DARABONBA_PTR_GET_DEFAULT(fps_, 0) };
          inline Video& setFps(int32_t fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


          // height Field Functions 
          bool hasHeight() const { return this->height_ != nullptr;};
          void deleteHeight() { this->height_ = nullptr;};
          inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
          inline Video& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


          // width Field Functions 
          bool hasWidth() const { return this->width_ != nullptr;};
          void deleteWidth() { this->width_ = nullptr;};
          inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
          inline Video& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


        protected:
          // The video bitrate.
          shared_ptr<int32_t> bitrate_ {};
          // The video frame rate.
          shared_ptr<int32_t> fps_ {};
          // The video height. Unit: pixels.
          shared_ptr<int32_t> height_ {};
          // The video width. Unit: pixels.
          shared_ptr<int32_t> width_ {};
        };

        virtual bool empty() const override { return this->video_ == nullptr; };
        // video Field Functions 
        bool hasVideo() const { return this->video_ != nullptr;};
        void deleteVideo() { this->video_ = nullptr;};
        inline const CustomParams::Video & getVideo() const { DARABONBA_PTR_GET_CONST(video_, CustomParams::Video) };
        inline CustomParams::Video getVideo() { DARABONBA_PTR_GET(video_, CustomParams::Video) };
        inline CustomParams& setVideo(const CustomParams::Video & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
        inline CustomParams& setVideo(CustomParams::Video && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


      protected:
        // The video parameters.
        shared_ptr<CustomParams::Video> video_ {};
      };

      virtual bool empty() const override { return this->casterTemplate_ == nullptr
        && this->customParams_ == nullptr && this->liveTemplateIds_ == nullptr; };
      // casterTemplate Field Functions 
      bool hasCasterTemplate() const { return this->casterTemplate_ != nullptr;};
      void deleteCasterTemplate() { this->casterTemplate_ = nullptr;};
      inline string getCasterTemplate() const { DARABONBA_PTR_GET_DEFAULT(casterTemplate_, "") };
      inline TranscodeConfig& setCasterTemplate(string casterTemplate) { DARABONBA_PTR_SET_VALUE(casterTemplate_, casterTemplate) };


      // customParams Field Functions 
      bool hasCustomParams() const { return this->customParams_ != nullptr;};
      void deleteCustomParams() { this->customParams_ = nullptr;};
      inline const TranscodeConfig::CustomParams & getCustomParams() const { DARABONBA_PTR_GET_CONST(customParams_, TranscodeConfig::CustomParams) };
      inline TranscodeConfig::CustomParams getCustomParams() { DARABONBA_PTR_GET(customParams_, TranscodeConfig::CustomParams) };
      inline TranscodeConfig& setCustomParams(const TranscodeConfig::CustomParams & customParams) { DARABONBA_PTR_SET_VALUE(customParams_, customParams) };
      inline TranscodeConfig& setCustomParams(TranscodeConfig::CustomParams && customParams) { DARABONBA_PTR_SET_RVALUE(customParams_, customParams) };


      // liveTemplateIds Field Functions 
      bool hasLiveTemplateIds() const { return this->liveTemplateIds_ != nullptr;};
      void deleteLiveTemplateIds() { this->liveTemplateIds_ = nullptr;};
      inline const TranscodeConfig::LiveTemplateIds & getLiveTemplateIds() const { DARABONBA_PTR_GET_CONST(liveTemplateIds_, TranscodeConfig::LiveTemplateIds) };
      inline TranscodeConfig::LiveTemplateIds getLiveTemplateIds() { DARABONBA_PTR_GET(liveTemplateIds_, TranscodeConfig::LiveTemplateIds) };
      inline TranscodeConfig& setLiveTemplateIds(const TranscodeConfig::LiveTemplateIds & liveTemplateIds) { DARABONBA_PTR_SET_VALUE(liveTemplateIds_, liveTemplateIds) };
      inline TranscodeConfig& setLiveTemplateIds(TranscodeConfig::LiveTemplateIds && liveTemplateIds) { DARABONBA_PTR_SET_RVALUE(liveTemplateIds_, liveTemplateIds) };


    protected:
      // The transcoding template of the production studio. Valid values:
      // 
      // *   **lp_ld**: low definition
      // *   **lp_sd**: standard definition
      // *   **lp_hd**: high definition
      // *   **lp_ud**: ultra high definition
      // *   **lp_ld_v**: low definition (portrait mode)
      // *   **lp_sd_v**: standard definition (portrait mode)
      // *   **lp_hd_v**: high definition (portrait mode)
      // *   **lp_ud_v**: ultra high definition (portrait mode)
      shared_ptr<string> casterTemplate_ {};
      // The custom settings.
      shared_ptr<TranscodeConfig::CustomParams> customParams_ {};
      // The transcoding setting for live streams.
      shared_ptr<TranscodeConfig::LiveTemplateIds> liveTemplateIds_ {};
    };

    class SyncGroupsConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SyncGroupsConfig& obj) { 
        DARABONBA_PTR_TO_JSON(SyncGroup, syncGroup_);
      };
      friend void from_json(const Darabonba::Json& j, SyncGroupsConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(SyncGroup, syncGroup_);
      };
      SyncGroupsConfig() = default ;
      SyncGroupsConfig(const SyncGroupsConfig &) = default ;
      SyncGroupsConfig(SyncGroupsConfig &&) = default ;
      SyncGroupsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SyncGroupsConfig() = default ;
      SyncGroupsConfig& operator=(const SyncGroupsConfig &) = default ;
      SyncGroupsConfig& operator=(SyncGroupsConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SyncGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SyncGroup& obj) { 
          DARABONBA_PTR_TO_JSON(HostResourceId, hostResourceId_);
          DARABONBA_PTR_TO_JSON(Mode, mode_);
          DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
        };
        friend void from_json(const Darabonba::Json& j, SyncGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(HostResourceId, hostResourceId_);
          DARABONBA_PTR_FROM_JSON(Mode, mode_);
          DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
        };
        SyncGroup() = default ;
        SyncGroup(const SyncGroup &) = default ;
        SyncGroup(SyncGroup &&) = default ;
        SyncGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SyncGroup() = default ;
        SyncGroup& operator=(const SyncGroup &) = default ;
        SyncGroup& operator=(SyncGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ResourceIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResourceIds& obj) { 
            DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          };
          friend void from_json(const Darabonba::Json& j, ResourceIds& obj) { 
            DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          };
          ResourceIds() = default ;
          ResourceIds(const ResourceIds &) = default ;
          ResourceIds(ResourceIds &&) = default ;
          ResourceIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResourceIds() = default ;
          ResourceIds& operator=(const ResourceIds &) = default ;
          ResourceIds& operator=(ResourceIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->resourceId_ == nullptr; };
          // resourceId Field Functions 
          bool hasResourceId() const { return this->resourceId_ != nullptr;};
          void deleteResourceId() { this->resourceId_ = nullptr;};
          inline const vector<string> & getResourceId() const { DARABONBA_PTR_GET_CONST(resourceId_, vector<string>) };
          inline vector<string> getResourceId() { DARABONBA_PTR_GET(resourceId_, vector<string>) };
          inline ResourceIds& setResourceId(const vector<string> & resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };
          inline ResourceIds& setResourceId(vector<string> && resourceId) { DARABONBA_PTR_SET_RVALUE(resourceId_, resourceId) };


        protected:
          shared_ptr<vector<string>> resourceId_ {};
        };

        virtual bool empty() const override { return this->hostResourceId_ == nullptr
        && this->mode_ == nullptr && this->resourceIds_ == nullptr; };
        // hostResourceId Field Functions 
        bool hasHostResourceId() const { return this->hostResourceId_ != nullptr;};
        void deleteHostResourceId() { this->hostResourceId_ = nullptr;};
        inline string getHostResourceId() const { DARABONBA_PTR_GET_DEFAULT(hostResourceId_, "") };
        inline SyncGroup& setHostResourceId(string hostResourceId) { DARABONBA_PTR_SET_VALUE(hostResourceId_, hostResourceId) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline int32_t getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
        inline SyncGroup& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // resourceIds Field Functions 
        bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
        void deleteResourceIds() { this->resourceIds_ = nullptr;};
        inline const SyncGroup::ResourceIds & getResourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, SyncGroup::ResourceIds) };
        inline SyncGroup::ResourceIds getResourceIds() { DARABONBA_PTR_GET(resourceIds_, SyncGroup::ResourceIds) };
        inline SyncGroup& setResourceIds(const SyncGroup::ResourceIds & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
        inline SyncGroup& setResourceIds(SyncGroup::ResourceIds && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


      protected:
        // The ID of the resource in the production studio.
        shared_ptr<string> hostResourceId_ {};
        // The cache mode of the Static Page Caching policy. Valid values:
        // 
        // *   0: standard mode
        // *   1: force mode
        // *   2: no cache
        shared_ptr<int32_t> mode_ {};
        // The IDs of the resources for which you want to modify the resource group. The number of resource IDs is 1 to 50.
        shared_ptr<SyncGroup::ResourceIds> resourceIds_ {};
      };

      virtual bool empty() const override { return this->syncGroup_ == nullptr; };
      // syncGroup Field Functions 
      bool hasSyncGroup() const { return this->syncGroup_ != nullptr;};
      void deleteSyncGroup() { this->syncGroup_ = nullptr;};
      inline const vector<SyncGroupsConfig::SyncGroup> & getSyncGroup() const { DARABONBA_PTR_GET_CONST(syncGroup_, vector<SyncGroupsConfig::SyncGroup>) };
      inline vector<SyncGroupsConfig::SyncGroup> getSyncGroup() { DARABONBA_PTR_GET(syncGroup_, vector<SyncGroupsConfig::SyncGroup>) };
      inline SyncGroupsConfig& setSyncGroup(const vector<SyncGroupsConfig::SyncGroup> & syncGroup) { DARABONBA_PTR_SET_VALUE(syncGroup_, syncGroup) };
      inline SyncGroupsConfig& setSyncGroup(vector<SyncGroupsConfig::SyncGroup> && syncGroup) { DARABONBA_PTR_SET_RVALUE(syncGroup_, syncGroup) };


    protected:
      shared_ptr<vector<SyncGroupsConfig::SyncGroup>> syncGroup_ {};
    };

    class RecordConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecordConfig& obj) { 
        DARABONBA_PTR_TO_JSON(OnDemand, onDemand_);
        DARABONBA_PTR_TO_JSON(OssBucket, ossBucket_);
        DARABONBA_PTR_TO_JSON(OssEndpoint, ossEndpoint_);
        DARABONBA_PTR_TO_JSON(RecordFormat, recordFormat_);
      };
      friend void from_json(const Darabonba::Json& j, RecordConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(OnDemand, onDemand_);
        DARABONBA_PTR_FROM_JSON(OssBucket, ossBucket_);
        DARABONBA_PTR_FROM_JSON(OssEndpoint, ossEndpoint_);
        DARABONBA_PTR_FROM_JSON(RecordFormat, recordFormat_);
      };
      RecordConfig() = default ;
      RecordConfig(const RecordConfig &) = default ;
      RecordConfig(RecordConfig &&) = default ;
      RecordConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecordConfig() = default ;
      RecordConfig& operator=(const RecordConfig &) = default ;
      RecordConfig& operator=(RecordConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RecordFormat : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecordFormat& obj) { 
          DARABONBA_PTR_TO_JSON(RecordFormat, recordFormat_);
        };
        friend void from_json(const Darabonba::Json& j, RecordFormat& obj) { 
          DARABONBA_PTR_FROM_JSON(RecordFormat, recordFormat_);
        };
        RecordFormat() = default ;
        RecordFormat(const RecordFormat &) = default ;
        RecordFormat(RecordFormat &&) = default ;
        RecordFormat(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecordFormat() = default ;
        RecordFormat& operator=(const RecordFormat &) = default ;
        RecordFormat& operator=(RecordFormat &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RecordFormatItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RecordFormatItem& obj) { 
            DARABONBA_PTR_TO_JSON(CycleDuration, cycleDuration_);
            DARABONBA_PTR_TO_JSON(Format, format_);
            DARABONBA_PTR_TO_JSON(OssObjectPrefix, ossObjectPrefix_);
            DARABONBA_PTR_TO_JSON(SliceOssObjectPrefix, sliceOssObjectPrefix_);
          };
          friend void from_json(const Darabonba::Json& j, RecordFormatItem& obj) { 
            DARABONBA_PTR_FROM_JSON(CycleDuration, cycleDuration_);
            DARABONBA_PTR_FROM_JSON(Format, format_);
            DARABONBA_PTR_FROM_JSON(OssObjectPrefix, ossObjectPrefix_);
            DARABONBA_PTR_FROM_JSON(SliceOssObjectPrefix, sliceOssObjectPrefix_);
          };
          RecordFormatItem() = default ;
          RecordFormatItem(const RecordFormatItem &) = default ;
          RecordFormatItem(RecordFormatItem &&) = default ;
          RecordFormatItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RecordFormatItem() = default ;
          RecordFormatItem& operator=(const RecordFormatItem &) = default ;
          RecordFormatItem& operator=(RecordFormatItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cycleDuration_ == nullptr
        && this->format_ == nullptr && this->ossObjectPrefix_ == nullptr && this->sliceOssObjectPrefix_ == nullptr; };
          // cycleDuration Field Functions 
          bool hasCycleDuration() const { return this->cycleDuration_ != nullptr;};
          void deleteCycleDuration() { this->cycleDuration_ = nullptr;};
          inline int32_t getCycleDuration() const { DARABONBA_PTR_GET_DEFAULT(cycleDuration_, 0) };
          inline RecordFormatItem& setCycleDuration(int32_t cycleDuration) { DARABONBA_PTR_SET_VALUE(cycleDuration_, cycleDuration) };


          // format Field Functions 
          bool hasFormat() const { return this->format_ != nullptr;};
          void deleteFormat() { this->format_ = nullptr;};
          inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
          inline RecordFormatItem& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


          // ossObjectPrefix Field Functions 
          bool hasOssObjectPrefix() const { return this->ossObjectPrefix_ != nullptr;};
          void deleteOssObjectPrefix() { this->ossObjectPrefix_ = nullptr;};
          inline string getOssObjectPrefix() const { DARABONBA_PTR_GET_DEFAULT(ossObjectPrefix_, "") };
          inline RecordFormatItem& setOssObjectPrefix(string ossObjectPrefix) { DARABONBA_PTR_SET_VALUE(ossObjectPrefix_, ossObjectPrefix) };


          // sliceOssObjectPrefix Field Functions 
          bool hasSliceOssObjectPrefix() const { return this->sliceOssObjectPrefix_ != nullptr;};
          void deleteSliceOssObjectPrefix() { this->sliceOssObjectPrefix_ = nullptr;};
          inline string getSliceOssObjectPrefix() const { DARABONBA_PTR_GET_DEFAULT(sliceOssObjectPrefix_, "") };
          inline RecordFormatItem& setSliceOssObjectPrefix(string sliceOssObjectPrefix) { DARABONBA_PTR_SET_VALUE(sliceOssObjectPrefix_, sliceOssObjectPrefix) };


        protected:
          // The length of the recording.
          shared_ptr<int32_t> cycleDuration_ {};
          // The format of the recording.
          shared_ptr<string> format_ {};
          // The name of the recording.
          shared_ptr<string> ossObjectPrefix_ {};
          // The name of the segment.
          shared_ptr<string> sliceOssObjectPrefix_ {};
        };

        virtual bool empty() const override { return this->recordFormat_ == nullptr; };
        // recordFormat Field Functions 
        bool hasRecordFormat() const { return this->recordFormat_ != nullptr;};
        void deleteRecordFormat() { this->recordFormat_ = nullptr;};
        inline const vector<RecordFormat::RecordFormatItem> & getRecordFormat() const { DARABONBA_PTR_GET_CONST(recordFormat_, vector<RecordFormat::RecordFormatItem>) };
        inline vector<RecordFormat::RecordFormatItem> getRecordFormat() { DARABONBA_PTR_GET(recordFormat_, vector<RecordFormat::RecordFormatItem>) };
        inline RecordFormat& setRecordFormat(const vector<RecordFormat::RecordFormatItem> & recordFormat) { DARABONBA_PTR_SET_VALUE(recordFormat_, recordFormat) };
        inline RecordFormat& setRecordFormat(vector<RecordFormat::RecordFormatItem> && recordFormat) { DARABONBA_PTR_SET_RVALUE(recordFormat_, recordFormat) };


      protected:
        shared_ptr<vector<RecordFormat::RecordFormatItem>> recordFormat_ {};
      };

      virtual bool empty() const override { return this->onDemand_ == nullptr
        && this->ossBucket_ == nullptr && this->ossEndpoint_ == nullptr && this->recordFormat_ == nullptr; };
      // onDemand Field Functions 
      bool hasOnDemand() const { return this->onDemand_ != nullptr;};
      void deleteOnDemand() { this->onDemand_ = nullptr;};
      inline int32_t getOnDemand() const { DARABONBA_PTR_GET_DEFAULT(onDemand_, 0) };
      inline RecordConfig& setOnDemand(int32_t onDemand) { DARABONBA_PTR_SET_VALUE(onDemand_, onDemand) };


      // ossBucket Field Functions 
      bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
      void deleteOssBucket() { this->ossBucket_ = nullptr;};
      inline string getOssBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
      inline RecordConfig& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


      // ossEndpoint Field Functions 
      bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
      void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
      inline string getOssEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
      inline RecordConfig& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


      // recordFormat Field Functions 
      bool hasRecordFormat() const { return this->recordFormat_ != nullptr;};
      void deleteRecordFormat() { this->recordFormat_ = nullptr;};
      inline const RecordConfig::RecordFormat & getRecordFormat() const { DARABONBA_PTR_GET_CONST(recordFormat_, RecordConfig::RecordFormat) };
      inline RecordConfig::RecordFormat getRecordFormat() { DARABONBA_PTR_GET(recordFormat_, RecordConfig::RecordFormat) };
      inline RecordConfig& setRecordFormat(const RecordConfig::RecordFormat & recordFormat) { DARABONBA_PTR_SET_VALUE(recordFormat_, recordFormat) };
      inline RecordConfig& setRecordFormat(RecordConfig::RecordFormat && recordFormat) { DARABONBA_PTR_SET_RVALUE(recordFormat_, recordFormat) };


    protected:
      // On-demand recording. Values:
      // - 0: Off. 
      // - 1: Via HTTP callback. 
      // - 2: Parse streaming parameters for on-demand recording. 
      // - 7: Default to not record.
      shared_ptr<int32_t> onDemand_ {};
      // The OSS bucket for storage.
      shared_ptr<string> ossBucket_ {};
      // The Object Storage Service (OSS) endpoint.
      shared_ptr<string> ossEndpoint_ {};
      // The recording configuration.
      shared_ptr<RecordConfig::RecordFormat> recordFormat_ {};
    };

    virtual bool empty() const override { return this->autoSwitchUrgentConfig_ == nullptr
        && this->autoSwitchUrgentOn_ == nullptr && this->callbackUrl_ == nullptr && this->casterId_ == nullptr && this->casterName_ == nullptr && this->channelEnable_ == nullptr
        && this->delay_ == nullptr && this->domainName_ == nullptr && this->programEffect_ == nullptr && this->programName_ == nullptr && this->recordConfig_ == nullptr
        && this->requestId_ == nullptr && this->sideOutputUrl_ == nullptr && this->sideOutputUrlList_ == nullptr && this->syncGroupsConfig_ == nullptr && this->transcodeConfig_ == nullptr
        && this->urgentImageId_ == nullptr && this->urgentImageUrl_ == nullptr && this->urgentLiveStreamUrl_ == nullptr && this->urgentMaterialId_ == nullptr; };
    // autoSwitchUrgentConfig Field Functions 
    bool hasAutoSwitchUrgentConfig() const { return this->autoSwitchUrgentConfig_ != nullptr;};
    void deleteAutoSwitchUrgentConfig() { this->autoSwitchUrgentConfig_ = nullptr;};
    inline string getAutoSwitchUrgentConfig() const { DARABONBA_PTR_GET_DEFAULT(autoSwitchUrgentConfig_, "") };
    inline DescribeCasterConfigResponseBody& setAutoSwitchUrgentConfig(string autoSwitchUrgentConfig) { DARABONBA_PTR_SET_VALUE(autoSwitchUrgentConfig_, autoSwitchUrgentConfig) };


    // autoSwitchUrgentOn Field Functions 
    bool hasAutoSwitchUrgentOn() const { return this->autoSwitchUrgentOn_ != nullptr;};
    void deleteAutoSwitchUrgentOn() { this->autoSwitchUrgentOn_ = nullptr;};
    inline string getAutoSwitchUrgentOn() const { DARABONBA_PTR_GET_DEFAULT(autoSwitchUrgentOn_, "") };
    inline DescribeCasterConfigResponseBody& setAutoSwitchUrgentOn(string autoSwitchUrgentOn) { DARABONBA_PTR_SET_VALUE(autoSwitchUrgentOn_, autoSwitchUrgentOn) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline DescribeCasterConfigResponseBody& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline DescribeCasterConfigResponseBody& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // casterName Field Functions 
    bool hasCasterName() const { return this->casterName_ != nullptr;};
    void deleteCasterName() { this->casterName_ = nullptr;};
    inline string getCasterName() const { DARABONBA_PTR_GET_DEFAULT(casterName_, "") };
    inline DescribeCasterConfigResponseBody& setCasterName(string casterName) { DARABONBA_PTR_SET_VALUE(casterName_, casterName) };


    // channelEnable Field Functions 
    bool hasChannelEnable() const { return this->channelEnable_ != nullptr;};
    void deleteChannelEnable() { this->channelEnable_ = nullptr;};
    inline int32_t getChannelEnable() const { DARABONBA_PTR_GET_DEFAULT(channelEnable_, 0) };
    inline DescribeCasterConfigResponseBody& setChannelEnable(int32_t channelEnable) { DARABONBA_PTR_SET_VALUE(channelEnable_, channelEnable) };


    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline float getDelay() const { DARABONBA_PTR_GET_DEFAULT(delay_, 0.0) };
    inline DescribeCasterConfigResponseBody& setDelay(float delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeCasterConfigResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // programEffect Field Functions 
    bool hasProgramEffect() const { return this->programEffect_ != nullptr;};
    void deleteProgramEffect() { this->programEffect_ = nullptr;};
    inline int32_t getProgramEffect() const { DARABONBA_PTR_GET_DEFAULT(programEffect_, 0) };
    inline DescribeCasterConfigResponseBody& setProgramEffect(int32_t programEffect) { DARABONBA_PTR_SET_VALUE(programEffect_, programEffect) };


    // programName Field Functions 
    bool hasProgramName() const { return this->programName_ != nullptr;};
    void deleteProgramName() { this->programName_ = nullptr;};
    inline string getProgramName() const { DARABONBA_PTR_GET_DEFAULT(programName_, "") };
    inline DescribeCasterConfigResponseBody& setProgramName(string programName) { DARABONBA_PTR_SET_VALUE(programName_, programName) };


    // recordConfig Field Functions 
    bool hasRecordConfig() const { return this->recordConfig_ != nullptr;};
    void deleteRecordConfig() { this->recordConfig_ = nullptr;};
    inline const DescribeCasterConfigResponseBody::RecordConfig & getRecordConfig() const { DARABONBA_PTR_GET_CONST(recordConfig_, DescribeCasterConfigResponseBody::RecordConfig) };
    inline DescribeCasterConfigResponseBody::RecordConfig getRecordConfig() { DARABONBA_PTR_GET(recordConfig_, DescribeCasterConfigResponseBody::RecordConfig) };
    inline DescribeCasterConfigResponseBody& setRecordConfig(const DescribeCasterConfigResponseBody::RecordConfig & recordConfig) { DARABONBA_PTR_SET_VALUE(recordConfig_, recordConfig) };
    inline DescribeCasterConfigResponseBody& setRecordConfig(DescribeCasterConfigResponseBody::RecordConfig && recordConfig) { DARABONBA_PTR_SET_RVALUE(recordConfig_, recordConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCasterConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sideOutputUrl Field Functions 
    bool hasSideOutputUrl() const { return this->sideOutputUrl_ != nullptr;};
    void deleteSideOutputUrl() { this->sideOutputUrl_ = nullptr;};
    inline string getSideOutputUrl() const { DARABONBA_PTR_GET_DEFAULT(sideOutputUrl_, "") };
    inline DescribeCasterConfigResponseBody& setSideOutputUrl(string sideOutputUrl) { DARABONBA_PTR_SET_VALUE(sideOutputUrl_, sideOutputUrl) };


    // sideOutputUrlList Field Functions 
    bool hasSideOutputUrlList() const { return this->sideOutputUrlList_ != nullptr;};
    void deleteSideOutputUrlList() { this->sideOutputUrlList_ = nullptr;};
    inline string getSideOutputUrlList() const { DARABONBA_PTR_GET_DEFAULT(sideOutputUrlList_, "") };
    inline DescribeCasterConfigResponseBody& setSideOutputUrlList(string sideOutputUrlList) { DARABONBA_PTR_SET_VALUE(sideOutputUrlList_, sideOutputUrlList) };


    // syncGroupsConfig Field Functions 
    bool hasSyncGroupsConfig() const { return this->syncGroupsConfig_ != nullptr;};
    void deleteSyncGroupsConfig() { this->syncGroupsConfig_ = nullptr;};
    inline const DescribeCasterConfigResponseBody::SyncGroupsConfig & getSyncGroupsConfig() const { DARABONBA_PTR_GET_CONST(syncGroupsConfig_, DescribeCasterConfigResponseBody::SyncGroupsConfig) };
    inline DescribeCasterConfigResponseBody::SyncGroupsConfig getSyncGroupsConfig() { DARABONBA_PTR_GET(syncGroupsConfig_, DescribeCasterConfigResponseBody::SyncGroupsConfig) };
    inline DescribeCasterConfigResponseBody& setSyncGroupsConfig(const DescribeCasterConfigResponseBody::SyncGroupsConfig & syncGroupsConfig) { DARABONBA_PTR_SET_VALUE(syncGroupsConfig_, syncGroupsConfig) };
    inline DescribeCasterConfigResponseBody& setSyncGroupsConfig(DescribeCasterConfigResponseBody::SyncGroupsConfig && syncGroupsConfig) { DARABONBA_PTR_SET_RVALUE(syncGroupsConfig_, syncGroupsConfig) };


    // transcodeConfig Field Functions 
    bool hasTranscodeConfig() const { return this->transcodeConfig_ != nullptr;};
    void deleteTranscodeConfig() { this->transcodeConfig_ = nullptr;};
    inline const DescribeCasterConfigResponseBody::TranscodeConfig & getTranscodeConfig() const { DARABONBA_PTR_GET_CONST(transcodeConfig_, DescribeCasterConfigResponseBody::TranscodeConfig) };
    inline DescribeCasterConfigResponseBody::TranscodeConfig getTranscodeConfig() { DARABONBA_PTR_GET(transcodeConfig_, DescribeCasterConfigResponseBody::TranscodeConfig) };
    inline DescribeCasterConfigResponseBody& setTranscodeConfig(const DescribeCasterConfigResponseBody::TranscodeConfig & transcodeConfig) { DARABONBA_PTR_SET_VALUE(transcodeConfig_, transcodeConfig) };
    inline DescribeCasterConfigResponseBody& setTranscodeConfig(DescribeCasterConfigResponseBody::TranscodeConfig && transcodeConfig) { DARABONBA_PTR_SET_RVALUE(transcodeConfig_, transcodeConfig) };


    // urgentImageId Field Functions 
    bool hasUrgentImageId() const { return this->urgentImageId_ != nullptr;};
    void deleteUrgentImageId() { this->urgentImageId_ = nullptr;};
    inline string getUrgentImageId() const { DARABONBA_PTR_GET_DEFAULT(urgentImageId_, "") };
    inline DescribeCasterConfigResponseBody& setUrgentImageId(string urgentImageId) { DARABONBA_PTR_SET_VALUE(urgentImageId_, urgentImageId) };


    // urgentImageUrl Field Functions 
    bool hasUrgentImageUrl() const { return this->urgentImageUrl_ != nullptr;};
    void deleteUrgentImageUrl() { this->urgentImageUrl_ = nullptr;};
    inline string getUrgentImageUrl() const { DARABONBA_PTR_GET_DEFAULT(urgentImageUrl_, "") };
    inline DescribeCasterConfigResponseBody& setUrgentImageUrl(string urgentImageUrl) { DARABONBA_PTR_SET_VALUE(urgentImageUrl_, urgentImageUrl) };


    // urgentLiveStreamUrl Field Functions 
    bool hasUrgentLiveStreamUrl() const { return this->urgentLiveStreamUrl_ != nullptr;};
    void deleteUrgentLiveStreamUrl() { this->urgentLiveStreamUrl_ = nullptr;};
    inline string getUrgentLiveStreamUrl() const { DARABONBA_PTR_GET_DEFAULT(urgentLiveStreamUrl_, "") };
    inline DescribeCasterConfigResponseBody& setUrgentLiveStreamUrl(string urgentLiveStreamUrl) { DARABONBA_PTR_SET_VALUE(urgentLiveStreamUrl_, urgentLiveStreamUrl) };


    // urgentMaterialId Field Functions 
    bool hasUrgentMaterialId() const { return this->urgentMaterialId_ != nullptr;};
    void deleteUrgentMaterialId() { this->urgentMaterialId_ = nullptr;};
    inline string getUrgentMaterialId() const { DARABONBA_PTR_GET_DEFAULT(urgentMaterialId_, "") };
    inline DescribeCasterConfigResponseBody& setUrgentMaterialId(string urgentMaterialId) { DARABONBA_PTR_SET_VALUE(urgentMaterialId_, urgentMaterialId) };


  protected:
    // The configuration for automatic switchover to the standby resource. The `eofThres` field specifies the duration after which the production studio automatically switches to the standby resource if a stream interruption occurs. Unit: seconds.
    shared_ptr<string> autoSwitchUrgentConfig_ {};
    // Indicates whether the production studio automatically switches to the standby resource in case of a stream interruption.
    // 
    // *   **true**
    // *   **false**
    shared_ptr<string> autoSwitchUrgentOn_ {};
    // The callback URL.
    shared_ptr<string> callbackUrl_ {};
    // The ID of the production studio.
    shared_ptr<string> casterId_ {};
    // The name of the production studio.
    shared_ptr<string> casterName_ {};
    // Indicates whether channels are enabled for the production studio. Valid values:
    // 
    // *   **0**: Channels are disabled.
    // *   **1**: Channels are enabled.
    shared_ptr<int32_t> channelEnable_ {};
    // Indicates whether stream delay is enabled. Unit: seconds.
    // 
    // *   **0**: Stream delay is disabled.
    // *   **A value greater than 0**: Stream delay is enabled.
    shared_ptr<float> delay_ {};
    // The main streaming domain.
    shared_ptr<string> domainName_ {};
    // Indicates whether the carousel playback feature is enabled. Valid values:
    // 
    // *   **0**: The carousel playback feature is disabled.
    // *   **1**: The carousel playback feature is enabled.
    shared_ptr<int32_t> programEffect_ {};
    // The name of the playlist for carousel playback.
    shared_ptr<string> programName_ {};
    // The recording configuration. If this parameter is empty, the recording feature is disabled.
    shared_ptr<DescribeCasterConfigResponseBody::RecordConfig> recordConfig_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The custom stream redirect URL.
    shared_ptr<string> sideOutputUrl_ {};
    // The list of custom stream redirect URLs.
    shared_ptr<string> sideOutputUrlList_ {};
    // The storage configuration.
    shared_ptr<DescribeCasterConfigResponseBody::SyncGroupsConfig> syncGroupsConfig_ {};
    // The transcoding configuration.
    shared_ptr<DescribeCasterConfigResponseBody::TranscodeConfig> transcodeConfig_ {};
    // Prepared broadcast image media asset ID.
    shared_ptr<string> urgentImageId_ {};
    // URL of the standby image material.
    shared_ptr<string> urgentImageUrl_ {};
    // The URL of the standby live stream.
    shared_ptr<string> urgentLiveStreamUrl_ {};
    // The ID of the material that is used as the standby video from the media library.
    shared_ptr<string> urgentMaterialId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
