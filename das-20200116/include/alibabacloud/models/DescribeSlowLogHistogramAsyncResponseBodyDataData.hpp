// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGHISTOGRAMASYNCRESPONSEBODYDATADATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGHISTOGRAMASYNCRESPONSEBODYDATADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSlowLogHistogramAsyncResponseBodyDataDataItem.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSlowLogHistogramAsyncResponseBodyDataData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogHistogramAsyncResponseBodyDataData& obj) { 
      DARABONBA_PTR_TO_JSON(AvgCPUTime, avgCPUTime_);
      DARABONBA_PTR_TO_JSON(AvgDocExamined, avgDocExamined_);
      DARABONBA_PTR_TO_JSON(AvgFrows, avgFrows_);
      DARABONBA_PTR_TO_JSON(AvgIOWrites, avgIOWrites_);
      DARABONBA_PTR_TO_JSON(AvgKeysExamined, avgKeysExamined_);
      DARABONBA_PTR_TO_JSON(AvgLastRowsCountAffected, avgLastRowsCountAffected_);
      DARABONBA_PTR_TO_JSON(AvgLockTime, avgLockTime_);
      DARABONBA_PTR_TO_JSON(AvgLogicalIOReads, avgLogicalIOReads_);
      DARABONBA_PTR_TO_JSON(AvgPhysicalIOReads, avgPhysicalIOReads_);
      DARABONBA_PTR_TO_JSON(AvgReturnNum, avgReturnNum_);
      DARABONBA_PTR_TO_JSON(AvgRows, avgRows_);
      DARABONBA_PTR_TO_JSON(AvgRowsCountAffected, avgRowsCountAffected_);
      DARABONBA_PTR_TO_JSON(AvgRowsExamined, avgRowsExamined_);
      DARABONBA_PTR_TO_JSON(AvgRowsSent, avgRowsSent_);
      DARABONBA_PTR_TO_JSON(AvgRt, avgRt_);
      DARABONBA_PTR_TO_JSON(AvgScnt, avgScnt_);
      DARABONBA_PTR_TO_JSON(CPUTime, CPUTime_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(DocExamined, docExamined_);
      DARABONBA_PTR_TO_JSON(Frows, frows_);
      DARABONBA_PTR_TO_JSON(IOWrites, IOWrites_);
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(KeysExamined, keysExamined_);
      DARABONBA_PTR_TO_JSON(LastRowsCountAffected, lastRowsCountAffected_);
      DARABONBA_PTR_TO_JSON(LockTime, lockTime_);
      DARABONBA_PTR_TO_JSON(LogicalIOReads, logicalIOReads_);
      DARABONBA_PTR_TO_JSON(MaxCPUTime, maxCPUTime_);
      DARABONBA_PTR_TO_JSON(MaxDocExamined, maxDocExamined_);
      DARABONBA_PTR_TO_JSON(MaxFrows, maxFrows_);
      DARABONBA_PTR_TO_JSON(MaxIOWrites, maxIOWrites_);
      DARABONBA_PTR_TO_JSON(MaxKeysExamined, maxKeysExamined_);
      DARABONBA_PTR_TO_JSON(MaxLastRowsCountAffected, maxLastRowsCountAffected_);
      DARABONBA_PTR_TO_JSON(MaxLockTime, maxLockTime_);
      DARABONBA_PTR_TO_JSON(MaxLogicalIOReads, maxLogicalIOReads_);
      DARABONBA_PTR_TO_JSON(MaxPhysicalIOReads, maxPhysicalIOReads_);
      DARABONBA_PTR_TO_JSON(MaxReturnNum, maxReturnNum_);
      DARABONBA_PTR_TO_JSON(MaxRows, maxRows_);
      DARABONBA_PTR_TO_JSON(MaxRowsCountAffected, maxRowsCountAffected_);
      DARABONBA_PTR_TO_JSON(MaxRowsExamined, maxRowsExamined_);
      DARABONBA_PTR_TO_JSON(MaxRowsSent, maxRowsSent_);
      DARABONBA_PTR_TO_JSON(MaxRt, maxRt_);
      DARABONBA_PTR_TO_JSON(MaxScnt, maxScnt_);
      DARABONBA_PTR_TO_JSON(PhysicalIOReads, physicalIOReads_);
      DARABONBA_PTR_TO_JSON(ReturnNum, returnNum_);
      DARABONBA_PTR_TO_JSON(Rows, rows_);
      DARABONBA_PTR_TO_JSON(RowsCountAffected, rowsCountAffected_);
      DARABONBA_PTR_TO_JSON(RowsExamined, rowsExamined_);
      DARABONBA_PTR_TO_JSON(RowsSent, rowsSent_);
      DARABONBA_PTR_TO_JSON(Rt, rt_);
      DARABONBA_PTR_TO_JSON(Scnt, scnt_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Ts, ts_);
      DARABONBA_PTR_TO_JSON(TsEnd, tsEnd_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogHistogramAsyncResponseBodyDataData& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgCPUTime, avgCPUTime_);
      DARABONBA_PTR_FROM_JSON(AvgDocExamined, avgDocExamined_);
      DARABONBA_PTR_FROM_JSON(AvgFrows, avgFrows_);
      DARABONBA_PTR_FROM_JSON(AvgIOWrites, avgIOWrites_);
      DARABONBA_PTR_FROM_JSON(AvgKeysExamined, avgKeysExamined_);
      DARABONBA_PTR_FROM_JSON(AvgLastRowsCountAffected, avgLastRowsCountAffected_);
      DARABONBA_PTR_FROM_JSON(AvgLockTime, avgLockTime_);
      DARABONBA_PTR_FROM_JSON(AvgLogicalIOReads, avgLogicalIOReads_);
      DARABONBA_PTR_FROM_JSON(AvgPhysicalIOReads, avgPhysicalIOReads_);
      DARABONBA_PTR_FROM_JSON(AvgReturnNum, avgReturnNum_);
      DARABONBA_PTR_FROM_JSON(AvgRows, avgRows_);
      DARABONBA_PTR_FROM_JSON(AvgRowsCountAffected, avgRowsCountAffected_);
      DARABONBA_PTR_FROM_JSON(AvgRowsExamined, avgRowsExamined_);
      DARABONBA_PTR_FROM_JSON(AvgRowsSent, avgRowsSent_);
      DARABONBA_PTR_FROM_JSON(AvgRt, avgRt_);
      DARABONBA_PTR_FROM_JSON(AvgScnt, avgScnt_);
      DARABONBA_PTR_FROM_JSON(CPUTime, CPUTime_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(DocExamined, docExamined_);
      DARABONBA_PTR_FROM_JSON(Frows, frows_);
      DARABONBA_PTR_FROM_JSON(IOWrites, IOWrites_);
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(KeysExamined, keysExamined_);
      DARABONBA_PTR_FROM_JSON(LastRowsCountAffected, lastRowsCountAffected_);
      DARABONBA_PTR_FROM_JSON(LockTime, lockTime_);
      DARABONBA_PTR_FROM_JSON(LogicalIOReads, logicalIOReads_);
      DARABONBA_PTR_FROM_JSON(MaxCPUTime, maxCPUTime_);
      DARABONBA_PTR_FROM_JSON(MaxDocExamined, maxDocExamined_);
      DARABONBA_PTR_FROM_JSON(MaxFrows, maxFrows_);
      DARABONBA_PTR_FROM_JSON(MaxIOWrites, maxIOWrites_);
      DARABONBA_PTR_FROM_JSON(MaxKeysExamined, maxKeysExamined_);
      DARABONBA_PTR_FROM_JSON(MaxLastRowsCountAffected, maxLastRowsCountAffected_);
      DARABONBA_PTR_FROM_JSON(MaxLockTime, maxLockTime_);
      DARABONBA_PTR_FROM_JSON(MaxLogicalIOReads, maxLogicalIOReads_);
      DARABONBA_PTR_FROM_JSON(MaxPhysicalIOReads, maxPhysicalIOReads_);
      DARABONBA_PTR_FROM_JSON(MaxReturnNum, maxReturnNum_);
      DARABONBA_PTR_FROM_JSON(MaxRows, maxRows_);
      DARABONBA_PTR_FROM_JSON(MaxRowsCountAffected, maxRowsCountAffected_);
      DARABONBA_PTR_FROM_JSON(MaxRowsExamined, maxRowsExamined_);
      DARABONBA_PTR_FROM_JSON(MaxRowsSent, maxRowsSent_);
      DARABONBA_PTR_FROM_JSON(MaxRt, maxRt_);
      DARABONBA_PTR_FROM_JSON(MaxScnt, maxScnt_);
      DARABONBA_PTR_FROM_JSON(PhysicalIOReads, physicalIOReads_);
      DARABONBA_PTR_FROM_JSON(ReturnNum, returnNum_);
      DARABONBA_PTR_FROM_JSON(Rows, rows_);
      DARABONBA_PTR_FROM_JSON(RowsCountAffected, rowsCountAffected_);
      DARABONBA_PTR_FROM_JSON(RowsExamined, rowsExamined_);
      DARABONBA_PTR_FROM_JSON(RowsSent, rowsSent_);
      DARABONBA_PTR_FROM_JSON(Rt, rt_);
      DARABONBA_PTR_FROM_JSON(Scnt, scnt_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Ts, ts_);
      DARABONBA_PTR_FROM_JSON(TsEnd, tsEnd_);
    };
    DescribeSlowLogHistogramAsyncResponseBodyDataData() = default ;
    DescribeSlowLogHistogramAsyncResponseBodyDataData(const DescribeSlowLogHistogramAsyncResponseBodyDataData &) = default ;
    DescribeSlowLogHistogramAsyncResponseBodyDataData(DescribeSlowLogHistogramAsyncResponseBodyDataData &&) = default ;
    DescribeSlowLogHistogramAsyncResponseBodyDataData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogHistogramAsyncResponseBodyDataData() = default ;
    DescribeSlowLogHistogramAsyncResponseBodyDataData& operator=(const DescribeSlowLogHistogramAsyncResponseBodyDataData &) = default ;
    DescribeSlowLogHistogramAsyncResponseBodyDataData& operator=(DescribeSlowLogHistogramAsyncResponseBodyDataData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avgCPUTime_ == nullptr
        && return this->avgDocExamined_ == nullptr && return this->avgFrows_ == nullptr && return this->avgIOWrites_ == nullptr && return this->avgKeysExamined_ == nullptr && return this->avgLastRowsCountAffected_ == nullptr
        && return this->avgLockTime_ == nullptr && return this->avgLogicalIOReads_ == nullptr && return this->avgPhysicalIOReads_ == nullptr && return this->avgReturnNum_ == nullptr && return this->avgRows_ == nullptr
        && return this->avgRowsCountAffected_ == nullptr && return this->avgRowsExamined_ == nullptr && return this->avgRowsSent_ == nullptr && return this->avgRt_ == nullptr && return this->avgScnt_ == nullptr
        && return this->CPUTime_ == nullptr && return this->count_ == nullptr && return this->docExamined_ == nullptr && return this->frows_ == nullptr && return this->IOWrites_ == nullptr
        && return this->item_ == nullptr && return this->keysExamined_ == nullptr && return this->lastRowsCountAffected_ == nullptr && return this->lockTime_ == nullptr && return this->logicalIOReads_ == nullptr
        && return this->maxCPUTime_ == nullptr && return this->maxDocExamined_ == nullptr && return this->maxFrows_ == nullptr && return this->maxIOWrites_ == nullptr && return this->maxKeysExamined_ == nullptr
        && return this->maxLastRowsCountAffected_ == nullptr && return this->maxLockTime_ == nullptr && return this->maxLogicalIOReads_ == nullptr && return this->maxPhysicalIOReads_ == nullptr && return this->maxReturnNum_ == nullptr
        && return this->maxRows_ == nullptr && return this->maxRowsCountAffected_ == nullptr && return this->maxRowsExamined_ == nullptr && return this->maxRowsSent_ == nullptr && return this->maxRt_ == nullptr
        && return this->maxScnt_ == nullptr && return this->physicalIOReads_ == nullptr && return this->returnNum_ == nullptr && return this->rows_ == nullptr && return this->rowsCountAffected_ == nullptr
        && return this->rowsExamined_ == nullptr && return this->rowsSent_ == nullptr && return this->rt_ == nullptr && return this->scnt_ == nullptr && return this->total_ == nullptr
        && return this->totalCount_ == nullptr && return this->ts_ == nullptr && return this->tsEnd_ == nullptr; };
    // avgCPUTime Field Functions 
    bool hasAvgCPUTime() const { return this->avgCPUTime_ != nullptr;};
    void deleteAvgCPUTime() { this->avgCPUTime_ = nullptr;};
    inline const vector<double> & avgCPUTime() const { DARABONBA_PTR_GET_CONST(avgCPUTime_, vector<double>) };
    inline vector<double> avgCPUTime() { DARABONBA_PTR_GET(avgCPUTime_, vector<double>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgCPUTime(const vector<double> & avgCPUTime) { DARABONBA_PTR_SET_VALUE(avgCPUTime_, avgCPUTime) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgCPUTime(vector<double> && avgCPUTime) { DARABONBA_PTR_SET_RVALUE(avgCPUTime_, avgCPUTime) };


    // avgDocExamined Field Functions 
    bool hasAvgDocExamined() const { return this->avgDocExamined_ != nullptr;};
    void deleteAvgDocExamined() { this->avgDocExamined_ = nullptr;};
    inline const vector<double> & avgDocExamined() const { DARABONBA_PTR_GET_CONST(avgDocExamined_, vector<double>) };
    inline vector<double> avgDocExamined() { DARABONBA_PTR_GET(avgDocExamined_, vector<double>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgDocExamined(const vector<double> & avgDocExamined) { DARABONBA_PTR_SET_VALUE(avgDocExamined_, avgDocExamined) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgDocExamined(vector<double> && avgDocExamined) { DARABONBA_PTR_SET_RVALUE(avgDocExamined_, avgDocExamined) };


    // avgFrows Field Functions 
    bool hasAvgFrows() const { return this->avgFrows_ != nullptr;};
    void deleteAvgFrows() { this->avgFrows_ = nullptr;};
    inline const vector<double> & avgFrows() const { DARABONBA_PTR_GET_CONST(avgFrows_, vector<double>) };
    inline vector<double> avgFrows() { DARABONBA_PTR_GET(avgFrows_, vector<double>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgFrows(const vector<double> & avgFrows) { DARABONBA_PTR_SET_VALUE(avgFrows_, avgFrows) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgFrows(vector<double> && avgFrows) { DARABONBA_PTR_SET_RVALUE(avgFrows_, avgFrows) };


    // avgIOWrites Field Functions 
    bool hasAvgIOWrites() const { return this->avgIOWrites_ != nullptr;};
    void deleteAvgIOWrites() { this->avgIOWrites_ = nullptr;};
    inline const vector<double> & avgIOWrites() const { DARABONBA_PTR_GET_CONST(avgIOWrites_, vector<double>) };
    inline vector<double> avgIOWrites() { DARABONBA_PTR_GET(avgIOWrites_, vector<double>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgIOWrites(const vector<double> & avgIOWrites) { DARABONBA_PTR_SET_VALUE(avgIOWrites_, avgIOWrites) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgIOWrites(vector<double> && avgIOWrites) { DARABONBA_PTR_SET_RVALUE(avgIOWrites_, avgIOWrites) };


    // avgKeysExamined Field Functions 
    bool hasAvgKeysExamined() const { return this->avgKeysExamined_ != nullptr;};
    void deleteAvgKeysExamined() { this->avgKeysExamined_ = nullptr;};
    inline const vector<double> & avgKeysExamined() const { DARABONBA_PTR_GET_CONST(avgKeysExamined_, vector<double>) };
    inline vector<double> avgKeysExamined() { DARABONBA_PTR_GET(avgKeysExamined_, vector<double>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgKeysExamined(const vector<double> & avgKeysExamined) { DARABONBA_PTR_SET_VALUE(avgKeysExamined_, avgKeysExamined) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgKeysExamined(vector<double> && avgKeysExamined) { DARABONBA_PTR_SET_RVALUE(avgKeysExamined_, avgKeysExamined) };


    // avgLastRowsCountAffected Field Functions 
    bool hasAvgLastRowsCountAffected() const { return this->avgLastRowsCountAffected_ != nullptr;};
    void deleteAvgLastRowsCountAffected() { this->avgLastRowsCountAffected_ = nullptr;};
    inline const vector<double> & avgLastRowsCountAffected() const { DARABONBA_PTR_GET_CONST(avgLastRowsCountAffected_, vector<double>) };
    inline vector<double> avgLastRowsCountAffected() { DARABONBA_PTR_GET(avgLastRowsCountAffected_, vector<double>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgLastRowsCountAffected(const vector<double> & avgLastRowsCountAffected) { DARABONBA_PTR_SET_VALUE(avgLastRowsCountAffected_, avgLastRowsCountAffected) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgLastRowsCountAffected(vector<double> && avgLastRowsCountAffected) { DARABONBA_PTR_SET_RVALUE(avgLastRowsCountAffected_, avgLastRowsCountAffected) };


    // avgLockTime Field Functions 
    bool hasAvgLockTime() const { return this->avgLockTime_ != nullptr;};
    void deleteAvgLockTime() { this->avgLockTime_ = nullptr;};
    inline const vector<double> & avgLockTime() const { DARABONBA_PTR_GET_CONST(avgLockTime_, vector<double>) };
    inline vector<double> avgLockTime() { DARABONBA_PTR_GET(avgLockTime_, vector<double>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgLockTime(const vector<double> & avgLockTime) { DARABONBA_PTR_SET_VALUE(avgLockTime_, avgLockTime) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgLockTime(vector<double> && avgLockTime) { DARABONBA_PTR_SET_RVALUE(avgLockTime_, avgLockTime) };


    // avgLogicalIOReads Field Functions 
    bool hasAvgLogicalIOReads() const { return this->avgLogicalIOReads_ != nullptr;};
    void deleteAvgLogicalIOReads() { this->avgLogicalIOReads_ = nullptr;};
    inline const vector<double> & avgLogicalIOReads() const { DARABONBA_PTR_GET_CONST(avgLogicalIOReads_, vector<double>) };
    inline vector<double> avgLogicalIOReads() { DARABONBA_PTR_GET(avgLogicalIOReads_, vector<double>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgLogicalIOReads(const vector<double> & avgLogicalIOReads) { DARABONBA_PTR_SET_VALUE(avgLogicalIOReads_, avgLogicalIOReads) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgLogicalIOReads(vector<double> && avgLogicalIOReads) { DARABONBA_PTR_SET_RVALUE(avgLogicalIOReads_, avgLogicalIOReads) };


    // avgPhysicalIOReads Field Functions 
    bool hasAvgPhysicalIOReads() const { return this->avgPhysicalIOReads_ != nullptr;};
    void deleteAvgPhysicalIOReads() { this->avgPhysicalIOReads_ = nullptr;};
    inline const vector<double> & avgPhysicalIOReads() const { DARABONBA_PTR_GET_CONST(avgPhysicalIOReads_, vector<double>) };
    inline vector<double> avgPhysicalIOReads() { DARABONBA_PTR_GET(avgPhysicalIOReads_, vector<double>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgPhysicalIOReads(const vector<double> & avgPhysicalIOReads) { DARABONBA_PTR_SET_VALUE(avgPhysicalIOReads_, avgPhysicalIOReads) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgPhysicalIOReads(vector<double> && avgPhysicalIOReads) { DARABONBA_PTR_SET_RVALUE(avgPhysicalIOReads_, avgPhysicalIOReads) };


    // avgReturnNum Field Functions 
    bool hasAvgReturnNum() const { return this->avgReturnNum_ != nullptr;};
    void deleteAvgReturnNum() { this->avgReturnNum_ = nullptr;};
    inline const vector<double> & avgReturnNum() const { DARABONBA_PTR_GET_CONST(avgReturnNum_, vector<double>) };
    inline vector<double> avgReturnNum() { DARABONBA_PTR_GET(avgReturnNum_, vector<double>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgReturnNum(const vector<double> & avgReturnNum) { DARABONBA_PTR_SET_VALUE(avgReturnNum_, avgReturnNum) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgReturnNum(vector<double> && avgReturnNum) { DARABONBA_PTR_SET_RVALUE(avgReturnNum_, avgReturnNum) };


    // avgRows Field Functions 
    bool hasAvgRows() const { return this->avgRows_ != nullptr;};
    void deleteAvgRows() { this->avgRows_ = nullptr;};
    inline const vector<double> & avgRows() const { DARABONBA_PTR_GET_CONST(avgRows_, vector<double>) };
    inline vector<double> avgRows() { DARABONBA_PTR_GET(avgRows_, vector<double>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgRows(const vector<double> & avgRows) { DARABONBA_PTR_SET_VALUE(avgRows_, avgRows) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgRows(vector<double> && avgRows) { DARABONBA_PTR_SET_RVALUE(avgRows_, avgRows) };


    // avgRowsCountAffected Field Functions 
    bool hasAvgRowsCountAffected() const { return this->avgRowsCountAffected_ != nullptr;};
    void deleteAvgRowsCountAffected() { this->avgRowsCountAffected_ = nullptr;};
    inline const vector<double> & avgRowsCountAffected() const { DARABONBA_PTR_GET_CONST(avgRowsCountAffected_, vector<double>) };
    inline vector<double> avgRowsCountAffected() { DARABONBA_PTR_GET(avgRowsCountAffected_, vector<double>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgRowsCountAffected(const vector<double> & avgRowsCountAffected) { DARABONBA_PTR_SET_VALUE(avgRowsCountAffected_, avgRowsCountAffected) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgRowsCountAffected(vector<double> && avgRowsCountAffected) { DARABONBA_PTR_SET_RVALUE(avgRowsCountAffected_, avgRowsCountAffected) };


    // avgRowsExamined Field Functions 
    bool hasAvgRowsExamined() const { return this->avgRowsExamined_ != nullptr;};
    void deleteAvgRowsExamined() { this->avgRowsExamined_ = nullptr;};
    inline const vector<double> & avgRowsExamined() const { DARABONBA_PTR_GET_CONST(avgRowsExamined_, vector<double>) };
    inline vector<double> avgRowsExamined() { DARABONBA_PTR_GET(avgRowsExamined_, vector<double>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgRowsExamined(const vector<double> & avgRowsExamined) { DARABONBA_PTR_SET_VALUE(avgRowsExamined_, avgRowsExamined) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgRowsExamined(vector<double> && avgRowsExamined) { DARABONBA_PTR_SET_RVALUE(avgRowsExamined_, avgRowsExamined) };


    // avgRowsSent Field Functions 
    bool hasAvgRowsSent() const { return this->avgRowsSent_ != nullptr;};
    void deleteAvgRowsSent() { this->avgRowsSent_ = nullptr;};
    inline const vector<double> & avgRowsSent() const { DARABONBA_PTR_GET_CONST(avgRowsSent_, vector<double>) };
    inline vector<double> avgRowsSent() { DARABONBA_PTR_GET(avgRowsSent_, vector<double>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgRowsSent(const vector<double> & avgRowsSent) { DARABONBA_PTR_SET_VALUE(avgRowsSent_, avgRowsSent) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgRowsSent(vector<double> && avgRowsSent) { DARABONBA_PTR_SET_RVALUE(avgRowsSent_, avgRowsSent) };


    // avgRt Field Functions 
    bool hasAvgRt() const { return this->avgRt_ != nullptr;};
    void deleteAvgRt() { this->avgRt_ = nullptr;};
    inline const vector<double> & avgRt() const { DARABONBA_PTR_GET_CONST(avgRt_, vector<double>) };
    inline vector<double> avgRt() { DARABONBA_PTR_GET(avgRt_, vector<double>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgRt(const vector<double> & avgRt) { DARABONBA_PTR_SET_VALUE(avgRt_, avgRt) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgRt(vector<double> && avgRt) { DARABONBA_PTR_SET_RVALUE(avgRt_, avgRt) };


    // avgScnt Field Functions 
    bool hasAvgScnt() const { return this->avgScnt_ != nullptr;};
    void deleteAvgScnt() { this->avgScnt_ = nullptr;};
    inline const vector<double> & avgScnt() const { DARABONBA_PTR_GET_CONST(avgScnt_, vector<double>) };
    inline vector<double> avgScnt() { DARABONBA_PTR_GET(avgScnt_, vector<double>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgScnt(const vector<double> & avgScnt) { DARABONBA_PTR_SET_VALUE(avgScnt_, avgScnt) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setAvgScnt(vector<double> && avgScnt) { DARABONBA_PTR_SET_RVALUE(avgScnt_, avgScnt) };


    // CPUTime Field Functions 
    bool hasCPUTime() const { return this->CPUTime_ != nullptr;};
    void deleteCPUTime() { this->CPUTime_ = nullptr;};
    inline const vector<double> & CPUTime() const { DARABONBA_PTR_GET_CONST(CPUTime_, vector<double>) };
    inline vector<double> CPUTime() { DARABONBA_PTR_GET(CPUTime_, vector<double>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setCPUTime(const vector<double> & CPUTime) { DARABONBA_PTR_SET_VALUE(CPUTime_, CPUTime) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setCPUTime(vector<double> && CPUTime) { DARABONBA_PTR_SET_RVALUE(CPUTime_, CPUTime) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline const vector<int64_t> & count() const { DARABONBA_PTR_GET_CONST(count_, vector<int64_t>) };
    inline vector<int64_t> count() { DARABONBA_PTR_GET(count_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setCount(const vector<int64_t> & count) { DARABONBA_PTR_SET_VALUE(count_, count) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setCount(vector<int64_t> && count) { DARABONBA_PTR_SET_RVALUE(count_, count) };


    // docExamined Field Functions 
    bool hasDocExamined() const { return this->docExamined_ != nullptr;};
    void deleteDocExamined() { this->docExamined_ = nullptr;};
    inline const vector<int64_t> & docExamined() const { DARABONBA_PTR_GET_CONST(docExamined_, vector<int64_t>) };
    inline vector<int64_t> docExamined() { DARABONBA_PTR_GET(docExamined_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setDocExamined(const vector<int64_t> & docExamined) { DARABONBA_PTR_SET_VALUE(docExamined_, docExamined) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setDocExamined(vector<int64_t> && docExamined) { DARABONBA_PTR_SET_RVALUE(docExamined_, docExamined) };


    // frows Field Functions 
    bool hasFrows() const { return this->frows_ != nullptr;};
    void deleteFrows() { this->frows_ = nullptr;};
    inline const vector<int64_t> & frows() const { DARABONBA_PTR_GET_CONST(frows_, vector<int64_t>) };
    inline vector<int64_t> frows() { DARABONBA_PTR_GET(frows_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setFrows(const vector<int64_t> & frows) { DARABONBA_PTR_SET_VALUE(frows_, frows) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setFrows(vector<int64_t> && frows) { DARABONBA_PTR_SET_RVALUE(frows_, frows) };


    // IOWrites Field Functions 
    bool hasIOWrites() const { return this->IOWrites_ != nullptr;};
    void deleteIOWrites() { this->IOWrites_ = nullptr;};
    inline const vector<int64_t> & IOWrites() const { DARABONBA_PTR_GET_CONST(IOWrites_, vector<int64_t>) };
    inline vector<int64_t> IOWrites() { DARABONBA_PTR_GET(IOWrites_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setIOWrites(const vector<int64_t> & IOWrites) { DARABONBA_PTR_SET_VALUE(IOWrites_, IOWrites) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setIOWrites(vector<int64_t> && IOWrites) { DARABONBA_PTR_SET_RVALUE(IOWrites_, IOWrites) };


    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline const vector<Models::DescribeSlowLogHistogramAsyncResponseBodyDataDataItem> & item() const { DARABONBA_PTR_GET_CONST(item_, vector<Models::DescribeSlowLogHistogramAsyncResponseBodyDataDataItem>) };
    inline vector<Models::DescribeSlowLogHistogramAsyncResponseBodyDataDataItem> item() { DARABONBA_PTR_GET(item_, vector<Models::DescribeSlowLogHistogramAsyncResponseBodyDataDataItem>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setItem(const vector<Models::DescribeSlowLogHistogramAsyncResponseBodyDataDataItem> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setItem(vector<Models::DescribeSlowLogHistogramAsyncResponseBodyDataDataItem> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


    // keysExamined Field Functions 
    bool hasKeysExamined() const { return this->keysExamined_ != nullptr;};
    void deleteKeysExamined() { this->keysExamined_ = nullptr;};
    inline const vector<int64_t> & keysExamined() const { DARABONBA_PTR_GET_CONST(keysExamined_, vector<int64_t>) };
    inline vector<int64_t> keysExamined() { DARABONBA_PTR_GET(keysExamined_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setKeysExamined(const vector<int64_t> & keysExamined) { DARABONBA_PTR_SET_VALUE(keysExamined_, keysExamined) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setKeysExamined(vector<int64_t> && keysExamined) { DARABONBA_PTR_SET_RVALUE(keysExamined_, keysExamined) };


    // lastRowsCountAffected Field Functions 
    bool hasLastRowsCountAffected() const { return this->lastRowsCountAffected_ != nullptr;};
    void deleteLastRowsCountAffected() { this->lastRowsCountAffected_ = nullptr;};
    inline const vector<int64_t> & lastRowsCountAffected() const { DARABONBA_PTR_GET_CONST(lastRowsCountAffected_, vector<int64_t>) };
    inline vector<int64_t> lastRowsCountAffected() { DARABONBA_PTR_GET(lastRowsCountAffected_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setLastRowsCountAffected(const vector<int64_t> & lastRowsCountAffected) { DARABONBA_PTR_SET_VALUE(lastRowsCountAffected_, lastRowsCountAffected) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setLastRowsCountAffected(vector<int64_t> && lastRowsCountAffected) { DARABONBA_PTR_SET_RVALUE(lastRowsCountAffected_, lastRowsCountAffected) };


    // lockTime Field Functions 
    bool hasLockTime() const { return this->lockTime_ != nullptr;};
    void deleteLockTime() { this->lockTime_ = nullptr;};
    inline const vector<double> & lockTime() const { DARABONBA_PTR_GET_CONST(lockTime_, vector<double>) };
    inline vector<double> lockTime() { DARABONBA_PTR_GET(lockTime_, vector<double>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setLockTime(const vector<double> & lockTime) { DARABONBA_PTR_SET_VALUE(lockTime_, lockTime) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setLockTime(vector<double> && lockTime) { DARABONBA_PTR_SET_RVALUE(lockTime_, lockTime) };


    // logicalIOReads Field Functions 
    bool hasLogicalIOReads() const { return this->logicalIOReads_ != nullptr;};
    void deleteLogicalIOReads() { this->logicalIOReads_ = nullptr;};
    inline const vector<int64_t> & logicalIOReads() const { DARABONBA_PTR_GET_CONST(logicalIOReads_, vector<int64_t>) };
    inline vector<int64_t> logicalIOReads() { DARABONBA_PTR_GET(logicalIOReads_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setLogicalIOReads(const vector<int64_t> & logicalIOReads) { DARABONBA_PTR_SET_VALUE(logicalIOReads_, logicalIOReads) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setLogicalIOReads(vector<int64_t> && logicalIOReads) { DARABONBA_PTR_SET_RVALUE(logicalIOReads_, logicalIOReads) };


    // maxCPUTime Field Functions 
    bool hasMaxCPUTime() const { return this->maxCPUTime_ != nullptr;};
    void deleteMaxCPUTime() { this->maxCPUTime_ = nullptr;};
    inline const vector<double> & maxCPUTime() const { DARABONBA_PTR_GET_CONST(maxCPUTime_, vector<double>) };
    inline vector<double> maxCPUTime() { DARABONBA_PTR_GET(maxCPUTime_, vector<double>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxCPUTime(const vector<double> & maxCPUTime) { DARABONBA_PTR_SET_VALUE(maxCPUTime_, maxCPUTime) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxCPUTime(vector<double> && maxCPUTime) { DARABONBA_PTR_SET_RVALUE(maxCPUTime_, maxCPUTime) };


    // maxDocExamined Field Functions 
    bool hasMaxDocExamined() const { return this->maxDocExamined_ != nullptr;};
    void deleteMaxDocExamined() { this->maxDocExamined_ = nullptr;};
    inline const vector<int64_t> & maxDocExamined() const { DARABONBA_PTR_GET_CONST(maxDocExamined_, vector<int64_t>) };
    inline vector<int64_t> maxDocExamined() { DARABONBA_PTR_GET(maxDocExamined_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxDocExamined(const vector<int64_t> & maxDocExamined) { DARABONBA_PTR_SET_VALUE(maxDocExamined_, maxDocExamined) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxDocExamined(vector<int64_t> && maxDocExamined) { DARABONBA_PTR_SET_RVALUE(maxDocExamined_, maxDocExamined) };


    // maxFrows Field Functions 
    bool hasMaxFrows() const { return this->maxFrows_ != nullptr;};
    void deleteMaxFrows() { this->maxFrows_ = nullptr;};
    inline const vector<int64_t> & maxFrows() const { DARABONBA_PTR_GET_CONST(maxFrows_, vector<int64_t>) };
    inline vector<int64_t> maxFrows() { DARABONBA_PTR_GET(maxFrows_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxFrows(const vector<int64_t> & maxFrows) { DARABONBA_PTR_SET_VALUE(maxFrows_, maxFrows) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxFrows(vector<int64_t> && maxFrows) { DARABONBA_PTR_SET_RVALUE(maxFrows_, maxFrows) };


    // maxIOWrites Field Functions 
    bool hasMaxIOWrites() const { return this->maxIOWrites_ != nullptr;};
    void deleteMaxIOWrites() { this->maxIOWrites_ = nullptr;};
    inline const vector<int64_t> & maxIOWrites() const { DARABONBA_PTR_GET_CONST(maxIOWrites_, vector<int64_t>) };
    inline vector<int64_t> maxIOWrites() { DARABONBA_PTR_GET(maxIOWrites_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxIOWrites(const vector<int64_t> & maxIOWrites) { DARABONBA_PTR_SET_VALUE(maxIOWrites_, maxIOWrites) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxIOWrites(vector<int64_t> && maxIOWrites) { DARABONBA_PTR_SET_RVALUE(maxIOWrites_, maxIOWrites) };


    // maxKeysExamined Field Functions 
    bool hasMaxKeysExamined() const { return this->maxKeysExamined_ != nullptr;};
    void deleteMaxKeysExamined() { this->maxKeysExamined_ = nullptr;};
    inline const vector<int64_t> & maxKeysExamined() const { DARABONBA_PTR_GET_CONST(maxKeysExamined_, vector<int64_t>) };
    inline vector<int64_t> maxKeysExamined() { DARABONBA_PTR_GET(maxKeysExamined_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxKeysExamined(const vector<int64_t> & maxKeysExamined) { DARABONBA_PTR_SET_VALUE(maxKeysExamined_, maxKeysExamined) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxKeysExamined(vector<int64_t> && maxKeysExamined) { DARABONBA_PTR_SET_RVALUE(maxKeysExamined_, maxKeysExamined) };


    // maxLastRowsCountAffected Field Functions 
    bool hasMaxLastRowsCountAffected() const { return this->maxLastRowsCountAffected_ != nullptr;};
    void deleteMaxLastRowsCountAffected() { this->maxLastRowsCountAffected_ = nullptr;};
    inline const vector<int64_t> & maxLastRowsCountAffected() const { DARABONBA_PTR_GET_CONST(maxLastRowsCountAffected_, vector<int64_t>) };
    inline vector<int64_t> maxLastRowsCountAffected() { DARABONBA_PTR_GET(maxLastRowsCountAffected_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxLastRowsCountAffected(const vector<int64_t> & maxLastRowsCountAffected) { DARABONBA_PTR_SET_VALUE(maxLastRowsCountAffected_, maxLastRowsCountAffected) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxLastRowsCountAffected(vector<int64_t> && maxLastRowsCountAffected) { DARABONBA_PTR_SET_RVALUE(maxLastRowsCountAffected_, maxLastRowsCountAffected) };


    // maxLockTime Field Functions 
    bool hasMaxLockTime() const { return this->maxLockTime_ != nullptr;};
    void deleteMaxLockTime() { this->maxLockTime_ = nullptr;};
    inline const vector<double> & maxLockTime() const { DARABONBA_PTR_GET_CONST(maxLockTime_, vector<double>) };
    inline vector<double> maxLockTime() { DARABONBA_PTR_GET(maxLockTime_, vector<double>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxLockTime(const vector<double> & maxLockTime) { DARABONBA_PTR_SET_VALUE(maxLockTime_, maxLockTime) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxLockTime(vector<double> && maxLockTime) { DARABONBA_PTR_SET_RVALUE(maxLockTime_, maxLockTime) };


    // maxLogicalIOReads Field Functions 
    bool hasMaxLogicalIOReads() const { return this->maxLogicalIOReads_ != nullptr;};
    void deleteMaxLogicalIOReads() { this->maxLogicalIOReads_ = nullptr;};
    inline const vector<int64_t> & maxLogicalIOReads() const { DARABONBA_PTR_GET_CONST(maxLogicalIOReads_, vector<int64_t>) };
    inline vector<int64_t> maxLogicalIOReads() { DARABONBA_PTR_GET(maxLogicalIOReads_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxLogicalIOReads(const vector<int64_t> & maxLogicalIOReads) { DARABONBA_PTR_SET_VALUE(maxLogicalIOReads_, maxLogicalIOReads) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxLogicalIOReads(vector<int64_t> && maxLogicalIOReads) { DARABONBA_PTR_SET_RVALUE(maxLogicalIOReads_, maxLogicalIOReads) };


    // maxPhysicalIOReads Field Functions 
    bool hasMaxPhysicalIOReads() const { return this->maxPhysicalIOReads_ != nullptr;};
    void deleteMaxPhysicalIOReads() { this->maxPhysicalIOReads_ = nullptr;};
    inline const vector<int64_t> & maxPhysicalIOReads() const { DARABONBA_PTR_GET_CONST(maxPhysicalIOReads_, vector<int64_t>) };
    inline vector<int64_t> maxPhysicalIOReads() { DARABONBA_PTR_GET(maxPhysicalIOReads_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxPhysicalIOReads(const vector<int64_t> & maxPhysicalIOReads) { DARABONBA_PTR_SET_VALUE(maxPhysicalIOReads_, maxPhysicalIOReads) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxPhysicalIOReads(vector<int64_t> && maxPhysicalIOReads) { DARABONBA_PTR_SET_RVALUE(maxPhysicalIOReads_, maxPhysicalIOReads) };


    // maxReturnNum Field Functions 
    bool hasMaxReturnNum() const { return this->maxReturnNum_ != nullptr;};
    void deleteMaxReturnNum() { this->maxReturnNum_ = nullptr;};
    inline const vector<int64_t> & maxReturnNum() const { DARABONBA_PTR_GET_CONST(maxReturnNum_, vector<int64_t>) };
    inline vector<int64_t> maxReturnNum() { DARABONBA_PTR_GET(maxReturnNum_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxReturnNum(const vector<int64_t> & maxReturnNum) { DARABONBA_PTR_SET_VALUE(maxReturnNum_, maxReturnNum) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxReturnNum(vector<int64_t> && maxReturnNum) { DARABONBA_PTR_SET_RVALUE(maxReturnNum_, maxReturnNum) };


    // maxRows Field Functions 
    bool hasMaxRows() const { return this->maxRows_ != nullptr;};
    void deleteMaxRows() { this->maxRows_ = nullptr;};
    inline const vector<int64_t> & maxRows() const { DARABONBA_PTR_GET_CONST(maxRows_, vector<int64_t>) };
    inline vector<int64_t> maxRows() { DARABONBA_PTR_GET(maxRows_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxRows(const vector<int64_t> & maxRows) { DARABONBA_PTR_SET_VALUE(maxRows_, maxRows) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxRows(vector<int64_t> && maxRows) { DARABONBA_PTR_SET_RVALUE(maxRows_, maxRows) };


    // maxRowsCountAffected Field Functions 
    bool hasMaxRowsCountAffected() const { return this->maxRowsCountAffected_ != nullptr;};
    void deleteMaxRowsCountAffected() { this->maxRowsCountAffected_ = nullptr;};
    inline const vector<int64_t> & maxRowsCountAffected() const { DARABONBA_PTR_GET_CONST(maxRowsCountAffected_, vector<int64_t>) };
    inline vector<int64_t> maxRowsCountAffected() { DARABONBA_PTR_GET(maxRowsCountAffected_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxRowsCountAffected(const vector<int64_t> & maxRowsCountAffected) { DARABONBA_PTR_SET_VALUE(maxRowsCountAffected_, maxRowsCountAffected) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxRowsCountAffected(vector<int64_t> && maxRowsCountAffected) { DARABONBA_PTR_SET_RVALUE(maxRowsCountAffected_, maxRowsCountAffected) };


    // maxRowsExamined Field Functions 
    bool hasMaxRowsExamined() const { return this->maxRowsExamined_ != nullptr;};
    void deleteMaxRowsExamined() { this->maxRowsExamined_ = nullptr;};
    inline const vector<int64_t> & maxRowsExamined() const { DARABONBA_PTR_GET_CONST(maxRowsExamined_, vector<int64_t>) };
    inline vector<int64_t> maxRowsExamined() { DARABONBA_PTR_GET(maxRowsExamined_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxRowsExamined(const vector<int64_t> & maxRowsExamined) { DARABONBA_PTR_SET_VALUE(maxRowsExamined_, maxRowsExamined) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxRowsExamined(vector<int64_t> && maxRowsExamined) { DARABONBA_PTR_SET_RVALUE(maxRowsExamined_, maxRowsExamined) };


    // maxRowsSent Field Functions 
    bool hasMaxRowsSent() const { return this->maxRowsSent_ != nullptr;};
    void deleteMaxRowsSent() { this->maxRowsSent_ = nullptr;};
    inline const vector<int64_t> & maxRowsSent() const { DARABONBA_PTR_GET_CONST(maxRowsSent_, vector<int64_t>) };
    inline vector<int64_t> maxRowsSent() { DARABONBA_PTR_GET(maxRowsSent_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxRowsSent(const vector<int64_t> & maxRowsSent) { DARABONBA_PTR_SET_VALUE(maxRowsSent_, maxRowsSent) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxRowsSent(vector<int64_t> && maxRowsSent) { DARABONBA_PTR_SET_RVALUE(maxRowsSent_, maxRowsSent) };


    // maxRt Field Functions 
    bool hasMaxRt() const { return this->maxRt_ != nullptr;};
    void deleteMaxRt() { this->maxRt_ = nullptr;};
    inline const vector<double> & maxRt() const { DARABONBA_PTR_GET_CONST(maxRt_, vector<double>) };
    inline vector<double> maxRt() { DARABONBA_PTR_GET(maxRt_, vector<double>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxRt(const vector<double> & maxRt) { DARABONBA_PTR_SET_VALUE(maxRt_, maxRt) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxRt(vector<double> && maxRt) { DARABONBA_PTR_SET_RVALUE(maxRt_, maxRt) };


    // maxScnt Field Functions 
    bool hasMaxScnt() const { return this->maxScnt_ != nullptr;};
    void deleteMaxScnt() { this->maxScnt_ = nullptr;};
    inline const vector<int64_t> & maxScnt() const { DARABONBA_PTR_GET_CONST(maxScnt_, vector<int64_t>) };
    inline vector<int64_t> maxScnt() { DARABONBA_PTR_GET(maxScnt_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxScnt(const vector<int64_t> & maxScnt) { DARABONBA_PTR_SET_VALUE(maxScnt_, maxScnt) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setMaxScnt(vector<int64_t> && maxScnt) { DARABONBA_PTR_SET_RVALUE(maxScnt_, maxScnt) };


    // physicalIOReads Field Functions 
    bool hasPhysicalIOReads() const { return this->physicalIOReads_ != nullptr;};
    void deletePhysicalIOReads() { this->physicalIOReads_ = nullptr;};
    inline const vector<int64_t> & physicalIOReads() const { DARABONBA_PTR_GET_CONST(physicalIOReads_, vector<int64_t>) };
    inline vector<int64_t> physicalIOReads() { DARABONBA_PTR_GET(physicalIOReads_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setPhysicalIOReads(const vector<int64_t> & physicalIOReads) { DARABONBA_PTR_SET_VALUE(physicalIOReads_, physicalIOReads) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setPhysicalIOReads(vector<int64_t> && physicalIOReads) { DARABONBA_PTR_SET_RVALUE(physicalIOReads_, physicalIOReads) };


    // returnNum Field Functions 
    bool hasReturnNum() const { return this->returnNum_ != nullptr;};
    void deleteReturnNum() { this->returnNum_ = nullptr;};
    inline const vector<int64_t> & returnNum() const { DARABONBA_PTR_GET_CONST(returnNum_, vector<int64_t>) };
    inline vector<int64_t> returnNum() { DARABONBA_PTR_GET(returnNum_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setReturnNum(const vector<int64_t> & returnNum) { DARABONBA_PTR_SET_VALUE(returnNum_, returnNum) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setReturnNum(vector<int64_t> && returnNum) { DARABONBA_PTR_SET_RVALUE(returnNum_, returnNum) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline const vector<int64_t> & rows() const { DARABONBA_PTR_GET_CONST(rows_, vector<int64_t>) };
    inline vector<int64_t> rows() { DARABONBA_PTR_GET(rows_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setRows(const vector<int64_t> & rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setRows(vector<int64_t> && rows) { DARABONBA_PTR_SET_RVALUE(rows_, rows) };


    // rowsCountAffected Field Functions 
    bool hasRowsCountAffected() const { return this->rowsCountAffected_ != nullptr;};
    void deleteRowsCountAffected() { this->rowsCountAffected_ = nullptr;};
    inline const vector<int64_t> & rowsCountAffected() const { DARABONBA_PTR_GET_CONST(rowsCountAffected_, vector<int64_t>) };
    inline vector<int64_t> rowsCountAffected() { DARABONBA_PTR_GET(rowsCountAffected_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setRowsCountAffected(const vector<int64_t> & rowsCountAffected) { DARABONBA_PTR_SET_VALUE(rowsCountAffected_, rowsCountAffected) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setRowsCountAffected(vector<int64_t> && rowsCountAffected) { DARABONBA_PTR_SET_RVALUE(rowsCountAffected_, rowsCountAffected) };


    // rowsExamined Field Functions 
    bool hasRowsExamined() const { return this->rowsExamined_ != nullptr;};
    void deleteRowsExamined() { this->rowsExamined_ = nullptr;};
    inline const vector<int64_t> & rowsExamined() const { DARABONBA_PTR_GET_CONST(rowsExamined_, vector<int64_t>) };
    inline vector<int64_t> rowsExamined() { DARABONBA_PTR_GET(rowsExamined_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setRowsExamined(const vector<int64_t> & rowsExamined) { DARABONBA_PTR_SET_VALUE(rowsExamined_, rowsExamined) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setRowsExamined(vector<int64_t> && rowsExamined) { DARABONBA_PTR_SET_RVALUE(rowsExamined_, rowsExamined) };


    // rowsSent Field Functions 
    bool hasRowsSent() const { return this->rowsSent_ != nullptr;};
    void deleteRowsSent() { this->rowsSent_ = nullptr;};
    inline const vector<int64_t> & rowsSent() const { DARABONBA_PTR_GET_CONST(rowsSent_, vector<int64_t>) };
    inline vector<int64_t> rowsSent() { DARABONBA_PTR_GET(rowsSent_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setRowsSent(const vector<int64_t> & rowsSent) { DARABONBA_PTR_SET_VALUE(rowsSent_, rowsSent) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setRowsSent(vector<int64_t> && rowsSent) { DARABONBA_PTR_SET_RVALUE(rowsSent_, rowsSent) };


    // rt Field Functions 
    bool hasRt() const { return this->rt_ != nullptr;};
    void deleteRt() { this->rt_ = nullptr;};
    inline const vector<double> & rt() const { DARABONBA_PTR_GET_CONST(rt_, vector<double>) };
    inline vector<double> rt() { DARABONBA_PTR_GET(rt_, vector<double>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setRt(const vector<double> & rt) { DARABONBA_PTR_SET_VALUE(rt_, rt) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setRt(vector<double> && rt) { DARABONBA_PTR_SET_RVALUE(rt_, rt) };


    // scnt Field Functions 
    bool hasScnt() const { return this->scnt_ != nullptr;};
    void deleteScnt() { this->scnt_ = nullptr;};
    inline const vector<int64_t> & scnt() const { DARABONBA_PTR_GET_CONST(scnt_, vector<int64_t>) };
    inline vector<int64_t> scnt() { DARABONBA_PTR_GET(scnt_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setScnt(const vector<int64_t> & scnt) { DARABONBA_PTR_SET_VALUE(scnt_, scnt) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setScnt(vector<int64_t> && scnt) { DARABONBA_PTR_SET_RVALUE(scnt_, scnt) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // ts Field Functions 
    bool hasTs() const { return this->ts_ != nullptr;};
    void deleteTs() { this->ts_ = nullptr;};
    inline const vector<int64_t> & ts() const { DARABONBA_PTR_GET_CONST(ts_, vector<int64_t>) };
    inline vector<int64_t> ts() { DARABONBA_PTR_GET(ts_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setTs(const vector<int64_t> & ts) { DARABONBA_PTR_SET_VALUE(ts_, ts) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setTs(vector<int64_t> && ts) { DARABONBA_PTR_SET_RVALUE(ts_, ts) };


    // tsEnd Field Functions 
    bool hasTsEnd() const { return this->tsEnd_ != nullptr;};
    void deleteTsEnd() { this->tsEnd_ = nullptr;};
    inline const vector<int64_t> & tsEnd() const { DARABONBA_PTR_GET_CONST(tsEnd_, vector<int64_t>) };
    inline vector<int64_t> tsEnd() { DARABONBA_PTR_GET(tsEnd_, vector<int64_t>) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setTsEnd(const vector<int64_t> & tsEnd) { DARABONBA_PTR_SET_VALUE(tsEnd_, tsEnd) };
    inline DescribeSlowLogHistogramAsyncResponseBodyDataData& setTsEnd(vector<int64_t> && tsEnd) { DARABONBA_PTR_SET_RVALUE(tsEnd_, tsEnd) };


  protected:
    std::shared_ptr<vector<double>> avgCPUTime_ = nullptr;
    std::shared_ptr<vector<double>> avgDocExamined_ = nullptr;
    std::shared_ptr<vector<double>> avgFrows_ = nullptr;
    std::shared_ptr<vector<double>> avgIOWrites_ = nullptr;
    std::shared_ptr<vector<double>> avgKeysExamined_ = nullptr;
    std::shared_ptr<vector<double>> avgLastRowsCountAffected_ = nullptr;
    std::shared_ptr<vector<double>> avgLockTime_ = nullptr;
    std::shared_ptr<vector<double>> avgLogicalIOReads_ = nullptr;
    std::shared_ptr<vector<double>> avgPhysicalIOReads_ = nullptr;
    std::shared_ptr<vector<double>> avgReturnNum_ = nullptr;
    std::shared_ptr<vector<double>> avgRows_ = nullptr;
    std::shared_ptr<vector<double>> avgRowsCountAffected_ = nullptr;
    std::shared_ptr<vector<double>> avgRowsExamined_ = nullptr;
    std::shared_ptr<vector<double>> avgRowsSent_ = nullptr;
    std::shared_ptr<vector<double>> avgRt_ = nullptr;
    std::shared_ptr<vector<double>> avgScnt_ = nullptr;
    std::shared_ptr<vector<double>> CPUTime_ = nullptr;
    std::shared_ptr<vector<int64_t>> count_ = nullptr;
    std::shared_ptr<vector<int64_t>> docExamined_ = nullptr;
    std::shared_ptr<vector<int64_t>> frows_ = nullptr;
    std::shared_ptr<vector<int64_t>> IOWrites_ = nullptr;
    std::shared_ptr<vector<Models::DescribeSlowLogHistogramAsyncResponseBodyDataDataItem>> item_ = nullptr;
    std::shared_ptr<vector<int64_t>> keysExamined_ = nullptr;
    std::shared_ptr<vector<int64_t>> lastRowsCountAffected_ = nullptr;
    std::shared_ptr<vector<double>> lockTime_ = nullptr;
    std::shared_ptr<vector<int64_t>> logicalIOReads_ = nullptr;
    std::shared_ptr<vector<double>> maxCPUTime_ = nullptr;
    std::shared_ptr<vector<int64_t>> maxDocExamined_ = nullptr;
    std::shared_ptr<vector<int64_t>> maxFrows_ = nullptr;
    std::shared_ptr<vector<int64_t>> maxIOWrites_ = nullptr;
    std::shared_ptr<vector<int64_t>> maxKeysExamined_ = nullptr;
    std::shared_ptr<vector<int64_t>> maxLastRowsCountAffected_ = nullptr;
    std::shared_ptr<vector<double>> maxLockTime_ = nullptr;
    std::shared_ptr<vector<int64_t>> maxLogicalIOReads_ = nullptr;
    std::shared_ptr<vector<int64_t>> maxPhysicalIOReads_ = nullptr;
    std::shared_ptr<vector<int64_t>> maxReturnNum_ = nullptr;
    std::shared_ptr<vector<int64_t>> maxRows_ = nullptr;
    std::shared_ptr<vector<int64_t>> maxRowsCountAffected_ = nullptr;
    std::shared_ptr<vector<int64_t>> maxRowsExamined_ = nullptr;
    std::shared_ptr<vector<int64_t>> maxRowsSent_ = nullptr;
    std::shared_ptr<vector<double>> maxRt_ = nullptr;
    std::shared_ptr<vector<int64_t>> maxScnt_ = nullptr;
    std::shared_ptr<vector<int64_t>> physicalIOReads_ = nullptr;
    std::shared_ptr<vector<int64_t>> returnNum_ = nullptr;
    std::shared_ptr<vector<int64_t>> rows_ = nullptr;
    std::shared_ptr<vector<int64_t>> rowsCountAffected_ = nullptr;
    std::shared_ptr<vector<int64_t>> rowsExamined_ = nullptr;
    std::shared_ptr<vector<int64_t>> rowsSent_ = nullptr;
    std::shared_ptr<vector<double>> rt_ = nullptr;
    std::shared_ptr<vector<int64_t>> scnt_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<vector<int64_t>> ts_ = nullptr;
    std::shared_ptr<vector<int64_t>> tsEnd_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
