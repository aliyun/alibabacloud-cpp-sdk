// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEBARCHARTRESPONSEBODYRESULTOBJECTSERIESDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEBARCHARTRESPONSEBODYRESULTOBJECTSERIESDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRuleBarChartResponseBodyResultObjectSeriesData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleBarChartResponseBodyResultObjectSeriesData& obj) { 
      DARABONBA_PTR_TO_JSON(eventName, eventName_);
      DARABONBA_PTR_TO_JSON(num, num_);
      DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleBarChartResponseBodyResultObjectSeriesData& obj) { 
      DARABONBA_PTR_FROM_JSON(eventName, eventName_);
      DARABONBA_PTR_FROM_JSON(num, num_);
      DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    DescribeRuleBarChartResponseBodyResultObjectSeriesData() = default ;
    DescribeRuleBarChartResponseBodyResultObjectSeriesData(const DescribeRuleBarChartResponseBodyResultObjectSeriesData &) = default ;
    DescribeRuleBarChartResponseBodyResultObjectSeriesData(DescribeRuleBarChartResponseBodyResultObjectSeriesData &&) = default ;
    DescribeRuleBarChartResponseBodyResultObjectSeriesData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleBarChartResponseBodyResultObjectSeriesData() = default ;
    DescribeRuleBarChartResponseBodyResultObjectSeriesData& operator=(const DescribeRuleBarChartResponseBodyResultObjectSeriesData &) = default ;
    DescribeRuleBarChartResponseBodyResultObjectSeriesData& operator=(DescribeRuleBarChartResponseBodyResultObjectSeriesData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventName_ == nullptr
        && return this->num_ == nullptr && return this->ruleName_ == nullptr && return this->status_ == nullptr; };
    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeRuleBarChartResponseBodyResultObjectSeriesData& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // num Field Functions 
    bool hasNum() const { return this->num_ != nullptr;};
    void deleteNum() { this->num_ = nullptr;};
    inline int64_t num() const { DARABONBA_PTR_GET_DEFAULT(num_, 0L) };
    inline DescribeRuleBarChartResponseBodyResultObjectSeriesData& setNum(int64_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeRuleBarChartResponseBodyResultObjectSeriesData& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRuleBarChartResponseBodyResultObjectSeriesData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Event name.
    std::shared_ptr<string> eventName_ = nullptr;
    // Number.
    std::shared_ptr<int64_t> num_ = nullptr;
    // Policy name
    std::shared_ptr<string> ruleName_ = nullptr;
    // Status.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
