// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERTCCLOUDRECORDINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERTCCLOUDRECORDINGREQUEST_HPP_
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
  class UpdateRtcCloudRecordingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRtcCloudRecordingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MixLayoutParams, mixLayoutParams_);
      DARABONBA_PTR_TO_JSON(SubscribeParams, subscribeParams_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRtcCloudRecordingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MixLayoutParams, mixLayoutParams_);
      DARABONBA_PTR_FROM_JSON(SubscribeParams, subscribeParams_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    UpdateRtcCloudRecordingRequest() = default ;
    UpdateRtcCloudRecordingRequest(const UpdateRtcCloudRecordingRequest &) = default ;
    UpdateRtcCloudRecordingRequest(UpdateRtcCloudRecordingRequest &&) = default ;
    UpdateRtcCloudRecordingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRtcCloudRecordingRequest() = default ;
    UpdateRtcCloudRecordingRequest& operator=(const UpdateRtcCloudRecordingRequest &) = default ;
    UpdateRtcCloudRecordingRequest& operator=(UpdateRtcCloudRecordingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubscribeParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubscribeParams& obj) { 
        DARABONBA_PTR_TO_JSON(SubscribeUserIdList, subscribeUserIdList_);
      };
      friend void from_json(const Darabonba::Json& j, SubscribeParams& obj) { 
        DARABONBA_PTR_FROM_JSON(SubscribeUserIdList, subscribeUserIdList_);
      };
      SubscribeParams() = default ;
      SubscribeParams(const SubscribeParams &) = default ;
      SubscribeParams(SubscribeParams &&) = default ;
      SubscribeParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubscribeParams() = default ;
      SubscribeParams& operator=(const SubscribeParams &) = default ;
      SubscribeParams& operator=(SubscribeParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubscribeUserIdList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubscribeUserIdList& obj) { 
          DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(StreamType, streamType_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, SubscribeUserIdList& obj) { 
          DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        SubscribeUserIdList() = default ;
        SubscribeUserIdList(const SubscribeUserIdList &) = default ;
        SubscribeUserIdList(SubscribeUserIdList &&) = default ;
        SubscribeUserIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubscribeUserIdList() = default ;
        SubscribeUserIdList& operator=(const SubscribeUserIdList &) = default ;
        SubscribeUserIdList& operator=(SubscribeUserIdList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->sourceType_ == nullptr
        && this->streamType_ == nullptr && this->userId_ == nullptr; };
        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline int32_t getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, 0) };
        inline SubscribeUserIdList& setSourceType(int32_t sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // streamType Field Functions 
        bool hasStreamType() const { return this->streamType_ != nullptr;};
        void deleteStreamType() { this->streamType_ = nullptr;};
        inline int32_t getStreamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, 0) };
        inline SubscribeUserIdList& setStreamType(int32_t streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline SubscribeUserIdList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // The video input stream type of the UserId. This parameter takes effect only when the video stream is subscribed (StreamType=2). Valid values:
        // 
        // - 0: camera. (Default)
        // 
        // - 1: screen sharing.
        shared_ptr<int32_t> sourceType_ {};
        // The media type of the subscribed UserId. Valid values:
        // 
        // - 0: original stream, which includes both audio and video. (Default)
        // 
        // - 1: audio-only stream.
        // 
        // - 2: video-only stream.
        shared_ptr<int32_t> streamType_ {};
        // The subscribed UserId.
        // 
        // This parameter is required.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->subscribeUserIdList_ == nullptr; };
      // subscribeUserIdList Field Functions 
      bool hasSubscribeUserIdList() const { return this->subscribeUserIdList_ != nullptr;};
      void deleteSubscribeUserIdList() { this->subscribeUserIdList_ = nullptr;};
      inline const vector<SubscribeParams::SubscribeUserIdList> & getSubscribeUserIdList() const { DARABONBA_PTR_GET_CONST(subscribeUserIdList_, vector<SubscribeParams::SubscribeUserIdList>) };
      inline vector<SubscribeParams::SubscribeUserIdList> getSubscribeUserIdList() { DARABONBA_PTR_GET(subscribeUserIdList_, vector<SubscribeParams::SubscribeUserIdList>) };
      inline SubscribeParams& setSubscribeUserIdList(const vector<SubscribeParams::SubscribeUserIdList> & subscribeUserIdList) { DARABONBA_PTR_SET_VALUE(subscribeUserIdList_, subscribeUserIdList) };
      inline SubscribeParams& setSubscribeUserIdList(vector<SubscribeParams::SubscribeUserIdList> && subscribeUserIdList) { DARABONBA_PTR_SET_RVALUE(subscribeUserIdList_, subscribeUserIdList) };


    protected:
      // The list of subscribed UserId entries. In single-stream recording mode, each UserId is recorded separately. In stream mixing recording mode, the audio and video of all UserIds are mixed into a single set of audio and video.
      // > 
      // > - The array supports a maximum of 17 elements.
      // 
      // This parameter is required.
      shared_ptr<vector<SubscribeParams::SubscribeUserIdList>> subscribeUserIdList_ {};
    };

    class MixLayoutParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MixLayoutParams& obj) { 
        DARABONBA_PTR_TO_JSON(MixBackground, mixBackground_);
        DARABONBA_PTR_TO_JSON(UserPanes, userPanes_);
      };
      friend void from_json(const Darabonba::Json& j, MixLayoutParams& obj) { 
        DARABONBA_PTR_FROM_JSON(MixBackground, mixBackground_);
        DARABONBA_PTR_FROM_JSON(UserPanes, userPanes_);
      };
      MixLayoutParams() = default ;
      MixLayoutParams(const MixLayoutParams &) = default ;
      MixLayoutParams(MixLayoutParams &&) = default ;
      MixLayoutParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MixLayoutParams() = default ;
      MixLayoutParams& operator=(const MixLayoutParams &) = default ;
      MixLayoutParams& operator=(MixLayoutParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserPanes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserPanes& obj) { 
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
          DARABONBA_PTR_TO_JSON(SubBackground, subBackground_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(Width, width_);
          DARABONBA_PTR_TO_JSON(X, x_);
          DARABONBA_PTR_TO_JSON(Y, y_);
          DARABONBA_PTR_TO_JSON(ZOrder, ZOrder_);
        };
        friend void from_json(const Darabonba::Json& j, UserPanes& obj) { 
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
          DARABONBA_PTR_FROM_JSON(SubBackground, subBackground_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
        class SubBackground : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubBackground& obj) { 
            DARABONBA_PTR_TO_JSON(RenderMode, renderMode_);
            DARABONBA_PTR_TO_JSON(Url, url_);
          };
          friend void from_json(const Darabonba::Json& j, SubBackground& obj) { 
            DARABONBA_PTR_FROM_JSON(RenderMode, renderMode_);
            DARABONBA_PTR_FROM_JSON(Url, url_);
          };
          SubBackground() = default ;
          SubBackground(const SubBackground &) = default ;
          SubBackground(SubBackground &&) = default ;
          SubBackground(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SubBackground() = default ;
          SubBackground& operator=(const SubBackground &) = default ;
          SubBackground& operator=(SubBackground &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->renderMode_ == nullptr
        && this->url_ == nullptr; };
          // renderMode Field Functions 
          bool hasRenderMode() const { return this->renderMode_ != nullptr;};
          void deleteRenderMode() { this->renderMode_ = nullptr;};
          inline int32_t getRenderMode() const { DARABONBA_PTR_GET_DEFAULT(renderMode_, 0) };
          inline SubBackground& setRenderMode(int32_t renderMode) { DARABONBA_PTR_SET_VALUE(renderMode_, renderMode) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline SubBackground& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          // The display mode for the sub-pane output. Valid values:
          // - 0: crop. (Default)
          // - 1: scale and display with black borders.
          shared_ptr<int32_t> renderMode_ {};
          // The URL of the background image. The maximum length is 2048 characters.
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->height_ == nullptr
        && this->sourceType_ == nullptr && this->subBackground_ == nullptr && this->userId_ == nullptr && this->width_ == nullptr && this->x_ == nullptr
        && this->y_ == nullptr && this->ZOrder_ == nullptr; };
        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
        inline UserPanes& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline int32_t getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, 0) };
        inline UserPanes& setSourceType(int32_t sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // subBackground Field Functions 
        bool hasSubBackground() const { return this->subBackground_ != nullptr;};
        void deleteSubBackground() { this->subBackground_ = nullptr;};
        inline const UserPanes::SubBackground & getSubBackground() const { DARABONBA_PTR_GET_CONST(subBackground_, UserPanes::SubBackground) };
        inline UserPanes::SubBackground getSubBackground() { DARABONBA_PTR_GET(subBackground_, UserPanes::SubBackground) };
        inline UserPanes& setSubBackground(const UserPanes::SubBackground & subBackground) { DARABONBA_PTR_SET_VALUE(subBackground_, subBackground) };
        inline UserPanes& setSubBackground(UserPanes::SubBackground && subBackground) { DARABONBA_PTR_SET_RVALUE(subBackground_, subBackground) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline UserPanes& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


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
        inline int32_t getZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, 0) };
        inline UserPanes& setZOrder(int32_t ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


      protected:
        // The pane height as a normalized percentage. The value must be in the range of [0, 1]. (Default: 0)
        shared_ptr<string> height_ {};
        // The video input stream type of the UserId. This parameter is invalid if UserId is not specified. Valid values:
        // - 0: camera. (Default)
        // - 1: screen sharing.
        // 
        // The combination of UserId and SourceType specified here must be included in SubscribeUserIdList.
        shared_ptr<int32_t> sourceType_ {};
        // The sub-pane background image. When a user turns off the camera, has not started stream ingest after joining, or leaves the channel midway, the corresponding image is displayed at the layout position.
        shared_ptr<UserPanes::SubBackground> subBackground_ {};
        // The UserId corresponding to this window.
        // - If UserId is not specified, windows are filled in the order in which subscribed users join the channel.
        // - The combination of UserId and SourceType specified here must be included in SubscribeUserIdList.
        // - Audio-only streams cannot be added to the layout.
        shared_ptr<string> userId_ {};
        // The pane width as a normalized percentage. The value must be in the range of [0, 1]. (Default: 0)
        shared_ptr<string> width_ {};
        // The X coordinate as a normalized percentage. The value must be in the range of [0, 1]. (Default: 0)
        shared_ptr<string> x_ {};
        // The Y coordinate as a normalized percentage. The value must be in the range of [0, 1]. (Default: 0)
        shared_ptr<string> y_ {};
        // The stacking order. 0 is the bottom layer, layer 1 is above layer 0, and so on. (Default: 0)
        shared_ptr<int32_t> ZOrder_ {};
      };

      class MixBackground : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MixBackground& obj) { 
          DARABONBA_PTR_TO_JSON(RenderMode, renderMode_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, MixBackground& obj) { 
          DARABONBA_PTR_FROM_JSON(RenderMode, renderMode_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        MixBackground() = default ;
        MixBackground(const MixBackground &) = default ;
        MixBackground(MixBackground &&) = default ;
        MixBackground(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MixBackground() = default ;
        MixBackground& operator=(const MixBackground &) = default ;
        MixBackground& operator=(MixBackground &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->renderMode_ == nullptr
        && this->url_ == nullptr; };
        // renderMode Field Functions 
        bool hasRenderMode() const { return this->renderMode_ != nullptr;};
        void deleteRenderMode() { this->renderMode_ = nullptr;};
        inline int32_t getRenderMode() const { DARABONBA_PTR_GET_DEFAULT(renderMode_, 0) };
        inline MixBackground& setRenderMode(int32_t renderMode) { DARABONBA_PTR_SET_VALUE(renderMode_, renderMode) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline MixBackground& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The display mode for the output. Valid values:
        // - 0: crop. (Default)
        // - 1: scale and display with black borders.
        shared_ptr<int32_t> renderMode_ {};
        // The URL of the background image. The maximum length is 2048 characters.
        shared_ptr<string> url_ {};
      };

      virtual bool empty() const override { return this->mixBackground_ == nullptr
        && this->userPanes_ == nullptr; };
      // mixBackground Field Functions 
      bool hasMixBackground() const { return this->mixBackground_ != nullptr;};
      void deleteMixBackground() { this->mixBackground_ = nullptr;};
      inline const MixLayoutParams::MixBackground & getMixBackground() const { DARABONBA_PTR_GET_CONST(mixBackground_, MixLayoutParams::MixBackground) };
      inline MixLayoutParams::MixBackground getMixBackground() { DARABONBA_PTR_GET(mixBackground_, MixLayoutParams::MixBackground) };
      inline MixLayoutParams& setMixBackground(const MixLayoutParams::MixBackground & mixBackground) { DARABONBA_PTR_SET_VALUE(mixBackground_, mixBackground) };
      inline MixLayoutParams& setMixBackground(MixLayoutParams::MixBackground && mixBackground) { DARABONBA_PTR_SET_RVALUE(mixBackground_, mixBackground) };


      // userPanes Field Functions 
      bool hasUserPanes() const { return this->userPanes_ != nullptr;};
      void deleteUserPanes() { this->userPanes_ = nullptr;};
      inline const vector<MixLayoutParams::UserPanes> & getUserPanes() const { DARABONBA_PTR_GET_CONST(userPanes_, vector<MixLayoutParams::UserPanes>) };
      inline vector<MixLayoutParams::UserPanes> getUserPanes() { DARABONBA_PTR_GET(userPanes_, vector<MixLayoutParams::UserPanes>) };
      inline MixLayoutParams& setUserPanes(const vector<MixLayoutParams::UserPanes> & userPanes) { DARABONBA_PTR_SET_VALUE(userPanes_, userPanes) };
      inline MixLayoutParams& setUserPanes(vector<MixLayoutParams::UserPanes> && userPanes) { DARABONBA_PTR_SET_RVALUE(userPanes_, userPanes) };


    protected:
      // The global background image for stream mixing.
      shared_ptr<MixLayoutParams::MixBackground> mixBackground_ {};
      // The window layout information of the subscribed users. Only UserIds with layout information configured are placed in the output. This parameter is required in stream mixing mode when recording non-audio-only files.
      shared_ptr<vector<MixLayoutParams::UserPanes>> userPanes_ {};
    };

    virtual bool empty() const override { return this->mixLayoutParams_ == nullptr
        && this->subscribeParams_ == nullptr && this->taskId_ == nullptr; };
    // mixLayoutParams Field Functions 
    bool hasMixLayoutParams() const { return this->mixLayoutParams_ != nullptr;};
    void deleteMixLayoutParams() { this->mixLayoutParams_ = nullptr;};
    inline const UpdateRtcCloudRecordingRequest::MixLayoutParams & getMixLayoutParams() const { DARABONBA_PTR_GET_CONST(mixLayoutParams_, UpdateRtcCloudRecordingRequest::MixLayoutParams) };
    inline UpdateRtcCloudRecordingRequest::MixLayoutParams getMixLayoutParams() { DARABONBA_PTR_GET(mixLayoutParams_, UpdateRtcCloudRecordingRequest::MixLayoutParams) };
    inline UpdateRtcCloudRecordingRequest& setMixLayoutParams(const UpdateRtcCloudRecordingRequest::MixLayoutParams & mixLayoutParams) { DARABONBA_PTR_SET_VALUE(mixLayoutParams_, mixLayoutParams) };
    inline UpdateRtcCloudRecordingRequest& setMixLayoutParams(UpdateRtcCloudRecordingRequest::MixLayoutParams && mixLayoutParams) { DARABONBA_PTR_SET_RVALUE(mixLayoutParams_, mixLayoutParams) };


    // subscribeParams Field Functions 
    bool hasSubscribeParams() const { return this->subscribeParams_ != nullptr;};
    void deleteSubscribeParams() { this->subscribeParams_ = nullptr;};
    inline const UpdateRtcCloudRecordingRequest::SubscribeParams & getSubscribeParams() const { DARABONBA_PTR_GET_CONST(subscribeParams_, UpdateRtcCloudRecordingRequest::SubscribeParams) };
    inline UpdateRtcCloudRecordingRequest::SubscribeParams getSubscribeParams() { DARABONBA_PTR_GET(subscribeParams_, UpdateRtcCloudRecordingRequest::SubscribeParams) };
    inline UpdateRtcCloudRecordingRequest& setSubscribeParams(const UpdateRtcCloudRecordingRequest::SubscribeParams & subscribeParams) { DARABONBA_PTR_SET_VALUE(subscribeParams_, subscribeParams) };
    inline UpdateRtcCloudRecordingRequest& setSubscribeParams(UpdateRtcCloudRecordingRequest::SubscribeParams && subscribeParams) { DARABONBA_PTR_SET_RVALUE(subscribeParams_, subscribeParams) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateRtcCloudRecordingRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The updated layout parameters. Leave this parameter empty in single-stream recording mode. This parameter is required in stream mixing recording mode when the transcoding output is not audio-only.
    shared_ptr<UpdateRtcCloudRecordingRequest::MixLayoutParams> mixLayoutParams_ {};
    // The updated subscription parameters.
    // 
    // This parameter is required.
    shared_ptr<UpdateRtcCloudRecordingRequest::SubscribeParams> subscribeParams_ {};
    // The task ID. This ID is returned by StartRtcCloudRecording. Only tasks in the running or abnormal state can be updated.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
