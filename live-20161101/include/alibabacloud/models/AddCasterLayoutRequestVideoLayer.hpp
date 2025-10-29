// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCASTERLAYOUTREQUESTVIDEOLAYER_HPP_
#define ALIBABACLOUD_MODELS_ADDCASTERLAYOUTREQUESTVIDEOLAYER_HPP_
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
  class AddCasterLayoutRequestVideoLayer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCasterLayoutRequestVideoLayer& obj) { 
      DARABONBA_PTR_TO_JSON(FillMode, fillMode_);
      DARABONBA_PTR_TO_JSON(FixedDelayDuration, fixedDelayDuration_);
      DARABONBA_PTR_TO_JSON(HeightNormalized, heightNormalized_);
      DARABONBA_PTR_TO_JSON(PositionNormalized, positionNormalized_);
      DARABONBA_PTR_TO_JSON(PositionRefer, positionRefer_);
      DARABONBA_PTR_TO_JSON(WidthNormalized, widthNormalized_);
    };
    friend void from_json(const Darabonba::Json& j, AddCasterLayoutRequestVideoLayer& obj) { 
      DARABONBA_PTR_FROM_JSON(FillMode, fillMode_);
      DARABONBA_PTR_FROM_JSON(FixedDelayDuration, fixedDelayDuration_);
      DARABONBA_PTR_FROM_JSON(HeightNormalized, heightNormalized_);
      DARABONBA_PTR_FROM_JSON(PositionNormalized, positionNormalized_);
      DARABONBA_PTR_FROM_JSON(PositionRefer, positionRefer_);
      DARABONBA_PTR_FROM_JSON(WidthNormalized, widthNormalized_);
    };
    AddCasterLayoutRequestVideoLayer() = default ;
    AddCasterLayoutRequestVideoLayer(const AddCasterLayoutRequestVideoLayer &) = default ;
    AddCasterLayoutRequestVideoLayer(AddCasterLayoutRequestVideoLayer &&) = default ;
    AddCasterLayoutRequestVideoLayer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCasterLayoutRequestVideoLayer() = default ;
    AddCasterLayoutRequestVideoLayer& operator=(const AddCasterLayoutRequestVideoLayer &) = default ;
    AddCasterLayoutRequestVideoLayer& operator=(AddCasterLayoutRequestVideoLayer &&) = default ;
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
    inline AddCasterLayoutRequestVideoLayer& setFillMode(string fillMode) { DARABONBA_PTR_SET_VALUE(fillMode_, fillMode) };


    // fixedDelayDuration Field Functions 
    bool hasFixedDelayDuration() const { return this->fixedDelayDuration_ != nullptr;};
    void deleteFixedDelayDuration() { this->fixedDelayDuration_ = nullptr;};
    inline int32_t fixedDelayDuration() const { DARABONBA_PTR_GET_DEFAULT(fixedDelayDuration_, 0) };
    inline AddCasterLayoutRequestVideoLayer& setFixedDelayDuration(int32_t fixedDelayDuration) { DARABONBA_PTR_SET_VALUE(fixedDelayDuration_, fixedDelayDuration) };


    // heightNormalized Field Functions 
    bool hasHeightNormalized() const { return this->heightNormalized_ != nullptr;};
    void deleteHeightNormalized() { this->heightNormalized_ = nullptr;};
    inline float heightNormalized() const { DARABONBA_PTR_GET_DEFAULT(heightNormalized_, 0.0) };
    inline AddCasterLayoutRequestVideoLayer& setHeightNormalized(float heightNormalized) { DARABONBA_PTR_SET_VALUE(heightNormalized_, heightNormalized) };


    // positionNormalized Field Functions 
    bool hasPositionNormalized() const { return this->positionNormalized_ != nullptr;};
    void deletePositionNormalized() { this->positionNormalized_ = nullptr;};
    inline const vector<float> & positionNormalized() const { DARABONBA_PTR_GET_CONST(positionNormalized_, vector<float>) };
    inline vector<float> positionNormalized() { DARABONBA_PTR_GET(positionNormalized_, vector<float>) };
    inline AddCasterLayoutRequestVideoLayer& setPositionNormalized(const vector<float> & positionNormalized) { DARABONBA_PTR_SET_VALUE(positionNormalized_, positionNormalized) };
    inline AddCasterLayoutRequestVideoLayer& setPositionNormalized(vector<float> && positionNormalized) { DARABONBA_PTR_SET_RVALUE(positionNormalized_, positionNormalized) };


    // positionRefer Field Functions 
    bool hasPositionRefer() const { return this->positionRefer_ != nullptr;};
    void deletePositionRefer() { this->positionRefer_ = nullptr;};
    inline string positionRefer() const { DARABONBA_PTR_GET_DEFAULT(positionRefer_, "") };
    inline AddCasterLayoutRequestVideoLayer& setPositionRefer(string positionRefer) { DARABONBA_PTR_SET_VALUE(positionRefer_, positionRefer) };


    // widthNormalized Field Functions 
    bool hasWidthNormalized() const { return this->widthNormalized_ != nullptr;};
    void deleteWidthNormalized() { this->widthNormalized_ = nullptr;};
    inline float widthNormalized() const { DARABONBA_PTR_GET_DEFAULT(widthNormalized_, 0.0) };
    inline AddCasterLayoutRequestVideoLayer& setWidthNormalized(float widthNormalized) { DARABONBA_PTR_SET_VALUE(widthNormalized_, widthNormalized) };


  protected:
    // The scaling mode of video layer N. Valid values:
    // 
    // *   **none**: The image is not scaled to fill in the specified layout section. Set video layer N based on the image size of the video resource. This is the default value.
    // *   **fit**: The image is scaled with the original aspect ratio to fill in the specified layout section. Set video layer N based on the section size. The image is centered in the layout section with the long side of the image equaling that of the section. If the aspect ratio of the image is inconsistent with that of the section, the short side of the image may be shorter than that of the section. The area outside the image displays the next video layer or the background if no next video layer exists. By default, the background color is black.
    std::shared_ptr<string> fillMode_ = nullptr;
    // The fixed delay of video layer N. You can use this parameter to synchronize the video with subtitles. Unit: milliseconds. Valid values: **0 to 5000**. Default value: **0**.
    std::shared_ptr<int32_t> fixedDelayDuration_ = nullptr;
    // The normalized value of the height of the image of video layer N.
    // 
    // *   If the FillMode parameter of video layer N is set to none, the width of the video image is scaled based on this parameter. The default value is **0**, which indicates that the video image is displayed in the original size.
    // *   If the FillMode parameter of video layer N is set to fit, you must set this parameter to a value greater than **0**. In this case, the video image is scaled with the original aspect ratio to fill in the specified layout section based on this parameter.
    std::shared_ptr<float> heightNormalized_ = nullptr;
    // The normalized value of the `[x,y]` coordinates of video layer N in the production studio. The default coordinates are `[0,0]`.
    // 
    // >  The coordinates indicate the location of video layer N in the production studio. Set this parameter to the normalized value of the coordinates.
    std::shared_ptr<vector<float>> positionNormalized_ = nullptr;
    // The reference coordinates of video layer N in the production studio. Valid values:
    // 
    // *   **topLeft**: the upper-left corner. This is the default value.
    // *   **topRight**: the upper-right corner.
    // *   **bottomLeft**: the lower-left corner.
    // *   **bottomRight**: the lower-right corner.
    // *   **center**: the center position.
    // *   **topCenter**: the upper center position.
    // *   **bottomCenter**: the lower center position.
    // *   **leftCenter**: the left center position.
    // *   **rightCenter**: the right center position.
    std::shared_ptr<string> positionRefer_ = nullptr;
    // The normalized value of the width of the image of video layer N.
    // 
    // *   If the FillMode parameter of video layer N is set to none, the height of the video image is scaled based on this parameter. The default value is **0**, which indicates that the video image is displayed in the original size.
    // *   If the FillMode parameter of video layer N is set to fit, you must set this parameter to a value greater than **0**. In this case, the video image is scaled with the original aspect ratio to fill in the specified layout section based on this parameter.
    std::shared_ptr<float> widthNormalized_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
