// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMMANDINVOCATIONRESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMMANDINVOCATIONRESULTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListCommandInvocationResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCommandInvocationResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CommandInvocationResultModel, commandInvocationResultModel_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCommandInvocationResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandInvocationResultModel, commandInvocationResultModel_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCommandInvocationResultsResponseBody() = default ;
    ListCommandInvocationResultsResponseBody(const ListCommandInvocationResultsResponseBody &) = default ;
    ListCommandInvocationResultsResponseBody(ListCommandInvocationResultsResponseBody &&) = default ;
    ListCommandInvocationResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCommandInvocationResultsResponseBody() = default ;
    ListCommandInvocationResultsResponseBody& operator=(const ListCommandInvocationResultsResponseBody &) = default ;
    ListCommandInvocationResultsResponseBody& operator=(ListCommandInvocationResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CommandInvocationResultModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CommandInvocationResultModel& obj) { 
        DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
        DARABONBA_PTR_TO_JSON(AppInstancePersistentId, appInstancePersistentId_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(InvocationId, invocationId_);
        DARABONBA_PTR_TO_JSON(InvocationStatus, invocationStatus_);
        DARABONBA_PTR_TO_JSON(Output, output_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, CommandInvocationResultModel& obj) { 
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
        DARABONBA_PTR_FROM_JSON(AppInstancePersistentId, appInstancePersistentId_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(InvocationId, invocationId_);
        DARABONBA_PTR_FROM_JSON(InvocationStatus, invocationStatus_);
        DARABONBA_PTR_FROM_JSON(Output, output_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      CommandInvocationResultModel() = default ;
      CommandInvocationResultModel(const CommandInvocationResultModel &) = default ;
      CommandInvocationResultModel(CommandInvocationResultModel &&) = default ;
      CommandInvocationResultModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CommandInvocationResultModel() = default ;
      CommandInvocationResultModel& operator=(const CommandInvocationResultModel &) = default ;
      CommandInvocationResultModel& operator=(CommandInvocationResultModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->appInstanceId_ == nullptr && this->appInstancePersistentId_ == nullptr && this->finishTime_ == nullptr && this->invocationId_ == nullptr && this->invocationStatus_ == nullptr
        && this->output_ == nullptr && this->startTime_ == nullptr; };
      // appInstanceGroupId Field Functions 
      bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
      void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
      inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
      inline CommandInvocationResultModel& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


      // appInstanceId Field Functions 
      bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
      void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
      inline string getAppInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
      inline CommandInvocationResultModel& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


      // appInstancePersistentId Field Functions 
      bool hasAppInstancePersistentId() const { return this->appInstancePersistentId_ != nullptr;};
      void deleteAppInstancePersistentId() { this->appInstancePersistentId_ = nullptr;};
      inline string getAppInstancePersistentId() const { DARABONBA_PTR_GET_DEFAULT(appInstancePersistentId_, "") };
      inline CommandInvocationResultModel& setAppInstancePersistentId(string appInstancePersistentId) { DARABONBA_PTR_SET_VALUE(appInstancePersistentId_, appInstancePersistentId) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline CommandInvocationResultModel& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // invocationId Field Functions 
      bool hasInvocationId() const { return this->invocationId_ != nullptr;};
      void deleteInvocationId() { this->invocationId_ = nullptr;};
      inline string getInvocationId() const { DARABONBA_PTR_GET_DEFAULT(invocationId_, "") };
      inline CommandInvocationResultModel& setInvocationId(string invocationId) { DARABONBA_PTR_SET_VALUE(invocationId_, invocationId) };


      // invocationStatus Field Functions 
      bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
      void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
      inline string getInvocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
      inline CommandInvocationResultModel& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
      inline CommandInvocationResultModel& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline CommandInvocationResultModel& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The ID of the delivery group to which the persistent session that executed the command belongs.
      shared_ptr<string> appInstanceGroupId_ {};
      // The instance ID of the app that executed the command.
      shared_ptr<string> appInstanceId_ {};
      // The ID of the persistent session that executed the command.
      shared_ptr<string> appInstancePersistentId_ {};
      // The time when the command execution finished. The time is in UTC and follows the RFC 3339 standard in the yyyy-MM-ddTHH:mm:ssZ format. It is an empty string if the command execution has not finished.
      shared_ptr<string> finishTime_ {};
      // The command execution ID, which is the same as the request parameter InvocationId.
      shared_ptr<string> invocationId_ {};
      // The execution status of the command on the persistent session, such as Pending (waiting to be executed), Running (executing), Success (executed successfully), and Timeout (execution timed out).
      shared_ptr<string> invocationStatus_ {};
      // The output content generated by the command execution, which is raw text. It is an empty string if the command has not finished or has no output.
      shared_ptr<string> output_ {};
      // The time when the command started to execute. The time is in UTC and follows the RFC 3339 standard in the yyyy-MM-ddTHH:mm:ssZ format. It is an empty string if the command has not started to execute.
      shared_ptr<string> startTime_ {};
    };

    virtual bool empty() const override { return this->commandInvocationResultModel_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // commandInvocationResultModel Field Functions 
    bool hasCommandInvocationResultModel() const { return this->commandInvocationResultModel_ != nullptr;};
    void deleteCommandInvocationResultModel() { this->commandInvocationResultModel_ = nullptr;};
    inline const vector<ListCommandInvocationResultsResponseBody::CommandInvocationResultModel> & getCommandInvocationResultModel() const { DARABONBA_PTR_GET_CONST(commandInvocationResultModel_, vector<ListCommandInvocationResultsResponseBody::CommandInvocationResultModel>) };
    inline vector<ListCommandInvocationResultsResponseBody::CommandInvocationResultModel> getCommandInvocationResultModel() { DARABONBA_PTR_GET(commandInvocationResultModel_, vector<ListCommandInvocationResultsResponseBody::CommandInvocationResultModel>) };
    inline ListCommandInvocationResultsResponseBody& setCommandInvocationResultModel(const vector<ListCommandInvocationResultsResponseBody::CommandInvocationResultModel> & commandInvocationResultModel) { DARABONBA_PTR_SET_VALUE(commandInvocationResultModel_, commandInvocationResultModel) };
    inline ListCommandInvocationResultsResponseBody& setCommandInvocationResultModel(vector<ListCommandInvocationResultsResponseBody::CommandInvocationResultModel> && commandInvocationResultModel) { DARABONBA_PTR_SET_RVALUE(commandInvocationResultModel_, commandInvocationResultModel) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCommandInvocationResultsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCommandInvocationResultsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListCommandInvocationResultsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListCommandInvocationResultsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCommandInvocationResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCommandInvocationResultsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of command execution results. Each element corresponds to an execution record on a persistent session. If no records meet the conditions, an empty array is returned.
    shared_ptr<vector<ListCommandInvocationResultsResponseBody::CommandInvocationResultModel>> commandInvocationResultModel_ {};
    // This field is not returned in the current version. Use PageNumber, PageSize, and TotalCount for pagination.
    shared_ptr<int32_t> maxResults_ {};
    // This field is not returned in the current version. Use PageNumber, PageSize, and TotalCount for pagination.
    shared_ptr<string> nextToken_ {};
    // The page number of the currently displayed query results. In the current version, this field always returns 0 and does not echo echo request parameter PageNumber. Refer to echo request parameter for the actual value.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of query results per page. In the current version, this field always returns 0 and does not echo echo request parameter PageSize. Refer to echo request parameter for the actual value.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of query results. If no records meet the conditions, 0 is returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
