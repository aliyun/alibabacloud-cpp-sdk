// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TARGETVIDEOFILTERVIDEOWATERMARKS_HPP_
#define ALIBABACLOUD_MODELS_TARGETVIDEOFILTERVIDEOWATERMARKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class TargetVideoFilterVideoWatermarks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TargetVideoFilterVideoWatermarks& obj) { 
      DARABONBA_PTR_TO_JSON(BorderColor, borderColor_);
      DARABONBA_PTR_TO_JSON(BorderWidth, borderWidth_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Dx, dx_);
      DARABONBA_PTR_TO_JSON(Dy, dy_);
      DARABONBA_PTR_TO_JSON(FontApha, fontApha_);
      DARABONBA_PTR_TO_JSON(FontColor, fontColor_);
      DARABONBA_PTR_TO_JSON(FontName, fontName_);
      DARABONBA_PTR_TO_JSON(FontSize, fontSize_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(ReferPos, referPos_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, TargetVideoFilterVideoWatermarks& obj) { 
      DARABONBA_PTR_FROM_JSON(BorderColor, borderColor_);
      DARABONBA_PTR_FROM_JSON(BorderWidth, borderWidth_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Dx, dx_);
      DARABONBA_PTR_FROM_JSON(Dy, dy_);
      DARABONBA_PTR_FROM_JSON(FontApha, fontApha_);
      DARABONBA_PTR_FROM_JSON(FontColor, fontColor_);
      DARABONBA_PTR_FROM_JSON(FontName, fontName_);
      DARABONBA_PTR_FROM_JSON(FontSize, fontSize_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(ReferPos, referPos_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    TargetVideoFilterVideoWatermarks() = default ;
    TargetVideoFilterVideoWatermarks(const TargetVideoFilterVideoWatermarks &) = default ;
    TargetVideoFilterVideoWatermarks(TargetVideoFilterVideoWatermarks &&) = default ;
    TargetVideoFilterVideoWatermarks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TargetVideoFilterVideoWatermarks() = default ;
    TargetVideoFilterVideoWatermarks& operator=(const TargetVideoFilterVideoWatermarks &) = default ;
    TargetVideoFilterVideoWatermarks& operator=(TargetVideoFilterVideoWatermarks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->borderColor_ != nullptr
        && this->borderWidth_ != nullptr && this->content_ != nullptr && this->duration_ != nullptr && this->dx_ != nullptr && this->dy_ != nullptr
        && this->fontApha_ != nullptr && this->fontColor_ != nullptr && this->fontName_ != nullptr && this->fontSize_ != nullptr && this->height_ != nullptr
        && this->referPos_ != nullptr && this->startTime_ != nullptr && this->type_ != nullptr && this->URI_ != nullptr && this->width_ != nullptr; };
    // borderColor Field Functions 
    bool hasBorderColor() const { return this->borderColor_ != nullptr;};
    void deleteBorderColor() { this->borderColor_ = nullptr;};
    inline string borderColor() const { DARABONBA_PTR_GET_DEFAULT(borderColor_, "") };
    inline TargetVideoFilterVideoWatermarks& setBorderColor(string borderColor) { DARABONBA_PTR_SET_VALUE(borderColor_, borderColor) };


    // borderWidth Field Functions 
    bool hasBorderWidth() const { return this->borderWidth_ != nullptr;};
    void deleteBorderWidth() { this->borderWidth_ = nullptr;};
    inline int32_t borderWidth() const { DARABONBA_PTR_GET_DEFAULT(borderWidth_, 0) };
    inline TargetVideoFilterVideoWatermarks& setBorderWidth(int32_t borderWidth) { DARABONBA_PTR_SET_VALUE(borderWidth_, borderWidth) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline TargetVideoFilterVideoWatermarks& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline double duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline TargetVideoFilterVideoWatermarks& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // dx Field Functions 
    bool hasDx() const { return this->dx_ != nullptr;};
    void deleteDx() { this->dx_ = nullptr;};
    inline float dx() const { DARABONBA_PTR_GET_DEFAULT(dx_, 0.0) };
    inline TargetVideoFilterVideoWatermarks& setDx(float dx) { DARABONBA_PTR_SET_VALUE(dx_, dx) };


    // dy Field Functions 
    bool hasDy() const { return this->dy_ != nullptr;};
    void deleteDy() { this->dy_ = nullptr;};
    inline float dy() const { DARABONBA_PTR_GET_DEFAULT(dy_, 0.0) };
    inline TargetVideoFilterVideoWatermarks& setDy(float dy) { DARABONBA_PTR_SET_VALUE(dy_, dy) };


    // fontApha Field Functions 
    bool hasFontApha() const { return this->fontApha_ != nullptr;};
    void deleteFontApha() { this->fontApha_ = nullptr;};
    inline float fontApha() const { DARABONBA_PTR_GET_DEFAULT(fontApha_, 0.0) };
    inline TargetVideoFilterVideoWatermarks& setFontApha(float fontApha) { DARABONBA_PTR_SET_VALUE(fontApha_, fontApha) };


    // fontColor Field Functions 
    bool hasFontColor() const { return this->fontColor_ != nullptr;};
    void deleteFontColor() { this->fontColor_ = nullptr;};
    inline string fontColor() const { DARABONBA_PTR_GET_DEFAULT(fontColor_, "") };
    inline TargetVideoFilterVideoWatermarks& setFontColor(string fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };


    // fontName Field Functions 
    bool hasFontName() const { return this->fontName_ != nullptr;};
    void deleteFontName() { this->fontName_ = nullptr;};
    inline string fontName() const { DARABONBA_PTR_GET_DEFAULT(fontName_, "") };
    inline TargetVideoFilterVideoWatermarks& setFontName(string fontName) { DARABONBA_PTR_SET_VALUE(fontName_, fontName) };


    // fontSize Field Functions 
    bool hasFontSize() const { return this->fontSize_ != nullptr;};
    void deleteFontSize() { this->fontSize_ = nullptr;};
    inline int32_t fontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, 0) };
    inline TargetVideoFilterVideoWatermarks& setFontSize(int32_t fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline float height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0.0) };
    inline TargetVideoFilterVideoWatermarks& setHeight(float height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // referPos Field Functions 
    bool hasReferPos() const { return this->referPos_ != nullptr;};
    void deleteReferPos() { this->referPos_ = nullptr;};
    inline string referPos() const { DARABONBA_PTR_GET_DEFAULT(referPos_, "") };
    inline TargetVideoFilterVideoWatermarks& setReferPos(string referPos) { DARABONBA_PTR_SET_VALUE(referPos_, referPos) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline double startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
    inline TargetVideoFilterVideoWatermarks& setStartTime(double startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline TargetVideoFilterVideoWatermarks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline TargetVideoFilterVideoWatermarks& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline float width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0.0) };
    inline TargetVideoFilterVideoWatermarks& setWidth(float width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<string> borderColor_ = nullptr;
    std::shared_ptr<int32_t> borderWidth_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<double> duration_ = nullptr;
    std::shared_ptr<float> dx_ = nullptr;
    std::shared_ptr<float> dy_ = nullptr;
    std::shared_ptr<float> fontApha_ = nullptr;
    std::shared_ptr<string> fontColor_ = nullptr;
    std::shared_ptr<string> fontName_ = nullptr;
    std::shared_ptr<int32_t> fontSize_ = nullptr;
    std::shared_ptr<float> height_ = nullptr;
    std::shared_ptr<string> referPos_ = nullptr;
    std::shared_ptr<double> startTime_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> URI_ = nullptr;
    std::shared_ptr<float> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
