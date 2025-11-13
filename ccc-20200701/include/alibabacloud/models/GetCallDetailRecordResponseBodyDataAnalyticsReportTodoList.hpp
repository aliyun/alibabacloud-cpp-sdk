// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODYDATAANALYTICSREPORTTODOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODYDATAANALYTICSREPORTTODOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetCallDetailRecordResponseBodyDataAnalyticsReportTodoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCallDetailRecordResponseBodyDataAnalyticsReportTodoList& obj) { 
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, GetCallDetailRecordResponseBodyDataAnalyticsReportTodoList& obj) { 
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
    };
    GetCallDetailRecordResponseBodyDataAnalyticsReportTodoList() = default ;
    GetCallDetailRecordResponseBodyDataAnalyticsReportTodoList(const GetCallDetailRecordResponseBodyDataAnalyticsReportTodoList &) = default ;
    GetCallDetailRecordResponseBodyDataAnalyticsReportTodoList(GetCallDetailRecordResponseBodyDataAnalyticsReportTodoList &&) = default ;
    GetCallDetailRecordResponseBodyDataAnalyticsReportTodoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCallDetailRecordResponseBodyDataAnalyticsReportTodoList() = default ;
    GetCallDetailRecordResponseBodyDataAnalyticsReportTodoList& operator=(const GetCallDetailRecordResponseBodyDataAnalyticsReportTodoList &) = default ;
    GetCallDetailRecordResponseBodyDataAnalyticsReportTodoList& operator=(GetCallDetailRecordResponseBodyDataAnalyticsReportTodoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->success_ == nullptr
        && return this->taskId_ == nullptr && return this->tasks_ == nullptr; };
    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCallDetailRecordResponseBodyDataAnalyticsReportTodoList& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetCallDetailRecordResponseBodyDataAnalyticsReportTodoList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<string> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<string>) };
    inline vector<string> tasks() { DARABONBA_PTR_GET(tasks_, vector<string>) };
    inline GetCallDetailRecordResponseBodyDataAnalyticsReportTodoList& setTasks(const vector<string> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline GetCallDetailRecordResponseBodyDataAnalyticsReportTodoList& setTasks(vector<string> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<vector<string>> tasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
