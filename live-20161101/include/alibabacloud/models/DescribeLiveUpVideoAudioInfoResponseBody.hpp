// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEUPVIDEOAUDIOINFORESPONSEBODY_HPP_
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
  class DescribeLiveUpVideoAudioInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveUpVideoAudioInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UpItems, upItems_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveUpVideoAudioInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UpItems, upItems_);
    };
    DescribeLiveUpVideoAudioInfoResponseBody() = default ;
    DescribeLiveUpVideoAudioInfoResponseBody(const DescribeLiveUpVideoAudioInfoResponseBody &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBody(DescribeLiveUpVideoAudioInfoResponseBody &&) = default ;
    DescribeLiveUpVideoAudioInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveUpVideoAudioInfoResponseBody() = default ;
    DescribeLiveUpVideoAudioInfoResponseBody& operator=(const DescribeLiveUpVideoAudioInfoResponseBody &) = default ;
    DescribeLiveUpVideoAudioInfoResponseBody& operator=(DescribeLiveUpVideoAudioInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpItems& obj) { 
        DARABONBA_PTR_TO_JSON(PublishItem, publishItem_);
      };
      friend void from_json(const Darabonba::Json& j, UpItems& obj) { 
        DARABONBA_PTR_FROM_JSON(PublishItem, publishItem_);
      };
      UpItems() = default ;
      UpItems(const UpItems &) = default ;
      UpItems(UpItems &&) = default ;
      UpItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpItems() = default ;
      UpItems& operator=(const UpItems &) = default ;
      UpItems& operator=(UpItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PublishItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PublishItem& obj) { 
          DARABONBA_PTR_TO_JSON(AacHeaders, aacHeaders_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(AudioBitRate, audioBitRate_);
          DARABONBA_PTR_TO_JSON(AudioFrames, audioFrames_);
          DARABONBA_PTR_TO_JSON(AudioInterval, audioInterval_);
          DARABONBA_PTR_TO_JSON(AudioStamps, audioStamps_);
          DARABONBA_PTR_TO_JSON(AvcHeaders, avcHeaders_);
          DARABONBA_PTR_TO_JSON(CodecInfo, codecInfo_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(ErrorFlags, errorFlags_);
          DARABONBA_PTR_TO_JSON(PublishInterval, publishInterval_);
          DARABONBA_PTR_TO_JSON(PublishIp, publishIp_);
          DARABONBA_PTR_TO_JSON(PublishStatus, publishStatus_);
          DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
          DARABONBA_PTR_TO_JSON(StopTime, stopTime_);
          DARABONBA_PTR_TO_JSON(StreamName, streamName_);
          DARABONBA_PTR_TO_JSON(UniqueId, uniqueId_);
          DARABONBA_PTR_TO_JSON(VideoAndAudioStamp, videoAndAudioStamp_);
          DARABONBA_PTR_TO_JSON(VideoBitRate, videoBitRate_);
          DARABONBA_PTR_TO_JSON(VideoFrames, videoFrames_);
          DARABONBA_PTR_TO_JSON(VideoInterval, videoInterval_);
          DARABONBA_PTR_TO_JSON(VideoStamps, videoStamps_);
        };
        friend void from_json(const Darabonba::Json& j, PublishItem& obj) { 
          DARABONBA_PTR_FROM_JSON(AacHeaders, aacHeaders_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(AudioBitRate, audioBitRate_);
          DARABONBA_PTR_FROM_JSON(AudioFrames, audioFrames_);
          DARABONBA_PTR_FROM_JSON(AudioInterval, audioInterval_);
          DARABONBA_PTR_FROM_JSON(AudioStamps, audioStamps_);
          DARABONBA_PTR_FROM_JSON(AvcHeaders, avcHeaders_);
          DARABONBA_PTR_FROM_JSON(CodecInfo, codecInfo_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(ErrorFlags, errorFlags_);
          DARABONBA_PTR_FROM_JSON(PublishInterval, publishInterval_);
          DARABONBA_PTR_FROM_JSON(PublishIp, publishIp_);
          DARABONBA_PTR_FROM_JSON(PublishStatus, publishStatus_);
          DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
          DARABONBA_PTR_FROM_JSON(StopTime, stopTime_);
          DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
          DARABONBA_PTR_FROM_JSON(UniqueId, uniqueId_);
          DARABONBA_PTR_FROM_JSON(VideoAndAudioStamp, videoAndAudioStamp_);
          DARABONBA_PTR_FROM_JSON(VideoBitRate, videoBitRate_);
          DARABONBA_PTR_FROM_JSON(VideoFrames, videoFrames_);
          DARABONBA_PTR_FROM_JSON(VideoInterval, videoInterval_);
          DARABONBA_PTR_FROM_JSON(VideoStamps, videoStamps_);
        };
        PublishItem() = default ;
        PublishItem(const PublishItem &) = default ;
        PublishItem(PublishItem &&) = default ;
        PublishItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PublishItem() = default ;
        PublishItem& operator=(const PublishItem &) = default ;
        PublishItem& operator=(PublishItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VideoStamps : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VideoStamps& obj) { 
            DARABONBA_PTR_TO_JSON(VideoStamps, videoStamps_);
          };
          friend void from_json(const Darabonba::Json& j, VideoStamps& obj) { 
            DARABONBA_PTR_FROM_JSON(VideoStamps, videoStamps_);
          };
          VideoStamps() = default ;
          VideoStamps(const VideoStamps &) = default ;
          VideoStamps(VideoStamps &&) = default ;
          VideoStamps(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VideoStamps() = default ;
          VideoStamps& operator=(const VideoStamps &) = default ;
          VideoStamps& operator=(VideoStamps &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class VideoStampsItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const VideoStampsItem& obj) { 
              DARABONBA_PTR_TO_JSON(Time, time_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, VideoStampsItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Time, time_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            VideoStampsItem() = default ;
            VideoStampsItem(const VideoStampsItem &) = default ;
            VideoStampsItem(VideoStampsItem &&) = default ;
            VideoStampsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~VideoStampsItem() = default ;
            VideoStampsItem& operator=(const VideoStampsItem &) = default ;
            VideoStampsItem& operator=(VideoStampsItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->time_ == nullptr
        && this->value_ == nullptr; };
            // time Field Functions 
            bool hasTime() const { return this->time_ != nullptr;};
            void deleteTime() { this->time_ = nullptr;};
            inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
            inline VideoStampsItem& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline int32_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
            inline VideoStampsItem& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The video timestamp. Unit: milliseconds.
            shared_ptr<int64_t> time_ {};
            // The query time. The value is a UNIX timestamp in milliseconds.
            shared_ptr<int32_t> value_ {};
          };

          virtual bool empty() const override { return this->videoStamps_ == nullptr; };
          // videoStamps Field Functions 
          bool hasVideoStamps() const { return this->videoStamps_ != nullptr;};
          void deleteVideoStamps() { this->videoStamps_ = nullptr;};
          inline const vector<VideoStamps::VideoStampsItem> & getVideoStamps() const { DARABONBA_PTR_GET_CONST(videoStamps_, vector<VideoStamps::VideoStampsItem>) };
          inline vector<VideoStamps::VideoStampsItem> getVideoStamps() { DARABONBA_PTR_GET(videoStamps_, vector<VideoStamps::VideoStampsItem>) };
          inline VideoStamps& setVideoStamps(const vector<VideoStamps::VideoStampsItem> & videoStamps) { DARABONBA_PTR_SET_VALUE(videoStamps_, videoStamps) };
          inline VideoStamps& setVideoStamps(vector<VideoStamps::VideoStampsItem> && videoStamps) { DARABONBA_PTR_SET_RVALUE(videoStamps_, videoStamps) };


        protected:
          shared_ptr<vector<VideoStamps::VideoStampsItem>> videoStamps_ {};
        };

        class VideoInterval : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VideoInterval& obj) { 
            DARABONBA_PTR_TO_JSON(VideoInterval, videoInterval_);
          };
          friend void from_json(const Darabonba::Json& j, VideoInterval& obj) { 
            DARABONBA_PTR_FROM_JSON(VideoInterval, videoInterval_);
          };
          VideoInterval() = default ;
          VideoInterval(const VideoInterval &) = default ;
          VideoInterval(VideoInterval &&) = default ;
          VideoInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VideoInterval() = default ;
          VideoInterval& operator=(const VideoInterval &) = default ;
          VideoInterval& operator=(VideoInterval &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class VideoIntervalItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const VideoIntervalItem& obj) { 
              DARABONBA_PTR_TO_JSON(Time, time_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, VideoIntervalItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Time, time_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            VideoIntervalItem() = default ;
            VideoIntervalItem(const VideoIntervalItem &) = default ;
            VideoIntervalItem(VideoIntervalItem &&) = default ;
            VideoIntervalItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~VideoIntervalItem() = default ;
            VideoIntervalItem& operator=(const VideoIntervalItem &) = default ;
            VideoIntervalItem& operator=(VideoIntervalItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->time_ == nullptr
        && this->value_ == nullptr; };
            // time Field Functions 
            bool hasTime() const { return this->time_ != nullptr;};
            void deleteTime() { this->time_ = nullptr;};
            inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
            inline VideoIntervalItem& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline int32_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
            inline VideoIntervalItem& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The maximum video frame interval. Unit: milliseconds.
            shared_ptr<int64_t> time_ {};
            // The query time. The value is a UNIX timestamp in milliseconds.
            shared_ptr<int32_t> value_ {};
          };

          virtual bool empty() const override { return this->videoInterval_ == nullptr; };
          // videoInterval Field Functions 
          bool hasVideoInterval() const { return this->videoInterval_ != nullptr;};
          void deleteVideoInterval() { this->videoInterval_ = nullptr;};
          inline const vector<VideoInterval::VideoIntervalItem> & getVideoInterval() const { DARABONBA_PTR_GET_CONST(videoInterval_, vector<VideoInterval::VideoIntervalItem>) };
          inline vector<VideoInterval::VideoIntervalItem> getVideoInterval() { DARABONBA_PTR_GET(videoInterval_, vector<VideoInterval::VideoIntervalItem>) };
          inline VideoInterval& setVideoInterval(const vector<VideoInterval::VideoIntervalItem> & videoInterval) { DARABONBA_PTR_SET_VALUE(videoInterval_, videoInterval) };
          inline VideoInterval& setVideoInterval(vector<VideoInterval::VideoIntervalItem> && videoInterval) { DARABONBA_PTR_SET_RVALUE(videoInterval_, videoInterval) };


        protected:
          shared_ptr<vector<VideoInterval::VideoIntervalItem>> videoInterval_ {};
        };

        class VideoFrames : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VideoFrames& obj) { 
            DARABONBA_PTR_TO_JSON(VideoFrames, videoFrames_);
          };
          friend void from_json(const Darabonba::Json& j, VideoFrames& obj) { 
            DARABONBA_PTR_FROM_JSON(VideoFrames, videoFrames_);
          };
          VideoFrames() = default ;
          VideoFrames(const VideoFrames &) = default ;
          VideoFrames(VideoFrames &&) = default ;
          VideoFrames(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VideoFrames() = default ;
          VideoFrames& operator=(const VideoFrames &) = default ;
          VideoFrames& operator=(VideoFrames &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class VideoFramesItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const VideoFramesItem& obj) { 
              DARABONBA_PTR_TO_JSON(Time, time_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, VideoFramesItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Time, time_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            VideoFramesItem() = default ;
            VideoFramesItem(const VideoFramesItem &) = default ;
            VideoFramesItem(VideoFramesItem &&) = default ;
            VideoFramesItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~VideoFramesItem() = default ;
            VideoFramesItem& operator=(const VideoFramesItem &) = default ;
            VideoFramesItem& operator=(VideoFramesItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->time_ == nullptr
        && this->value_ == nullptr; };
            // time Field Functions 
            bool hasTime() const { return this->time_ != nullptr;};
            void deleteTime() { this->time_ = nullptr;};
            inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
            inline VideoFramesItem& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline int32_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
            inline VideoFramesItem& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The frame rate of the video. Unit: frames.
            shared_ptr<int64_t> time_ {};
            // The query time. The value is a UNIX timestamp in milliseconds.
            shared_ptr<int32_t> value_ {};
          };

          virtual bool empty() const override { return this->videoFrames_ == nullptr; };
          // videoFrames Field Functions 
          bool hasVideoFrames() const { return this->videoFrames_ != nullptr;};
          void deleteVideoFrames() { this->videoFrames_ = nullptr;};
          inline const vector<VideoFrames::VideoFramesItem> & getVideoFrames() const { DARABONBA_PTR_GET_CONST(videoFrames_, vector<VideoFrames::VideoFramesItem>) };
          inline vector<VideoFrames::VideoFramesItem> getVideoFrames() { DARABONBA_PTR_GET(videoFrames_, vector<VideoFrames::VideoFramesItem>) };
          inline VideoFrames& setVideoFrames(const vector<VideoFrames::VideoFramesItem> & videoFrames) { DARABONBA_PTR_SET_VALUE(videoFrames_, videoFrames) };
          inline VideoFrames& setVideoFrames(vector<VideoFrames::VideoFramesItem> && videoFrames) { DARABONBA_PTR_SET_RVALUE(videoFrames_, videoFrames) };


        protected:
          shared_ptr<vector<VideoFrames::VideoFramesItem>> videoFrames_ {};
        };

        class VideoBitRate : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VideoBitRate& obj) { 
            DARABONBA_PTR_TO_JSON(VideoBitRate, videoBitRate_);
          };
          friend void from_json(const Darabonba::Json& j, VideoBitRate& obj) { 
            DARABONBA_PTR_FROM_JSON(VideoBitRate, videoBitRate_);
          };
          VideoBitRate() = default ;
          VideoBitRate(const VideoBitRate &) = default ;
          VideoBitRate(VideoBitRate &&) = default ;
          VideoBitRate(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VideoBitRate() = default ;
          VideoBitRate& operator=(const VideoBitRate &) = default ;
          VideoBitRate& operator=(VideoBitRate &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class VideoBitRateItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const VideoBitRateItem& obj) { 
              DARABONBA_PTR_TO_JSON(Time, time_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, VideoBitRateItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Time, time_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            VideoBitRateItem() = default ;
            VideoBitRateItem(const VideoBitRateItem &) = default ;
            VideoBitRateItem(VideoBitRateItem &&) = default ;
            VideoBitRateItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~VideoBitRateItem() = default ;
            VideoBitRateItem& operator=(const VideoBitRateItem &) = default ;
            VideoBitRateItem& operator=(VideoBitRateItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->time_ == nullptr
        && this->value_ == nullptr; };
            // time Field Functions 
            bool hasTime() const { return this->time_ != nullptr;};
            void deleteTime() { this->time_ = nullptr;};
            inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
            inline VideoBitRateItem& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline int32_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
            inline VideoBitRateItem& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The bitrate of the video. Unit: bit/s.
            shared_ptr<int64_t> time_ {};
            // The query time. The value is a UNIX timestamp in milliseconds.
            shared_ptr<int32_t> value_ {};
          };

          virtual bool empty() const override { return this->videoBitRate_ == nullptr; };
          // videoBitRate Field Functions 
          bool hasVideoBitRate() const { return this->videoBitRate_ != nullptr;};
          void deleteVideoBitRate() { this->videoBitRate_ = nullptr;};
          inline const vector<VideoBitRate::VideoBitRateItem> & getVideoBitRate() const { DARABONBA_PTR_GET_CONST(videoBitRate_, vector<VideoBitRate::VideoBitRateItem>) };
          inline vector<VideoBitRate::VideoBitRateItem> getVideoBitRate() { DARABONBA_PTR_GET(videoBitRate_, vector<VideoBitRate::VideoBitRateItem>) };
          inline VideoBitRate& setVideoBitRate(const vector<VideoBitRate::VideoBitRateItem> & videoBitRate) { DARABONBA_PTR_SET_VALUE(videoBitRate_, videoBitRate) };
          inline VideoBitRate& setVideoBitRate(vector<VideoBitRate::VideoBitRateItem> && videoBitRate) { DARABONBA_PTR_SET_RVALUE(videoBitRate_, videoBitRate) };


        protected:
          shared_ptr<vector<VideoBitRate::VideoBitRateItem>> videoBitRate_ {};
        };

        class VideoAndAudioStamp : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VideoAndAudioStamp& obj) { 
            DARABONBA_PTR_TO_JSON(V_AStamp, vAStamp_);
          };
          friend void from_json(const Darabonba::Json& j, VideoAndAudioStamp& obj) { 
            DARABONBA_PTR_FROM_JSON(V_AStamp, vAStamp_);
          };
          VideoAndAudioStamp() = default ;
          VideoAndAudioStamp(const VideoAndAudioStamp &) = default ;
          VideoAndAudioStamp(VideoAndAudioStamp &&) = default ;
          VideoAndAudioStamp(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VideoAndAudioStamp() = default ;
          VideoAndAudioStamp& operator=(const VideoAndAudioStamp &) = default ;
          VideoAndAudioStamp& operator=(VideoAndAudioStamp &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class VAStamp : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const VAStamp& obj) { 
              DARABONBA_PTR_TO_JSON(Time, time_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, VAStamp& obj) { 
              DARABONBA_PTR_FROM_JSON(Time, time_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            VAStamp() = default ;
            VAStamp(const VAStamp &) = default ;
            VAStamp(VAStamp &&) = default ;
            VAStamp(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~VAStamp() = default ;
            VAStamp& operator=(const VAStamp &) = default ;
            VAStamp& operator=(VAStamp &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->time_ == nullptr
        && this->value_ == nullptr; };
            // time Field Functions 
            bool hasTime() const { return this->time_ != nullptr;};
            void deleteTime() { this->time_ = nullptr;};
            inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
            inline VAStamp& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline int32_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
            inline VAStamp& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The difference between the audio and video timestamps. Unit: milliseconds.
            shared_ptr<int64_t> time_ {};
            // The query time. The value is a UNIX timestamp in milliseconds.
            shared_ptr<int32_t> value_ {};
          };

          virtual bool empty() const override { return this->vAStamp_ == nullptr; };
          // vAStamp Field Functions 
          bool hasVAStamp() const { return this->vAStamp_ != nullptr;};
          void deleteVAStamp() { this->vAStamp_ = nullptr;};
          inline const vector<VideoAndAudioStamp::VAStamp> & getVAStamp() const { DARABONBA_PTR_GET_CONST(vAStamp_, vector<VideoAndAudioStamp::VAStamp>) };
          inline vector<VideoAndAudioStamp::VAStamp> getVAStamp() { DARABONBA_PTR_GET(vAStamp_, vector<VideoAndAudioStamp::VAStamp>) };
          inline VideoAndAudioStamp& setVAStamp(const vector<VideoAndAudioStamp::VAStamp> & vAStamp) { DARABONBA_PTR_SET_VALUE(vAStamp_, vAStamp) };
          inline VideoAndAudioStamp& setVAStamp(vector<VideoAndAudioStamp::VAStamp> && vAStamp) { DARABONBA_PTR_SET_RVALUE(vAStamp_, vAStamp) };


        protected:
          shared_ptr<vector<VideoAndAudioStamp::VAStamp>> vAStamp_ {};
        };

        class ErrorFlags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ErrorFlags& obj) { 
            DARABONBA_PTR_TO_JSON(ErrorFlags, errorFlags_);
          };
          friend void from_json(const Darabonba::Json& j, ErrorFlags& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorFlags, errorFlags_);
          };
          ErrorFlags() = default ;
          ErrorFlags(const ErrorFlags &) = default ;
          ErrorFlags(ErrorFlags &&) = default ;
          ErrorFlags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ErrorFlags() = default ;
          ErrorFlags& operator=(const ErrorFlags &) = default ;
          ErrorFlags& operator=(ErrorFlags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ErrorFlagsItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ErrorFlagsItem& obj) { 
              DARABONBA_PTR_TO_JSON(Time, time_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, ErrorFlagsItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Time, time_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            ErrorFlagsItem() = default ;
            ErrorFlagsItem(const ErrorFlagsItem &) = default ;
            ErrorFlagsItem(ErrorFlagsItem &&) = default ;
            ErrorFlagsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ErrorFlagsItem() = default ;
            ErrorFlagsItem& operator=(const ErrorFlagsItem &) = default ;
            ErrorFlagsItem& operator=(ErrorFlagsItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->time_ == nullptr
        && this->value_ == nullptr; };
            // time Field Functions 
            bool hasTime() const { return this->time_ != nullptr;};
            void deleteTime() { this->time_ = nullptr;};
            inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
            inline ErrorFlagsItem& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline int32_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
            inline ErrorFlagsItem& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The number of times the error code that indicates interrupted stream ingest was returned.
            shared_ptr<int64_t> time_ {};
            // The query time. The value is a UNIX timestamp in milliseconds.
            shared_ptr<int32_t> value_ {};
          };

          virtual bool empty() const override { return this->errorFlags_ == nullptr; };
          // errorFlags Field Functions 
          bool hasErrorFlags() const { return this->errorFlags_ != nullptr;};
          void deleteErrorFlags() { this->errorFlags_ = nullptr;};
          inline const vector<ErrorFlags::ErrorFlagsItem> & getErrorFlags() const { DARABONBA_PTR_GET_CONST(errorFlags_, vector<ErrorFlags::ErrorFlagsItem>) };
          inline vector<ErrorFlags::ErrorFlagsItem> getErrorFlags() { DARABONBA_PTR_GET(errorFlags_, vector<ErrorFlags::ErrorFlagsItem>) };
          inline ErrorFlags& setErrorFlags(const vector<ErrorFlags::ErrorFlagsItem> & errorFlags) { DARABONBA_PTR_SET_VALUE(errorFlags_, errorFlags) };
          inline ErrorFlags& setErrorFlags(vector<ErrorFlags::ErrorFlagsItem> && errorFlags) { DARABONBA_PTR_SET_RVALUE(errorFlags_, errorFlags) };


        protected:
          shared_ptr<vector<ErrorFlags::ErrorFlagsItem>> errorFlags_ {};
        };

        class AvcHeaders : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AvcHeaders& obj) { 
            DARABONBA_PTR_TO_JSON(AvcHeaders, avcHeaders_);
          };
          friend void from_json(const Darabonba::Json& j, AvcHeaders& obj) { 
            DARABONBA_PTR_FROM_JSON(AvcHeaders, avcHeaders_);
          };
          AvcHeaders() = default ;
          AvcHeaders(const AvcHeaders &) = default ;
          AvcHeaders(AvcHeaders &&) = default ;
          AvcHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AvcHeaders() = default ;
          AvcHeaders& operator=(const AvcHeaders &) = default ;
          AvcHeaders& operator=(AvcHeaders &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AvcHeadersItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AvcHeadersItem& obj) { 
              DARABONBA_PTR_TO_JSON(Time, time_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, AvcHeadersItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Time, time_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            AvcHeadersItem() = default ;
            AvcHeadersItem(const AvcHeadersItem &) = default ;
            AvcHeadersItem(AvcHeadersItem &&) = default ;
            AvcHeadersItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AvcHeadersItem() = default ;
            AvcHeadersItem& operator=(const AvcHeadersItem &) = default ;
            AvcHeadersItem& operator=(AvcHeadersItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->time_ == nullptr
        && this->value_ == nullptr; };
            // time Field Functions 
            bool hasTime() const { return this->time_ != nullptr;};
            void deleteTime() { this->time_ = nullptr;};
            inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
            inline AvcHeadersItem& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline int32_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
            inline AvcHeadersItem& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The number of AVC headers in the audio.
            shared_ptr<int64_t> time_ {};
            // The query time. The value is a UNIX timestamp in milliseconds.
            shared_ptr<int32_t> value_ {};
          };

          virtual bool empty() const override { return this->avcHeaders_ == nullptr; };
          // avcHeaders Field Functions 
          bool hasAvcHeaders() const { return this->avcHeaders_ != nullptr;};
          void deleteAvcHeaders() { this->avcHeaders_ = nullptr;};
          inline const vector<AvcHeaders::AvcHeadersItem> & getAvcHeaders() const { DARABONBA_PTR_GET_CONST(avcHeaders_, vector<AvcHeaders::AvcHeadersItem>) };
          inline vector<AvcHeaders::AvcHeadersItem> getAvcHeaders() { DARABONBA_PTR_GET(avcHeaders_, vector<AvcHeaders::AvcHeadersItem>) };
          inline AvcHeaders& setAvcHeaders(const vector<AvcHeaders::AvcHeadersItem> & avcHeaders) { DARABONBA_PTR_SET_VALUE(avcHeaders_, avcHeaders) };
          inline AvcHeaders& setAvcHeaders(vector<AvcHeaders::AvcHeadersItem> && avcHeaders) { DARABONBA_PTR_SET_RVALUE(avcHeaders_, avcHeaders) };


        protected:
          shared_ptr<vector<AvcHeaders::AvcHeadersItem>> avcHeaders_ {};
        };

        class AudioStamps : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AudioStamps& obj) { 
            DARABONBA_PTR_TO_JSON(AudioStamps, audioStamps_);
          };
          friend void from_json(const Darabonba::Json& j, AudioStamps& obj) { 
            DARABONBA_PTR_FROM_JSON(AudioStamps, audioStamps_);
          };
          AudioStamps() = default ;
          AudioStamps(const AudioStamps &) = default ;
          AudioStamps(AudioStamps &&) = default ;
          AudioStamps(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AudioStamps() = default ;
          AudioStamps& operator=(const AudioStamps &) = default ;
          AudioStamps& operator=(AudioStamps &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AudioStampsItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AudioStampsItem& obj) { 
              DARABONBA_PTR_TO_JSON(Time, time_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, AudioStampsItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Time, time_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            AudioStampsItem() = default ;
            AudioStampsItem(const AudioStampsItem &) = default ;
            AudioStampsItem(AudioStampsItem &&) = default ;
            AudioStampsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AudioStampsItem() = default ;
            AudioStampsItem& operator=(const AudioStampsItem &) = default ;
            AudioStampsItem& operator=(AudioStampsItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->time_ == nullptr
        && this->value_ == nullptr; };
            // time Field Functions 
            bool hasTime() const { return this->time_ != nullptr;};
            void deleteTime() { this->time_ = nullptr;};
            inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
            inline AudioStampsItem& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline int32_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
            inline AudioStampsItem& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The audio timestamp. Unit: milliseconds.
            shared_ptr<int64_t> time_ {};
            // The query time. The value is a UNIX timestamp in milliseconds.
            shared_ptr<int32_t> value_ {};
          };

          virtual bool empty() const override { return this->audioStamps_ == nullptr; };
          // audioStamps Field Functions 
          bool hasAudioStamps() const { return this->audioStamps_ != nullptr;};
          void deleteAudioStamps() { this->audioStamps_ = nullptr;};
          inline const vector<AudioStamps::AudioStampsItem> & getAudioStamps() const { DARABONBA_PTR_GET_CONST(audioStamps_, vector<AudioStamps::AudioStampsItem>) };
          inline vector<AudioStamps::AudioStampsItem> getAudioStamps() { DARABONBA_PTR_GET(audioStamps_, vector<AudioStamps::AudioStampsItem>) };
          inline AudioStamps& setAudioStamps(const vector<AudioStamps::AudioStampsItem> & audioStamps) { DARABONBA_PTR_SET_VALUE(audioStamps_, audioStamps) };
          inline AudioStamps& setAudioStamps(vector<AudioStamps::AudioStampsItem> && audioStamps) { DARABONBA_PTR_SET_RVALUE(audioStamps_, audioStamps) };


        protected:
          shared_ptr<vector<AudioStamps::AudioStampsItem>> audioStamps_ {};
        };

        class AudioInterval : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AudioInterval& obj) { 
            DARABONBA_PTR_TO_JSON(AudioInterval, audioInterval_);
          };
          friend void from_json(const Darabonba::Json& j, AudioInterval& obj) { 
            DARABONBA_PTR_FROM_JSON(AudioInterval, audioInterval_);
          };
          AudioInterval() = default ;
          AudioInterval(const AudioInterval &) = default ;
          AudioInterval(AudioInterval &&) = default ;
          AudioInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AudioInterval() = default ;
          AudioInterval& operator=(const AudioInterval &) = default ;
          AudioInterval& operator=(AudioInterval &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AudioIntervalItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AudioIntervalItem& obj) { 
              DARABONBA_PTR_TO_JSON(Time, time_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, AudioIntervalItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Time, time_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            AudioIntervalItem() = default ;
            AudioIntervalItem(const AudioIntervalItem &) = default ;
            AudioIntervalItem(AudioIntervalItem &&) = default ;
            AudioIntervalItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AudioIntervalItem() = default ;
            AudioIntervalItem& operator=(const AudioIntervalItem &) = default ;
            AudioIntervalItem& operator=(AudioIntervalItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->time_ == nullptr
        && this->value_ == nullptr; };
            // time Field Functions 
            bool hasTime() const { return this->time_ != nullptr;};
            void deleteTime() { this->time_ = nullptr;};
            inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
            inline AudioIntervalItem& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline int32_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
            inline AudioIntervalItem& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The maximum audio frame interval. Unit: milliseconds.
            shared_ptr<int64_t> time_ {};
            // The query time. The value is a UNIX timestamp in milliseconds.
            shared_ptr<int32_t> value_ {};
          };

          virtual bool empty() const override { return this->audioInterval_ == nullptr; };
          // audioInterval Field Functions 
          bool hasAudioInterval() const { return this->audioInterval_ != nullptr;};
          void deleteAudioInterval() { this->audioInterval_ = nullptr;};
          inline const vector<AudioInterval::AudioIntervalItem> & getAudioInterval() const { DARABONBA_PTR_GET_CONST(audioInterval_, vector<AudioInterval::AudioIntervalItem>) };
          inline vector<AudioInterval::AudioIntervalItem> getAudioInterval() { DARABONBA_PTR_GET(audioInterval_, vector<AudioInterval::AudioIntervalItem>) };
          inline AudioInterval& setAudioInterval(const vector<AudioInterval::AudioIntervalItem> & audioInterval) { DARABONBA_PTR_SET_VALUE(audioInterval_, audioInterval) };
          inline AudioInterval& setAudioInterval(vector<AudioInterval::AudioIntervalItem> && audioInterval) { DARABONBA_PTR_SET_RVALUE(audioInterval_, audioInterval) };


        protected:
          shared_ptr<vector<AudioInterval::AudioIntervalItem>> audioInterval_ {};
        };

        class AudioFrames : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AudioFrames& obj) { 
            DARABONBA_PTR_TO_JSON(AudioFrames, audioFrames_);
          };
          friend void from_json(const Darabonba::Json& j, AudioFrames& obj) { 
            DARABONBA_PTR_FROM_JSON(AudioFrames, audioFrames_);
          };
          AudioFrames() = default ;
          AudioFrames(const AudioFrames &) = default ;
          AudioFrames(AudioFrames &&) = default ;
          AudioFrames(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AudioFrames() = default ;
          AudioFrames& operator=(const AudioFrames &) = default ;
          AudioFrames& operator=(AudioFrames &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AudioFramesItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AudioFramesItem& obj) { 
              DARABONBA_PTR_TO_JSON(Time, time_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, AudioFramesItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Time, time_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            AudioFramesItem() = default ;
            AudioFramesItem(const AudioFramesItem &) = default ;
            AudioFramesItem(AudioFramesItem &&) = default ;
            AudioFramesItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AudioFramesItem() = default ;
            AudioFramesItem& operator=(const AudioFramesItem &) = default ;
            AudioFramesItem& operator=(AudioFramesItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->time_ == nullptr
        && this->value_ == nullptr; };
            // time Field Functions 
            bool hasTime() const { return this->time_ != nullptr;};
            void deleteTime() { this->time_ = nullptr;};
            inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
            inline AudioFramesItem& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline int32_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
            inline AudioFramesItem& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The frame rate of the audio. Unit: frames.
            shared_ptr<int64_t> time_ {};
            // The query time. The value is a UNIX timestamp in milliseconds.
            shared_ptr<int32_t> value_ {};
          };

          virtual bool empty() const override { return this->audioFrames_ == nullptr; };
          // audioFrames Field Functions 
          bool hasAudioFrames() const { return this->audioFrames_ != nullptr;};
          void deleteAudioFrames() { this->audioFrames_ = nullptr;};
          inline const vector<AudioFrames::AudioFramesItem> & getAudioFrames() const { DARABONBA_PTR_GET_CONST(audioFrames_, vector<AudioFrames::AudioFramesItem>) };
          inline vector<AudioFrames::AudioFramesItem> getAudioFrames() { DARABONBA_PTR_GET(audioFrames_, vector<AudioFrames::AudioFramesItem>) };
          inline AudioFrames& setAudioFrames(const vector<AudioFrames::AudioFramesItem> & audioFrames) { DARABONBA_PTR_SET_VALUE(audioFrames_, audioFrames) };
          inline AudioFrames& setAudioFrames(vector<AudioFrames::AudioFramesItem> && audioFrames) { DARABONBA_PTR_SET_RVALUE(audioFrames_, audioFrames) };


        protected:
          shared_ptr<vector<AudioFrames::AudioFramesItem>> audioFrames_ {};
        };

        class AudioBitRate : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AudioBitRate& obj) { 
            DARABONBA_PTR_TO_JSON(AudioBitRate, audioBitRate_);
          };
          friend void from_json(const Darabonba::Json& j, AudioBitRate& obj) { 
            DARABONBA_PTR_FROM_JSON(AudioBitRate, audioBitRate_);
          };
          AudioBitRate() = default ;
          AudioBitRate(const AudioBitRate &) = default ;
          AudioBitRate(AudioBitRate &&) = default ;
          AudioBitRate(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AudioBitRate() = default ;
          AudioBitRate& operator=(const AudioBitRate &) = default ;
          AudioBitRate& operator=(AudioBitRate &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AudioBitRateItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AudioBitRateItem& obj) { 
              DARABONBA_PTR_TO_JSON(Time, time_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, AudioBitRateItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Time, time_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            AudioBitRateItem() = default ;
            AudioBitRateItem(const AudioBitRateItem &) = default ;
            AudioBitRateItem(AudioBitRateItem &&) = default ;
            AudioBitRateItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AudioBitRateItem() = default ;
            AudioBitRateItem& operator=(const AudioBitRateItem &) = default ;
            AudioBitRateItem& operator=(AudioBitRateItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->time_ == nullptr
        && this->value_ == nullptr; };
            // time Field Functions 
            bool hasTime() const { return this->time_ != nullptr;};
            void deleteTime() { this->time_ = nullptr;};
            inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
            inline AudioBitRateItem& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline int32_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
            inline AudioBitRateItem& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The bitrate of the audio. Unit: bit/s.
            shared_ptr<int64_t> time_ {};
            // The query time. The value is a UNIX timestamp in milliseconds.
            shared_ptr<int32_t> value_ {};
          };

          virtual bool empty() const override { return this->audioBitRate_ == nullptr; };
          // audioBitRate Field Functions 
          bool hasAudioBitRate() const { return this->audioBitRate_ != nullptr;};
          void deleteAudioBitRate() { this->audioBitRate_ = nullptr;};
          inline const vector<AudioBitRate::AudioBitRateItem> & getAudioBitRate() const { DARABONBA_PTR_GET_CONST(audioBitRate_, vector<AudioBitRate::AudioBitRateItem>) };
          inline vector<AudioBitRate::AudioBitRateItem> getAudioBitRate() { DARABONBA_PTR_GET(audioBitRate_, vector<AudioBitRate::AudioBitRateItem>) };
          inline AudioBitRate& setAudioBitRate(const vector<AudioBitRate::AudioBitRateItem> & audioBitRate) { DARABONBA_PTR_SET_VALUE(audioBitRate_, audioBitRate) };
          inline AudioBitRate& setAudioBitRate(vector<AudioBitRate::AudioBitRateItem> && audioBitRate) { DARABONBA_PTR_SET_RVALUE(audioBitRate_, audioBitRate) };


        protected:
          shared_ptr<vector<AudioBitRate::AudioBitRateItem>> audioBitRate_ {};
        };

        class AacHeaders : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AacHeaders& obj) { 
            DARABONBA_PTR_TO_JSON(AacHeaders, aacHeaders_);
          };
          friend void from_json(const Darabonba::Json& j, AacHeaders& obj) { 
            DARABONBA_PTR_FROM_JSON(AacHeaders, aacHeaders_);
          };
          AacHeaders() = default ;
          AacHeaders(const AacHeaders &) = default ;
          AacHeaders(AacHeaders &&) = default ;
          AacHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AacHeaders() = default ;
          AacHeaders& operator=(const AacHeaders &) = default ;
          AacHeaders& operator=(AacHeaders &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AacHeadersItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AacHeadersItem& obj) { 
              DARABONBA_PTR_TO_JSON(Time, time_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, AacHeadersItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Time, time_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            AacHeadersItem() = default ;
            AacHeadersItem(const AacHeadersItem &) = default ;
            AacHeadersItem(AacHeadersItem &&) = default ;
            AacHeadersItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AacHeadersItem() = default ;
            AacHeadersItem& operator=(const AacHeadersItem &) = default ;
            AacHeadersItem& operator=(AacHeadersItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->time_ == nullptr
        && this->value_ == nullptr; };
            // time Field Functions 
            bool hasTime() const { return this->time_ != nullptr;};
            void deleteTime() { this->time_ = nullptr;};
            inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
            inline AacHeadersItem& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline int32_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0) };
            inline AacHeadersItem& setValue(int32_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The number of AAC headers in the audio.
            shared_ptr<int64_t> time_ {};
            // The query time. The value is a UNIX timestamp in milliseconds.
            shared_ptr<int32_t> value_ {};
          };

          virtual bool empty() const override { return this->aacHeaders_ == nullptr; };
          // aacHeaders Field Functions 
          bool hasAacHeaders() const { return this->aacHeaders_ != nullptr;};
          void deleteAacHeaders() { this->aacHeaders_ = nullptr;};
          inline const vector<AacHeaders::AacHeadersItem> & getAacHeaders() const { DARABONBA_PTR_GET_CONST(aacHeaders_, vector<AacHeaders::AacHeadersItem>) };
          inline vector<AacHeaders::AacHeadersItem> getAacHeaders() { DARABONBA_PTR_GET(aacHeaders_, vector<AacHeaders::AacHeadersItem>) };
          inline AacHeaders& setAacHeaders(const vector<AacHeaders::AacHeadersItem> & aacHeaders) { DARABONBA_PTR_SET_VALUE(aacHeaders_, aacHeaders) };
          inline AacHeaders& setAacHeaders(vector<AacHeaders::AacHeadersItem> && aacHeaders) { DARABONBA_PTR_SET_RVALUE(aacHeaders_, aacHeaders) };


        protected:
          shared_ptr<vector<AacHeaders::AacHeadersItem>> aacHeaders_ {};
        };

        virtual bool empty() const override { return this->aacHeaders_ == nullptr
        && this->appName_ == nullptr && this->audioBitRate_ == nullptr && this->audioFrames_ == nullptr && this->audioInterval_ == nullptr && this->audioStamps_ == nullptr
        && this->avcHeaders_ == nullptr && this->codecInfo_ == nullptr && this->domainName_ == nullptr && this->errorFlags_ == nullptr && this->publishInterval_ == nullptr
        && this->publishIp_ == nullptr && this->publishStatus_ == nullptr && this->publishTime_ == nullptr && this->stopTime_ == nullptr && this->streamName_ == nullptr
        && this->uniqueId_ == nullptr && this->videoAndAudioStamp_ == nullptr && this->videoBitRate_ == nullptr && this->videoFrames_ == nullptr && this->videoInterval_ == nullptr
        && this->videoStamps_ == nullptr; };
        // aacHeaders Field Functions 
        bool hasAacHeaders() const { return this->aacHeaders_ != nullptr;};
        void deleteAacHeaders() { this->aacHeaders_ = nullptr;};
        inline const PublishItem::AacHeaders & getAacHeaders() const { DARABONBA_PTR_GET_CONST(aacHeaders_, PublishItem::AacHeaders) };
        inline PublishItem::AacHeaders getAacHeaders() { DARABONBA_PTR_GET(aacHeaders_, PublishItem::AacHeaders) };
        inline PublishItem& setAacHeaders(const PublishItem::AacHeaders & aacHeaders) { DARABONBA_PTR_SET_VALUE(aacHeaders_, aacHeaders) };
        inline PublishItem& setAacHeaders(PublishItem::AacHeaders && aacHeaders) { DARABONBA_PTR_SET_RVALUE(aacHeaders_, aacHeaders) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline PublishItem& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // audioBitRate Field Functions 
        bool hasAudioBitRate() const { return this->audioBitRate_ != nullptr;};
        void deleteAudioBitRate() { this->audioBitRate_ = nullptr;};
        inline const PublishItem::AudioBitRate & getAudioBitRate() const { DARABONBA_PTR_GET_CONST(audioBitRate_, PublishItem::AudioBitRate) };
        inline PublishItem::AudioBitRate getAudioBitRate() { DARABONBA_PTR_GET(audioBitRate_, PublishItem::AudioBitRate) };
        inline PublishItem& setAudioBitRate(const PublishItem::AudioBitRate & audioBitRate) { DARABONBA_PTR_SET_VALUE(audioBitRate_, audioBitRate) };
        inline PublishItem& setAudioBitRate(PublishItem::AudioBitRate && audioBitRate) { DARABONBA_PTR_SET_RVALUE(audioBitRate_, audioBitRate) };


        // audioFrames Field Functions 
        bool hasAudioFrames() const { return this->audioFrames_ != nullptr;};
        void deleteAudioFrames() { this->audioFrames_ = nullptr;};
        inline const PublishItem::AudioFrames & getAudioFrames() const { DARABONBA_PTR_GET_CONST(audioFrames_, PublishItem::AudioFrames) };
        inline PublishItem::AudioFrames getAudioFrames() { DARABONBA_PTR_GET(audioFrames_, PublishItem::AudioFrames) };
        inline PublishItem& setAudioFrames(const PublishItem::AudioFrames & audioFrames) { DARABONBA_PTR_SET_VALUE(audioFrames_, audioFrames) };
        inline PublishItem& setAudioFrames(PublishItem::AudioFrames && audioFrames) { DARABONBA_PTR_SET_RVALUE(audioFrames_, audioFrames) };


        // audioInterval Field Functions 
        bool hasAudioInterval() const { return this->audioInterval_ != nullptr;};
        void deleteAudioInterval() { this->audioInterval_ = nullptr;};
        inline const PublishItem::AudioInterval & getAudioInterval() const { DARABONBA_PTR_GET_CONST(audioInterval_, PublishItem::AudioInterval) };
        inline PublishItem::AudioInterval getAudioInterval() { DARABONBA_PTR_GET(audioInterval_, PublishItem::AudioInterval) };
        inline PublishItem& setAudioInterval(const PublishItem::AudioInterval & audioInterval) { DARABONBA_PTR_SET_VALUE(audioInterval_, audioInterval) };
        inline PublishItem& setAudioInterval(PublishItem::AudioInterval && audioInterval) { DARABONBA_PTR_SET_RVALUE(audioInterval_, audioInterval) };


        // audioStamps Field Functions 
        bool hasAudioStamps() const { return this->audioStamps_ != nullptr;};
        void deleteAudioStamps() { this->audioStamps_ = nullptr;};
        inline const PublishItem::AudioStamps & getAudioStamps() const { DARABONBA_PTR_GET_CONST(audioStamps_, PublishItem::AudioStamps) };
        inline PublishItem::AudioStamps getAudioStamps() { DARABONBA_PTR_GET(audioStamps_, PublishItem::AudioStamps) };
        inline PublishItem& setAudioStamps(const PublishItem::AudioStamps & audioStamps) { DARABONBA_PTR_SET_VALUE(audioStamps_, audioStamps) };
        inline PublishItem& setAudioStamps(PublishItem::AudioStamps && audioStamps) { DARABONBA_PTR_SET_RVALUE(audioStamps_, audioStamps) };


        // avcHeaders Field Functions 
        bool hasAvcHeaders() const { return this->avcHeaders_ != nullptr;};
        void deleteAvcHeaders() { this->avcHeaders_ = nullptr;};
        inline const PublishItem::AvcHeaders & getAvcHeaders() const { DARABONBA_PTR_GET_CONST(avcHeaders_, PublishItem::AvcHeaders) };
        inline PublishItem::AvcHeaders getAvcHeaders() { DARABONBA_PTR_GET(avcHeaders_, PublishItem::AvcHeaders) };
        inline PublishItem& setAvcHeaders(const PublishItem::AvcHeaders & avcHeaders) { DARABONBA_PTR_SET_VALUE(avcHeaders_, avcHeaders) };
        inline PublishItem& setAvcHeaders(PublishItem::AvcHeaders && avcHeaders) { DARABONBA_PTR_SET_RVALUE(avcHeaders_, avcHeaders) };


        // codecInfo Field Functions 
        bool hasCodecInfo() const { return this->codecInfo_ != nullptr;};
        void deleteCodecInfo() { this->codecInfo_ = nullptr;};
        inline string getCodecInfo() const { DARABONBA_PTR_GET_DEFAULT(codecInfo_, "") };
        inline PublishItem& setCodecInfo(string codecInfo) { DARABONBA_PTR_SET_VALUE(codecInfo_, codecInfo) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline PublishItem& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // errorFlags Field Functions 
        bool hasErrorFlags() const { return this->errorFlags_ != nullptr;};
        void deleteErrorFlags() { this->errorFlags_ = nullptr;};
        inline const PublishItem::ErrorFlags & getErrorFlags() const { DARABONBA_PTR_GET_CONST(errorFlags_, PublishItem::ErrorFlags) };
        inline PublishItem::ErrorFlags getErrorFlags() { DARABONBA_PTR_GET(errorFlags_, PublishItem::ErrorFlags) };
        inline PublishItem& setErrorFlags(const PublishItem::ErrorFlags & errorFlags) { DARABONBA_PTR_SET_VALUE(errorFlags_, errorFlags) };
        inline PublishItem& setErrorFlags(PublishItem::ErrorFlags && errorFlags) { DARABONBA_PTR_SET_RVALUE(errorFlags_, errorFlags) };


        // publishInterval Field Functions 
        bool hasPublishInterval() const { return this->publishInterval_ != nullptr;};
        void deletePublishInterval() { this->publishInterval_ = nullptr;};
        inline string getPublishInterval() const { DARABONBA_PTR_GET_DEFAULT(publishInterval_, "") };
        inline PublishItem& setPublishInterval(string publishInterval) { DARABONBA_PTR_SET_VALUE(publishInterval_, publishInterval) };


        // publishIp Field Functions 
        bool hasPublishIp() const { return this->publishIp_ != nullptr;};
        void deletePublishIp() { this->publishIp_ = nullptr;};
        inline string getPublishIp() const { DARABONBA_PTR_GET_DEFAULT(publishIp_, "") };
        inline PublishItem& setPublishIp(string publishIp) { DARABONBA_PTR_SET_VALUE(publishIp_, publishIp) };


        // publishStatus Field Functions 
        bool hasPublishStatus() const { return this->publishStatus_ != nullptr;};
        void deletePublishStatus() { this->publishStatus_ = nullptr;};
        inline string getPublishStatus() const { DARABONBA_PTR_GET_DEFAULT(publishStatus_, "") };
        inline PublishItem& setPublishStatus(string publishStatus) { DARABONBA_PTR_SET_VALUE(publishStatus_, publishStatus) };


        // publishTime Field Functions 
        bool hasPublishTime() const { return this->publishTime_ != nullptr;};
        void deletePublishTime() { this->publishTime_ = nullptr;};
        inline string getPublishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
        inline PublishItem& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


        // stopTime Field Functions 
        bool hasStopTime() const { return this->stopTime_ != nullptr;};
        void deleteStopTime() { this->stopTime_ = nullptr;};
        inline string getStopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
        inline PublishItem& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


        // streamName Field Functions 
        bool hasStreamName() const { return this->streamName_ != nullptr;};
        void deleteStreamName() { this->streamName_ = nullptr;};
        inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
        inline PublishItem& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


        // uniqueId Field Functions 
        bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
        void deleteUniqueId() { this->uniqueId_ = nullptr;};
        inline string getUniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
        inline PublishItem& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


        // videoAndAudioStamp Field Functions 
        bool hasVideoAndAudioStamp() const { return this->videoAndAudioStamp_ != nullptr;};
        void deleteVideoAndAudioStamp() { this->videoAndAudioStamp_ = nullptr;};
        inline const PublishItem::VideoAndAudioStamp & getVideoAndAudioStamp() const { DARABONBA_PTR_GET_CONST(videoAndAudioStamp_, PublishItem::VideoAndAudioStamp) };
        inline PublishItem::VideoAndAudioStamp getVideoAndAudioStamp() { DARABONBA_PTR_GET(videoAndAudioStamp_, PublishItem::VideoAndAudioStamp) };
        inline PublishItem& setVideoAndAudioStamp(const PublishItem::VideoAndAudioStamp & videoAndAudioStamp) { DARABONBA_PTR_SET_VALUE(videoAndAudioStamp_, videoAndAudioStamp) };
        inline PublishItem& setVideoAndAudioStamp(PublishItem::VideoAndAudioStamp && videoAndAudioStamp) { DARABONBA_PTR_SET_RVALUE(videoAndAudioStamp_, videoAndAudioStamp) };


        // videoBitRate Field Functions 
        bool hasVideoBitRate() const { return this->videoBitRate_ != nullptr;};
        void deleteVideoBitRate() { this->videoBitRate_ = nullptr;};
        inline const PublishItem::VideoBitRate & getVideoBitRate() const { DARABONBA_PTR_GET_CONST(videoBitRate_, PublishItem::VideoBitRate) };
        inline PublishItem::VideoBitRate getVideoBitRate() { DARABONBA_PTR_GET(videoBitRate_, PublishItem::VideoBitRate) };
        inline PublishItem& setVideoBitRate(const PublishItem::VideoBitRate & videoBitRate) { DARABONBA_PTR_SET_VALUE(videoBitRate_, videoBitRate) };
        inline PublishItem& setVideoBitRate(PublishItem::VideoBitRate && videoBitRate) { DARABONBA_PTR_SET_RVALUE(videoBitRate_, videoBitRate) };


        // videoFrames Field Functions 
        bool hasVideoFrames() const { return this->videoFrames_ != nullptr;};
        void deleteVideoFrames() { this->videoFrames_ = nullptr;};
        inline const PublishItem::VideoFrames & getVideoFrames() const { DARABONBA_PTR_GET_CONST(videoFrames_, PublishItem::VideoFrames) };
        inline PublishItem::VideoFrames getVideoFrames() { DARABONBA_PTR_GET(videoFrames_, PublishItem::VideoFrames) };
        inline PublishItem& setVideoFrames(const PublishItem::VideoFrames & videoFrames) { DARABONBA_PTR_SET_VALUE(videoFrames_, videoFrames) };
        inline PublishItem& setVideoFrames(PublishItem::VideoFrames && videoFrames) { DARABONBA_PTR_SET_RVALUE(videoFrames_, videoFrames) };


        // videoInterval Field Functions 
        bool hasVideoInterval() const { return this->videoInterval_ != nullptr;};
        void deleteVideoInterval() { this->videoInterval_ = nullptr;};
        inline const PublishItem::VideoInterval & getVideoInterval() const { DARABONBA_PTR_GET_CONST(videoInterval_, PublishItem::VideoInterval) };
        inline PublishItem::VideoInterval getVideoInterval() { DARABONBA_PTR_GET(videoInterval_, PublishItem::VideoInterval) };
        inline PublishItem& setVideoInterval(const PublishItem::VideoInterval & videoInterval) { DARABONBA_PTR_SET_VALUE(videoInterval_, videoInterval) };
        inline PublishItem& setVideoInterval(PublishItem::VideoInterval && videoInterval) { DARABONBA_PTR_SET_RVALUE(videoInterval_, videoInterval) };


        // videoStamps Field Functions 
        bool hasVideoStamps() const { return this->videoStamps_ != nullptr;};
        void deleteVideoStamps() { this->videoStamps_ = nullptr;};
        inline const PublishItem::VideoStamps & getVideoStamps() const { DARABONBA_PTR_GET_CONST(videoStamps_, PublishItem::VideoStamps) };
        inline PublishItem::VideoStamps getVideoStamps() { DARABONBA_PTR_GET(videoStamps_, PublishItem::VideoStamps) };
        inline PublishItem& setVideoStamps(const PublishItem::VideoStamps & videoStamps) { DARABONBA_PTR_SET_VALUE(videoStamps_, videoStamps) };
        inline PublishItem& setVideoStamps(PublishItem::VideoStamps && videoStamps) { DARABONBA_PTR_SET_RVALUE(videoStamps_, videoStamps) };


      protected:
        // The details about the audio and video data of the stream ingest occurrences.
        shared_ptr<PublishItem::AacHeaders> aacHeaders_ {};
        // The metric value at a granularity of seconds at the query time.
        shared_ptr<string> appName_ {};
        // The name of the application to which the ingested stream belongs.
        shared_ptr<PublishItem::AudioBitRate> audioBitRate_ {};
        // The metric value at a granularity of seconds at the query time.
        shared_ptr<PublishItem::AudioFrames> audioFrames_ {};
        // The metric value at a granularity of seconds at the query time.
        shared_ptr<PublishItem::AudioInterval> audioInterval_ {};
        // The metric value at a granularity of seconds at the query time.
        shared_ptr<PublishItem::AudioStamps> audioStamps_ {};
        // The metric value at a granularity of seconds at the query time.
        shared_ptr<PublishItem::AvcHeaders> avcHeaders_ {};
        // The metric value at a granularity of seconds at the query time.
        shared_ptr<string> codecInfo_ {};
        // The audio and video encoding information.
        shared_ptr<string> domainName_ {};
        // The ingest domain.
        shared_ptr<PublishItem::ErrorFlags> errorFlags_ {};
        // The metric value at a granularity of seconds at the query time.
        shared_ptr<string> publishInterval_ {};
        // The stream ingest duration. Unit: seconds. A hyphen (-) indicates that the stream is being ingested and the duration cannot be returned.
        shared_ptr<string> publishIp_ {};
        // The IP address of the stream ingest client.
        shared_ptr<string> publishStatus_ {};
        // The stream ingest status. A value of 1 indicates that the stream is being ingested. A value of 0 indicates that the stream was ingested.
        shared_ptr<string> publishTime_ {};
        // The start time of stream ingest. The time is displayed in UTC.
        shared_ptr<string> stopTime_ {};
        // The end time of stream ingest. The time is displayed in UTC.
        shared_ptr<string> streamName_ {};
        // The name of the stream.
        shared_ptr<string> uniqueId_ {};
        // The unique ID of each stream ingest occurrence.
        shared_ptr<PublishItem::VideoAndAudioStamp> videoAndAudioStamp_ {};
        // The metric value at a granularity of seconds at the query time.
        shared_ptr<PublishItem::VideoBitRate> videoBitRate_ {};
        // The metric value at a granularity of seconds at the query time.
        shared_ptr<PublishItem::VideoFrames> videoFrames_ {};
        // The metric value at a granularity of seconds at the query time.
        shared_ptr<PublishItem::VideoInterval> videoInterval_ {};
        // The metric value at a granularity of seconds at the query time.
        shared_ptr<PublishItem::VideoStamps> videoStamps_ {};
      };

      virtual bool empty() const override { return this->publishItem_ == nullptr; };
      // publishItem Field Functions 
      bool hasPublishItem() const { return this->publishItem_ != nullptr;};
      void deletePublishItem() { this->publishItem_ = nullptr;};
      inline const vector<UpItems::PublishItem> & getPublishItem() const { DARABONBA_PTR_GET_CONST(publishItem_, vector<UpItems::PublishItem>) };
      inline vector<UpItems::PublishItem> getPublishItem() { DARABONBA_PTR_GET(publishItem_, vector<UpItems::PublishItem>) };
      inline UpItems& setPublishItem(const vector<UpItems::PublishItem> & publishItem) { DARABONBA_PTR_SET_VALUE(publishItem_, publishItem) };
      inline UpItems& setPublishItem(vector<UpItems::PublishItem> && publishItem) { DARABONBA_PTR_SET_RVALUE(publishItem_, publishItem) };


    protected:
      shared_ptr<vector<UpItems::PublishItem>> publishItem_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->upItems_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveUpVideoAudioInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // upItems Field Functions 
    bool hasUpItems() const { return this->upItems_ != nullptr;};
    void deleteUpItems() { this->upItems_ = nullptr;};
    inline const DescribeLiveUpVideoAudioInfoResponseBody::UpItems & getUpItems() const { DARABONBA_PTR_GET_CONST(upItems_, DescribeLiveUpVideoAudioInfoResponseBody::UpItems) };
    inline DescribeLiveUpVideoAudioInfoResponseBody::UpItems getUpItems() { DARABONBA_PTR_GET(upItems_, DescribeLiveUpVideoAudioInfoResponseBody::UpItems) };
    inline DescribeLiveUpVideoAudioInfoResponseBody& setUpItems(const DescribeLiveUpVideoAudioInfoResponseBody::UpItems & upItems) { DARABONBA_PTR_SET_VALUE(upItems_, upItems) };
    inline DescribeLiveUpVideoAudioInfoResponseBody& setUpItems(DescribeLiveUpVideoAudioInfoResponseBody::UpItems && upItems) { DARABONBA_PTR_SET_RVALUE(upItems_, upItems) };


  protected:
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    shared_ptr<string> requestId_ {};
    // The request ID.
    shared_ptr<DescribeLiveUpVideoAudioInfoResponseBody::UpItems> upItems_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
