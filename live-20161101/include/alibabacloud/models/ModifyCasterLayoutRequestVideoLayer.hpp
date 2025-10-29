// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCASTERLAYOUTREQUESTVIDEOLAYER_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCASTERLAYOUTREQUESTVIDEOLAYER_HPP_
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
  class ModifyCasterLayoutRequestVideoLayer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCasterLayoutRequestVideoLayer& obj) { 
      DARABONBA_PTR_TO_JSON(FillMode, fillMode_);
      DARABONBA_PTR_TO_JSON(FixedDelayDuration, fixedDelayDuration_);
      DARABONBA_PTR_TO_JSON(HeightNormalized, heightNormalized_);
      DARABONBA_PTR_TO_JSON(PositionNormalized, positionNormalized_);
      DARABONBA_PTR_TO_JSON(PositionRefer, positionRefer_);
      DARABONBA_PTR_TO_JSON(WidthNormalized, widthNormalized_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCasterLayoutRequestVideoLayer& obj) { 
      DARABONBA_PTR_FROM_JSON(FillMode, fillMode_);
      DARABONBA_PTR_FROM_JSON(FixedDelayDuration, fixedDelayDuration_);
      DARABONBA_PTR_FROM_JSON(HeightNormalized, heightNormalized_);
      DARABONBA_PTR_FROM_JSON(PositionNormalized, positionNormalized_);
      DARABONBA_PTR_FROM_JSON(PositionRefer, positionRefer_);
      DARABONBA_PTR_FROM_JSON(WidthNormalized, widthNormalized_);
    };
    ModifyCasterLayoutRequestVideoLayer() = default ;
    ModifyCasterLayoutRequestVideoLayer(const ModifyCasterLayoutRequestVideoLayer &) = default ;
    ModifyCasterLayoutRequestVideoLayer(ModifyCasterLayoutRequestVideoLayer &&) = default ;
    ModifyCasterLayoutRequestVideoLayer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCasterLayoutRequestVideoLayer() = default ;
    ModifyCasterLayoutRequestVideoLayer& operator=(const ModifyCasterLayoutRequestVideoLayer &) = default ;
    ModifyCasterLayoutRequestVideoLayer& operator=(ModifyCasterLayoutRequestVideoLayer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fillMode_ == nullptr
        && return this->fixedDelayDuration_ == nullptr && return this->heightNormalized_ == nullptr && return this->positionNormalized_ == nullptr && return this->positionRefer_ == nullptr && return this->widthNormalized_ == nullptr; };
    // fillMode Field Functions 
    bool hasFillMode() const { return this->fillMode_ != nullptr;};
    void deleteFillMode() { this->fillMode_ = nullptr;};
    inline string fillMode() const { DARABONBA_PTR_GET_DEFAULT(fillMode_, "") };
    inline ModifyCasterLayoutRequestVideoLayer& setFillMode(string fillMode) { DARABONBA_PTR_SET_VALUE(fillMode_, fillMode) };


    // fixedDelayDuration Field Functions 
    bool hasFixedDelayDuration() const { return this->fixedDelayDuration_ != nullptr;};
    void deleteFixedDelayDuration() { this->fixedDelayDuration_ = nullptr;};
    inline int32_t fixedDelayDuration() const { DARABONBA_PTR_GET_DEFAULT(fixedDelayDuration_, 0) };
    inline ModifyCasterLayoutRequestVideoLayer& setFixedDelayDuration(int32_t fixedDelayDuration) { DARABONBA_PTR_SET_VALUE(fixedDelayDuration_, fixedDelayDuration) };


    // heightNormalized Field Functions 
    bool hasHeightNormalized() const { return this->heightNormalized_ != nullptr;};
    void deleteHeightNormalized() { this->heightNormalized_ = nullptr;};
    inline float heightNormalized() const { DARABONBA_PTR_GET_DEFAULT(heightNormalized_, 0.0) };
    inline ModifyCasterLayoutRequestVideoLayer& setHeightNormalized(float heightNormalized) { DARABONBA_PTR_SET_VALUE(heightNormalized_, heightNormalized) };


    // positionNormalized Field Functions 
    bool hasPositionNormalized() const { return this->positionNormalized_ != nullptr;};
    void deletePositionNormalized() { this->positionNormalized_ = nullptr;};
    inline const vector<float> & positionNormalized() const { DARABONBA_PTR_GET_CONST(positionNormalized_, vector<float>) };
    inline vector<float> positionNormalized() { DARABONBA_PTR_GET(positionNormalized_, vector<float>) };
    inline ModifyCasterLayoutRequestVideoLayer& setPositionNormalized(const vector<float> & positionNormalized) { DARABONBA_PTR_SET_VALUE(positionNormalized_, positionNormalized) };
    inline ModifyCasterLayoutRequestVideoLayer& setPositionNormalized(vector<float> && positionNormalized) { DARABONBA_PTR_SET_RVALUE(positionNormalized_, positionNormalized) };


    // positionRefer Field Functions 
    bool hasPositionRefer() const { return this->positionRefer_ != nullptr;};
    void deletePositionRefer() { this->positionRefer_ = nullptr;};
    inline string positionRefer() const { DARABONBA_PTR_GET_DEFAULT(positionRefer_, "") };
    inline ModifyCasterLayoutRequestVideoLayer& setPositionRefer(string positionRefer) { DARABONBA_PTR_SET_VALUE(positionRefer_, positionRefer) };


    // widthNormalized Field Functions 
    bool hasWidthNormalized() const { return this->widthNormalized_ != nullptr;};
    void deleteWidthNormalized() { this->widthNormalized_ = nullptr;};
    inline float widthNormalized() const { DARABONBA_PTR_GET_DEFAULT(widthNormalized_, 0.0) };
    inline ModifyCasterLayoutRequestVideoLayer& setWidthNormalized(float widthNormalized) { DARABONBA_PTR_SET_VALUE(widthNormalized_, widthNormalized) };


  protected:
    // The scaling mode of the video layer. Valid values:
    // 
    // *   **none** (default): indicates that the video layer is not scaled. The video layer is displayed based on its original size.
    // *   **fit**: indicates that the video layer is adapted to the fill area. In this case, the video layer is scaled proportionally, with its original aspect ratio retained. The video layer is placed in the center, with its longer sides aligned with the fill area. If the aspect ratio of the video layer is different from that of the fill area, the content of the lower layer is displayed alongside the shorter sides. If there is no lower layer, black bars are displayed instead.
    std::shared_ptr<string> fillMode_ = nullptr;
    // The fixed delay of the video layer. This parameter is used to synchronize the video with subtitles. Unit: milliseconds. Default value: **0**. Valid values: **0 to 5000**.
    std::shared_ptr<int32_t> fixedDelayDuration_ = nullptr;
    // The normalized value of the height of the video layer.
    // 
    // *   If the FillMode parameter of the video layer is set to none, the width of the video layer is proportionally scaled based on this parameter. The default value is **0**, which indicates that the video layer is not scaled.
    // *   If the FillMode parameter of the video layer is set to fit, the value of this parameter is greater than **0**.
    std::shared_ptr<float> heightNormalized_ = nullptr;
    // The normalized value of the position of the video layer, in the format of `[x,y]`. Default value: `[0,0]`.
    // 
    // >  The values of x and y are normalized.
    std::shared_ptr<vector<float>> positionNormalized_ = nullptr;
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
    // *   If the FillMode parameter of the video layer is set to none, the height of the video layer is proportionally scaled based on this parameter. The default value is **0**, which indicates that the video layer is not scaled.
    // *   If the FillMode parameter of the video layer is set to fit, the value of this parameter is greater than **0**.
    std::shared_ptr<float> widthNormalized_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
