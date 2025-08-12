// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTUDIOLAYOUTSRESPONSEBODYSTUDIOLAYOUTSSCREENINPUTCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTUDIOLAYOUTSRESPONSEBODYSTUDIOLAYOUTSSCREENINPUTCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigListAudioConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList& obj) { 
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
    DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList() = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList(const DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList &) = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList(DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList &&) = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList() = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList& operator=(const DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList &) = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList& operator=(DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioConfig_ != nullptr
        && this->channelId_ != nullptr && this->color_ != nullptr && this->heightNormalized_ != nullptr && this->id_ != nullptr && this->index_ != nullptr
        && this->onlyAudio_ != nullptr && this->portraitType_ != nullptr && this->positionX_ != nullptr && this->positionY_ != nullptr && this->videoResourceId_ != nullptr; };
    // audioConfig Field Functions 
    bool hasAudioConfig() const { return this->audioConfig_ != nullptr;};
    void deleteAudioConfig() { this->audioConfig_ = nullptr;};
    inline const Models::DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigListAudioConfig & audioConfig() const { DARABONBA_PTR_GET_CONST(audioConfig_, Models::DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigListAudioConfig) };
    inline Models::DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigListAudioConfig audioConfig() { DARABONBA_PTR_GET(audioConfig_, Models::DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigListAudioConfig) };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList& setAudioConfig(const Models::DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigListAudioConfig & audioConfig) { DARABONBA_PTR_SET_VALUE(audioConfig_, audioConfig) };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList& setAudioConfig(Models::DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigListAudioConfig && audioConfig) { DARABONBA_PTR_SET_RVALUE(audioConfig_, audioConfig) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // color Field Functions 
    bool hasColor() const { return this->color_ != nullptr;};
    void deleteColor() { this->color_ = nullptr;};
    inline string color() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


    // heightNormalized Field Functions 
    bool hasHeightNormalized() const { return this->heightNormalized_ != nullptr;};
    void deleteHeightNormalized() { this->heightNormalized_ = nullptr;};
    inline float heightNormalized() const { DARABONBA_PTR_GET_DEFAULT(heightNormalized_, 0.0) };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList& setHeightNormalized(float heightNormalized) { DARABONBA_PTR_SET_VALUE(heightNormalized_, heightNormalized) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // onlyAudio Field Functions 
    bool hasOnlyAudio() const { return this->onlyAudio_ != nullptr;};
    void deleteOnlyAudio() { this->onlyAudio_ = nullptr;};
    inline bool onlyAudio() const { DARABONBA_PTR_GET_DEFAULT(onlyAudio_, false) };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList& setOnlyAudio(bool onlyAudio) { DARABONBA_PTR_SET_VALUE(onlyAudio_, onlyAudio) };


    // portraitType Field Functions 
    bool hasPortraitType() const { return this->portraitType_ != nullptr;};
    void deletePortraitType() { this->portraitType_ = nullptr;};
    inline int32_t portraitType() const { DARABONBA_PTR_GET_DEFAULT(portraitType_, 0) };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList& setPortraitType(int32_t portraitType) { DARABONBA_PTR_SET_VALUE(portraitType_, portraitType) };


    // positionX Field Functions 
    bool hasPositionX() const { return this->positionX_ != nullptr;};
    void deletePositionX() { this->positionX_ = nullptr;};
    inline string positionX() const { DARABONBA_PTR_GET_DEFAULT(positionX_, "") };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList& setPositionX(string positionX) { DARABONBA_PTR_SET_VALUE(positionX_, positionX) };


    // positionY Field Functions 
    bool hasPositionY() const { return this->positionY_ != nullptr;};
    void deletePositionY() { this->positionY_ = nullptr;};
    inline string positionY() const { DARABONBA_PTR_GET_DEFAULT(positionY_, "") };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList& setPositionY(string positionY) { DARABONBA_PTR_SET_VALUE(positionY_, positionY) };


    // videoResourceId Field Functions 
    bool hasVideoResourceId() const { return this->videoResourceId_ != nullptr;};
    void deleteVideoResourceId() { this->videoResourceId_ = nullptr;};
    inline string videoResourceId() const { DARABONBA_PTR_GET_DEFAULT(videoResourceId_, "") };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigList& setVideoResourceId(string videoResourceId) { DARABONBA_PTR_SET_VALUE(videoResourceId_, videoResourceId) };


  protected:
    // The audio configurations.
    std::shared_ptr<Models::DescribeStudioLayoutsResponseBodyStudioLayoutsScreenInputConfigListAudioConfig> audioConfig_ = nullptr;
    // The ID of the channel that is bound to the video resource.
    std::shared_ptr<string> channelId_ = nullptr;
    // The color gamut for chroma key. Valid values:
    // 
    // *   **blue**
    // *   **green**
    // *   **auto**: automatic recognition
    // *   **complex**: background replacement
    std::shared_ptr<string> color_ = nullptr;
    // The normalized value of the height. The value indicates the ratio of the height of the keyed portrait to the height of the background. Valid values: **0 to 1**.
    std::shared_ptr<float> heightNormalized_ = nullptr;
    // The unique ID of the chroma key source.
    std::shared_ptr<string> id_ = nullptr;
    // The sequence number of the chroma key source. This parameter is displayed on the frontend but not used in the operation logic.
    std::shared_ptr<int32_t> index_ = nullptr;
    // Indicates whether only audio exists.
    std::shared_ptr<bool> onlyAudio_ = nullptr;
    // The portrait type. Valid values:
    // 
    // *   **0**: half body
    // *   **1**: full body
    std::shared_ptr<int32_t> portraitType_ = nullptr;
    // The x-coordinate of the material. Valid values: **0 to 1**. The upper-left corner is used as the coordinate origin for the material.
    std::shared_ptr<string> positionX_ = nullptr;
    // The y-coordinate of the material. Valid values: **0 to 1**. The upper-left corner is used as the coordinate origin for the material.
    std::shared_ptr<string> positionY_ = nullptr;
    // The ID of the video resource.
    std::shared_ptr<string> videoResourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
