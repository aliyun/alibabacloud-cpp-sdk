// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMAGENTMONITORSESSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMAGENTMONITORSESSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListCustomAgentMonitorSessionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomAgentMonitorSessionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomAgentId, customAgentId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryType, queryType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomAgentMonitorSessionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomAgentId, customAgentId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListCustomAgentMonitorSessionsRequest() = default ;
    ListCustomAgentMonitorSessionsRequest(const ListCustomAgentMonitorSessionsRequest &) = default ;
    ListCustomAgentMonitorSessionsRequest(ListCustomAgentMonitorSessionsRequest &&) = default ;
    ListCustomAgentMonitorSessionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomAgentMonitorSessionsRequest() = default ;
    ListCustomAgentMonitorSessionsRequest& operator=(const ListCustomAgentMonitorSessionsRequest &) = default ;
    ListCustomAgentMonitorSessionsRequest& operator=(ListCustomAgentMonitorSessionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customAgentId_ == nullptr
        && this->endTime_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->queryType_ == nullptr && this->startTime_ == nullptr
        && this->workspaceId_ == nullptr; };
    // customAgentId Field Functions 
    bool hasCustomAgentId() const { return this->customAgentId_ != nullptr;};
    void deleteCustomAgentId() { this->customAgentId_ = nullptr;};
    inline string getCustomAgentId() const { DARABONBA_PTR_GET_DEFAULT(customAgentId_, "") };
    inline ListCustomAgentMonitorSessionsRequest& setCustomAgentId(string customAgentId) { DARABONBA_PTR_SET_VALUE(customAgentId_, customAgentId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListCustomAgentMonitorSessionsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCustomAgentMonitorSessionsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCustomAgentMonitorSessionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string getQueryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline ListCustomAgentMonitorSessionsRequest& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListCustomAgentMonitorSessionsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListCustomAgentMonitorSessionsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The custom agent ID.
    // - Required only when QueryType is set to CustomAgent.
    shared_ptr<string> customAgentId_ {};
    // The end time for statistics (epoch millis).
    // - Note: The maximum time range is 3 months.
    shared_ptr<int64_t> endTime_ {};
    // The page number, starting from 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 200. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The query scope. Default value: All. Valid values:
    // - Default: default DataAgent sessions.
    // - CustomAgent: specified custom agent sessions.
    // - All: all sessions in the workspace.
    shared_ptr<string> queryType_ {};
    // The start time for statistics (epoch millis).
    // - Note: The maximum time range is 3 months.
    shared_ptr<int64_t> startTime_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
