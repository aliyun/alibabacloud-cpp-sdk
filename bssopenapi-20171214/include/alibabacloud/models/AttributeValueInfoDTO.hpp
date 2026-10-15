// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTRIBUTEVALUEINFODTO_HPP_
#define ALIBABACLOUD_MODELS_ATTRIBUTEVALUEINFODTO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AttributeValueInfoDTO.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class AttributeValueInfoDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttributeValueInfoDTO& obj) { 
      DARABONBA_PTR_TO_JSON(BoundedValue, boundedValue_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DescriptionAttributeValues, descriptionAttributeValues_);
      DARABONBA_PTR_TO_JSON(IdentifyKey, identifyKey_);
      DARABONBA_PTR_TO_JSON(Max, max_);
      DARABONBA_PTR_TO_JSON(Min, min_);
      DARABONBA_PTR_TO_JSON(OperationTags, operationTags_);
      DARABONBA_PTR_TO_JSON(Step, step_);
      DARABONBA_PTR_TO_JSON(SubAttributeValues, subAttributeValues_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(ValueName, valueName_);
    };
    friend void from_json(const Darabonba::Json& j, AttributeValueInfoDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(BoundedValue, boundedValue_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DescriptionAttributeValues, descriptionAttributeValues_);
      DARABONBA_PTR_FROM_JSON(IdentifyKey, identifyKey_);
      DARABONBA_PTR_FROM_JSON(Max, max_);
      DARABONBA_PTR_FROM_JSON(Min, min_);
      DARABONBA_PTR_FROM_JSON(OperationTags, operationTags_);
      DARABONBA_PTR_FROM_JSON(Step, step_);
      DARABONBA_PTR_FROM_JSON(SubAttributeValues, subAttributeValues_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(ValueName, valueName_);
    };
    AttributeValueInfoDTO() = default ;
    AttributeValueInfoDTO(const AttributeValueInfoDTO &) = default ;
    AttributeValueInfoDTO(AttributeValueInfoDTO &&) = default ;
    AttributeValueInfoDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttributeValueInfoDTO() = default ;
    AttributeValueInfoDTO& operator=(const AttributeValueInfoDTO &) = default ;
    AttributeValueInfoDTO& operator=(AttributeValueInfoDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BoundedValue : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BoundedValue& obj) { 
        DARABONBA_PTR_TO_JSON(LowerBound, lowerBound_);
        DARABONBA_PTR_TO_JSON(UpperBound, upperBound_);
      };
      friend void from_json(const Darabonba::Json& j, BoundedValue& obj) { 
        DARABONBA_PTR_FROM_JSON(LowerBound, lowerBound_);
        DARABONBA_PTR_FROM_JSON(UpperBound, upperBound_);
      };
      BoundedValue() = default ;
      BoundedValue(const BoundedValue &) = default ;
      BoundedValue(BoundedValue &&) = default ;
      BoundedValue(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BoundedValue() = default ;
      BoundedValue& operator=(const BoundedValue &) = default ;
      BoundedValue& operator=(BoundedValue &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->lowerBound_ == nullptr
        && this->upperBound_ == nullptr; };
      // lowerBound Field Functions 
      bool hasLowerBound() const { return this->lowerBound_ != nullptr;};
      void deleteLowerBound() { this->lowerBound_ = nullptr;};
      inline const vector<AttributeValueInfoDTO> & getLowerBound() const { DARABONBA_PTR_GET_CONST(lowerBound_, vector<AttributeValueInfoDTO>) };
      inline vector<AttributeValueInfoDTO> getLowerBound() { DARABONBA_PTR_GET(lowerBound_, vector<AttributeValueInfoDTO>) };
      inline BoundedValue& setLowerBound(const vector<AttributeValueInfoDTO> & lowerBound) { DARABONBA_PTR_SET_VALUE(lowerBound_, lowerBound) };
      inline BoundedValue& setLowerBound(vector<AttributeValueInfoDTO> && lowerBound) { DARABONBA_PTR_SET_RVALUE(lowerBound_, lowerBound) };


      // upperBound Field Functions 
      bool hasUpperBound() const { return this->upperBound_ != nullptr;};
      void deleteUpperBound() { this->upperBound_ = nullptr;};
      inline const vector<AttributeValueInfoDTO> & getUpperBound() const { DARABONBA_PTR_GET_CONST(upperBound_, vector<AttributeValueInfoDTO>) };
      inline vector<AttributeValueInfoDTO> getUpperBound() { DARABONBA_PTR_GET(upperBound_, vector<AttributeValueInfoDTO>) };
      inline BoundedValue& setUpperBound(const vector<AttributeValueInfoDTO> & upperBound) { DARABONBA_PTR_SET_VALUE(upperBound_, upperBound) };
      inline BoundedValue& setUpperBound(vector<AttributeValueInfoDTO> && upperBound) { DARABONBA_PTR_SET_RVALUE(upperBound_, upperBound) };


    protected:
      // The lower bound list.
      shared_ptr<vector<AttributeValueInfoDTO>> lowerBound_ {};
      // The upper bound list.
      shared_ptr<vector<AttributeValueInfoDTO>> upperBound_ {};
    };

    virtual bool empty() const override { return this->boundedValue_ == nullptr
        && this->code_ == nullptr && this->defaultValue_ == nullptr && this->description_ == nullptr && this->descriptionAttributeValues_ == nullptr && this->identifyKey_ == nullptr
        && this->max_ == nullptr && this->min_ == nullptr && this->operationTags_ == nullptr && this->step_ == nullptr && this->subAttributeValues_ == nullptr
        && this->value_ == nullptr && this->valueName_ == nullptr; };
    // boundedValue Field Functions 
    bool hasBoundedValue() const { return this->boundedValue_ != nullptr;};
    void deleteBoundedValue() { this->boundedValue_ = nullptr;};
    inline const AttributeValueInfoDTO::BoundedValue & getBoundedValue() const { DARABONBA_PTR_GET_CONST(boundedValue_, AttributeValueInfoDTO::BoundedValue) };
    inline AttributeValueInfoDTO::BoundedValue getBoundedValue() { DARABONBA_PTR_GET(boundedValue_, AttributeValueInfoDTO::BoundedValue) };
    inline AttributeValueInfoDTO& setBoundedValue(const AttributeValueInfoDTO::BoundedValue & boundedValue) { DARABONBA_PTR_SET_VALUE(boundedValue_, boundedValue) };
    inline AttributeValueInfoDTO& setBoundedValue(AttributeValueInfoDTO::BoundedValue && boundedValue) { DARABONBA_PTR_SET_RVALUE(boundedValue_, boundedValue) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AttributeValueInfoDTO& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline AttributeValueInfoDTO& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AttributeValueInfoDTO& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // descriptionAttributeValues Field Functions 
    bool hasDescriptionAttributeValues() const { return this->descriptionAttributeValues_ != nullptr;};
    void deleteDescriptionAttributeValues() { this->descriptionAttributeValues_ = nullptr;};
    inline const vector<AttributeValueInfoDTO> & getDescriptionAttributeValues() const { DARABONBA_PTR_GET_CONST(descriptionAttributeValues_, vector<AttributeValueInfoDTO>) };
    inline vector<AttributeValueInfoDTO> getDescriptionAttributeValues() { DARABONBA_PTR_GET(descriptionAttributeValues_, vector<AttributeValueInfoDTO>) };
    inline AttributeValueInfoDTO& setDescriptionAttributeValues(const vector<AttributeValueInfoDTO> & descriptionAttributeValues) { DARABONBA_PTR_SET_VALUE(descriptionAttributeValues_, descriptionAttributeValues) };
    inline AttributeValueInfoDTO& setDescriptionAttributeValues(vector<AttributeValueInfoDTO> && descriptionAttributeValues) { DARABONBA_PTR_SET_RVALUE(descriptionAttributeValues_, descriptionAttributeValues) };


    // identifyKey Field Functions 
    bool hasIdentifyKey() const { return this->identifyKey_ != nullptr;};
    void deleteIdentifyKey() { this->identifyKey_ = nullptr;};
    inline string getIdentifyKey() const { DARABONBA_PTR_GET_DEFAULT(identifyKey_, "") };
    inline AttributeValueInfoDTO& setIdentifyKey(string identifyKey) { DARABONBA_PTR_SET_VALUE(identifyKey_, identifyKey) };


    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline string getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, "") };
    inline AttributeValueInfoDTO& setMax(string max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline string getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, "") };
    inline AttributeValueInfoDTO& setMin(string min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    // operationTags Field Functions 
    bool hasOperationTags() const { return this->operationTags_ != nullptr;};
    void deleteOperationTags() { this->operationTags_ = nullptr;};
    inline const vector<string> & getOperationTags() const { DARABONBA_PTR_GET_CONST(operationTags_, vector<string>) };
    inline vector<string> getOperationTags() { DARABONBA_PTR_GET(operationTags_, vector<string>) };
    inline AttributeValueInfoDTO& setOperationTags(const vector<string> & operationTags) { DARABONBA_PTR_SET_VALUE(operationTags_, operationTags) };
    inline AttributeValueInfoDTO& setOperationTags(vector<string> && operationTags) { DARABONBA_PTR_SET_RVALUE(operationTags_, operationTags) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline string getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
    inline AttributeValueInfoDTO& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


    // subAttributeValues Field Functions 
    bool hasSubAttributeValues() const { return this->subAttributeValues_ != nullptr;};
    void deleteSubAttributeValues() { this->subAttributeValues_ = nullptr;};
    inline const map<string, vector<AttributeValueInfoDTO>> & getSubAttributeValues() const { DARABONBA_PTR_GET_CONST(subAttributeValues_, map<string, vector<AttributeValueInfoDTO>>) };
    inline map<string, vector<AttributeValueInfoDTO>> getSubAttributeValues() { DARABONBA_PTR_GET(subAttributeValues_, map<string, vector<AttributeValueInfoDTO>>) };
    inline AttributeValueInfoDTO& setSubAttributeValues(const map<string, vector<AttributeValueInfoDTO>> & subAttributeValues) { DARABONBA_PTR_SET_VALUE(subAttributeValues_, subAttributeValues) };
    inline AttributeValueInfoDTO& setSubAttributeValues(map<string, vector<AttributeValueInfoDTO>> && subAttributeValues) { DARABONBA_PTR_SET_RVALUE(subAttributeValues_, subAttributeValues) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline AttributeValueInfoDTO& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueName Field Functions 
    bool hasValueName() const { return this->valueName_ != nullptr;};
    void deleteValueName() { this->valueName_ = nullptr;};
    inline string getValueName() const { DARABONBA_PTR_GET_DEFAULT(valueName_, "") };
    inline AttributeValueInfoDTO& setValueName(string valueName) { DARABONBA_PTR_SET_VALUE(valueName_, valueName) };


  protected:
    // The upper and lower bounds.
    shared_ptr<AttributeValueInfoDTO::BoundedValue> boundedValue_ {};
    // The property code.
    shared_ptr<string> code_ {};
    // The default value.
    shared_ptr<string> defaultValue_ {};
    // The description (translated).
    shared_ptr<string> description_ {};
    // The description property values.
    shared_ptr<vector<AttributeValueInfoDTO>> descriptionAttributeValues_ {};
    // The unique identifier.
    shared_ptr<string> identifyKey_ {};
    // The maximum value.
    shared_ptr<string> max_ {};
    // The minimum value.
    shared_ptr<string> min_ {};
    // The operation tags.
    shared_ptr<vector<string>> operationTags_ {};
    // The step size.
    shared_ptr<string> step_ {};
    // The sub-property values.
    shared_ptr<map<string, vector<AttributeValueInfoDTO>>> subAttributeValues_ {};
    // The enum value.
    shared_ptr<string> value_ {};
    // The value name (translated).
    shared_ptr<string> valueName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
