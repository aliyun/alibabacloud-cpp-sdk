// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WRITINGSTYLETEMPLATEFIELDSTYLE_HPP_
#define ALIBABACLOUD_MODELS_WRITINGSTYLETEMPLATEFIELDSTYLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class WritingStyleTemplateFieldStyle : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WritingStyleTemplateFieldStyle& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(Placeholder, placeholder_);
      DARABONBA_PTR_TO_JSON(ShowTime, showTime_);
      DARABONBA_PTR_TO_JSON(Suffix, suffix_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, WritingStyleTemplateFieldStyle& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(Placeholder, placeholder_);
      DARABONBA_PTR_FROM_JSON(ShowTime, showTime_);
      DARABONBA_PTR_FROM_JSON(Suffix, suffix_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    WritingStyleTemplateFieldStyle() = default ;
    WritingStyleTemplateFieldStyle(const WritingStyleTemplateFieldStyle &) = default ;
    WritingStyleTemplateFieldStyle(WritingStyleTemplateFieldStyle &&) = default ;
    WritingStyleTemplateFieldStyle(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WritingStyleTemplateFieldStyle() = default ;
    WritingStyleTemplateFieldStyle& operator=(const WritingStyleTemplateFieldStyle &) = default ;
    WritingStyleTemplateFieldStyle& operator=(WritingStyleTemplateFieldStyle &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->format_ != nullptr && this->placeholder_ != nullptr && this->showTime_ != nullptr && this->suffix_ != nullptr && this->type_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline WritingStyleTemplateFieldStyle& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline string format() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
    inline WritingStyleTemplateFieldStyle& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


    // placeholder Field Functions 
    bool hasPlaceholder() const { return this->placeholder_ != nullptr;};
    void deletePlaceholder() { this->placeholder_ = nullptr;};
    inline string placeholder() const { DARABONBA_PTR_GET_DEFAULT(placeholder_, "") };
    inline WritingStyleTemplateFieldStyle& setPlaceholder(string placeholder) { DARABONBA_PTR_SET_VALUE(placeholder_, placeholder) };


    // showTime Field Functions 
    bool hasShowTime() const { return this->showTime_ != nullptr;};
    void deleteShowTime() { this->showTime_ = nullptr;};
    inline bool showTime() const { DARABONBA_PTR_GET_DEFAULT(showTime_, false) };
    inline WritingStyleTemplateFieldStyle& setShowTime(bool showTime) { DARABONBA_PTR_SET_VALUE(showTime_, showTime) };


    // suffix Field Functions 
    bool hasSuffix() const { return this->suffix_ != nullptr;};
    void deleteSuffix() { this->suffix_ = nullptr;};
    inline string suffix() const { DARABONBA_PTR_GET_DEFAULT(suffix_, "") };
    inline WritingStyleTemplateFieldStyle& setSuffix(string suffix) { DARABONBA_PTR_SET_VALUE(suffix_, suffix) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline WritingStyleTemplateFieldStyle& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> format_ = nullptr;
    std::shared_ptr<string> placeholder_ = nullptr;
    std::shared_ptr<bool> showTime_ = nullptr;
    std::shared_ptr<string> suffix_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
