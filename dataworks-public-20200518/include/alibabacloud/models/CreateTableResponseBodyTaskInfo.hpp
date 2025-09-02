// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETABLERESPONSEBODYTASKINFO_HPP_
#define ALIBABACLOUD_MODELS_CREATETABLERESPONSEBODYTASKINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateTableResponseBodyTaskInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTableResponseBodyTaskInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(NextTaskId, nextTaskId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTableResponseBodyTaskInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(NextTaskId, nextTaskId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    CreateTableResponseBodyTaskInfo() = default ;
    CreateTableResponseBodyTaskInfo(const CreateTableResponseBodyTaskInfo &) = default ;
    CreateTableResponseBodyTaskInfo(CreateTableResponseBodyTaskInfo &&) = default ;
    CreateTableResponseBodyTaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTableResponseBodyTaskInfo() = default ;
    CreateTableResponseBodyTaskInfo& operator=(const CreateTableResponseBodyTaskInfo &) = default ;
    CreateTableResponseBodyTaskInfo& operator=(CreateTableResponseBodyTaskInfo &&) = default ;
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
    inline CreateTableResponseBodyTaskInfo& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // nextTaskId Field Functions 
    bool hasNextTaskId() const { return this->nextTaskId_ != nullptr;};
    void deleteNextTaskId() { this->nextTaskId_ = nullptr;};
    inline string nextTaskId() const { DARABONBA_PTR_GET_DEFAULT(nextTaskId_, "") };
    inline CreateTableResponseBodyTaskInfo& setNextTaskId(string nextTaskId) { DARABONBA_PTR_SET_VALUE(nextTaskId_, nextTaskId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateTableResponseBodyTaskInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateTableResponseBodyTaskInfo& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The details about the status of the current subtask.
    // 
    // *   If the current subtask is successful, success is returned.
    // *   If the current subtask fails, the error details are displayed.
    std::shared_ptr<string> content_ = nullptr;
    // The ID of the subtask that you want to run. If this parameter is left empty, all subtasks are complete.
    std::shared_ptr<string> nextTaskId_ = nullptr;
    // The status of the current subtask. Valid values:
    // 
    // *   operating: The subtask is running.
    // *   success: The subtask succeeds.
    // *   failure: The subtask fails to run. For more information about the error details, see the Content parameter.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the current subtask.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
