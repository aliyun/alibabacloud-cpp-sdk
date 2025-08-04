// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WRITINGSTYLETEMPLATEFIELD_HPP_
#define ALIBABACLOUD_MODELS_WRITINGSTYLETEMPLATEFIELD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/AiMiaoBi20230801.hpp>
#include <alibabacloud/models/WritingStyleTemplateFieldEnums.hpp>
#include <alibabacloud/models/WritingStyleTemplateFieldStyle.hpp>
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
    virtual bool empty() const override { this->buildIn_ != nullptr
        && this->cascadingFields_ != nullptr && this->enums_ != nullptr && this->initialValue_ != nullptr && this->key_ != nullptr && this->max_ != nullptr
        && this->maxItem_ != nullptr && this->maxItemLength_ != nullptr && this->maxLength_ != nullptr && this->min_ != nullptr && this->minItemLength_ != nullptr
        && this->minLength_ != nullptr && this->name_ != nullptr && this->required_ != nullptr && this->style_ != nullptr; };
    // buildIn Field Functions 
    bool hasBuildIn() const { return this->buildIn_ != nullptr;};
    void deleteBuildIn() { this->buildIn_ = nullptr;};
    inline bool buildIn() const { DARABONBA_PTR_GET_DEFAULT(buildIn_, false) };
    inline WritingStyleTemplateField& setBuildIn(bool buildIn) { DARABONBA_PTR_SET_VALUE(buildIn_, buildIn) };


    // cascadingFields Field Functions 
    bool hasCascadingFields() const { return this->cascadingFields_ != nullptr;};
    void deleteCascadingFields() { this->cascadingFields_ = nullptr;};
    inline const vector<WritingStyleTemplateField> & cascadingFields() const { DARABONBA_PTR_GET_CONST(cascadingFields_, vector<WritingStyleTemplateField>) };
    inline vector<WritingStyleTemplateField> cascadingFields() { DARABONBA_PTR_GET(cascadingFields_, vector<WritingStyleTemplateField>) };
    inline WritingStyleTemplateField& setCascadingFields(const vector<WritingStyleTemplateField> & cascadingFields) { DARABONBA_PTR_SET_VALUE(cascadingFields_, cascadingFields) };
    inline WritingStyleTemplateField& setCascadingFields(vector<WritingStyleTemplateField> && cascadingFields) { DARABONBA_PTR_SET_RVALUE(cascadingFields_, cascadingFields) };


    // enums Field Functions 
    bool hasEnums() const { return this->enums_ != nullptr;};
    void deleteEnums() { this->enums_ = nullptr;};
    inline const vector<WritingStyleTemplateFieldEnums> & enums() const { DARABONBA_PTR_GET_CONST(enums_, vector<WritingStyleTemplateFieldEnums>) };
    inline vector<WritingStyleTemplateFieldEnums> enums() { DARABONBA_PTR_GET(enums_, vector<WritingStyleTemplateFieldEnums>) };
    inline WritingStyleTemplateField& setEnums(const vector<WritingStyleTemplateFieldEnums> & enums) { DARABONBA_PTR_SET_VALUE(enums_, enums) };
    inline WritingStyleTemplateField& setEnums(vector<WritingStyleTemplateFieldEnums> && enums) { DARABONBA_PTR_SET_RVALUE(enums_, enums) };


    // initialValue Field Functions 
    bool hasInitialValue() const { return this->initialValue_ != nullptr;};
    void deleteInitialValue() { this->initialValue_ = nullptr;};
    inline string initialValue() const { DARABONBA_PTR_GET_DEFAULT(initialValue_, "") };
    inline WritingStyleTemplateField& setInitialValue(string initialValue) { DARABONBA_PTR_SET_VALUE(initialValue_, initialValue) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline WritingStyleTemplateField& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline double max() const { DARABONBA_PTR_GET_DEFAULT(max_, 0.0) };
    inline WritingStyleTemplateField& setMax(double max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // maxItem Field Functions 
    bool hasMaxItem() const { return this->maxItem_ != nullptr;};
    void deleteMaxItem() { this->maxItem_ = nullptr;};
    inline int32_t maxItem() const { DARABONBA_PTR_GET_DEFAULT(maxItem_, 0) };
    inline WritingStyleTemplateField& setMaxItem(int32_t maxItem) { DARABONBA_PTR_SET_VALUE(maxItem_, maxItem) };


    // maxItemLength Field Functions 
    bool hasMaxItemLength() const { return this->maxItemLength_ != nullptr;};
    void deleteMaxItemLength() { this->maxItemLength_ = nullptr;};
    inline int32_t maxItemLength() const { DARABONBA_PTR_GET_DEFAULT(maxItemLength_, 0) };
    inline WritingStyleTemplateField& setMaxItemLength(int32_t maxItemLength) { DARABONBA_PTR_SET_VALUE(maxItemLength_, maxItemLength) };


    // maxLength Field Functions 
    bool hasMaxLength() const { return this->maxLength_ != nullptr;};
    void deleteMaxLength() { this->maxLength_ = nullptr;};
    inline int32_t maxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0) };
    inline WritingStyleTemplateField& setMaxLength(int32_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline double min() const { DARABONBA_PTR_GET_DEFAULT(min_, 0.0) };
    inline WritingStyleTemplateField& setMin(double min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    // minItemLength Field Functions 
    bool hasMinItemLength() const { return this->minItemLength_ != nullptr;};
    void deleteMinItemLength() { this->minItemLength_ = nullptr;};
    inline int32_t minItemLength() const { DARABONBA_PTR_GET_DEFAULT(minItemLength_, 0) };
    inline WritingStyleTemplateField& setMinItemLength(int32_t minItemLength) { DARABONBA_PTR_SET_VALUE(minItemLength_, minItemLength) };


    // minLength Field Functions 
    bool hasMinLength() const { return this->minLength_ != nullptr;};
    void deleteMinLength() { this->minLength_ = nullptr;};
    inline int32_t minLength() const { DARABONBA_PTR_GET_DEFAULT(minLength_, 0) };
    inline WritingStyleTemplateField& setMinLength(int32_t minLength) { DARABONBA_PTR_SET_VALUE(minLength_, minLength) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline WritingStyleTemplateField& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline bool required() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
    inline WritingStyleTemplateField& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


    // style Field Functions 
    bool hasStyle() const { return this->style_ != nullptr;};
    void deleteStyle() { this->style_ = nullptr;};
    inline const WritingStyleTemplateFieldStyle & style() const { DARABONBA_PTR_GET_CONST(style_, WritingStyleTemplateFieldStyle) };
    inline WritingStyleTemplateFieldStyle style() { DARABONBA_PTR_GET(style_, WritingStyleTemplateFieldStyle) };
    inline WritingStyleTemplateField& setStyle(const WritingStyleTemplateFieldStyle & style) { DARABONBA_PTR_SET_VALUE(style_, style) };
    inline WritingStyleTemplateField& setStyle(WritingStyleTemplateFieldStyle && style) { DARABONBA_PTR_SET_RVALUE(style_, style) };


  protected:
    std::shared_ptr<bool> buildIn_ = nullptr;
    std::shared_ptr<vector<WritingStyleTemplateField>> cascadingFields_ = nullptr;
    std::shared_ptr<vector<WritingStyleTemplateFieldEnums>> enums_ = nullptr;
    std::shared_ptr<string> initialValue_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<double> max_ = nullptr;
    std::shared_ptr<int32_t> maxItem_ = nullptr;
    std::shared_ptr<int32_t> maxItemLength_ = nullptr;
    std::shared_ptr<int32_t> maxLength_ = nullptr;
    std::shared_ptr<double> min_ = nullptr;
    std::shared_ptr<int32_t> minItemLength_ = nullptr;
    std::shared_ptr<int32_t> minLength_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> required_ = nullptr;
    std::shared_ptr<WritingStyleTemplateFieldStyle> style_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
