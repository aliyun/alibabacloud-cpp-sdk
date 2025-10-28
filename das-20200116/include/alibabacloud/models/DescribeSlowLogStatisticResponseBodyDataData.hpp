// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGSTATISTICRESPONSEBODYDATADATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGSTATISTICRESPONSEBODYDATADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSlowLogStatisticResponseBodyDataDataLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSlowLogStatisticResponseBodyDataData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogStatisticResponseBodyDataData& obj) { 
      DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_TO_JSON(DbInstanceName, dbInstanceName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ItemsNumbers, itemsNumbers_);
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(MaxRecordsPerPage, maxRecordsPerPage_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(PageNumbers, pageNumbers_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TotalRecords, totalRecords_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogStatisticResponseBodyDataData& obj) { 
      DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_FROM_JSON(DbInstanceName, dbInstanceName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ItemsNumbers, itemsNumbers_);
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(MaxRecordsPerPage, maxRecordsPerPage_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(PageNumbers, pageNumbers_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TotalRecords, totalRecords_);
    };
    DescribeSlowLogStatisticResponseBodyDataData() = default ;
    DescribeSlowLogStatisticResponseBodyDataData(const DescribeSlowLogStatisticResponseBodyDataData &) = default ;
    DescribeSlowLogStatisticResponseBodyDataData(DescribeSlowLogStatisticResponseBodyDataData &&) = default ;
    DescribeSlowLogStatisticResponseBodyDataData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogStatisticResponseBodyDataData() = default ;
    DescribeSlowLogStatisticResponseBodyDataData& operator=(const DescribeSlowLogStatisticResponseBodyDataData &) = default ;
    DescribeSlowLogStatisticResponseBodyDataData& operator=(DescribeSlowLogStatisticResponseBodyDataData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbInstanceId_ == nullptr
        && return this->dbInstanceName_ == nullptr && return this->endTime_ == nullptr && return this->itemsNumbers_ == nullptr && return this->logs_ == nullptr && return this->maxRecordsPerPage_ == nullptr
        && return this->nodeId_ == nullptr && return this->pageNumbers_ == nullptr && return this->startTime_ == nullptr && return this->totalRecords_ == nullptr; };
    // dbInstanceId Field Functions 
    bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
    void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
    inline int64_t dbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataData& setDbInstanceId(int64_t dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


    // dbInstanceName Field Functions 
    bool hasDbInstanceName() const { return this->dbInstanceName_ != nullptr;};
    void deleteDbInstanceName() { this->dbInstanceName_ = nullptr;};
    inline string dbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceName_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataData& setDbInstanceName(string dbInstanceName) { DARABONBA_PTR_SET_VALUE(dbInstanceName_, dbInstanceName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataData& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // itemsNumbers Field Functions 
    bool hasItemsNumbers() const { return this->itemsNumbers_ != nullptr;};
    void deleteItemsNumbers() { this->itemsNumbers_ = nullptr;};
    inline int64_t itemsNumbers() const { DARABONBA_PTR_GET_DEFAULT(itemsNumbers_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataData& setItemsNumbers(int64_t itemsNumbers) { DARABONBA_PTR_SET_VALUE(itemsNumbers_, itemsNumbers) };


    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<Models::DescribeSlowLogStatisticResponseBodyDataDataLogs> & logs() const { DARABONBA_PTR_GET_CONST(logs_, vector<Models::DescribeSlowLogStatisticResponseBodyDataDataLogs>) };
    inline vector<Models::DescribeSlowLogStatisticResponseBodyDataDataLogs> logs() { DARABONBA_PTR_GET(logs_, vector<Models::DescribeSlowLogStatisticResponseBodyDataDataLogs>) };
    inline DescribeSlowLogStatisticResponseBodyDataData& setLogs(const vector<Models::DescribeSlowLogStatisticResponseBodyDataDataLogs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline DescribeSlowLogStatisticResponseBodyDataData& setLogs(vector<Models::DescribeSlowLogStatisticResponseBodyDataDataLogs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // maxRecordsPerPage Field Functions 
    bool hasMaxRecordsPerPage() const { return this->maxRecordsPerPage_ != nullptr;};
    void deleteMaxRecordsPerPage() { this->maxRecordsPerPage_ = nullptr;};
    inline int32_t maxRecordsPerPage() const { DARABONBA_PTR_GET_DEFAULT(maxRecordsPerPage_, 0) };
    inline DescribeSlowLogStatisticResponseBodyDataData& setMaxRecordsPerPage(int32_t maxRecordsPerPage) { DARABONBA_PTR_SET_VALUE(maxRecordsPerPage_, maxRecordsPerPage) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataData& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // pageNumbers Field Functions 
    bool hasPageNumbers() const { return this->pageNumbers_ != nullptr;};
    void deletePageNumbers() { this->pageNumbers_ = nullptr;};
    inline int32_t pageNumbers() const { DARABONBA_PTR_GET_DEFAULT(pageNumbers_, 0) };
    inline DescribeSlowLogStatisticResponseBodyDataData& setPageNumbers(int32_t pageNumbers) { DARABONBA_PTR_SET_VALUE(pageNumbers_, pageNumbers) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataData& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // totalRecords Field Functions 
    bool hasTotalRecords() const { return this->totalRecords_ != nullptr;};
    void deleteTotalRecords() { this->totalRecords_ = nullptr;};
    inline int64_t totalRecords() const { DARABONBA_PTR_GET_DEFAULT(totalRecords_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataData& setTotalRecords(int64_t totalRecords) { DARABONBA_PTR_SET_VALUE(totalRecords_, totalRecords) };


  protected:
    std::shared_ptr<int64_t> dbInstanceId_ = nullptr;
    std::shared_ptr<string> dbInstanceName_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int64_t> itemsNumbers_ = nullptr;
    std::shared_ptr<vector<Models::DescribeSlowLogStatisticResponseBodyDataDataLogs>> logs_ = nullptr;
    std::shared_ptr<int32_t> maxRecordsPerPage_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<int32_t> pageNumbers_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<int64_t> totalRecords_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
