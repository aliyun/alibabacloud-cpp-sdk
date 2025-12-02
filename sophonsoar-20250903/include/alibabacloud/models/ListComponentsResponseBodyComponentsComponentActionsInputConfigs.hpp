// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODYCOMPONENTSCOMPONENTACTIONSINPUTCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODYCOMPONENTSCOMPONENTACTIONSINPUTCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
namespace Models
{
  class ListComponentsResponseBodyComponentsComponentActionsInputConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentsResponseBodyComponentsComponentActionsInputConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(FieldDescription, fieldDescription_);
      DARABONBA_PTR_TO_JSON(FieldDisplayConfig, fieldDisplayConfig_);
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(FieldType, fieldType_);
      DARABONBA_PTR_TO_JSON(Required, required_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentsResponseBodyComponentsComponentActionsInputConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(FieldDescription, fieldDescription_);
      DARABONBA_PTR_FROM_JSON(FieldDisplayConfig, fieldDisplayConfig_);
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(FieldType, fieldType_);
      DARABONBA_PTR_FROM_JSON(Required, required_);
    };
    ListComponentsResponseBodyComponentsComponentActionsInputConfigs() = default ;
    ListComponentsResponseBodyComponentsComponentActionsInputConfigs(const ListComponentsResponseBodyComponentsComponentActionsInputConfigs &) = default ;
    ListComponentsResponseBodyComponentsComponentActionsInputConfigs(ListComponentsResponseBodyComponentsComponentActionsInputConfigs &&) = default ;
    ListComponentsResponseBodyComponentsComponentActionsInputConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentsResponseBodyComponentsComponentActionsInputConfigs() = default ;
    ListComponentsResponseBodyComponentsComponentActionsInputConfigs& operator=(const ListComponentsResponseBodyComponentsComponentActionsInputConfigs &) = default ;
    ListComponentsResponseBodyComponentsComponentActionsInputConfigs& operator=(ListComponentsResponseBodyComponentsComponentActionsInputConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultValue_ == nullptr
        && return this->fieldDescription_ == nullptr && return this->fieldDisplayConfig_ == nullptr && return this->fieldName_ == nullptr && return this->fieldType_ == nullptr && return this->required_ == nullptr; };
    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline ListComponentsResponseBodyComponentsComponentActionsInputConfigs& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // fieldDescription Field Functions 
    bool hasFieldDescription() const { return this->fieldDescription_ != nullptr;};
    void deleteFieldDescription() { this->fieldDescription_ = nullptr;};
    inline string fieldDescription() const { DARABONBA_PTR_GET_DEFAULT(fieldDescription_, "") };
    inline ListComponentsResponseBodyComponentsComponentActionsInputConfigs& setFieldDescription(string fieldDescription) { DARABONBA_PTR_SET_VALUE(fieldDescription_, fieldDescription) };


    // fieldDisplayConfig Field Functions 
    bool hasFieldDisplayConfig() const { return this->fieldDisplayConfig_ != nullptr;};
    void deleteFieldDisplayConfig() { this->fieldDisplayConfig_ = nullptr;};
    inline string fieldDisplayConfig() const { DARABONBA_PTR_GET_DEFAULT(fieldDisplayConfig_, "") };
    inline ListComponentsResponseBodyComponentsComponentActionsInputConfigs& setFieldDisplayConfig(string fieldDisplayConfig) { DARABONBA_PTR_SET_VALUE(fieldDisplayConfig_, fieldDisplayConfig) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline ListComponentsResponseBodyComponentsComponentActionsInputConfigs& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // fieldType Field Functions 
    bool hasFieldType() const { return this->fieldType_ != nullptr;};
    void deleteFieldType() { this->fieldType_ = nullptr;};
    inline string fieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
    inline ListComponentsResponseBodyComponentsComponentActionsInputConfigs& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline bool required() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
    inline ListComponentsResponseBodyComponentsComponentActionsInputConfigs& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


  protected:
    // Default value.
    std::shared_ptr<string> defaultValue_ = nullptr;
    // Field description information.
    std::shared_ptr<string> fieldDescription_ = nullptr;
    // Field display configuration.
    std::shared_ptr<string> fieldDisplayConfig_ = nullptr;
    // Field name.
    std::shared_ptr<string> fieldName_ = nullptr;
    // Field type, with the following values:
    // 
    // - **String**: String.
    // - **Long**: Long integer.
    // - **Integer**: Integer.
    // - **Double**: Double.
    // - **Boolean**: Boolean.
    // - **Complex**: Key-value pair.
    std::shared_ptr<string> fieldType_ = nullptr;
    // Whether this parameter is required.
    // 
    // - **true**: Required.
    // - **false**: Not required.
    std::shared_ptr<bool> required_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
