// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSPACESUMMARYRESPONSEBODYDATADATAGROWTH_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSPACESUMMARYRESPONSEBODYDATADATAGROWTH_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBClusterSpaceSummaryResponseBodyDataDataGrowth : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterSpaceSummaryResponseBodyDataDataGrowth& obj) { 
      DARABONBA_PTR_TO_JSON(DayGrowth, dayGrowth_);
      DARABONBA_PTR_TO_JSON(WeekGrowth, weekGrowth_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterSpaceSummaryResponseBodyDataDataGrowth& obj) { 
      DARABONBA_PTR_FROM_JSON(DayGrowth, dayGrowth_);
      DARABONBA_PTR_FROM_JSON(WeekGrowth, weekGrowth_);
    };
    DescribeDBClusterSpaceSummaryResponseBodyDataDataGrowth() = default ;
    DescribeDBClusterSpaceSummaryResponseBodyDataDataGrowth(const DescribeDBClusterSpaceSummaryResponseBodyDataDataGrowth &) = default ;
    DescribeDBClusterSpaceSummaryResponseBodyDataDataGrowth(DescribeDBClusterSpaceSummaryResponseBodyDataDataGrowth &&) = default ;
    DescribeDBClusterSpaceSummaryResponseBodyDataDataGrowth(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterSpaceSummaryResponseBodyDataDataGrowth() = default ;
    DescribeDBClusterSpaceSummaryResponseBodyDataDataGrowth& operator=(const DescribeDBClusterSpaceSummaryResponseBodyDataDataGrowth &) = default ;
    DescribeDBClusterSpaceSummaryResponseBodyDataDataGrowth& operator=(DescribeDBClusterSpaceSummaryResponseBodyDataDataGrowth &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dayGrowth_ != nullptr
        && this->weekGrowth_ != nullptr; };
    // dayGrowth Field Functions 
    bool hasDayGrowth() const { return this->dayGrowth_ != nullptr;};
    void deleteDayGrowth() { this->dayGrowth_ = nullptr;};
    inline int64_t dayGrowth() const { DARABONBA_PTR_GET_DEFAULT(dayGrowth_, 0L) };
    inline DescribeDBClusterSpaceSummaryResponseBodyDataDataGrowth& setDayGrowth(int64_t dayGrowth) { DARABONBA_PTR_SET_VALUE(dayGrowth_, dayGrowth) };


    // weekGrowth Field Functions 
    bool hasWeekGrowth() const { return this->weekGrowth_ != nullptr;};
    void deleteWeekGrowth() { this->weekGrowth_ = nullptr;};
    inline int64_t weekGrowth() const { DARABONBA_PTR_GET_DEFAULT(weekGrowth_, 0L) };
    inline DescribeDBClusterSpaceSummaryResponseBodyDataDataGrowth& setWeekGrowth(int64_t weekGrowth) { DARABONBA_PTR_SET_VALUE(weekGrowth_, weekGrowth) };


  protected:
    // The data growth within the last day. Unit: bytes.
    // 
    // >  Formula: Data growth within the last day = Current data size - Data size one day ago.
    std::shared_ptr<int64_t> dayGrowth_ = nullptr;
    // The daily data growth within the last seven days. Unit: bytes.
    // 
    // >  Formula: Daily data growth within the last seven days = (Current data size - Data size seven days ago)/7.
    std::shared_ptr<int64_t> weekGrowth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
