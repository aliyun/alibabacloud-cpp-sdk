// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGHISTOGRAMASYNCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGHISTOGRAMASYNCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSlowLogHistogramAsyncResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogHistogramAsyncResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogHistogramAsyncResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSlowLogHistogramAsyncResponseBody() = default ;
    DescribeSlowLogHistogramAsyncResponseBody(const DescribeSlowLogHistogramAsyncResponseBody &) = default ;
    DescribeSlowLogHistogramAsyncResponseBody(DescribeSlowLogHistogramAsyncResponseBody &&) = default ;
    DescribeSlowLogHistogramAsyncResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogHistogramAsyncResponseBody() = default ;
    DescribeSlowLogHistogramAsyncResponseBody& operator=(const DescribeSlowLogHistogramAsyncResponseBody &) = default ;
    DescribeSlowLogHistogramAsyncResponseBody& operator=(DescribeSlowLogHistogramAsyncResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(IsFinish, isFinish_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(RequestKey, requestKey_);
        DARABONBA_PTR_TO_JSON(ResultId, resultId_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(IsFinish, isFinish_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(RequestKey, requestKey_);
        DARABONBA_PTR_FROM_JSON(ResultId, resultId_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataItem& obj) { 
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
        friend void from_json(const Darabonba::Json& j, DataItem& obj) { 
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
        DataItem() = default ;
        DataItem(const DataItem &) = default ;
        DataItem(DataItem &&) = default ;
        DataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataItem() = default ;
        DataItem& operator=(const DataItem &) = default ;
        DataItem& operator=(DataItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Item : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Item& obj) { 
            DARABONBA_PTR_TO_JSON(Count, count_);
            DARABONBA_PTR_TO_JSON(InsItems, insItems_);
            DARABONBA_PTR_TO_JSON(InsRole, insRole_);
            DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
            DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
          };
          friend void from_json(const Darabonba::Json& j, Item& obj) { 
            DARABONBA_PTR_FROM_JSON(Count, count_);
            DARABONBA_PTR_FROM_JSON(InsItems, insItems_);
            DARABONBA_PTR_FROM_JSON(InsRole, insRole_);
            DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
            DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
          };
          Item() = default ;
          Item(const Item &) = default ;
          Item(Item &&) = default ;
          Item(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Item() = default ;
          Item& operator=(const Item &) = default ;
          Item& operator=(Item &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class InsItems : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const InsItems& obj) { 
              DARABONBA_PTR_TO_JSON(Count, count_);
              DARABONBA_PTR_TO_JSON(InsId, insId_);
              DARABONBA_PTR_TO_JSON(InsRole, insRole_);
              DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
            };
            friend void from_json(const Darabonba::Json& j, InsItems& obj) { 
              DARABONBA_PTR_FROM_JSON(Count, count_);
              DARABONBA_PTR_FROM_JSON(InsId, insId_);
              DARABONBA_PTR_FROM_JSON(InsRole, insRole_);
              DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
            };
            InsItems() = default ;
            InsItems(const InsItems &) = default ;
            InsItems(InsItems &&) = default ;
            InsItems(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~InsItems() = default ;
            InsItems& operator=(const InsItems &) = default ;
            InsItems& operator=(InsItems &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->count_ == nullptr
        && this->insId_ == nullptr && this->insRole_ == nullptr && this->totalCount_ == nullptr; };
            // count Field Functions 
            bool hasCount() const { return this->count_ != nullptr;};
            void deleteCount() { this->count_ = nullptr;};
            inline const vector<int64_t> & getCount() const { DARABONBA_PTR_GET_CONST(count_, vector<int64_t>) };
            inline vector<int64_t> getCount() { DARABONBA_PTR_GET(count_, vector<int64_t>) };
            inline InsItems& setCount(const vector<int64_t> & count) { DARABONBA_PTR_SET_VALUE(count_, count) };
            inline InsItems& setCount(vector<int64_t> && count) { DARABONBA_PTR_SET_RVALUE(count_, count) };


            // insId Field Functions 
            bool hasInsId() const { return this->insId_ != nullptr;};
            void deleteInsId() { this->insId_ = nullptr;};
            inline string getInsId() const { DARABONBA_PTR_GET_DEFAULT(insId_, "") };
            inline InsItems& setInsId(string insId) { DARABONBA_PTR_SET_VALUE(insId_, insId) };


            // insRole Field Functions 
            bool hasInsRole() const { return this->insRole_ != nullptr;};
            void deleteInsRole() { this->insRole_ = nullptr;};
            inline string getInsRole() const { DARABONBA_PTR_GET_DEFAULT(insRole_, "") };
            inline InsItems& setInsRole(string insRole) { DARABONBA_PTR_SET_VALUE(insRole_, insRole) };


            // totalCount Field Functions 
            bool hasTotalCount() const { return this->totalCount_ != nullptr;};
            void deleteTotalCount() { this->totalCount_ = nullptr;};
            inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
            inline InsItems& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


          protected:
            shared_ptr<vector<int64_t>> count_ {};
            shared_ptr<string> insId_ {};
            shared_ptr<string> insRole_ {};
            shared_ptr<int64_t> totalCount_ {};
          };

          virtual bool empty() const override { return this->count_ == nullptr
        && this->insItems_ == nullptr && this->insRole_ == nullptr && this->nodeId_ == nullptr && this->totalCount_ == nullptr; };
          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline const vector<int64_t> & getCount() const { DARABONBA_PTR_GET_CONST(count_, vector<int64_t>) };
          inline vector<int64_t> getCount() { DARABONBA_PTR_GET(count_, vector<int64_t>) };
          inline Item& setCount(const vector<int64_t> & count) { DARABONBA_PTR_SET_VALUE(count_, count) };
          inline Item& setCount(vector<int64_t> && count) { DARABONBA_PTR_SET_RVALUE(count_, count) };


          // insItems Field Functions 
          bool hasInsItems() const { return this->insItems_ != nullptr;};
          void deleteInsItems() { this->insItems_ = nullptr;};
          inline const vector<Item::InsItems> & getInsItems() const { DARABONBA_PTR_GET_CONST(insItems_, vector<Item::InsItems>) };
          inline vector<Item::InsItems> getInsItems() { DARABONBA_PTR_GET(insItems_, vector<Item::InsItems>) };
          inline Item& setInsItems(const vector<Item::InsItems> & insItems) { DARABONBA_PTR_SET_VALUE(insItems_, insItems) };
          inline Item& setInsItems(vector<Item::InsItems> && insItems) { DARABONBA_PTR_SET_RVALUE(insItems_, insItems) };


          // insRole Field Functions 
          bool hasInsRole() const { return this->insRole_ != nullptr;};
          void deleteInsRole() { this->insRole_ = nullptr;};
          inline string getInsRole() const { DARABONBA_PTR_GET_DEFAULT(insRole_, "") };
          inline Item& setInsRole(string insRole) { DARABONBA_PTR_SET_VALUE(insRole_, insRole) };


          // nodeId Field Functions 
          bool hasNodeId() const { return this->nodeId_ != nullptr;};
          void deleteNodeId() { this->nodeId_ = nullptr;};
          inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
          inline Item& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


          // totalCount Field Functions 
          bool hasTotalCount() const { return this->totalCount_ != nullptr;};
          void deleteTotalCount() { this->totalCount_ = nullptr;};
          inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
          inline Item& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


        protected:
          shared_ptr<vector<int64_t>> count_ {};
          shared_ptr<vector<Item::InsItems>> insItems_ {};
          shared_ptr<string> insRole_ {};
          shared_ptr<string> nodeId_ {};
          shared_ptr<int64_t> totalCount_ {};
        };

        virtual bool empty() const override { return this->avgCPUTime_ == nullptr
        && this->avgDocExamined_ == nullptr && this->avgFrows_ == nullptr && this->avgIOWrites_ == nullptr && this->avgKeysExamined_ == nullptr && this->avgLastRowsCountAffected_ == nullptr
        && this->avgLockTime_ == nullptr && this->avgLogicalIOReads_ == nullptr && this->avgPhysicalIOReads_ == nullptr && this->avgReturnNum_ == nullptr && this->avgRows_ == nullptr
        && this->avgRowsCountAffected_ == nullptr && this->avgRowsExamined_ == nullptr && this->avgRowsSent_ == nullptr && this->avgRt_ == nullptr && this->avgScnt_ == nullptr
        && this->CPUTime_ == nullptr && this->count_ == nullptr && this->docExamined_ == nullptr && this->frows_ == nullptr && this->IOWrites_ == nullptr
        && this->item_ == nullptr && this->keysExamined_ == nullptr && this->lastRowsCountAffected_ == nullptr && this->lockTime_ == nullptr && this->logicalIOReads_ == nullptr
        && this->maxCPUTime_ == nullptr && this->maxDocExamined_ == nullptr && this->maxFrows_ == nullptr && this->maxIOWrites_ == nullptr && this->maxKeysExamined_ == nullptr
        && this->maxLastRowsCountAffected_ == nullptr && this->maxLockTime_ == nullptr && this->maxLogicalIOReads_ == nullptr && this->maxPhysicalIOReads_ == nullptr && this->maxReturnNum_ == nullptr
        && this->maxRows_ == nullptr && this->maxRowsCountAffected_ == nullptr && this->maxRowsExamined_ == nullptr && this->maxRowsSent_ == nullptr && this->maxRt_ == nullptr
        && this->maxScnt_ == nullptr && this->physicalIOReads_ == nullptr && this->returnNum_ == nullptr && this->rows_ == nullptr && this->rowsCountAffected_ == nullptr
        && this->rowsExamined_ == nullptr && this->rowsSent_ == nullptr && this->rt_ == nullptr && this->scnt_ == nullptr && this->total_ == nullptr
        && this->totalCount_ == nullptr && this->ts_ == nullptr && this->tsEnd_ == nullptr; };
        // avgCPUTime Field Functions 
        bool hasAvgCPUTime() const { return this->avgCPUTime_ != nullptr;};
        void deleteAvgCPUTime() { this->avgCPUTime_ = nullptr;};
        inline const vector<double> & getAvgCPUTime() const { DARABONBA_PTR_GET_CONST(avgCPUTime_, vector<double>) };
        inline vector<double> getAvgCPUTime() { DARABONBA_PTR_GET(avgCPUTime_, vector<double>) };
        inline DataItem& setAvgCPUTime(const vector<double> & avgCPUTime) { DARABONBA_PTR_SET_VALUE(avgCPUTime_, avgCPUTime) };
        inline DataItem& setAvgCPUTime(vector<double> && avgCPUTime) { DARABONBA_PTR_SET_RVALUE(avgCPUTime_, avgCPUTime) };


        // avgDocExamined Field Functions 
        bool hasAvgDocExamined() const { return this->avgDocExamined_ != nullptr;};
        void deleteAvgDocExamined() { this->avgDocExamined_ = nullptr;};
        inline const vector<double> & getAvgDocExamined() const { DARABONBA_PTR_GET_CONST(avgDocExamined_, vector<double>) };
        inline vector<double> getAvgDocExamined() { DARABONBA_PTR_GET(avgDocExamined_, vector<double>) };
        inline DataItem& setAvgDocExamined(const vector<double> & avgDocExamined) { DARABONBA_PTR_SET_VALUE(avgDocExamined_, avgDocExamined) };
        inline DataItem& setAvgDocExamined(vector<double> && avgDocExamined) { DARABONBA_PTR_SET_RVALUE(avgDocExamined_, avgDocExamined) };


        // avgFrows Field Functions 
        bool hasAvgFrows() const { return this->avgFrows_ != nullptr;};
        void deleteAvgFrows() { this->avgFrows_ = nullptr;};
        inline const vector<double> & getAvgFrows() const { DARABONBA_PTR_GET_CONST(avgFrows_, vector<double>) };
        inline vector<double> getAvgFrows() { DARABONBA_PTR_GET(avgFrows_, vector<double>) };
        inline DataItem& setAvgFrows(const vector<double> & avgFrows) { DARABONBA_PTR_SET_VALUE(avgFrows_, avgFrows) };
        inline DataItem& setAvgFrows(vector<double> && avgFrows) { DARABONBA_PTR_SET_RVALUE(avgFrows_, avgFrows) };


        // avgIOWrites Field Functions 
        bool hasAvgIOWrites() const { return this->avgIOWrites_ != nullptr;};
        void deleteAvgIOWrites() { this->avgIOWrites_ = nullptr;};
        inline const vector<double> & getAvgIOWrites() const { DARABONBA_PTR_GET_CONST(avgIOWrites_, vector<double>) };
        inline vector<double> getAvgIOWrites() { DARABONBA_PTR_GET(avgIOWrites_, vector<double>) };
        inline DataItem& setAvgIOWrites(const vector<double> & avgIOWrites) { DARABONBA_PTR_SET_VALUE(avgIOWrites_, avgIOWrites) };
        inline DataItem& setAvgIOWrites(vector<double> && avgIOWrites) { DARABONBA_PTR_SET_RVALUE(avgIOWrites_, avgIOWrites) };


        // avgKeysExamined Field Functions 
        bool hasAvgKeysExamined() const { return this->avgKeysExamined_ != nullptr;};
        void deleteAvgKeysExamined() { this->avgKeysExamined_ = nullptr;};
        inline const vector<double> & getAvgKeysExamined() const { DARABONBA_PTR_GET_CONST(avgKeysExamined_, vector<double>) };
        inline vector<double> getAvgKeysExamined() { DARABONBA_PTR_GET(avgKeysExamined_, vector<double>) };
        inline DataItem& setAvgKeysExamined(const vector<double> & avgKeysExamined) { DARABONBA_PTR_SET_VALUE(avgKeysExamined_, avgKeysExamined) };
        inline DataItem& setAvgKeysExamined(vector<double> && avgKeysExamined) { DARABONBA_PTR_SET_RVALUE(avgKeysExamined_, avgKeysExamined) };


        // avgLastRowsCountAffected Field Functions 
        bool hasAvgLastRowsCountAffected() const { return this->avgLastRowsCountAffected_ != nullptr;};
        void deleteAvgLastRowsCountAffected() { this->avgLastRowsCountAffected_ = nullptr;};
        inline const vector<double> & getAvgLastRowsCountAffected() const { DARABONBA_PTR_GET_CONST(avgLastRowsCountAffected_, vector<double>) };
        inline vector<double> getAvgLastRowsCountAffected() { DARABONBA_PTR_GET(avgLastRowsCountAffected_, vector<double>) };
        inline DataItem& setAvgLastRowsCountAffected(const vector<double> & avgLastRowsCountAffected) { DARABONBA_PTR_SET_VALUE(avgLastRowsCountAffected_, avgLastRowsCountAffected) };
        inline DataItem& setAvgLastRowsCountAffected(vector<double> && avgLastRowsCountAffected) { DARABONBA_PTR_SET_RVALUE(avgLastRowsCountAffected_, avgLastRowsCountAffected) };


        // avgLockTime Field Functions 
        bool hasAvgLockTime() const { return this->avgLockTime_ != nullptr;};
        void deleteAvgLockTime() { this->avgLockTime_ = nullptr;};
        inline const vector<double> & getAvgLockTime() const { DARABONBA_PTR_GET_CONST(avgLockTime_, vector<double>) };
        inline vector<double> getAvgLockTime() { DARABONBA_PTR_GET(avgLockTime_, vector<double>) };
        inline DataItem& setAvgLockTime(const vector<double> & avgLockTime) { DARABONBA_PTR_SET_VALUE(avgLockTime_, avgLockTime) };
        inline DataItem& setAvgLockTime(vector<double> && avgLockTime) { DARABONBA_PTR_SET_RVALUE(avgLockTime_, avgLockTime) };


        // avgLogicalIOReads Field Functions 
        bool hasAvgLogicalIOReads() const { return this->avgLogicalIOReads_ != nullptr;};
        void deleteAvgLogicalIOReads() { this->avgLogicalIOReads_ = nullptr;};
        inline const vector<double> & getAvgLogicalIOReads() const { DARABONBA_PTR_GET_CONST(avgLogicalIOReads_, vector<double>) };
        inline vector<double> getAvgLogicalIOReads() { DARABONBA_PTR_GET(avgLogicalIOReads_, vector<double>) };
        inline DataItem& setAvgLogicalIOReads(const vector<double> & avgLogicalIOReads) { DARABONBA_PTR_SET_VALUE(avgLogicalIOReads_, avgLogicalIOReads) };
        inline DataItem& setAvgLogicalIOReads(vector<double> && avgLogicalIOReads) { DARABONBA_PTR_SET_RVALUE(avgLogicalIOReads_, avgLogicalIOReads) };


        // avgPhysicalIOReads Field Functions 
        bool hasAvgPhysicalIOReads() const { return this->avgPhysicalIOReads_ != nullptr;};
        void deleteAvgPhysicalIOReads() { this->avgPhysicalIOReads_ = nullptr;};
        inline const vector<double> & getAvgPhysicalIOReads() const { DARABONBA_PTR_GET_CONST(avgPhysicalIOReads_, vector<double>) };
        inline vector<double> getAvgPhysicalIOReads() { DARABONBA_PTR_GET(avgPhysicalIOReads_, vector<double>) };
        inline DataItem& setAvgPhysicalIOReads(const vector<double> & avgPhysicalIOReads) { DARABONBA_PTR_SET_VALUE(avgPhysicalIOReads_, avgPhysicalIOReads) };
        inline DataItem& setAvgPhysicalIOReads(vector<double> && avgPhysicalIOReads) { DARABONBA_PTR_SET_RVALUE(avgPhysicalIOReads_, avgPhysicalIOReads) };


        // avgReturnNum Field Functions 
        bool hasAvgReturnNum() const { return this->avgReturnNum_ != nullptr;};
        void deleteAvgReturnNum() { this->avgReturnNum_ = nullptr;};
        inline const vector<double> & getAvgReturnNum() const { DARABONBA_PTR_GET_CONST(avgReturnNum_, vector<double>) };
        inline vector<double> getAvgReturnNum() { DARABONBA_PTR_GET(avgReturnNum_, vector<double>) };
        inline DataItem& setAvgReturnNum(const vector<double> & avgReturnNum) { DARABONBA_PTR_SET_VALUE(avgReturnNum_, avgReturnNum) };
        inline DataItem& setAvgReturnNum(vector<double> && avgReturnNum) { DARABONBA_PTR_SET_RVALUE(avgReturnNum_, avgReturnNum) };


        // avgRows Field Functions 
        bool hasAvgRows() const { return this->avgRows_ != nullptr;};
        void deleteAvgRows() { this->avgRows_ = nullptr;};
        inline const vector<double> & getAvgRows() const { DARABONBA_PTR_GET_CONST(avgRows_, vector<double>) };
        inline vector<double> getAvgRows() { DARABONBA_PTR_GET(avgRows_, vector<double>) };
        inline DataItem& setAvgRows(const vector<double> & avgRows) { DARABONBA_PTR_SET_VALUE(avgRows_, avgRows) };
        inline DataItem& setAvgRows(vector<double> && avgRows) { DARABONBA_PTR_SET_RVALUE(avgRows_, avgRows) };


        // avgRowsCountAffected Field Functions 
        bool hasAvgRowsCountAffected() const { return this->avgRowsCountAffected_ != nullptr;};
        void deleteAvgRowsCountAffected() { this->avgRowsCountAffected_ = nullptr;};
        inline const vector<double> & getAvgRowsCountAffected() const { DARABONBA_PTR_GET_CONST(avgRowsCountAffected_, vector<double>) };
        inline vector<double> getAvgRowsCountAffected() { DARABONBA_PTR_GET(avgRowsCountAffected_, vector<double>) };
        inline DataItem& setAvgRowsCountAffected(const vector<double> & avgRowsCountAffected) { DARABONBA_PTR_SET_VALUE(avgRowsCountAffected_, avgRowsCountAffected) };
        inline DataItem& setAvgRowsCountAffected(vector<double> && avgRowsCountAffected) { DARABONBA_PTR_SET_RVALUE(avgRowsCountAffected_, avgRowsCountAffected) };


        // avgRowsExamined Field Functions 
        bool hasAvgRowsExamined() const { return this->avgRowsExamined_ != nullptr;};
        void deleteAvgRowsExamined() { this->avgRowsExamined_ = nullptr;};
        inline const vector<double> & getAvgRowsExamined() const { DARABONBA_PTR_GET_CONST(avgRowsExamined_, vector<double>) };
        inline vector<double> getAvgRowsExamined() { DARABONBA_PTR_GET(avgRowsExamined_, vector<double>) };
        inline DataItem& setAvgRowsExamined(const vector<double> & avgRowsExamined) { DARABONBA_PTR_SET_VALUE(avgRowsExamined_, avgRowsExamined) };
        inline DataItem& setAvgRowsExamined(vector<double> && avgRowsExamined) { DARABONBA_PTR_SET_RVALUE(avgRowsExamined_, avgRowsExamined) };


        // avgRowsSent Field Functions 
        bool hasAvgRowsSent() const { return this->avgRowsSent_ != nullptr;};
        void deleteAvgRowsSent() { this->avgRowsSent_ = nullptr;};
        inline const vector<double> & getAvgRowsSent() const { DARABONBA_PTR_GET_CONST(avgRowsSent_, vector<double>) };
        inline vector<double> getAvgRowsSent() { DARABONBA_PTR_GET(avgRowsSent_, vector<double>) };
        inline DataItem& setAvgRowsSent(const vector<double> & avgRowsSent) { DARABONBA_PTR_SET_VALUE(avgRowsSent_, avgRowsSent) };
        inline DataItem& setAvgRowsSent(vector<double> && avgRowsSent) { DARABONBA_PTR_SET_RVALUE(avgRowsSent_, avgRowsSent) };


        // avgRt Field Functions 
        bool hasAvgRt() const { return this->avgRt_ != nullptr;};
        void deleteAvgRt() { this->avgRt_ = nullptr;};
        inline const vector<double> & getAvgRt() const { DARABONBA_PTR_GET_CONST(avgRt_, vector<double>) };
        inline vector<double> getAvgRt() { DARABONBA_PTR_GET(avgRt_, vector<double>) };
        inline DataItem& setAvgRt(const vector<double> & avgRt) { DARABONBA_PTR_SET_VALUE(avgRt_, avgRt) };
        inline DataItem& setAvgRt(vector<double> && avgRt) { DARABONBA_PTR_SET_RVALUE(avgRt_, avgRt) };


        // avgScnt Field Functions 
        bool hasAvgScnt() const { return this->avgScnt_ != nullptr;};
        void deleteAvgScnt() { this->avgScnt_ = nullptr;};
        inline const vector<double> & getAvgScnt() const { DARABONBA_PTR_GET_CONST(avgScnt_, vector<double>) };
        inline vector<double> getAvgScnt() { DARABONBA_PTR_GET(avgScnt_, vector<double>) };
        inline DataItem& setAvgScnt(const vector<double> & avgScnt) { DARABONBA_PTR_SET_VALUE(avgScnt_, avgScnt) };
        inline DataItem& setAvgScnt(vector<double> && avgScnt) { DARABONBA_PTR_SET_RVALUE(avgScnt_, avgScnt) };


        // CPUTime Field Functions 
        bool hasCPUTime() const { return this->CPUTime_ != nullptr;};
        void deleteCPUTime() { this->CPUTime_ = nullptr;};
        inline const vector<double> & getCPUTime() const { DARABONBA_PTR_GET_CONST(CPUTime_, vector<double>) };
        inline vector<double> getCPUTime() { DARABONBA_PTR_GET(CPUTime_, vector<double>) };
        inline DataItem& setCPUTime(const vector<double> & CPUTime) { DARABONBA_PTR_SET_VALUE(CPUTime_, CPUTime) };
        inline DataItem& setCPUTime(vector<double> && CPUTime) { DARABONBA_PTR_SET_RVALUE(CPUTime_, CPUTime) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline const vector<int64_t> & getCount() const { DARABONBA_PTR_GET_CONST(count_, vector<int64_t>) };
        inline vector<int64_t> getCount() { DARABONBA_PTR_GET(count_, vector<int64_t>) };
        inline DataItem& setCount(const vector<int64_t> & count) { DARABONBA_PTR_SET_VALUE(count_, count) };
        inline DataItem& setCount(vector<int64_t> && count) { DARABONBA_PTR_SET_RVALUE(count_, count) };


        // docExamined Field Functions 
        bool hasDocExamined() const { return this->docExamined_ != nullptr;};
        void deleteDocExamined() { this->docExamined_ = nullptr;};
        inline const vector<int64_t> & getDocExamined() const { DARABONBA_PTR_GET_CONST(docExamined_, vector<int64_t>) };
        inline vector<int64_t> getDocExamined() { DARABONBA_PTR_GET(docExamined_, vector<int64_t>) };
        inline DataItem& setDocExamined(const vector<int64_t> & docExamined) { DARABONBA_PTR_SET_VALUE(docExamined_, docExamined) };
        inline DataItem& setDocExamined(vector<int64_t> && docExamined) { DARABONBA_PTR_SET_RVALUE(docExamined_, docExamined) };


        // frows Field Functions 
        bool hasFrows() const { return this->frows_ != nullptr;};
        void deleteFrows() { this->frows_ = nullptr;};
        inline const vector<int64_t> & getFrows() const { DARABONBA_PTR_GET_CONST(frows_, vector<int64_t>) };
        inline vector<int64_t> getFrows() { DARABONBA_PTR_GET(frows_, vector<int64_t>) };
        inline DataItem& setFrows(const vector<int64_t> & frows) { DARABONBA_PTR_SET_VALUE(frows_, frows) };
        inline DataItem& setFrows(vector<int64_t> && frows) { DARABONBA_PTR_SET_RVALUE(frows_, frows) };


        // IOWrites Field Functions 
        bool hasIOWrites() const { return this->IOWrites_ != nullptr;};
        void deleteIOWrites() { this->IOWrites_ = nullptr;};
        inline const vector<int64_t> & getIOWrites() const { DARABONBA_PTR_GET_CONST(IOWrites_, vector<int64_t>) };
        inline vector<int64_t> getIOWrites() { DARABONBA_PTR_GET(IOWrites_, vector<int64_t>) };
        inline DataItem& setIOWrites(const vector<int64_t> & IOWrites) { DARABONBA_PTR_SET_VALUE(IOWrites_, IOWrites) };
        inline DataItem& setIOWrites(vector<int64_t> && IOWrites) { DARABONBA_PTR_SET_RVALUE(IOWrites_, IOWrites) };


        // item Field Functions 
        bool hasItem() const { return this->item_ != nullptr;};
        void deleteItem() { this->item_ = nullptr;};
        inline const vector<DataItem::Item> & getItem() const { DARABONBA_PTR_GET_CONST(item_, vector<DataItem::Item>) };
        inline vector<DataItem::Item> getItem() { DARABONBA_PTR_GET(item_, vector<DataItem::Item>) };
        inline DataItem& setItem(const vector<DataItem::Item> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
        inline DataItem& setItem(vector<DataItem::Item> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


        // keysExamined Field Functions 
        bool hasKeysExamined() const { return this->keysExamined_ != nullptr;};
        void deleteKeysExamined() { this->keysExamined_ = nullptr;};
        inline const vector<int64_t> & getKeysExamined() const { DARABONBA_PTR_GET_CONST(keysExamined_, vector<int64_t>) };
        inline vector<int64_t> getKeysExamined() { DARABONBA_PTR_GET(keysExamined_, vector<int64_t>) };
        inline DataItem& setKeysExamined(const vector<int64_t> & keysExamined) { DARABONBA_PTR_SET_VALUE(keysExamined_, keysExamined) };
        inline DataItem& setKeysExamined(vector<int64_t> && keysExamined) { DARABONBA_PTR_SET_RVALUE(keysExamined_, keysExamined) };


        // lastRowsCountAffected Field Functions 
        bool hasLastRowsCountAffected() const { return this->lastRowsCountAffected_ != nullptr;};
        void deleteLastRowsCountAffected() { this->lastRowsCountAffected_ = nullptr;};
        inline const vector<int64_t> & getLastRowsCountAffected() const { DARABONBA_PTR_GET_CONST(lastRowsCountAffected_, vector<int64_t>) };
        inline vector<int64_t> getLastRowsCountAffected() { DARABONBA_PTR_GET(lastRowsCountAffected_, vector<int64_t>) };
        inline DataItem& setLastRowsCountAffected(const vector<int64_t> & lastRowsCountAffected) { DARABONBA_PTR_SET_VALUE(lastRowsCountAffected_, lastRowsCountAffected) };
        inline DataItem& setLastRowsCountAffected(vector<int64_t> && lastRowsCountAffected) { DARABONBA_PTR_SET_RVALUE(lastRowsCountAffected_, lastRowsCountAffected) };


        // lockTime Field Functions 
        bool hasLockTime() const { return this->lockTime_ != nullptr;};
        void deleteLockTime() { this->lockTime_ = nullptr;};
        inline const vector<double> & getLockTime() const { DARABONBA_PTR_GET_CONST(lockTime_, vector<double>) };
        inline vector<double> getLockTime() { DARABONBA_PTR_GET(lockTime_, vector<double>) };
        inline DataItem& setLockTime(const vector<double> & lockTime) { DARABONBA_PTR_SET_VALUE(lockTime_, lockTime) };
        inline DataItem& setLockTime(vector<double> && lockTime) { DARABONBA_PTR_SET_RVALUE(lockTime_, lockTime) };


        // logicalIOReads Field Functions 
        bool hasLogicalIOReads() const { return this->logicalIOReads_ != nullptr;};
        void deleteLogicalIOReads() { this->logicalIOReads_ = nullptr;};
        inline const vector<int64_t> & getLogicalIOReads() const { DARABONBA_PTR_GET_CONST(logicalIOReads_, vector<int64_t>) };
        inline vector<int64_t> getLogicalIOReads() { DARABONBA_PTR_GET(logicalIOReads_, vector<int64_t>) };
        inline DataItem& setLogicalIOReads(const vector<int64_t> & logicalIOReads) { DARABONBA_PTR_SET_VALUE(logicalIOReads_, logicalIOReads) };
        inline DataItem& setLogicalIOReads(vector<int64_t> && logicalIOReads) { DARABONBA_PTR_SET_RVALUE(logicalIOReads_, logicalIOReads) };


        // maxCPUTime Field Functions 
        bool hasMaxCPUTime() const { return this->maxCPUTime_ != nullptr;};
        void deleteMaxCPUTime() { this->maxCPUTime_ = nullptr;};
        inline const vector<double> & getMaxCPUTime() const { DARABONBA_PTR_GET_CONST(maxCPUTime_, vector<double>) };
        inline vector<double> getMaxCPUTime() { DARABONBA_PTR_GET(maxCPUTime_, vector<double>) };
        inline DataItem& setMaxCPUTime(const vector<double> & maxCPUTime) { DARABONBA_PTR_SET_VALUE(maxCPUTime_, maxCPUTime) };
        inline DataItem& setMaxCPUTime(vector<double> && maxCPUTime) { DARABONBA_PTR_SET_RVALUE(maxCPUTime_, maxCPUTime) };


        // maxDocExamined Field Functions 
        bool hasMaxDocExamined() const { return this->maxDocExamined_ != nullptr;};
        void deleteMaxDocExamined() { this->maxDocExamined_ = nullptr;};
        inline const vector<int64_t> & getMaxDocExamined() const { DARABONBA_PTR_GET_CONST(maxDocExamined_, vector<int64_t>) };
        inline vector<int64_t> getMaxDocExamined() { DARABONBA_PTR_GET(maxDocExamined_, vector<int64_t>) };
        inline DataItem& setMaxDocExamined(const vector<int64_t> & maxDocExamined) { DARABONBA_PTR_SET_VALUE(maxDocExamined_, maxDocExamined) };
        inline DataItem& setMaxDocExamined(vector<int64_t> && maxDocExamined) { DARABONBA_PTR_SET_RVALUE(maxDocExamined_, maxDocExamined) };


        // maxFrows Field Functions 
        bool hasMaxFrows() const { return this->maxFrows_ != nullptr;};
        void deleteMaxFrows() { this->maxFrows_ = nullptr;};
        inline const vector<int64_t> & getMaxFrows() const { DARABONBA_PTR_GET_CONST(maxFrows_, vector<int64_t>) };
        inline vector<int64_t> getMaxFrows() { DARABONBA_PTR_GET(maxFrows_, vector<int64_t>) };
        inline DataItem& setMaxFrows(const vector<int64_t> & maxFrows) { DARABONBA_PTR_SET_VALUE(maxFrows_, maxFrows) };
        inline DataItem& setMaxFrows(vector<int64_t> && maxFrows) { DARABONBA_PTR_SET_RVALUE(maxFrows_, maxFrows) };


        // maxIOWrites Field Functions 
        bool hasMaxIOWrites() const { return this->maxIOWrites_ != nullptr;};
        void deleteMaxIOWrites() { this->maxIOWrites_ = nullptr;};
        inline const vector<int64_t> & getMaxIOWrites() const { DARABONBA_PTR_GET_CONST(maxIOWrites_, vector<int64_t>) };
        inline vector<int64_t> getMaxIOWrites() { DARABONBA_PTR_GET(maxIOWrites_, vector<int64_t>) };
        inline DataItem& setMaxIOWrites(const vector<int64_t> & maxIOWrites) { DARABONBA_PTR_SET_VALUE(maxIOWrites_, maxIOWrites) };
        inline DataItem& setMaxIOWrites(vector<int64_t> && maxIOWrites) { DARABONBA_PTR_SET_RVALUE(maxIOWrites_, maxIOWrites) };


        // maxKeysExamined Field Functions 
        bool hasMaxKeysExamined() const { return this->maxKeysExamined_ != nullptr;};
        void deleteMaxKeysExamined() { this->maxKeysExamined_ = nullptr;};
        inline const vector<int64_t> & getMaxKeysExamined() const { DARABONBA_PTR_GET_CONST(maxKeysExamined_, vector<int64_t>) };
        inline vector<int64_t> getMaxKeysExamined() { DARABONBA_PTR_GET(maxKeysExamined_, vector<int64_t>) };
        inline DataItem& setMaxKeysExamined(const vector<int64_t> & maxKeysExamined) { DARABONBA_PTR_SET_VALUE(maxKeysExamined_, maxKeysExamined) };
        inline DataItem& setMaxKeysExamined(vector<int64_t> && maxKeysExamined) { DARABONBA_PTR_SET_RVALUE(maxKeysExamined_, maxKeysExamined) };


        // maxLastRowsCountAffected Field Functions 
        bool hasMaxLastRowsCountAffected() const { return this->maxLastRowsCountAffected_ != nullptr;};
        void deleteMaxLastRowsCountAffected() { this->maxLastRowsCountAffected_ = nullptr;};
        inline const vector<int64_t> & getMaxLastRowsCountAffected() const { DARABONBA_PTR_GET_CONST(maxLastRowsCountAffected_, vector<int64_t>) };
        inline vector<int64_t> getMaxLastRowsCountAffected() { DARABONBA_PTR_GET(maxLastRowsCountAffected_, vector<int64_t>) };
        inline DataItem& setMaxLastRowsCountAffected(const vector<int64_t> & maxLastRowsCountAffected) { DARABONBA_PTR_SET_VALUE(maxLastRowsCountAffected_, maxLastRowsCountAffected) };
        inline DataItem& setMaxLastRowsCountAffected(vector<int64_t> && maxLastRowsCountAffected) { DARABONBA_PTR_SET_RVALUE(maxLastRowsCountAffected_, maxLastRowsCountAffected) };


        // maxLockTime Field Functions 
        bool hasMaxLockTime() const { return this->maxLockTime_ != nullptr;};
        void deleteMaxLockTime() { this->maxLockTime_ = nullptr;};
        inline const vector<double> & getMaxLockTime() const { DARABONBA_PTR_GET_CONST(maxLockTime_, vector<double>) };
        inline vector<double> getMaxLockTime() { DARABONBA_PTR_GET(maxLockTime_, vector<double>) };
        inline DataItem& setMaxLockTime(const vector<double> & maxLockTime) { DARABONBA_PTR_SET_VALUE(maxLockTime_, maxLockTime) };
        inline DataItem& setMaxLockTime(vector<double> && maxLockTime) { DARABONBA_PTR_SET_RVALUE(maxLockTime_, maxLockTime) };


        // maxLogicalIOReads Field Functions 
        bool hasMaxLogicalIOReads() const { return this->maxLogicalIOReads_ != nullptr;};
        void deleteMaxLogicalIOReads() { this->maxLogicalIOReads_ = nullptr;};
        inline const vector<int64_t> & getMaxLogicalIOReads() const { DARABONBA_PTR_GET_CONST(maxLogicalIOReads_, vector<int64_t>) };
        inline vector<int64_t> getMaxLogicalIOReads() { DARABONBA_PTR_GET(maxLogicalIOReads_, vector<int64_t>) };
        inline DataItem& setMaxLogicalIOReads(const vector<int64_t> & maxLogicalIOReads) { DARABONBA_PTR_SET_VALUE(maxLogicalIOReads_, maxLogicalIOReads) };
        inline DataItem& setMaxLogicalIOReads(vector<int64_t> && maxLogicalIOReads) { DARABONBA_PTR_SET_RVALUE(maxLogicalIOReads_, maxLogicalIOReads) };


        // maxPhysicalIOReads Field Functions 
        bool hasMaxPhysicalIOReads() const { return this->maxPhysicalIOReads_ != nullptr;};
        void deleteMaxPhysicalIOReads() { this->maxPhysicalIOReads_ = nullptr;};
        inline const vector<int64_t> & getMaxPhysicalIOReads() const { DARABONBA_PTR_GET_CONST(maxPhysicalIOReads_, vector<int64_t>) };
        inline vector<int64_t> getMaxPhysicalIOReads() { DARABONBA_PTR_GET(maxPhysicalIOReads_, vector<int64_t>) };
        inline DataItem& setMaxPhysicalIOReads(const vector<int64_t> & maxPhysicalIOReads) { DARABONBA_PTR_SET_VALUE(maxPhysicalIOReads_, maxPhysicalIOReads) };
        inline DataItem& setMaxPhysicalIOReads(vector<int64_t> && maxPhysicalIOReads) { DARABONBA_PTR_SET_RVALUE(maxPhysicalIOReads_, maxPhysicalIOReads) };


        // maxReturnNum Field Functions 
        bool hasMaxReturnNum() const { return this->maxReturnNum_ != nullptr;};
        void deleteMaxReturnNum() { this->maxReturnNum_ = nullptr;};
        inline const vector<int64_t> & getMaxReturnNum() const { DARABONBA_PTR_GET_CONST(maxReturnNum_, vector<int64_t>) };
        inline vector<int64_t> getMaxReturnNum() { DARABONBA_PTR_GET(maxReturnNum_, vector<int64_t>) };
        inline DataItem& setMaxReturnNum(const vector<int64_t> & maxReturnNum) { DARABONBA_PTR_SET_VALUE(maxReturnNum_, maxReturnNum) };
        inline DataItem& setMaxReturnNum(vector<int64_t> && maxReturnNum) { DARABONBA_PTR_SET_RVALUE(maxReturnNum_, maxReturnNum) };


        // maxRows Field Functions 
        bool hasMaxRows() const { return this->maxRows_ != nullptr;};
        void deleteMaxRows() { this->maxRows_ = nullptr;};
        inline const vector<int64_t> & getMaxRows() const { DARABONBA_PTR_GET_CONST(maxRows_, vector<int64_t>) };
        inline vector<int64_t> getMaxRows() { DARABONBA_PTR_GET(maxRows_, vector<int64_t>) };
        inline DataItem& setMaxRows(const vector<int64_t> & maxRows) { DARABONBA_PTR_SET_VALUE(maxRows_, maxRows) };
        inline DataItem& setMaxRows(vector<int64_t> && maxRows) { DARABONBA_PTR_SET_RVALUE(maxRows_, maxRows) };


        // maxRowsCountAffected Field Functions 
        bool hasMaxRowsCountAffected() const { return this->maxRowsCountAffected_ != nullptr;};
        void deleteMaxRowsCountAffected() { this->maxRowsCountAffected_ = nullptr;};
        inline const vector<int64_t> & getMaxRowsCountAffected() const { DARABONBA_PTR_GET_CONST(maxRowsCountAffected_, vector<int64_t>) };
        inline vector<int64_t> getMaxRowsCountAffected() { DARABONBA_PTR_GET(maxRowsCountAffected_, vector<int64_t>) };
        inline DataItem& setMaxRowsCountAffected(const vector<int64_t> & maxRowsCountAffected) { DARABONBA_PTR_SET_VALUE(maxRowsCountAffected_, maxRowsCountAffected) };
        inline DataItem& setMaxRowsCountAffected(vector<int64_t> && maxRowsCountAffected) { DARABONBA_PTR_SET_RVALUE(maxRowsCountAffected_, maxRowsCountAffected) };


        // maxRowsExamined Field Functions 
        bool hasMaxRowsExamined() const { return this->maxRowsExamined_ != nullptr;};
        void deleteMaxRowsExamined() { this->maxRowsExamined_ = nullptr;};
        inline const vector<int64_t> & getMaxRowsExamined() const { DARABONBA_PTR_GET_CONST(maxRowsExamined_, vector<int64_t>) };
        inline vector<int64_t> getMaxRowsExamined() { DARABONBA_PTR_GET(maxRowsExamined_, vector<int64_t>) };
        inline DataItem& setMaxRowsExamined(const vector<int64_t> & maxRowsExamined) { DARABONBA_PTR_SET_VALUE(maxRowsExamined_, maxRowsExamined) };
        inline DataItem& setMaxRowsExamined(vector<int64_t> && maxRowsExamined) { DARABONBA_PTR_SET_RVALUE(maxRowsExamined_, maxRowsExamined) };


        // maxRowsSent Field Functions 
        bool hasMaxRowsSent() const { return this->maxRowsSent_ != nullptr;};
        void deleteMaxRowsSent() { this->maxRowsSent_ = nullptr;};
        inline const vector<int64_t> & getMaxRowsSent() const { DARABONBA_PTR_GET_CONST(maxRowsSent_, vector<int64_t>) };
        inline vector<int64_t> getMaxRowsSent() { DARABONBA_PTR_GET(maxRowsSent_, vector<int64_t>) };
        inline DataItem& setMaxRowsSent(const vector<int64_t> & maxRowsSent) { DARABONBA_PTR_SET_VALUE(maxRowsSent_, maxRowsSent) };
        inline DataItem& setMaxRowsSent(vector<int64_t> && maxRowsSent) { DARABONBA_PTR_SET_RVALUE(maxRowsSent_, maxRowsSent) };


        // maxRt Field Functions 
        bool hasMaxRt() const { return this->maxRt_ != nullptr;};
        void deleteMaxRt() { this->maxRt_ = nullptr;};
        inline const vector<double> & getMaxRt() const { DARABONBA_PTR_GET_CONST(maxRt_, vector<double>) };
        inline vector<double> getMaxRt() { DARABONBA_PTR_GET(maxRt_, vector<double>) };
        inline DataItem& setMaxRt(const vector<double> & maxRt) { DARABONBA_PTR_SET_VALUE(maxRt_, maxRt) };
        inline DataItem& setMaxRt(vector<double> && maxRt) { DARABONBA_PTR_SET_RVALUE(maxRt_, maxRt) };


        // maxScnt Field Functions 
        bool hasMaxScnt() const { return this->maxScnt_ != nullptr;};
        void deleteMaxScnt() { this->maxScnt_ = nullptr;};
        inline const vector<int64_t> & getMaxScnt() const { DARABONBA_PTR_GET_CONST(maxScnt_, vector<int64_t>) };
        inline vector<int64_t> getMaxScnt() { DARABONBA_PTR_GET(maxScnt_, vector<int64_t>) };
        inline DataItem& setMaxScnt(const vector<int64_t> & maxScnt) { DARABONBA_PTR_SET_VALUE(maxScnt_, maxScnt) };
        inline DataItem& setMaxScnt(vector<int64_t> && maxScnt) { DARABONBA_PTR_SET_RVALUE(maxScnt_, maxScnt) };


        // physicalIOReads Field Functions 
        bool hasPhysicalIOReads() const { return this->physicalIOReads_ != nullptr;};
        void deletePhysicalIOReads() { this->physicalIOReads_ = nullptr;};
        inline const vector<int64_t> & getPhysicalIOReads() const { DARABONBA_PTR_GET_CONST(physicalIOReads_, vector<int64_t>) };
        inline vector<int64_t> getPhysicalIOReads() { DARABONBA_PTR_GET(physicalIOReads_, vector<int64_t>) };
        inline DataItem& setPhysicalIOReads(const vector<int64_t> & physicalIOReads) { DARABONBA_PTR_SET_VALUE(physicalIOReads_, physicalIOReads) };
        inline DataItem& setPhysicalIOReads(vector<int64_t> && physicalIOReads) { DARABONBA_PTR_SET_RVALUE(physicalIOReads_, physicalIOReads) };


        // returnNum Field Functions 
        bool hasReturnNum() const { return this->returnNum_ != nullptr;};
        void deleteReturnNum() { this->returnNum_ = nullptr;};
        inline const vector<int64_t> & getReturnNum() const { DARABONBA_PTR_GET_CONST(returnNum_, vector<int64_t>) };
        inline vector<int64_t> getReturnNum() { DARABONBA_PTR_GET(returnNum_, vector<int64_t>) };
        inline DataItem& setReturnNum(const vector<int64_t> & returnNum) { DARABONBA_PTR_SET_VALUE(returnNum_, returnNum) };
        inline DataItem& setReturnNum(vector<int64_t> && returnNum) { DARABONBA_PTR_SET_RVALUE(returnNum_, returnNum) };


        // rows Field Functions 
        bool hasRows() const { return this->rows_ != nullptr;};
        void deleteRows() { this->rows_ = nullptr;};
        inline const vector<int64_t> & getRows() const { DARABONBA_PTR_GET_CONST(rows_, vector<int64_t>) };
        inline vector<int64_t> getRows() { DARABONBA_PTR_GET(rows_, vector<int64_t>) };
        inline DataItem& setRows(const vector<int64_t> & rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };
        inline DataItem& setRows(vector<int64_t> && rows) { DARABONBA_PTR_SET_RVALUE(rows_, rows) };


        // rowsCountAffected Field Functions 
        bool hasRowsCountAffected() const { return this->rowsCountAffected_ != nullptr;};
        void deleteRowsCountAffected() { this->rowsCountAffected_ = nullptr;};
        inline const vector<int64_t> & getRowsCountAffected() const { DARABONBA_PTR_GET_CONST(rowsCountAffected_, vector<int64_t>) };
        inline vector<int64_t> getRowsCountAffected() { DARABONBA_PTR_GET(rowsCountAffected_, vector<int64_t>) };
        inline DataItem& setRowsCountAffected(const vector<int64_t> & rowsCountAffected) { DARABONBA_PTR_SET_VALUE(rowsCountAffected_, rowsCountAffected) };
        inline DataItem& setRowsCountAffected(vector<int64_t> && rowsCountAffected) { DARABONBA_PTR_SET_RVALUE(rowsCountAffected_, rowsCountAffected) };


        // rowsExamined Field Functions 
        bool hasRowsExamined() const { return this->rowsExamined_ != nullptr;};
        void deleteRowsExamined() { this->rowsExamined_ = nullptr;};
        inline const vector<int64_t> & getRowsExamined() const { DARABONBA_PTR_GET_CONST(rowsExamined_, vector<int64_t>) };
        inline vector<int64_t> getRowsExamined() { DARABONBA_PTR_GET(rowsExamined_, vector<int64_t>) };
        inline DataItem& setRowsExamined(const vector<int64_t> & rowsExamined) { DARABONBA_PTR_SET_VALUE(rowsExamined_, rowsExamined) };
        inline DataItem& setRowsExamined(vector<int64_t> && rowsExamined) { DARABONBA_PTR_SET_RVALUE(rowsExamined_, rowsExamined) };


        // rowsSent Field Functions 
        bool hasRowsSent() const { return this->rowsSent_ != nullptr;};
        void deleteRowsSent() { this->rowsSent_ = nullptr;};
        inline const vector<int64_t> & getRowsSent() const { DARABONBA_PTR_GET_CONST(rowsSent_, vector<int64_t>) };
        inline vector<int64_t> getRowsSent() { DARABONBA_PTR_GET(rowsSent_, vector<int64_t>) };
        inline DataItem& setRowsSent(const vector<int64_t> & rowsSent) { DARABONBA_PTR_SET_VALUE(rowsSent_, rowsSent) };
        inline DataItem& setRowsSent(vector<int64_t> && rowsSent) { DARABONBA_PTR_SET_RVALUE(rowsSent_, rowsSent) };


        // rt Field Functions 
        bool hasRt() const { return this->rt_ != nullptr;};
        void deleteRt() { this->rt_ = nullptr;};
        inline const vector<double> & getRt() const { DARABONBA_PTR_GET_CONST(rt_, vector<double>) };
        inline vector<double> getRt() { DARABONBA_PTR_GET(rt_, vector<double>) };
        inline DataItem& setRt(const vector<double> & rt) { DARABONBA_PTR_SET_VALUE(rt_, rt) };
        inline DataItem& setRt(vector<double> && rt) { DARABONBA_PTR_SET_RVALUE(rt_, rt) };


        // scnt Field Functions 
        bool hasScnt() const { return this->scnt_ != nullptr;};
        void deleteScnt() { this->scnt_ = nullptr;};
        inline const vector<int64_t> & getScnt() const { DARABONBA_PTR_GET_CONST(scnt_, vector<int64_t>) };
        inline vector<int64_t> getScnt() { DARABONBA_PTR_GET(scnt_, vector<int64_t>) };
        inline DataItem& setScnt(const vector<int64_t> & scnt) { DARABONBA_PTR_SET_VALUE(scnt_, scnt) };
        inline DataItem& setScnt(vector<int64_t> && scnt) { DARABONBA_PTR_SET_RVALUE(scnt_, scnt) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
        inline DataItem& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
        inline DataItem& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


        // ts Field Functions 
        bool hasTs() const { return this->ts_ != nullptr;};
        void deleteTs() { this->ts_ = nullptr;};
        inline const vector<int64_t> & getTs() const { DARABONBA_PTR_GET_CONST(ts_, vector<int64_t>) };
        inline vector<int64_t> getTs() { DARABONBA_PTR_GET(ts_, vector<int64_t>) };
        inline DataItem& setTs(const vector<int64_t> & ts) { DARABONBA_PTR_SET_VALUE(ts_, ts) };
        inline DataItem& setTs(vector<int64_t> && ts) { DARABONBA_PTR_SET_RVALUE(ts_, ts) };


        // tsEnd Field Functions 
        bool hasTsEnd() const { return this->tsEnd_ != nullptr;};
        void deleteTsEnd() { this->tsEnd_ = nullptr;};
        inline const vector<int64_t> & getTsEnd() const { DARABONBA_PTR_GET_CONST(tsEnd_, vector<int64_t>) };
        inline vector<int64_t> getTsEnd() { DARABONBA_PTR_GET(tsEnd_, vector<int64_t>) };
        inline DataItem& setTsEnd(const vector<int64_t> & tsEnd) { DARABONBA_PTR_SET_VALUE(tsEnd_, tsEnd) };
        inline DataItem& setTsEnd(vector<int64_t> && tsEnd) { DARABONBA_PTR_SET_RVALUE(tsEnd_, tsEnd) };


      protected:
        shared_ptr<vector<double>> avgCPUTime_ {};
        shared_ptr<vector<double>> avgDocExamined_ {};
        shared_ptr<vector<double>> avgFrows_ {};
        shared_ptr<vector<double>> avgIOWrites_ {};
        shared_ptr<vector<double>> avgKeysExamined_ {};
        shared_ptr<vector<double>> avgLastRowsCountAffected_ {};
        shared_ptr<vector<double>> avgLockTime_ {};
        shared_ptr<vector<double>> avgLogicalIOReads_ {};
        shared_ptr<vector<double>> avgPhysicalIOReads_ {};
        shared_ptr<vector<double>> avgReturnNum_ {};
        shared_ptr<vector<double>> avgRows_ {};
        shared_ptr<vector<double>> avgRowsCountAffected_ {};
        shared_ptr<vector<double>> avgRowsExamined_ {};
        shared_ptr<vector<double>> avgRowsSent_ {};
        shared_ptr<vector<double>> avgRt_ {};
        shared_ptr<vector<double>> avgScnt_ {};
        shared_ptr<vector<double>> CPUTime_ {};
        shared_ptr<vector<int64_t>> count_ {};
        shared_ptr<vector<int64_t>> docExamined_ {};
        shared_ptr<vector<int64_t>> frows_ {};
        shared_ptr<vector<int64_t>> IOWrites_ {};
        shared_ptr<vector<DataItem::Item>> item_ {};
        shared_ptr<vector<int64_t>> keysExamined_ {};
        shared_ptr<vector<int64_t>> lastRowsCountAffected_ {};
        shared_ptr<vector<double>> lockTime_ {};
        shared_ptr<vector<int64_t>> logicalIOReads_ {};
        shared_ptr<vector<double>> maxCPUTime_ {};
        shared_ptr<vector<int64_t>> maxDocExamined_ {};
        shared_ptr<vector<int64_t>> maxFrows_ {};
        shared_ptr<vector<int64_t>> maxIOWrites_ {};
        shared_ptr<vector<int64_t>> maxKeysExamined_ {};
        shared_ptr<vector<int64_t>> maxLastRowsCountAffected_ {};
        shared_ptr<vector<double>> maxLockTime_ {};
        shared_ptr<vector<int64_t>> maxLogicalIOReads_ {};
        shared_ptr<vector<int64_t>> maxPhysicalIOReads_ {};
        shared_ptr<vector<int64_t>> maxReturnNum_ {};
        shared_ptr<vector<int64_t>> maxRows_ {};
        shared_ptr<vector<int64_t>> maxRowsCountAffected_ {};
        shared_ptr<vector<int64_t>> maxRowsExamined_ {};
        shared_ptr<vector<int64_t>> maxRowsSent_ {};
        shared_ptr<vector<double>> maxRt_ {};
        shared_ptr<vector<int64_t>> maxScnt_ {};
        shared_ptr<vector<int64_t>> physicalIOReads_ {};
        shared_ptr<vector<int64_t>> returnNum_ {};
        shared_ptr<vector<int64_t>> rows_ {};
        shared_ptr<vector<int64_t>> rowsCountAffected_ {};
        shared_ptr<vector<int64_t>> rowsExamined_ {};
        shared_ptr<vector<int64_t>> rowsSent_ {};
        shared_ptr<vector<double>> rt_ {};
        shared_ptr<vector<int64_t>> scnt_ {};
        shared_ptr<int64_t> total_ {};
        shared_ptr<int64_t> totalCount_ {};
        shared_ptr<vector<int64_t>> ts_ {};
        shared_ptr<vector<int64_t>> tsEnd_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->isFinish_ == nullptr && this->message_ == nullptr && this->requestKey_ == nullptr && this->resultId_ == nullptr
        && this->state_ == nullptr && this->timestamp_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const Data::DataItem & getData() const { DARABONBA_PTR_GET_CONST(data_, Data::DataItem) };
      inline Data::DataItem getData() { DARABONBA_PTR_GET(data_, Data::DataItem) };
      inline Data& setData(const Data::DataItem & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Data& setData(Data::DataItem && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline int32_t getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, 0) };
      inline Data& setErrorCode(int32_t errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // isFinish Field Functions 
      bool hasIsFinish() const { return this->isFinish_ != nullptr;};
      void deleteIsFinish() { this->isFinish_ = nullptr;};
      inline bool getIsFinish() const { DARABONBA_PTR_GET_DEFAULT(isFinish_, false) };
      inline Data& setIsFinish(bool isFinish) { DARABONBA_PTR_SET_VALUE(isFinish_, isFinish) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // requestKey Field Functions 
      bool hasRequestKey() const { return this->requestKey_ != nullptr;};
      void deleteRequestKey() { this->requestKey_ = nullptr;};
      inline string getRequestKey() const { DARABONBA_PTR_GET_DEFAULT(requestKey_, "") };
      inline Data& setRequestKey(string requestKey) { DARABONBA_PTR_SET_VALUE(requestKey_, requestKey) };


      // resultId Field Functions 
      bool hasResultId() const { return this->resultId_ != nullptr;};
      void deleteResultId() { this->resultId_ = nullptr;};
      inline string getResultId() const { DARABONBA_PTR_GET_DEFAULT(resultId_, "") };
      inline Data& setResultId(string resultId) { DARABONBA_PTR_SET_VALUE(resultId_, resultId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Data& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      shared_ptr<Data::DataItem> data_ {};
      shared_ptr<int32_t> errorCode_ {};
      shared_ptr<bool> isFinish_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> requestKey_ {};
      shared_ptr<string> resultId_ {};
      shared_ptr<string> state_ {};
      shared_ptr<int64_t> timestamp_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSlowLogHistogramAsyncResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeSlowLogHistogramAsyncResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeSlowLogHistogramAsyncResponseBody::Data) };
    inline DescribeSlowLogHistogramAsyncResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeSlowLogHistogramAsyncResponseBody::Data) };
    inline DescribeSlowLogHistogramAsyncResponseBody& setData(const DescribeSlowLogHistogramAsyncResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSlowLogHistogramAsyncResponseBody& setData(DescribeSlowLogHistogramAsyncResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSlowLogHistogramAsyncResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlowLogHistogramAsyncResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSlowLogHistogramAsyncResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    // AsyncResult<Histogram>。
    shared_ptr<DescribeSlowLogHistogramAsyncResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
