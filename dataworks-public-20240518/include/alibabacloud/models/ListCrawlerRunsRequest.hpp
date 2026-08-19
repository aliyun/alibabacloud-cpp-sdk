// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCRAWLERRUNSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCRAWLERRUNSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListCrawlerRunsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCrawlerRunsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartTimeFrom, startTimeFrom_);
      DARABONBA_PTR_TO_JSON(StartTimeTo, startTimeTo_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListCrawlerRunsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartTimeFrom, startTimeFrom_);
      DARABONBA_PTR_FROM_JSON(StartTimeTo, startTimeTo_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListCrawlerRunsRequest() = default ;
    ListCrawlerRunsRequest(const ListCrawlerRunsRequest &) = default ;
    ListCrawlerRunsRequest(ListCrawlerRunsRequest &&) = default ;
    ListCrawlerRunsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCrawlerRunsRequest() = default ;
    ListCrawlerRunsRequest& operator=(const ListCrawlerRunsRequest &) = default ;
    ListCrawlerRunsRequest& operator=(ListCrawlerRunsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->startTimeFrom_ == nullptr && this->startTimeTo_ == nullptr && this->status_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListCrawlerRunsRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCrawlerRunsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCrawlerRunsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTimeFrom Field Functions 
    bool hasStartTimeFrom() const { return this->startTimeFrom_ != nullptr;};
    void deleteStartTimeFrom() { this->startTimeFrom_ = nullptr;};
    inline int64_t getStartTimeFrom() const { DARABONBA_PTR_GET_DEFAULT(startTimeFrom_, 0L) };
    inline ListCrawlerRunsRequest& setStartTimeFrom(int64_t startTimeFrom) { DARABONBA_PTR_SET_VALUE(startTimeFrom_, startTimeFrom) };


    // startTimeTo Field Functions 
    bool hasStartTimeTo() const { return this->startTimeTo_ != nullptr;};
    void deleteStartTimeTo() { this->startTimeTo_ = nullptr;};
    inline int64_t getStartTimeTo() const { DARABONBA_PTR_GET_DEFAULT(startTimeTo_, 0L) };
    inline ListCrawlerRunsRequest& setStartTimeTo(int64_t startTimeTo) { DARABONBA_PTR_SET_VALUE(startTimeTo_, startTimeTo) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListCrawlerRunsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the metadata crawler. You can call ListCrawlers to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // The page number. Pages start from 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 20. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The lower bound of the run start time, in millisecond-level UNIX timestamp. The value must be within the last 30 days. If not specified, the default value is 30 days before the current time.
    shared_ptr<int64_t> startTimeFrom_ {};
    // The upper bound of the run start time, in millisecond-level UNIX timestamp. The value must be within the last 30 days. If not specified, the default value is the current time.
    shared_ptr<int64_t> startTimeTo_ {};
    // The run status. Valid values: WAITING, RUNNING, SUCCESS, ERROR, SHUTDOWN.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
