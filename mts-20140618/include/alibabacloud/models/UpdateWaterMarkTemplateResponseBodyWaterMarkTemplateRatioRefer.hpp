// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWATERMARKTEMPLATERESPONSEBODYWATERMARKTEMPLATERATIOREFER_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWATERMARKTEMPLATERESPONSEBODYWATERMARKTEMPLATERATIOREFER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateRatioRefer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateRatioRefer& obj) { 
      DARABONBA_PTR_TO_JSON(Dx, dx_);
      DARABONBA_PTR_TO_JSON(Dy, dy_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateRatioRefer& obj) { 
      DARABONBA_PTR_FROM_JSON(Dx, dx_);
      DARABONBA_PTR_FROM_JSON(Dy, dy_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateRatioRefer() = default ;
    UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateRatioRefer(const UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateRatioRefer &) = default ;
    UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateRatioRefer(UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateRatioRefer &&) = default ;
    UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateRatioRefer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateRatioRefer() = default ;
    UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateRatioRefer& operator=(const UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateRatioRefer &) = default ;
    UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateRatioRefer& operator=(UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateRatioRefer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dx_ == nullptr
        && return this->dy_ == nullptr && return this->height_ == nullptr && return this->width_ == nullptr; };
    // dx Field Functions 
    bool hasDx() const { return this->dx_ != nullptr;};
    void deleteDx() { this->dx_ = nullptr;};
    inline string dx() const { DARABONBA_PTR_GET_DEFAULT(dx_, "") };
    inline UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateRatioRefer& setDx(string dx) { DARABONBA_PTR_SET_VALUE(dx_, dx) };


    // dy Field Functions 
    bool hasDy() const { return this->dy_ != nullptr;};
    void deleteDy() { this->dy_ = nullptr;};
    inline string dy() const { DARABONBA_PTR_GET_DEFAULT(dy_, "") };
    inline UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateRatioRefer& setDy(string dy) { DARABONBA_PTR_SET_VALUE(dy_, dy) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateRatioRefer& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateRatioRefer& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The horizontal offset of the watermark relative to the output video image. Default value: **0**. The default value indicates no offset. The value can be an integer or a decimal.
    // 
    // *   **Integer**: the vertical offset. This indicates the absolute position. Unit: pixel.
    // *   **Decimal**: the ratio of the horizontal offset to the width of the output video. The ratio varies based on the size of the video. Four decimal places are supported, such as 0.9999. More decimal places are discarded.
    std::shared_ptr<string> dx_ = nullptr;
    // The vertical offset of the watermark relative to the output video image. Default value: **0**. The default value indicates no offset. The value can be an integer or a decimal.
    // 
    // *   **Integer**: the vertical offset. This indicates the absolute position. Unit: pixel.
    // *   **Decimal**: the ratio of the vertical offset to the height of the output video. The ratio varies based on the size of the video. Four decimal places are supported, such as 0.9999. More decimal places are discarded.
    std::shared_ptr<string> dy_ = nullptr;
    // The height of the watermark image in the output video. The value can be an integer or a decimal.
    // 
    // *   **Integer**: the height of the watermark image. This indicates the absolute position. Unit: pixel.
    // *   **Decimal**: the ratio of the height of the watermark image to the height of the output video. The ratio varies based on the size of the video. Four decimal places are supported, such as 0.9999. More decimal places are discarded.
    std::shared_ptr<string> height_ = nullptr;
    // The width of the watermark image in the output video. The value can be an integer or a decimal.
    // 
    // *   **Integer**: the width of the watermark image. This indicates the absolute position. Unit: pixel.
    // *   **Decimal**: the ratio of the width of the watermark image to the width of the output video. The ratio varies based on the size of the video. Four decimal places are supported, such as 0.9999. More decimal places are discarded.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
