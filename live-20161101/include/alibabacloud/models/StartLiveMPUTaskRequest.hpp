// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTLIVEMPUTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTLIVEMPUTASKREQUEST_HPP_
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
  class StartLiveMPUTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartLiveMPUTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(MaxIdleTime, maxIdleTime_);
      DARABONBA_PTR_TO_JSON(MixMode, mixMode_);
      DARABONBA_PTR_TO_JSON(MultiStreamURL, multiStreamURL_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SeiParams, seiParams_);
      DARABONBA_PTR_TO_JSON(SingleSubParams, singleSubParams_);
      DARABONBA_PTR_TO_JSON(StreamURL, streamURL_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TranscodeParams, transcodeParams_);
    };
    friend void from_json(const Darabonba::Json& j, StartLiveMPUTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(MaxIdleTime, maxIdleTime_);
      DARABONBA_PTR_FROM_JSON(MixMode, mixMode_);
      DARABONBA_PTR_FROM_JSON(MultiStreamURL, multiStreamURL_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SeiParams, seiParams_);
      DARABONBA_PTR_FROM_JSON(SingleSubParams, singleSubParams_);
      DARABONBA_PTR_FROM_JSON(StreamURL, streamURL_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TranscodeParams, transcodeParams_);
    };
    StartLiveMPUTaskRequest() = default ;
    StartLiveMPUTaskRequest(const StartLiveMPUTaskRequest &) = default ;
    StartLiveMPUTaskRequest(StartLiveMPUTaskRequest &&) = default ;
    StartLiveMPUTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartLiveMPUTaskRequest() = default ;
    StartLiveMPUTaskRequest& operator=(const StartLiveMPUTaskRequest &) = default ;
    StartLiveMPUTaskRequest& operator=(StartLiveMPUTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TranscodeParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TranscodeParams& obj) { 
        DARABONBA_PTR_TO_JSON(Background, background_);
        DARABONBA_PTR_TO_JSON(EncodeParams, encodeParams_);
        DARABONBA_PTR_TO_JSON(Layout, layout_);
        DARABONBA_PTR_TO_JSON(UserInfos, userInfos_);
      };
      friend void from_json(const Darabonba::Json& j, TranscodeParams& obj) { 
        DARABONBA_PTR_FROM_JSON(Background, background_);
        DARABONBA_PTR_FROM_JSON(EncodeParams, encodeParams_);
        DARABONBA_PTR_FROM_JSON(Layout, layout_);
        DARABONBA_PTR_FROM_JSON(UserInfos, userInfos_);
      };
      TranscodeParams() = default ;
      TranscodeParams(const TranscodeParams &) = default ;
      TranscodeParams(TranscodeParams &&) = default ;
      TranscodeParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TranscodeParams() = default ;
      TranscodeParams& operator=(const TranscodeParams &) = default ;
      TranscodeParams& operator=(TranscodeParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserInfos& obj) { 
          DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
          DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(StreamType, streamType_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, UserInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
          DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        UserInfos() = default ;
        UserInfos(const UserInfos &) = default ;
        UserInfos(UserInfos &&) = default ;
        UserInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserInfos() = default ;
        UserInfos& operator=(const UserInfos &) = default ;
        UserInfos& operator=(UserInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->channelId_ == nullptr
        && this->sourceType_ == nullptr && this->streamType_ == nullptr && this->userId_ == nullptr; };
        // channelId Field Functions 
        bool hasChannelId() const { return this->channelId_ != nullptr;};
        void deleteChannelId() { this->channelId_ = nullptr;};
        inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
        inline UserInfos& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline UserInfos& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // streamType Field Functions 
        bool hasStreamType() const { return this->streamType_ != nullptr;};
        void deleteStreamType() { this->streamType_ = nullptr;};
        inline string getStreamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, "") };
        inline UserInfos& setStreamType(string streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline UserInfos& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The ID of the channel where the subscribed user is. If the user is in the same channel, you can leave this parameter empty. We recommend that you specify this parameter when you perform stream mixing across channels.
        shared_ptr<string> channelId_ {};
        // The type of the video source that is subscribed to. This parameter is valid only when you set StreamType to 2. Valid values:
        // 
        // *   **camera** (default)
        // *   **shareScreen**
        shared_ptr<string> sourceType_ {};
        // The type of the relayed stream that is subscribed to. Valid values:
        // 
        // *   **0** (default): original stream
        // *   **1**: only the audio track
        // *   **2**: only the video track
        shared_ptr<string> streamType_ {};
        // The ID of the subscribed user.
        // 
        // This parameter is required.
        shared_ptr<string> userId_ {};
      };

      class Layout : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Layout& obj) { 
          DARABONBA_PTR_TO_JSON(UserPanes, userPanes_);
        };
        friend void from_json(const Darabonba::Json& j, Layout& obj) { 
          DARABONBA_PTR_FROM_JSON(UserPanes, userPanes_);
        };
        Layout() = default ;
        Layout(const Layout &) = default ;
        Layout(Layout &&) = default ;
        Layout(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Layout() = default ;
        Layout& operator=(const Layout &) = default ;
        Layout& operator=(Layout &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class UserPanes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const UserPanes& obj) { 
            DARABONBA_PTR_TO_JSON(BackgroundImageUrl, backgroundImageUrl_);
            DARABONBA_PTR_TO_JSON(Height, height_);
            DARABONBA_PTR_TO_JSON(RenderMode, renderMode_);
            DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
            DARABONBA_PTR_TO_JSON(Width, width_);
            DARABONBA_PTR_TO_JSON(X, x_);
            DARABONBA_PTR_TO_JSON(Y, y_);
            DARABONBA_PTR_TO_JSON(ZOrder, ZOrder_);
          };
          friend void from_json(const Darabonba::Json& j, UserPanes& obj) { 
            DARABONBA_PTR_FROM_JSON(BackgroundImageUrl, backgroundImageUrl_);
            DARABONBA_PTR_FROM_JSON(Height, height_);
            DARABONBA_PTR_FROM_JSON(RenderMode, renderMode_);
            DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
            DARABONBA_PTR_FROM_JSON(Width, width_);
            DARABONBA_PTR_FROM_JSON(X, x_);
            DARABONBA_PTR_FROM_JSON(Y, y_);
            DARABONBA_PTR_FROM_JSON(ZOrder, ZOrder_);
          };
          UserPanes() = default ;
          UserPanes(const UserPanes &) = default ;
          UserPanes(UserPanes &&) = default ;
          UserPanes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~UserPanes() = default ;
          UserPanes& operator=(const UserPanes &) = default ;
          UserPanes& operator=(UserPanes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class UserInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const UserInfo& obj) { 
              DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
              DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
              DARABONBA_PTR_TO_JSON(UserId, userId_);
            };
            friend void from_json(const Darabonba::Json& j, UserInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
              DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
              DARABONBA_PTR_FROM_JSON(UserId, userId_);
            };
            UserInfo() = default ;
            UserInfo(const UserInfo &) = default ;
            UserInfo(UserInfo &&) = default ;
            UserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~UserInfo() = default ;
            UserInfo& operator=(const UserInfo &) = default ;
            UserInfo& operator=(UserInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->channelId_ == nullptr
        && this->sourceType_ == nullptr && this->userId_ == nullptr; };
            // channelId Field Functions 
            bool hasChannelId() const { return this->channelId_ != nullptr;};
            void deleteChannelId() { this->channelId_ = nullptr;};
            inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
            inline UserInfo& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


            // sourceType Field Functions 
            bool hasSourceType() const { return this->sourceType_ != nullptr;};
            void deleteSourceType() { this->sourceType_ = nullptr;};
            inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
            inline UserInfo& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


            // userId Field Functions 
            bool hasUserId() const { return this->userId_ != nullptr;};
            void deleteUserId() { this->userId_ = nullptr;};
            inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
            inline UserInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


          protected:
            // The ID of the channel where the user is. If the user is in the same channel, you can leave this parameter empty. We recommend that you specify this parameter when you perform stream mixing across channels.
            shared_ptr<string> channelId_ {};
            // The type of the video source. This parameter is valid only when you set StreamType to 2. Valid values:
            // 
            // *   **camera** (default)
            // *   **shareScreen**
            shared_ptr<string> sourceType_ {};
            // The user ID.
            shared_ptr<string> userId_ {};
          };

          virtual bool empty() const override { return this->backgroundImageUrl_ == nullptr
        && this->height_ == nullptr && this->renderMode_ == nullptr && this->userInfo_ == nullptr && this->width_ == nullptr && this->x_ == nullptr
        && this->y_ == nullptr && this->ZOrder_ == nullptr; };
          // backgroundImageUrl Field Functions 
          bool hasBackgroundImageUrl() const { return this->backgroundImageUrl_ != nullptr;};
          void deleteBackgroundImageUrl() { this->backgroundImageUrl_ = nullptr;};
          inline string getBackgroundImageUrl() const { DARABONBA_PTR_GET_DEFAULT(backgroundImageUrl_, "") };
          inline UserPanes& setBackgroundImageUrl(string backgroundImageUrl) { DARABONBA_PTR_SET_VALUE(backgroundImageUrl_, backgroundImageUrl) };


          // height Field Functions 
          bool hasHeight() const { return this->height_ != nullptr;};
          void deleteHeight() { this->height_ = nullptr;};
          inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
          inline UserPanes& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


          // renderMode Field Functions 
          bool hasRenderMode() const { return this->renderMode_ != nullptr;};
          void deleteRenderMode() { this->renderMode_ = nullptr;};
          inline string getRenderMode() const { DARABONBA_PTR_GET_DEFAULT(renderMode_, "") };
          inline UserPanes& setRenderMode(string renderMode) { DARABONBA_PTR_SET_VALUE(renderMode_, renderMode) };


          // userInfo Field Functions 
          bool hasUserInfo() const { return this->userInfo_ != nullptr;};
          void deleteUserInfo() { this->userInfo_ = nullptr;};
          inline const UserPanes::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, UserPanes::UserInfo) };
          inline UserPanes::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, UserPanes::UserInfo) };
          inline UserPanes& setUserInfo(const UserPanes::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
          inline UserPanes& setUserInfo(UserPanes::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


          // width Field Functions 
          bool hasWidth() const { return this->width_ != nullptr;};
          void deleteWidth() { this->width_ = nullptr;};
          inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
          inline UserPanes& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


          // x Field Functions 
          bool hasX() const { return this->x_ != nullptr;};
          void deleteX() { this->x_ = nullptr;};
          inline string getX() const { DARABONBA_PTR_GET_DEFAULT(x_, "") };
          inline UserPanes& setX(string x) { DARABONBA_PTR_SET_VALUE(x_, x) };


          // y Field Functions 
          bool hasY() const { return this->y_ != nullptr;};
          void deleteY() { this->y_ = nullptr;};
          inline string getY() const { DARABONBA_PTR_GET_DEFAULT(y_, "") };
          inline UserPanes& setY(string y) { DARABONBA_PTR_SET_VALUE(y_, y) };


          // ZOrder Field Functions 
          bool hasZOrder() const { return this->ZOrder_ != nullptr;};
          void deleteZOrder() { this->ZOrder_ = nullptr;};
          inline string getZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, "") };
          inline UserPanes& setZOrder(string ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


        protected:
          // The URL of the background image of the pane. The URL can be up to 2,048 characters in length. This image is displayed if the user turns off the camera or is not present in the channel.
          shared_ptr<string> backgroundImageUrl_ {};
          // The height of the pane. The value is normalized.
          shared_ptr<string> height_ {};
          // The display mode of the pane. Valid values:
          // 
          // *   **0**: scales the video proportionally to fit the view, with black bars displayed.
          // *   **1 (default)**: crops the video to fit the view.
          shared_ptr<string> renderMode_ {};
          // The information about the user whose stream is played in the pane. If you leave this parameter empty, the system automatically sets this parameter based on the order in which streamers join the channel.
          // 
          // > 
          // 
          // *   If you specify the information about a user by using this parameter, the information about the user must also be specified by using the TranscodeParams.UserInfos parameter.
          // 
          // *   This parameter is valid only when you set StreamType to 0 or 2.
          shared_ptr<UserPanes::UserInfo> userInfo_ {};
          // The width of the pane. The value is normalized.
          shared_ptr<string> width_ {};
          // The x-coordinate of the pane. The value is normalized.
          shared_ptr<string> x_ {};
          // The y-coordinate of the pane. The value is normalized.
          shared_ptr<string> y_ {};
          // The layer in which the pane resides. A value of 0 indicates the bottom layer. Each increment of the value by 1 indicates the next upper layer.
          shared_ptr<string> ZOrder_ {};
        };

        virtual bool empty() const override { return this->userPanes_ == nullptr; };
        // userPanes Field Functions 
        bool hasUserPanes() const { return this->userPanes_ != nullptr;};
        void deleteUserPanes() { this->userPanes_ = nullptr;};
        inline const vector<Layout::UserPanes> & getUserPanes() const { DARABONBA_PTR_GET_CONST(userPanes_, vector<Layout::UserPanes>) };
        inline vector<Layout::UserPanes> getUserPanes() { DARABONBA_PTR_GET(userPanes_, vector<Layout::UserPanes>) };
        inline Layout& setUserPanes(const vector<Layout::UserPanes> & userPanes) { DARABONBA_PTR_SET_VALUE(userPanes_, userPanes) };
        inline Layout& setUserPanes(vector<Layout::UserPanes> && userPanes) { DARABONBA_PTR_SET_RVALUE(userPanes_, userPanes) };


      protected:
        // The information about the panes.
        shared_ptr<vector<Layout::UserPanes>> userPanes_ {};
      };

      class EncodeParams : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EncodeParams& obj) { 
          DARABONBA_PTR_TO_JSON(AudioBitrate, audioBitrate_);
          DARABONBA_PTR_TO_JSON(AudioChannels, audioChannels_);
          DARABONBA_PTR_TO_JSON(AudioOnly, audioOnly_);
          DARABONBA_PTR_TO_JSON(AudioSampleRate, audioSampleRate_);
          DARABONBA_PTR_TO_JSON(EnhancedParam, enhancedParam_);
          DARABONBA_PTR_TO_JSON(VideoBitrate, videoBitrate_);
          DARABONBA_PTR_TO_JSON(VideoCodec, videoCodec_);
          DARABONBA_PTR_TO_JSON(VideoFramerate, videoFramerate_);
          DARABONBA_PTR_TO_JSON(VideoGop, videoGop_);
          DARABONBA_PTR_TO_JSON(VideoHeight, videoHeight_);
          DARABONBA_PTR_TO_JSON(VideoWidth, videoWidth_);
        };
        friend void from_json(const Darabonba::Json& j, EncodeParams& obj) { 
          DARABONBA_PTR_FROM_JSON(AudioBitrate, audioBitrate_);
          DARABONBA_PTR_FROM_JSON(AudioChannels, audioChannels_);
          DARABONBA_PTR_FROM_JSON(AudioOnly, audioOnly_);
          DARABONBA_PTR_FROM_JSON(AudioSampleRate, audioSampleRate_);
          DARABONBA_PTR_FROM_JSON(EnhancedParam, enhancedParam_);
          DARABONBA_PTR_FROM_JSON(VideoBitrate, videoBitrate_);
          DARABONBA_PTR_FROM_JSON(VideoCodec, videoCodec_);
          DARABONBA_PTR_FROM_JSON(VideoFramerate, videoFramerate_);
          DARABONBA_PTR_FROM_JSON(VideoGop, videoGop_);
          DARABONBA_PTR_FROM_JSON(VideoHeight, videoHeight_);
          DARABONBA_PTR_FROM_JSON(VideoWidth, videoWidth_);
        };
        EncodeParams() = default ;
        EncodeParams(const EncodeParams &) = default ;
        EncodeParams(EncodeParams &&) = default ;
        EncodeParams(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EncodeParams() = default ;
        EncodeParams& operator=(const EncodeParams &) = default ;
        EncodeParams& operator=(EncodeParams &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->audioBitrate_ == nullptr
        && this->audioChannels_ == nullptr && this->audioOnly_ == nullptr && this->audioSampleRate_ == nullptr && this->enhancedParam_ == nullptr && this->videoBitrate_ == nullptr
        && this->videoCodec_ == nullptr && this->videoFramerate_ == nullptr && this->videoGop_ == nullptr && this->videoHeight_ == nullptr && this->videoWidth_ == nullptr; };
        // audioBitrate Field Functions 
        bool hasAudioBitrate() const { return this->audioBitrate_ != nullptr;};
        void deleteAudioBitrate() { this->audioBitrate_ = nullptr;};
        inline string getAudioBitrate() const { DARABONBA_PTR_GET_DEFAULT(audioBitrate_, "") };
        inline EncodeParams& setAudioBitrate(string audioBitrate) { DARABONBA_PTR_SET_VALUE(audioBitrate_, audioBitrate) };


        // audioChannels Field Functions 
        bool hasAudioChannels() const { return this->audioChannels_ != nullptr;};
        void deleteAudioChannels() { this->audioChannels_ = nullptr;};
        inline string getAudioChannels() const { DARABONBA_PTR_GET_DEFAULT(audioChannels_, "") };
        inline EncodeParams& setAudioChannels(string audioChannels) { DARABONBA_PTR_SET_VALUE(audioChannels_, audioChannels) };


        // audioOnly Field Functions 
        bool hasAudioOnly() const { return this->audioOnly_ != nullptr;};
        void deleteAudioOnly() { this->audioOnly_ = nullptr;};
        inline string getAudioOnly() const { DARABONBA_PTR_GET_DEFAULT(audioOnly_, "") };
        inline EncodeParams& setAudioOnly(string audioOnly) { DARABONBA_PTR_SET_VALUE(audioOnly_, audioOnly) };


        // audioSampleRate Field Functions 
        bool hasAudioSampleRate() const { return this->audioSampleRate_ != nullptr;};
        void deleteAudioSampleRate() { this->audioSampleRate_ = nullptr;};
        inline string getAudioSampleRate() const { DARABONBA_PTR_GET_DEFAULT(audioSampleRate_, "") };
        inline EncodeParams& setAudioSampleRate(string audioSampleRate) { DARABONBA_PTR_SET_VALUE(audioSampleRate_, audioSampleRate) };


        // enhancedParam Field Functions 
        bool hasEnhancedParam() const { return this->enhancedParam_ != nullptr;};
        void deleteEnhancedParam() { this->enhancedParam_ = nullptr;};
        inline string getEnhancedParam() const { DARABONBA_PTR_GET_DEFAULT(enhancedParam_, "") };
        inline EncodeParams& setEnhancedParam(string enhancedParam) { DARABONBA_PTR_SET_VALUE(enhancedParam_, enhancedParam) };


        // videoBitrate Field Functions 
        bool hasVideoBitrate() const { return this->videoBitrate_ != nullptr;};
        void deleteVideoBitrate() { this->videoBitrate_ = nullptr;};
        inline string getVideoBitrate() const { DARABONBA_PTR_GET_DEFAULT(videoBitrate_, "") };
        inline EncodeParams& setVideoBitrate(string videoBitrate) { DARABONBA_PTR_SET_VALUE(videoBitrate_, videoBitrate) };


        // videoCodec Field Functions 
        bool hasVideoCodec() const { return this->videoCodec_ != nullptr;};
        void deleteVideoCodec() { this->videoCodec_ = nullptr;};
        inline string getVideoCodec() const { DARABONBA_PTR_GET_DEFAULT(videoCodec_, "") };
        inline EncodeParams& setVideoCodec(string videoCodec) { DARABONBA_PTR_SET_VALUE(videoCodec_, videoCodec) };


        // videoFramerate Field Functions 
        bool hasVideoFramerate() const { return this->videoFramerate_ != nullptr;};
        void deleteVideoFramerate() { this->videoFramerate_ = nullptr;};
        inline string getVideoFramerate() const { DARABONBA_PTR_GET_DEFAULT(videoFramerate_, "") };
        inline EncodeParams& setVideoFramerate(string videoFramerate) { DARABONBA_PTR_SET_VALUE(videoFramerate_, videoFramerate) };


        // videoGop Field Functions 
        bool hasVideoGop() const { return this->videoGop_ != nullptr;};
        void deleteVideoGop() { this->videoGop_ = nullptr;};
        inline string getVideoGop() const { DARABONBA_PTR_GET_DEFAULT(videoGop_, "") };
        inline EncodeParams& setVideoGop(string videoGop) { DARABONBA_PTR_SET_VALUE(videoGop_, videoGop) };


        // videoHeight Field Functions 
        bool hasVideoHeight() const { return this->videoHeight_ != nullptr;};
        void deleteVideoHeight() { this->videoHeight_ = nullptr;};
        inline string getVideoHeight() const { DARABONBA_PTR_GET_DEFAULT(videoHeight_, "") };
        inline EncodeParams& setVideoHeight(string videoHeight) { DARABONBA_PTR_SET_VALUE(videoHeight_, videoHeight) };


        // videoWidth Field Functions 
        bool hasVideoWidth() const { return this->videoWidth_ != nullptr;};
        void deleteVideoWidth() { this->videoWidth_ = nullptr;};
        inline string getVideoWidth() const { DARABONBA_PTR_GET_DEFAULT(videoWidth_, "") };
        inline EncodeParams& setVideoWidth(string videoWidth) { DARABONBA_PTR_SET_VALUE(videoWidth_, videoWidth) };


      protected:
        // The bitrate of the audio. Valid values: [8,500]. Unit: Kbit/s.
        shared_ptr<string> audioBitrate_ {};
        // The number of sound channels. Valid values: 1 and 2.
        shared_ptr<string> audioChannels_ {};
        // Specifies whether the output stream is an audio-only stream. Valid values:
        // 
        // *   **true**: The output stream is an audio-only stream. If you set this parameter to true, you need to configure only audio-related parameters under EncodeParams.
        // *   **false** (default): The output stream is not an audio-only stream. If you set this parameter to false, you need to configure all parameters under EncodeParams, except the VideoCodec and EnhancedParam parameters.
        shared_ptr<string> audioOnly_ {};
        // The audio sampling rate. Valid values: 8000, 16000, 32000, 44100, and 48000. Unit: Hz.
        shared_ptr<string> audioSampleRate_ {};
        // The parameter used for encoding enhancement, which is a JSON string. The parameter includes the optional profile and preset fields.
        // 
        // *   profile: the encoding level. If the video codec is H.264, the valid values of this field are baseline, main, and high. If the video codec is H.265, the valid value of this field is main.
        // *   preset: adjusts the trade-off between encoding speed and video quality. The valid values of this field are ultrafast, superfast, veryfast, faster, fast, medium, slow, slower, veryslow, and placebo. Each value specifies a level of trade-off between encoding speed and video quality. For example, the ultrafast preset has the fastest encoding speed but the lowest video quality, while the placebo preset sacrifices the encoding speed for the best video quality.
        // 
        // >  A value of superfast for the preset field is suitable for real-time communication scenarios. We recommend that you not set the field if you are not a professional encoding engineer.
        shared_ptr<string> enhancedParam_ {};
        // The bitrate of the video. Valid values: [1,10000]. Unit: Kbit/s.
        shared_ptr<string> videoBitrate_ {};
        // The video codec. Valid values:
        // 
        // *   H.264 (default)
        // *   H.265
        shared_ptr<string> videoCodec_ {};
        // The frame rate of the video. Valid values: [1,60]. Unit: frames per second (FPS).
        shared_ptr<string> videoFramerate_ {};
        // The group of pictures (GOP) size of the video. Valid values: [1,60].
        shared_ptr<string> videoGop_ {};
        // The height of the video. Valid values: [0,1920]. Unit: pixels.
        shared_ptr<string> videoHeight_ {};
        // The width of the video. Valid values: [0,1920]. Unit: pixels.
        shared_ptr<string> videoWidth_ {};
      };

      class Background : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Background& obj) { 
          DARABONBA_PTR_TO_JSON(RenderMode, renderMode_);
          DARABONBA_PTR_TO_JSON(URL, URL_);
        };
        friend void from_json(const Darabonba::Json& j, Background& obj) { 
          DARABONBA_PTR_FROM_JSON(RenderMode, renderMode_);
          DARABONBA_PTR_FROM_JSON(URL, URL_);
        };
        Background() = default ;
        Background(const Background &) = default ;
        Background(Background &&) = default ;
        Background(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Background() = default ;
        Background& operator=(const Background &) = default ;
        Background& operator=(Background &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->renderMode_ == nullptr
        && this->URL_ == nullptr; };
        // renderMode Field Functions 
        bool hasRenderMode() const { return this->renderMode_ != nullptr;};
        void deleteRenderMode() { this->renderMode_ = nullptr;};
        inline string getRenderMode() const { DARABONBA_PTR_GET_DEFAULT(renderMode_, "") };
        inline Background& setRenderMode(string renderMode) { DARABONBA_PTR_SET_VALUE(renderMode_, renderMode) };


        // URL Field Functions 
        bool hasURL() const { return this->URL_ != nullptr;};
        void deleteURL() { this->URL_ = nullptr;};
        inline string getURL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
        inline Background& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


      protected:
        // The display mode of the global background image. Valid values:
        // 
        // *   **0**: scales the background image proportionally to fit the view, with black bars displayed.
        // *   **1** (default): crops the background image to fit the view.
        shared_ptr<string> renderMode_ {};
        // The URL of the global background image. The URL can be up to 2,048 characters in length.
        shared_ptr<string> URL_ {};
      };

      virtual bool empty() const override { return this->background_ == nullptr
        && this->encodeParams_ == nullptr && this->layout_ == nullptr && this->userInfos_ == nullptr; };
      // background Field Functions 
      bool hasBackground() const { return this->background_ != nullptr;};
      void deleteBackground() { this->background_ = nullptr;};
      inline const TranscodeParams::Background & getBackground() const { DARABONBA_PTR_GET_CONST(background_, TranscodeParams::Background) };
      inline TranscodeParams::Background getBackground() { DARABONBA_PTR_GET(background_, TranscodeParams::Background) };
      inline TranscodeParams& setBackground(const TranscodeParams::Background & background) { DARABONBA_PTR_SET_VALUE(background_, background) };
      inline TranscodeParams& setBackground(TranscodeParams::Background && background) { DARABONBA_PTR_SET_RVALUE(background_, background) };


      // encodeParams Field Functions 
      bool hasEncodeParams() const { return this->encodeParams_ != nullptr;};
      void deleteEncodeParams() { this->encodeParams_ = nullptr;};
      inline const TranscodeParams::EncodeParams & getEncodeParams() const { DARABONBA_PTR_GET_CONST(encodeParams_, TranscodeParams::EncodeParams) };
      inline TranscodeParams::EncodeParams getEncodeParams() { DARABONBA_PTR_GET(encodeParams_, TranscodeParams::EncodeParams) };
      inline TranscodeParams& setEncodeParams(const TranscodeParams::EncodeParams & encodeParams) { DARABONBA_PTR_SET_VALUE(encodeParams_, encodeParams) };
      inline TranscodeParams& setEncodeParams(TranscodeParams::EncodeParams && encodeParams) { DARABONBA_PTR_SET_RVALUE(encodeParams_, encodeParams) };


      // layout Field Functions 
      bool hasLayout() const { return this->layout_ != nullptr;};
      void deleteLayout() { this->layout_ = nullptr;};
      inline const TranscodeParams::Layout & getLayout() const { DARABONBA_PTR_GET_CONST(layout_, TranscodeParams::Layout) };
      inline TranscodeParams::Layout getLayout() { DARABONBA_PTR_GET(layout_, TranscodeParams::Layout) };
      inline TranscodeParams& setLayout(const TranscodeParams::Layout & layout) { DARABONBA_PTR_SET_VALUE(layout_, layout) };
      inline TranscodeParams& setLayout(TranscodeParams::Layout && layout) { DARABONBA_PTR_SET_RVALUE(layout_, layout) };


      // userInfos Field Functions 
      bool hasUserInfos() const { return this->userInfos_ != nullptr;};
      void deleteUserInfos() { this->userInfos_ = nullptr;};
      inline const vector<TranscodeParams::UserInfos> & getUserInfos() const { DARABONBA_PTR_GET_CONST(userInfos_, vector<TranscodeParams::UserInfos>) };
      inline vector<TranscodeParams::UserInfos> getUserInfos() { DARABONBA_PTR_GET(userInfos_, vector<TranscodeParams::UserInfos>) };
      inline TranscodeParams& setUserInfos(const vector<TranscodeParams::UserInfos> & userInfos) { DARABONBA_PTR_SET_VALUE(userInfos_, userInfos) };
      inline TranscodeParams& setUserInfos(vector<TranscodeParams::UserInfos> && userInfos) { DARABONBA_PTR_SET_RVALUE(userInfos_, userInfos) };


    protected:
      // The global background image.
      shared_ptr<TranscodeParams::Background> background_ {};
      // The encoding parameters for the output stream.
      shared_ptr<TranscodeParams::EncodeParams> encodeParams_ {};
      // The video layout information.
      // 
      // >  If video transcoding is required, you must specify the video layout information, including the x-coordinate and y-coordinate, the width and height, and the layer. For audio-only transcoding, leave the video layout information empty.
      shared_ptr<TranscodeParams::Layout> layout_ {};
      // The information about the users whose streams are subscribed to. If you leave this parameter empty, streams from all users are mixed.
      shared_ptr<vector<TranscodeParams::UserInfos>> userInfos_ {};
    };

    class SingleSubParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SingleSubParams& obj) { 
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(StreamType, streamType_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, SingleSubParams& obj) { 
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      SingleSubParams() = default ;
      SingleSubParams(const SingleSubParams &) = default ;
      SingleSubParams(SingleSubParams &&) = default ;
      SingleSubParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SingleSubParams() = default ;
      SingleSubParams& operator=(const SingleSubParams &) = default ;
      SingleSubParams& operator=(SingleSubParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->sourceType_ == nullptr
        && this->streamType_ == nullptr && this->userId_ == nullptr; };
      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline SingleSubParams& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // streamType Field Functions 
      bool hasStreamType() const { return this->streamType_ != nullptr;};
      void deleteStreamType() { this->streamType_ = nullptr;};
      inline string getStreamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, "") };
      inline SingleSubParams& setStreamType(string streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline SingleSubParams& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The type of the video source. This parameter is valid only when you set StreamType to 2. Valid values:
      // 
      // *   **camera** (default)
      // *   **shareScreen**
      shared_ptr<string> sourceType_ {};
      // The type of the stream that you want to relay. Valid values:
      // 
      // *   **0** (default): original stream
      // *   **1**: only the audio track
      // *   **2**: only the video track
      shared_ptr<string> streamType_ {};
      // The user ID. In the single-stream relay mode, you can relay only one stream in a request.
      // 
      // This parameter is required.
      shared_ptr<string> userId_ {};
    };

    class SeiParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SeiParams& obj) { 
        DARABONBA_PTR_TO_JSON(LayoutVolume, layoutVolume_);
        DARABONBA_PTR_TO_JSON(PassThrough, passThrough_);
        DARABONBA_PTR_TO_JSON(PayloadType, payloadType_);
      };
      friend void from_json(const Darabonba::Json& j, SeiParams& obj) { 
        DARABONBA_PTR_FROM_JSON(LayoutVolume, layoutVolume_);
        DARABONBA_PTR_FROM_JSON(PassThrough, passThrough_);
        DARABONBA_PTR_FROM_JSON(PayloadType, payloadType_);
      };
      SeiParams() = default ;
      SeiParams(const SeiParams &) = default ;
      SeiParams(SeiParams &&) = default ;
      SeiParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SeiParams() = default ;
      SeiParams& operator=(const SeiParams &) = default ;
      SeiParams& operator=(SeiParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PassThrough : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PassThrough& obj) { 
          DARABONBA_PTR_TO_JSON(FollowIdr, followIdr_);
          DARABONBA_PTR_TO_JSON(Interval, interval_);
          DARABONBA_PTR_TO_JSON(PayloadContent, payloadContent_);
          DARABONBA_PTR_TO_JSON(PayloadContentKey, payloadContentKey_);
        };
        friend void from_json(const Darabonba::Json& j, PassThrough& obj) { 
          DARABONBA_PTR_FROM_JSON(FollowIdr, followIdr_);
          DARABONBA_PTR_FROM_JSON(Interval, interval_);
          DARABONBA_PTR_FROM_JSON(PayloadContent, payloadContent_);
          DARABONBA_PTR_FROM_JSON(PayloadContentKey, payloadContentKey_);
        };
        PassThrough() = default ;
        PassThrough(const PassThrough &) = default ;
        PassThrough(PassThrough &&) = default ;
        PassThrough(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PassThrough() = default ;
        PassThrough& operator=(const PassThrough &) = default ;
        PassThrough& operator=(PassThrough &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->followIdr_ == nullptr
        && this->interval_ == nullptr && this->payloadContent_ == nullptr && this->payloadContentKey_ == nullptr; };
        // followIdr Field Functions 
        bool hasFollowIdr() const { return this->followIdr_ != nullptr;};
        void deleteFollowIdr() { this->followIdr_ = nullptr;};
        inline string getFollowIdr() const { DARABONBA_PTR_GET_DEFAULT(followIdr_, "") };
        inline PassThrough& setFollowIdr(string followIdr) { DARABONBA_PTR_SET_VALUE(followIdr_, followIdr) };


        // interval Field Functions 
        bool hasInterval() const { return this->interval_ != nullptr;};
        void deleteInterval() { this->interval_ = nullptr;};
        inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
        inline PassThrough& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


        // payloadContent Field Functions 
        bool hasPayloadContent() const { return this->payloadContent_ != nullptr;};
        void deletePayloadContent() { this->payloadContent_ = nullptr;};
        inline string getPayloadContent() const { DARABONBA_PTR_GET_DEFAULT(payloadContent_, "") };
        inline PassThrough& setPayloadContent(string payloadContent) { DARABONBA_PTR_SET_VALUE(payloadContent_, payloadContent) };


        // payloadContentKey Field Functions 
        bool hasPayloadContentKey() const { return this->payloadContentKey_ != nullptr;};
        void deletePayloadContentKey() { this->payloadContentKey_ = nullptr;};
        inline string getPayloadContentKey() const { DARABONBA_PTR_GET_DEFAULT(payloadContentKey_, "") };
        inline PassThrough& setPayloadContentKey(string payloadContentKey) { DARABONBA_PTR_SET_VALUE(payloadContentKey_, payloadContentKey) };


      protected:
        // Specifies whether to include the SEI in an IDR frame. Valid values:
        // 
        // *   **0**: does not include the SEI.
        // *   **1**: includes the SEI.
        shared_ptr<string> followIdr_ {};
        // The interval at which the SEI is sent. Valid values: [1000,5000]. Unit: milliseconds.
        shared_ptr<string> interval_ {};
        // The payload content of the SEI.
        shared_ptr<string> payloadContent_ {};
        // The key of the payload content of the SEI. If you do not specify this parameter, the default value udd is used.
        shared_ptr<string> payloadContentKey_ {};
      };

      class LayoutVolume : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LayoutVolume& obj) { 
          DARABONBA_PTR_TO_JSON(FollowIdr, followIdr_);
          DARABONBA_PTR_TO_JSON(Interval, interval_);
        };
        friend void from_json(const Darabonba::Json& j, LayoutVolume& obj) { 
          DARABONBA_PTR_FROM_JSON(FollowIdr, followIdr_);
          DARABONBA_PTR_FROM_JSON(Interval, interval_);
        };
        LayoutVolume() = default ;
        LayoutVolume(const LayoutVolume &) = default ;
        LayoutVolume(LayoutVolume &&) = default ;
        LayoutVolume(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LayoutVolume() = default ;
        LayoutVolume& operator=(const LayoutVolume &) = default ;
        LayoutVolume& operator=(LayoutVolume &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->followIdr_ == nullptr
        && this->interval_ == nullptr; };
        // followIdr Field Functions 
        bool hasFollowIdr() const { return this->followIdr_ != nullptr;};
        void deleteFollowIdr() { this->followIdr_ = nullptr;};
        inline string getFollowIdr() const { DARABONBA_PTR_GET_DEFAULT(followIdr_, "") };
        inline LayoutVolume& setFollowIdr(string followIdr) { DARABONBA_PTR_SET_VALUE(followIdr_, followIdr) };


        // interval Field Functions 
        bool hasInterval() const { return this->interval_ != nullptr;};
        void deleteInterval() { this->interval_ = nullptr;};
        inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
        inline LayoutVolume& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


      protected:
        // Specifies whether to include the SEI in an Instantaneous Decoder Refresh (IDR) frame. Valid values:
        // 
        // *   **0**: does not include the SEI.
        // *   **1**: includes the SEI.
        shared_ptr<string> followIdr_ {};
        // The interval at which the SEI is sent. Valid values: [1000,5000]. Unit: milliseconds.
        shared_ptr<string> interval_ {};
      };

      virtual bool empty() const override { return this->layoutVolume_ == nullptr
        && this->passThrough_ == nullptr && this->payloadType_ == nullptr; };
      // layoutVolume Field Functions 
      bool hasLayoutVolume() const { return this->layoutVolume_ != nullptr;};
      void deleteLayoutVolume() { this->layoutVolume_ = nullptr;};
      inline const SeiParams::LayoutVolume & getLayoutVolume() const { DARABONBA_PTR_GET_CONST(layoutVolume_, SeiParams::LayoutVolume) };
      inline SeiParams::LayoutVolume getLayoutVolume() { DARABONBA_PTR_GET(layoutVolume_, SeiParams::LayoutVolume) };
      inline SeiParams& setLayoutVolume(const SeiParams::LayoutVolume & layoutVolume) { DARABONBA_PTR_SET_VALUE(layoutVolume_, layoutVolume) };
      inline SeiParams& setLayoutVolume(SeiParams::LayoutVolume && layoutVolume) { DARABONBA_PTR_SET_RVALUE(layoutVolume_, layoutVolume) };


      // passThrough Field Functions 
      bool hasPassThrough() const { return this->passThrough_ != nullptr;};
      void deletePassThrough() { this->passThrough_ = nullptr;};
      inline const SeiParams::PassThrough & getPassThrough() const { DARABONBA_PTR_GET_CONST(passThrough_, SeiParams::PassThrough) };
      inline SeiParams::PassThrough getPassThrough() { DARABONBA_PTR_GET(passThrough_, SeiParams::PassThrough) };
      inline SeiParams& setPassThrough(const SeiParams::PassThrough & passThrough) { DARABONBA_PTR_SET_VALUE(passThrough_, passThrough) };
      inline SeiParams& setPassThrough(SeiParams::PassThrough && passThrough) { DARABONBA_PTR_SET_RVALUE(passThrough_, passThrough) };


      // payloadType Field Functions 
      bool hasPayloadType() const { return this->payloadType_ != nullptr;};
      void deletePayloadType() { this->payloadType_ = nullptr;};
      inline string getPayloadType() const { DARABONBA_PTR_GET_DEFAULT(payloadType_, "") };
      inline SeiParams& setPayloadType(string payloadType) { DARABONBA_PTR_SET_VALUE(payloadType_, payloadType) };


    protected:
      // The layout and volume SEI. If you leave this parameter empty, the default layout and volume SEI is used.
      shared_ptr<SeiParams::LayoutVolume> layoutVolume_ {};
      // Specifies whether to pass through the SEI.
      shared_ptr<SeiParams::PassThrough> passThrough_ {};
      // The custom payload_type of the SEI. Valid values: 100 to 254. If you do not specify this parameter, the default value 5 is used.
      shared_ptr<string> payloadType_ {};
    };

    class MultiStreamURL : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MultiStreamURL& obj) { 
        DARABONBA_PTR_TO_JSON(IsAliCdn, isAliCdn_);
        DARABONBA_PTR_TO_JSON(URL, URL_);
      };
      friend void from_json(const Darabonba::Json& j, MultiStreamURL& obj) { 
        DARABONBA_PTR_FROM_JSON(IsAliCdn, isAliCdn_);
        DARABONBA_PTR_FROM_JSON(URL, URL_);
      };
      MultiStreamURL() = default ;
      MultiStreamURL(const MultiStreamURL &) = default ;
      MultiStreamURL(MultiStreamURL &&) = default ;
      MultiStreamURL(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MultiStreamURL() = default ;
      MultiStreamURL& operator=(const MultiStreamURL &) = default ;
      MultiStreamURL& operator=(MultiStreamURL &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->isAliCdn_ == nullptr
        && this->URL_ == nullptr; };
      // isAliCdn Field Functions 
      bool hasIsAliCdn() const { return this->isAliCdn_ != nullptr;};
      void deleteIsAliCdn() { this->isAliCdn_ = nullptr;};
      inline bool getIsAliCdn() const { DARABONBA_PTR_GET_DEFAULT(isAliCdn_, false) };
      inline MultiStreamURL& setIsAliCdn(bool isAliCdn) { DARABONBA_PTR_SET_VALUE(isAliCdn_, isAliCdn) };


      // URL Field Functions 
      bool hasURL() const { return this->URL_ != nullptr;};
      void deleteURL() { this->URL_ = nullptr;};
      inline string getURL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
      inline MultiStreamURL& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


    protected:
      // Specifies whether to perform stream relay by using Alibaba Cloud CDN. Valid values:
      // 
      // *   false: performs stream relay by using a CDN service that is not Alibaba Cloud CDN.
      // *   true: performs stream relay by using Alibaba Cloud CDN.
      // 
      // >  The default value of this parameter is false.
      shared_ptr<bool> isAliCdn_ {};
      // The ingest URL. Only the RTMP format is supported. The URL can be up to 2,048 characters in length. For information about the generation rules of ingest URLs, see [Ingest and streaming URLs](https://help.aliyun.com/document_detail/199339.html).
      shared_ptr<string> URL_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->channelId_ == nullptr && this->maxIdleTime_ == nullptr && this->mixMode_ == nullptr && this->multiStreamURL_ == nullptr && this->region_ == nullptr
        && this->seiParams_ == nullptr && this->singleSubParams_ == nullptr && this->streamURL_ == nullptr && this->taskId_ == nullptr && this->transcodeParams_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartLiveMPUTaskRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartLiveMPUTaskRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // maxIdleTime Field Functions 
    bool hasMaxIdleTime() const { return this->maxIdleTime_ != nullptr;};
    void deleteMaxIdleTime() { this->maxIdleTime_ = nullptr;};
    inline string getMaxIdleTime() const { DARABONBA_PTR_GET_DEFAULT(maxIdleTime_, "") };
    inline StartLiveMPUTaskRequest& setMaxIdleTime(string maxIdleTime) { DARABONBA_PTR_SET_VALUE(maxIdleTime_, maxIdleTime) };


    // mixMode Field Functions 
    bool hasMixMode() const { return this->mixMode_ != nullptr;};
    void deleteMixMode() { this->mixMode_ = nullptr;};
    inline string getMixMode() const { DARABONBA_PTR_GET_DEFAULT(mixMode_, "") };
    inline StartLiveMPUTaskRequest& setMixMode(string mixMode) { DARABONBA_PTR_SET_VALUE(mixMode_, mixMode) };


    // multiStreamURL Field Functions 
    bool hasMultiStreamURL() const { return this->multiStreamURL_ != nullptr;};
    void deleteMultiStreamURL() { this->multiStreamURL_ = nullptr;};
    inline const vector<StartLiveMPUTaskRequest::MultiStreamURL> & getMultiStreamURL() const { DARABONBA_PTR_GET_CONST(multiStreamURL_, vector<StartLiveMPUTaskRequest::MultiStreamURL>) };
    inline vector<StartLiveMPUTaskRequest::MultiStreamURL> getMultiStreamURL() { DARABONBA_PTR_GET(multiStreamURL_, vector<StartLiveMPUTaskRequest::MultiStreamURL>) };
    inline StartLiveMPUTaskRequest& setMultiStreamURL(const vector<StartLiveMPUTaskRequest::MultiStreamURL> & multiStreamURL) { DARABONBA_PTR_SET_VALUE(multiStreamURL_, multiStreamURL) };
    inline StartLiveMPUTaskRequest& setMultiStreamURL(vector<StartLiveMPUTaskRequest::MultiStreamURL> && multiStreamURL) { DARABONBA_PTR_SET_RVALUE(multiStreamURL_, multiStreamURL) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline StartLiveMPUTaskRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // seiParams Field Functions 
    bool hasSeiParams() const { return this->seiParams_ != nullptr;};
    void deleteSeiParams() { this->seiParams_ = nullptr;};
    inline const StartLiveMPUTaskRequest::SeiParams & getSeiParams() const { DARABONBA_PTR_GET_CONST(seiParams_, StartLiveMPUTaskRequest::SeiParams) };
    inline StartLiveMPUTaskRequest::SeiParams getSeiParams() { DARABONBA_PTR_GET(seiParams_, StartLiveMPUTaskRequest::SeiParams) };
    inline StartLiveMPUTaskRequest& setSeiParams(const StartLiveMPUTaskRequest::SeiParams & seiParams) { DARABONBA_PTR_SET_VALUE(seiParams_, seiParams) };
    inline StartLiveMPUTaskRequest& setSeiParams(StartLiveMPUTaskRequest::SeiParams && seiParams) { DARABONBA_PTR_SET_RVALUE(seiParams_, seiParams) };


    // singleSubParams Field Functions 
    bool hasSingleSubParams() const { return this->singleSubParams_ != nullptr;};
    void deleteSingleSubParams() { this->singleSubParams_ = nullptr;};
    inline const StartLiveMPUTaskRequest::SingleSubParams & getSingleSubParams() const { DARABONBA_PTR_GET_CONST(singleSubParams_, StartLiveMPUTaskRequest::SingleSubParams) };
    inline StartLiveMPUTaskRequest::SingleSubParams getSingleSubParams() { DARABONBA_PTR_GET(singleSubParams_, StartLiveMPUTaskRequest::SingleSubParams) };
    inline StartLiveMPUTaskRequest& setSingleSubParams(const StartLiveMPUTaskRequest::SingleSubParams & singleSubParams) { DARABONBA_PTR_SET_VALUE(singleSubParams_, singleSubParams) };
    inline StartLiveMPUTaskRequest& setSingleSubParams(StartLiveMPUTaskRequest::SingleSubParams && singleSubParams) { DARABONBA_PTR_SET_RVALUE(singleSubParams_, singleSubParams) };


    // streamURL Field Functions 
    bool hasStreamURL() const { return this->streamURL_ != nullptr;};
    void deleteStreamURL() { this->streamURL_ = nullptr;};
    inline string getStreamURL() const { DARABONBA_PTR_GET_DEFAULT(streamURL_, "") };
    inline StartLiveMPUTaskRequest& setStreamURL(string streamURL) { DARABONBA_PTR_SET_VALUE(streamURL_, streamURL) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline StartLiveMPUTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // transcodeParams Field Functions 
    bool hasTranscodeParams() const { return this->transcodeParams_ != nullptr;};
    void deleteTranscodeParams() { this->transcodeParams_ = nullptr;};
    inline const StartLiveMPUTaskRequest::TranscodeParams & getTranscodeParams() const { DARABONBA_PTR_GET_CONST(transcodeParams_, StartLiveMPUTaskRequest::TranscodeParams) };
    inline StartLiveMPUTaskRequest::TranscodeParams getTranscodeParams() { DARABONBA_PTR_GET(transcodeParams_, StartLiveMPUTaskRequest::TranscodeParams) };
    inline StartLiveMPUTaskRequest& setTranscodeParams(const StartLiveMPUTaskRequest::TranscodeParams & transcodeParams) { DARABONBA_PTR_SET_VALUE(transcodeParams_, transcodeParams) };
    inline StartLiveMPUTaskRequest& setTranscodeParams(StartLiveMPUTaskRequest::TranscodeParams && transcodeParams) { DARABONBA_PTR_SET_RVALUE(transcodeParams_, transcodeParams) };


  protected:
    // The application ID. You can specify only one application ID. The ID can be up to 64 characters in length and can contain letters, digits, underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The channel ID. You can specify only one channel ID. The ID can be up to 64 characters in length and can contain letters, digits, underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    // The timeout period of an idle connection. Unit: seconds. Valid values: [10,86400].
    // 
    // >  If the task is idle for a period of time longer than the duration specified by the MaxIdleTime parameter, the task is automatically stopped. If the parameter is not specified, the task is stopped after the channel is closed.
    shared_ptr<string> maxIdleTime_ {};
    // The stream mixing mode. Valid values:
    // 
    // *   **0**: the single-stream relay mode. In this mode, the service only relays the original single stream, but does not transcode mixed streams. You do not need to set parameters for mixed-stream transcoding.
    // *   **1** (default): the mixed-stream relay mode.
    // 
    // This parameter is required.
    shared_ptr<string> mixMode_ {};
    // The multiple ingest URLs to relay. This parameter allows you to specify multiple ingest URLs.
    // 
    // >  The StreamURL and MultiStreamURL parameters are mutually exclusive. You must specify one of the two parameters.
    shared_ptr<vector<StartLiveMPUTaskRequest::MultiStreamURL>> multiStreamURL_ {};
    // The region in which the streams are mixed. Valid values:
    // 
    // *   **CN-Shanghai**
    // *   **AP-Singapore** (default)
    // *   **EMAA-Saudi**
    shared_ptr<string> region_ {};
    // The supplemental enhancement information (SEI) parameters.
    shared_ptr<StartLiveMPUTaskRequest::SeiParams> seiParams_ {};
    // The single-stream relay parameters. These parameters are required if you set MixMode to 0. Leave these parameters empty in the mixed-stream relay mode.
    shared_ptr<StartLiveMPUTaskRequest::SingleSubParams> singleSubParams_ {};
    // The ingest URL. You can specify only one ingest URL in the Real-Time Messaging Protocol (RTMP) format. The URL can be up to 2,048 characters in length. For information about the generation rules of ingest URLs, see [Ingest and streaming URLs](https://help.aliyun.com/document_detail/199339.html).
    // 
    // > 
    // 
    // *   If the ingest URL is under a domain name for which hotlink protection is enabled, you must include an access token in the URL.
    // *   You cannot use the same ingest URL in different tasks.
    // *   You cannot use the same ingest URL within 10 seconds after a task is stopped.
    shared_ptr<string> streamURL_ {};
    // The task ID. You can specify only one task ID. The ID can be up to 55 characters in length and can contain letters, digits, underscores (_), and hyphens (-). The ID must be unique.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // The mixed-stream relay parameters. These parameters are required if you set MixMode to 1. Leave these parameters empty if you use the single-stream relay mode.
    shared_ptr<StartLiveMPUTaskRequest::TranscodeParams> transcodeParams_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
