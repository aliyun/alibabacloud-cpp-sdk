// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FIELDOUTPUTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_FIELDOUTPUTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
namespace Models
{
  class FieldOutputConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FieldOutputConfig& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(FieldDescription, fieldDescription_);
      DARABONBA_PTR_TO_JSON(FieldExample, fieldExample_);
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(FieldType, fieldType_);
    };
    friend void from_json(const Darabonba::Json& j, FieldOutputConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(FieldDescription, fieldDescription_);
      DARABONBA_PTR_FROM_JSON(FieldExample, fieldExample_);
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(FieldType, fieldType_);
    };
    FieldOutputConfig() = default ;
    FieldOutputConfig(const FieldOutputConfig &) = default ;
    FieldOutputConfig(FieldOutputConfig &&) = default ;
    FieldOutputConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FieldOutputConfig() = default ;
    FieldOutputConfig& operator=(const FieldOutputConfig &) = default ;
    FieldOutputConfig& operator=(FieldOutputConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->fieldDescription_ == nullptr && this->fieldExample_ == nullptr && this->fieldName_ == nullptr && this->fieldType_ == nullptr; };
    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline FieldOutputConfig& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // fieldDescription Field Functions 
    bool hasFieldDescription() const { return this->fieldDescription_ != nullptr;};
    void deleteFieldDescription() { this->fieldDescription_ = nullptr;};
    inline string getFieldDescription() const { DARABONBA_PTR_GET_DEFAULT(fieldDescription_, "") };
    inline FieldOutputConfig& setFieldDescription(string fieldDescription) { DARABONBA_PTR_SET_VALUE(fieldDescription_, fieldDescription) };


    // fieldExample Field Functions 
    bool hasFieldExample() const { return this->fieldExample_ != nullptr;};
    void deleteFieldExample() { this->fieldExample_ = nullptr;};
    inline string getFieldExample() const { DARABONBA_PTR_GET_DEFAULT(fieldExample_, "") };
    inline FieldOutputConfig& setFieldExample(string fieldExample) { DARABONBA_PTR_SET_VALUE(fieldExample_, fieldExample) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline FieldOutputConfig& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // fieldType Field Functions 
    bool hasFieldType() const { return this->fieldType_ != nullptr;};
    void deleteFieldType() { this->fieldType_ = nullptr;};
    inline string getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
    inline FieldOutputConfig& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


  protected:
    shared_ptr<string> defaultValue_ {};
    shared_ptr<string> fieldDescription_ {};
    shared_ptr<string> fieldExample_ {};
    shared_ptr<string> fieldName_ {};
    shared_ptr<string> fieldType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
