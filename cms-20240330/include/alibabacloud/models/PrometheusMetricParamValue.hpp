// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROMETHEUSMETRICPARAMVALUE_HPP_
#define ALIBABACLOUD_MODELS_PROMETHEUSMETRICPARAMVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class PrometheusMetricParamValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrometheusMetricParamValue& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, PrometheusMetricParamValue& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    PrometheusMetricParamValue() = default ;
    PrometheusMetricParamValue(const PrometheusMetricParamValue &) = default ;
    PrometheusMetricParamValue(PrometheusMetricParamValue &&) = default ;
    PrometheusMetricParamValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrometheusMetricParamValue() = default ;
    PrometheusMetricParamValue& operator=(const PrometheusMetricParamValue &) = default ;
    PrometheusMetricParamValue& operator=(PrometheusMetricParamValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PrometheusMetricParamValue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline PrometheusMetricParamValue& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    shared_ptr<string> name_ {};
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
