// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNQUICKWRITINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNQUICKWRITINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunQuickWritingRequestArticles.hpp>
#include <alibabacloud/models/RunQuickWritingRequestSearchSources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunQuickWritingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunQuickWritingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Articles, articles_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(SearchSources, searchSources_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunQuickWritingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Articles, articles_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(SearchSources, searchSources_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunQuickWritingRequest() = default ;
    RunQuickWritingRequest(const RunQuickWritingRequest &) = default ;
    RunQuickWritingRequest(RunQuickWritingRequest &&) = default ;
    RunQuickWritingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunQuickWritingRequest() = default ;
    RunQuickWritingRequest& operator=(const RunQuickWritingRequest &) = default ;
    RunQuickWritingRequest& operator=(RunQuickWritingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->articles_ == nullptr
        && return this->prompt_ == nullptr && return this->searchSources_ == nullptr && return this->taskId_ == nullptr && return this->workspaceId_ == nullptr; };
    // articles Field Functions 
    bool hasArticles() const { return this->articles_ != nullptr;};
    void deleteArticles() { this->articles_ = nullptr;};
    inline const vector<RunQuickWritingRequestArticles> & articles() const { DARABONBA_PTR_GET_CONST(articles_, vector<RunQuickWritingRequestArticles>) };
    inline vector<RunQuickWritingRequestArticles> articles() { DARABONBA_PTR_GET(articles_, vector<RunQuickWritingRequestArticles>) };
    inline RunQuickWritingRequest& setArticles(const vector<RunQuickWritingRequestArticles> & articles) { DARABONBA_PTR_SET_VALUE(articles_, articles) };
    inline RunQuickWritingRequest& setArticles(vector<RunQuickWritingRequestArticles> && articles) { DARABONBA_PTR_SET_RVALUE(articles_, articles) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunQuickWritingRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // searchSources Field Functions 
    bool hasSearchSources() const { return this->searchSources_ != nullptr;};
    void deleteSearchSources() { this->searchSources_ = nullptr;};
    inline const vector<RunQuickWritingRequestSearchSources> & searchSources() const { DARABONBA_PTR_GET_CONST(searchSources_, vector<RunQuickWritingRequestSearchSources>) };
    inline vector<RunQuickWritingRequestSearchSources> searchSources() { DARABONBA_PTR_GET(searchSources_, vector<RunQuickWritingRequestSearchSources>) };
    inline RunQuickWritingRequest& setSearchSources(const vector<RunQuickWritingRequestSearchSources> & searchSources) { DARABONBA_PTR_SET_VALUE(searchSources_, searchSources) };
    inline RunQuickWritingRequest& setSearchSources(vector<RunQuickWritingRequestSearchSources> && searchSources) { DARABONBA_PTR_SET_RVALUE(searchSources_, searchSources) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunQuickWritingRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunQuickWritingRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<vector<RunQuickWritingRequestArticles>> articles_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<vector<RunQuickWritingRequestSearchSources>> searchSources_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
