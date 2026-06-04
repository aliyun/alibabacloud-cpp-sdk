// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FETCHPARSEDOCUMENTLAYOUTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FETCHPARSEDOCUMENTLAYOUTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class FetchParseDocumentLayoutTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FetchParseDocumentLayoutTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, FetchParseDocumentLayoutTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    FetchParseDocumentLayoutTaskRequest() = default ;
    FetchParseDocumentLayoutTaskRequest(const FetchParseDocumentLayoutTaskRequest &) = default ;
    FetchParseDocumentLayoutTaskRequest(FetchParseDocumentLayoutTaskRequest &&) = default ;
    FetchParseDocumentLayoutTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FetchParseDocumentLayoutTaskRequest() = default ;
    FetchParseDocumentLayoutTaskRequest& operator=(const FetchParseDocumentLayoutTaskRequest &) = default ;
    FetchParseDocumentLayoutTaskRequest& operator=(FetchParseDocumentLayoutTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr
        && this->workspaceId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline FetchParseDocumentLayoutTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline FetchParseDocumentLayoutTaskRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
