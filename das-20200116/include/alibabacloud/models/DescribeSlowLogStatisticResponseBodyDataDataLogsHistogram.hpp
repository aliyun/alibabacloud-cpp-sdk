// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGSTATISTICRESPONSEBODYDATADATALOGSHISTOGRAM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGSTATISTICRESPONSEBODYDATADATALOGSHISTOGRAM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSlowLogStatisticResponseBodyDataDataLogsHistogramItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& obj) { 
      DARABONBA_PTR_TO_JSON(AvgLockTime, avgLockTime_);
      DARABONBA_PTR_TO_JSON(AvgRowsExamined, avgRowsExamined_);
      DARABONBA_PTR_TO_JSON(AvgRowsSent, avgRowsSent_);
      DARABONBA_PTR_TO_JSON(AvgRt, avgRt_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(LockTime, lockTime_);
      DARABONBA_PTR_TO_JSON(MaxLockTime, maxLockTime_);
      DARABONBA_PTR_TO_JSON(MaxRowsExamined, maxRowsExamined_);
      DARABONBA_PTR_TO_JSON(MaxRowsSent, maxRowsSent_);
      DARABONBA_PTR_TO_JSON(MaxRt, maxRt_);
      DARABONBA_PTR_TO_JSON(RowsExamined, rowsExamined_);
      DARABONBA_PTR_TO_JSON(RowsSent, rowsSent_);
      DARABONBA_PTR_TO_JSON(Rt, rt_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(Ts, ts_);
      DARABONBA_PTR_TO_JSON(TsEnd, tsEnd_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgLockTime, avgLockTime_);
      DARABONBA_PTR_FROM_JSON(AvgRowsExamined, avgRowsExamined_);
      DARABONBA_PTR_FROM_JSON(AvgRowsSent, avgRowsSent_);
      DARABONBA_PTR_FROM_JSON(AvgRt, avgRt_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(LockTime, lockTime_);
      DARABONBA_PTR_FROM_JSON(MaxLockTime, maxLockTime_);
      DARABONBA_PTR_FROM_JSON(MaxRowsExamined, maxRowsExamined_);
      DARABONBA_PTR_FROM_JSON(MaxRowsSent, maxRowsSent_);
      DARABONBA_PTR_FROM_JSON(MaxRt, maxRt_);
      DARABONBA_PTR_FROM_JSON(RowsExamined, rowsExamined_);
      DARABONBA_PTR_FROM_JSON(RowsSent, rowsSent_);
      DARABONBA_PTR_FROM_JSON(Rt, rt_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(Ts, ts_);
      DARABONBA_PTR_FROM_JSON(TsEnd, tsEnd_);
    };
    DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram() = default ;
    DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram(const DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram &) = default ;
    DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram(DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram &&) = default ;
    DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram() = default ;
    DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& operator=(const DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram &) = default ;
    DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& operator=(DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->avgLockTime_ != nullptr
        && this->avgRowsExamined_ != nullptr && this->avgRowsSent_ != nullptr && this->avgRt_ != nullptr && this->count_ != nullptr && this->item_ != nullptr
        && this->lockTime_ != nullptr && this->maxLockTime_ != nullptr && this->maxRowsExamined_ != nullptr && this->maxRowsSent_ != nullptr && this->maxRt_ != nullptr
        && this->rowsExamined_ != nullptr && this->rowsSent_ != nullptr && this->rt_ != nullptr && this->total_ != nullptr && this->ts_ != nullptr
        && this->tsEnd_ != nullptr; };
    // avgLockTime Field Functions 
    bool hasAvgLockTime() const { return this->avgLockTime_ != nullptr;};
    void deleteAvgLockTime() { this->avgLockTime_ = nullptr;};
    inline const vector<double> & avgLockTime() const { DARABONBA_PTR_GET_CONST(avgLockTime_, vector<double>) };
    inline vector<double> avgLockTime() { DARABONBA_PTR_GET(avgLockTime_, vector<double>) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setAvgLockTime(const vector<double> & avgLockTime) { DARABONBA_PTR_SET_VALUE(avgLockTime_, avgLockTime) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setAvgLockTime(vector<double> && avgLockTime) { DARABONBA_PTR_SET_RVALUE(avgLockTime_, avgLockTime) };


    // avgRowsExamined Field Functions 
    bool hasAvgRowsExamined() const { return this->avgRowsExamined_ != nullptr;};
    void deleteAvgRowsExamined() { this->avgRowsExamined_ = nullptr;};
    inline const vector<double> & avgRowsExamined() const { DARABONBA_PTR_GET_CONST(avgRowsExamined_, vector<double>) };
    inline vector<double> avgRowsExamined() { DARABONBA_PTR_GET(avgRowsExamined_, vector<double>) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setAvgRowsExamined(const vector<double> & avgRowsExamined) { DARABONBA_PTR_SET_VALUE(avgRowsExamined_, avgRowsExamined) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setAvgRowsExamined(vector<double> && avgRowsExamined) { DARABONBA_PTR_SET_RVALUE(avgRowsExamined_, avgRowsExamined) };


    // avgRowsSent Field Functions 
    bool hasAvgRowsSent() const { return this->avgRowsSent_ != nullptr;};
    void deleteAvgRowsSent() { this->avgRowsSent_ = nullptr;};
    inline const vector<double> & avgRowsSent() const { DARABONBA_PTR_GET_CONST(avgRowsSent_, vector<double>) };
    inline vector<double> avgRowsSent() { DARABONBA_PTR_GET(avgRowsSent_, vector<double>) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setAvgRowsSent(const vector<double> & avgRowsSent) { DARABONBA_PTR_SET_VALUE(avgRowsSent_, avgRowsSent) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setAvgRowsSent(vector<double> && avgRowsSent) { DARABONBA_PTR_SET_RVALUE(avgRowsSent_, avgRowsSent) };


    // avgRt Field Functions 
    bool hasAvgRt() const { return this->avgRt_ != nullptr;};
    void deleteAvgRt() { this->avgRt_ = nullptr;};
    inline const vector<double> & avgRt() const { DARABONBA_PTR_GET_CONST(avgRt_, vector<double>) };
    inline vector<double> avgRt() { DARABONBA_PTR_GET(avgRt_, vector<double>) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setAvgRt(const vector<double> & avgRt) { DARABONBA_PTR_SET_VALUE(avgRt_, avgRt) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setAvgRt(vector<double> && avgRt) { DARABONBA_PTR_SET_RVALUE(avgRt_, avgRt) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline const vector<int64_t> & count() const { DARABONBA_PTR_GET_CONST(count_, vector<int64_t>) };
    inline vector<int64_t> count() { DARABONBA_PTR_GET(count_, vector<int64_t>) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setCount(const vector<int64_t> & count) { DARABONBA_PTR_SET_VALUE(count_, count) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setCount(vector<int64_t> && count) { DARABONBA_PTR_SET_RVALUE(count_, count) };


    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const vector<Models::DescribeSlowLogStatisticResponseBodyDataDataLogsHistogramItem> & item() const { DARABONBA_PTR_GET_CONST(item_, vector<Models::DescribeSlowLogStatisticResponseBodyDataDataLogsHistogramItem>) };
    inline vector<Models::DescribeSlowLogStatisticResponseBodyDataDataLogsHistogramItem> item() { DARABONBA_PTR_GET(item_, vector<Models::DescribeSlowLogStatisticResponseBodyDataDataLogsHistogramItem>) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setItem(const vector<Models::DescribeSlowLogStatisticResponseBodyDataDataLogsHistogramItem> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setItem(vector<Models::DescribeSlowLogStatisticResponseBodyDataDataLogsHistogramItem> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


    // lockTime Field Functions 
    bool hasLockTime() const { return this->lockTime_ != nullptr;};
    void deleteLockTime() { this->lockTime_ = nullptr;};
    inline const vector<double> & lockTime() const { DARABONBA_PTR_GET_CONST(lockTime_, vector<double>) };
    inline vector<double> lockTime() { DARABONBA_PTR_GET(lockTime_, vector<double>) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setLockTime(const vector<double> & lockTime) { DARABONBA_PTR_SET_VALUE(lockTime_, lockTime) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setLockTime(vector<double> && lockTime) { DARABONBA_PTR_SET_RVALUE(lockTime_, lockTime) };


    // maxLockTime Field Functions 
    bool hasMaxLockTime() const { return this->maxLockTime_ != nullptr;};
    void deleteMaxLockTime() { this->maxLockTime_ = nullptr;};
    inline const vector<double> & maxLockTime() const { DARABONBA_PTR_GET_CONST(maxLockTime_, vector<double>) };
    inline vector<double> maxLockTime() { DARABONBA_PTR_GET(maxLockTime_, vector<double>) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setMaxLockTime(const vector<double> & maxLockTime) { DARABONBA_PTR_SET_VALUE(maxLockTime_, maxLockTime) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setMaxLockTime(vector<double> && maxLockTime) { DARABONBA_PTR_SET_RVALUE(maxLockTime_, maxLockTime) };


    // maxRowsExamined Field Functions 
    bool hasMaxRowsExamined() const { return this->maxRowsExamined_ != nullptr;};
    void deleteMaxRowsExamined() { this->maxRowsExamined_ = nullptr;};
    inline const vector<int64_t> & maxRowsExamined() const { DARABONBA_PTR_GET_CONST(maxRowsExamined_, vector<int64_t>) };
    inline vector<int64_t> maxRowsExamined() { DARABONBA_PTR_GET(maxRowsExamined_, vector<int64_t>) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setMaxRowsExamined(const vector<int64_t> & maxRowsExamined) { DARABONBA_PTR_SET_VALUE(maxRowsExamined_, maxRowsExamined) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setMaxRowsExamined(vector<int64_t> && maxRowsExamined) { DARABONBA_PTR_SET_RVALUE(maxRowsExamined_, maxRowsExamined) };


    // maxRowsSent Field Functions 
    bool hasMaxRowsSent() const { return this->maxRowsSent_ != nullptr;};
    void deleteMaxRowsSent() { this->maxRowsSent_ = nullptr;};
    inline const vector<int64_t> & maxRowsSent() const { DARABONBA_PTR_GET_CONST(maxRowsSent_, vector<int64_t>) };
    inline vector<int64_t> maxRowsSent() { DARABONBA_PTR_GET(maxRowsSent_, vector<int64_t>) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setMaxRowsSent(const vector<int64_t> & maxRowsSent) { DARABONBA_PTR_SET_VALUE(maxRowsSent_, maxRowsSent) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setMaxRowsSent(vector<int64_t> && maxRowsSent) { DARABONBA_PTR_SET_RVALUE(maxRowsSent_, maxRowsSent) };


    // maxRt Field Functions 
    bool hasMaxRt() const { return this->maxRt_ != nullptr;};
    void deleteMaxRt() { this->maxRt_ = nullptr;};
    inline const vector<double> & maxRt() const { DARABONBA_PTR_GET_CONST(maxRt_, vector<double>) };
    inline vector<double> maxRt() { DARABONBA_PTR_GET(maxRt_, vector<double>) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setMaxRt(const vector<double> & maxRt) { DARABONBA_PTR_SET_VALUE(maxRt_, maxRt) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setMaxRt(vector<double> && maxRt) { DARABONBA_PTR_SET_RVALUE(maxRt_, maxRt) };


    // rowsExamined Field Functions 
    bool hasRowsExamined() const { return this->rowsExamined_ != nullptr;};
    void deleteRowsExamined() { this->rowsExamined_ = nullptr;};
    inline const vector<int64_t> & rowsExamined() const { DARABONBA_PTR_GET_CONST(rowsExamined_, vector<int64_t>) };
    inline vector<int64_t> rowsExamined() { DARABONBA_PTR_GET(rowsExamined_, vector<int64_t>) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setRowsExamined(const vector<int64_t> & rowsExamined) { DARABONBA_PTR_SET_VALUE(rowsExamined_, rowsExamined) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setRowsExamined(vector<int64_t> && rowsExamined) { DARABONBA_PTR_SET_RVALUE(rowsExamined_, rowsExamined) };


    // rowsSent Field Functions 
    bool hasRowsSent() const { return this->rowsSent_ != nullptr;};
    void deleteRowsSent() { this->rowsSent_ = nullptr;};
    inline const vector<int64_t> & rowsSent() const { DARABONBA_PTR_GET_CONST(rowsSent_, vector<int64_t>) };
    inline vector<int64_t> rowsSent() { DARABONBA_PTR_GET(rowsSent_, vector<int64_t>) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setRowsSent(const vector<int64_t> & rowsSent) { DARABONBA_PTR_SET_VALUE(rowsSent_, rowsSent) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setRowsSent(vector<int64_t> && rowsSent) { DARABONBA_PTR_SET_RVALUE(rowsSent_, rowsSent) };


    // rt Field Functions 
    bool hasRt() const { return this->rt_ != nullptr;};
    void deleteRt() { this->rt_ = nullptr;};
    inline const vector<double> & rt() const { DARABONBA_PTR_GET_CONST(rt_, vector<double>) };
    inline vector<double> rt() { DARABONBA_PTR_GET(rt_, vector<double>) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setRt(const vector<double> & rt) { DARABONBA_PTR_SET_VALUE(rt_, rt) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setRt(vector<double> && rt) { DARABONBA_PTR_SET_RVALUE(rt_, rt) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // ts Field Functions 
    bool hasTs() const { return this->ts_ != nullptr;};
    void deleteTs() { this->ts_ = nullptr;};
    inline const vector<int64_t> & ts() const { DARABONBA_PTR_GET_CONST(ts_, vector<int64_t>) };
    inline vector<int64_t> ts() { DARABONBA_PTR_GET(ts_, vector<int64_t>) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setTs(const vector<int64_t> & ts) { DARABONBA_PTR_SET_VALUE(ts_, ts) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setTs(vector<int64_t> && ts) { DARABONBA_PTR_SET_RVALUE(ts_, ts) };


    // tsEnd Field Functions 
    bool hasTsEnd() const { return this->tsEnd_ != nullptr;};
    void deleteTsEnd() { this->tsEnd_ = nullptr;};
    inline const vector<int64_t> & tsEnd() const { DARABONBA_PTR_GET_CONST(tsEnd_, vector<int64_t>) };
    inline vector<int64_t> tsEnd() { DARABONBA_PTR_GET(tsEnd_, vector<int64_t>) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setTsEnd(const vector<int64_t> & tsEnd) { DARABONBA_PTR_SET_VALUE(tsEnd_, tsEnd) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram& setTsEnd(vector<int64_t> && tsEnd) { DARABONBA_PTR_SET_RVALUE(tsEnd_, tsEnd) };


  protected:
    std::shared_ptr<vector<double>> avgLockTime_ = nullptr;
    std::shared_ptr<vector<double>> avgRowsExamined_ = nullptr;
    std::shared_ptr<vector<double>> avgRowsSent_ = nullptr;
    std::shared_ptr<vector<double>> avgRt_ = nullptr;
    std::shared_ptr<vector<int64_t>> count_ = nullptr;
    std::shared_ptr<vector<Models::DescribeSlowLogStatisticResponseBodyDataDataLogsHistogramItem>> item_ = nullptr;
    std::shared_ptr<vector<double>> lockTime_ = nullptr;
    std::shared_ptr<vector<double>> maxLockTime_ = nullptr;
    std::shared_ptr<vector<int64_t>> maxRowsExamined_ = nullptr;
    std::shared_ptr<vector<int64_t>> maxRowsSent_ = nullptr;
    std::shared_ptr<vector<double>> maxRt_ = nullptr;
    std::shared_ptr<vector<int64_t>> rowsExamined_ = nullptr;
    std::shared_ptr<vector<int64_t>> rowsSent_ = nullptr;
    std::shared_ptr<vector<double>> rt_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
    std::shared_ptr<vector<int64_t>> ts_ = nullptr;
    std::shared_ptr<vector<int64_t>> tsEnd_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
