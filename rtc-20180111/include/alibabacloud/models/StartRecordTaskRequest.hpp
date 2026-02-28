// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRECORDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTRECORDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartRecordTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRecordTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(CropMode, cropMode_);
      DARABONBA_PTR_TO_JSON(LayoutIds, layoutIds_);
      DARABONBA_PTR_TO_JSON(MediaEncode, mediaEncode_);
      DARABONBA_PTR_TO_JSON(MixMode, mixMode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StreamType, streamType_);
      DARABONBA_PTR_TO_JSON(SubSpecAudioUsers, subSpecAudioUsers_);
      DARABONBA_PTR_TO_JSON(SubSpecCameraUsers, subSpecCameraUsers_);
      DARABONBA_PTR_TO_JSON(SubSpecShareScreenUsers, subSpecShareScreenUsers_);
      DARABONBA_PTR_TO_JSON(SubSpecUsers, subSpecUsers_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskProfile, taskProfile_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(UnsubSpecAudioUsers, unsubSpecAudioUsers_);
      DARABONBA_PTR_TO_JSON(UnsubSpecCameraUsers, unsubSpecCameraUsers_);
      DARABONBA_PTR_TO_JSON(UnsubSpecShareScreenUsers, unsubSpecShareScreenUsers_);
      DARABONBA_PTR_TO_JSON(UserPanes, userPanes_);
    };
    friend void from_json(const Darabonba::Json& j, StartRecordTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(CropMode, cropMode_);
      DARABONBA_PTR_FROM_JSON(LayoutIds, layoutIds_);
      DARABONBA_PTR_FROM_JSON(MediaEncode, mediaEncode_);
      DARABONBA_PTR_FROM_JSON(MixMode, mixMode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
      DARABONBA_PTR_FROM_JSON(SubSpecAudioUsers, subSpecAudioUsers_);
      DARABONBA_PTR_FROM_JSON(SubSpecCameraUsers, subSpecCameraUsers_);
      DARABONBA_PTR_FROM_JSON(SubSpecShareScreenUsers, subSpecShareScreenUsers_);
      DARABONBA_PTR_FROM_JSON(SubSpecUsers, subSpecUsers_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskProfile, taskProfile_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(UnsubSpecAudioUsers, unsubSpecAudioUsers_);
      DARABONBA_PTR_FROM_JSON(UnsubSpecCameraUsers, unsubSpecCameraUsers_);
      DARABONBA_PTR_FROM_JSON(UnsubSpecShareScreenUsers, unsubSpecShareScreenUsers_);
      DARABONBA_PTR_FROM_JSON(UserPanes, userPanes_);
    };
    StartRecordTaskRequest() = default ;
    StartRecordTaskRequest(const StartRecordTaskRequest &) = default ;
    StartRecordTaskRequest(StartRecordTaskRequest &&) = default ;
    StartRecordTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRecordTaskRequest() = default ;
    StartRecordTaskRequest& operator=(const StartRecordTaskRequest &) = default ;
    StartRecordTaskRequest& operator=(StartRecordTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserPanes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserPanes& obj) { 
        DARABONBA_PTR_TO_JSON(Images, images_);
        DARABONBA_PTR_TO_JSON(PaneId, paneId_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(Texts, texts_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, UserPanes& obj) { 
        DARABONBA_PTR_FROM_JSON(Images, images_);
        DARABONBA_PTR_FROM_JSON(PaneId, paneId_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(Texts, texts_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
      class Texts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Texts& obj) { 
          DARABONBA_PTR_TO_JSON(FontColor, fontColor_);
          DARABONBA_PTR_TO_JSON(FontSize, fontSize_);
          DARABONBA_PTR_TO_JSON(FontType, fontType_);
          DARABONBA_PTR_TO_JSON(Text, text_);
          DARABONBA_PTR_TO_JSON(X, x_);
          DARABONBA_PTR_TO_JSON(Y, y_);
          DARABONBA_PTR_TO_JSON(ZOrder, ZOrder_);
        };
        friend void from_json(const Darabonba::Json& j, Texts& obj) { 
          DARABONBA_PTR_FROM_JSON(FontColor, fontColor_);
          DARABONBA_PTR_FROM_JSON(FontSize, fontSize_);
          DARABONBA_PTR_FROM_JSON(FontType, fontType_);
          DARABONBA_PTR_FROM_JSON(Text, text_);
          DARABONBA_PTR_FROM_JSON(X, x_);
          DARABONBA_PTR_FROM_JSON(Y, y_);
          DARABONBA_PTR_FROM_JSON(ZOrder, ZOrder_);
        };
        Texts() = default ;
        Texts(const Texts &) = default ;
        Texts(Texts &&) = default ;
        Texts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Texts() = default ;
        Texts& operator=(const Texts &) = default ;
        Texts& operator=(Texts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fontColor_ == nullptr
        && this->fontSize_ == nullptr && this->fontType_ == nullptr && this->text_ == nullptr && this->x_ == nullptr && this->y_ == nullptr
        && this->ZOrder_ == nullptr; };
        // fontColor Field Functions 
        bool hasFontColor() const { return this->fontColor_ != nullptr;};
        void deleteFontColor() { this->fontColor_ = nullptr;};
        inline int32_t getFontColor() const { DARABONBA_PTR_GET_DEFAULT(fontColor_, 0) };
        inline Texts& setFontColor(int32_t fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };


        // fontSize Field Functions 
        bool hasFontSize() const { return this->fontSize_ != nullptr;};
        void deleteFontSize() { this->fontSize_ = nullptr;};
        inline int32_t getFontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, 0) };
        inline Texts& setFontSize(int32_t fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


        // fontType Field Functions 
        bool hasFontType() const { return this->fontType_ != nullptr;};
        void deleteFontType() { this->fontType_ = nullptr;};
        inline int32_t getFontType() const { DARABONBA_PTR_GET_DEFAULT(fontType_, 0) };
        inline Texts& setFontType(int32_t fontType) { DARABONBA_PTR_SET_VALUE(fontType_, fontType) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Texts& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // x Field Functions 
        bool hasX() const { return this->x_ != nullptr;};
        void deleteX() { this->x_ = nullptr;};
        inline float getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
        inline Texts& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


        // y Field Functions 
        bool hasY() const { return this->y_ != nullptr;};
        void deleteY() { this->y_ = nullptr;};
        inline float getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
        inline Texts& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


        // ZOrder Field Functions 
        bool hasZOrder() const { return this->ZOrder_ != nullptr;};
        void deleteZOrder() { this->ZOrder_ = nullptr;};
        inline int32_t getZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, 0) };
        inline Texts& setZOrder(int32_t ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


      protected:
        shared_ptr<int32_t> fontColor_ {};
        shared_ptr<int32_t> fontSize_ {};
        shared_ptr<int32_t> fontType_ {};
        shared_ptr<string> text_ {};
        shared_ptr<float> x_ {};
        shared_ptr<float> y_ {};
        shared_ptr<int32_t> ZOrder_ {};
      };

      class Images : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Images& obj) { 
          DARABONBA_PTR_TO_JSON(Display, display_);
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(Url, url_);
          DARABONBA_PTR_TO_JSON(Width, width_);
          DARABONBA_PTR_TO_JSON(X, x_);
          DARABONBA_PTR_TO_JSON(Y, y_);
          DARABONBA_PTR_TO_JSON(ZOrder, ZOrder_);
        };
        friend void from_json(const Darabonba::Json& j, Images& obj) { 
          DARABONBA_PTR_FROM_JSON(Display, display_);
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
          DARABONBA_PTR_FROM_JSON(X, x_);
          DARABONBA_PTR_FROM_JSON(Y, y_);
          DARABONBA_PTR_FROM_JSON(ZOrder, ZOrder_);
        };
        Images() = default ;
        Images(const Images &) = default ;
        Images(Images &&) = default ;
        Images(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Images() = default ;
        Images& operator=(const Images &) = default ;
        Images& operator=(Images &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->display_ == nullptr
        && this->height_ == nullptr && this->url_ == nullptr && this->width_ == nullptr && this->x_ == nullptr && this->y_ == nullptr
        && this->ZOrder_ == nullptr; };
        // display Field Functions 
        bool hasDisplay() const { return this->display_ != nullptr;};
        void deleteDisplay() { this->display_ = nullptr;};
        inline int32_t getDisplay() const { DARABONBA_PTR_GET_DEFAULT(display_, 0) };
        inline Images& setDisplay(int32_t display) { DARABONBA_PTR_SET_VALUE(display_, display) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline float getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
        inline Images& setHeight(float height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Images& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline float getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
        inline Images& setWidth(float width) { DARABONBA_PTR_SET_VALUE(width_, width) };


        // x Field Functions 
        bool hasX() const { return this->x_ != nullptr;};
        void deleteX() { this->x_ = nullptr;};
        inline float getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
        inline Images& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


        // y Field Functions 
        bool hasY() const { return this->y_ != nullptr;};
        void deleteY() { this->y_ = nullptr;};
        inline float getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
        inline Images& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


        // ZOrder Field Functions 
        bool hasZOrder() const { return this->ZOrder_ != nullptr;};
        void deleteZOrder() { this->ZOrder_ = nullptr;};
        inline int32_t getZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, 0) };
        inline Images& setZOrder(int32_t ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


      protected:
        shared_ptr<int32_t> display_ {};
        shared_ptr<float> height_ {};
        shared_ptr<string> url_ {};
        shared_ptr<float> width_ {};
        shared_ptr<float> x_ {};
        shared_ptr<float> y_ {};
        shared_ptr<int32_t> ZOrder_ {};
      };

      virtual bool empty() const override { return this->images_ == nullptr
        && this->paneId_ == nullptr && this->sourceType_ == nullptr && this->texts_ == nullptr && this->userId_ == nullptr; };
      // images Field Functions 
      bool hasImages() const { return this->images_ != nullptr;};
      void deleteImages() { this->images_ = nullptr;};
      inline const vector<UserPanes::Images> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<UserPanes::Images>) };
      inline vector<UserPanes::Images> getImages() { DARABONBA_PTR_GET(images_, vector<UserPanes::Images>) };
      inline UserPanes& setImages(const vector<UserPanes::Images> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
      inline UserPanes& setImages(vector<UserPanes::Images> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


      // paneId Field Functions 
      bool hasPaneId() const { return this->paneId_ != nullptr;};
      void deletePaneId() { this->paneId_ = nullptr;};
      inline int32_t getPaneId() const { DARABONBA_PTR_GET_DEFAULT(paneId_, 0) };
      inline UserPanes& setPaneId(int32_t paneId) { DARABONBA_PTR_SET_VALUE(paneId_, paneId) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline UserPanes& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // texts Field Functions 
      bool hasTexts() const { return this->texts_ != nullptr;};
      void deleteTexts() { this->texts_ = nullptr;};
      inline const vector<UserPanes::Texts> & getTexts() const { DARABONBA_PTR_GET_CONST(texts_, vector<UserPanes::Texts>) };
      inline vector<UserPanes::Texts> getTexts() { DARABONBA_PTR_GET(texts_, vector<UserPanes::Texts>) };
      inline UserPanes& setTexts(const vector<UserPanes::Texts> & texts) { DARABONBA_PTR_SET_VALUE(texts_, texts) };
      inline UserPanes& setTexts(vector<UserPanes::Texts> && texts) { DARABONBA_PTR_SET_RVALUE(texts_, texts) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline UserPanes& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<vector<UserPanes::Images>> images_ {};
      shared_ptr<int32_t> paneId_ {};
      shared_ptr<string> sourceType_ {};
      shared_ptr<vector<UserPanes::Texts>> texts_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->channelId_ == nullptr && this->cropMode_ == nullptr && this->layoutIds_ == nullptr && this->mediaEncode_ == nullptr && this->mixMode_ == nullptr
        && this->ownerId_ == nullptr && this->sourceType_ == nullptr && this->streamType_ == nullptr && this->subSpecAudioUsers_ == nullptr && this->subSpecCameraUsers_ == nullptr
        && this->subSpecShareScreenUsers_ == nullptr && this->subSpecUsers_ == nullptr && this->taskId_ == nullptr && this->taskProfile_ == nullptr && this->templateId_ == nullptr
        && this->unsubSpecAudioUsers_ == nullptr && this->unsubSpecCameraUsers_ == nullptr && this->unsubSpecShareScreenUsers_ == nullptr && this->userPanes_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline StartRecordTaskRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline StartRecordTaskRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // cropMode Field Functions 
    bool hasCropMode() const { return this->cropMode_ != nullptr;};
    void deleteCropMode() { this->cropMode_ = nullptr;};
    inline int64_t getCropMode() const { DARABONBA_PTR_GET_DEFAULT(cropMode_, 0L) };
    inline StartRecordTaskRequest& setCropMode(int64_t cropMode) { DARABONBA_PTR_SET_VALUE(cropMode_, cropMode) };


    // layoutIds Field Functions 
    bool hasLayoutIds() const { return this->layoutIds_ != nullptr;};
    void deleteLayoutIds() { this->layoutIds_ = nullptr;};
    inline const vector<int64_t> & getLayoutIds() const { DARABONBA_PTR_GET_CONST(layoutIds_, vector<int64_t>) };
    inline vector<int64_t> getLayoutIds() { DARABONBA_PTR_GET(layoutIds_, vector<int64_t>) };
    inline StartRecordTaskRequest& setLayoutIds(const vector<int64_t> & layoutIds) { DARABONBA_PTR_SET_VALUE(layoutIds_, layoutIds) };
    inline StartRecordTaskRequest& setLayoutIds(vector<int64_t> && layoutIds) { DARABONBA_PTR_SET_RVALUE(layoutIds_, layoutIds) };


    // mediaEncode Field Functions 
    bool hasMediaEncode() const { return this->mediaEncode_ != nullptr;};
    void deleteMediaEncode() { this->mediaEncode_ = nullptr;};
    inline int32_t getMediaEncode() const { DARABONBA_PTR_GET_DEFAULT(mediaEncode_, 0) };
    inline StartRecordTaskRequest& setMediaEncode(int32_t mediaEncode) { DARABONBA_PTR_SET_VALUE(mediaEncode_, mediaEncode) };


    // mixMode Field Functions 
    bool hasMixMode() const { return this->mixMode_ != nullptr;};
    void deleteMixMode() { this->mixMode_ = nullptr;};
    inline int32_t getMixMode() const { DARABONBA_PTR_GET_DEFAULT(mixMode_, 0) };
    inline StartRecordTaskRequest& setMixMode(int32_t mixMode) { DARABONBA_PTR_SET_VALUE(mixMode_, mixMode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline StartRecordTaskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline StartRecordTaskRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // streamType Field Functions 
    bool hasStreamType() const { return this->streamType_ != nullptr;};
    void deleteStreamType() { this->streamType_ = nullptr;};
    inline int32_t getStreamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, 0) };
    inline StartRecordTaskRequest& setStreamType(int32_t streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


    // subSpecAudioUsers Field Functions 
    bool hasSubSpecAudioUsers() const { return this->subSpecAudioUsers_ != nullptr;};
    void deleteSubSpecAudioUsers() { this->subSpecAudioUsers_ = nullptr;};
    inline const vector<string> & getSubSpecAudioUsers() const { DARABONBA_PTR_GET_CONST(subSpecAudioUsers_, vector<string>) };
    inline vector<string> getSubSpecAudioUsers() { DARABONBA_PTR_GET(subSpecAudioUsers_, vector<string>) };
    inline StartRecordTaskRequest& setSubSpecAudioUsers(const vector<string> & subSpecAudioUsers) { DARABONBA_PTR_SET_VALUE(subSpecAudioUsers_, subSpecAudioUsers) };
    inline StartRecordTaskRequest& setSubSpecAudioUsers(vector<string> && subSpecAudioUsers) { DARABONBA_PTR_SET_RVALUE(subSpecAudioUsers_, subSpecAudioUsers) };


    // subSpecCameraUsers Field Functions 
    bool hasSubSpecCameraUsers() const { return this->subSpecCameraUsers_ != nullptr;};
    void deleteSubSpecCameraUsers() { this->subSpecCameraUsers_ = nullptr;};
    inline const vector<string> & getSubSpecCameraUsers() const { DARABONBA_PTR_GET_CONST(subSpecCameraUsers_, vector<string>) };
    inline vector<string> getSubSpecCameraUsers() { DARABONBA_PTR_GET(subSpecCameraUsers_, vector<string>) };
    inline StartRecordTaskRequest& setSubSpecCameraUsers(const vector<string> & subSpecCameraUsers) { DARABONBA_PTR_SET_VALUE(subSpecCameraUsers_, subSpecCameraUsers) };
    inline StartRecordTaskRequest& setSubSpecCameraUsers(vector<string> && subSpecCameraUsers) { DARABONBA_PTR_SET_RVALUE(subSpecCameraUsers_, subSpecCameraUsers) };


    // subSpecShareScreenUsers Field Functions 
    bool hasSubSpecShareScreenUsers() const { return this->subSpecShareScreenUsers_ != nullptr;};
    void deleteSubSpecShareScreenUsers() { this->subSpecShareScreenUsers_ = nullptr;};
    inline const vector<string> & getSubSpecShareScreenUsers() const { DARABONBA_PTR_GET_CONST(subSpecShareScreenUsers_, vector<string>) };
    inline vector<string> getSubSpecShareScreenUsers() { DARABONBA_PTR_GET(subSpecShareScreenUsers_, vector<string>) };
    inline StartRecordTaskRequest& setSubSpecShareScreenUsers(const vector<string> & subSpecShareScreenUsers) { DARABONBA_PTR_SET_VALUE(subSpecShareScreenUsers_, subSpecShareScreenUsers) };
    inline StartRecordTaskRequest& setSubSpecShareScreenUsers(vector<string> && subSpecShareScreenUsers) { DARABONBA_PTR_SET_RVALUE(subSpecShareScreenUsers_, subSpecShareScreenUsers) };


    // subSpecUsers Field Functions 
    bool hasSubSpecUsers() const { return this->subSpecUsers_ != nullptr;};
    void deleteSubSpecUsers() { this->subSpecUsers_ = nullptr;};
    inline const vector<string> & getSubSpecUsers() const { DARABONBA_PTR_GET_CONST(subSpecUsers_, vector<string>) };
    inline vector<string> getSubSpecUsers() { DARABONBA_PTR_GET(subSpecUsers_, vector<string>) };
    inline StartRecordTaskRequest& setSubSpecUsers(const vector<string> & subSpecUsers) { DARABONBA_PTR_SET_VALUE(subSpecUsers_, subSpecUsers) };
    inline StartRecordTaskRequest& setSubSpecUsers(vector<string> && subSpecUsers) { DARABONBA_PTR_SET_RVALUE(subSpecUsers_, subSpecUsers) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline StartRecordTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskProfile Field Functions 
    bool hasTaskProfile() const { return this->taskProfile_ != nullptr;};
    void deleteTaskProfile() { this->taskProfile_ = nullptr;};
    inline string getTaskProfile() const { DARABONBA_PTR_GET_DEFAULT(taskProfile_, "") };
    inline StartRecordTaskRequest& setTaskProfile(string taskProfile) { DARABONBA_PTR_SET_VALUE(taskProfile_, taskProfile) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline StartRecordTaskRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // unsubSpecAudioUsers Field Functions 
    bool hasUnsubSpecAudioUsers() const { return this->unsubSpecAudioUsers_ != nullptr;};
    void deleteUnsubSpecAudioUsers() { this->unsubSpecAudioUsers_ = nullptr;};
    inline const vector<string> & getUnsubSpecAudioUsers() const { DARABONBA_PTR_GET_CONST(unsubSpecAudioUsers_, vector<string>) };
    inline vector<string> getUnsubSpecAudioUsers() { DARABONBA_PTR_GET(unsubSpecAudioUsers_, vector<string>) };
    inline StartRecordTaskRequest& setUnsubSpecAudioUsers(const vector<string> & unsubSpecAudioUsers) { DARABONBA_PTR_SET_VALUE(unsubSpecAudioUsers_, unsubSpecAudioUsers) };
    inline StartRecordTaskRequest& setUnsubSpecAudioUsers(vector<string> && unsubSpecAudioUsers) { DARABONBA_PTR_SET_RVALUE(unsubSpecAudioUsers_, unsubSpecAudioUsers) };


    // unsubSpecCameraUsers Field Functions 
    bool hasUnsubSpecCameraUsers() const { return this->unsubSpecCameraUsers_ != nullptr;};
    void deleteUnsubSpecCameraUsers() { this->unsubSpecCameraUsers_ = nullptr;};
    inline const vector<string> & getUnsubSpecCameraUsers() const { DARABONBA_PTR_GET_CONST(unsubSpecCameraUsers_, vector<string>) };
    inline vector<string> getUnsubSpecCameraUsers() { DARABONBA_PTR_GET(unsubSpecCameraUsers_, vector<string>) };
    inline StartRecordTaskRequest& setUnsubSpecCameraUsers(const vector<string> & unsubSpecCameraUsers) { DARABONBA_PTR_SET_VALUE(unsubSpecCameraUsers_, unsubSpecCameraUsers) };
    inline StartRecordTaskRequest& setUnsubSpecCameraUsers(vector<string> && unsubSpecCameraUsers) { DARABONBA_PTR_SET_RVALUE(unsubSpecCameraUsers_, unsubSpecCameraUsers) };


    // unsubSpecShareScreenUsers Field Functions 
    bool hasUnsubSpecShareScreenUsers() const { return this->unsubSpecShareScreenUsers_ != nullptr;};
    void deleteUnsubSpecShareScreenUsers() { this->unsubSpecShareScreenUsers_ = nullptr;};
    inline const vector<string> & getUnsubSpecShareScreenUsers() const { DARABONBA_PTR_GET_CONST(unsubSpecShareScreenUsers_, vector<string>) };
    inline vector<string> getUnsubSpecShareScreenUsers() { DARABONBA_PTR_GET(unsubSpecShareScreenUsers_, vector<string>) };
    inline StartRecordTaskRequest& setUnsubSpecShareScreenUsers(const vector<string> & unsubSpecShareScreenUsers) { DARABONBA_PTR_SET_VALUE(unsubSpecShareScreenUsers_, unsubSpecShareScreenUsers) };
    inline StartRecordTaskRequest& setUnsubSpecShareScreenUsers(vector<string> && unsubSpecShareScreenUsers) { DARABONBA_PTR_SET_RVALUE(unsubSpecShareScreenUsers_, unsubSpecShareScreenUsers) };


    // userPanes Field Functions 
    bool hasUserPanes() const { return this->userPanes_ != nullptr;};
    void deleteUserPanes() { this->userPanes_ = nullptr;};
    inline const vector<StartRecordTaskRequest::UserPanes> & getUserPanes() const { DARABONBA_PTR_GET_CONST(userPanes_, vector<StartRecordTaskRequest::UserPanes>) };
    inline vector<StartRecordTaskRequest::UserPanes> getUserPanes() { DARABONBA_PTR_GET(userPanes_, vector<StartRecordTaskRequest::UserPanes>) };
    inline StartRecordTaskRequest& setUserPanes(const vector<StartRecordTaskRequest::UserPanes> & userPanes) { DARABONBA_PTR_SET_VALUE(userPanes_, userPanes) };
    inline StartRecordTaskRequest& setUserPanes(vector<StartRecordTaskRequest::UserPanes> && userPanes) { DARABONBA_PTR_SET_RVALUE(userPanes_, userPanes) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    shared_ptr<int64_t> cropMode_ {};
    shared_ptr<vector<int64_t>> layoutIds_ {};
    shared_ptr<int32_t> mediaEncode_ {};
    shared_ptr<int32_t> mixMode_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> sourceType_ {};
    shared_ptr<int32_t> streamType_ {};
    shared_ptr<vector<string>> subSpecAudioUsers_ {};
    shared_ptr<vector<string>> subSpecCameraUsers_ {};
    shared_ptr<vector<string>> subSpecShareScreenUsers_ {};
    shared_ptr<vector<string>> subSpecUsers_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    shared_ptr<string> taskProfile_ {};
    // This parameter is required.
    shared_ptr<string> templateId_ {};
    shared_ptr<vector<string>> unsubSpecAudioUsers_ {};
    shared_ptr<vector<string>> unsubSpecCameraUsers_ {};
    shared_ptr<vector<string>> unsubSpecShareScreenUsers_ {};
    shared_ptr<vector<StartRecordTaskRequest::UserPanes>> userPanes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
