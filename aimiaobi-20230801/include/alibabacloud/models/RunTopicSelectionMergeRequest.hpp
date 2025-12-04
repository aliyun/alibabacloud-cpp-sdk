// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNTOPICSELECTIONMERGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNTOPICSELECTIONMERGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TopicSelection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunTopicSelectionMergeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunTopicSelectionMergeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(Topics, topics_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunTopicSelectionMergeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(Topics, topics_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunTopicSelectionMergeRequest() = default ;
    RunTopicSelectionMergeRequest(const RunTopicSelectionMergeRequest &) = default ;
    RunTopicSelectionMergeRequest(RunTopicSelectionMergeRequest &&) = default ;
    RunTopicSelectionMergeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunTopicSelectionMergeRequest() = default ;
    RunTopicSelectionMergeRequest& operator=(const RunTopicSelectionMergeRequest &) = default ;
    RunTopicSelectionMergeRequest& operator=(RunTopicSelectionMergeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->prompt_ == nullptr
        && return this->topics_ == nullptr && return this->workspaceId_ == nullptr; };
    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunTopicSelectionMergeRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // topics Field Functions 
    bool hasTopics() const { return this->topics_ != nullptr;};
    void deleteTopics() { this->topics_ = nullptr;};
    inline const vector<TopicSelection> & topics() const { DARABONBA_PTR_GET_CONST(topics_, vector<TopicSelection>) };
    inline vector<TopicSelection> topics() { DARABONBA_PTR_GET(topics_, vector<TopicSelection>) };
    inline RunTopicSelectionMergeRequest& setTopics(const vector<TopicSelection> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
    inline RunTopicSelectionMergeRequest& setTopics(vector<TopicSelection> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunTopicSelectionMergeRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> prompt_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<TopicSelection>> topics_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
