// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULEALERTMETRICPARAMDEF_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULEALERTMETRICPARAMDEF_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AlertRuleAlertMetricParamDefValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleAlertMetricParamDef : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleAlertMetricParamDef& obj) { 
      DARABONBA_PTR_TO_JSON(maxWidth, maxWidth_);
      DARABONBA_PTR_TO_JSON(minWidth, minWidth_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(placeholderCn, placeholderCn_);
      DARABONBA_PTR_TO_JSON(placeholderEn, placeholderEn_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(value, value_);
      DARABONBA_PTR_TO_JSON(values, values_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleAlertMetricParamDef& obj) { 
      DARABONBA_PTR_FROM_JSON(maxWidth, maxWidth_);
      DARABONBA_PTR_FROM_JSON(minWidth, minWidth_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(placeholderCn, placeholderCn_);
      DARABONBA_PTR_FROM_JSON(placeholderEn, placeholderEn_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(value, value_);
      DARABONBA_PTR_FROM_JSON(values, values_);
    };
    AlertRuleAlertMetricParamDef() = default ;
    AlertRuleAlertMetricParamDef(const AlertRuleAlertMetricParamDef &) = default ;
    AlertRuleAlertMetricParamDef(AlertRuleAlertMetricParamDef &&) = default ;
    AlertRuleAlertMetricParamDef(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleAlertMetricParamDef() = default ;
    AlertRuleAlertMetricParamDef& operator=(const AlertRuleAlertMetricParamDef &) = default ;
    AlertRuleAlertMetricParamDef& operator=(AlertRuleAlertMetricParamDef &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxWidth_ == nullptr
        && return this->minWidth_ == nullptr && return this->name_ == nullptr && return this->placeholderCn_ == nullptr && return this->placeholderEn_ == nullptr && return this->type_ == nullptr
        && return this->value_ == nullptr && return this->values_ == nullptr; };
    // maxWidth Field Functions 
    bool hasMaxWidth() const { return this->maxWidth_ != nullptr;};
    void deleteMaxWidth() { this->maxWidth_ = nullptr;};
    inline int32_t maxWidth() const { DARABONBA_PTR_GET_DEFAULT(maxWidth_, 0) };
    inline AlertRuleAlertMetricParamDef& setMaxWidth(int32_t maxWidth) { DARABONBA_PTR_SET_VALUE(maxWidth_, maxWidth) };


    // minWidth Field Functions 
    bool hasMinWidth() const { return this->minWidth_ != nullptr;};
    void deleteMinWidth() { this->minWidth_ = nullptr;};
    inline int32_t minWidth() const { DARABONBA_PTR_GET_DEFAULT(minWidth_, 0) };
    inline AlertRuleAlertMetricParamDef& setMinWidth(int32_t minWidth) { DARABONBA_PTR_SET_VALUE(minWidth_, minWidth) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AlertRuleAlertMetricParamDef& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // placeholderCn Field Functions 
    bool hasPlaceholderCn() const { return this->placeholderCn_ != nullptr;};
    void deletePlaceholderCn() { this->placeholderCn_ = nullptr;};
    inline string placeholderCn() const { DARABONBA_PTR_GET_DEFAULT(placeholderCn_, "") };
    inline AlertRuleAlertMetricParamDef& setPlaceholderCn(string placeholderCn) { DARABONBA_PTR_SET_VALUE(placeholderCn_, placeholderCn) };


    // placeholderEn Field Functions 
    bool hasPlaceholderEn() const { return this->placeholderEn_ != nullptr;};
    void deletePlaceholderEn() { this->placeholderEn_ = nullptr;};
    inline string placeholderEn() const { DARABONBA_PTR_GET_DEFAULT(placeholderEn_, "") };
    inline AlertRuleAlertMetricParamDef& setPlaceholderEn(string placeholderEn) { DARABONBA_PTR_SET_VALUE(placeholderEn_, placeholderEn) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AlertRuleAlertMetricParamDef& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline AlertRuleAlertMetricParamDef& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<AlertRuleAlertMetricParamDefValues> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<AlertRuleAlertMetricParamDefValues>) };
    inline vector<AlertRuleAlertMetricParamDefValues> values() { DARABONBA_PTR_GET(values_, vector<AlertRuleAlertMetricParamDefValues>) };
    inline AlertRuleAlertMetricParamDef& setValues(const vector<AlertRuleAlertMetricParamDefValues> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline AlertRuleAlertMetricParamDef& setValues(vector<AlertRuleAlertMetricParamDefValues> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    std::shared_ptr<int32_t> maxWidth_ = nullptr;
    std::shared_ptr<int32_t> minWidth_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> placeholderCn_ = nullptr;
    std::shared_ptr<string> placeholderEn_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
    std::shared_ptr<vector<AlertRuleAlertMetricParamDefValues>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
