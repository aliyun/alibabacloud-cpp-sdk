// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULESATTRIBUTEREQUESTRULESRULEACTIONSINSERTHEADERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULESATTRIBUTEREQUESTRULESRULEACTIONSINSERTHEADERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CoverEnabled, coverEnabled_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(ValueType, valueType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CoverEnabled, coverEnabled_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
    };
    UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig() = default ;
    UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig(const UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig &) = default ;
    UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig(UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig &&) = default ;
    UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig() = default ;
    UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig& operator=(const UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig &) = default ;
    UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig& operator=(UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->coverEnabled_ != nullptr
        && this->key_ != nullptr && this->value_ != nullptr && this->valueType_ != nullptr; };
    // coverEnabled Field Functions 
    bool hasCoverEnabled() const { return this->coverEnabled_ != nullptr;};
    void deleteCoverEnabled() { this->coverEnabled_ = nullptr;};
    inline bool coverEnabled() const { DARABONBA_PTR_GET_DEFAULT(coverEnabled_, false) };
    inline UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig& setCoverEnabled(bool coverEnabled) { DARABONBA_PTR_SET_VALUE(coverEnabled_, coverEnabled) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueType Field Functions 
    bool hasValueType() const { return this->valueType_ != nullptr;};
    void deleteValueType() { this->valueType_ = nullptr;};
    inline string valueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
    inline UpdateRulesAttributeRequestRulesRuleActionsInsertHeaderConfig& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


  protected:
    std::shared_ptr<bool> coverEnabled_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
    std::shared_ptr<string> valueType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
