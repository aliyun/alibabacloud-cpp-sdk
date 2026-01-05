// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTUDIOLAYOUTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTUDIOLAYOUTSRESPONSEBODY_HPP_
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
  class DescribeStudioLayoutsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStudioLayoutsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StudioLayouts, studioLayouts_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStudioLayoutsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StudioLayouts, studioLayouts_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeStudioLayoutsResponseBody() = default ;
    DescribeStudioLayoutsResponseBody(const DescribeStudioLayoutsResponseBody &) = default ;
    DescribeStudioLayoutsResponseBody(DescribeStudioLayoutsResponseBody &&) = default ;
    DescribeStudioLayoutsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStudioLayoutsResponseBody() = default ;
    DescribeStudioLayoutsResponseBody& operator=(const DescribeStudioLayoutsResponseBody &) = default ;
    DescribeStudioLayoutsResponseBody& operator=(DescribeStudioLayoutsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StudioLayouts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StudioLayouts& obj) { 
        DARABONBA_PTR_TO_JSON(BgImageConfig, bgImageConfig_);
        DARABONBA_PTR_TO_JSON(CommonConfig, commonConfig_);
        DARABONBA_PTR_TO_JSON(LayerOrderConfigList, layerOrderConfigList_);
        DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
        DARABONBA_PTR_TO_JSON(LayoutName, layoutName_);
        DARABONBA_PTR_TO_JSON(LayoutType, layoutType_);
        DARABONBA_PTR_TO_JSON(MediaInputConfigList, mediaInputConfigList_);
        DARABONBA_PTR_TO_JSON(ScreenInputConfigList, screenInputConfigList_);
      };
      friend void from_json(const Darabonba::Json& j, StudioLayouts& obj) { 
        DARABONBA_PTR_FROM_JSON(BgImageConfig, bgImageConfig_);
        DARABONBA_PTR_FROM_JSON(CommonConfig, commonConfig_);
        DARABONBA_PTR_FROM_JSON(LayerOrderConfigList, layerOrderConfigList_);
        DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
        DARABONBA_PTR_FROM_JSON(LayoutName, layoutName_);
        DARABONBA_PTR_FROM_JSON(LayoutType, layoutType_);
        DARABONBA_PTR_FROM_JSON(MediaInputConfigList, mediaInputConfigList_);
        DARABONBA_PTR_FROM_JSON(ScreenInputConfigList, screenInputConfigList_);
      };
      StudioLayouts() = default ;
      StudioLayouts(const StudioLayouts &) = default ;
      StudioLayouts(StudioLayouts &&) = default ;
      StudioLayouts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StudioLayouts() = default ;
      StudioLayouts& operator=(const StudioLayouts &) = default ;
      StudioLayouts& operator=(StudioLayouts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ScreenInputConfigList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScreenInputConfigList& obj) { 
          DARABONBA_PTR_TO_JSON(AudioConfig, audioConfig_);
          DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
          DARABONBA_PTR_TO_JSON(Color, color_);
          DARABONBA_PTR_TO_JSON(HeightNormalized, heightNormalized_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Index, index_);
          DARABONBA_PTR_TO_JSON(OnlyAudio, onlyAudio_);
          DARABONBA_PTR_TO_JSON(PortraitType, portraitType_);
          DARABONBA_PTR_TO_JSON(PositionX, positionX_);
          DARABONBA_PTR_TO_JSON(PositionY, positionY_);
          DARABONBA_PTR_TO_JSON(VideoResourceId, videoResourceId_);
        };
        friend void from_json(const Darabonba::Json& j, ScreenInputConfigList& obj) { 
          DARABONBA_PTR_FROM_JSON(AudioConfig, audioConfig_);
          DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
          DARABONBA_PTR_FROM_JSON(Color, color_);
          DARABONBA_PTR_FROM_JSON(HeightNormalized, heightNormalized_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Index, index_);
          DARABONBA_PTR_FROM_JSON(OnlyAudio, onlyAudio_);
          DARABONBA_PTR_FROM_JSON(PortraitType, portraitType_);
          DARABONBA_PTR_FROM_JSON(PositionX, positionX_);
          DARABONBA_PTR_FROM_JSON(PositionY, positionY_);
          DARABONBA_PTR_FROM_JSON(VideoResourceId, videoResourceId_);
        };
        ScreenInputConfigList() = default ;
        ScreenInputConfigList(const ScreenInputConfigList &) = default ;
        ScreenInputConfigList(ScreenInputConfigList &&) = default ;
        ScreenInputConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScreenInputConfigList() = default ;
        ScreenInputConfigList& operator=(const ScreenInputConfigList &) = default ;
        ScreenInputConfigList& operator=(ScreenInputConfigList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AudioConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AudioConfig& obj) { 
            DARABONBA_PTR_TO_JSON(ValidChannel, validChannel_);
            DARABONBA_PTR_TO_JSON(VolumeRate, volumeRate_);
          };
          friend void from_json(const Darabonba::Json& j, AudioConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(ValidChannel, validChannel_);
            DARABONBA_PTR_FROM_JSON(VolumeRate, volumeRate_);
          };
          AudioConfig() = default ;
          AudioConfig(const AudioConfig &) = default ;
          AudioConfig(AudioConfig &&) = default ;
          AudioConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AudioConfig() = default ;
          AudioConfig& operator=(const AudioConfig &) = default ;
          AudioConfig& operator=(AudioConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->validChannel_ == nullptr
        && this->volumeRate_ == nullptr; };
          // validChannel Field Functions 
          bool hasValidChannel() const { return this->validChannel_ != nullptr;};
          void deleteValidChannel() { this->validChannel_ = nullptr;};
          inline string getValidChannel() const { DARABONBA_PTR_GET_DEFAULT(validChannel_, "") };
          inline AudioConfig& setValidChannel(string validChannel) { DARABONBA_PTR_SET_VALUE(validChannel_, validChannel) };


          // volumeRate Field Functions 
          bool hasVolumeRate() const { return this->volumeRate_ != nullptr;};
          void deleteVolumeRate() { this->volumeRate_ = nullptr;};
          inline float getVolumeRate() const { DARABONBA_PTR_GET_DEFAULT(volumeRate_, 0.0) };
          inline AudioConfig& setVolumeRate(float volumeRate) { DARABONBA_PTR_SET_VALUE(volumeRate_, volumeRate) };


        protected:
          // The corresponding channel.
          shared_ptr<string> validChannel_ {};
          // The volume.
          shared_ptr<float> volumeRate_ {};
        };

        virtual bool empty() const override { return this->audioConfig_ == nullptr
        && this->channelId_ == nullptr && this->color_ == nullptr && this->heightNormalized_ == nullptr && this->id_ == nullptr && this->index_ == nullptr
        && this->onlyAudio_ == nullptr && this->portraitType_ == nullptr && this->positionX_ == nullptr && this->positionY_ == nullptr && this->videoResourceId_ == nullptr; };
        // audioConfig Field Functions 
        bool hasAudioConfig() const { return this->audioConfig_ != nullptr;};
        void deleteAudioConfig() { this->audioConfig_ = nullptr;};
        inline const ScreenInputConfigList::AudioConfig & getAudioConfig() const { DARABONBA_PTR_GET_CONST(audioConfig_, ScreenInputConfigList::AudioConfig) };
        inline ScreenInputConfigList::AudioConfig getAudioConfig() { DARABONBA_PTR_GET(audioConfig_, ScreenInputConfigList::AudioConfig) };
        inline ScreenInputConfigList& setAudioConfig(const ScreenInputConfigList::AudioConfig & audioConfig) { DARABONBA_PTR_SET_VALUE(audioConfig_, audioConfig) };
        inline ScreenInputConfigList& setAudioConfig(ScreenInputConfigList::AudioConfig && audioConfig) { DARABONBA_PTR_SET_RVALUE(audioConfig_, audioConfig) };


        // channelId Field Functions 
        bool hasChannelId() const { return this->channelId_ != nullptr;};
        void deleteChannelId() { this->channelId_ = nullptr;};
        inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
        inline ScreenInputConfigList& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


        // color Field Functions 
        bool hasColor() const { return this->color_ != nullptr;};
        void deleteColor() { this->color_ = nullptr;};
        inline string getColor() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
        inline ScreenInputConfigList& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


        // heightNormalized Field Functions 
        bool hasHeightNormalized() const { return this->heightNormalized_ != nullptr;};
        void deleteHeightNormalized() { this->heightNormalized_ = nullptr;};
        inline float getHeightNormalized() const { DARABONBA_PTR_GET_DEFAULT(heightNormalized_, 0.0) };
        inline ScreenInputConfigList& setHeightNormalized(float heightNormalized) { DARABONBA_PTR_SET_VALUE(heightNormalized_, heightNormalized) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline ScreenInputConfigList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // index Field Functions 
        bool hasIndex() const { return this->index_ != nullptr;};
        void deleteIndex() { this->index_ = nullptr;};
        inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
        inline ScreenInputConfigList& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


        // onlyAudio Field Functions 
        bool hasOnlyAudio() const { return this->onlyAudio_ != nullptr;};
        void deleteOnlyAudio() { this->onlyAudio_ = nullptr;};
        inline bool getOnlyAudio() const { DARABONBA_PTR_GET_DEFAULT(onlyAudio_, false) };
        inline ScreenInputConfigList& setOnlyAudio(bool onlyAudio) { DARABONBA_PTR_SET_VALUE(onlyAudio_, onlyAudio) };


        // portraitType Field Functions 
        bool hasPortraitType() const { return this->portraitType_ != nullptr;};
        void deletePortraitType() { this->portraitType_ = nullptr;};
        inline int32_t getPortraitType() const { DARABONBA_PTR_GET_DEFAULT(portraitType_, 0) };
        inline ScreenInputConfigList& setPortraitType(int32_t portraitType) { DARABONBA_PTR_SET_VALUE(portraitType_, portraitType) };


        // positionX Field Functions 
        bool hasPositionX() const { return this->positionX_ != nullptr;};
        void deletePositionX() { this->positionX_ = nullptr;};
        inline string getPositionX() const { DARABONBA_PTR_GET_DEFAULT(positionX_, "") };
        inline ScreenInputConfigList& setPositionX(string positionX) { DARABONBA_PTR_SET_VALUE(positionX_, positionX) };


        // positionY Field Functions 
        bool hasPositionY() const { return this->positionY_ != nullptr;};
        void deletePositionY() { this->positionY_ = nullptr;};
        inline string getPositionY() const { DARABONBA_PTR_GET_DEFAULT(positionY_, "") };
        inline ScreenInputConfigList& setPositionY(string positionY) { DARABONBA_PTR_SET_VALUE(positionY_, positionY) };


        // videoResourceId Field Functions 
        bool hasVideoResourceId() const { return this->videoResourceId_ != nullptr;};
        void deleteVideoResourceId() { this->videoResourceId_ = nullptr;};
        inline string getVideoResourceId() const { DARABONBA_PTR_GET_DEFAULT(videoResourceId_, "") };
        inline ScreenInputConfigList& setVideoResourceId(string videoResourceId) { DARABONBA_PTR_SET_VALUE(videoResourceId_, videoResourceId) };


      protected:
        // The audio configurations.
        shared_ptr<ScreenInputConfigList::AudioConfig> audioConfig_ {};
        // The ID of the channel that is bound to the video resource.
        shared_ptr<string> channelId_ {};
        // The color gamut for chroma key. Valid values:
        // 
        // *   **blue**
        // *   **green**
        // *   **auto**: automatic recognition
        // *   **complex**: background replacement
        shared_ptr<string> color_ {};
        // The normalized value of the height. The value indicates the ratio of the height of the keyed portrait to the height of the background. Valid values: **0 to 1**.
        shared_ptr<float> heightNormalized_ {};
        // The unique ID of the chroma key source.
        shared_ptr<string> id_ {};
        // The sequence number of the chroma key source. This parameter is displayed on the frontend but not used in the operation logic.
        shared_ptr<int32_t> index_ {};
        // Indicates whether only audio exists.
        shared_ptr<bool> onlyAudio_ {};
        // The portrait type. Valid values:
        // 
        // *   **0**: half body
        // *   **1**: full body
        shared_ptr<int32_t> portraitType_ {};
        // The x-coordinate of the material. Valid values: **0 to 1**. The upper-left corner is used as the coordinate origin for the material.
        shared_ptr<string> positionX_ {};
        // The y-coordinate of the material. Valid values: **0 to 1**. The upper-left corner is used as the coordinate origin for the material.
        shared_ptr<string> positionY_ {};
        // The ID of the video resource.
        shared_ptr<string> videoResourceId_ {};
      };

      class MediaInputConfigList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MediaInputConfigList& obj) { 
          DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
          DARABONBA_PTR_TO_JSON(FillMode, fillMode_);
          DARABONBA_PTR_TO_JSON(HeightNormalized, heightNormalized_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ImageMaterialId, imageMaterialId_);
          DARABONBA_PTR_TO_JSON(Index, index_);
          DARABONBA_PTR_TO_JSON(PositionNormalized, positionNormalized_);
          DARABONBA_PTR_TO_JSON(PositionRefer, positionRefer_);
          DARABONBA_PTR_TO_JSON(VideoResourceId, videoResourceId_);
          DARABONBA_PTR_TO_JSON(WidthNormalized, widthNormalized_);
        };
        friend void from_json(const Darabonba::Json& j, MediaInputConfigList& obj) { 
          DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
          DARABONBA_PTR_FROM_JSON(FillMode, fillMode_);
          DARABONBA_PTR_FROM_JSON(HeightNormalized, heightNormalized_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ImageMaterialId, imageMaterialId_);
          DARABONBA_PTR_FROM_JSON(Index, index_);
          DARABONBA_PTR_FROM_JSON(PositionNormalized, positionNormalized_);
          DARABONBA_PTR_FROM_JSON(PositionRefer, positionRefer_);
          DARABONBA_PTR_FROM_JSON(VideoResourceId, videoResourceId_);
          DARABONBA_PTR_FROM_JSON(WidthNormalized, widthNormalized_);
        };
        MediaInputConfigList() = default ;
        MediaInputConfigList(const MediaInputConfigList &) = default ;
        MediaInputConfigList(MediaInputConfigList &&) = default ;
        MediaInputConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MediaInputConfigList() = default ;
        MediaInputConfigList& operator=(const MediaInputConfigList &) = default ;
        MediaInputConfigList& operator=(MediaInputConfigList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->channelId_ == nullptr
        && this->fillMode_ == nullptr && this->heightNormalized_ == nullptr && this->id_ == nullptr && this->imageMaterialId_ == nullptr && this->index_ == nullptr
        && this->positionNormalized_ == nullptr && this->positionRefer_ == nullptr && this->videoResourceId_ == nullptr && this->widthNormalized_ == nullptr; };
        // channelId Field Functions 
        bool hasChannelId() const { return this->channelId_ != nullptr;};
        void deleteChannelId() { this->channelId_ = nullptr;};
        inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
        inline MediaInputConfigList& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


        // fillMode Field Functions 
        bool hasFillMode() const { return this->fillMode_ != nullptr;};
        void deleteFillMode() { this->fillMode_ = nullptr;};
        inline string getFillMode() const { DARABONBA_PTR_GET_DEFAULT(fillMode_, "") };
        inline MediaInputConfigList& setFillMode(string fillMode) { DARABONBA_PTR_SET_VALUE(fillMode_, fillMode) };


        // heightNormalized Field Functions 
        bool hasHeightNormalized() const { return this->heightNormalized_ != nullptr;};
        void deleteHeightNormalized() { this->heightNormalized_ = nullptr;};
        inline float getHeightNormalized() const { DARABONBA_PTR_GET_DEFAULT(heightNormalized_, 0.0) };
        inline MediaInputConfigList& setHeightNormalized(float heightNormalized) { DARABONBA_PTR_SET_VALUE(heightNormalized_, heightNormalized) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline MediaInputConfigList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // imageMaterialId Field Functions 
        bool hasImageMaterialId() const { return this->imageMaterialId_ != nullptr;};
        void deleteImageMaterialId() { this->imageMaterialId_ = nullptr;};
        inline string getImageMaterialId() const { DARABONBA_PTR_GET_DEFAULT(imageMaterialId_, "") };
        inline MediaInputConfigList& setImageMaterialId(string imageMaterialId) { DARABONBA_PTR_SET_VALUE(imageMaterialId_, imageMaterialId) };


        // index Field Functions 
        bool hasIndex() const { return this->index_ != nullptr;};
        void deleteIndex() { this->index_ = nullptr;};
        inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
        inline MediaInputConfigList& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


        // positionNormalized Field Functions 
        bool hasPositionNormalized() const { return this->positionNormalized_ != nullptr;};
        void deletePositionNormalized() { this->positionNormalized_ = nullptr;};
        inline const vector<float> & getPositionNormalized() const { DARABONBA_PTR_GET_CONST(positionNormalized_, vector<float>) };
        inline vector<float> getPositionNormalized() { DARABONBA_PTR_GET(positionNormalized_, vector<float>) };
        inline MediaInputConfigList& setPositionNormalized(const vector<float> & positionNormalized) { DARABONBA_PTR_SET_VALUE(positionNormalized_, positionNormalized) };
        inline MediaInputConfigList& setPositionNormalized(vector<float> && positionNormalized) { DARABONBA_PTR_SET_RVALUE(positionNormalized_, positionNormalized) };


        // positionRefer Field Functions 
        bool hasPositionRefer() const { return this->positionRefer_ != nullptr;};
        void deletePositionRefer() { this->positionRefer_ = nullptr;};
        inline string getPositionRefer() const { DARABONBA_PTR_GET_DEFAULT(positionRefer_, "") };
        inline MediaInputConfigList& setPositionRefer(string positionRefer) { DARABONBA_PTR_SET_VALUE(positionRefer_, positionRefer) };


        // videoResourceId Field Functions 
        bool hasVideoResourceId() const { return this->videoResourceId_ != nullptr;};
        void deleteVideoResourceId() { this->videoResourceId_ = nullptr;};
        inline string getVideoResourceId() const { DARABONBA_PTR_GET_DEFAULT(videoResourceId_, "") };
        inline MediaInputConfigList& setVideoResourceId(string videoResourceId) { DARABONBA_PTR_SET_VALUE(videoResourceId_, videoResourceId) };


        // widthNormalized Field Functions 
        bool hasWidthNormalized() const { return this->widthNormalized_ != nullptr;};
        void deleteWidthNormalized() { this->widthNormalized_ = nullptr;};
        inline float getWidthNormalized() const { DARABONBA_PTR_GET_DEFAULT(widthNormalized_, 0.0) };
        inline MediaInputConfigList& setWidthNormalized(float widthNormalized) { DARABONBA_PTR_SET_VALUE(widthNormalized_, widthNormalized) };


      protected:
        // The ID of the channel that is bound to the video resource.
        shared_ptr<string> channelId_ {};
        // The fill type. Default value: none.
        shared_ptr<string> fillMode_ {};
        // The normalized value of the material height. The value indicates the ratio of the material height to the height of the background. Valid values: **0 to 1**.
        shared_ptr<float> heightNormalized_ {};
        // The unique ID of the multimedia material.
        shared_ptr<string> id_ {};
        // The ID of the image in ApsaraVideo VOD.
        shared_ptr<string> imageMaterialId_ {};
        // The sequence number of the multimedia material. This parameter is displayed on the frontend but not used in the operation logic.
        shared_ptr<int32_t> index_ {};
        // The normalized value of the position of the material, in the format of [unk][x,y][unk]. Valid values of x and y: **0 to 1**. For example, [unk][0.1,0.2][unk] indicates that the material is horizontally offset by 10% and vertically offset by 20% towards the upper-left corner.
        shared_ptr<vector<float>> positionNormalized_ {};
        // The coordinate origin for the material. Default value: topLeft. topLeft indicates that the upper-left corner is used as the coordinate origin.
        shared_ptr<string> positionRefer_ {};
        // The ID of the video resource.
        shared_ptr<string> videoResourceId_ {};
        // The normalized value of the material width. The value indicates the ratio of the material width to the width of the background. Valid values: **0 to 1**.
        shared_ptr<float> widthNormalized_ {};
      };

      class LayerOrderConfigList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LayerOrderConfigList& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, LayerOrderConfigList& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        LayerOrderConfigList() = default ;
        LayerOrderConfigList(const LayerOrderConfigList &) = default ;
        LayerOrderConfigList(LayerOrderConfigList &&) = default ;
        LayerOrderConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LayerOrderConfigList() = default ;
        LayerOrderConfigList& operator=(const LayerOrderConfigList &) = default ;
        LayerOrderConfigList& operator=(LayerOrderConfigList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->type_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline LayerOrderConfigList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline LayerOrderConfigList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The unique ID of the resource.
        shared_ptr<string> id_ {};
        // The type of the resource. Valid values:
        // 
        // *   **background**: background material
        // *   **media**: multimedia material
        shared_ptr<string> type_ {};
      };

      class CommonConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CommonConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
          DARABONBA_PTR_TO_JSON(VideoResourceId, videoResourceId_);
        };
        friend void from_json(const Darabonba::Json& j, CommonConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
          DARABONBA_PTR_FROM_JSON(VideoResourceId, videoResourceId_);
        };
        CommonConfig() = default ;
        CommonConfig(const CommonConfig &) = default ;
        CommonConfig(CommonConfig &&) = default ;
        CommonConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CommonConfig() = default ;
        CommonConfig& operator=(const CommonConfig &) = default ;
        CommonConfig& operator=(CommonConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->channelId_ == nullptr
        && this->videoResourceId_ == nullptr; };
        // channelId Field Functions 
        bool hasChannelId() const { return this->channelId_ != nullptr;};
        void deleteChannelId() { this->channelId_ = nullptr;};
        inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
        inline CommonConfig& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


        // videoResourceId Field Functions 
        bool hasVideoResourceId() const { return this->videoResourceId_ != nullptr;};
        void deleteVideoResourceId() { this->videoResourceId_ = nullptr;};
        inline string getVideoResourceId() const { DARABONBA_PTR_GET_DEFAULT(videoResourceId_, "") };
        inline CommonConfig& setVideoResourceId(string videoResourceId) { DARABONBA_PTR_SET_VALUE(videoResourceId_, videoResourceId) };


      protected:
        // The ID of the channel that is bound to the video resource.
        shared_ptr<string> channelId_ {};
        // The ID of the video resource.
        shared_ptr<string> videoResourceId_ {};
      };

      class BgImageConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BgImageConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_TO_JSON(LocationId, locationId_);
          DARABONBA_PTR_TO_JSON(MaterialId, materialId_);
        };
        friend void from_json(const Darabonba::Json& j, BgImageConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
          DARABONBA_PTR_FROM_JSON(LocationId, locationId_);
          DARABONBA_PTR_FROM_JSON(MaterialId, materialId_);
        };
        BgImageConfig() = default ;
        BgImageConfig(const BgImageConfig &) = default ;
        BgImageConfig(BgImageConfig &&) = default ;
        BgImageConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BgImageConfig() = default ;
        BgImageConfig& operator=(const BgImageConfig &) = default ;
        BgImageConfig& operator=(BgImageConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->imageUrl_ == nullptr && this->locationId_ == nullptr && this->materialId_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline BgImageConfig& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // imageUrl Field Functions 
        bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
        void deleteImageUrl() { this->imageUrl_ = nullptr;};
        inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
        inline BgImageConfig& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


        // locationId Field Functions 
        bool hasLocationId() const { return this->locationId_ != nullptr;};
        void deleteLocationId() { this->locationId_ = nullptr;};
        inline string getLocationId() const { DARABONBA_PTR_GET_DEFAULT(locationId_, "") };
        inline BgImageConfig& setLocationId(string locationId) { DARABONBA_PTR_SET_VALUE(locationId_, locationId) };


        // materialId Field Functions 
        bool hasMaterialId() const { return this->materialId_ != nullptr;};
        void deleteMaterialId() { this->materialId_ = nullptr;};
        inline string getMaterialId() const { DARABONBA_PTR_GET_DEFAULT(materialId_, "") };
        inline BgImageConfig& setMaterialId(string materialId) { DARABONBA_PTR_SET_VALUE(materialId_, materialId) };


      protected:
        // The unique ID of the material.
        shared_ptr<string> id_ {};
        // The URL of the material.
        shared_ptr<string> imageUrl_ {};
        // The position ID.
        shared_ptr<string> locationId_ {};
        // The ID of the material in ApsaraVideo VOD.
        shared_ptr<string> materialId_ {};
      };

      virtual bool empty() const override { return this->bgImageConfig_ == nullptr
        && this->commonConfig_ == nullptr && this->layerOrderConfigList_ == nullptr && this->layoutId_ == nullptr && this->layoutName_ == nullptr && this->layoutType_ == nullptr
        && this->mediaInputConfigList_ == nullptr && this->screenInputConfigList_ == nullptr; };
      // bgImageConfig Field Functions 
      bool hasBgImageConfig() const { return this->bgImageConfig_ != nullptr;};
      void deleteBgImageConfig() { this->bgImageConfig_ = nullptr;};
      inline const StudioLayouts::BgImageConfig & getBgImageConfig() const { DARABONBA_PTR_GET_CONST(bgImageConfig_, StudioLayouts::BgImageConfig) };
      inline StudioLayouts::BgImageConfig getBgImageConfig() { DARABONBA_PTR_GET(bgImageConfig_, StudioLayouts::BgImageConfig) };
      inline StudioLayouts& setBgImageConfig(const StudioLayouts::BgImageConfig & bgImageConfig) { DARABONBA_PTR_SET_VALUE(bgImageConfig_, bgImageConfig) };
      inline StudioLayouts& setBgImageConfig(StudioLayouts::BgImageConfig && bgImageConfig) { DARABONBA_PTR_SET_RVALUE(bgImageConfig_, bgImageConfig) };


      // commonConfig Field Functions 
      bool hasCommonConfig() const { return this->commonConfig_ != nullptr;};
      void deleteCommonConfig() { this->commonConfig_ = nullptr;};
      inline const StudioLayouts::CommonConfig & getCommonConfig() const { DARABONBA_PTR_GET_CONST(commonConfig_, StudioLayouts::CommonConfig) };
      inline StudioLayouts::CommonConfig getCommonConfig() { DARABONBA_PTR_GET(commonConfig_, StudioLayouts::CommonConfig) };
      inline StudioLayouts& setCommonConfig(const StudioLayouts::CommonConfig & commonConfig) { DARABONBA_PTR_SET_VALUE(commonConfig_, commonConfig) };
      inline StudioLayouts& setCommonConfig(StudioLayouts::CommonConfig && commonConfig) { DARABONBA_PTR_SET_RVALUE(commonConfig_, commonConfig) };


      // layerOrderConfigList Field Functions 
      bool hasLayerOrderConfigList() const { return this->layerOrderConfigList_ != nullptr;};
      void deleteLayerOrderConfigList() { this->layerOrderConfigList_ = nullptr;};
      inline const vector<StudioLayouts::LayerOrderConfigList> & getLayerOrderConfigList() const { DARABONBA_PTR_GET_CONST(layerOrderConfigList_, vector<StudioLayouts::LayerOrderConfigList>) };
      inline vector<StudioLayouts::LayerOrderConfigList> getLayerOrderConfigList() { DARABONBA_PTR_GET(layerOrderConfigList_, vector<StudioLayouts::LayerOrderConfigList>) };
      inline StudioLayouts& setLayerOrderConfigList(const vector<StudioLayouts::LayerOrderConfigList> & layerOrderConfigList) { DARABONBA_PTR_SET_VALUE(layerOrderConfigList_, layerOrderConfigList) };
      inline StudioLayouts& setLayerOrderConfigList(vector<StudioLayouts::LayerOrderConfigList> && layerOrderConfigList) { DARABONBA_PTR_SET_RVALUE(layerOrderConfigList_, layerOrderConfigList) };


      // layoutId Field Functions 
      bool hasLayoutId() const { return this->layoutId_ != nullptr;};
      void deleteLayoutId() { this->layoutId_ = nullptr;};
      inline string getLayoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, "") };
      inline StudioLayouts& setLayoutId(string layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


      // layoutName Field Functions 
      bool hasLayoutName() const { return this->layoutName_ != nullptr;};
      void deleteLayoutName() { this->layoutName_ = nullptr;};
      inline string getLayoutName() const { DARABONBA_PTR_GET_DEFAULT(layoutName_, "") };
      inline StudioLayouts& setLayoutName(string layoutName) { DARABONBA_PTR_SET_VALUE(layoutName_, layoutName) };


      // layoutType Field Functions 
      bool hasLayoutType() const { return this->layoutType_ != nullptr;};
      void deleteLayoutType() { this->layoutType_ = nullptr;};
      inline string getLayoutType() const { DARABONBA_PTR_GET_DEFAULT(layoutType_, "") };
      inline StudioLayouts& setLayoutType(string layoutType) { DARABONBA_PTR_SET_VALUE(layoutType_, layoutType) };


      // mediaInputConfigList Field Functions 
      bool hasMediaInputConfigList() const { return this->mediaInputConfigList_ != nullptr;};
      void deleteMediaInputConfigList() { this->mediaInputConfigList_ = nullptr;};
      inline const vector<StudioLayouts::MediaInputConfigList> & getMediaInputConfigList() const { DARABONBA_PTR_GET_CONST(mediaInputConfigList_, vector<StudioLayouts::MediaInputConfigList>) };
      inline vector<StudioLayouts::MediaInputConfigList> getMediaInputConfigList() { DARABONBA_PTR_GET(mediaInputConfigList_, vector<StudioLayouts::MediaInputConfigList>) };
      inline StudioLayouts& setMediaInputConfigList(const vector<StudioLayouts::MediaInputConfigList> & mediaInputConfigList) { DARABONBA_PTR_SET_VALUE(mediaInputConfigList_, mediaInputConfigList) };
      inline StudioLayouts& setMediaInputConfigList(vector<StudioLayouts::MediaInputConfigList> && mediaInputConfigList) { DARABONBA_PTR_SET_RVALUE(mediaInputConfigList_, mediaInputConfigList) };


      // screenInputConfigList Field Functions 
      bool hasScreenInputConfigList() const { return this->screenInputConfigList_ != nullptr;};
      void deleteScreenInputConfigList() { this->screenInputConfigList_ = nullptr;};
      inline const vector<StudioLayouts::ScreenInputConfigList> & getScreenInputConfigList() const { DARABONBA_PTR_GET_CONST(screenInputConfigList_, vector<StudioLayouts::ScreenInputConfigList>) };
      inline vector<StudioLayouts::ScreenInputConfigList> getScreenInputConfigList() { DARABONBA_PTR_GET(screenInputConfigList_, vector<StudioLayouts::ScreenInputConfigList>) };
      inline StudioLayouts& setScreenInputConfigList(const vector<StudioLayouts::ScreenInputConfigList> & screenInputConfigList) { DARABONBA_PTR_SET_VALUE(screenInputConfigList_, screenInputConfigList) };
      inline StudioLayouts& setScreenInputConfigList(vector<StudioLayouts::ScreenInputConfigList> && screenInputConfigList) { DARABONBA_PTR_SET_RVALUE(screenInputConfigList_, screenInputConfigList) };


    protected:
      // The background material configurations.
      shared_ptr<StudioLayouts::BgImageConfig> bgImageConfig_ {};
      // The common layout configurations. This parameter is returned only for a common layout.
      shared_ptr<StudioLayouts::CommonConfig> commonConfig_ {};
      // The layer sorting configurations.
      shared_ptr<vector<StudioLayouts::LayerOrderConfigList>> layerOrderConfigList_ {};
      // The ID of the layout.
      shared_ptr<string> layoutId_ {};
      // The name of the layout.
      shared_ptr<string> layoutName_ {};
      // The type of the layout. Valid values:
      // 
      // *   **common**
      // *   **studio**
      shared_ptr<string> layoutType_ {};
      // The multimedia input configurations.
      shared_ptr<vector<StudioLayouts::MediaInputConfigList>> mediaInputConfigList_ {};
      // The input configurations for chroma key.
      shared_ptr<vector<StudioLayouts::ScreenInputConfigList>> screenInputConfigList_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->studioLayouts_ == nullptr && this->total_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStudioLayoutsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // studioLayouts Field Functions 
    bool hasStudioLayouts() const { return this->studioLayouts_ != nullptr;};
    void deleteStudioLayouts() { this->studioLayouts_ = nullptr;};
    inline const vector<DescribeStudioLayoutsResponseBody::StudioLayouts> & getStudioLayouts() const { DARABONBA_PTR_GET_CONST(studioLayouts_, vector<DescribeStudioLayoutsResponseBody::StudioLayouts>) };
    inline vector<DescribeStudioLayoutsResponseBody::StudioLayouts> getStudioLayouts() { DARABONBA_PTR_GET(studioLayouts_, vector<DescribeStudioLayoutsResponseBody::StudioLayouts>) };
    inline DescribeStudioLayoutsResponseBody& setStudioLayouts(const vector<DescribeStudioLayoutsResponseBody::StudioLayouts> & studioLayouts) { DARABONBA_PTR_SET_VALUE(studioLayouts_, studioLayouts) };
    inline DescribeStudioLayoutsResponseBody& setStudioLayouts(vector<DescribeStudioLayoutsResponseBody::StudioLayouts> && studioLayouts) { DARABONBA_PTR_SET_RVALUE(studioLayouts_, studioLayouts) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeStudioLayoutsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The layout information.
    shared_ptr<vector<DescribeStudioLayoutsResponseBody::StudioLayouts>> studioLayouts_ {};
    // The total number of layouts.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
