// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWATERMARKTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWATERMARKTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class UpdateWaterMarkTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWaterMarkTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WaterMarkTemplate, waterMarkTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWaterMarkTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WaterMarkTemplate, waterMarkTemplate_);
    };
    UpdateWaterMarkTemplateResponseBody() = default ;
    UpdateWaterMarkTemplateResponseBody(const UpdateWaterMarkTemplateResponseBody &) = default ;
    UpdateWaterMarkTemplateResponseBody(UpdateWaterMarkTemplateResponseBody &&) = default ;
    UpdateWaterMarkTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWaterMarkTemplateResponseBody() = default ;
    UpdateWaterMarkTemplateResponseBody& operator=(const UpdateWaterMarkTemplateResponseBody &) = default ;
    UpdateWaterMarkTemplateResponseBody& operator=(UpdateWaterMarkTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WaterMarkTemplate : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WaterMarkTemplate& obj) { 
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
      friend void from_json(const Darabonba::Json& j, WaterMarkTemplate& obj) { 
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
      WaterMarkTemplate() = default ;
      WaterMarkTemplate(const WaterMarkTemplate &) = default ;
      WaterMarkTemplate(WaterMarkTemplate &&) = default ;
      WaterMarkTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WaterMarkTemplate() = default ;
      WaterMarkTemplate& operator=(const WaterMarkTemplate &) = default ;
      WaterMarkTemplate& operator=(WaterMarkTemplate &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Timeline : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Timeline& obj) { 
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(Start, start_);
        };
        friend void from_json(const Darabonba::Json& j, Timeline& obj) { 
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(Start, start_);
        };
        Timeline() = default ;
        Timeline(const Timeline &) = default ;
        Timeline(Timeline &&) = default ;
        Timeline(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Timeline() = default ;
        Timeline& operator=(const Timeline &) = default ;
        Timeline& operator=(Timeline &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->duration_ == nullptr
        && this->start_ == nullptr; };
        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
        inline Timeline& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // start Field Functions 
        bool hasStart() const { return this->start_ != nullptr;};
        void deleteStart() { this->start_ = nullptr;};
        inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
        inline Timeline& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


      protected:
        // The display duration of the watermark. Default value: **ToEND**. The default value indicates that the watermark is displayed until the video ends.
        shared_ptr<string> duration_ {};
        // The beginning of the time range during which the watermark is displayed.
        // 
        // *   Unit: seconds.
        // *   Default value: **0**.
        shared_ptr<string> start_ {};
      };

      class RatioRefer : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RatioRefer& obj) { 
          DARABONBA_PTR_TO_JSON(Dx, dx_);
          DARABONBA_PTR_TO_JSON(Dy, dy_);
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(Width, width_);
        };
        friend void from_json(const Darabonba::Json& j, RatioRefer& obj) { 
          DARABONBA_PTR_FROM_JSON(Dx, dx_);
          DARABONBA_PTR_FROM_JSON(Dy, dy_);
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
        };
        RatioRefer() = default ;
        RatioRefer(const RatioRefer &) = default ;
        RatioRefer(RatioRefer &&) = default ;
        RatioRefer(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RatioRefer() = default ;
        RatioRefer& operator=(const RatioRefer &) = default ;
        RatioRefer& operator=(RatioRefer &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dx_ == nullptr
        && this->dy_ == nullptr && this->height_ == nullptr && this->width_ == nullptr; };
        // dx Field Functions 
        bool hasDx() const { return this->dx_ != nullptr;};
        void deleteDx() { this->dx_ = nullptr;};
        inline string getDx() const { DARABONBA_PTR_GET_DEFAULT(dx_, "") };
        inline RatioRefer& setDx(string dx) { DARABONBA_PTR_SET_VALUE(dx_, dx) };


        // dy Field Functions 
        bool hasDy() const { return this->dy_ != nullptr;};
        void deleteDy() { this->dy_ = nullptr;};
        inline string getDy() const { DARABONBA_PTR_GET_DEFAULT(dy_, "") };
        inline RatioRefer& setDy(string dy) { DARABONBA_PTR_SET_VALUE(dy_, dy) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
        inline RatioRefer& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
        inline RatioRefer& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        // The horizontal offset of the watermark relative to the output video image. Default value: **0**. The default value indicates no offset. The value can be an integer or a decimal.
        // 
        // *   **Integer**: the vertical offset. This indicates the absolute position. Unit: pixel.
        // *   **Decimal**: the ratio of the horizontal offset to the width of the output video. The ratio varies based on the size of the video. Four decimal places are supported, such as 0.9999. More decimal places are discarded.
        shared_ptr<string> dx_ {};
        // The vertical offset of the watermark relative to the output video image. Default value: **0**. The default value indicates no offset. The value can be an integer or a decimal.
        // 
        // *   **Integer**: the vertical offset. This indicates the absolute position. Unit: pixel.
        // *   **Decimal**: the ratio of the vertical offset to the height of the output video. The ratio varies based on the size of the video. Four decimal places are supported, such as 0.9999. More decimal places are discarded.
        shared_ptr<string> dy_ {};
        // The height of the watermark image in the output video. The value can be an integer or a decimal.
        // 
        // *   **Integer**: the height of the watermark image. This indicates the absolute position. Unit: pixel.
        // *   **Decimal**: the ratio of the height of the watermark image to the height of the output video. The ratio varies based on the size of the video. Four decimal places are supported, such as 0.9999. More decimal places are discarded.
        shared_ptr<string> height_ {};
        // The width of the watermark image in the output video. The value can be an integer or a decimal.
        // 
        // *   **Integer**: the width of the watermark image. This indicates the absolute position. Unit: pixel.
        // *   **Decimal**: the ratio of the width of the watermark image to the width of the output video. The ratio varies based on the size of the video. Four decimal places are supported, such as 0.9999. More decimal places are discarded.
        shared_ptr<string> width_ {};
      };

      virtual bool empty() const override { return this->dx_ == nullptr
        && this->dy_ == nullptr && this->height_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->ratioRefer_ == nullptr
        && this->referPos_ == nullptr && this->state_ == nullptr && this->timeline_ == nullptr && this->type_ == nullptr && this->width_ == nullptr; };
      // dx Field Functions 
      bool hasDx() const { return this->dx_ != nullptr;};
      void deleteDx() { this->dx_ = nullptr;};
      inline string getDx() const { DARABONBA_PTR_GET_DEFAULT(dx_, "") };
      inline WaterMarkTemplate& setDx(string dx) { DARABONBA_PTR_SET_VALUE(dx_, dx) };


      // dy Field Functions 
      bool hasDy() const { return this->dy_ != nullptr;};
      void deleteDy() { this->dy_ = nullptr;};
      inline string getDy() const { DARABONBA_PTR_GET_DEFAULT(dy_, "") };
      inline WaterMarkTemplate& setDy(string dy) { DARABONBA_PTR_SET_VALUE(dy_, dy) };


      // height Field Functions 
      bool hasHeight() const { return this->height_ != nullptr;};
      void deleteHeight() { this->height_ = nullptr;};
      inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
      inline WaterMarkTemplate& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline WaterMarkTemplate& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline WaterMarkTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ratioRefer Field Functions 
      bool hasRatioRefer() const { return this->ratioRefer_ != nullptr;};
      void deleteRatioRefer() { this->ratioRefer_ = nullptr;};
      inline const WaterMarkTemplate::RatioRefer & getRatioRefer() const { DARABONBA_PTR_GET_CONST(ratioRefer_, WaterMarkTemplate::RatioRefer) };
      inline WaterMarkTemplate::RatioRefer getRatioRefer() { DARABONBA_PTR_GET(ratioRefer_, WaterMarkTemplate::RatioRefer) };
      inline WaterMarkTemplate& setRatioRefer(const WaterMarkTemplate::RatioRefer & ratioRefer) { DARABONBA_PTR_SET_VALUE(ratioRefer_, ratioRefer) };
      inline WaterMarkTemplate& setRatioRefer(WaterMarkTemplate::RatioRefer && ratioRefer) { DARABONBA_PTR_SET_RVALUE(ratioRefer_, ratioRefer) };


      // referPos Field Functions 
      bool hasReferPos() const { return this->referPos_ != nullptr;};
      void deleteReferPos() { this->referPos_ = nullptr;};
      inline string getReferPos() const { DARABONBA_PTR_GET_DEFAULT(referPos_, "") };
      inline WaterMarkTemplate& setReferPos(string referPos) { DARABONBA_PTR_SET_VALUE(referPos_, referPos) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline WaterMarkTemplate& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // timeline Field Functions 
      bool hasTimeline() const { return this->timeline_ != nullptr;};
      void deleteTimeline() { this->timeline_ = nullptr;};
      inline const WaterMarkTemplate::Timeline & getTimeline() const { DARABONBA_PTR_GET_CONST(timeline_, WaterMarkTemplate::Timeline) };
      inline WaterMarkTemplate::Timeline getTimeline() { DARABONBA_PTR_GET(timeline_, WaterMarkTemplate::Timeline) };
      inline WaterMarkTemplate& setTimeline(const WaterMarkTemplate::Timeline & timeline) { DARABONBA_PTR_SET_VALUE(timeline_, timeline) };
      inline WaterMarkTemplate& setTimeline(WaterMarkTemplate::Timeline && timeline) { DARABONBA_PTR_SET_RVALUE(timeline_, timeline) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline WaterMarkTemplate& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // width Field Functions 
      bool hasWidth() const { return this->width_ != nullptr;};
      void deleteWidth() { this->width_ = nullptr;};
      inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
      inline WaterMarkTemplate& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    protected:
      // The horizontal offset. Unit: pixel.
      shared_ptr<string> dx_ {};
      // The vertical offset. Unit: pixel.
      shared_ptr<string> dy_ {};
      // The height of the watermark image. Unit: pixel.
      shared_ptr<string> height_ {};
      // The ID of the watermark template. We recommend that you keep this ID for subsequent operation calls.
      shared_ptr<string> id_ {};
      // The name of the watermark template.
      shared_ptr<string> name_ {};
      // The values of the Height, Width, Dx, and Dy parameters relative to the reference edges. If the values of the Height, Width, Dx, and Dy parameters are decimals between 0 and 1, the values are calculated by referring to the following edges in sequence:
      // 
      // *   **Width**: the width edge.
      // *   **Height**: the height edge.
      // *   **Long**: the long edge.
      // *   **Short**: the short edge.
      shared_ptr<WaterMarkTemplate::RatioRefer> ratioRefer_ {};
      // The position of the watermark. Valid values:
      // 
      // *   **TopRight**: the upper-right corner.
      // *   **TopLeft**: the upper-left corner.
      // *   **BottomRight**: the lower-right corner.
      // *   **BottomLeft**: the lower-left corner.
      shared_ptr<string> referPos_ {};
      // The status of the watermark template. Default value: **Normal**.
      shared_ptr<string> state_ {};
      // The timeline of the watermark.
      shared_ptr<WaterMarkTemplate::Timeline> timeline_ {};
      // The type of the watermark. Valid values:
      // 
      // *   Image: an image watermark.
      // *   Text: a text watermark.
      // 
      // > Only watermarks of the Image type are supported.
      shared_ptr<string> type_ {};
      // The width of the watermark image. Unit: pixel.
      shared_ptr<string> width_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->waterMarkTemplate_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateWaterMarkTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // waterMarkTemplate Field Functions 
    bool hasWaterMarkTemplate() const { return this->waterMarkTemplate_ != nullptr;};
    void deleteWaterMarkTemplate() { this->waterMarkTemplate_ = nullptr;};
    inline const UpdateWaterMarkTemplateResponseBody::WaterMarkTemplate & getWaterMarkTemplate() const { DARABONBA_PTR_GET_CONST(waterMarkTemplate_, UpdateWaterMarkTemplateResponseBody::WaterMarkTemplate) };
    inline UpdateWaterMarkTemplateResponseBody::WaterMarkTemplate getWaterMarkTemplate() { DARABONBA_PTR_GET(waterMarkTemplate_, UpdateWaterMarkTemplateResponseBody::WaterMarkTemplate) };
    inline UpdateWaterMarkTemplateResponseBody& setWaterMarkTemplate(const UpdateWaterMarkTemplateResponseBody::WaterMarkTemplate & waterMarkTemplate) { DARABONBA_PTR_SET_VALUE(waterMarkTemplate_, waterMarkTemplate) };
    inline UpdateWaterMarkTemplateResponseBody& setWaterMarkTemplate(UpdateWaterMarkTemplateResponseBody::WaterMarkTemplate && waterMarkTemplate) { DARABONBA_PTR_SET_RVALUE(waterMarkTemplate_, waterMarkTemplate) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The details of the watermark template.
    shared_ptr<UpdateWaterMarkTemplateResponseBody::WaterMarkTemplate> waterMarkTemplate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
