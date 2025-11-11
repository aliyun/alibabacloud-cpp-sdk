// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCUSTOMHOTTOPICVIEWPOINTANALYSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCUSTOMHOTTOPICVIEWPOINTANALYSISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunCustomHotTopicViewPointAnalysisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCustomHotTopicViewPointAnalysisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AskUser, askUser_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(SearchQuery, searchQuery_);
      DARABONBA_PTR_TO_JSON(SkipAskUser, skipAskUser_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(TopicId, topicId_);
      DARABONBA_PTR_TO_JSON(TopicSource, topicSource_);
      DARABONBA_PTR_TO_JSON(TopicVersion, topicVersion_);
      DARABONBA_PTR_TO_JSON(UserBack, userBack_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunCustomHotTopicViewPointAnalysisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AskUser, askUser_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(SearchQuery, searchQuery_);
      DARABONBA_PTR_FROM_JSON(SkipAskUser, skipAskUser_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
      DARABONBA_PTR_FROM_JSON(TopicSource, topicSource_);
      DARABONBA_PTR_FROM_JSON(TopicVersion, topicVersion_);
      DARABONBA_PTR_FROM_JSON(UserBack, userBack_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunCustomHotTopicViewPointAnalysisRequest() = default ;
    RunCustomHotTopicViewPointAnalysisRequest(const RunCustomHotTopicViewPointAnalysisRequest &) = default ;
    RunCustomHotTopicViewPointAnalysisRequest(RunCustomHotTopicViewPointAnalysisRequest &&) = default ;
    RunCustomHotTopicViewPointAnalysisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCustomHotTopicViewPointAnalysisRequest() = default ;
    RunCustomHotTopicViewPointAnalysisRequest& operator=(const RunCustomHotTopicViewPointAnalysisRequest &) = default ;
    RunCustomHotTopicViewPointAnalysisRequest& operator=(RunCustomHotTopicViewPointAnalysisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->askUser_ == nullptr
        && return this->prompt_ == nullptr && return this->searchQuery_ == nullptr && return this->skipAskUser_ == nullptr && return this->topic_ == nullptr && return this->topicId_ == nullptr
        && return this->topicSource_ == nullptr && return this->topicVersion_ == nullptr && return this->userBack_ == nullptr && return this->workspaceId_ == nullptr; };
    // askUser Field Functions 
    bool hasAskUser() const { return this->askUser_ != nullptr;};
    void deleteAskUser() { this->askUser_ = nullptr;};
    inline string askUser() const { DARABONBA_PTR_GET_DEFAULT(askUser_, "") };
    inline RunCustomHotTopicViewPointAnalysisRequest& setAskUser(string askUser) { DARABONBA_PTR_SET_VALUE(askUser_, askUser) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunCustomHotTopicViewPointAnalysisRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // searchQuery Field Functions 
    bool hasSearchQuery() const { return this->searchQuery_ != nullptr;};
    void deleteSearchQuery() { this->searchQuery_ = nullptr;};
    inline string searchQuery() const { DARABONBA_PTR_GET_DEFAULT(searchQuery_, "") };
    inline RunCustomHotTopicViewPointAnalysisRequest& setSearchQuery(string searchQuery) { DARABONBA_PTR_SET_VALUE(searchQuery_, searchQuery) };


    // skipAskUser Field Functions 
    bool hasSkipAskUser() const { return this->skipAskUser_ != nullptr;};
    void deleteSkipAskUser() { this->skipAskUser_ = nullptr;};
    inline bool skipAskUser() const { DARABONBA_PTR_GET_DEFAULT(skipAskUser_, false) };
    inline RunCustomHotTopicViewPointAnalysisRequest& setSkipAskUser(bool skipAskUser) { DARABONBA_PTR_SET_VALUE(skipAskUser_, skipAskUser) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline RunCustomHotTopicViewPointAnalysisRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // topicId Field Functions 
    bool hasTopicId() const { return this->topicId_ != nullptr;};
    void deleteTopicId() { this->topicId_ = nullptr;};
    inline string topicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, "") };
    inline RunCustomHotTopicViewPointAnalysisRequest& setTopicId(string topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


    // topicSource Field Functions 
    bool hasTopicSource() const { return this->topicSource_ != nullptr;};
    void deleteTopicSource() { this->topicSource_ = nullptr;};
    inline string topicSource() const { DARABONBA_PTR_GET_DEFAULT(topicSource_, "") };
    inline RunCustomHotTopicViewPointAnalysisRequest& setTopicSource(string topicSource) { DARABONBA_PTR_SET_VALUE(topicSource_, topicSource) };


    // topicVersion Field Functions 
    bool hasTopicVersion() const { return this->topicVersion_ != nullptr;};
    void deleteTopicVersion() { this->topicVersion_ = nullptr;};
    inline string topicVersion() const { DARABONBA_PTR_GET_DEFAULT(topicVersion_, "") };
    inline RunCustomHotTopicViewPointAnalysisRequest& setTopicVersion(string topicVersion) { DARABONBA_PTR_SET_VALUE(topicVersion_, topicVersion) };


    // userBack Field Functions 
    bool hasUserBack() const { return this->userBack_ != nullptr;};
    void deleteUserBack() { this->userBack_ = nullptr;};
    inline string userBack() const { DARABONBA_PTR_GET_DEFAULT(userBack_, "") };
    inline RunCustomHotTopicViewPointAnalysisRequest& setUserBack(string userBack) { DARABONBA_PTR_SET_VALUE(userBack_, userBack) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunCustomHotTopicViewPointAnalysisRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> askUser_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<string> searchQuery_ = nullptr;
    std::shared_ptr<bool> skipAskUser_ = nullptr;
    std::shared_ptr<string> topic_ = nullptr;
    std::shared_ptr<string> topicId_ = nullptr;
    std::shared_ptr<string> topicSource_ = nullptr;
    std::shared_ptr<string> topicVersion_ = nullptr;
    std::shared_ptr<string> userBack_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
