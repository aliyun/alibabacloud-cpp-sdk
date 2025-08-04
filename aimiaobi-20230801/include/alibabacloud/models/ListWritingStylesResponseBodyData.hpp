// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWRITINGSTYLESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTWRITINGSTYLESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListWritingStylesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWritingStylesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DistributeStepTemplateDefine, distributeStepTemplateDefine_);
      DARABONBA_PTR_TO_JSON(DistributeWriting, distributeWriting_);
      DARABONBA_PTR_TO_JSON(Emoji, emoji_);
      DARABONBA_PTR_TO_JSON(StyleDescription, styleDescription_);
      DARABONBA_PTR_TO_JSON(StyleImage, styleImage_);
      DARABONBA_PTR_TO_JSON(StyleKey, styleKey_);
      DARABONBA_PTR_TO_JSON(StyleName, styleName_);
      DARABONBA_PTR_TO_JSON(TemplateDefine, templateDefine_);
    };
    friend void from_json(const Darabonba::Json& j, ListWritingStylesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DistributeStepTemplateDefine, distributeStepTemplateDefine_);
      DARABONBA_PTR_FROM_JSON(DistributeWriting, distributeWriting_);
      DARABONBA_PTR_FROM_JSON(Emoji, emoji_);
      DARABONBA_PTR_FROM_JSON(StyleDescription, styleDescription_);
      DARABONBA_PTR_FROM_JSON(StyleImage, styleImage_);
      DARABONBA_PTR_FROM_JSON(StyleKey, styleKey_);
      DARABONBA_PTR_FROM_JSON(StyleName, styleName_);
      DARABONBA_PTR_FROM_JSON(TemplateDefine, templateDefine_);
    };
    ListWritingStylesResponseBodyData() = default ;
    ListWritingStylesResponseBodyData(const ListWritingStylesResponseBodyData &) = default ;
    ListWritingStylesResponseBodyData(ListWritingStylesResponseBodyData &&) = default ;
    ListWritingStylesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWritingStylesResponseBodyData() = default ;
    ListWritingStylesResponseBodyData& operator=(const ListWritingStylesResponseBodyData &) = default ;
    ListWritingStylesResponseBodyData& operator=(ListWritingStylesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->distributeStepTemplateDefine_ != nullptr
        && this->distributeWriting_ != nullptr && this->emoji_ != nullptr && this->styleDescription_ != nullptr && this->styleImage_ != nullptr && this->styleKey_ != nullptr
        && this->styleName_ != nullptr && this->templateDefine_ != nullptr; };
    // distributeStepTemplateDefine Field Functions 
    bool hasDistributeStepTemplateDefine() const { return this->distributeStepTemplateDefine_ != nullptr;};
    void deleteDistributeStepTemplateDefine() { this->distributeStepTemplateDefine_ = nullptr;};
    inline const Models::WritingStyleTemplateDefine & distributeStepTemplateDefine() const { DARABONBA_PTR_GET_CONST(distributeStepTemplateDefine_, Models::WritingStyleTemplateDefine) };
    inline Models::WritingStyleTemplateDefine distributeStepTemplateDefine() { DARABONBA_PTR_GET(distributeStepTemplateDefine_, Models::WritingStyleTemplateDefine) };
    inline ListWritingStylesResponseBodyData& setDistributeStepTemplateDefine(const Models::WritingStyleTemplateDefine & distributeStepTemplateDefine) { DARABONBA_PTR_SET_VALUE(distributeStepTemplateDefine_, distributeStepTemplateDefine) };
    inline ListWritingStylesResponseBodyData& setDistributeStepTemplateDefine(Models::WritingStyleTemplateDefine && distributeStepTemplateDefine) { DARABONBA_PTR_SET_RVALUE(distributeStepTemplateDefine_, distributeStepTemplateDefine) };


    // distributeWriting Field Functions 
    bool hasDistributeWriting() const { return this->distributeWriting_ != nullptr;};
    void deleteDistributeWriting() { this->distributeWriting_ = nullptr;};
    inline bool distributeWriting() const { DARABONBA_PTR_GET_DEFAULT(distributeWriting_, false) };
    inline ListWritingStylesResponseBodyData& setDistributeWriting(bool distributeWriting) { DARABONBA_PTR_SET_VALUE(distributeWriting_, distributeWriting) };


    // emoji Field Functions 
    bool hasEmoji() const { return this->emoji_ != nullptr;};
    void deleteEmoji() { this->emoji_ = nullptr;};
    inline string emoji() const { DARABONBA_PTR_GET_DEFAULT(emoji_, "") };
    inline ListWritingStylesResponseBodyData& setEmoji(string emoji) { DARABONBA_PTR_SET_VALUE(emoji_, emoji) };


    // styleDescription Field Functions 
    bool hasStyleDescription() const { return this->styleDescription_ != nullptr;};
    void deleteStyleDescription() { this->styleDescription_ = nullptr;};
    inline string styleDescription() const { DARABONBA_PTR_GET_DEFAULT(styleDescription_, "") };
    inline ListWritingStylesResponseBodyData& setStyleDescription(string styleDescription) { DARABONBA_PTR_SET_VALUE(styleDescription_, styleDescription) };


    // styleImage Field Functions 
    bool hasStyleImage() const { return this->styleImage_ != nullptr;};
    void deleteStyleImage() { this->styleImage_ = nullptr;};
    inline string styleImage() const { DARABONBA_PTR_GET_DEFAULT(styleImage_, "") };
    inline ListWritingStylesResponseBodyData& setStyleImage(string styleImage) { DARABONBA_PTR_SET_VALUE(styleImage_, styleImage) };


    // styleKey Field Functions 
    bool hasStyleKey() const { return this->styleKey_ != nullptr;};
    void deleteStyleKey() { this->styleKey_ = nullptr;};
    inline string styleKey() const { DARABONBA_PTR_GET_DEFAULT(styleKey_, "") };
    inline ListWritingStylesResponseBodyData& setStyleKey(string styleKey) { DARABONBA_PTR_SET_VALUE(styleKey_, styleKey) };


    // styleName Field Functions 
    bool hasStyleName() const { return this->styleName_ != nullptr;};
    void deleteStyleName() { this->styleName_ = nullptr;};
    inline string styleName() const { DARABONBA_PTR_GET_DEFAULT(styleName_, "") };
    inline ListWritingStylesResponseBodyData& setStyleName(string styleName) { DARABONBA_PTR_SET_VALUE(styleName_, styleName) };


    // templateDefine Field Functions 
    bool hasTemplateDefine() const { return this->templateDefine_ != nullptr;};
    void deleteTemplateDefine() { this->templateDefine_ = nullptr;};
    inline const Models::WritingStyleTemplateDefine & templateDefine() const { DARABONBA_PTR_GET_CONST(templateDefine_, Models::WritingStyleTemplateDefine) };
    inline Models::WritingStyleTemplateDefine templateDefine() { DARABONBA_PTR_GET(templateDefine_, Models::WritingStyleTemplateDefine) };
    inline ListWritingStylesResponseBodyData& setTemplateDefine(const Models::WritingStyleTemplateDefine & templateDefine) { DARABONBA_PTR_SET_VALUE(templateDefine_, templateDefine) };
    inline ListWritingStylesResponseBodyData& setTemplateDefine(Models::WritingStyleTemplateDefine && templateDefine) { DARABONBA_PTR_SET_RVALUE(templateDefine_, templateDefine) };


  protected:
    std::shared_ptr<Models::WritingStyleTemplateDefine> distributeStepTemplateDefine_ = nullptr;
    std::shared_ptr<bool> distributeWriting_ = nullptr;
    std::shared_ptr<string> emoji_ = nullptr;
    std::shared_ptr<string> styleDescription_ = nullptr;
    std::shared_ptr<string> styleImage_ = nullptr;
    std::shared_ptr<string> styleKey_ = nullptr;
    std::shared_ptr<string> styleName_ = nullptr;
    std::shared_ptr<Models::WritingStyleTemplateDefine> templateDefine_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
