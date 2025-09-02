// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDDLJOBSTATUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDDLJOBSTATUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDDLJobStatusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDDLJobStatusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(NextTaskId, nextTaskId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDDLJobStatusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(NextTaskId, nextTaskId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    GetDDLJobStatusResponseBodyData() = default ;
    GetDDLJobStatusResponseBodyData(const GetDDLJobStatusResponseBodyData &) = default ;
    GetDDLJobStatusResponseBodyData(GetDDLJobStatusResponseBodyData &&) = default ;
    GetDDLJobStatusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDDLJobStatusResponseBodyData() = default ;
    GetDDLJobStatusResponseBodyData& operator=(const GetDDLJobStatusResponseBodyData &) = default ;
    GetDDLJobStatusResponseBodyData& operator=(GetDDLJobStatusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->nextTaskId_ != nullptr && this->status_ != nullptr && this->taskId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetDDLJobStatusResponseBodyData& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // nextTaskId Field Functions 
    bool hasNextTaskId() const { return this->nextTaskId_ != nullptr;};
    void deleteNextTaskId() { this->nextTaskId_ = nullptr;};
    inline string nextTaskId() const { DARABONBA_PTR_GET_DEFAULT(nextTaskId_, "") };
    inline GetDDLJobStatusResponseBodyData& setNextTaskId(string nextTaskId) { DARABONBA_PTR_SET_VALUE(nextTaskId_, nextTaskId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDDLJobStatusResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetDDLJobStatusResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The content of the task.
    std::shared_ptr<string> content_ = nullptr;
    // The ID of the ongoing task. If no value is returned for this parameter, all subtasks are complete.
    std::shared_ptr<string> nextTaskId_ = nullptr;
    // The status of the task.
    std::shared_ptr<string> status_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
