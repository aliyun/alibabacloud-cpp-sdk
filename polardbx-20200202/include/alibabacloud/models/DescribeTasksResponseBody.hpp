// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeTasksResponseBody() = default ;
    DescribeTasksResponseBody(const DescribeTasksResponseBody &) = default ;
    DescribeTasksResponseBody(DescribeTasksResponseBody &&) = default ;
    DescribeTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTasksResponseBody() = default ;
    DescribeTasksResponseBody& operator=(const DescribeTasksResponseBody &) = default ;
    DescribeTasksResponseBody& operator=(DescribeTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_TO_JSON(DBName, DBName_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(Progress, progress_);
        DARABONBA_PTR_TO_JSON(ProgressInfo, progressInfo_);
        DARABONBA_PTR_TO_JSON(ScaleOutToken, scaleOutToken_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskAction, taskAction_);
        DARABONBA_PTR_TO_JSON(TaskErrorCode, taskErrorCode_);
        DARABONBA_PTR_TO_JSON(TaskErrorMessage, taskErrorMessage_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_FROM_JSON(DBName, DBName_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(Progress, progress_);
        DARABONBA_PTR_FROM_JSON(ProgressInfo, progressInfo_);
        DARABONBA_PTR_FROM_JSON(ScaleOutToken, scaleOutToken_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskAction, taskAction_);
        DARABONBA_PTR_FROM_JSON(TaskErrorCode, taskErrorCode_);
        DARABONBA_PTR_FROM_JSON(TaskErrorMessage, taskErrorMessage_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->DBName_ == nullptr && this->finishTime_ == nullptr && this->progress_ == nullptr && this->progressInfo_ == nullptr && this->scaleOutToken_ == nullptr
        && this->status_ == nullptr && this->taskAction_ == nullptr && this->taskErrorCode_ == nullptr && this->taskErrorMessage_ == nullptr && this->taskId_ == nullptr; };
      // beginTime Field Functions 
      bool hasBeginTime() const { return this->beginTime_ != nullptr;};
      void deleteBeginTime() { this->beginTime_ = nullptr;};
      inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
      inline Items& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


      // DBName Field Functions 
      bool hasDBName() const { return this->DBName_ != nullptr;};
      void deleteDBName() { this->DBName_ = nullptr;};
      inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
      inline Items& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline Items& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // progress Field Functions 
      bool hasProgress() const { return this->progress_ != nullptr;};
      void deleteProgress() { this->progress_ = nullptr;};
      inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
      inline Items& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


      // progressInfo Field Functions 
      bool hasProgressInfo() const { return this->progressInfo_ != nullptr;};
      void deleteProgressInfo() { this->progressInfo_ = nullptr;};
      inline string getProgressInfo() const { DARABONBA_PTR_GET_DEFAULT(progressInfo_, "") };
      inline Items& setProgressInfo(string progressInfo) { DARABONBA_PTR_SET_VALUE(progressInfo_, progressInfo) };


      // scaleOutToken Field Functions 
      bool hasScaleOutToken() const { return this->scaleOutToken_ != nullptr;};
      void deleteScaleOutToken() { this->scaleOutToken_ = nullptr;};
      inline string getScaleOutToken() const { DARABONBA_PTR_GET_DEFAULT(scaleOutToken_, "") };
      inline Items& setScaleOutToken(string scaleOutToken) { DARABONBA_PTR_SET_VALUE(scaleOutToken_, scaleOutToken) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskAction Field Functions 
      bool hasTaskAction() const { return this->taskAction_ != nullptr;};
      void deleteTaskAction() { this->taskAction_ = nullptr;};
      inline string getTaskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
      inline Items& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


      // taskErrorCode Field Functions 
      bool hasTaskErrorCode() const { return this->taskErrorCode_ != nullptr;};
      void deleteTaskErrorCode() { this->taskErrorCode_ = nullptr;};
      inline string getTaskErrorCode() const { DARABONBA_PTR_GET_DEFAULT(taskErrorCode_, "") };
      inline Items& setTaskErrorCode(string taskErrorCode) { DARABONBA_PTR_SET_VALUE(taskErrorCode_, taskErrorCode) };


      // taskErrorMessage Field Functions 
      bool hasTaskErrorMessage() const { return this->taskErrorMessage_ != nullptr;};
      void deleteTaskErrorMessage() { this->taskErrorMessage_ = nullptr;};
      inline string getTaskErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(taskErrorMessage_, "") };
      inline Items& setTaskErrorMessage(string taskErrorMessage) { DARABONBA_PTR_SET_VALUE(taskErrorMessage_, taskErrorMessage) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Items& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<string> beginTime_ {};
      shared_ptr<string> DBName_ {};
      shared_ptr<string> finishTime_ {};
      shared_ptr<string> progress_ {};
      shared_ptr<string> progressInfo_ {};
      shared_ptr<string> scaleOutToken_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> taskAction_ {};
      shared_ptr<string> taskErrorCode_ {};
      shared_ptr<string> taskErrorMessage_ {};
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeTasksResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeTasksResponseBody::Items>) };
    inline vector<DescribeTasksResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeTasksResponseBody::Items>) };
    inline DescribeTasksResponseBody& setItems(const vector<DescribeTasksResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeTasksResponseBody& setItems(vector<DescribeTasksResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeTasksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeTasksResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeTasksResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    shared_ptr<vector<DescribeTasksResponseBody::Items>> items_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageRecordCount_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
