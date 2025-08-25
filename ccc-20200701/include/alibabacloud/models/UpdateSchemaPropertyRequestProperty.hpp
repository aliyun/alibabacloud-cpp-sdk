// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESCHEMAPROPERTYREQUESTPROPERTY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESCHEMAPROPERTYREQUESTPROPERTY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class UpdateSchemaPropertyRequestProperty : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSchemaPropertyRequestProperty& obj) { 
      DARABONBA_PTR_TO_JSON(Array, array_);
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Disabled, disabled_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(DisplayOrder, displayOrder_);
      DARABONBA_PTR_TO_JSON(EditorType, editorType_);
      DARABONBA_PTR_TO_JSON(MaxLength, maxLength_);
      DARABONBA_PTR_TO_JSON(Maximum, maximum_);
      DARABONBA_PTR_TO_JSON(MinLength, minLength_);
      DARABONBA_PTR_TO_JSON(Minimum, minimum_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Pattern, pattern_);
      DARABONBA_PTR_TO_JSON(PatternErrorMessage, patternErrorMessage_);
      DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
      DARABONBA_PTR_TO_JSON(Required, required_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSchemaPropertyRequestProperty& obj) { 
      DARABONBA_PTR_FROM_JSON(Array, array_);
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(DisplayOrder, displayOrder_);
      DARABONBA_PTR_FROM_JSON(EditorType, editorType_);
      DARABONBA_PTR_FROM_JSON(MaxLength, maxLength_);
      DARABONBA_PTR_FROM_JSON(Maximum, maximum_);
      DARABONBA_PTR_FROM_JSON(MinLength, minLength_);
      DARABONBA_PTR_FROM_JSON(Minimum, minimum_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
      DARABONBA_PTR_FROM_JSON(PatternErrorMessage, patternErrorMessage_);
      DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
      DARABONBA_PTR_FROM_JSON(Required, required_);
    };
    UpdateSchemaPropertyRequestProperty() = default ;
    UpdateSchemaPropertyRequestProperty(const UpdateSchemaPropertyRequestProperty &) = default ;
    UpdateSchemaPropertyRequestProperty(UpdateSchemaPropertyRequestProperty &&) = default ;
    UpdateSchemaPropertyRequestProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSchemaPropertyRequestProperty() = default ;
    UpdateSchemaPropertyRequestProperty& operator=(const UpdateSchemaPropertyRequestProperty &) = default ;
    UpdateSchemaPropertyRequestProperty& operator=(UpdateSchemaPropertyRequestProperty &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->array_ != nullptr
        && this->attributes_ != nullptr && this->dataType_ != nullptr && this->description_ != nullptr && this->disabled_ != nullptr && this->displayName_ != nullptr
        && this->displayOrder_ != nullptr && this->editorType_ != nullptr && this->maxLength_ != nullptr && this->maximum_ != nullptr && this->minLength_ != nullptr
        && this->minimum_ != nullptr && this->name_ != nullptr && this->pattern_ != nullptr && this->patternErrorMessage_ != nullptr && this->readOnly_ != nullptr
        && this->required_ != nullptr; };
    // array Field Functions 
    bool hasArray() const { return this->array_ != nullptr;};
    void deleteArray() { this->array_ = nullptr;};
    inline bool array() const { DARABONBA_PTR_GET_DEFAULT(array_, false) };
    inline UpdateSchemaPropertyRequestProperty& setArray(bool array) { DARABONBA_PTR_SET_VALUE(array_, array) };


    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline string attributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
    inline UpdateSchemaPropertyRequestProperty& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline UpdateSchemaPropertyRequestProperty& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateSchemaPropertyRequestProperty& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool disabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline UpdateSchemaPropertyRequestProperty& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateSchemaPropertyRequestProperty& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // displayOrder Field Functions 
    bool hasDisplayOrder() const { return this->displayOrder_ != nullptr;};
    void deleteDisplayOrder() { this->displayOrder_ = nullptr;};
    inline int32_t displayOrder() const { DARABONBA_PTR_GET_DEFAULT(displayOrder_, 0) };
    inline UpdateSchemaPropertyRequestProperty& setDisplayOrder(int32_t displayOrder) { DARABONBA_PTR_SET_VALUE(displayOrder_, displayOrder) };


    // editorType Field Functions 
    bool hasEditorType() const { return this->editorType_ != nullptr;};
    void deleteEditorType() { this->editorType_ = nullptr;};
    inline string editorType() const { DARABONBA_PTR_GET_DEFAULT(editorType_, "") };
    inline UpdateSchemaPropertyRequestProperty& setEditorType(string editorType) { DARABONBA_PTR_SET_VALUE(editorType_, editorType) };


    // maxLength Field Functions 
    bool hasMaxLength() const { return this->maxLength_ != nullptr;};
    void deleteMaxLength() { this->maxLength_ = nullptr;};
    inline int32_t maxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0) };
    inline UpdateSchemaPropertyRequestProperty& setMaxLength(int32_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


    // maximum Field Functions 
    bool hasMaximum() const { return this->maximum_ != nullptr;};
    void deleteMaximum() { this->maximum_ = nullptr;};
    inline double maximum() const { DARABONBA_PTR_GET_DEFAULT(maximum_, 0.0) };
    inline UpdateSchemaPropertyRequestProperty& setMaximum(double maximum) { DARABONBA_PTR_SET_VALUE(maximum_, maximum) };


    // minLength Field Functions 
    bool hasMinLength() const { return this->minLength_ != nullptr;};
    void deleteMinLength() { this->minLength_ = nullptr;};
    inline int32_t minLength() const { DARABONBA_PTR_GET_DEFAULT(minLength_, 0) };
    inline UpdateSchemaPropertyRequestProperty& setMinLength(int32_t minLength) { DARABONBA_PTR_SET_VALUE(minLength_, minLength) };


    // minimum Field Functions 
    bool hasMinimum() const { return this->minimum_ != nullptr;};
    void deleteMinimum() { this->minimum_ = nullptr;};
    inline double minimum() const { DARABONBA_PTR_GET_DEFAULT(minimum_, 0.0) };
    inline UpdateSchemaPropertyRequestProperty& setMinimum(double minimum) { DARABONBA_PTR_SET_VALUE(minimum_, minimum) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateSchemaPropertyRequestProperty& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pattern Field Functions 
    bool hasPattern() const { return this->pattern_ != nullptr;};
    void deletePattern() { this->pattern_ = nullptr;};
    inline string pattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
    inline UpdateSchemaPropertyRequestProperty& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


    // patternErrorMessage Field Functions 
    bool hasPatternErrorMessage() const { return this->patternErrorMessage_ != nullptr;};
    void deletePatternErrorMessage() { this->patternErrorMessage_ = nullptr;};
    inline string patternErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(patternErrorMessage_, "") };
    inline UpdateSchemaPropertyRequestProperty& setPatternErrorMessage(string patternErrorMessage) { DARABONBA_PTR_SET_VALUE(patternErrorMessage_, patternErrorMessage) };


    // readOnly Field Functions 
    bool hasReadOnly() const { return this->readOnly_ != nullptr;};
    void deleteReadOnly() { this->readOnly_ = nullptr;};
    inline bool readOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
    inline UpdateSchemaPropertyRequestProperty& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline bool required() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
    inline UpdateSchemaPropertyRequestProperty& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


  protected:
    std::shared_ptr<bool> array_ = nullptr;
    std::shared_ptr<string> attributes_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dataType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> disabled_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<int32_t> displayOrder_ = nullptr;
    std::shared_ptr<string> editorType_ = nullptr;
    std::shared_ptr<int32_t> maxLength_ = nullptr;
    std::shared_ptr<double> maximum_ = nullptr;
    std::shared_ptr<int32_t> minLength_ = nullptr;
    std::shared_ptr<double> minimum_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> pattern_ = nullptr;
    std::shared_ptr<string> patternErrorMessage_ = nullptr;
    std::shared_ptr<bool> readOnly_ = nullptr;
    std::shared_ptr<bool> required_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
