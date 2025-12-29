// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTOPICSELECTIONPERSPECTIVEANALYSISTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTOPICSELECTIONPERSPECTIVEANALYSISTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitTopicSelectionPerspectiveAnalysisTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTopicSelectionPerspectiveAnalysisTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Documents, documentsShrink_);
      DARABONBA_PTR_TO_JSON(PerspectiveTypes, perspectiveTypesShrink_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTopicSelectionPerspectiveAnalysisTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Documents, documentsShrink_);
      DARABONBA_PTR_FROM_JSON(PerspectiveTypes, perspectiveTypesShrink_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    SubmitTopicSelectionPerspectiveAnalysisTaskShrinkRequest() = default ;
    SubmitTopicSelectionPerspectiveAnalysisTaskShrinkRequest(const SubmitTopicSelectionPerspectiveAnalysisTaskShrinkRequest &) = default ;
    SubmitTopicSelectionPerspectiveAnalysisTaskShrinkRequest(SubmitTopicSelectionPerspectiveAnalysisTaskShrinkRequest &&) = default ;
    SubmitTopicSelectionPerspectiveAnalysisTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTopicSelectionPerspectiveAnalysisTaskShrinkRequest() = default ;
    SubmitTopicSelectionPerspectiveAnalysisTaskShrinkRequest& operator=(const SubmitTopicSelectionPerspectiveAnalysisTaskShrinkRequest &) = default ;
    SubmitTopicSelectionPerspectiveAnalysisTaskShrinkRequest& operator=(SubmitTopicSelectionPerspectiveAnalysisTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->documentsShrink_ == nullptr && this->perspectiveTypesShrink_ == nullptr && this->topic_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline SubmitTopicSelectionPerspectiveAnalysisTaskShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // documentsShrink Field Functions 
    bool hasDocumentsShrink() const { return this->documentsShrink_ != nullptr;};
    void deleteDocumentsShrink() { this->documentsShrink_ = nullptr;};
    inline string getDocumentsShrink() const { DARABONBA_PTR_GET_DEFAULT(documentsShrink_, "") };
    inline SubmitTopicSelectionPerspectiveAnalysisTaskShrinkRequest& setDocumentsShrink(string documentsShrink) { DARABONBA_PTR_SET_VALUE(documentsShrink_, documentsShrink) };


    // perspectiveTypesShrink Field Functions 
    bool hasPerspectiveTypesShrink() const { return this->perspectiveTypesShrink_ != nullptr;};
    void deletePerspectiveTypesShrink() { this->perspectiveTypesShrink_ = nullptr;};
    inline string getPerspectiveTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(perspectiveTypesShrink_, "") };
    inline SubmitTopicSelectionPerspectiveAnalysisTaskShrinkRequest& setPerspectiveTypesShrink(string perspectiveTypesShrink) { DARABONBA_PTR_SET_VALUE(perspectiveTypesShrink_, perspectiveTypesShrink) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline SubmitTopicSelectionPerspectiveAnalysisTaskShrinkRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentKey_ {};
    shared_ptr<string> documentsShrink_ {};
    shared_ptr<string> perspectiveTypesShrink_ {};
    shared_ptr<string> topic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
