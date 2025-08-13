// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDECISIONRESULTFLUCTUATIONRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDECISIONRESULTFLUCTUATIONRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeDecisionResultFluctuationResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDecisionResultFluctuationResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(todayNum, todayNum_);
      DARABONBA_PTR_TO_JSON(withinSevenDayNum, withinSevenDayNum_);
      DARABONBA_PTR_TO_JSON(withinThirtyDayNum, withinThirtyDayNum_);
      DARABONBA_PTR_TO_JSON(withinThreeDayNum, withinThreeDayNum_);
      DARABONBA_PTR_TO_JSON(yesterdayNum, yesterdayNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDecisionResultFluctuationResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(todayNum, todayNum_);
      DARABONBA_PTR_FROM_JSON(withinSevenDayNum, withinSevenDayNum_);
      DARABONBA_PTR_FROM_JSON(withinThirtyDayNum, withinThirtyDayNum_);
      DARABONBA_PTR_FROM_JSON(withinThreeDayNum, withinThreeDayNum_);
      DARABONBA_PTR_FROM_JSON(yesterdayNum, yesterdayNum_);
    };
    DescribeDecisionResultFluctuationResponseBodyResultObject() = default ;
    DescribeDecisionResultFluctuationResponseBodyResultObject(const DescribeDecisionResultFluctuationResponseBodyResultObject &) = default ;
    DescribeDecisionResultFluctuationResponseBodyResultObject(DescribeDecisionResultFluctuationResponseBodyResultObject &&) = default ;
    DescribeDecisionResultFluctuationResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDecisionResultFluctuationResponseBodyResultObject() = default ;
    DescribeDecisionResultFluctuationResponseBodyResultObject& operator=(const DescribeDecisionResultFluctuationResponseBodyResultObject &) = default ;
    DescribeDecisionResultFluctuationResponseBodyResultObject& operator=(DescribeDecisionResultFluctuationResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr
        && this->todayNum_ != nullptr && this->withinSevenDayNum_ != nullptr && this->withinThirtyDayNum_ != nullptr && this->withinThreeDayNum_ != nullptr && this->yesterdayNum_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDecisionResultFluctuationResponseBodyResultObject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // todayNum Field Functions 
    bool hasTodayNum() const { return this->todayNum_ != nullptr;};
    void deleteTodayNum() { this->todayNum_ = nullptr;};
    inline int64_t todayNum() const { DARABONBA_PTR_GET_DEFAULT(todayNum_, 0L) };
    inline DescribeDecisionResultFluctuationResponseBodyResultObject& setTodayNum(int64_t todayNum) { DARABONBA_PTR_SET_VALUE(todayNum_, todayNum) };


    // withinSevenDayNum Field Functions 
    bool hasWithinSevenDayNum() const { return this->withinSevenDayNum_ != nullptr;};
    void deleteWithinSevenDayNum() { this->withinSevenDayNum_ = nullptr;};
    inline string withinSevenDayNum() const { DARABONBA_PTR_GET_DEFAULT(withinSevenDayNum_, "") };
    inline DescribeDecisionResultFluctuationResponseBodyResultObject& setWithinSevenDayNum(string withinSevenDayNum) { DARABONBA_PTR_SET_VALUE(withinSevenDayNum_, withinSevenDayNum) };


    // withinThirtyDayNum Field Functions 
    bool hasWithinThirtyDayNum() const { return this->withinThirtyDayNum_ != nullptr;};
    void deleteWithinThirtyDayNum() { this->withinThirtyDayNum_ = nullptr;};
    inline string withinThirtyDayNum() const { DARABONBA_PTR_GET_DEFAULT(withinThirtyDayNum_, "") };
    inline DescribeDecisionResultFluctuationResponseBodyResultObject& setWithinThirtyDayNum(string withinThirtyDayNum) { DARABONBA_PTR_SET_VALUE(withinThirtyDayNum_, withinThirtyDayNum) };


    // withinThreeDayNum Field Functions 
    bool hasWithinThreeDayNum() const { return this->withinThreeDayNum_ != nullptr;};
    void deleteWithinThreeDayNum() { this->withinThreeDayNum_ = nullptr;};
    inline string withinThreeDayNum() const { DARABONBA_PTR_GET_DEFAULT(withinThreeDayNum_, "") };
    inline DescribeDecisionResultFluctuationResponseBodyResultObject& setWithinThreeDayNum(string withinThreeDayNum) { DARABONBA_PTR_SET_VALUE(withinThreeDayNum_, withinThreeDayNum) };


    // yesterdayNum Field Functions 
    bool hasYesterdayNum() const { return this->yesterdayNum_ != nullptr;};
    void deleteYesterdayNum() { this->yesterdayNum_ = nullptr;};
    inline int64_t yesterdayNum() const { DARABONBA_PTR_GET_DEFAULT(yesterdayNum_, 0L) };
    inline DescribeDecisionResultFluctuationResponseBodyResultObject& setYesterdayNum(int64_t yesterdayNum) { DARABONBA_PTR_SET_VALUE(yesterdayNum_, yesterdayNum) };


  protected:
    // Execution status.
    std::shared_ptr<string> status_ = nullptr;
    // Today\\"s count
    std::shared_ptr<int64_t> todayNum_ = nullptr;
    // Count within the last seven days
    std::shared_ptr<string> withinSevenDayNum_ = nullptr;
    // Count within the last thirty days
    std::shared_ptr<string> withinThirtyDayNum_ = nullptr;
    // Count within the last three days
    std::shared_ptr<string> withinThreeDayNum_ = nullptr;
    // Yesterday\\"s count
    std::shared_ptr<int64_t> yesterdayNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
