// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeTasksResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTasksResponseBodyItems& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeTasksResponseBodyItems& obj) { 
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
    DescribeTasksResponseBodyItems() = default ;
    DescribeTasksResponseBodyItems(const DescribeTasksResponseBodyItems &) = default ;
    DescribeTasksResponseBodyItems(DescribeTasksResponseBodyItems &&) = default ;
    DescribeTasksResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTasksResponseBodyItems() = default ;
    DescribeTasksResponseBodyItems& operator=(const DescribeTasksResponseBodyItems &) = default ;
    DescribeTasksResponseBodyItems& operator=(DescribeTasksResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->beginTime_ != nullptr
        && this->DBName_ != nullptr && this->finishTime_ != nullptr && this->progress_ != nullptr && this->progressInfo_ != nullptr && this->scaleOutToken_ != nullptr
        && this->status_ != nullptr && this->taskAction_ != nullptr && this->taskErrorCode_ != nullptr && this->taskErrorMessage_ != nullptr && this->taskId_ != nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline DescribeTasksResponseBodyItems& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeTasksResponseBodyItems& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline DescribeTasksResponseBodyItems& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeTasksResponseBodyItems& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // progressInfo Field Functions 
    bool hasProgressInfo() const { return this->progressInfo_ != nullptr;};
    void deleteProgressInfo() { this->progressInfo_ = nullptr;};
    inline string progressInfo() const { DARABONBA_PTR_GET_DEFAULT(progressInfo_, "") };
    inline DescribeTasksResponseBodyItems& setProgressInfo(string progressInfo) { DARABONBA_PTR_SET_VALUE(progressInfo_, progressInfo) };


    // scaleOutToken Field Functions 
    bool hasScaleOutToken() const { return this->scaleOutToken_ != nullptr;};
    void deleteScaleOutToken() { this->scaleOutToken_ = nullptr;};
    inline string scaleOutToken() const { DARABONBA_PTR_GET_DEFAULT(scaleOutToken_, "") };
    inline DescribeTasksResponseBodyItems& setScaleOutToken(string scaleOutToken) { DARABONBA_PTR_SET_VALUE(scaleOutToken_, scaleOutToken) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeTasksResponseBodyItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskAction Field Functions 
    bool hasTaskAction() const { return this->taskAction_ != nullptr;};
    void deleteTaskAction() { this->taskAction_ = nullptr;};
    inline string taskAction() const { DARABONBA_PTR_GET_DEFAULT(taskAction_, "") };
    inline DescribeTasksResponseBodyItems& setTaskAction(string taskAction) { DARABONBA_PTR_SET_VALUE(taskAction_, taskAction) };


    // taskErrorCode Field Functions 
    bool hasTaskErrorCode() const { return this->taskErrorCode_ != nullptr;};
    void deleteTaskErrorCode() { this->taskErrorCode_ = nullptr;};
    inline string taskErrorCode() const { DARABONBA_PTR_GET_DEFAULT(taskErrorCode_, "") };
    inline DescribeTasksResponseBodyItems& setTaskErrorCode(string taskErrorCode) { DARABONBA_PTR_SET_VALUE(taskErrorCode_, taskErrorCode) };


    // taskErrorMessage Field Functions 
    bool hasTaskErrorMessage() const { return this->taskErrorMessage_ != nullptr;};
    void deleteTaskErrorMessage() { this->taskErrorMessage_ = nullptr;};
    inline string taskErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(taskErrorMessage_, "") };
    inline DescribeTasksResponseBodyItems& setTaskErrorMessage(string taskErrorMessage) { DARABONBA_PTR_SET_VALUE(taskErrorMessage_, taskErrorMessage) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeTasksResponseBodyItems& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> beginTime_ = nullptr;
    std::shared_ptr<string> DBName_ = nullptr;
    std::shared_ptr<string> finishTime_ = nullptr;
    std::shared_ptr<string> progress_ = nullptr;
    std::shared_ptr<string> progressInfo_ = nullptr;
    std::shared_ptr<string> scaleOutToken_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskAction_ = nullptr;
    std::shared_ptr<string> taskErrorCode_ = nullptr;
    std::shared_ptr<string> taskErrorMessage_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
