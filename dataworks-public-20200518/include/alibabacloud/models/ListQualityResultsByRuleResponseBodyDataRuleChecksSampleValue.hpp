// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUALITYRESULTSBYRULERESPONSEBODYDATARULECHECKSSAMPLEVALUE_HPP_
#define ALIBABACLOUD_MODELS_LISTQUALITYRESULTSBYRULERESPONSEBODYDATARULECHECKSSAMPLEVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListQualityResultsByRuleResponseBodyDataRuleChecksSampleValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQualityResultsByRuleResponseBodyDataRuleChecksSampleValue& obj) { 
      DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
      DARABONBA_PTR_TO_JSON(DiscreteProperty, discreteProperty_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListQualityResultsByRuleResponseBodyDataRuleChecksSampleValue& obj) { 
      DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
      DARABONBA_PTR_FROM_JSON(DiscreteProperty, discreteProperty_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListQualityResultsByRuleResponseBodyDataRuleChecksSampleValue() = default ;
    ListQualityResultsByRuleResponseBodyDataRuleChecksSampleValue(const ListQualityResultsByRuleResponseBodyDataRuleChecksSampleValue &) = default ;
    ListQualityResultsByRuleResponseBodyDataRuleChecksSampleValue(ListQualityResultsByRuleResponseBodyDataRuleChecksSampleValue &&) = default ;
    ListQualityResultsByRuleResponseBodyDataRuleChecksSampleValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQualityResultsByRuleResponseBodyDataRuleChecksSampleValue() = default ;
    ListQualityResultsByRuleResponseBodyDataRuleChecksSampleValue& operator=(const ListQualityResultsByRuleResponseBodyDataRuleChecksSampleValue &) = default ;
    ListQualityResultsByRuleResponseBodyDataRuleChecksSampleValue& operator=(ListQualityResultsByRuleResponseBodyDataRuleChecksSampleValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizDate_ != nullptr
        && this->discreteProperty_ != nullptr && this->value_ != nullptr; };
    // bizDate Field Functions 
    bool hasBizDate() const { return this->bizDate_ != nullptr;};
    void deleteBizDate() { this->bizDate_ = nullptr;};
    inline string bizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecksSampleValue& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


    // discreteProperty Field Functions 
    bool hasDiscreteProperty() const { return this->discreteProperty_ != nullptr;};
    void deleteDiscreteProperty() { this->discreteProperty_ = nullptr;};
    inline string discreteProperty() const { DARABONBA_PTR_GET_DEFAULT(discreteProperty_, "") };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecksSampleValue& setDiscreteProperty(string discreteProperty) { DARABONBA_PTR_SET_VALUE(discreteProperty_, discreteProperty) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline float value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecksSampleValue& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The data timestamp. If the monitored business entity is offline data, the value is usually one day before the monitoring is performed.
    std::shared_ptr<string> bizDate_ = nullptr;
    // The values of the sample field that are grouped by using the GROUP BY clause. For example, the values of the Gender field are grouped by using the GROUP BY clause. In this case, the values of DiscreteProperty are Male, Female, and null.
    std::shared_ptr<string> discreteProperty_ = nullptr;
    // The sample value.
    std::shared_ptr<float> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
