// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALTIMERRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALTIMERRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeGlobalTimerRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalTimerRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchId, batchId_);
      DARABONBA_PTR_TO_JSON(DesktopIds, desktopIds_);
      DARABONBA_PTR_TO_JSON(DisplayResultName, displayResultName_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResultCategory, resultCategory_);
      DARABONBA_PTR_TO_JSON(Retryable, retryable_);
      DARABONBA_PTR_TO_JSON(SearchRegionId, searchRegionId_);
      DARABONBA_PTR_TO_JSON(TimerResult, timerResult_);
      DARABONBA_PTR_TO_JSON(TimerTypes, timerTypes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalTimerRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
      DARABONBA_PTR_FROM_JSON(DesktopIds, desktopIds_);
      DARABONBA_PTR_FROM_JSON(DisplayResultName, displayResultName_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResultCategory, resultCategory_);
      DARABONBA_PTR_FROM_JSON(Retryable, retryable_);
      DARABONBA_PTR_FROM_JSON(SearchRegionId, searchRegionId_);
      DARABONBA_PTR_FROM_JSON(TimerResult, timerResult_);
      DARABONBA_PTR_FROM_JSON(TimerTypes, timerTypes_);
    };
    DescribeGlobalTimerRecordsRequest() = default ;
    DescribeGlobalTimerRecordsRequest(const DescribeGlobalTimerRecordsRequest &) = default ;
    DescribeGlobalTimerRecordsRequest(DescribeGlobalTimerRecordsRequest &&) = default ;
    DescribeGlobalTimerRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalTimerRecordsRequest() = default ;
    DescribeGlobalTimerRecordsRequest& operator=(const DescribeGlobalTimerRecordsRequest &) = default ;
    DescribeGlobalTimerRecordsRequest& operator=(DescribeGlobalTimerRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchId_ == nullptr
        && return this->desktopIds_ == nullptr && return this->displayResultName_ == nullptr && return this->groupId_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr
        && return this->regionId_ == nullptr && return this->resultCategory_ == nullptr && return this->retryable_ == nullptr && return this->searchRegionId_ == nullptr && return this->timerResult_ == nullptr
        && return this->timerTypes_ == nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline string batchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
    inline DescribeGlobalTimerRecordsRequest& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // desktopIds Field Functions 
    bool hasDesktopIds() const { return this->desktopIds_ != nullptr;};
    void deleteDesktopIds() { this->desktopIds_ = nullptr;};
    inline const vector<string> & desktopIds() const { DARABONBA_PTR_GET_CONST(desktopIds_, vector<string>) };
    inline vector<string> desktopIds() { DARABONBA_PTR_GET(desktopIds_, vector<string>) };
    inline DescribeGlobalTimerRecordsRequest& setDesktopIds(const vector<string> & desktopIds) { DARABONBA_PTR_SET_VALUE(desktopIds_, desktopIds) };
    inline DescribeGlobalTimerRecordsRequest& setDesktopIds(vector<string> && desktopIds) { DARABONBA_PTR_SET_RVALUE(desktopIds_, desktopIds) };


    // displayResultName Field Functions 
    bool hasDisplayResultName() const { return this->displayResultName_ != nullptr;};
    void deleteDisplayResultName() { this->displayResultName_ = nullptr;};
    inline string displayResultName() const { DARABONBA_PTR_GET_DEFAULT(displayResultName_, "") };
    inline DescribeGlobalTimerRecordsRequest& setDisplayResultName(string displayResultName) { DARABONBA_PTR_SET_VALUE(displayResultName_, displayResultName) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeGlobalTimerRecordsRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline DescribeGlobalTimerRecordsRequest& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeGlobalTimerRecordsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeGlobalTimerRecordsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resultCategory Field Functions 
    bool hasResultCategory() const { return this->resultCategory_ != nullptr;};
    void deleteResultCategory() { this->resultCategory_ = nullptr;};
    inline string resultCategory() const { DARABONBA_PTR_GET_DEFAULT(resultCategory_, "") };
    inline DescribeGlobalTimerRecordsRequest& setResultCategory(string resultCategory) { DARABONBA_PTR_SET_VALUE(resultCategory_, resultCategory) };


    // retryable Field Functions 
    bool hasRetryable() const { return this->retryable_ != nullptr;};
    void deleteRetryable() { this->retryable_ = nullptr;};
    inline bool retryable() const { DARABONBA_PTR_GET_DEFAULT(retryable_, false) };
    inline DescribeGlobalTimerRecordsRequest& setRetryable(bool retryable) { DARABONBA_PTR_SET_VALUE(retryable_, retryable) };


    // searchRegionId Field Functions 
    bool hasSearchRegionId() const { return this->searchRegionId_ != nullptr;};
    void deleteSearchRegionId() { this->searchRegionId_ = nullptr;};
    inline string searchRegionId() const { DARABONBA_PTR_GET_DEFAULT(searchRegionId_, "") };
    inline DescribeGlobalTimerRecordsRequest& setSearchRegionId(string searchRegionId) { DARABONBA_PTR_SET_VALUE(searchRegionId_, searchRegionId) };


    // timerResult Field Functions 
    bool hasTimerResult() const { return this->timerResult_ != nullptr;};
    void deleteTimerResult() { this->timerResult_ = nullptr;};
    inline string timerResult() const { DARABONBA_PTR_GET_DEFAULT(timerResult_, "") };
    inline DescribeGlobalTimerRecordsRequest& setTimerResult(string timerResult) { DARABONBA_PTR_SET_VALUE(timerResult_, timerResult) };


    // timerTypes Field Functions 
    bool hasTimerTypes() const { return this->timerTypes_ != nullptr;};
    void deleteTimerTypes() { this->timerTypes_ = nullptr;};
    inline const vector<string> & timerTypes() const { DARABONBA_PTR_GET_CONST(timerTypes_, vector<string>) };
    inline vector<string> timerTypes() { DARABONBA_PTR_GET(timerTypes_, vector<string>) };
    inline DescribeGlobalTimerRecordsRequest& setTimerTypes(const vector<string> & timerTypes) { DARABONBA_PTR_SET_VALUE(timerTypes_, timerTypes) };
    inline DescribeGlobalTimerRecordsRequest& setTimerTypes(vector<string> && timerTypes) { DARABONBA_PTR_SET_RVALUE(timerTypes_, timerTypes) };


  protected:
    // The ID of the batch in which the scheduled task is executed.
    std::shared_ptr<string> batchId_ = nullptr;
    // The cloud computer IDs.
    std::shared_ptr<vector<string>> desktopIds_ = nullptr;
    std::shared_ptr<string> displayResultName_ = nullptr;
    // The ID of the scheduled task group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The number of entries per page.
    // 
    // Maximum value: 100.
    // 
    // Default value: 10.
    std::shared_ptr<string> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The region ID. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the list of regions where Elastic Desktop Service (EDS) Enterprise is available.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the execution result. You can specify this parameter to filter the execution results.
    // 
    // Valid values:
    // 
    // *   FAILED: The execution is successful.
    // *   FAILED: The execution failed.
    // *   RUNNING: The execution is in progress.
    // *   SKIPPED: The execution is skipped.
    std::shared_ptr<string> resultCategory_ = nullptr;
    std::shared_ptr<bool> retryable_ = nullptr;
    // The ID of the searched region. You can specify this parameter to filter cloud computers in specific regions.
    std::shared_ptr<string> searchRegionId_ = nullptr;
    // The execution result of the scheduled task.
    // 
    // Valid values:
    // 
    // *   CONNECTED_NOT_RUN: The cloud computer is connected, but the scheduled task is not executed.
    // *   PAUSED: The scheduled task is suspended.
    // *   COMPLETED: The scheduled task is executed.
    // *   FAILED: The scheduled task failed to be executed.
    // *   RUNNING: The scheduled task is being executed.
    // *   TERMINATED: The scheduled task is stopped.
    std::shared_ptr<string> timerResult_ = nullptr;
    // The scheduled tasks.
    std::shared_ptr<vector<string>> timerTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
