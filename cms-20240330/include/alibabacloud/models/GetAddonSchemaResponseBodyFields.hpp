// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADDONSCHEMARESPONSEBODYFIELDS_HPP_
#define ALIBABACLOUD_MODELS_GETADDONSCHEMARESPONSEBODYFIELDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAddonSchemaResponseBodyFieldsConditions.hpp>
#include <alibabacloud/models/GetAddonSchemaResponseBodyFieldsProps.hpp>
#include <alibabacloud/models/GetAddonSchemaResponseBodyFieldsValidation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetAddonSchemaResponseBodyFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAddonSchemaResponseBodyFields& obj) { 
      DARABONBA_PTR_TO_JSON(conditions, conditions_);
      DARABONBA_ANY_TO_JSON(defaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(disabled, disabled_);
      DARABONBA_PTR_TO_JSON(element, element_);
      DARABONBA_PTR_TO_JSON(fieldPath, fieldPath_);
      DARABONBA_PTR_TO_JSON(label, label_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(placeholder, placeholder_);
      DARABONBA_PTR_TO_JSON(props, props_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(validation, validation_);
    };
    friend void from_json(const Darabonba::Json& j, GetAddonSchemaResponseBodyFields& obj) { 
      DARABONBA_PTR_FROM_JSON(conditions, conditions_);
      DARABONBA_ANY_FROM_JSON(defaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(element, element_);
      DARABONBA_PTR_FROM_JSON(fieldPath, fieldPath_);
      DARABONBA_PTR_FROM_JSON(label, label_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(placeholder, placeholder_);
      DARABONBA_PTR_FROM_JSON(props, props_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(validation, validation_);
    };
    GetAddonSchemaResponseBodyFields() = default ;
    GetAddonSchemaResponseBodyFields(const GetAddonSchemaResponseBodyFields &) = default ;
    GetAddonSchemaResponseBodyFields(GetAddonSchemaResponseBodyFields &&) = default ;
    GetAddonSchemaResponseBodyFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAddonSchemaResponseBodyFields() = default ;
    GetAddonSchemaResponseBodyFields& operator=(const GetAddonSchemaResponseBodyFields &) = default ;
    GetAddonSchemaResponseBodyFields& operator=(GetAddonSchemaResponseBodyFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditions_ == nullptr
        && return this->defaultValue_ == nullptr && return this->description_ == nullptr && return this->disabled_ == nullptr && return this->element_ == nullptr && return this->fieldPath_ == nullptr
        && return this->label_ == nullptr && return this->name_ == nullptr && return this->placeholder_ == nullptr && return this->props_ == nullptr && return this->type_ == nullptr
        && return this->validation_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<Models::GetAddonSchemaResponseBodyFieldsConditions> & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Models::GetAddonSchemaResponseBodyFieldsConditions>) };
    inline vector<Models::GetAddonSchemaResponseBodyFieldsConditions> conditions() { DARABONBA_PTR_GET(conditions_, vector<Models::GetAddonSchemaResponseBodyFieldsConditions>) };
    inline GetAddonSchemaResponseBodyFields& setConditions(const vector<Models::GetAddonSchemaResponseBodyFieldsConditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline GetAddonSchemaResponseBodyFields& setConditions(vector<Models::GetAddonSchemaResponseBodyFieldsConditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline     const Darabonba::Json & defaultValue() const { DARABONBA_GET(defaultValue_) };
    Darabonba::Json & defaultValue() { DARABONBA_GET(defaultValue_) };
    inline GetAddonSchemaResponseBodyFields& setDefaultValue(const Darabonba::Json & defaultValue) { DARABONBA_SET_VALUE(defaultValue_, defaultValue) };
    inline GetAddonSchemaResponseBodyFields& setDefaultValue(Darabonba::Json & defaultValue) { DARABONBA_SET_RVALUE(defaultValue_, defaultValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetAddonSchemaResponseBodyFields& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool disabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline GetAddonSchemaResponseBodyFields& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // element Field Functions 
    bool hasElement() const { return this->element_ != nullptr;};
    void deleteElement() { this->element_ = nullptr;};
    inline string element() const { DARABONBA_PTR_GET_DEFAULT(element_, "") };
    inline GetAddonSchemaResponseBodyFields& setElement(string element) { DARABONBA_PTR_SET_VALUE(element_, element) };


    // fieldPath Field Functions 
    bool hasFieldPath() const { return this->fieldPath_ != nullptr;};
    void deleteFieldPath() { this->fieldPath_ = nullptr;};
    inline string fieldPath() const { DARABONBA_PTR_GET_DEFAULT(fieldPath_, "") };
    inline GetAddonSchemaResponseBodyFields& setFieldPath(string fieldPath) { DARABONBA_PTR_SET_VALUE(fieldPath_, fieldPath) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetAddonSchemaResponseBodyFields& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAddonSchemaResponseBodyFields& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // placeholder Field Functions 
    bool hasPlaceholder() const { return this->placeholder_ != nullptr;};
    void deletePlaceholder() { this->placeholder_ = nullptr;};
    inline string placeholder() const { DARABONBA_PTR_GET_DEFAULT(placeholder_, "") };
    inline GetAddonSchemaResponseBodyFields& setPlaceholder(string placeholder) { DARABONBA_PTR_SET_VALUE(placeholder_, placeholder) };


    // props Field Functions 
    bool hasProps() const { return this->props_ != nullptr;};
    void deleteProps() { this->props_ = nullptr;};
    inline const Models::GetAddonSchemaResponseBodyFieldsProps & props() const { DARABONBA_PTR_GET_CONST(props_, Models::GetAddonSchemaResponseBodyFieldsProps) };
    inline Models::GetAddonSchemaResponseBodyFieldsProps props() { DARABONBA_PTR_GET(props_, Models::GetAddonSchemaResponseBodyFieldsProps) };
    inline GetAddonSchemaResponseBodyFields& setProps(const Models::GetAddonSchemaResponseBodyFieldsProps & props) { DARABONBA_PTR_SET_VALUE(props_, props) };
    inline GetAddonSchemaResponseBodyFields& setProps(Models::GetAddonSchemaResponseBodyFieldsProps && props) { DARABONBA_PTR_SET_RVALUE(props_, props) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAddonSchemaResponseBodyFields& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // validation Field Functions 
    bool hasValidation() const { return this->validation_ != nullptr;};
    void deleteValidation() { this->validation_ = nullptr;};
    inline const Models::GetAddonSchemaResponseBodyFieldsValidation & validation() const { DARABONBA_PTR_GET_CONST(validation_, Models::GetAddonSchemaResponseBodyFieldsValidation) };
    inline Models::GetAddonSchemaResponseBodyFieldsValidation validation() { DARABONBA_PTR_GET(validation_, Models::GetAddonSchemaResponseBodyFieldsValidation) };
    inline GetAddonSchemaResponseBodyFields& setValidation(const Models::GetAddonSchemaResponseBodyFieldsValidation & validation) { DARABONBA_PTR_SET_VALUE(validation_, validation) };
    inline GetAddonSchemaResponseBodyFields& setValidation(Models::GetAddonSchemaResponseBodyFieldsValidation && validation) { DARABONBA_PTR_SET_RVALUE(validation_, validation) };


  protected:
    std::shared_ptr<vector<Models::GetAddonSchemaResponseBodyFieldsConditions>> conditions_ = nullptr;
    Darabonba::Json defaultValue_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> disabled_ = nullptr;
    std::shared_ptr<string> element_ = nullptr;
    std::shared_ptr<string> fieldPath_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> placeholder_ = nullptr;
    std::shared_ptr<Models::GetAddonSchemaResponseBodyFieldsProps> props_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<Models::GetAddonSchemaResponseBodyFieldsValidation> validation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
