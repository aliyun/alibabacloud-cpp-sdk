// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROMETHEUSMETRICFILTERVALUE_HPP_
#define ALIBABACLOUD_MODELS_PROMETHEUSMETRICFILTERVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class PrometheusMetricFilterValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrometheusMetricFilterValue& obj) { 
      DARABONBA_PTR_TO_JSON(dim, dim_);
      DARABONBA_PTR_TO_JSON(opt, opt_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, PrometheusMetricFilterValue& obj) { 
      DARABONBA_PTR_FROM_JSON(dim, dim_);
      DARABONBA_PTR_FROM_JSON(opt, opt_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    PrometheusMetricFilterValue() = default ;
    PrometheusMetricFilterValue(const PrometheusMetricFilterValue &) = default ;
    PrometheusMetricFilterValue(PrometheusMetricFilterValue &&) = default ;
    PrometheusMetricFilterValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrometheusMetricFilterValue() = default ;
    PrometheusMetricFilterValue& operator=(const PrometheusMetricFilterValue &) = default ;
    PrometheusMetricFilterValue& operator=(PrometheusMetricFilterValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dim_ == nullptr
        && this->opt_ == nullptr && this->value_ == nullptr; };
    // dim Field Functions 
    bool hasDim() const { return this->dim_ != nullptr;};
    void deleteDim() { this->dim_ = nullptr;};
    inline string getDim() const { DARABONBA_PTR_GET_DEFAULT(dim_, "") };
    inline PrometheusMetricFilterValue& setDim(string dim) { DARABONBA_PTR_SET_VALUE(dim_, dim) };


    // opt Field Functions 
    bool hasOpt() const { return this->opt_ != nullptr;};
    void deleteOpt() { this->opt_ = nullptr;};
    inline string getOpt() const { DARABONBA_PTR_GET_DEFAULT(opt_, "") };
    inline PrometheusMetricFilterValue& setOpt(string opt) { DARABONBA_PTR_SET_VALUE(opt_, opt) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline PrometheusMetricFilterValue& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    shared_ptr<string> dim_ {};
    shared_ptr<string> opt_ {};
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
