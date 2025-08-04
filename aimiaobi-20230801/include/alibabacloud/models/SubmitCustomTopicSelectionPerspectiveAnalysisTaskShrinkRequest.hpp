// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCUSTOMTOPICSELECTIONPERSPECTIVEANALYSISTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCUSTOMTOPICSELECTIONPERSPECTIVEANALYSISTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitCustomTopicSelectionPerspectiveAnalysisTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitCustomTopicSelectionPerspectiveAnalysisTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Documents, documentsShrink_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitCustomTopicSelectionPerspectiveAnalysisTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Documents, documentsShrink_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    SubmitCustomTopicSelectionPerspectiveAnalysisTaskShrinkRequest() = default ;
    SubmitCustomTopicSelectionPerspectiveAnalysisTaskShrinkRequest(const SubmitCustomTopicSelectionPerspectiveAnalysisTaskShrinkRequest &) = default ;
    SubmitCustomTopicSelectionPerspectiveAnalysisTaskShrinkRequest(SubmitCustomTopicSelectionPerspectiveAnalysisTaskShrinkRequest &&) = default ;
    SubmitCustomTopicSelectionPerspectiveAnalysisTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitCustomTopicSelectionPerspectiveAnalysisTaskShrinkRequest() = default ;
    SubmitCustomTopicSelectionPerspectiveAnalysisTaskShrinkRequest& operator=(const SubmitCustomTopicSelectionPerspectiveAnalysisTaskShrinkRequest &) = default ;
    SubmitCustomTopicSelectionPerspectiveAnalysisTaskShrinkRequest& operator=(SubmitCustomTopicSelectionPerspectiveAnalysisTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->documentsShrink_ != nullptr && this->prompt_ != nullptr && this->topic_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline SubmitCustomTopicSelectionPerspectiveAnalysisTaskShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // documentsShrink Field Functions 
    bool hasDocumentsShrink() const { return this->documentsShrink_ != nullptr;};
    void deleteDocumentsShrink() { this->documentsShrink_ = nullptr;};
    inline string documentsShrink() const { DARABONBA_PTR_GET_DEFAULT(documentsShrink_, "") };
    inline SubmitCustomTopicSelectionPerspectiveAnalysisTaskShrinkRequest& setDocumentsShrink(string documentsShrink) { DARABONBA_PTR_SET_VALUE(documentsShrink_, documentsShrink) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline SubmitCustomTopicSelectionPerspectiveAnalysisTaskShrinkRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline SubmitCustomTopicSelectionPerspectiveAnalysisTaskShrinkRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> documentsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<string> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
