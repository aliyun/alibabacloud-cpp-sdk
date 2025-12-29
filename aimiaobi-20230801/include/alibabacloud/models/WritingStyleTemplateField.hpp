// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WRITINGSTYLETEMPLATEFIELD_HPP_
#define ALIBABACLOUD_MODELS_WRITINGSTYLETEMPLATEFIELD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WritingStyleTemplateField.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class WritingStyleTemplateField : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WritingStyleTemplateField& obj) { 
      DARABONBA_PTR_TO_JSON(BuildIn, buildIn_);
      DARABONBA_PTR_TO_JSON(CascadingFields, cascadingFields_);
      DARABONBA_PTR_TO_JSON(Enums, enums_);
      DARABONBA_PTR_TO_JSON(InitialValue, initialValue_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Max, max_);
      DARABONBA_PTR_TO_JSON(MaxItem, maxItem_);
      DARABONBA_PTR_TO_JSON(MaxItemLength, maxItemLength_);
      DARABONBA_PTR_TO_JSON(MaxLength, maxLength_);
      DARABONBA_PTR_TO_JSON(Min, min_);
      DARABONBA_PTR_TO_JSON(MinItemLength, minItemLength_);
      DARABONBA_PTR_TO_JSON(MinLength, minLength_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Required, required_);
      DARABONBA_PTR_TO_JSON(Style, style_);
    };
    friend void from_json(const Darabonba::Json& j, WritingStyleTemplateField& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildIn, buildIn_);
      DARABONBA_PTR_FROM_JSON(CascadingFields, cascadingFields_);
      DARABONBA_PTR_FROM_JSON(Enums, enums_);
      DARABONBA_PTR_FROM_JSON(InitialValue, initialValue_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Max, max_);
      DARABONBA_PTR_FROM_JSON(MaxItem, maxItem_);
      DARABONBA_PTR_FROM_JSON(MaxItemLength, maxItemLength_);
      DARABONBA_PTR_FROM_JSON(MaxLength, maxLength_);
      DARABONBA_PTR_FROM_JSON(Min, min_);
      DARABONBA_PTR_FROM_JSON(MinItemLength, minItemLength_);
      DARABONBA_PTR_FROM_JSON(MinLength, minLength_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Required, required_);
      DARABONBA_PTR_FROM_JSON(Style, style_);
    };
    WritingStyleTemplateField() = default ;
    WritingStyleTemplateField(const WritingStyleTemplateField &) = default ;
    WritingStyleTemplateField(WritingStyleTemplateField &&) = default ;
    WritingStyleTemplateField(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WritingStyleTemplateField() = default ;
    WritingStyleTemplateField& operator=(const WritingStyleTemplateField &) = default ;
    WritingStyleTemplateField& operator=(WritingStyleTemplateField &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Style : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Style& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Format, format_);
        DARABONBA_PTR_TO_JSON(Placeholder, placeholder_);
        DARABONBA_PTR_TO_JSON(ShowTime, showTime_);
        DARABONBA_PTR_TO_JSON(Suffix, suffix_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Style& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Format, format_);
        DARABONBA_PTR_FROM_JSON(Placeholder, placeholder_);
        DARABONBA_PTR_FROM_JSON(ShowTime, showTime_);
        DARABONBA_PTR_FROM_JSON(Suffix, suffix_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Style() = default ;
      Style(const Style &) = default ;
      Style(Style &&) = default ;
      Style(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Style() = default ;
      Style& operator=(const Style &) = default ;
      Style& operator=(Style &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->format_ == nullptr && this->placeholder_ == nullptr && this->showTime_ == nullptr && this->suffix_ == nullptr && this->type_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Style& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // format Field Functions 
      bool hasFormat() const { return this->format_ != nullptr;};
      void deleteFormat() { this->format_ = nullptr;};
      inline string getFormat() const { DARABONBA_PTR_GET_DEFAULT(format_, "") };
      inline Style& setFormat(string format) { DARABONBA_PTR_SET_VALUE(format_, format) };


      // placeholder Field Functions 
      bool hasPlaceholder() const { return this->placeholder_ != nullptr;};
      void deletePlaceholder() { this->placeholder_ = nullptr;};
      inline string getPlaceholder() const { DARABONBA_PTR_GET_DEFAULT(placeholder_, "") };
      inline Style& setPlaceholder(string placeholder) { DARABONBA_PTR_SET_VALUE(placeholder_, placeholder) };


      // showTime Field Functions 
      bool hasShowTime() const { return this->showTime_ != nullptr;};
      void deleteShowTime() { this->showTime_ = nullptr;};
      inline bool getShowTime() const { DARABONBA_PTR_GET_DEFAULT(showTime_, false) };
      inline Style& setShowTime(bool showTime) { DARABONBA_PTR_SET_VALUE(showTime_, showTime) };


      // suffix Field Functions 
      bool hasSuffix() const { return this->suffix_ != nullptr;};
      void deleteSuffix() { this->suffix_ = nullptr;};
      inline string getSuffix() const { DARABONBA_PTR_GET_DEFAULT(suffix_, "") };
      inline Style& setSuffix(string suffix) { DARABONBA_PTR_SET_VALUE(suffix_, suffix) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Style& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> format_ {};
      shared_ptr<string> placeholder_ {};
      shared_ptr<bool> showTime_ {};
      shared_ptr<string> suffix_ {};
      shared_ptr<string> type_ {};
    };

    class Enums : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Enums& obj) { 
        DARABONBA_PTR_TO_JSON(CascadingFields, cascadingFields_);
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Enums& obj) { 
        DARABONBA_PTR_FROM_JSON(CascadingFields, cascadingFields_);
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      Enums() = default ;
      Enums(const Enums &) = default ;
      Enums(Enums &&) = default ;
      Enums(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Enums() = default ;
      Enums& operator=(const Enums &) = default ;
      Enums& operator=(Enums &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cascadingFields_ == nullptr
        && this->key_ == nullptr && this->name_ == nullptr; };
      // cascadingFields Field Functions 
      bool hasCascadingFields() const { return this->cascadingFields_ != nullptr;};
      void deleteCascadingFields() { this->cascadingFields_ = nullptr;};
      inline const vector<string> & getCascadingFields() const { DARABONBA_PTR_GET_CONST(cascadingFields_, vector<string>) };
      inline vector<string> getCascadingFields() { DARABONBA_PTR_GET(cascadingFields_, vector<string>) };
      inline Enums& setCascadingFields(const vector<string> & cascadingFields) { DARABONBA_PTR_SET_VALUE(cascadingFields_, cascadingFields) };
      inline Enums& setCascadingFields(vector<string> && cascadingFields) { DARABONBA_PTR_SET_RVALUE(cascadingFields_, cascadingFields) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Enums& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Enums& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<vector<string>> cascadingFields_ {};
      shared_ptr<string> key_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->buildIn_ == nullptr
        && this->cascadingFields_ == nullptr && this->enums_ == nullptr && this->initialValue_ == nullptr && this->key_ == nullptr && this->max_ == nullptr
        && this->maxItem_ == nullptr && this->maxItemLength_ == nullptr && this->maxLength_ == nullptr && this->min_ == nullptr && this->minItemLength_ == nullptr
        && this->minLength_ == nullptr && this->name_ == nullptr && this->required_ == nullptr && this->style_ == nullptr; };
    // buildIn Field Functions 
    bool hasBuildIn() const { return this->buildIn_ != nullptr;};
    void deleteBuildIn() { this->buildIn_ = nullptr;};
    inline bool getBuildIn() const { DARABONBA_PTR_GET_DEFAULT(buildIn_, false) };
    inline WritingStyleTemplateField& setBuildIn(bool buildIn) { DARABONBA_PTR_SET_VALUE(buildIn_, buildIn) };


    // cascadingFields Field Functions 
    bool hasCascadingFields() const { return this->cascadingFields_ != nullptr;};
    void deleteCascadingFields() { this->cascadingFields_ = nullptr;};
    inline const vector<WritingStyleTemplateField> & getCascadingFields() const { DARABONBA_PTR_GET_CONST(cascadingFields_, vector<WritingStyleTemplateField>) };
    inline vector<WritingStyleTemplateField> getCascadingFields() { DARABONBA_PTR_GET(cascadingFields_, vector<WritingStyleTemplateField>) };
    inline WritingStyleTemplateField& setCascadingFields(const vector<WritingStyleTemplateField> & cascadingFields) { DARABONBA_PTR_SET_VALUE(cascadingFields_, cascadingFields) };
    inline WritingStyleTemplateField& setCascadingFields(vector<WritingStyleTemplateField> && cascadingFields) { DARABONBA_PTR_SET_RVALUE(cascadingFields_, cascadingFields) };


    // enums Field Functions 
    bool hasEnums() const { return this->enums_ != nullptr;};
    void deleteEnums() { this->enums_ = nullptr;};
    inline const vector<WritingStyleTemplateField::Enums> & getEnums() const { DARABONBA_PTR_GET_CONST(enums_, vector<WritingStyleTemplateField::Enums>) };
    inline vector<WritingStyleTemplateField::Enums> getEnums() { DARABONBA_PTR_GET(enums_, vector<WritingStyleTemplateField::Enums>) };
    inline WritingStyleTemplateField& setEnums(const vector<WritingStyleTemplateField::Enums> & enums) { DARABONBA_PTR_SET_VALUE(enums_, enums) };
    inline WritingStyleTemplateField& setEnums(vector<WritingStyleTemplateField::Enums> && enums) { DARABONBA_PTR_SET_RVALUE(enums_, enums) };


    // initialValue Field Functions 
    bool hasInitialValue() const { return this->initialValue_ != nullptr;};
    void deleteInitialValue() { this->initialValue_ = nullptr;};
    inline string getInitialValue() const { DARABONBA_PTR_GET_DEFAULT(initialValue_, "") };
    inline WritingStyleTemplateField& setInitialValue(string initialValue) { DARABONBA_PTR_SET_VALUE(initialValue_, initialValue) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline WritingStyleTemplateField& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline double getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0.0) };
    inline WritingStyleTemplateField& setMax(double max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // maxItem Field Functions 
    bool hasMaxItem() const { return this->maxItem_ != nullptr;};
    void deleteMaxItem() { this->maxItem_ = nullptr;};
    inline int32_t getMaxItem() const { DARABONBA_PTR_GET_DEFAULT(maxItem_, 0) };
    inline WritingStyleTemplateField& setMaxItem(int32_t maxItem) { DARABONBA_PTR_SET_VALUE(maxItem_, maxItem) };


    // maxItemLength Field Functions 
    bool hasMaxItemLength() const { return this->maxItemLength_ != nullptr;};
    void deleteMaxItemLength() { this->maxItemLength_ = nullptr;};
    inline int32_t getMaxItemLength() const { DARABONBA_PTR_GET_DEFAULT(maxItemLength_, 0) };
    inline WritingStyleTemplateField& setMaxItemLength(int32_t maxItemLength) { DARABONBA_PTR_SET_VALUE(maxItemLength_, maxItemLength) };


    // maxLength Field Functions 
    bool hasMaxLength() const { return this->maxLength_ != nullptr;};
    void deleteMaxLength() { this->maxLength_ = nullptr;};
    inline int32_t getMaxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0) };
    inline WritingStyleTemplateField& setMaxLength(int32_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline double getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0.0) };
    inline WritingStyleTemplateField& setMin(double min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    // minItemLength Field Functions 
    bool hasMinItemLength() const { return this->minItemLength_ != nullptr;};
    void deleteMinItemLength() { this->minItemLength_ = nullptr;};
    inline int32_t getMinItemLength() const { DARABONBA_PTR_GET_DEFAULT(minItemLength_, 0) };
    inline WritingStyleTemplateField& setMinItemLength(int32_t minItemLength) { DARABONBA_PTR_SET_VALUE(minItemLength_, minItemLength) };


    // minLength Field Functions 
    bool hasMinLength() const { return this->minLength_ != nullptr;};
    void deleteMinLength() { this->minLength_ = nullptr;};
    inline int32_t getMinLength() const { DARABONBA_PTR_GET_DEFAULT(minLength_, 0) };
    inline WritingStyleTemplateField& setMinLength(int32_t minLength) { DARABONBA_PTR_SET_VALUE(minLength_, minLength) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline WritingStyleTemplateField& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
    inline WritingStyleTemplateField& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


    // style Field Functions 
    bool hasStyle() const { return this->style_ != nullptr;};
    void deleteStyle() { this->style_ = nullptr;};
    inline const WritingStyleTemplateField::Style & getStyle() const { DARABONBA_PTR_GET_CONST(style_, WritingStyleTemplateField::Style) };
    inline WritingStyleTemplateField::Style getStyle() { DARABONBA_PTR_GET(style_, WritingStyleTemplateField::Style) };
    inline WritingStyleTemplateField& setStyle(const WritingStyleTemplateField::Style & style) { DARABONBA_PTR_SET_VALUE(style_, style) };
    inline WritingStyleTemplateField& setStyle(WritingStyleTemplateField::Style && style) { DARABONBA_PTR_SET_RVALUE(style_, style) };


  protected:
    shared_ptr<bool> buildIn_ {};
    shared_ptr<vector<WritingStyleTemplateField>> cascadingFields_ {};
    shared_ptr<vector<WritingStyleTemplateField::Enums>> enums_ {};
    shared_ptr<string> initialValue_ {};
    shared_ptr<string> key_ {};
    shared_ptr<double> max_ {};
    shared_ptr<int32_t> maxItem_ {};
    shared_ptr<int32_t> maxItemLength_ {};
    shared_ptr<int32_t> maxLength_ {};
    shared_ptr<double> min_ {};
    shared_ptr<int32_t> minItemLength_ {};
    shared_ptr<int32_t> minLength_ {};
    shared_ptr<string> name_ {};
    shared_ptr<bool> required_ {};
    shared_ptr<WritingStyleTemplateField::Style> style_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
