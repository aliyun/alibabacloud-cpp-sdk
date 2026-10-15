// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTRIBUTEINFODTO_HPP_
#define ALIBABACLOUD_MODELS_ATTRIBUTEINFODTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BaseAttributeInfoDTO.hpp>
#include <alibabacloud/models/AttributeInfoDTO.hpp>
#include <alibabacloud/models/AttributeValueInfoDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class AttributeInfoDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttributeInfoDTO& obj) { 
      DARABONBA_PTR_TO_JSON(AttributeCategories, attributeCategories_);
      DARABONBA_PTR_TO_JSON(AttributeSource, attributeSource_);
      DARABONBA_PTR_TO_JSON(AttributeType, attributeType_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CompositeAttributes, compositeAttributes_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DescriptionAttributes, descriptionAttributes_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OperationalAttributeConfig, operationalAttributeConfig_);
      DARABONBA_PTR_TO_JSON(OperationalAttributeType, operationalAttributeType_);
      DARABONBA_PTR_TO_JSON(SubAttributes, subAttributes_);
      DARABONBA_PTR_TO_JSON(Unit, unit_);
      DARABONBA_PTR_TO_JSON(ValueType, valueType_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, AttributeInfoDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(AttributeCategories, attributeCategories_);
      DARABONBA_PTR_FROM_JSON(AttributeSource, attributeSource_);
      DARABONBA_PTR_FROM_JSON(AttributeType, attributeType_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CompositeAttributes, compositeAttributes_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DescriptionAttributes, descriptionAttributes_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OperationalAttributeConfig, operationalAttributeConfig_);
      DARABONBA_PTR_FROM_JSON(OperationalAttributeType, operationalAttributeType_);
      DARABONBA_PTR_FROM_JSON(SubAttributes, subAttributes_);
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
      DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    AttributeInfoDTO() = default ;
    AttributeInfoDTO(const AttributeInfoDTO &) = default ;
    AttributeInfoDTO(AttributeInfoDTO &&) = default ;
    AttributeInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttributeInfoDTO() = default ;
    AttributeInfoDTO& operator=(const AttributeInfoDTO &) = default ;
    AttributeInfoDTO& operator=(AttributeInfoDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributeCategories_ == nullptr
        && this->attributeSource_ == nullptr && this->attributeType_ == nullptr && this->code_ == nullptr && this->compositeAttributes_ == nullptr && this->description_ == nullptr
        && this->descriptionAttributes_ == nullptr && this->name_ == nullptr && this->operationalAttributeConfig_ == nullptr && this->operationalAttributeType_ == nullptr && this->subAttributes_ == nullptr
        && this->unit_ == nullptr && this->valueType_ == nullptr && this->values_ == nullptr; };
    // attributeCategories Field Functions 
    bool hasAttributeCategories() const { return this->attributeCategories_ != nullptr;};
    void deleteAttributeCategories() { this->attributeCategories_ = nullptr;};
    inline const vector<string> & getAttributeCategories() const { DARABONBA_PTR_GET_CONST(attributeCategories_, vector<string>) };
    inline vector<string> getAttributeCategories() { DARABONBA_PTR_GET(attributeCategories_, vector<string>) };
    inline AttributeInfoDTO& setAttributeCategories(const vector<string> & attributeCategories) { DARABONBA_PTR_SET_VALUE(attributeCategories_, attributeCategories) };
    inline AttributeInfoDTO& setAttributeCategories(vector<string> && attributeCategories) { DARABONBA_PTR_SET_RVALUE(attributeCategories_, attributeCategories) };


    // attributeSource Field Functions 
    bool hasAttributeSource() const { return this->attributeSource_ != nullptr;};
    void deleteAttributeSource() { this->attributeSource_ = nullptr;};
    inline string getAttributeSource() const { DARABONBA_PTR_GET_DEFAULT(attributeSource_, "") };
    inline AttributeInfoDTO& setAttributeSource(string attributeSource) { DARABONBA_PTR_SET_VALUE(attributeSource_, attributeSource) };


    // attributeType Field Functions 
    bool hasAttributeType() const { return this->attributeType_ != nullptr;};
    void deleteAttributeType() { this->attributeType_ = nullptr;};
    inline string getAttributeType() const { DARABONBA_PTR_GET_DEFAULT(attributeType_, "") };
    inline AttributeInfoDTO& setAttributeType(string attributeType) { DARABONBA_PTR_SET_VALUE(attributeType_, attributeType) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AttributeInfoDTO& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // compositeAttributes Field Functions 
    bool hasCompositeAttributes() const { return this->compositeAttributes_ != nullptr;};
    void deleteCompositeAttributes() { this->compositeAttributes_ = nullptr;};
    inline const vector<BaseAttributeInfoDTO> & getCompositeAttributes() const { DARABONBA_PTR_GET_CONST(compositeAttributes_, vector<BaseAttributeInfoDTO>) };
    inline vector<BaseAttributeInfoDTO> getCompositeAttributes() { DARABONBA_PTR_GET(compositeAttributes_, vector<BaseAttributeInfoDTO>) };
    inline AttributeInfoDTO& setCompositeAttributes(const vector<BaseAttributeInfoDTO> & compositeAttributes) { DARABONBA_PTR_SET_VALUE(compositeAttributes_, compositeAttributes) };
    inline AttributeInfoDTO& setCompositeAttributes(vector<BaseAttributeInfoDTO> && compositeAttributes) { DARABONBA_PTR_SET_RVALUE(compositeAttributes_, compositeAttributes) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AttributeInfoDTO& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // descriptionAttributes Field Functions 
    bool hasDescriptionAttributes() const { return this->descriptionAttributes_ != nullptr;};
    void deleteDescriptionAttributes() { this->descriptionAttributes_ = nullptr;};
    inline const vector<BaseAttributeInfoDTO> & getDescriptionAttributes() const { DARABONBA_PTR_GET_CONST(descriptionAttributes_, vector<BaseAttributeInfoDTO>) };
    inline vector<BaseAttributeInfoDTO> getDescriptionAttributes() { DARABONBA_PTR_GET(descriptionAttributes_, vector<BaseAttributeInfoDTO>) };
    inline AttributeInfoDTO& setDescriptionAttributes(const vector<BaseAttributeInfoDTO> & descriptionAttributes) { DARABONBA_PTR_SET_VALUE(descriptionAttributes_, descriptionAttributes) };
    inline AttributeInfoDTO& setDescriptionAttributes(vector<BaseAttributeInfoDTO> && descriptionAttributes) { DARABONBA_PTR_SET_RVALUE(descriptionAttributes_, descriptionAttributes) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AttributeInfoDTO& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operationalAttributeConfig Field Functions 
    bool hasOperationalAttributeConfig() const { return this->operationalAttributeConfig_ != nullptr;};
    void deleteOperationalAttributeConfig() { this->operationalAttributeConfig_ = nullptr;};
    inline string getOperationalAttributeConfig() const { DARABONBA_PTR_GET_DEFAULT(operationalAttributeConfig_, "") };
    inline AttributeInfoDTO& setOperationalAttributeConfig(string operationalAttributeConfig) { DARABONBA_PTR_SET_VALUE(operationalAttributeConfig_, operationalAttributeConfig) };


    // operationalAttributeType Field Functions 
    bool hasOperationalAttributeType() const { return this->operationalAttributeType_ != nullptr;};
    void deleteOperationalAttributeType() { this->operationalAttributeType_ = nullptr;};
    inline string getOperationalAttributeType() const { DARABONBA_PTR_GET_DEFAULT(operationalAttributeType_, "") };
    inline AttributeInfoDTO& setOperationalAttributeType(string operationalAttributeType) { DARABONBA_PTR_SET_VALUE(operationalAttributeType_, operationalAttributeType) };


    // subAttributes Field Functions 
    bool hasSubAttributes() const { return this->subAttributes_ != nullptr;};
    void deleteSubAttributes() { this->subAttributes_ = nullptr;};
    inline const vector<AttributeInfoDTO> & getSubAttributes() const { DARABONBA_PTR_GET_CONST(subAttributes_, vector<AttributeInfoDTO>) };
    inline vector<AttributeInfoDTO> getSubAttributes() { DARABONBA_PTR_GET(subAttributes_, vector<AttributeInfoDTO>) };
    inline AttributeInfoDTO& setSubAttributes(const vector<AttributeInfoDTO> & subAttributes) { DARABONBA_PTR_SET_VALUE(subAttributes_, subAttributes) };
    inline AttributeInfoDTO& setSubAttributes(vector<AttributeInfoDTO> && subAttributes) { DARABONBA_PTR_SET_RVALUE(subAttributes_, subAttributes) };


    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline AttributeInfoDTO& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    // valueType Field Functions 
    bool hasValueType() const { return this->valueType_ != nullptr;};
    void deleteValueType() { this->valueType_ = nullptr;};
    inline string getValueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
    inline AttributeInfoDTO& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<AttributeValueInfoDTO> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<AttributeValueInfoDTO>) };
    inline vector<AttributeValueInfoDTO> getValues() { DARABONBA_PTR_GET(values_, vector<AttributeValueInfoDTO>) };
    inline AttributeInfoDTO& setValues(const vector<AttributeValueInfoDTO> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline AttributeInfoDTO& setValues(vector<AttributeValueInfoDTO> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The property categories.
    shared_ptr<vector<string>> attributeCategories_ {};
    // The property source.
    shared_ptr<string> attributeSource_ {};
    // The property type.
    shared_ptr<string> attributeType_ {};
    // The property code.
    shared_ptr<string> code_ {};
    // The composite properties (basic information).
    shared_ptr<vector<BaseAttributeInfoDTO>> compositeAttributes_ {};
    // The property description (translated).
    shared_ptr<string> description_ {};
    // The description properties (basic information).
    shared_ptr<vector<BaseAttributeInfoDTO>> descriptionAttributes_ {};
    // The property name (translated).
    shared_ptr<string> name_ {};
    // The O&M property configuration.
    shared_ptr<string> operationalAttributeConfig_ {};
    // The O&M property type.
    shared_ptr<string> operationalAttributeType_ {};
    // The sub-properties (complete information).
    shared_ptr<vector<AttributeInfoDTO>> subAttributes_ {};
    // The unit.
    shared_ptr<string> unit_ {};
    // The value type.
    shared_ptr<string> valueType_ {};
    // The property value list.
    shared_ptr<vector<AttributeValueInfoDTO>> values_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
