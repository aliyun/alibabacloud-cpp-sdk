// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FEATUREVIEWCONFIGVALUEPARTITIONSVALUE_HPP_
#define ALIBABACLOUD_MODELS_FEATUREVIEWCONFIGVALUEPARTITIONSVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class FeatureViewConfigValuePartitionsValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FeatureViewConfigValuePartitionsValue& obj) { 
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(Values, values_);
      DARABONBA_PTR_TO_JSON(StartValue, startValue_);
      DARABONBA_PTR_TO_JSON(EndValue, endValue_);
    };
    friend void from_json(const Darabonba::Json& j, FeatureViewConfigValuePartitionsValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
      DARABONBA_PTR_FROM_JSON(StartValue, startValue_);
      DARABONBA_PTR_FROM_JSON(EndValue, endValue_);
    };
    FeatureViewConfigValuePartitionsValue() = default ;
    FeatureViewConfigValuePartitionsValue(const FeatureViewConfigValuePartitionsValue &) = default ;
    FeatureViewConfigValuePartitionsValue(FeatureViewConfigValuePartitionsValue &&) = default ;
    FeatureViewConfigValuePartitionsValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FeatureViewConfigValuePartitionsValue() = default ;
    FeatureViewConfigValuePartitionsValue& operator=(const FeatureViewConfigValuePartitionsValue &) = default ;
    FeatureViewConfigValuePartitionsValue& operator=(FeatureViewConfigValuePartitionsValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->value_ == nullptr
        && this->values_ == nullptr && this->startValue_ == nullptr && this->endValue_ == nullptr; };
    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline FeatureViewConfigValuePartitionsValue& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline FeatureViewConfigValuePartitionsValue& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline FeatureViewConfigValuePartitionsValue& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    // startValue Field Functions 
    bool hasStartValue() const { return this->startValue_ != nullptr;};
    void deleteStartValue() { this->startValue_ = nullptr;};
    inline string getStartValue() const { DARABONBA_PTR_GET_DEFAULT(startValue_, "") };
    inline FeatureViewConfigValuePartitionsValue& setStartValue(string startValue) { DARABONBA_PTR_SET_VALUE(startValue_, startValue) };


    // endValue Field Functions 
    bool hasEndValue() const { return this->endValue_ != nullptr;};
    void deleteEndValue() { this->endValue_ = nullptr;};
    inline string getEndValue() const { DARABONBA_PTR_GET_DEFAULT(endValue_, "") };
    inline FeatureViewConfigValuePartitionsValue& setEndValue(string endValue) { DARABONBA_PTR_SET_VALUE(endValue_, endValue) };


  protected:
    shared_ptr<string> value_ {};
    shared_ptr<vector<string>> values_ {};
    shared_ptr<string> startValue_ {};
    shared_ptr<string> endValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
