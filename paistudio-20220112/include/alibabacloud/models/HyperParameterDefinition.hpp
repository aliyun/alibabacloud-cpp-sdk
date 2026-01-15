// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HYPERPARAMETERDEFINITION_HPP_
#define ALIBABACLOUD_MODELS_HYPERPARAMETERDEFINITION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HyperParameterRange.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class HyperParameterDefinition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HyperParameterDefinition& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Range, range_);
      DARABONBA_PTR_TO_JSON(Required, required_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, HyperParameterDefinition& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Range, range_);
      DARABONBA_PTR_FROM_JSON(Required, required_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    HyperParameterDefinition() = default ;
    HyperParameterDefinition(const HyperParameterDefinition &) = default ;
    HyperParameterDefinition(HyperParameterDefinition &&) = default ;
    HyperParameterDefinition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HyperParameterDefinition() = default ;
    HyperParameterDefinition& operator=(const HyperParameterDefinition &) = default ;
    HyperParameterDefinition& operator=(HyperParameterDefinition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->description_ == nullptr && this->displayName_ == nullptr && this->name_ == nullptr && this->range_ == nullptr && this->required_ == nullptr
        && this->type_ == nullptr; };
    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline HyperParameterDefinition& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline HyperParameterDefinition& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline HyperParameterDefinition& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline HyperParameterDefinition& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // range Field Functions 
    bool hasRange() const { return this->range_ != nullptr;};
    void deleteRange() { this->range_ = nullptr;};
    inline const HyperParameterRange & getRange() const { DARABONBA_PTR_GET_CONST(range_, HyperParameterRange) };
    inline HyperParameterRange getRange() { DARABONBA_PTR_GET(range_, HyperParameterRange) };
    inline HyperParameterDefinition& setRange(const HyperParameterRange & range) { DARABONBA_PTR_SET_VALUE(range_, range) };
    inline HyperParameterDefinition& setRange(HyperParameterRange && range) { DARABONBA_PTR_SET_RVALUE(range_, range) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
    inline HyperParameterDefinition& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline HyperParameterDefinition& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> defaultValue_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> displayName_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<HyperParameterRange> range_ {};
    shared_ptr<bool> required_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
