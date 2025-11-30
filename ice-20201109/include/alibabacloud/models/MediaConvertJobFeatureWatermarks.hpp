// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTJOBFEATUREWATERMARKS_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTJOBFEATUREWATERMARKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertJobFeatureWatermarks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertJobFeatureWatermarks& obj) { 
      DARABONBA_PTR_TO_JSON(Adaptive, adaptive_);
      DARABONBA_PTR_TO_JSON(BorderColor, borderColor_);
      DARABONBA_PTR_TO_JSON(BorderWidth, borderWidth_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(FontAlpha, fontAlpha_);
      DARABONBA_PTR_TO_JSON(FontColor, fontColor_);
      DARABONBA_PTR_TO_JSON(FontName, fontName_);
      DARABONBA_PTR_TO_JSON(FontSize, fontSize_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertJobFeatureWatermarks& obj) { 
      DARABONBA_PTR_FROM_JSON(Adaptive, adaptive_);
      DARABONBA_PTR_FROM_JSON(BorderColor, borderColor_);
      DARABONBA_PTR_FROM_JSON(BorderWidth, borderWidth_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(FontAlpha, fontAlpha_);
      DARABONBA_PTR_FROM_JSON(FontColor, fontColor_);
      DARABONBA_PTR_FROM_JSON(FontName, fontName_);
      DARABONBA_PTR_FROM_JSON(FontSize, fontSize_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    MediaConvertJobFeatureWatermarks() = default ;
    MediaConvertJobFeatureWatermarks(const MediaConvertJobFeatureWatermarks &) = default ;
    MediaConvertJobFeatureWatermarks(MediaConvertJobFeatureWatermarks &&) = default ;
    MediaConvertJobFeatureWatermarks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertJobFeatureWatermarks() = default ;
    MediaConvertJobFeatureWatermarks& operator=(const MediaConvertJobFeatureWatermarks &) = default ;
    MediaConvertJobFeatureWatermarks& operator=(MediaConvertJobFeatureWatermarks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adaptive_ == nullptr
        && return this->borderColor_ == nullptr && return this->borderWidth_ == nullptr && return this->content_ == nullptr && return this->fontAlpha_ == nullptr && return this->fontColor_ == nullptr
        && return this->fontName_ == nullptr && return this->fontSize_ == nullptr && return this->height_ == nullptr && return this->templateId_ == nullptr && return this->type_ == nullptr
        && return this->width_ == nullptr && return this->x_ == nullptr && return this->y_ == nullptr; };
    // adaptive Field Functions 
    bool hasAdaptive() const { return this->adaptive_ != nullptr;};
    void deleteAdaptive() { this->adaptive_ = nullptr;};
    inline string adaptive() const { DARABONBA_PTR_GET_DEFAULT(adaptive_, "") };
    inline MediaConvertJobFeatureWatermarks& setAdaptive(string adaptive) { DARABONBA_PTR_SET_VALUE(adaptive_, adaptive) };


    // borderColor Field Functions 
    bool hasBorderColor() const { return this->borderColor_ != nullptr;};
    void deleteBorderColor() { this->borderColor_ = nullptr;};
    inline string borderColor() const { DARABONBA_PTR_GET_DEFAULT(borderColor_, "") };
    inline MediaConvertJobFeatureWatermarks& setBorderColor(string borderColor) { DARABONBA_PTR_SET_VALUE(borderColor_, borderColor) };


    // borderWidth Field Functions 
    bool hasBorderWidth() const { return this->borderWidth_ != nullptr;};
    void deleteBorderWidth() { this->borderWidth_ = nullptr;};
    inline string borderWidth() const { DARABONBA_PTR_GET_DEFAULT(borderWidth_, "") };
    inline MediaConvertJobFeatureWatermarks& setBorderWidth(string borderWidth) { DARABONBA_PTR_SET_VALUE(borderWidth_, borderWidth) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline MediaConvertJobFeatureWatermarks& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // fontAlpha Field Functions 
    bool hasFontAlpha() const { return this->fontAlpha_ != nullptr;};
    void deleteFontAlpha() { this->fontAlpha_ = nullptr;};
    inline string fontAlpha() const { DARABONBA_PTR_GET_DEFAULT(fontAlpha_, "") };
    inline MediaConvertJobFeatureWatermarks& setFontAlpha(string fontAlpha) { DARABONBA_PTR_SET_VALUE(fontAlpha_, fontAlpha) };


    // fontColor Field Functions 
    bool hasFontColor() const { return this->fontColor_ != nullptr;};
    void deleteFontColor() { this->fontColor_ = nullptr;};
    inline string fontColor() const { DARABONBA_PTR_GET_DEFAULT(fontColor_, "") };
    inline MediaConvertJobFeatureWatermarks& setFontColor(string fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };


    // fontName Field Functions 
    bool hasFontName() const { return this->fontName_ != nullptr;};
    void deleteFontName() { this->fontName_ = nullptr;};
    inline string fontName() const { DARABONBA_PTR_GET_DEFAULT(fontName_, "") };
    inline MediaConvertJobFeatureWatermarks& setFontName(string fontName) { DARABONBA_PTR_SET_VALUE(fontName_, fontName) };


    // fontSize Field Functions 
    bool hasFontSize() const { return this->fontSize_ != nullptr;};
    void deleteFontSize() { this->fontSize_ = nullptr;};
    inline string fontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, "") };
    inline MediaConvertJobFeatureWatermarks& setFontSize(string fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline MediaConvertJobFeatureWatermarks& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline MediaConvertJobFeatureWatermarks& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MediaConvertJobFeatureWatermarks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline MediaConvertJobFeatureWatermarks& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline string x() const { DARABONBA_PTR_GET_DEFAULT(x_, "") };
    inline MediaConvertJobFeatureWatermarks& setX(string x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline string y() const { DARABONBA_PTR_GET_DEFAULT(y_, "") };
    inline MediaConvertJobFeatureWatermarks& setY(string y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    std::shared_ptr<string> adaptive_ = nullptr;
    std::shared_ptr<string> borderColor_ = nullptr;
    std::shared_ptr<string> borderWidth_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> fontAlpha_ = nullptr;
    std::shared_ptr<string> fontColor_ = nullptr;
    std::shared_ptr<string> fontName_ = nullptr;
    std::shared_ptr<string> fontSize_ = nullptr;
    std::shared_ptr<string> height_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> width_ = nullptr;
    std::shared_ptr<string> x_ = nullptr;
    std::shared_ptr<string> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
