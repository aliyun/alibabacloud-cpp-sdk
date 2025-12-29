// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITIATEPPTCREATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INITIATEPPTCREATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class InitiatePptCreationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitiatePptCreationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Outline, outline_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, InitiatePptCreationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Outline, outline_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    InitiatePptCreationRequest() = default ;
    InitiatePptCreationRequest(const InitiatePptCreationRequest &) = default ;
    InitiatePptCreationRequest(InitiatePptCreationRequest &&) = default ;
    InitiatePptCreationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitiatePptCreationRequest() = default ;
    InitiatePptCreationRequest& operator=(const InitiatePptCreationRequest &) = default ;
    InitiatePptCreationRequest& operator=(InitiatePptCreationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outline_ == nullptr
        && this->taskId_ == nullptr && this->workspaceId_ == nullptr; };
    // outline Field Functions 
    bool hasOutline() const { return this->outline_ != nullptr;};
    void deleteOutline() { this->outline_ = nullptr;};
    inline string getOutline() const { DARABONBA_PTR_GET_DEFAULT(outline_, "") };
    inline InitiatePptCreationRequest& setOutline(string outline) { DARABONBA_PTR_SET_VALUE(outline_, outline) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline InitiatePptCreationRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline InitiatePptCreationRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> outline_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
