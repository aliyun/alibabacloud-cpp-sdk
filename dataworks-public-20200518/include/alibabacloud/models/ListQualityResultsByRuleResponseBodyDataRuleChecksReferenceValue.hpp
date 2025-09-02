// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUALITYRESULTSBYRULERESPONSEBODYDATARULECHECKSREFERENCEVALUE_HPP_
#define ALIBABACLOUD_MODELS_LISTQUALITYRESULTSBYRULERESPONSEBODYDATARULECHECKSREFERENCEVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue& obj) { 
      DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
      DARABONBA_PTR_TO_JSON(DiscreteProperty, discreteProperty_);
      DARABONBA_PTR_TO_JSON(SingleCheckResult, singleCheckResult_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue& obj) { 
      DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
      DARABONBA_PTR_FROM_JSON(DiscreteProperty, discreteProperty_);
      DARABONBA_PTR_FROM_JSON(SingleCheckResult, singleCheckResult_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue() = default ;
    ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue(const ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue &) = default ;
    ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue(ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue &&) = default ;
    ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue() = default ;
    ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue& operator=(const ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue &) = default ;
    ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue& operator=(ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizDate_ != nullptr
        && this->discreteProperty_ != nullptr && this->singleCheckResult_ != nullptr && this->threshold_ != nullptr && this->value_ != nullptr; };
    // bizDate Field Functions 
    bool hasBizDate() const { return this->bizDate_ != nullptr;};
    void deleteBizDate() { this->bizDate_ = nullptr;};
    inline string bizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


    // discreteProperty Field Functions 
    bool hasDiscreteProperty() const { return this->discreteProperty_ != nullptr;};
    void deleteDiscreteProperty() { this->discreteProperty_ = nullptr;};
    inline string discreteProperty() const { DARABONBA_PTR_GET_DEFAULT(discreteProperty_, "") };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue& setDiscreteProperty(string discreteProperty) { DARABONBA_PTR_SET_VALUE(discreteProperty_, discreteProperty) };


    // singleCheckResult Field Functions 
    bool hasSingleCheckResult() const { return this->singleCheckResult_ != nullptr;};
    void deleteSingleCheckResult() { this->singleCheckResult_ = nullptr;};
    inline int32_t singleCheckResult() const { DARABONBA_PTR_GET_DEFAULT(singleCheckResult_, 0) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue& setSingleCheckResult(int32_t singleCheckResult) { DARABONBA_PTR_SET_VALUE(singleCheckResult_, singleCheckResult) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline float threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline float value() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
    inline ListQualityResultsByRuleResponseBodyDataRuleChecksReferenceValue& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The data timestamp. If the monitored business entity is offline data, the value is usually one day before the monitoring is performed.
    std::shared_ptr<string> bizDate_ = nullptr;
    // The values of the sample field that are grouped by using the GROUP BY clause. For example, the values of the Gender field are grouped by using the GROUP BY clause. In this case, the values of DiscreteProperty are Male, Female, and null.
    std::shared_ptr<string> discreteProperty_ = nullptr;
    // The string of the monitoring result.
    std::shared_ptr<int32_t> singleCheckResult_ = nullptr;
    // The threshold.
    std::shared_ptr<float> threshold_ = nullptr;
    // The sample value.
    std::shared_ptr<float> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
