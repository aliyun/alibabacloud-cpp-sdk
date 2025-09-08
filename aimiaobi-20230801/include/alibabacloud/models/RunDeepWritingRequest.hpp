// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDEEPWRITINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNDEEPWRITINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDeepWritingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDeepWritingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cursor, cursor_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunDeepWritingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cursor, cursor_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunDeepWritingRequest() = default ;
    RunDeepWritingRequest(const RunDeepWritingRequest &) = default ;
    RunDeepWritingRequest(RunDeepWritingRequest &&) = default ;
    RunDeepWritingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDeepWritingRequest() = default ;
    RunDeepWritingRequest& operator=(const RunDeepWritingRequest &) = default ;
    RunDeepWritingRequest& operator=(RunDeepWritingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cursor_ != nullptr
        && this->taskId_ != nullptr && this->workspaceId_ != nullptr; };
    // cursor Field Functions 
    bool hasCursor() const { return this->cursor_ != nullptr;};
    void deleteCursor() { this->cursor_ = nullptr;};
    inline int32_t cursor() const { DARABONBA_PTR_GET_DEFAULT(cursor_, 0) };
    inline RunDeepWritingRequest& setCursor(int32_t cursor) { DARABONBA_PTR_SET_VALUE(cursor_, cursor) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunDeepWritingRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunDeepWritingRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<int32_t> cursor_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
