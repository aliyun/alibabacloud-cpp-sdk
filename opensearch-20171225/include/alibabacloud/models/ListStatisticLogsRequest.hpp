// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTATISTICLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSTATISTICLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListStatisticLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStatisticLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(columns, columns_);
      DARABONBA_PTR_TO_JSON(distinct, distinct_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(sortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(stopTime, stopTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListStatisticLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(columns, columns_);
      DARABONBA_PTR_FROM_JSON(distinct, distinct_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(sortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(stopTime, stopTime_);
    };
    ListStatisticLogsRequest() = default ;
    ListStatisticLogsRequest(const ListStatisticLogsRequest &) = default ;
    ListStatisticLogsRequest(ListStatisticLogsRequest &&) = default ;
    ListStatisticLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStatisticLogsRequest() = default ;
    ListStatisticLogsRequest& operator=(const ListStatisticLogsRequest &) = default ;
    ListStatisticLogsRequest& operator=(ListStatisticLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columns_ == nullptr
        && return this->distinct_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->query_ == nullptr && return this->sortBy_ == nullptr
        && return this->startTime_ == nullptr && return this->stopTime_ == nullptr; };
    // columns Field Functions 
    bool hasColumns() const { return this->columns_ != nullptr;};
    void deleteColumns() { this->columns_ = nullptr;};
    inline string columns() const { DARABONBA_PTR_GET_DEFAULT(columns_, "") };
    inline ListStatisticLogsRequest& setColumns(string columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };


    // distinct Field Functions 
    bool hasDistinct() const { return this->distinct_ != nullptr;};
    void deleteDistinct() { this->distinct_ = nullptr;};
    inline bool distinct() const { DARABONBA_PTR_GET_DEFAULT(distinct_, false) };
    inline ListStatisticLogsRequest& setDistinct(bool distinct) { DARABONBA_PTR_SET_VALUE(distinct_, distinct) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListStatisticLogsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListStatisticLogsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListStatisticLogsRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListStatisticLogsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int32_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0) };
    inline ListStatisticLogsRequest& setStartTime(int32_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // stopTime Field Functions 
    bool hasStopTime() const { return this->stopTime_ != nullptr;};
    void deleteStopTime() { this->stopTime_ = nullptr;};
    inline int32_t stopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, 0) };
    inline ListStatisticLogsRequest& setStopTime(int32_t stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


  protected:
    // The fields to query. Format: columns=wordsTopPv.
    // 
    // For more information, see [Metrics in statistical reports](https://help.aliyun.com/document_detail/187665.html).
    std::shared_ptr<string> columns_ = nullptr;
    // Specifies whether to use the distinct clause.
    std::shared_ptr<bool> distinct_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The content of the query clause.
    std::shared_ptr<string> query_ = nullptr;
    // The content of the sort clause.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The beginning of the time range to query. The default value is the timestamp of 00:00:00 on the current day.
    std::shared_ptr<int32_t> startTime_ = nullptr;
    // The end of the time range to query. The default value is the timestamp of 24:00:00 on the current day.
    std::shared_ptr<int32_t> stopTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
