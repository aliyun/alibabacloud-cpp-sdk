// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGSFLUCTUATIONRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGSFLUCTUATIONRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeTagsFluctuationResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagsFluctuationResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(tableName, tableName_);
      DARABONBA_PTR_TO_JSON(todayNum, todayNum_);
      DARABONBA_PTR_TO_JSON(withinSevenDayNum, withinSevenDayNum_);
      DARABONBA_PTR_TO_JSON(withinThirtyDayNum, withinThirtyDayNum_);
      DARABONBA_PTR_TO_JSON(withinThreeDayNum, withinThreeDayNum_);
      DARABONBA_PTR_TO_JSON(yesterdayNum, yesterdayNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagsFluctuationResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(tableName, tableName_);
      DARABONBA_PTR_FROM_JSON(todayNum, todayNum_);
      DARABONBA_PTR_FROM_JSON(withinSevenDayNum, withinSevenDayNum_);
      DARABONBA_PTR_FROM_JSON(withinThirtyDayNum, withinThirtyDayNum_);
      DARABONBA_PTR_FROM_JSON(withinThreeDayNum, withinThreeDayNum_);
      DARABONBA_PTR_FROM_JSON(yesterdayNum, yesterdayNum_);
    };
    DescribeTagsFluctuationResponseBodyResultObject() = default ;
    DescribeTagsFluctuationResponseBodyResultObject(const DescribeTagsFluctuationResponseBodyResultObject &) = default ;
    DescribeTagsFluctuationResponseBodyResultObject(DescribeTagsFluctuationResponseBodyResultObject &&) = default ;
    DescribeTagsFluctuationResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagsFluctuationResponseBodyResultObject() = default ;
    DescribeTagsFluctuationResponseBodyResultObject& operator=(const DescribeTagsFluctuationResponseBodyResultObject &) = default ;
    DescribeTagsFluctuationResponseBodyResultObject& operator=(DescribeTagsFluctuationResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tableName_ != nullptr
        && this->todayNum_ != nullptr && this->withinSevenDayNum_ != nullptr && this->withinThirtyDayNum_ != nullptr && this->withinThreeDayNum_ != nullptr && this->yesterdayNum_ != nullptr; };
    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeTagsFluctuationResponseBodyResultObject& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // todayNum Field Functions 
    bool hasTodayNum() const { return this->todayNum_ != nullptr;};
    void deleteTodayNum() { this->todayNum_ = nullptr;};
    inline int64_t todayNum() const { DARABONBA_PTR_GET_DEFAULT(todayNum_, 0L) };
    inline DescribeTagsFluctuationResponseBodyResultObject& setTodayNum(int64_t todayNum) { DARABONBA_PTR_SET_VALUE(todayNum_, todayNum) };


    // withinSevenDayNum Field Functions 
    bool hasWithinSevenDayNum() const { return this->withinSevenDayNum_ != nullptr;};
    void deleteWithinSevenDayNum() { this->withinSevenDayNum_ = nullptr;};
    inline string withinSevenDayNum() const { DARABONBA_PTR_GET_DEFAULT(withinSevenDayNum_, "") };
    inline DescribeTagsFluctuationResponseBodyResultObject& setWithinSevenDayNum(string withinSevenDayNum) { DARABONBA_PTR_SET_VALUE(withinSevenDayNum_, withinSevenDayNum) };


    // withinThirtyDayNum Field Functions 
    bool hasWithinThirtyDayNum() const { return this->withinThirtyDayNum_ != nullptr;};
    void deleteWithinThirtyDayNum() { this->withinThirtyDayNum_ = nullptr;};
    inline string withinThirtyDayNum() const { DARABONBA_PTR_GET_DEFAULT(withinThirtyDayNum_, "") };
    inline DescribeTagsFluctuationResponseBodyResultObject& setWithinThirtyDayNum(string withinThirtyDayNum) { DARABONBA_PTR_SET_VALUE(withinThirtyDayNum_, withinThirtyDayNum) };


    // withinThreeDayNum Field Functions 
    bool hasWithinThreeDayNum() const { return this->withinThreeDayNum_ != nullptr;};
    void deleteWithinThreeDayNum() { this->withinThreeDayNum_ = nullptr;};
    inline string withinThreeDayNum() const { DARABONBA_PTR_GET_DEFAULT(withinThreeDayNum_, "") };
    inline DescribeTagsFluctuationResponseBodyResultObject& setWithinThreeDayNum(string withinThreeDayNum) { DARABONBA_PTR_SET_VALUE(withinThreeDayNum_, withinThreeDayNum) };


    // yesterdayNum Field Functions 
    bool hasYesterdayNum() const { return this->yesterdayNum_ != nullptr;};
    void deleteYesterdayNum() { this->yesterdayNum_ = nullptr;};
    inline int64_t yesterdayNum() const { DARABONBA_PTR_GET_DEFAULT(yesterdayNum_, 0L) };
    inline DescribeTagsFluctuationResponseBodyResultObject& setYesterdayNum(int64_t yesterdayNum) { DARABONBA_PTR_SET_VALUE(yesterdayNum_, yesterdayNum) };


  protected:
    // Tag name
    std::shared_ptr<string> tableName_ = nullptr;
    // Data for today
    std::shared_ptr<int64_t> todayNum_ = nullptr;
    // Data for the last seven days
    std::shared_ptr<string> withinSevenDayNum_ = nullptr;
    // Data for the last thirty days
    std::shared_ptr<string> withinThirtyDayNum_ = nullptr;
    // Data for the last three days
    std::shared_ptr<string> withinThreeDayNum_ = nullptr;
    // Data for yesterday
    std::shared_ptr<int64_t> yesterdayNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
