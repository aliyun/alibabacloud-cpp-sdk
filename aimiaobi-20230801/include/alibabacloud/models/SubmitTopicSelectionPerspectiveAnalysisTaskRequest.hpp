// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTOPICSELECTIONPERSPECTIVEANALYSISTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTOPICSELECTIONPERSPECTIVEANALYSISTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitTopicSelectionPerspectiveAnalysisTaskRequestDocuments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitTopicSelectionPerspectiveAnalysisTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTopicSelectionPerspectiveAnalysisTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Documents, documents_);
      DARABONBA_PTR_TO_JSON(PerspectiveTypes, perspectiveTypes_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTopicSelectionPerspectiveAnalysisTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Documents, documents_);
      DARABONBA_PTR_FROM_JSON(PerspectiveTypes, perspectiveTypes_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    SubmitTopicSelectionPerspectiveAnalysisTaskRequest() = default ;
    SubmitTopicSelectionPerspectiveAnalysisTaskRequest(const SubmitTopicSelectionPerspectiveAnalysisTaskRequest &) = default ;
    SubmitTopicSelectionPerspectiveAnalysisTaskRequest(SubmitTopicSelectionPerspectiveAnalysisTaskRequest &&) = default ;
    SubmitTopicSelectionPerspectiveAnalysisTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTopicSelectionPerspectiveAnalysisTaskRequest() = default ;
    SubmitTopicSelectionPerspectiveAnalysisTaskRequest& operator=(const SubmitTopicSelectionPerspectiveAnalysisTaskRequest &) = default ;
    SubmitTopicSelectionPerspectiveAnalysisTaskRequest& operator=(SubmitTopicSelectionPerspectiveAnalysisTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->documents_ != nullptr && this->perspectiveTypes_ != nullptr && this->topic_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline SubmitTopicSelectionPerspectiveAnalysisTaskRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // documents Field Functions 
    bool hasDocuments() const { return this->documents_ != nullptr;};
    void deleteDocuments() { this->documents_ = nullptr;};
    inline const vector<SubmitTopicSelectionPerspectiveAnalysisTaskRequestDocuments> & documents() const { DARABONBA_PTR_GET_CONST(documents_, vector<SubmitTopicSelectionPerspectiveAnalysisTaskRequestDocuments>) };
    inline vector<SubmitTopicSelectionPerspectiveAnalysisTaskRequestDocuments> documents() { DARABONBA_PTR_GET(documents_, vector<SubmitTopicSelectionPerspectiveAnalysisTaskRequestDocuments>) };
    inline SubmitTopicSelectionPerspectiveAnalysisTaskRequest& setDocuments(const vector<SubmitTopicSelectionPerspectiveAnalysisTaskRequestDocuments> & documents) { DARABONBA_PTR_SET_VALUE(documents_, documents) };
    inline SubmitTopicSelectionPerspectiveAnalysisTaskRequest& setDocuments(vector<SubmitTopicSelectionPerspectiveAnalysisTaskRequestDocuments> && documents) { DARABONBA_PTR_SET_RVALUE(documents_, documents) };


    // perspectiveTypes Field Functions 
    bool hasPerspectiveTypes() const { return this->perspectiveTypes_ != nullptr;};
    void deletePerspectiveTypes() { this->perspectiveTypes_ = nullptr;};
    inline const vector<string> & perspectiveTypes() const { DARABONBA_PTR_GET_CONST(perspectiveTypes_, vector<string>) };
    inline vector<string> perspectiveTypes() { DARABONBA_PTR_GET(perspectiveTypes_, vector<string>) };
    inline SubmitTopicSelectionPerspectiveAnalysisTaskRequest& setPerspectiveTypes(const vector<string> & perspectiveTypes) { DARABONBA_PTR_SET_VALUE(perspectiveTypes_, perspectiveTypes) };
    inline SubmitTopicSelectionPerspectiveAnalysisTaskRequest& setPerspectiveTypes(vector<string> && perspectiveTypes) { DARABONBA_PTR_SET_RVALUE(perspectiveTypes_, perspectiveTypes) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline SubmitTopicSelectionPerspectiveAnalysisTaskRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<vector<SubmitTopicSelectionPerspectiveAnalysisTaskRequestDocuments>> documents_ = nullptr;
    std::shared_ptr<vector<string>> perspectiveTypes_ = nullptr;
    std::shared_ptr<string> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
