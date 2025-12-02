// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FIELDINPUTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_FIELDINPUTCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FieldInputConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
namespace Models
{
  class FieldInputConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FieldInputConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Arrayed, arrayed_);
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(FieldCheckRegex, fieldCheckRegex_);
      DARABONBA_PTR_TO_JSON(FieldClass, fieldClass_);
      DARABONBA_PTR_TO_JSON(FieldConfigs, fieldConfigs_);
      DARABONBA_PTR_TO_JSON(FieldDescription, fieldDescription_);
      DARABONBA_PTR_TO_JSON(FieldExample, fieldExample_);
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(FieldPath, fieldPath_);
      DARABONBA_PTR_TO_JSON(FieldType, fieldType_);
      DARABONBA_PTR_TO_JSON(Required, required_);
    };
    friend void from_json(const Darabonba::Json& j, FieldInputConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Arrayed, arrayed_);
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(FieldCheckRegex, fieldCheckRegex_);
      DARABONBA_PTR_FROM_JSON(FieldClass, fieldClass_);
      DARABONBA_PTR_FROM_JSON(FieldConfigs, fieldConfigs_);
      DARABONBA_PTR_FROM_JSON(FieldDescription, fieldDescription_);
      DARABONBA_PTR_FROM_JSON(FieldExample, fieldExample_);
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(FieldPath, fieldPath_);
      DARABONBA_PTR_FROM_JSON(FieldType, fieldType_);
      DARABONBA_PTR_FROM_JSON(Required, required_);
    };
    FieldInputConfig() = default ;
    FieldInputConfig(const FieldInputConfig &) = default ;
    FieldInputConfig(FieldInputConfig &&) = default ;
    FieldInputConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FieldInputConfig() = default ;
    FieldInputConfig& operator=(const FieldInputConfig &) = default ;
    FieldInputConfig& operator=(FieldInputConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arrayed_ == nullptr
        && return this->defaultValue_ == nullptr && return this->fieldCheckRegex_ == nullptr && return this->fieldClass_ == nullptr && return this->fieldConfigs_ == nullptr && return this->fieldDescription_ == nullptr
        && return this->fieldExample_ == nullptr && return this->fieldName_ == nullptr && return this->fieldPath_ == nullptr && return this->fieldType_ == nullptr && return this->required_ == nullptr; };
    // arrayed Field Functions 
    bool hasArrayed() const { return this->arrayed_ != nullptr;};
    void deleteArrayed() { this->arrayed_ = nullptr;};
    inline bool arrayed() const { DARABONBA_PTR_GET_DEFAULT(arrayed_, false) };
    inline FieldInputConfig& setArrayed(bool arrayed) { DARABONBA_PTR_SET_VALUE(arrayed_, arrayed) };


    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline FieldInputConfig& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // fieldCheckRegex Field Functions 
    bool hasFieldCheckRegex() const { return this->fieldCheckRegex_ != nullptr;};
    void deleteFieldCheckRegex() { this->fieldCheckRegex_ = nullptr;};
    inline string fieldCheckRegex() const { DARABONBA_PTR_GET_DEFAULT(fieldCheckRegex_, "") };
    inline FieldInputConfig& setFieldCheckRegex(string fieldCheckRegex) { DARABONBA_PTR_SET_VALUE(fieldCheckRegex_, fieldCheckRegex) };


    // fieldClass Field Functions 
    bool hasFieldClass() const { return this->fieldClass_ != nullptr;};
    void deleteFieldClass() { this->fieldClass_ = nullptr;};
    inline string fieldClass() const { DARABONBA_PTR_GET_DEFAULT(fieldClass_, "") };
    inline FieldInputConfig& setFieldClass(string fieldClass) { DARABONBA_PTR_SET_VALUE(fieldClass_, fieldClass) };


    // fieldConfigs Field Functions 
    bool hasFieldConfigs() const { return this->fieldConfigs_ != nullptr;};
    void deleteFieldConfigs() { this->fieldConfigs_ = nullptr;};
    inline const vector<FieldInputConfig> & fieldConfigs() const { DARABONBA_PTR_GET_CONST(fieldConfigs_, vector<FieldInputConfig>) };
    inline vector<FieldInputConfig> fieldConfigs() { DARABONBA_PTR_GET(fieldConfigs_, vector<FieldInputConfig>) };
    inline FieldInputConfig& setFieldConfigs(const vector<FieldInputConfig> & fieldConfigs) { DARABONBA_PTR_SET_VALUE(fieldConfigs_, fieldConfigs) };
    inline FieldInputConfig& setFieldConfigs(vector<FieldInputConfig> && fieldConfigs) { DARABONBA_PTR_SET_RVALUE(fieldConfigs_, fieldConfigs) };


    // fieldDescription Field Functions 
    bool hasFieldDescription() const { return this->fieldDescription_ != nullptr;};
    void deleteFieldDescription() { this->fieldDescription_ = nullptr;};
    inline string fieldDescription() const { DARABONBA_PTR_GET_DEFAULT(fieldDescription_, "") };
    inline FieldInputConfig& setFieldDescription(string fieldDescription) { DARABONBA_PTR_SET_VALUE(fieldDescription_, fieldDescription) };


    // fieldExample Field Functions 
    bool hasFieldExample() const { return this->fieldExample_ != nullptr;};
    void deleteFieldExample() { this->fieldExample_ = nullptr;};
    inline string fieldExample() const { DARABONBA_PTR_GET_DEFAULT(fieldExample_, "") };
    inline FieldInputConfig& setFieldExample(string fieldExample) { DARABONBA_PTR_SET_VALUE(fieldExample_, fieldExample) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline FieldInputConfig& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // fieldPath Field Functions 
    bool hasFieldPath() const { return this->fieldPath_ != nullptr;};
    void deleteFieldPath() { this->fieldPath_ = nullptr;};
    inline string fieldPath() const { DARABONBA_PTR_GET_DEFAULT(fieldPath_, "") };
    inline FieldInputConfig& setFieldPath(string fieldPath) { DARABONBA_PTR_SET_VALUE(fieldPath_, fieldPath) };


    // fieldType Field Functions 
    bool hasFieldType() const { return this->fieldType_ != nullptr;};
    void deleteFieldType() { this->fieldType_ = nullptr;};
    inline string fieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
    inline FieldInputConfig& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline bool required() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
    inline FieldInputConfig& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


  protected:
    std::shared_ptr<bool> arrayed_ = nullptr;
    std::shared_ptr<string> defaultValue_ = nullptr;
    std::shared_ptr<string> fieldCheckRegex_ = nullptr;
    std::shared_ptr<string> fieldClass_ = nullptr;
    std::shared_ptr<vector<FieldInputConfig>> fieldConfigs_ = nullptr;
    std::shared_ptr<string> fieldDescription_ = nullptr;
    std::shared_ptr<string> fieldExample_ = nullptr;
    std::shared_ptr<string> fieldName_ = nullptr;
    std::shared_ptr<string> fieldPath_ = nullptr;
    std::shared_ptr<string> fieldType_ = nullptr;
    std::shared_ptr<bool> required_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
