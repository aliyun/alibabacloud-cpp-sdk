// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTOPNMETRICRESPONSEBODYSECURITYEVENTTOPNVALUES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTTOPNMETRICRESPONSEBODYSECURITYEVENTTOPNVALUES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSecurityEventTopNMetricResponseBodySecurityEventTopNValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventTopNMetricResponseBodySecurityEventTopNValues& obj) { 
      DARABONBA_PTR_TO_JSON(Attribute, attribute_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventTopNMetricResponseBodySecurityEventTopNValues& obj) { 
      DARABONBA_PTR_FROM_JSON(Attribute, attribute_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeSecurityEventTopNMetricResponseBodySecurityEventTopNValues() = default ;
    DescribeSecurityEventTopNMetricResponseBodySecurityEventTopNValues(const DescribeSecurityEventTopNMetricResponseBodySecurityEventTopNValues &) = default ;
    DescribeSecurityEventTopNMetricResponseBodySecurityEventTopNValues(DescribeSecurityEventTopNMetricResponseBodySecurityEventTopNValues &&) = default ;
    DescribeSecurityEventTopNMetricResponseBodySecurityEventTopNValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventTopNMetricResponseBodySecurityEventTopNValues() = default ;
    DescribeSecurityEventTopNMetricResponseBodySecurityEventTopNValues& operator=(const DescribeSecurityEventTopNMetricResponseBodySecurityEventTopNValues &) = default ;
    DescribeSecurityEventTopNMetricResponseBodySecurityEventTopNValues& operator=(DescribeSecurityEventTopNMetricResponseBodySecurityEventTopNValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attribute_ == nullptr
        && return this->name_ == nullptr && return this->value_ == nullptr; };
    // attribute Field Functions 
    bool hasAttribute() const { return this->attribute_ != nullptr;};
    void deleteAttribute() { this->attribute_ = nullptr;};
    inline string attribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
    inline DescribeSecurityEventTopNMetricResponseBodySecurityEventTopNValues& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSecurityEventTopNMetricResponseBodySecurityEventTopNValues& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline int64_t value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
    inline DescribeSecurityEventTopNMetricResponseBodySecurityEventTopNValues& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The additional information, such as the protection module for a protection rule whose ID is returned.
    std::shared_ptr<string> attribute_ = nullptr;
    // The field value, which varies based on the metric.
    std::shared_ptr<string> name_ = nullptr;
    // The count for the data entry.
    std::shared_ptr<int64_t> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
