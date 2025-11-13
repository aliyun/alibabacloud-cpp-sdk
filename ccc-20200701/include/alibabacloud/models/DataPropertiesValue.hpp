// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAPROPERTIESVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATAPROPERTIESVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class DataPropertiesValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataPropertiesValue& obj) { 
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
      DARABONBA_PTR_TO_JSON(Creator, creator_);
    };
    friend void from_json(const Darabonba::Json& j, DataPropertiesValue& obj) { 
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
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
    };
    DataPropertiesValue() = default ;
    DataPropertiesValue(const DataPropertiesValue &) = default ;
    DataPropertiesValue(DataPropertiesValue &&) = default ;
    DataPropertiesValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataPropertiesValue() = default ;
    DataPropertiesValue& operator=(const DataPropertiesValue &) = default ;
    DataPropertiesValue& operator=(DataPropertiesValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->dataType_ == nullptr && return this->pattern_ == nullptr && return this->patternErrorMessage_ == nullptr
        && return this->minLength_ == nullptr && return this->maxLength_ == nullptr && return this->minimum_ == nullptr && return this->maximum_ == nullptr && return this->required_ == nullptr
        && return this->system_ == nullptr && return this->disabled_ == nullptr && return this->array_ == nullptr && return this->readOnly_ == nullptr && return this->editorType_ == nullptr
        && return this->attributes_ == nullptr && return this->displayOrder_ == nullptr && return this->createdTime_ == nullptr && return this->updatedTime_ == nullptr && return this->creator_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DataPropertiesValue& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DataPropertiesValue& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DataPropertiesValue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline DataPropertiesValue& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // pattern Field Functions 
    bool hasPattern() const { return this->pattern_ != nullptr;};
    void deletePattern() { this->pattern_ = nullptr;};
    inline string pattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
    inline DataPropertiesValue& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


    // patternErrorMessage Field Functions 
    bool hasPatternErrorMessage() const { return this->patternErrorMessage_ != nullptr;};
    void deletePatternErrorMessage() { this->patternErrorMessage_ = nullptr;};
    inline string patternErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(patternErrorMessage_, "") };
    inline DataPropertiesValue& setPatternErrorMessage(string patternErrorMessage) { DARABONBA_PTR_SET_VALUE(patternErrorMessage_, patternErrorMessage) };


    // minLength Field Functions 
    bool hasMinLength() const { return this->minLength_ != nullptr;};
    void deleteMinLength() { this->minLength_ = nullptr;};
    inline int32_t minLength() const { DARABONBA_PTR_GET_DEFAULT(minLength_, 0) };
    inline DataPropertiesValue& setMinLength(int32_t minLength) { DARABONBA_PTR_SET_VALUE(minLength_, minLength) };


    // maxLength Field Functions 
    bool hasMaxLength() const { return this->maxLength_ != nullptr;};
    void deleteMaxLength() { this->maxLength_ = nullptr;};
    inline int32_t maxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0) };
    inline DataPropertiesValue& setMaxLength(int32_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


    // minimum Field Functions 
    bool hasMinimum() const { return this->minimum_ != nullptr;};
    void deleteMinimum() { this->minimum_ = nullptr;};
    inline double minimum() const { DARABONBA_PTR_GET_DEFAULT(minimum_, 0.0) };
    inline DataPropertiesValue& setMinimum(double minimum) { DARABONBA_PTR_SET_VALUE(minimum_, minimum) };


    // maximum Field Functions 
    bool hasMaximum() const { return this->maximum_ != nullptr;};
    void deleteMaximum() { this->maximum_ = nullptr;};
    inline double maximum() const { DARABONBA_PTR_GET_DEFAULT(maximum_, 0.0) };
    inline DataPropertiesValue& setMaximum(double maximum) { DARABONBA_PTR_SET_VALUE(maximum_, maximum) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline bool required() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
    inline DataPropertiesValue& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


    // system Field Functions 
    bool hasSystem() const { return this->system_ != nullptr;};
    void deleteSystem() { this->system_ = nullptr;};
    inline bool system() const { DARABONBA_PTR_GET_DEFAULT(system_, false) };
    inline DataPropertiesValue& setSystem(bool system) { DARABONBA_PTR_SET_VALUE(system_, system) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool disabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline DataPropertiesValue& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // array Field Functions 
    bool hasArray() const { return this->array_ != nullptr;};
    void deleteArray() { this->array_ = nullptr;};
    inline bool array() const { DARABONBA_PTR_GET_DEFAULT(array_, false) };
    inline DataPropertiesValue& setArray(bool array) { DARABONBA_PTR_SET_VALUE(array_, array) };


    // readOnly Field Functions 
    bool hasReadOnly() const { return this->readOnly_ != nullptr;};
    void deleteReadOnly() { this->readOnly_ = nullptr;};
    inline bool readOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
    inline DataPropertiesValue& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


    // editorType Field Functions 
    bool hasEditorType() const { return this->editorType_ != nullptr;};
    void deleteEditorType() { this->editorType_ = nullptr;};
    inline string editorType() const { DARABONBA_PTR_GET_DEFAULT(editorType_, "") };
    inline DataPropertiesValue& setEditorType(string editorType) { DARABONBA_PTR_SET_VALUE(editorType_, editorType) };


    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline string attributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
    inline DataPropertiesValue& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


    // displayOrder Field Functions 
    bool hasDisplayOrder() const { return this->displayOrder_ != nullptr;};
    void deleteDisplayOrder() { this->displayOrder_ = nullptr;};
    inline int32_t displayOrder() const { DARABONBA_PTR_GET_DEFAULT(displayOrder_, 0) };
    inline DataPropertiesValue& setDisplayOrder(int32_t displayOrder) { DARABONBA_PTR_SET_VALUE(displayOrder_, displayOrder) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline DataPropertiesValue& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline int64_t updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
    inline DataPropertiesValue& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline DataPropertiesValue& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> dataType_ = nullptr;
    std::shared_ptr<string> pattern_ = nullptr;
    std::shared_ptr<string> patternErrorMessage_ = nullptr;
    std::shared_ptr<int32_t> minLength_ = nullptr;
    std::shared_ptr<int32_t> maxLength_ = nullptr;
    std::shared_ptr<double> minimum_ = nullptr;
    std::shared_ptr<double> maximum_ = nullptr;
    std::shared_ptr<bool> required_ = nullptr;
    std::shared_ptr<bool> system_ = nullptr;
    std::shared_ptr<bool> disabled_ = nullptr;
    std::shared_ptr<bool> array_ = nullptr;
    std::shared_ptr<bool> readOnly_ = nullptr;
    std::shared_ptr<string> editorType_ = nullptr;
    std::shared_ptr<string> attributes_ = nullptr;
    std::shared_ptr<int32_t> displayOrder_ = nullptr;
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    std::shared_ptr<int64_t> updatedTime_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
