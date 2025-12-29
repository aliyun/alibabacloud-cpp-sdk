// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNTEXTPOLISHINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNTEXTPOLISHINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunTextPolishingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunTextPolishingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(OriginContent, originContent_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunTextPolishingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(OriginContent, originContent_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunTextPolishingRequest() = default ;
    RunTextPolishingRequest(const RunTextPolishingRequest &) = default ;
    RunTextPolishingRequest(RunTextPolishingRequest &&) = default ;
    RunTextPolishingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunTextPolishingRequest() = default ;
    RunTextPolishingRequest& operator=(const RunTextPolishingRequest &) = default ;
    RunTextPolishingRequest& operator=(RunTextPolishingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && this->originContent_ == nullptr && this->prompt_ == nullptr && this->taskId_ == nullptr && this->workspaceId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RunTextPolishingRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // originContent Field Functions 
    bool hasOriginContent() const { return this->originContent_ != nullptr;};
    void deleteOriginContent() { this->originContent_ = nullptr;};
    inline string getOriginContent() const { DARABONBA_PTR_GET_DEFAULT(originContent_, "") };
    inline RunTextPolishingRequest& setOriginContent(string originContent) { DARABONBA_PTR_SET_VALUE(originContent_, originContent) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunTextPolishingRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunTextPolishingRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunTextPolishingRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> content_ {};
    shared_ptr<string> originContent_ {};
    shared_ptr<string> prompt_ {};
    shared_ptr<string> taskId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
