// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCUSTOMTOPICSELECTIONPERSPECTIVEANALYSISTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCUSTOMTOPICSELECTIONPERSPECTIVEANALYSISTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequestDocuments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Documents, documents_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Documents, documents_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest() = default ;
    SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest(const SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest &) = default ;
    SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest(SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest &&) = default ;
    SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest() = default ;
    SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest& operator=(const SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest &) = default ;
    SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest& operator=(SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->documents_ == nullptr && return this->prompt_ == nullptr && return this->topic_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // documents Field Functions 
    bool hasDocuments() const { return this->documents_ != nullptr;};
    void deleteDocuments() { this->documents_ = nullptr;};
    inline const vector<SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequestDocuments> & documents() const { DARABONBA_PTR_GET_CONST(documents_, vector<SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequestDocuments>) };
    inline vector<SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequestDocuments> documents() { DARABONBA_PTR_GET(documents_, vector<SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequestDocuments>) };
    inline SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest& setDocuments(const vector<SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequestDocuments> & documents) { DARABONBA_PTR_SET_VALUE(documents_, documents) };
    inline SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest& setDocuments(vector<SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequestDocuments> && documents) { DARABONBA_PTR_SET_RVALUE(documents_, documents) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<vector<SubmitCustomTopicSelectionPerspectiveAnalysisTaskRequestDocuments>> documents_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<string> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
