// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERLAYOUTSRESPONSEBODYLAYOUTSLAYOUTVIDEOLAYERSVIDEOLAYER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERLAYOUTSRESPONSEBODYLAYOUTSLAYOUTVIDEOLAYERSVIDEOLAYER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayerPositionNormalizeds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer& obj) { 
      DARABONBA_PTR_TO_JSON(FillMode, fillMode_);
      DARABONBA_PTR_TO_JSON(FixedDelayDuration, fixedDelayDuration_);
      DARABONBA_PTR_TO_JSON(HeightNormalized, heightNormalized_);
      DARABONBA_PTR_TO_JSON(PositionNormalizeds, positionNormalizeds_);
      DARABONBA_PTR_TO_JSON(PositionRefer, positionRefer_);
      DARABONBA_PTR_TO_JSON(WidthNormalized, widthNormalized_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer& obj) { 
      DARABONBA_PTR_FROM_JSON(FillMode, fillMode_);
      DARABONBA_PTR_FROM_JSON(FixedDelayDuration, fixedDelayDuration_);
      DARABONBA_PTR_FROM_JSON(HeightNormalized, heightNormalized_);
      DARABONBA_PTR_FROM_JSON(PositionNormalizeds, positionNormalizeds_);
      DARABONBA_PTR_FROM_JSON(PositionRefer, positionRefer_);
      DARABONBA_PTR_FROM_JSON(WidthNormalized, widthNormalized_);
    };
    DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer() = default ;
    DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer(const DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer &) = default ;
    DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer(DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer &&) = default ;
    DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer() = default ;
    DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer& operator=(const DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer &) = default ;
    DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer& operator=(DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fillMode_ != nullptr
        && this->fixedDelayDuration_ != nullptr && this->heightNormalized_ != nullptr && this->positionNormalizeds_ != nullptr && this->positionRefer_ != nullptr && this->widthNormalized_ != nullptr; };
    // fillMode Field Functions 
    bool hasFillMode() const { return this->fillMode_ != nullptr;};
    void deleteFillMode() { this->fillMode_ = nullptr;};
    inline string fillMode() const { DARABONBA_PTR_GET_DEFAULT(fillMode_, "") };
    inline DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer& setFillMode(string fillMode) { DARABONBA_PTR_SET_VALUE(fillMode_, fillMode) };


    // fixedDelayDuration Field Functions 
    bool hasFixedDelayDuration() const { return this->fixedDelayDuration_ != nullptr;};
    void deleteFixedDelayDuration() { this->fixedDelayDuration_ = nullptr;};
    inline int32_t fixedDelayDuration() const { DARABONBA_PTR_GET_DEFAULT(fixedDelayDuration_, 0) };
    inline DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer& setFixedDelayDuration(int32_t fixedDelayDuration) { DARABONBA_PTR_SET_VALUE(fixedDelayDuration_, fixedDelayDuration) };


    // heightNormalized Field Functions 
    bool hasHeightNormalized() const { return this->heightNormalized_ != nullptr;};
    void deleteHeightNormalized() { this->heightNormalized_ = nullptr;};
    inline float heightNormalized() const { DARABONBA_PTR_GET_DEFAULT(heightNormalized_, 0.0) };
    inline DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer& setHeightNormalized(float heightNormalized) { DARABONBA_PTR_SET_VALUE(heightNormalized_, heightNormalized) };


    // positionNormalizeds Field Functions 
    bool hasPositionNormalizeds() const { return this->positionNormalizeds_ != nullptr;};
    void deletePositionNormalizeds() { this->positionNormalizeds_ = nullptr;};
    inline const Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayerPositionNormalizeds & positionNormalizeds() const { DARABONBA_PTR_GET_CONST(positionNormalizeds_, Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayerPositionNormalizeds) };
    inline Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayerPositionNormalizeds positionNormalizeds() { DARABONBA_PTR_GET(positionNormalizeds_, Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayerPositionNormalizeds) };
    inline DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer& setPositionNormalizeds(const Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayerPositionNormalizeds & positionNormalizeds) { DARABONBA_PTR_SET_VALUE(positionNormalizeds_, positionNormalizeds) };
    inline DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer& setPositionNormalizeds(Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayerPositionNormalizeds && positionNormalizeds) { DARABONBA_PTR_SET_RVALUE(positionNormalizeds_, positionNormalizeds) };


    // positionRefer Field Functions 
    bool hasPositionRefer() const { return this->positionRefer_ != nullptr;};
    void deletePositionRefer() { this->positionRefer_ = nullptr;};
    inline string positionRefer() const { DARABONBA_PTR_GET_DEFAULT(positionRefer_, "") };
    inline DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer& setPositionRefer(string positionRefer) { DARABONBA_PTR_SET_VALUE(positionRefer_, positionRefer) };


    // widthNormalized Field Functions 
    bool hasWidthNormalized() const { return this->widthNormalized_ != nullptr;};
    void deleteWidthNormalized() { this->widthNormalized_ = nullptr;};
    inline float widthNormalized() const { DARABONBA_PTR_GET_DEFAULT(widthNormalized_, 0.0) };
    inline DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayer& setWidthNormalized(float widthNormalized) { DARABONBA_PTR_SET_VALUE(widthNormalized_, widthNormalized) };


  protected:
    // The scaling mode of the video layer. Valid values:
    // 
    // *   **none** (default): specifies that the video layer is not scaled. The video layer is displayed based on its original size.
    // *   **fit**: specifies that the video layer is adapted to the fill area. The video layer is displayed based on the fill area. In this case, the video layer is scaled proportionally, with its original aspect ratio retained. The video layer is placed in the center, with its longer sides aligned with the fill area. If the aspect ratio of the video layer is different from that of the fill area, the content of the lower layer is displayed alongside the shorter sides. If there is no lower layer, black bars are displayed instead.
    std::shared_ptr<string> fillMode_ = nullptr;
    // The fixed delay of the video layer. This parameter is used to synchronize the video with subtitles.
    // 
    // Unit: milliseconds. Default value: **0**. Valid values: **0 to 5000**.
    std::shared_ptr<int32_t> fixedDelayDuration_ = nullptr;
    // The normalized value of the height of the video layer.
    // 
    // *   If the FillMode parameter of the video layer is set to none, the width of the video layer is proportionally scaled based on this parameter. The default value is **0**, which indicates that the video layer is not scaled.
    // *   If the FillMode parameter of the video layer is set to fit, the value of this parameter is greater than **0**.
    std::shared_ptr<float> heightNormalized_ = nullptr;
    // The normalized value of the position of the video layer, in the format of `[x,y]`. Default value: `[0,0]`.
    // 
    // >  The values of x and y are normalized.
    std::shared_ptr<Models::DescribeCasterLayoutsResponseBodyLayoutsLayoutVideoLayersVideoLayerPositionNormalizeds> positionNormalizeds_ = nullptr;
    // The reference coordinates of the video layer. Valid values:
    // 
    // *   **topLeft** (default): the upper-left corner
    // *   **topRight**: the upper-right corner
    // *   **bottomLeft**: the lower-left corner
    // *   **bottomRight**: the lower-right corner
    // *   **center**: the center
    // *   **topCenter**: the upper center
    // *   **bottomCenter**: the lower center
    // *   **leftCenter**: the left center
    // *   **rightCenter**: the right center
    std::shared_ptr<string> positionRefer_ = nullptr;
    // The normalized value of the width of the video layer.
    // 
    // *   If the FillMode parameter of the video layer is set to none, the height of the video layer is scaled based on this parameter. The default value is **0**, which indicates that the video layer is not scaled.
    // *   If the FillMode parameter of the video layer is set to fit, the value of this parameter is greater than **0**.
    std::shared_ptr<float> widthNormalized_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
