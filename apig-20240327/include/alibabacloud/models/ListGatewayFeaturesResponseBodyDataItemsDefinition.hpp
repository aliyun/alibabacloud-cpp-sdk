// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYFEATURESRESPONSEBODYDATAITEMSDEFINITION_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYFEATURESRESPONSEBODYDATAITEMSDEFINITION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGatewayFeaturesResponseBodyDataItemsDefinitionValueOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListGatewayFeaturesResponseBodyDataItemsDefinition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayFeaturesResponseBodyDataItemsDefinition& obj) { 
      DARABONBA_PTR_TO_JSON(defaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(group, group_);
      DARABONBA_PTR_TO_JSON(inputType, inputType_);
      DARABONBA_PTR_TO_JSON(maxLength, maxLength_);
      DARABONBA_PTR_TO_JSON(maxValue, maxValue_);
      DARABONBA_PTR_TO_JSON(minLength, minLength_);
      DARABONBA_PTR_TO_JSON(minValue, minValue_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(readOnly, readOnly_);
      DARABONBA_PTR_TO_JSON(regex, regex_);
      DARABONBA_PTR_TO_JSON(valueOptions, valueOptions_);
      DARABONBA_PTR_TO_JSON(valueType, valueType_);
      DARABONBA_PTR_TO_JSON(valueUnit, valueUnit_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayFeaturesResponseBodyDataItemsDefinition& obj) { 
      DARABONBA_PTR_FROM_JSON(defaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(group, group_);
      DARABONBA_PTR_FROM_JSON(inputType, inputType_);
      DARABONBA_PTR_FROM_JSON(maxLength, maxLength_);
      DARABONBA_PTR_FROM_JSON(maxValue, maxValue_);
      DARABONBA_PTR_FROM_JSON(minLength, minLength_);
      DARABONBA_PTR_FROM_JSON(minValue, minValue_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(readOnly, readOnly_);
      DARABONBA_PTR_FROM_JSON(regex, regex_);
      DARABONBA_PTR_FROM_JSON(valueOptions, valueOptions_);
      DARABONBA_PTR_FROM_JSON(valueType, valueType_);
      DARABONBA_PTR_FROM_JSON(valueUnit, valueUnit_);
    };
    ListGatewayFeaturesResponseBodyDataItemsDefinition() = default ;
    ListGatewayFeaturesResponseBodyDataItemsDefinition(const ListGatewayFeaturesResponseBodyDataItemsDefinition &) = default ;
    ListGatewayFeaturesResponseBodyDataItemsDefinition(ListGatewayFeaturesResponseBodyDataItemsDefinition &&) = default ;
    ListGatewayFeaturesResponseBodyDataItemsDefinition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayFeaturesResponseBodyDataItemsDefinition() = default ;
    ListGatewayFeaturesResponseBodyDataItemsDefinition& operator=(const ListGatewayFeaturesResponseBodyDataItemsDefinition &) = default ;
    ListGatewayFeaturesResponseBodyDataItemsDefinition& operator=(ListGatewayFeaturesResponseBodyDataItemsDefinition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultValue_ == nullptr
        && return this->description_ == nullptr && return this->displayName_ == nullptr && return this->group_ == nullptr && return this->inputType_ == nullptr && return this->maxLength_ == nullptr
        && return this->maxValue_ == nullptr && return this->minLength_ == nullptr && return this->minValue_ == nullptr && return this->name_ == nullptr && return this->readOnly_ == nullptr
        && return this->regex_ == nullptr && return this->valueOptions_ == nullptr && return this->valueType_ == nullptr && return this->valueUnit_ == nullptr; };
    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline ListGatewayFeaturesResponseBodyDataItemsDefinition& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListGatewayFeaturesResponseBodyDataItemsDefinition& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListGatewayFeaturesResponseBodyDataItemsDefinition& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline ListGatewayFeaturesResponseBodyDataItemsDefinition& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // inputType Field Functions 
    bool hasInputType() const { return this->inputType_ != nullptr;};
    void deleteInputType() { this->inputType_ = nullptr;};
    inline string inputType() const { DARABONBA_PTR_GET_DEFAULT(inputType_, "") };
    inline ListGatewayFeaturesResponseBodyDataItemsDefinition& setInputType(string inputType) { DARABONBA_PTR_SET_VALUE(inputType_, inputType) };


    // maxLength Field Functions 
    bool hasMaxLength() const { return this->maxLength_ != nullptr;};
    void deleteMaxLength() { this->maxLength_ = nullptr;};
    inline int32_t maxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0) };
    inline ListGatewayFeaturesResponseBodyDataItemsDefinition& setMaxLength(int32_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


    // maxValue Field Functions 
    bool hasMaxValue() const { return this->maxValue_ != nullptr;};
    void deleteMaxValue() { this->maxValue_ = nullptr;};
    inline string maxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, "") };
    inline ListGatewayFeaturesResponseBodyDataItemsDefinition& setMaxValue(string maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


    // minLength Field Functions 
    bool hasMinLength() const { return this->minLength_ != nullptr;};
    void deleteMinLength() { this->minLength_ = nullptr;};
    inline int32_t minLength() const { DARABONBA_PTR_GET_DEFAULT(minLength_, 0) };
    inline ListGatewayFeaturesResponseBodyDataItemsDefinition& setMinLength(int32_t minLength) { DARABONBA_PTR_SET_VALUE(minLength_, minLength) };


    // minValue Field Functions 
    bool hasMinValue() const { return this->minValue_ != nullptr;};
    void deleteMinValue() { this->minValue_ = nullptr;};
    inline string minValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, "") };
    inline ListGatewayFeaturesResponseBodyDataItemsDefinition& setMinValue(string minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListGatewayFeaturesResponseBodyDataItemsDefinition& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // readOnly Field Functions 
    bool hasReadOnly() const { return this->readOnly_ != nullptr;};
    void deleteReadOnly() { this->readOnly_ = nullptr;};
    inline bool readOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
    inline ListGatewayFeaturesResponseBodyDataItemsDefinition& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


    // regex Field Functions 
    bool hasRegex() const { return this->regex_ != nullptr;};
    void deleteRegex() { this->regex_ = nullptr;};
    inline string regex() const { DARABONBA_PTR_GET_DEFAULT(regex_, "") };
    inline ListGatewayFeaturesResponseBodyDataItemsDefinition& setRegex(string regex) { DARABONBA_PTR_SET_VALUE(regex_, regex) };


    // valueOptions Field Functions 
    bool hasValueOptions() const { return this->valueOptions_ != nullptr;};
    void deleteValueOptions() { this->valueOptions_ = nullptr;};
    inline const vector<Models::ListGatewayFeaturesResponseBodyDataItemsDefinitionValueOptions> & valueOptions() const { DARABONBA_PTR_GET_CONST(valueOptions_, vector<Models::ListGatewayFeaturesResponseBodyDataItemsDefinitionValueOptions>) };
    inline vector<Models::ListGatewayFeaturesResponseBodyDataItemsDefinitionValueOptions> valueOptions() { DARABONBA_PTR_GET(valueOptions_, vector<Models::ListGatewayFeaturesResponseBodyDataItemsDefinitionValueOptions>) };
    inline ListGatewayFeaturesResponseBodyDataItemsDefinition& setValueOptions(const vector<Models::ListGatewayFeaturesResponseBodyDataItemsDefinitionValueOptions> & valueOptions) { DARABONBA_PTR_SET_VALUE(valueOptions_, valueOptions) };
    inline ListGatewayFeaturesResponseBodyDataItemsDefinition& setValueOptions(vector<Models::ListGatewayFeaturesResponseBodyDataItemsDefinitionValueOptions> && valueOptions) { DARABONBA_PTR_SET_RVALUE(valueOptions_, valueOptions) };


    // valueType Field Functions 
    bool hasValueType() const { return this->valueType_ != nullptr;};
    void deleteValueType() { this->valueType_ = nullptr;};
    inline string valueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
    inline ListGatewayFeaturesResponseBodyDataItemsDefinition& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


    // valueUnit Field Functions 
    bool hasValueUnit() const { return this->valueUnit_ != nullptr;};
    void deleteValueUnit() { this->valueUnit_ = nullptr;};
    inline string valueUnit() const { DARABONBA_PTR_GET_DEFAULT(valueUnit_, "") };
    inline ListGatewayFeaturesResponseBodyDataItemsDefinition& setValueUnit(string valueUnit) { DARABONBA_PTR_SET_VALUE(valueUnit_, valueUnit) };


  protected:
    std::shared_ptr<string> defaultValue_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> group_ = nullptr;
    std::shared_ptr<string> inputType_ = nullptr;
    std::shared_ptr<int32_t> maxLength_ = nullptr;
    std::shared_ptr<string> maxValue_ = nullptr;
    std::shared_ptr<int32_t> minLength_ = nullptr;
    std::shared_ptr<string> minValue_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> readOnly_ = nullptr;
    std::shared_ptr<string> regex_ = nullptr;
    std::shared_ptr<vector<Models::ListGatewayFeaturesResponseBodyDataItemsDefinitionValueOptions>> valueOptions_ = nullptr;
    std::shared_ptr<string> valueType_ = nullptr;
    std::shared_ptr<string> valueUnit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
