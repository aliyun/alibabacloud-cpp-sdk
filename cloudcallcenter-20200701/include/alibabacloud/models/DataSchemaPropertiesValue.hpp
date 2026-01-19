// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASCHEMAPROPERTIESVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATASCHEMAPROPERTIESVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudCallCenter20200701
{
namespace Models
{
  class DataSchemaPropertiesValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataSchemaPropertiesValue& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(Pattern, pattern_);
      DARABONBA_PTR_TO_JSON(PatternErrorMessage, patternErrorMessage_);
      DARABONBA_PTR_TO_JSON(MinLength, minLength_);
      DARABONBA_PTR_TO_JSON(MaxLength, maxLength_);
      DARABONBA_PTR_TO_JSON(Minimum, minimum_);
      DARABONBA_PTR_TO_JSON(Maximum, maximum_);
      DARABONBA_PTR_TO_JSON(Required, required_);
      DARABONBA_PTR_TO_JSON(System, system_);
      DARABONBA_PTR_TO_JSON(Disabled, disabled_);
      DARABONBA_PTR_TO_JSON(Array, array_);
      DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
      DARABONBA_PTR_TO_JSON(EditorType, editorType_);
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(DisplayOrder, displayOrder_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_TO_JSON(CreatedBy, createdBy_);
    };
    friend void from_json(const Darabonba::Json& j, DataSchemaPropertiesValue& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
      DARABONBA_PTR_FROM_JSON(PatternErrorMessage, patternErrorMessage_);
      DARABONBA_PTR_FROM_JSON(MinLength, minLength_);
      DARABONBA_PTR_FROM_JSON(MaxLength, maxLength_);
      DARABONBA_PTR_FROM_JSON(Minimum, minimum_);
      DARABONBA_PTR_FROM_JSON(Maximum, maximum_);
      DARABONBA_PTR_FROM_JSON(Required, required_);
      DARABONBA_PTR_FROM_JSON(System, system_);
      DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(Array, array_);
      DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
      DARABONBA_PTR_FROM_JSON(EditorType, editorType_);
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(DisplayOrder, displayOrder_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_FROM_JSON(CreatedBy, createdBy_);
    };
    DataSchemaPropertiesValue() = default ;
    DataSchemaPropertiesValue(const DataSchemaPropertiesValue &) = default ;
    DataSchemaPropertiesValue(DataSchemaPropertiesValue &&) = default ;
    DataSchemaPropertiesValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataSchemaPropertiesValue() = default ;
    DataSchemaPropertiesValue& operator=(const DataSchemaPropertiesValue &) = default ;
    DataSchemaPropertiesValue& operator=(DataSchemaPropertiesValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->dataType_ == nullptr && this->pattern_ == nullptr && this->patternErrorMessage_ == nullptr
        && this->minLength_ == nullptr && this->maxLength_ == nullptr && this->minimum_ == nullptr && this->maximum_ == nullptr && this->required_ == nullptr
        && this->system_ == nullptr && this->disabled_ == nullptr && this->array_ == nullptr && this->readOnly_ == nullptr && this->editorType_ == nullptr
        && this->attributes_ == nullptr && this->displayOrder_ == nullptr && this->createdTime_ == nullptr && this->updatedTime_ == nullptr && this->createdBy_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DataSchemaPropertiesValue& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DataSchemaPropertiesValue& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DataSchemaPropertiesValue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DataSchemaPropertiesValue& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // pattern Field Functions 
    bool hasPattern() const { return this->pattern_ != nullptr;};
    void deletePattern() { this->pattern_ = nullptr;};
    inline string getPattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
    inline DataSchemaPropertiesValue& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


    // patternErrorMessage Field Functions 
    bool hasPatternErrorMessage() const { return this->patternErrorMessage_ != nullptr;};
    void deletePatternErrorMessage() { this->patternErrorMessage_ = nullptr;};
    inline string getPatternErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(patternErrorMessage_, "") };
    inline DataSchemaPropertiesValue& setPatternErrorMessage(string patternErrorMessage) { DARABONBA_PTR_SET_VALUE(patternErrorMessage_, patternErrorMessage) };


    // minLength Field Functions 
    bool hasMinLength() const { return this->minLength_ != nullptr;};
    void deleteMinLength() { this->minLength_ = nullptr;};
    inline int32_t getMinLength() const { DARABONBA_PTR_GET_DEFAULT(minLength_, 0) };
    inline DataSchemaPropertiesValue& setMinLength(int32_t minLength) { DARABONBA_PTR_SET_VALUE(minLength_, minLength) };


    // maxLength Field Functions 
    bool hasMaxLength() const { return this->maxLength_ != nullptr;};
    void deleteMaxLength() { this->maxLength_ = nullptr;};
    inline int32_t getMaxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0) };
    inline DataSchemaPropertiesValue& setMaxLength(int32_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


    // minimum Field Functions 
    bool hasMinimum() const { return this->minimum_ != nullptr;};
    void deleteMinimum() { this->minimum_ = nullptr;};
    inline double getMinimum() const { DARABONBA_PTR_GET_DEFAULT(minimum_, 0.0) };
    inline DataSchemaPropertiesValue& setMinimum(double minimum) { DARABONBA_PTR_SET_VALUE(minimum_, minimum) };


    // maximum Field Functions 
    bool hasMaximum() const { return this->maximum_ != nullptr;};
    void deleteMaximum() { this->maximum_ = nullptr;};
    inline double getMaximum() const { DARABONBA_PTR_GET_DEFAULT(maximum_, 0.0) };
    inline DataSchemaPropertiesValue& setMaximum(double maximum) { DARABONBA_PTR_SET_VALUE(maximum_, maximum) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
    inline DataSchemaPropertiesValue& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


    // system Field Functions 
    bool hasSystem() const { return this->system_ != nullptr;};
    void deleteSystem() { this->system_ = nullptr;};
    inline bool getSystem() const { DARABONBA_PTR_GET_DEFAULT(system_, false) };
    inline DataSchemaPropertiesValue& setSystem(bool system) { DARABONBA_PTR_SET_VALUE(system_, system) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline DataSchemaPropertiesValue& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // array Field Functions 
    bool hasArray() const { return this->array_ != nullptr;};
    void deleteArray() { this->array_ = nullptr;};
    inline bool getArray() const { DARABONBA_PTR_GET_DEFAULT(array_, false) };
    inline DataSchemaPropertiesValue& setArray(bool array) { DARABONBA_PTR_SET_VALUE(array_, array) };


    // readOnly Field Functions 
    bool hasReadOnly() const { return this->readOnly_ != nullptr;};
    void deleteReadOnly() { this->readOnly_ = nullptr;};
    inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
    inline DataSchemaPropertiesValue& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


    // editorType Field Functions 
    bool hasEditorType() const { return this->editorType_ != nullptr;};
    void deleteEditorType() { this->editorType_ = nullptr;};
    inline string getEditorType() const { DARABONBA_PTR_GET_DEFAULT(editorType_, "") };
    inline DataSchemaPropertiesValue& setEditorType(string editorType) { DARABONBA_PTR_SET_VALUE(editorType_, editorType) };


    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline string getAttributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
    inline DataSchemaPropertiesValue& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


    // displayOrder Field Functions 
    bool hasDisplayOrder() const { return this->displayOrder_ != nullptr;};
    void deleteDisplayOrder() { this->displayOrder_ = nullptr;};
    inline int32_t getDisplayOrder() const { DARABONBA_PTR_GET_DEFAULT(displayOrder_, 0) };
    inline DataSchemaPropertiesValue& setDisplayOrder(int32_t displayOrder) { DARABONBA_PTR_SET_VALUE(displayOrder_, displayOrder) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline DataSchemaPropertiesValue& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
    inline DataSchemaPropertiesValue& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline DataSchemaPropertiesValue& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


  protected:
    shared_ptr<string> displayName_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> dataType_ {};
    shared_ptr<string> pattern_ {};
    shared_ptr<string> patternErrorMessage_ {};
    shared_ptr<int32_t> minLength_ {};
    shared_ptr<int32_t> maxLength_ {};
    shared_ptr<double> minimum_ {};
    shared_ptr<double> maximum_ {};
    shared_ptr<bool> required_ {};
    shared_ptr<bool> system_ {};
    shared_ptr<bool> disabled_ {};
    shared_ptr<bool> array_ {};
    shared_ptr<bool> readOnly_ {};
    shared_ptr<string> editorType_ {};
    shared_ptr<string> attributes_ {};
    shared_ptr<int32_t> displayOrder_ {};
    shared_ptr<int64_t> createdTime_ {};
    shared_ptr<int64_t> updatedTime_ {};
    shared_ptr<string> createdBy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudCallCenter20200701
#endif
