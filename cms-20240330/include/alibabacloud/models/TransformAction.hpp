// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFORMACTION_HPP_
#define ALIBABACLOUD_MODELS_TRANSFORMACTION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FilterSetting.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class TransformAction : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransformAction& obj) { 
      DARABONBA_PTR_TO_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_TO_JSON(labelKey, labelKey_);
      DARABONBA_PTR_TO_JSON(mapping, mapping_);
      DARABONBA_PTR_TO_JSON(regExp, regExp_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(target, target_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(value, value_);
      DARABONBA_PTR_TO_JSON(variable, variable_);
    };
    friend void from_json(const Darabonba::Json& j, TransformAction& obj) { 
      DARABONBA_PTR_FROM_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_FROM_JSON(labelKey, labelKey_);
      DARABONBA_PTR_FROM_JSON(mapping, mapping_);
      DARABONBA_PTR_FROM_JSON(regExp, regExp_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(target, target_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(value, value_);
      DARABONBA_PTR_FROM_JSON(variable, variable_);
    };
    TransformAction() = default ;
    TransformAction(const TransformAction &) = default ;
    TransformAction(TransformAction &&) = default ;
    TransformAction(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransformAction() = default ;
    TransformAction& operator=(const TransformAction &) = default ;
    TransformAction& operator=(TransformAction &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterSetting_ == nullptr
        && return this->labelKey_ == nullptr && return this->mapping_ == nullptr && return this->regExp_ == nullptr && return this->source_ == nullptr && return this->target_ == nullptr
        && return this->type_ == nullptr && return this->value_ == nullptr && return this->variable_ == nullptr; };
    // filterSetting Field Functions 
    bool hasFilterSetting() const { return this->filterSetting_ != nullptr;};
    void deleteFilterSetting() { this->filterSetting_ = nullptr;};
    inline const FilterSetting & filterSetting() const { DARABONBA_PTR_GET_CONST(filterSetting_, FilterSetting) };
    inline FilterSetting filterSetting() { DARABONBA_PTR_GET(filterSetting_, FilterSetting) };
    inline TransformAction& setFilterSetting(const FilterSetting & filterSetting) { DARABONBA_PTR_SET_VALUE(filterSetting_, filterSetting) };
    inline TransformAction& setFilterSetting(FilterSetting && filterSetting) { DARABONBA_PTR_SET_RVALUE(filterSetting_, filterSetting) };


    // labelKey Field Functions 
    bool hasLabelKey() const { return this->labelKey_ != nullptr;};
    void deleteLabelKey() { this->labelKey_ = nullptr;};
    inline string labelKey() const { DARABONBA_PTR_GET_DEFAULT(labelKey_, "") };
    inline TransformAction& setLabelKey(string labelKey) { DARABONBA_PTR_SET_VALUE(labelKey_, labelKey) };


    // mapping Field Functions 
    bool hasMapping() const { return this->mapping_ != nullptr;};
    void deleteMapping() { this->mapping_ = nullptr;};
    inline const map<string, string> & mapping() const { DARABONBA_PTR_GET_CONST(mapping_, map<string, string>) };
    inline map<string, string> mapping() { DARABONBA_PTR_GET(mapping_, map<string, string>) };
    inline TransformAction& setMapping(const map<string, string> & mapping) { DARABONBA_PTR_SET_VALUE(mapping_, mapping) };
    inline TransformAction& setMapping(map<string, string> && mapping) { DARABONBA_PTR_SET_RVALUE(mapping_, mapping) };


    // regExp Field Functions 
    bool hasRegExp() const { return this->regExp_ != nullptr;};
    void deleteRegExp() { this->regExp_ = nullptr;};
    inline string regExp() const { DARABONBA_PTR_GET_DEFAULT(regExp_, "") };
    inline TransformAction& setRegExp(string regExp) { DARABONBA_PTR_SET_VALUE(regExp_, regExp) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline TransformAction& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline TransformAction& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline TransformAction& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline TransformAction& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // variable Field Functions 
    bool hasVariable() const { return this->variable_ != nullptr;};
    void deleteVariable() { this->variable_ = nullptr;};
    inline string variable() const { DARABONBA_PTR_GET_DEFAULT(variable_, "") };
    inline TransformAction& setVariable(string variable) { DARABONBA_PTR_SET_VALUE(variable_, variable) };


  protected:
    std::shared_ptr<FilterSetting> filterSetting_ = nullptr;
    std::shared_ptr<string> labelKey_ = nullptr;
    std::shared_ptr<map<string, string>> mapping_ = nullptr;
    std::shared_ptr<string> regExp_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> target_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
    std::shared_ptr<string> variable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
