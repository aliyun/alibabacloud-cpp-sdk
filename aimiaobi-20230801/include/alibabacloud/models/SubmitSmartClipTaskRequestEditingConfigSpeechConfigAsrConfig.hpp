// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSMARTCLIPTASKREQUESTEDITINGCONFIGSPEECHCONFIGASRCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSMARTCLIPTASKREQUESTEDITINGCONFIGSPEECHCONFIGASRCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Alignment, alignment_);
      DARABONBA_PTR_TO_JSON(Font, font_);
      DARABONBA_PTR_TO_JSON(FontColor, fontColor_);
      DARABONBA_PTR_TO_JSON(FontSize, fontSize_);
      DARABONBA_PTR_TO_JSON(Spacing, spacing_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Alignment, alignment_);
      DARABONBA_PTR_FROM_JSON(Font, font_);
      DARABONBA_PTR_FROM_JSON(FontColor, fontColor_);
      DARABONBA_PTR_FROM_JSON(FontSize, fontSize_);
      DARABONBA_PTR_FROM_JSON(Spacing, spacing_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig() = default ;
    SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig(const SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig &) = default ;
    SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig(SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig &&) = default ;
    SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig() = default ;
    SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig& operator=(const SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig &) = default ;
    SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig& operator=(SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alignment_ != nullptr
        && this->font_ != nullptr && this->fontColor_ != nullptr && this->fontSize_ != nullptr && this->spacing_ != nullptr && this->x_ != nullptr
        && this->y_ != nullptr; };
    // alignment Field Functions 
    bool hasAlignment() const { return this->alignment_ != nullptr;};
    void deleteAlignment() { this->alignment_ = nullptr;};
    inline string alignment() const { DARABONBA_PTR_GET_DEFAULT(alignment_, "") };
    inline SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig& setAlignment(string alignment) { DARABONBA_PTR_SET_VALUE(alignment_, alignment) };


    // font Field Functions 
    bool hasFont() const { return this->font_ != nullptr;};
    void deleteFont() { this->font_ = nullptr;};
    inline string font() const { DARABONBA_PTR_GET_DEFAULT(font_, "") };
    inline SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig& setFont(string font) { DARABONBA_PTR_SET_VALUE(font_, font) };


    // fontColor Field Functions 
    bool hasFontColor() const { return this->fontColor_ != nullptr;};
    void deleteFontColor() { this->fontColor_ = nullptr;};
    inline string fontColor() const { DARABONBA_PTR_GET_DEFAULT(fontColor_, "") };
    inline SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig& setFontColor(string fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };


    // fontSize Field Functions 
    bool hasFontSize() const { return this->fontSize_ != nullptr;};
    void deleteFontSize() { this->fontSize_ = nullptr;};
    inline string fontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, "") };
    inline SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig& setFontSize(string fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


    // spacing Field Functions 
    bool hasSpacing() const { return this->spacing_ != nullptr;};
    void deleteSpacing() { this->spacing_ = nullptr;};
    inline string spacing() const { DARABONBA_PTR_GET_DEFAULT(spacing_, "") };
    inline SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig& setSpacing(string spacing) { DARABONBA_PTR_SET_VALUE(spacing_, spacing) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline float x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
    inline SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline float y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
    inline SubmitSmartClipTaskRequestEditingConfigSpeechConfigAsrConfig& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    std::shared_ptr<string> alignment_ = nullptr;
    std::shared_ptr<string> font_ = nullptr;
    std::shared_ptr<string> fontColor_ = nullptr;
    std::shared_ptr<string> fontSize_ = nullptr;
    std::shared_ptr<string> spacing_ = nullptr;
    std::shared_ptr<float> x_ = nullptr;
    std::shared_ptr<float> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
