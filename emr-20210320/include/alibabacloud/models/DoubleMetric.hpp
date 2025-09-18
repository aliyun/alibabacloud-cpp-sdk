// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOUBLEMETRIC_HPP_
#define ALIBABACLOUD_MODELS_DOUBLEMETRIC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class DoubleMetric : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DoubleMetric& obj) { 
      DARABONBA_PTR_TO_JSON(Unit, unit_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DoubleMetric& obj) { 
      DARABONBA_PTR_FROM_JSON(Unit, unit_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DoubleMetric() = default ;
    DoubleMetric(const DoubleMetric &) = default ;
    DoubleMetric(DoubleMetric &&) = default ;
    DoubleMetric(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DoubleMetric() = default ;
    DoubleMetric& operator=(const DoubleMetric &) = default ;
    DoubleMetric& operator=(DoubleMetric &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->unit_ != nullptr
        && this->value_ != nullptr; };
    // unit Field Functions 
    bool hasUnit() const { return this->unit_ != nullptr;};
    void deleteUnit() { this->unit_ = nullptr;};
    inline string unit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
    inline DoubleMetric& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline double value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline DoubleMetric& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> unit_ = nullptr;
    std::shared_ptr<double> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
