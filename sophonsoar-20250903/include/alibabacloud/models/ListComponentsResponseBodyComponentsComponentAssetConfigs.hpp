// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODYCOMPONENTSCOMPONENTASSETCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODYCOMPONENTSCOMPONENTASSETCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
namespace Models
{
  class ListComponentsResponseBodyComponentsComponentAssetConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentsResponseBodyComponentsComponentAssetConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(FieldDescription, fieldDescription_);
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(FieldType, fieldType_);
      DARABONBA_PTR_TO_JSON(Required, required_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentsResponseBodyComponentsComponentAssetConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(FieldDescription, fieldDescription_);
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(FieldType, fieldType_);
      DARABONBA_PTR_FROM_JSON(Required, required_);
    };
    ListComponentsResponseBodyComponentsComponentAssetConfigs() = default ;
    ListComponentsResponseBodyComponentsComponentAssetConfigs(const ListComponentsResponseBodyComponentsComponentAssetConfigs &) = default ;
    ListComponentsResponseBodyComponentsComponentAssetConfigs(ListComponentsResponseBodyComponentsComponentAssetConfigs &&) = default ;
    ListComponentsResponseBodyComponentsComponentAssetConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentsResponseBodyComponentsComponentAssetConfigs() = default ;
    ListComponentsResponseBodyComponentsComponentAssetConfigs& operator=(const ListComponentsResponseBodyComponentsComponentAssetConfigs &) = default ;
    ListComponentsResponseBodyComponentsComponentAssetConfigs& operator=(ListComponentsResponseBodyComponentsComponentAssetConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultValue_ == nullptr
        && return this->encrypted_ == nullptr && return this->fieldDescription_ == nullptr && return this->fieldName_ == nullptr && return this->fieldType_ == nullptr && return this->required_ == nullptr; };
    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline ListComponentsResponseBodyComponentsComponentAssetConfigs& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline ListComponentsResponseBodyComponentsComponentAssetConfigs& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // fieldDescription Field Functions 
    bool hasFieldDescription() const { return this->fieldDescription_ != nullptr;};
    void deleteFieldDescription() { this->fieldDescription_ = nullptr;};
    inline string fieldDescription() const { DARABONBA_PTR_GET_DEFAULT(fieldDescription_, "") };
    inline ListComponentsResponseBodyComponentsComponentAssetConfigs& setFieldDescription(string fieldDescription) { DARABONBA_PTR_SET_VALUE(fieldDescription_, fieldDescription) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string fieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline ListComponentsResponseBodyComponentsComponentAssetConfigs& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // fieldType Field Functions 
    bool hasFieldType() const { return this->fieldType_ != nullptr;};
    void deleteFieldType() { this->fieldType_ = nullptr;};
    inline string fieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
    inline ListComponentsResponseBodyComponentsComponentAssetConfigs& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline bool required() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
    inline ListComponentsResponseBodyComponentsComponentAssetConfigs& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


  protected:
    // Default value.
    std::shared_ptr<string> defaultValue_ = nullptr;
    // Whether the field value needs to be encrypted. The range of values is as follows:
    // 
    // - true: Encrypted.
    // - false: Not encrypted.
    // 
    // Default value: false.
    std::shared_ptr<bool> encrypted_ = nullptr;
    // Description of the field.
    std::shared_ptr<string> fieldDescription_ = nullptr;
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
