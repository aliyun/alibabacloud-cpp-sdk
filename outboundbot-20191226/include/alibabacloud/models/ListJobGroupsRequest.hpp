// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListJobGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AsyncQuery, asyncQuery_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobGroupStatusFilter, jobGroupStatusFilter_);
      DARABONBA_PTR_TO_JSON(OnlyMinConcurrencyEnabled, onlyMinConcurrencyEnabled_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchText, searchText_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AsyncQuery, asyncQuery_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobGroupStatusFilter, jobGroupStatusFilter_);
      DARABONBA_PTR_FROM_JSON(OnlyMinConcurrencyEnabled, onlyMinConcurrencyEnabled_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchText, searchText_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListJobGroupsRequest() = default ;
    ListJobGroupsRequest(const ListJobGroupsRequest &) = default ;
    ListJobGroupsRequest(ListJobGroupsRequest &&) = default ;
    ListJobGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobGroupsRequest() = default ;
    ListJobGroupsRequest& operator=(const ListJobGroupsRequest &) = default ;
    ListJobGroupsRequest& operator=(ListJobGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asyncQuery_ == nullptr
        && return this->endTime_ == nullptr && return this->instanceId_ == nullptr && return this->jobGroupStatusFilter_ == nullptr && return this->onlyMinConcurrencyEnabled_ == nullptr && return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->searchText_ == nullptr && return this->startTime_ == nullptr; };
    // asyncQuery Field Functions 
    bool hasAsyncQuery() const { return this->asyncQuery_ != nullptr;};
    void deleteAsyncQuery() { this->asyncQuery_ = nullptr;};
    inline bool asyncQuery() const { DARABONBA_PTR_GET_DEFAULT(asyncQuery_, false) };
    inline ListJobGroupsRequest& setAsyncQuery(bool asyncQuery) { DARABONBA_PTR_SET_VALUE(asyncQuery_, asyncQuery) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListJobGroupsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListJobGroupsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobGroupStatusFilter Field Functions 
    bool hasJobGroupStatusFilter() const { return this->jobGroupStatusFilter_ != nullptr;};
    void deleteJobGroupStatusFilter() { this->jobGroupStatusFilter_ = nullptr;};
    inline string jobGroupStatusFilter() const { DARABONBA_PTR_GET_DEFAULT(jobGroupStatusFilter_, "") };
    inline ListJobGroupsRequest& setJobGroupStatusFilter(string jobGroupStatusFilter) { DARABONBA_PTR_SET_VALUE(jobGroupStatusFilter_, jobGroupStatusFilter) };


    // onlyMinConcurrencyEnabled Field Functions 
    bool hasOnlyMinConcurrencyEnabled() const { return this->onlyMinConcurrencyEnabled_ != nullptr;};
    void deleteOnlyMinConcurrencyEnabled() { this->onlyMinConcurrencyEnabled_ = nullptr;};
    inline bool onlyMinConcurrencyEnabled() const { DARABONBA_PTR_GET_DEFAULT(onlyMinConcurrencyEnabled_, false) };
    inline ListJobGroupsRequest& setOnlyMinConcurrencyEnabled(bool onlyMinConcurrencyEnabled) { DARABONBA_PTR_SET_VALUE(onlyMinConcurrencyEnabled_, onlyMinConcurrencyEnabled) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListJobGroupsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListJobGroupsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchText Field Functions 
    bool hasSearchText() const { return this->searchText_ != nullptr;};
    void deleteSearchText() { this->searchText_ = nullptr;};
    inline string searchText() const { DARABONBA_PTR_GET_DEFAULT(searchText_, "") };
    inline ListJobGroupsRequest& setSearchText(string searchText) { DARABONBA_PTR_SET_VALUE(searchText_, searchText) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListJobGroupsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<bool> asyncQuery_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> jobGroupStatusFilter_ = nullptr;
    std::shared_ptr<bool> onlyMinConcurrencyEnabled_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> searchText_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
