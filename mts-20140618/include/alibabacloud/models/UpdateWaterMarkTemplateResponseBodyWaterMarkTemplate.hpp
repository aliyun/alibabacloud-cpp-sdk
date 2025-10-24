// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWATERMARKTEMPLATERESPONSEBODYWATERMARKTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWATERMARKTEMPLATERESPONSEBODYWATERMARKTEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateRatioRefer.hpp>
#include <alibabacloud/models/UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateTimeline.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(Dx, dx_);
      DARABONBA_PTR_TO_JSON(Dy, dy_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RatioRefer, ratioRefer_);
      DARABONBA_PTR_TO_JSON(ReferPos, referPos_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Timeline, timeline_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(Dx, dx_);
      DARABONBA_PTR_FROM_JSON(Dy, dy_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RatioRefer, ratioRefer_);
      DARABONBA_PTR_FROM_JSON(ReferPos, referPos_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Timeline, timeline_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate() = default ;
    UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate(const UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate &) = default ;
    UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate(UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate &&) = default ;
    UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate() = default ;
    UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate& operator=(const UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate &) = default ;
    UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate& operator=(UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dx_ == nullptr
        && return this->dy_ == nullptr && return this->height_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->ratioRefer_ == nullptr
        && return this->referPos_ == nullptr && return this->state_ == nullptr && return this->timeline_ == nullptr && return this->type_ == nullptr && return this->width_ == nullptr; };
    // dx Field Functions 
    bool hasDx() const { return this->dx_ != nullptr;};
    void deleteDx() { this->dx_ = nullptr;};
    inline string dx() const { DARABONBA_PTR_GET_DEFAULT(dx_, "") };
    inline UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate& setDx(string dx) { DARABONBA_PTR_SET_VALUE(dx_, dx) };


    // dy Field Functions 
    bool hasDy() const { return this->dy_ != nullptr;};
    void deleteDy() { this->dy_ = nullptr;};
    inline string dy() const { DARABONBA_PTR_GET_DEFAULT(dy_, "") };
    inline UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate& setDy(string dy) { DARABONBA_PTR_SET_VALUE(dy_, dy) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ratioRefer Field Functions 
    bool hasRatioRefer() const { return this->ratioRefer_ != nullptr;};
    void deleteRatioRefer() { this->ratioRefer_ = nullptr;};
    inline const Models::UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateRatioRefer & ratioRefer() const { DARABONBA_PTR_GET_CONST(ratioRefer_, Models::UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateRatioRefer) };
    inline Models::UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateRatioRefer ratioRefer() { DARABONBA_PTR_GET(ratioRefer_, Models::UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateRatioRefer) };
    inline UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate& setRatioRefer(const Models::UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateRatioRefer & ratioRefer) { DARABONBA_PTR_SET_VALUE(ratioRefer_, ratioRefer) };
    inline UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate& setRatioRefer(Models::UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateRatioRefer && ratioRefer) { DARABONBA_PTR_SET_RVALUE(ratioRefer_, ratioRefer) };


    // referPos Field Functions 
    bool hasReferPos() const { return this->referPos_ != nullptr;};
    void deleteReferPos() { this->referPos_ = nullptr;};
    inline string referPos() const { DARABONBA_PTR_GET_DEFAULT(referPos_, "") };
    inline UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate& setReferPos(string referPos) { DARABONBA_PTR_SET_VALUE(referPos_, referPos) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // timeline Field Functions 
    bool hasTimeline() const { return this->timeline_ != nullptr;};
    void deleteTimeline() { this->timeline_ = nullptr;};
    inline const Models::UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateTimeline & timeline() const { DARABONBA_PTR_GET_CONST(timeline_, Models::UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateTimeline) };
    inline Models::UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateTimeline timeline() { DARABONBA_PTR_GET(timeline_, Models::UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateTimeline) };
    inline UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate& setTimeline(const Models::UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateTimeline & timeline) { DARABONBA_PTR_SET_VALUE(timeline_, timeline) };
    inline UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate& setTimeline(Models::UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateTimeline && timeline) { DARABONBA_PTR_SET_RVALUE(timeline_, timeline) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline UpdateWaterMarkTemplateResponseBodyWaterMarkTemplate& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The horizontal offset. Unit: pixel.
    std::shared_ptr<string> dx_ = nullptr;
    // The vertical offset. Unit: pixel.
    std::shared_ptr<string> dy_ = nullptr;
    // The height of the watermark image. Unit: pixel.
    std::shared_ptr<string> height_ = nullptr;
    // The ID of the watermark template. We recommend that you keep this ID for subsequent operation calls.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the watermark template.
    std::shared_ptr<string> name_ = nullptr;
    // The values of the Height, Width, Dx, and Dy parameters relative to the reference edges. If the values of the Height, Width, Dx, and Dy parameters are decimals between 0 and 1, the values are calculated by referring to the following edges in sequence:
    // 
    // *   **Width**: the width edge.
    // *   **Height**: the height edge.
    // *   **Long**: the long edge.
    // *   **Short**: the short edge.
    std::shared_ptr<Models::UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateRatioRefer> ratioRefer_ = nullptr;
    // The position of the watermark. Valid values:
    // 
    // *   **TopRight**: the upper-right corner.
    // *   **TopLeft**: the upper-left corner.
    // *   **BottomRight**: the lower-right corner.
    // *   **BottomLeft**: the lower-left corner.
    std::shared_ptr<string> referPos_ = nullptr;
    // The status of the watermark template. Default value: **Normal**.
    std::shared_ptr<string> state_ = nullptr;
    // The timeline of the watermark.
    std::shared_ptr<Models::UpdateWaterMarkTemplateResponseBodyWaterMarkTemplateTimeline> timeline_ = nullptr;
    // The type of the watermark. Valid values:
    // 
    // *   Image: an image watermark.
    // *   Text: a text watermark.
    // 
    // > Only watermarks of the Image type are supported.
    std::shared_ptr<string> type_ = nullptr;
    // The width of the watermark image. Unit: pixel.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
