// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTIONLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTIONLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListExecutionLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutionLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutionId, executionId_);
      DARABONBA_PTR_TO_JSON(LogType, logType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TaskExecutionId, taskExecutionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutionLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutionId, executionId_);
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TaskExecutionId, taskExecutionId_);
    };
    ListExecutionLogsRequest() = default ;
    ListExecutionLogsRequest(const ListExecutionLogsRequest &) = default ;
    ListExecutionLogsRequest(ListExecutionLogsRequest &&) = default ;
    ListExecutionLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutionLogsRequest() = default ;
    ListExecutionLogsRequest& operator=(const ListExecutionLogsRequest &) = default ;
    ListExecutionLogsRequest& operator=(ListExecutionLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executionId_ == nullptr
        && return this->logType_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->regionId_ == nullptr && return this->taskExecutionId_ == nullptr; };
    // executionId Field Functions 
    bool hasExecutionId() const { return this->executionId_ != nullptr;};
    void deleteExecutionId() { this->executionId_ = nullptr;};
    inline string executionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
    inline ListExecutionLogsRequest& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string logType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline ListExecutionLogsRequest& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListExecutionLogsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListExecutionLogsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListExecutionLogsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // taskExecutionId Field Functions 
    bool hasTaskExecutionId() const { return this->taskExecutionId_ != nullptr;};
    void deleteTaskExecutionId() { this->taskExecutionId_ = nullptr;};
    inline string taskExecutionId() const { DARABONBA_PTR_GET_DEFAULT(taskExecutionId_, "") };
    inline ListExecutionLogsRequest& setTaskExecutionId(string taskExecutionId) { DARABONBA_PTR_SET_VALUE(taskExecutionId_, taskExecutionId) };


  protected:
    // The ID of the execution.
    // 
    // This parameter is required.
    std::shared_ptr<string> executionId_ = nullptr;
    // The type of the log.
    std::shared_ptr<string> logType_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that is used to retrieve the next page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the region in which you want to query the logs of the execution.
    std::shared_ptr<string> regionId_ = nullptr;
    // The execution ID of the task.
    std::shared_ptr<string> taskExecutionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
