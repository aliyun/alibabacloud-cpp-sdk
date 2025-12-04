// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNQUICKWRITINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNQUICKWRITINGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunQuickWritingShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunQuickWritingShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Articles, articlesShrink_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(SearchSources, searchSourcesShrink_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunQuickWritingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Articles, articlesShrink_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(SearchSources, searchSourcesShrink_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunQuickWritingShrinkRequest() = default ;
    RunQuickWritingShrinkRequest(const RunQuickWritingShrinkRequest &) = default ;
    RunQuickWritingShrinkRequest(RunQuickWritingShrinkRequest &&) = default ;
    RunQuickWritingShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunQuickWritingShrinkRequest() = default ;
    RunQuickWritingShrinkRequest& operator=(const RunQuickWritingShrinkRequest &) = default ;
    RunQuickWritingShrinkRequest& operator=(RunQuickWritingShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->articlesShrink_ == nullptr
        && return this->prompt_ == nullptr && return this->searchSourcesShrink_ == nullptr && return this->taskId_ == nullptr && return this->workspaceId_ == nullptr; };
    // articlesShrink Field Functions 
    bool hasArticlesShrink() const { return this->articlesShrink_ != nullptr;};
    void deleteArticlesShrink() { this->articlesShrink_ = nullptr;};
    inline string articlesShrink() const { DARABONBA_PTR_GET_DEFAULT(articlesShrink_, "") };
    inline RunQuickWritingShrinkRequest& setArticlesShrink(string articlesShrink) { DARABONBA_PTR_SET_VALUE(articlesShrink_, articlesShrink) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunQuickWritingShrinkRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // searchSourcesShrink Field Functions 
    bool hasSearchSourcesShrink() const { return this->searchSourcesShrink_ != nullptr;};
    void deleteSearchSourcesShrink() { this->searchSourcesShrink_ = nullptr;};
    inline string searchSourcesShrink() const { DARABONBA_PTR_GET_DEFAULT(searchSourcesShrink_, "") };
    inline RunQuickWritingShrinkRequest& setSearchSourcesShrink(string searchSourcesShrink) { DARABONBA_PTR_SET_VALUE(searchSourcesShrink_, searchSourcesShrink) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunQuickWritingShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunQuickWritingShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> articlesShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<string> searchSourcesShrink_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
