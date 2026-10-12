// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAPATHCONFIGSFIELDPATHSVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATAPATHCONFIGSFIELDPATHSVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class DataPathConfigsFieldPathsValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataPathConfigsFieldPathsValue& obj) { 
      DARABONBA_PTR_TO_JSON(fieldKey, fieldKey_);
      DARABONBA_PTR_TO_JSON(jsonPath, jsonPath_);
      DARABONBA_PTR_TO_JSON(rule, rule_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(io, io_);
      DARABONBA_PTR_TO_JSON(sensitive, sensitive_);
      DARABONBA_PTR_TO_JSON(recordEnabled, recordEnabled_);
      DARABONBA_PTR_TO_JSON(toggleAllowed, toggleAllowed_);
      DARABONBA_PTR_TO_JSON(jsonPathRewriteAllowed, jsonPathRewriteAllowed_);
      DARABONBA_PTR_TO_JSON(fromTemplate, fromTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, DataPathConfigsFieldPathsValue& obj) { 
      DARABONBA_PTR_FROM_JSON(fieldKey, fieldKey_);
      DARABONBA_PTR_FROM_JSON(jsonPath, jsonPath_);
      DARABONBA_PTR_FROM_JSON(rule, rule_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(io, io_);
      DARABONBA_PTR_FROM_JSON(sensitive, sensitive_);
      DARABONBA_PTR_FROM_JSON(recordEnabled, recordEnabled_);
      DARABONBA_PTR_FROM_JSON(toggleAllowed, toggleAllowed_);
      DARABONBA_PTR_FROM_JSON(jsonPathRewriteAllowed, jsonPathRewriteAllowed_);
      DARABONBA_PTR_FROM_JSON(fromTemplate, fromTemplate_);
    };
    DataPathConfigsFieldPathsValue() = default ;
    DataPathConfigsFieldPathsValue(const DataPathConfigsFieldPathsValue &) = default ;
    DataPathConfigsFieldPathsValue(DataPathConfigsFieldPathsValue &&) = default ;
    DataPathConfigsFieldPathsValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataPathConfigsFieldPathsValue() = default ;
    DataPathConfigsFieldPathsValue& operator=(const DataPathConfigsFieldPathsValue &) = default ;
    DataPathConfigsFieldPathsValue& operator=(DataPathConfigsFieldPathsValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldKey_ == nullptr
        && this->jsonPath_ == nullptr && this->rule_ == nullptr && this->name_ == nullptr && this->description_ == nullptr && this->source_ == nullptr
        && this->category_ == nullptr && this->io_ == nullptr && this->sensitive_ == nullptr && this->recordEnabled_ == nullptr && this->toggleAllowed_ == nullptr
        && this->jsonPathRewriteAllowed_ == nullptr && this->fromTemplate_ == nullptr; };
    // fieldKey Field Functions 
    bool hasFieldKey() const { return this->fieldKey_ != nullptr;};
    void deleteFieldKey() { this->fieldKey_ = nullptr;};
    inline string getFieldKey() const { DARABONBA_PTR_GET_DEFAULT(fieldKey_, "") };
    inline DataPathConfigsFieldPathsValue& setFieldKey(string fieldKey) { DARABONBA_PTR_SET_VALUE(fieldKey_, fieldKey) };


    // jsonPath Field Functions 
    bool hasJsonPath() const { return this->jsonPath_ != nullptr;};
    void deleteJsonPath() { this->jsonPath_ = nullptr;};
    inline string getJsonPath() const { DARABONBA_PTR_GET_DEFAULT(jsonPath_, "") };
    inline DataPathConfigsFieldPathsValue& setJsonPath(string jsonPath) { DARABONBA_PTR_SET_VALUE(jsonPath_, jsonPath) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline DataPathConfigsFieldPathsValue& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DataPathConfigsFieldPathsValue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DataPathConfigsFieldPathsValue& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DataPathConfigsFieldPathsValue& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DataPathConfigsFieldPathsValue& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // io Field Functions 
    bool hasIo() const { return this->io_ != nullptr;};
    void deleteIo() { this->io_ = nullptr;};
    inline string getIo() const { DARABONBA_PTR_GET_DEFAULT(io_, "") };
    inline DataPathConfigsFieldPathsValue& setIo(string io) { DARABONBA_PTR_SET_VALUE(io_, io) };


    // sensitive Field Functions 
    bool hasSensitive() const { return this->sensitive_ != nullptr;};
    void deleteSensitive() { this->sensitive_ = nullptr;};
    inline bool getSensitive() const { DARABONBA_PTR_GET_DEFAULT(sensitive_, false) };
    inline DataPathConfigsFieldPathsValue& setSensitive(bool sensitive) { DARABONBA_PTR_SET_VALUE(sensitive_, sensitive) };


    // recordEnabled Field Functions 
    bool hasRecordEnabled() const { return this->recordEnabled_ != nullptr;};
    void deleteRecordEnabled() { this->recordEnabled_ = nullptr;};
    inline bool getRecordEnabled() const { DARABONBA_PTR_GET_DEFAULT(recordEnabled_, false) };
    inline DataPathConfigsFieldPathsValue& setRecordEnabled(bool recordEnabled) { DARABONBA_PTR_SET_VALUE(recordEnabled_, recordEnabled) };


    // toggleAllowed Field Functions 
    bool hasToggleAllowed() const { return this->toggleAllowed_ != nullptr;};
    void deleteToggleAllowed() { this->toggleAllowed_ = nullptr;};
    inline bool getToggleAllowed() const { DARABONBA_PTR_GET_DEFAULT(toggleAllowed_, false) };
    inline DataPathConfigsFieldPathsValue& setToggleAllowed(bool toggleAllowed) { DARABONBA_PTR_SET_VALUE(toggleAllowed_, toggleAllowed) };


    // jsonPathRewriteAllowed Field Functions 
    bool hasJsonPathRewriteAllowed() const { return this->jsonPathRewriteAllowed_ != nullptr;};
    void deleteJsonPathRewriteAllowed() { this->jsonPathRewriteAllowed_ = nullptr;};
    inline bool getJsonPathRewriteAllowed() const { DARABONBA_PTR_GET_DEFAULT(jsonPathRewriteAllowed_, false) };
    inline DataPathConfigsFieldPathsValue& setJsonPathRewriteAllowed(bool jsonPathRewriteAllowed) { DARABONBA_PTR_SET_VALUE(jsonPathRewriteAllowed_, jsonPathRewriteAllowed) };


    // fromTemplate Field Functions 
    bool hasFromTemplate() const { return this->fromTemplate_ != nullptr;};
    void deleteFromTemplate() { this->fromTemplate_ = nullptr;};
    inline bool getFromTemplate() const { DARABONBA_PTR_GET_DEFAULT(fromTemplate_, false) };
    inline DataPathConfigsFieldPathsValue& setFromTemplate(bool fromTemplate) { DARABONBA_PTR_SET_VALUE(fromTemplate_, fromTemplate) };


  protected:
    // The identity key of the field, which is unique within the same request path, such as input_token.
    shared_ptr<string> fieldKey_ {};
    // The JSONPath expression of the field in the request or response message, such as usage.prompt_tokens.
    shared_ptr<string> jsonPath_ {};
    // The value extraction rule for the field.
    shared_ptr<string> rule_ {};
    // The display name of the field.
    shared_ptr<string> name_ {};
    // The description of the field.
    shared_ptr<string> description_ {};
    // The source of the field value, indicating which part of the message the field is read from, such as response_body.
    shared_ptr<string> source_ {};
    // The statistical category to which the field belongs.
    shared_ptr<string> category_ {};
    // The message direction to which the field belongs, indicating whether it is extracted from the request or the response.
    shared_ptr<string> io_ {};
    // Indicates whether the field contains sensitive information.
    shared_ptr<bool> sensitive_ {};
    // Indicates whether collection is enabled for the field.
    shared_ptr<bool> recordEnabled_ {};
    // Indicates whether the collection status of the field can be toggled.
    shared_ptr<bool> toggleAllowed_ {};
    // Indicates whether the JSONPath of the field can be rewritten.
    shared_ptr<bool> jsonPathRewriteAllowed_ {};
    // Indicates whether the field configuration is derived from a field template.
    shared_ptr<bool> fromTemplate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
