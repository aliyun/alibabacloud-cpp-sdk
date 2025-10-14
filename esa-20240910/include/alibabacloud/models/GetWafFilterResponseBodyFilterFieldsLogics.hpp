// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWAFFILTERRESPONSEBODYFILTERFIELDSLOGICS_HPP_
#define ALIBABACLOUD_MODELS_GETWAFFILTERRESPONSEBODYFILTERFIELDSLOGICS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetWafFilterResponseBodyFilterFieldsLogicsValidator.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetWafFilterResponseBodyFilterFieldsLogics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWafFilterResponseBodyFilterFieldsLogics& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Kind, kind_);
      DARABONBA_PTR_TO_JSON(MinPlan, minPlan_);
      DARABONBA_PTR_TO_JSON(Negative, negative_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Symbol, symbol_);
      DARABONBA_PTR_TO_JSON(Tip, tip_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Validator, validator_);
    };
    friend void from_json(const Darabonba::Json& j, GetWafFilterResponseBodyFilterFieldsLogics& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Kind, kind_);
      DARABONBA_PTR_FROM_JSON(MinPlan, minPlan_);
      DARABONBA_PTR_FROM_JSON(Negative, negative_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Symbol, symbol_);
      DARABONBA_PTR_FROM_JSON(Tip, tip_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Validator, validator_);
    };
    GetWafFilterResponseBodyFilterFieldsLogics() = default ;
    GetWafFilterResponseBodyFilterFieldsLogics(const GetWafFilterResponseBodyFilterFieldsLogics &) = default ;
    GetWafFilterResponseBodyFilterFieldsLogics(GetWafFilterResponseBodyFilterFieldsLogics &&) = default ;
    GetWafFilterResponseBodyFilterFieldsLogics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWafFilterResponseBodyFilterFieldsLogics() = default ;
    GetWafFilterResponseBodyFilterFieldsLogics& operator=(const GetWafFilterResponseBodyFilterFieldsLogics &) = default ;
    GetWafFilterResponseBodyFilterFieldsLogics& operator=(GetWafFilterResponseBodyFilterFieldsLogics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributes_ == nullptr
        && return this->enable_ == nullptr && return this->kind_ == nullptr && return this->minPlan_ == nullptr && return this->negative_ == nullptr && return this->operator_ == nullptr
        && return this->symbol_ == nullptr && return this->tip_ == nullptr && return this->type_ == nullptr && return this->validator_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline int32_t attributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, 0) };
    inline GetWafFilterResponseBodyFilterFieldsLogics& setAttributes(int32_t attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetWafFilterResponseBodyFilterFieldsLogics& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string kind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline GetWafFilterResponseBodyFilterFieldsLogics& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // minPlan Field Functions 
    bool hasMinPlan() const { return this->minPlan_ != nullptr;};
    void deleteMinPlan() { this->minPlan_ = nullptr;};
    inline string minPlan() const { DARABONBA_PTR_GET_DEFAULT(minPlan_, "") };
    inline GetWafFilterResponseBodyFilterFieldsLogics& setMinPlan(string minPlan) { DARABONBA_PTR_SET_VALUE(minPlan_, minPlan) };


    // negative Field Functions 
    bool hasNegative() const { return this->negative_ != nullptr;};
    void deleteNegative() { this->negative_ = nullptr;};
    inline bool negative() const { DARABONBA_PTR_GET_DEFAULT(negative_, false) };
    inline GetWafFilterResponseBodyFilterFieldsLogics& setNegative(bool negative) { DARABONBA_PTR_SET_VALUE(negative_, negative) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline GetWafFilterResponseBodyFilterFieldsLogics& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // symbol Field Functions 
    bool hasSymbol() const { return this->symbol_ != nullptr;};
    void deleteSymbol() { this->symbol_ = nullptr;};
    inline string symbol() const { DARABONBA_PTR_GET_DEFAULT(symbol_, "") };
    inline GetWafFilterResponseBodyFilterFieldsLogics& setSymbol(string symbol) { DARABONBA_PTR_SET_VALUE(symbol_, symbol) };


    // tip Field Functions 
    bool hasTip() const { return this->tip_ != nullptr;};
    void deleteTip() { this->tip_ = nullptr;};
    inline string tip() const { DARABONBA_PTR_GET_DEFAULT(tip_, "") };
    inline GetWafFilterResponseBodyFilterFieldsLogics& setTip(string tip) { DARABONBA_PTR_SET_VALUE(tip_, tip) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetWafFilterResponseBodyFilterFieldsLogics& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // validator Field Functions 
    bool hasValidator() const { return this->validator_ != nullptr;};
    void deleteValidator() { this->validator_ = nullptr;};
    inline const Models::GetWafFilterResponseBodyFilterFieldsLogicsValidator & validator() const { DARABONBA_PTR_GET_CONST(validator_, Models::GetWafFilterResponseBodyFilterFieldsLogicsValidator) };
    inline Models::GetWafFilterResponseBodyFilterFieldsLogicsValidator validator() { DARABONBA_PTR_GET(validator_, Models::GetWafFilterResponseBodyFilterFieldsLogicsValidator) };
    inline GetWafFilterResponseBodyFilterFieldsLogics& setValidator(const Models::GetWafFilterResponseBodyFilterFieldsLogicsValidator & validator) { DARABONBA_PTR_SET_VALUE(validator_, validator) };
    inline GetWafFilterResponseBodyFilterFieldsLogics& setValidator(Models::GetWafFilterResponseBodyFilterFieldsLogicsValidator && validator) { DARABONBA_PTR_SET_RVALUE(validator_, validator) };


  protected:
    // A custom attribute. For example, this parameter can specify whether the value is case-sensitive.
    std::shared_ptr<int32_t> attributes_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    // The type of the value input box. Valid values:
    // 
    // *   select:single
    // *   select:multi
    // *   input:single
    // *   input:multi
    std::shared_ptr<string> kind_ = nullptr;
    std::shared_ptr<string> minPlan_ = nullptr;
    // Indicates whether the match result is inverted.
    std::shared_ptr<bool> negative_ = nullptr;
    // The displayed matching characters.
    std::shared_ptr<string> operator_ = nullptr;
    // The matching characters in the system.
    std::shared_ptr<string> symbol_ = nullptr;
    // The tip on how to enter a valid value that is required by the rules.
    std::shared_ptr<string> tip_ = nullptr;
    // The type of the value. Valid values:
    // 
    // *   integer
    // *   integer_slice
    // *   string
    // *   string_slice
    std::shared_ptr<string> type_ = nullptr;
    // The validator, which defines the validation rules for a value.
    std::shared_ptr<Models::GetWafFilterResponseBodyFilterFieldsLogicsValidator> validator_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
