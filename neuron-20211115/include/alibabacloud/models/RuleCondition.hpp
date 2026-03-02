// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RULECONDITION_HPP_
#define ALIBABACLOUD_MODELS_RULECONDITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class RuleCondition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RuleCondition& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(position, position_);
      DARABONBA_PTR_TO_JSON(relation, relation_);
      DARABONBA_PTR_TO_JSON(value, value_);
      DARABONBA_PTR_TO_JSON(valueType, valueType_);
    };
    friend void from_json(const Darabonba::Json& j, RuleCondition& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(position, position_);
      DARABONBA_PTR_FROM_JSON(relation, relation_);
      DARABONBA_PTR_FROM_JSON(value, value_);
      DARABONBA_PTR_FROM_JSON(valueType, valueType_);
    };
    RuleCondition() = default ;
    RuleCondition(const RuleCondition &) = default ;
    RuleCondition(RuleCondition &&) = default ;
    RuleCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RuleCondition() = default ;
    RuleCondition& operator=(const RuleCondition &) = default ;
    RuleCondition& operator=(RuleCondition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->position_ == nullptr && this->relation_ == nullptr && this->value_ == nullptr && this->valueType_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RuleCondition& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline string getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
    inline RuleCondition& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // relation Field Functions 
    bool hasRelation() const { return this->relation_ != nullptr;};
    void deleteRelation() { this->relation_ = nullptr;};
    inline string getRelation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
    inline RuleCondition& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline RuleCondition& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueType Field Functions 
    bool hasValueType() const { return this->valueType_ != nullptr;};
    void deleteValueType() { this->valueType_ = nullptr;};
    inline string getValueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
    inline RuleCondition& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


  protected:
    shared_ptr<string> name_ {};
    shared_ptr<string> position_ {};
    shared_ptr<string> relation_ {};
    shared_ptr<string> value_ {};
    shared_ptr<string> valueType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
