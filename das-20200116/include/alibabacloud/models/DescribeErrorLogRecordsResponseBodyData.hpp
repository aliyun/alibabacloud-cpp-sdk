// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEERRORLOGRECORDSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEERRORLOGRECORDSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeErrorLogRecordsResponseBodyDataLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeErrorLogRecordsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeErrorLogRecordsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ItemsNumbers, itemsNumbers_);
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(MaxRecordsPerPage, maxRecordsPerPage_);
      DARABONBA_PTR_TO_JSON(PageNumbers, pageNumbers_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TotalRecords, totalRecords_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeErrorLogRecordsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ItemsNumbers, itemsNumbers_);
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(MaxRecordsPerPage, maxRecordsPerPage_);
      DARABONBA_PTR_FROM_JSON(PageNumbers, pageNumbers_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TotalRecords, totalRecords_);
    };
    DescribeErrorLogRecordsResponseBodyData() = default ;
    DescribeErrorLogRecordsResponseBodyData(const DescribeErrorLogRecordsResponseBodyData &) = default ;
    DescribeErrorLogRecordsResponseBodyData(DescribeErrorLogRecordsResponseBodyData &&) = default ;
    DescribeErrorLogRecordsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeErrorLogRecordsResponseBodyData() = default ;
    DescribeErrorLogRecordsResponseBodyData& operator=(const DescribeErrorLogRecordsResponseBodyData &) = default ;
    DescribeErrorLogRecordsResponseBodyData& operator=(DescribeErrorLogRecordsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->itemsNumbers_ != nullptr && this->logs_ != nullptr && this->maxRecordsPerPage_ != nullptr && this->pageNumbers_ != nullptr && this->startTime_ != nullptr
        && this->totalRecords_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeErrorLogRecordsResponseBodyData& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // itemsNumbers Field Functions 
    bool hasItemsNumbers() const { return this->itemsNumbers_ != nullptr;};
    void deleteItemsNumbers() { this->itemsNumbers_ = nullptr;};
    inline int64_t itemsNumbers() const { DARABONBA_PTR_GET_DEFAULT(itemsNumbers_, 0L) };
    inline DescribeErrorLogRecordsResponseBodyData& setItemsNumbers(int64_t itemsNumbers) { DARABONBA_PTR_SET_VALUE(itemsNumbers_, itemsNumbers) };


    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<Models::DescribeErrorLogRecordsResponseBodyDataLogs> & logs() const { DARABONBA_PTR_GET_CONST(logs_, vector<Models::DescribeErrorLogRecordsResponseBodyDataLogs>) };
    inline vector<Models::DescribeErrorLogRecordsResponseBodyDataLogs> logs() { DARABONBA_PTR_GET(logs_, vector<Models::DescribeErrorLogRecordsResponseBodyDataLogs>) };
    inline DescribeErrorLogRecordsResponseBodyData& setLogs(const vector<Models::DescribeErrorLogRecordsResponseBodyDataLogs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline DescribeErrorLogRecordsResponseBodyData& setLogs(vector<Models::DescribeErrorLogRecordsResponseBodyDataLogs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // maxRecordsPerPage Field Functions 
    bool hasMaxRecordsPerPage() const { return this->maxRecordsPerPage_ != nullptr;};
    void deleteMaxRecordsPerPage() { this->maxRecordsPerPage_ = nullptr;};
    inline int32_t maxRecordsPerPage() const { DARABONBA_PTR_GET_DEFAULT(maxRecordsPerPage_, 0) };
    inline DescribeErrorLogRecordsResponseBodyData& setMaxRecordsPerPage(int32_t maxRecordsPerPage) { DARABONBA_PTR_SET_VALUE(maxRecordsPerPage_, maxRecordsPerPage) };


    // pageNumbers Field Functions 
    bool hasPageNumbers() const { return this->pageNumbers_ != nullptr;};
    void deletePageNumbers() { this->pageNumbers_ = nullptr;};
    inline int32_t pageNumbers() const { DARABONBA_PTR_GET_DEFAULT(pageNumbers_, 0) };
    inline DescribeErrorLogRecordsResponseBodyData& setPageNumbers(int32_t pageNumbers) { DARABONBA_PTR_SET_VALUE(pageNumbers_, pageNumbers) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeErrorLogRecordsResponseBodyData& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // totalRecords Field Functions 
    bool hasTotalRecords() const { return this->totalRecords_ != nullptr;};
    void deleteTotalRecords() { this->totalRecords_ = nullptr;};
    inline int64_t totalRecords() const { DARABONBA_PTR_GET_DEFAULT(totalRecords_, 0L) };
    inline DescribeErrorLogRecordsResponseBodyData& setTotalRecords(int64_t totalRecords) { DARABONBA_PTR_SET_VALUE(totalRecords_, totalRecords) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int64_t> itemsNumbers_ = nullptr;
    std::shared_ptr<vector<Models::DescribeErrorLogRecordsResponseBodyDataLogs>> logs_ = nullptr;
    std::shared_ptr<int32_t> maxRecordsPerPage_ = nullptr;
    std::shared_ptr<int32_t> pageNumbers_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<int64_t> totalRecords_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
