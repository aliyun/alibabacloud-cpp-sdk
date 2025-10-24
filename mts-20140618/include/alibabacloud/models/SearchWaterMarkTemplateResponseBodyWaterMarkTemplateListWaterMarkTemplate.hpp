// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHWATERMARKTEMPLATERESPONSEBODYWATERMARKTEMPLATELISTWATERMARKTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_SEARCHWATERMARKTEMPLATERESPONSEBODYWATERMARKTEMPLATELISTWATERMARKTEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateRatioRefer.hpp>
#include <alibabacloud/models/SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateTimeline.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate& obj) { 
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
    friend void from_json(const Darabonba::Json& j, SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate& obj) { 
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
    SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate() = default ;
    SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate(const SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate &) = default ;
    SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate(SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate &&) = default ;
    SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate() = default ;
    SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate& operator=(const SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate &) = default ;
    SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate& operator=(SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate &&) = default ;
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
    inline SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate& setDx(string dx) { DARABONBA_PTR_SET_VALUE(dx_, dx) };


    // dy Field Functions 
    bool hasDy() const { return this->dy_ != nullptr;};
    void deleteDy() { this->dy_ = nullptr;};
    inline string dy() const { DARABONBA_PTR_GET_DEFAULT(dy_, "") };
    inline SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate& setDy(string dy) { DARABONBA_PTR_SET_VALUE(dy_, dy) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ratioRefer Field Functions 
    bool hasRatioRefer() const { return this->ratioRefer_ != nullptr;};
    void deleteRatioRefer() { this->ratioRefer_ = nullptr;};
    inline const Models::SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateRatioRefer & ratioRefer() const { DARABONBA_PTR_GET_CONST(ratioRefer_, Models::SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateRatioRefer) };
    inline Models::SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateRatioRefer ratioRefer() { DARABONBA_PTR_GET(ratioRefer_, Models::SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateRatioRefer) };
    inline SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate& setRatioRefer(const Models::SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateRatioRefer & ratioRefer) { DARABONBA_PTR_SET_VALUE(ratioRefer_, ratioRefer) };
    inline SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate& setRatioRefer(Models::SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateRatioRefer && ratioRefer) { DARABONBA_PTR_SET_RVALUE(ratioRefer_, ratioRefer) };


    // referPos Field Functions 
    bool hasReferPos() const { return this->referPos_ != nullptr;};
    void deleteReferPos() { this->referPos_ = nullptr;};
    inline string referPos() const { DARABONBA_PTR_GET_DEFAULT(referPos_, "") };
    inline SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate& setReferPos(string referPos) { DARABONBA_PTR_SET_VALUE(referPos_, referPos) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // timeline Field Functions 
    bool hasTimeline() const { return this->timeline_ != nullptr;};
    void deleteTimeline() { this->timeline_ = nullptr;};
    inline const Models::SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateTimeline & timeline() const { DARABONBA_PTR_GET_CONST(timeline_, Models::SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateTimeline) };
    inline Models::SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateTimeline timeline() { DARABONBA_PTR_GET(timeline_, Models::SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateTimeline) };
    inline SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate& setTimeline(const Models::SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateTimeline & timeline) { DARABONBA_PTR_SET_VALUE(timeline_, timeline) };
    inline SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate& setTimeline(Models::SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateTimeline && timeline) { DARABONBA_PTR_SET_RVALUE(timeline_, timeline) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplate& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The name of the watermark template.
    std::shared_ptr<string> dx_ = nullptr;
    // The values of the Height, Width, Dx, and Dy parameters relative to the reference edges. If the values of the Height, Width, Dx, and Dy parameters are decimals between 0 and 1, the values are calculated by referring to the following edges in sequence:
    // 
    // *   **Width**: the width edge.
    // *   **Height**: the height edge.
    // *   **Long**: the long edge.
    // *   **Short**: the short edge.
    std::shared_ptr<string> dy_ = nullptr;
    // The ID of the watermark template.
    std::shared_ptr<string> height_ = nullptr;
    // The vertical offset. Unit: pixel.
    std::shared_ptr<string> id_ = nullptr;
    // The width of the watermark image in the output video. The value can be an integer or a decimal.
    // 
    // *   **Integer**: the width of the watermark image. This indicates the absolute position. Unit: pixel.
    // *   **Decimal**: the ratio of the width of the watermark image to the width of the output video. The ratio varies based on the size of the video. Four decimal places are supported, such as 0.9999. More decimal places are discarded.
    std::shared_ptr<string> name_ = nullptr;
    // The status of the watermark template. Valid values: Valid values:
    // 
    // *   **Normal**: The watermark template is normal.
    // *   **Deleted**: The watermark template is deleted.
    std::shared_ptr<Models::SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateRatioRefer> ratioRefer_ = nullptr;
    // The beginning of the time range during which the watermark is displayed.
    // 
    // *   Unit: seconds.
    // *   Default value: **0**.
    std::shared_ptr<string> referPos_ = nullptr;
    // The display duration of the watermark. Default value: **ToEND**. The default value indicates that the watermark is displayed until the video ends.
    std::shared_ptr<string> state_ = nullptr;
    // The timeline of the watermark.
    std::shared_ptr<Models::SearchWaterMarkTemplateResponseBodyWaterMarkTemplateListWaterMarkTemplateTimeline> timeline_ = nullptr;
    // The position of the watermark. Valid values:
    // 
    // *   TopRight: the upper-right corner.
    // *   TopLeft: the upper-left corner.
    // *   BottomRight: the lower-right corner.
    // *   BottomLeft: the lower-left corner.
    std::shared_ptr<string> type_ = nullptr;
    // The vertical offset. Unit: pixel.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
