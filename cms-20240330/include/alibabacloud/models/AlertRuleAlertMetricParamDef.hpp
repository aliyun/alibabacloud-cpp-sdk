// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULEALERTMETRICPARAMDEF_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULEALERTMETRICPARAMDEF_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Values : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Values& obj) { 
        DARABONBA_PTR_TO_JSON(labelCn, labelCn_);
        DARABONBA_PTR_TO_JSON(labelEn, labelEn_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Values& obj) { 
        DARABONBA_PTR_FROM_JSON(labelCn, labelCn_);
        DARABONBA_PTR_FROM_JSON(labelEn, labelEn_);
        DARABONBA_PTR_FROM_JSON(value, value_);
      };
      Values() = default ;
      Values(const Values &) = default ;
      Values(Values &&) = default ;
      Values(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Values() = default ;
      Values& operator=(const Values &) = default ;
      Values& operator=(Values &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->labelCn_ == nullptr
        && this->labelEn_ == nullptr && this->value_ == nullptr; };
      // labelCn Field Functions 
      bool hasLabelCn() const { return this->labelCn_ != nullptr;};
      void deleteLabelCn() { this->labelCn_ = nullptr;};
      inline string getLabelCn() const { DARABONBA_PTR_GET_DEFAULT(labelCn_, "") };
      inline Values& setLabelCn(string labelCn) { DARABONBA_PTR_SET_VALUE(labelCn_, labelCn) };


      // labelEn Field Functions 
      bool hasLabelEn() const { return this->labelEn_ != nullptr;};
      void deleteLabelEn() { this->labelEn_ = nullptr;};
      inline string getLabelEn() const { DARABONBA_PTR_GET_DEFAULT(labelEn_, "") };
      inline Values& setLabelEn(string labelEn) { DARABONBA_PTR_SET_VALUE(labelEn_, labelEn) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Values& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> labelCn_ {};
      shared_ptr<string> labelEn_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->maxWidth_ == nullptr
        && this->minWidth_ == nullptr && this->name_ == nullptr && this->placeholderCn_ == nullptr && this->placeholderEn_ == nullptr && this->type_ == nullptr
        && this->value_ == nullptr && this->values_ == nullptr; };
    // maxWidth Field Functions 
    bool hasMaxWidth() const { return this->maxWidth_ != nullptr;};
    void deleteMaxWidth() { this->maxWidth_ = nullptr;};
    inline int32_t getMaxWidth() const { DARABONBA_PTR_GET_DEFAULT(maxWidth_, 0) };
    inline AlertRuleAlertMetricParamDef& setMaxWidth(int32_t maxWidth) { DARABONBA_PTR_SET_VALUE(maxWidth_, maxWidth) };


    // minWidth Field Functions 
    bool hasMinWidth() const { return this->minWidth_ != nullptr;};
    void deleteMinWidth() { this->minWidth_ = nullptr;};
    inline int32_t getMinWidth() const { DARABONBA_PTR_GET_DEFAULT(minWidth_, 0) };
    inline AlertRuleAlertMetricParamDef& setMinWidth(int32_t minWidth) { DARABONBA_PTR_SET_VALUE(minWidth_, minWidth) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AlertRuleAlertMetricParamDef& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // placeholderCn Field Functions 
    bool hasPlaceholderCn() const { return this->placeholderCn_ != nullptr;};
    void deletePlaceholderCn() { this->placeholderCn_ = nullptr;};
    inline string getPlaceholderCn() const { DARABONBA_PTR_GET_DEFAULT(placeholderCn_, "") };
    inline AlertRuleAlertMetricParamDef& setPlaceholderCn(string placeholderCn) { DARABONBA_PTR_SET_VALUE(placeholderCn_, placeholderCn) };


    // placeholderEn Field Functions 
    bool hasPlaceholderEn() const { return this->placeholderEn_ != nullptr;};
    void deletePlaceholderEn() { this->placeholderEn_ = nullptr;};
    inline string getPlaceholderEn() const { DARABONBA_PTR_GET_DEFAULT(placeholderEn_, "") };
    inline AlertRuleAlertMetricParamDef& setPlaceholderEn(string placeholderEn) { DARABONBA_PTR_SET_VALUE(placeholderEn_, placeholderEn) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AlertRuleAlertMetricParamDef& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline AlertRuleAlertMetricParamDef& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<AlertRuleAlertMetricParamDef::Values> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<AlertRuleAlertMetricParamDef::Values>) };
    inline vector<AlertRuleAlertMetricParamDef::Values> getValues() { DARABONBA_PTR_GET(values_, vector<AlertRuleAlertMetricParamDef::Values>) };
    inline AlertRuleAlertMetricParamDef& setValues(const vector<AlertRuleAlertMetricParamDef::Values> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline AlertRuleAlertMetricParamDef& setValues(vector<AlertRuleAlertMetricParamDef::Values> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    shared_ptr<int32_t> maxWidth_ {};
    shared_ptr<int32_t> minWidth_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> placeholderCn_ {};
    shared_ptr<string> placeholderEn_ {};
    shared_ptr<string> type_ {};
    shared_ptr<string> value_ {};
    shared_ptr<vector<AlertRuleAlertMetricParamDef::Values>> values_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
