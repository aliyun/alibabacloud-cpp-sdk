// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVERECORDFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVERECORDFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLiveRecordFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRecordFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(JobIds, jobIds_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RecordFormat, recordFormat_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveRecordFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(JobIds, jobIds_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RecordFormat, recordFormat_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListLiveRecordFilesRequest() = default ;
    ListLiveRecordFilesRequest(const ListLiveRecordFilesRequest &) = default ;
    ListLiveRecordFilesRequest(ListLiveRecordFilesRequest &&) = default ;
    ListLiveRecordFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRecordFilesRequest() = default ;
    ListLiveRecordFilesRequest& operator=(const ListLiveRecordFilesRequest &) = default ;
    ListLiveRecordFilesRequest& operator=(ListLiveRecordFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->jobIds_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->recordFormat_ != nullptr && this->sortBy_ != nullptr
        && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListLiveRecordFilesRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // jobIds Field Functions 
    bool hasJobIds() const { return this->jobIds_ != nullptr;};
    void deleteJobIds() { this->jobIds_ = nullptr;};
    inline const vector<string> & jobIds() const { DARABONBA_PTR_GET_CONST(jobIds_, vector<string>) };
    inline vector<string> jobIds() { DARABONBA_PTR_GET(jobIds_, vector<string>) };
    inline ListLiveRecordFilesRequest& setJobIds(const vector<string> & jobIds) { DARABONBA_PTR_SET_VALUE(jobIds_, jobIds) };
    inline ListLiveRecordFilesRequest& setJobIds(vector<string> && jobIds) { DARABONBA_PTR_SET_RVALUE(jobIds_, jobIds) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListLiveRecordFilesRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListLiveRecordFilesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // recordFormat Field Functions 
    bool hasRecordFormat() const { return this->recordFormat_ != nullptr;};
    void deleteRecordFormat() { this->recordFormat_ = nullptr;};
    inline string recordFormat() const { DARABONBA_PTR_GET_DEFAULT(recordFormat_, "") };
    inline ListLiveRecordFilesRequest& setRecordFormat(string recordFormat) { DARABONBA_PTR_SET_VALUE(recordFormat_, recordFormat) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListLiveRecordFilesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListLiveRecordFilesRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range to query. The maximum time range to query is four days. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The list of job IDs.
    std::shared_ptr<vector<string>> jobIds_ = nullptr;
    // The page number of the page to return. Default value: 1.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries per page. Valid values: 5 to 30. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The format of the recording file. Valid values:
    // 
    // M3U8, FLV, and MP4
    std::shared_ptr<string> recordFormat_ = nullptr;
    // The sorting order of the index files by creation time. Valid values:
    // 
    // asc: The query results are displayed in ascending order. This is the default value.
    // 
    // desc: The query results are displayed in descending order.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
