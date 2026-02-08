// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPMATERIALTASK_HPP_
#define ALIBABACLOUD_MODELS_APPMATERIALTASK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class AppMaterialTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppMaterialTask& obj) { 
      DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_TO_JSON(CompleteTimeFormat, completeTimeFormat_);
      DARABONBA_PTR_TO_JSON(FailReason, failReason_);
      DARABONBA_PTR_TO_JSON(FinalFileUrls, finalFileUrls_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubStatus, subStatus_);
      DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskParam, taskParam_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, AppMaterialTask& obj) { 
      DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_FROM_JSON(CompleteTimeFormat, completeTimeFormat_);
      DARABONBA_PTR_FROM_JSON(FailReason, failReason_);
      DARABONBA_PTR_FROM_JSON(FinalFileUrls, finalFileUrls_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubStatus, subStatus_);
      DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskParam, taskParam_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    AppMaterialTask() = default ;
    AppMaterialTask(const AppMaterialTask &) = default ;
    AppMaterialTask(AppMaterialTask &&) = default ;
    AppMaterialTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppMaterialTask() = default ;
    AppMaterialTask& operator=(const AppMaterialTask &) = default ;
    AppMaterialTask& operator=(AppMaterialTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->completeTime_ == nullptr
        && this->completeTimeFormat_ == nullptr && this->failReason_ == nullptr && this->finalFileUrls_ == nullptr && this->status_ == nullptr && this->subStatus_ == nullptr
        && this->submitTime_ == nullptr && this->taskId_ == nullptr && this->taskParam_ == nullptr && this->taskType_ == nullptr; };
    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline string getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
    inline AppMaterialTask& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // completeTimeFormat Field Functions 
    bool hasCompleteTimeFormat() const { return this->completeTimeFormat_ != nullptr;};
    void deleteCompleteTimeFormat() { this->completeTimeFormat_ = nullptr;};
    inline string getCompleteTimeFormat() const { DARABONBA_PTR_GET_DEFAULT(completeTimeFormat_, "") };
    inline AppMaterialTask& setCompleteTimeFormat(string completeTimeFormat) { DARABONBA_PTR_SET_VALUE(completeTimeFormat_, completeTimeFormat) };


    // failReason Field Functions 
    bool hasFailReason() const { return this->failReason_ != nullptr;};
    void deleteFailReason() { this->failReason_ = nullptr;};
    inline string getFailReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
    inline AppMaterialTask& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


    // finalFileUrls Field Functions 
    bool hasFinalFileUrls() const { return this->finalFileUrls_ != nullptr;};
    void deleteFinalFileUrls() { this->finalFileUrls_ = nullptr;};
    inline const vector<string> & getFinalFileUrls() const { DARABONBA_PTR_GET_CONST(finalFileUrls_, vector<string>) };
    inline vector<string> getFinalFileUrls() { DARABONBA_PTR_GET(finalFileUrls_, vector<string>) };
    inline AppMaterialTask& setFinalFileUrls(const vector<string> & finalFileUrls) { DARABONBA_PTR_SET_VALUE(finalFileUrls_, finalFileUrls) };
    inline AppMaterialTask& setFinalFileUrls(vector<string> && finalFileUrls) { DARABONBA_PTR_SET_RVALUE(finalFileUrls_, finalFileUrls) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AppMaterialTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subStatus Field Functions 
    bool hasSubStatus() const { return this->subStatus_ != nullptr;};
    void deleteSubStatus() { this->subStatus_ = nullptr;};
    inline string getSubStatus() const { DARABONBA_PTR_GET_DEFAULT(subStatus_, "") };
    inline AppMaterialTask& setSubStatus(string subStatus) { DARABONBA_PTR_SET_VALUE(subStatus_, subStatus) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline string getSubmitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
    inline AppMaterialTask& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline AppMaterialTask& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskParam Field Functions 
    bool hasTaskParam() const { return this->taskParam_ != nullptr;};
    void deleteTaskParam() { this->taskParam_ = nullptr;};
    inline string getTaskParam() const { DARABONBA_PTR_GET_DEFAULT(taskParam_, "") };
    inline AppMaterialTask& setTaskParam(string taskParam) { DARABONBA_PTR_SET_VALUE(taskParam_, taskParam) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline AppMaterialTask& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    shared_ptr<string> completeTime_ {};
    shared_ptr<string> completeTimeFormat_ {};
    shared_ptr<string> failReason_ {};
    shared_ptr<vector<string>> finalFileUrls_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> subStatus_ {};
    shared_ptr<string> submitTime_ {};
    shared_ptr<string> taskId_ {};
    shared_ptr<string> taskParam_ {};
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
