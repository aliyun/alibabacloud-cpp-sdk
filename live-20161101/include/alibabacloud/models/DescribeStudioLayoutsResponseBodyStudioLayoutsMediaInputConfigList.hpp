// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTUDIOLAYOUTSRESPONSEBODYSTUDIOLAYOUTSMEDIAINPUTCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTUDIOLAYOUTSRESPONSEBODYSTUDIOLAYOUTSMEDIAINPUTCONFIGLIST_HPP_
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
  class DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList& obj) { 
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
    DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList() = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList(const DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList &) = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList(DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList &&) = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList() = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList& operator=(const DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList &) = default ;
    DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList& operator=(DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelId_ == nullptr
        && return this->fillMode_ == nullptr && return this->heightNormalized_ == nullptr && return this->id_ == nullptr && return this->imageMaterialId_ == nullptr && return this->index_ == nullptr
        && return this->positionNormalized_ == nullptr && return this->positionRefer_ == nullptr && return this->videoResourceId_ == nullptr && return this->widthNormalized_ == nullptr; };
    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // fillMode Field Functions 
    bool hasFillMode() const { return this->fillMode_ != nullptr;};
    void deleteFillMode() { this->fillMode_ = nullptr;};
    inline string fillMode() const { DARABONBA_PTR_GET_DEFAULT(fillMode_, "") };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList& setFillMode(string fillMode) { DARABONBA_PTR_SET_VALUE(fillMode_, fillMode) };


    // heightNormalized Field Functions 
    bool hasHeightNormalized() const { return this->heightNormalized_ != nullptr;};
    void deleteHeightNormalized() { this->heightNormalized_ = nullptr;};
    inline float heightNormalized() const { DARABONBA_PTR_GET_DEFAULT(heightNormalized_, 0.0) };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList& setHeightNormalized(float heightNormalized) { DARABONBA_PTR_SET_VALUE(heightNormalized_, heightNormalized) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // imageMaterialId Field Functions 
    bool hasImageMaterialId() const { return this->imageMaterialId_ != nullptr;};
    void deleteImageMaterialId() { this->imageMaterialId_ = nullptr;};
    inline string imageMaterialId() const { DARABONBA_PTR_GET_DEFAULT(imageMaterialId_, "") };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList& setImageMaterialId(string imageMaterialId) { DARABONBA_PTR_SET_VALUE(imageMaterialId_, imageMaterialId) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // positionNormalized Field Functions 
    bool hasPositionNormalized() const { return this->positionNormalized_ != nullptr;};
    void deletePositionNormalized() { this->positionNormalized_ = nullptr;};
    inline const vector<float> & positionNormalized() const { DARABONBA_PTR_GET_CONST(positionNormalized_, vector<float>) };
    inline vector<float> positionNormalized() { DARABONBA_PTR_GET(positionNormalized_, vector<float>) };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList& setPositionNormalized(const vector<float> & positionNormalized) { DARABONBA_PTR_SET_VALUE(positionNormalized_, positionNormalized) };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList& setPositionNormalized(vector<float> && positionNormalized) { DARABONBA_PTR_SET_RVALUE(positionNormalized_, positionNormalized) };


    // positionRefer Field Functions 
    bool hasPositionRefer() const { return this->positionRefer_ != nullptr;};
    void deletePositionRefer() { this->positionRefer_ = nullptr;};
    inline string positionRefer() const { DARABONBA_PTR_GET_DEFAULT(positionRefer_, "") };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList& setPositionRefer(string positionRefer) { DARABONBA_PTR_SET_VALUE(positionRefer_, positionRefer) };


    // videoResourceId Field Functions 
    bool hasVideoResourceId() const { return this->videoResourceId_ != nullptr;};
    void deleteVideoResourceId() { this->videoResourceId_ = nullptr;};
    inline string videoResourceId() const { DARABONBA_PTR_GET_DEFAULT(videoResourceId_, "") };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList& setVideoResourceId(string videoResourceId) { DARABONBA_PTR_SET_VALUE(videoResourceId_, videoResourceId) };


    // widthNormalized Field Functions 
    bool hasWidthNormalized() const { return this->widthNormalized_ != nullptr;};
    void deleteWidthNormalized() { this->widthNormalized_ = nullptr;};
    inline float widthNormalized() const { DARABONBA_PTR_GET_DEFAULT(widthNormalized_, 0.0) };
    inline DescribeStudioLayoutsResponseBodyStudioLayoutsMediaInputConfigList& setWidthNormalized(float widthNormalized) { DARABONBA_PTR_SET_VALUE(widthNormalized_, widthNormalized) };


  protected:
    // The ID of the channel that is bound to the video resource.
    std::shared_ptr<string> channelId_ = nullptr;
    // The fill type. Default value: none.
    std::shared_ptr<string> fillMode_ = nullptr;
    // The normalized value of the material height. The value indicates the ratio of the material height to the height of the background. Valid values: **0 to 1**.
    std::shared_ptr<float> heightNormalized_ = nullptr;
    // The unique ID of the multimedia material.
    std::shared_ptr<string> id_ = nullptr;
    // The ID of the image in ApsaraVideo VOD.
    std::shared_ptr<string> imageMaterialId_ = nullptr;
    // The sequence number of the multimedia material. This parameter is displayed on the frontend but not used in the operation logic.
    std::shared_ptr<int32_t> index_ = nullptr;
    // The normalized value of the position of the material, in the format of [unk][x,y][unk]. Valid values of x and y: **0 to 1**. For example, [unk][0.1,0.2][unk] indicates that the material is horizontally offset by 10% and vertically offset by 20% towards the upper-left corner.
    std::shared_ptr<vector<float>> positionNormalized_ = nullptr;
    // The coordinate origin for the material. Default value: topLeft. topLeft indicates that the upper-left corner is used as the coordinate origin.
    std::shared_ptr<string> positionRefer_ = nullptr;
    // The ID of the video resource.
    std::shared_ptr<string> videoResourceId_ = nullptr;
    // The normalized value of the material width. The value indicates the ratio of the material width to the width of the background. Valid values: **0 to 1**.
    std::shared_ptr<float> widthNormalized_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
