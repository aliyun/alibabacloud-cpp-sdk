// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEPOCTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEPOCTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20250521
{
namespace Models
{
  class AssociatePocTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociatePocTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociatePocTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    AssociatePocTaskRequest() = default ;
    AssociatePocTaskRequest(const AssociatePocTaskRequest &) = default ;
    AssociatePocTaskRequest(AssociatePocTaskRequest &&) = default ;
    AssociatePocTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociatePocTaskRequest() = default ;
    AssociatePocTaskRequest& operator=(const AssociatePocTaskRequest &) = default ;
    AssociatePocTaskRequest& operator=(AssociatePocTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectId_ == nullptr
        && this->taskId_ == nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline AssociatePocTaskRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline AssociatePocTaskRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Project ID
    shared_ptr<int64_t> projectId_ {};
    // Retrospective task ID.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20250521
#endif
