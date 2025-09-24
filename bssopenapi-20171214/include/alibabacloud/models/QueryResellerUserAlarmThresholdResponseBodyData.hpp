// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRESELLERUSERALARMTHRESHOLDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYRESELLERUSERALARMTHRESHOLDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryResellerUserAlarmThresholdResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryResellerUserAlarmThresholdResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Denominator, denominator_);
      DARABONBA_PTR_TO_JSON(Numerator, numerator_);
      DARABONBA_PTR_TO_JSON(ThresholdAmount, thresholdAmount_);
      DARABONBA_PTR_TO_JSON(ThresholdType, thresholdType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryResellerUserAlarmThresholdResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Denominator, denominator_);
      DARABONBA_PTR_FROM_JSON(Numerator, numerator_);
      DARABONBA_PTR_FROM_JSON(ThresholdAmount, thresholdAmount_);
      DARABONBA_PTR_FROM_JSON(ThresholdType, thresholdType_);
    };
    QueryResellerUserAlarmThresholdResponseBodyData() = default ;
    QueryResellerUserAlarmThresholdResponseBodyData(const QueryResellerUserAlarmThresholdResponseBodyData &) = default ;
    QueryResellerUserAlarmThresholdResponseBodyData(QueryResellerUserAlarmThresholdResponseBodyData &&) = default ;
    QueryResellerUserAlarmThresholdResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryResellerUserAlarmThresholdResponseBodyData() = default ;
    QueryResellerUserAlarmThresholdResponseBodyData& operator=(const QueryResellerUserAlarmThresholdResponseBodyData &) = default ;
    QueryResellerUserAlarmThresholdResponseBodyData& operator=(QueryResellerUserAlarmThresholdResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->denominator_ != nullptr
        && this->numerator_ != nullptr && this->thresholdAmount_ != nullptr && this->thresholdType_ != nullptr; };
    // denominator Field Functions 
    bool hasDenominator() const { return this->denominator_ != nullptr;};
    void deleteDenominator() { this->denominator_ = nullptr;};
    inline int32_t denominator() const { DARABONBA_PTR_GET_DEFAULT(denominator_, 0) };
    inline QueryResellerUserAlarmThresholdResponseBodyData& setDenominator(int32_t denominator) { DARABONBA_PTR_SET_VALUE(denominator_, denominator) };


    // numerator Field Functions 
    bool hasNumerator() const { return this->numerator_ != nullptr;};
    void deleteNumerator() { this->numerator_ = nullptr;};
    inline int32_t numerator() const { DARABONBA_PTR_GET_DEFAULT(numerator_, 0) };
    inline QueryResellerUserAlarmThresholdResponseBodyData& setNumerator(int32_t numerator) { DARABONBA_PTR_SET_VALUE(numerator_, numerator) };


    // thresholdAmount Field Functions 
    bool hasThresholdAmount() const { return this->thresholdAmount_ != nullptr;};
    void deleteThresholdAmount() { this->thresholdAmount_ = nullptr;};
    inline string thresholdAmount() const { DARABONBA_PTR_GET_DEFAULT(thresholdAmount_, "") };
    inline QueryResellerUserAlarmThresholdResponseBodyData& setThresholdAmount(string thresholdAmount) { DARABONBA_PTR_SET_VALUE(thresholdAmount_, thresholdAmount) };


    // thresholdType Field Functions 
    bool hasThresholdType() const { return this->thresholdType_ != nullptr;};
    void deleteThresholdType() { this->thresholdType_ = nullptr;};
    inline int32_t thresholdType() const { DARABONBA_PTR_GET_DEFAULT(thresholdType_, 0) };
    inline QueryResellerUserAlarmThresholdResponseBodyData& setThresholdType(int32_t thresholdType) { DARABONBA_PTR_SET_VALUE(thresholdType_, thresholdType) };


  protected:
    std::shared_ptr<int32_t> denominator_ = nullptr;
    std::shared_ptr<int32_t> numerator_ = nullptr;
    std::shared_ptr<string> thresholdAmount_ = nullptr;
    std::shared_ptr<int32_t> thresholdType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
