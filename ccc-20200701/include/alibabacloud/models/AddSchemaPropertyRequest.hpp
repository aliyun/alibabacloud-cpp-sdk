// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSCHEMAPROPERTYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDSCHEMAPROPERTYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class AddSchemaPropertyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddSchemaPropertyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Property, property_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
    };
    friend void from_json(const Darabonba::Json& j, AddSchemaPropertyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Property, property_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
    };
    AddSchemaPropertyRequest() = default ;
    AddSchemaPropertyRequest(const AddSchemaPropertyRequest &) = default ;
    AddSchemaPropertyRequest(AddSchemaPropertyRequest &&) = default ;
    AddSchemaPropertyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddSchemaPropertyRequest() = default ;
    AddSchemaPropertyRequest& operator=(const AddSchemaPropertyRequest &) = default ;
    AddSchemaPropertyRequest& operator=(AddSchemaPropertyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Property : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Property& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Property& obj) { 
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
      Property() = default ;
      Property(const Property &) = default ;
      Property(Property &&) = default ;
      Property(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Property() = default ;
      Property& operator=(const Property &) = default ;
      Property& operator=(Property &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->array_ == nullptr
        && this->attributes_ == nullptr && this->dataType_ == nullptr && this->description_ == nullptr && this->disabled_ == nullptr && this->displayName_ == nullptr
        && this->displayOrder_ == nullptr && this->editorType_ == nullptr && this->maxLength_ == nullptr && this->maximum_ == nullptr && this->minLength_ == nullptr
        && this->minimum_ == nullptr && this->name_ == nullptr && this->pattern_ == nullptr && this->patternErrorMessage_ == nullptr && this->readOnly_ == nullptr
        && this->required_ == nullptr; };
      // array Field Functions 
      bool hasArray() const { return this->array_ != nullptr;};
      void deleteArray() { this->array_ = nullptr;};
      inline bool getArray() const { DARABONBA_PTR_GET_DEFAULT(array_, false) };
      inline Property& setArray(bool array) { DARABONBA_PTR_SET_VALUE(array_, array) };


      // attributes Field Functions 
      bool hasAttributes() const { return this->attributes_ != nullptr;};
      void deleteAttributes() { this->attributes_ = nullptr;};
      inline string getAttributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
      inline Property& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


      // dataType Field Functions 
      bool hasDataType() const { return this->dataType_ != nullptr;};
      void deleteDataType() { this->dataType_ = nullptr;};
      inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
      inline Property& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Property& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // disabled Field Functions 
      bool hasDisabled() const { return this->disabled_ != nullptr;};
      void deleteDisabled() { this->disabled_ = nullptr;};
      inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
      inline Property& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Property& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // displayOrder Field Functions 
      bool hasDisplayOrder() const { return this->displayOrder_ != nullptr;};
      void deleteDisplayOrder() { this->displayOrder_ = nullptr;};
      inline int32_t getDisplayOrder() const { DARABONBA_PTR_GET_DEFAULT(displayOrder_, 0) };
      inline Property& setDisplayOrder(int32_t displayOrder) { DARABONBA_PTR_SET_VALUE(displayOrder_, displayOrder) };


      // editorType Field Functions 
      bool hasEditorType() const { return this->editorType_ != nullptr;};
      void deleteEditorType() { this->editorType_ = nullptr;};
      inline string getEditorType() const { DARABONBA_PTR_GET_DEFAULT(editorType_, "") };
      inline Property& setEditorType(string editorType) { DARABONBA_PTR_SET_VALUE(editorType_, editorType) };


      // maxLength Field Functions 
      bool hasMaxLength() const { return this->maxLength_ != nullptr;};
      void deleteMaxLength() { this->maxLength_ = nullptr;};
      inline int32_t getMaxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0) };
      inline Property& setMaxLength(int32_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


      // maximum Field Functions 
      bool hasMaximum() const { return this->maximum_ != nullptr;};
      void deleteMaximum() { this->maximum_ = nullptr;};
      inline double getMaximum() const { DARABONBA_PTR_GET_DEFAULT(maximum_, 0.0) };
      inline Property& setMaximum(double maximum) { DARABONBA_PTR_SET_VALUE(maximum_, maximum) };


      // minLength Field Functions 
      bool hasMinLength() const { return this->minLength_ != nullptr;};
      void deleteMinLength() { this->minLength_ = nullptr;};
      inline int32_t getMinLength() const { DARABONBA_PTR_GET_DEFAULT(minLength_, 0) };
      inline Property& setMinLength(int32_t minLength) { DARABONBA_PTR_SET_VALUE(minLength_, minLength) };


      // minimum Field Functions 
      bool hasMinimum() const { return this->minimum_ != nullptr;};
      void deleteMinimum() { this->minimum_ = nullptr;};
      inline double getMinimum() const { DARABONBA_PTR_GET_DEFAULT(minimum_, 0.0) };
      inline Property& setMinimum(double minimum) { DARABONBA_PTR_SET_VALUE(minimum_, minimum) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Property& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // pattern Field Functions 
      bool hasPattern() const { return this->pattern_ != nullptr;};
      void deletePattern() { this->pattern_ = nullptr;};
      inline string getPattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
      inline Property& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


      // patternErrorMessage Field Functions 
      bool hasPatternErrorMessage() const { return this->patternErrorMessage_ != nullptr;};
      void deletePatternErrorMessage() { this->patternErrorMessage_ = nullptr;};
      inline string getPatternErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(patternErrorMessage_, "") };
      inline Property& setPatternErrorMessage(string patternErrorMessage) { DARABONBA_PTR_SET_VALUE(patternErrorMessage_, patternErrorMessage) };


      // readOnly Field Functions 
      bool hasReadOnly() const { return this->readOnly_ != nullptr;};
      void deleteReadOnly() { this->readOnly_ = nullptr;};
      inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
      inline Property& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


      // required Field Functions 
      bool hasRequired() const { return this->required_ != nullptr;};
      void deleteRequired() { this->required_ = nullptr;};
      inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
      inline Property& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


    protected:
      shared_ptr<bool> array_ {};
      shared_ptr<string> attributes_ {};
      // This parameter is required.
      shared_ptr<string> dataType_ {};
      shared_ptr<string> description_ {};
      shared_ptr<bool> disabled_ {};
      shared_ptr<string> displayName_ {};
      shared_ptr<int32_t> displayOrder_ {};
      shared_ptr<string> editorType_ {};
      shared_ptr<int32_t> maxLength_ {};
      shared_ptr<double> maximum_ {};
      shared_ptr<int32_t> minLength_ {};
      shared_ptr<double> minimum_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
      shared_ptr<string> pattern_ {};
      shared_ptr<string> patternErrorMessage_ {};
      shared_ptr<bool> readOnly_ {};
      shared_ptr<bool> required_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->property_ == nullptr && this->requestId_ == nullptr && this->schemaId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddSchemaPropertyRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // property Field Functions 
    bool hasProperty() const { return this->property_ != nullptr;};
    void deleteProperty() { this->property_ = nullptr;};
    inline const AddSchemaPropertyRequest::Property & getProperty() const { DARABONBA_PTR_GET_CONST(property_, AddSchemaPropertyRequest::Property) };
    inline AddSchemaPropertyRequest::Property getProperty() { DARABONBA_PTR_GET(property_, AddSchemaPropertyRequest::Property) };
    inline AddSchemaPropertyRequest& setProperty(const AddSchemaPropertyRequest::Property & property) { DARABONBA_PTR_SET_VALUE(property_, property) };
    inline AddSchemaPropertyRequest& setProperty(AddSchemaPropertyRequest::Property && property) { DARABONBA_PTR_SET_RVALUE(property_, property) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddSchemaPropertyRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
    inline AddSchemaPropertyRequest& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<AddSchemaPropertyRequest::Property> property_ {};
    shared_ptr<string> requestId_ {};
    // schema id
    // 
    // This parameter is required.
    shared_ptr<string> schemaId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
