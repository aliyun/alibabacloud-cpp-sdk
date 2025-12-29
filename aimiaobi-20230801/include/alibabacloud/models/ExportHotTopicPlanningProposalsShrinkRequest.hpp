// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTHOTTOPICPLANNINGPROPOSALSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTHOTTOPICPLANNINGPROPOSALSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ExportHotTopicPlanningProposalsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportHotTopicPlanningProposalsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(CustomViewPointIds, customViewPointIdsShrink_);
      DARABONBA_PTR_TO_JSON(ExportType, exportType_);
      DARABONBA_PTR_TO_JSON(Titles, titlesShrink_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(TopicSource, topicSource_);
      DARABONBA_PTR_TO_JSON(ViewPointType, viewPointType_);
    };
    friend void from_json(const Darabonba::Json& j, ExportHotTopicPlanningProposalsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(CustomViewPointIds, customViewPointIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ExportType, exportType_);
      DARABONBA_PTR_FROM_JSON(Titles, titlesShrink_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(TopicSource, topicSource_);
      DARABONBA_PTR_FROM_JSON(ViewPointType, viewPointType_);
    };
    ExportHotTopicPlanningProposalsShrinkRequest() = default ;
    ExportHotTopicPlanningProposalsShrinkRequest(const ExportHotTopicPlanningProposalsShrinkRequest &) = default ;
    ExportHotTopicPlanningProposalsShrinkRequest(ExportHotTopicPlanningProposalsShrinkRequest &&) = default ;
    ExportHotTopicPlanningProposalsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportHotTopicPlanningProposalsShrinkRequest() = default ;
    ExportHotTopicPlanningProposalsShrinkRequest& operator=(const ExportHotTopicPlanningProposalsShrinkRequest &) = default ;
    ExportHotTopicPlanningProposalsShrinkRequest& operator=(ExportHotTopicPlanningProposalsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->customViewPointIdsShrink_ == nullptr && this->exportType_ == nullptr && this->titlesShrink_ == nullptr && this->topic_ == nullptr && this->topicSource_ == nullptr
        && this->viewPointType_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ExportHotTopicPlanningProposalsShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // customViewPointIdsShrink Field Functions 
    bool hasCustomViewPointIdsShrink() const { return this->customViewPointIdsShrink_ != nullptr;};
    void deleteCustomViewPointIdsShrink() { this->customViewPointIdsShrink_ = nullptr;};
    inline string getCustomViewPointIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(customViewPointIdsShrink_, "") };
    inline ExportHotTopicPlanningProposalsShrinkRequest& setCustomViewPointIdsShrink(string customViewPointIdsShrink) { DARABONBA_PTR_SET_VALUE(customViewPointIdsShrink_, customViewPointIdsShrink) };


    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string getExportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline ExportHotTopicPlanningProposalsShrinkRequest& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // titlesShrink Field Functions 
    bool hasTitlesShrink() const { return this->titlesShrink_ != nullptr;};
    void deleteTitlesShrink() { this->titlesShrink_ = nullptr;};
    inline string getTitlesShrink() const { DARABONBA_PTR_GET_DEFAULT(titlesShrink_, "") };
    inline ExportHotTopicPlanningProposalsShrinkRequest& setTitlesShrink(string titlesShrink) { DARABONBA_PTR_SET_VALUE(titlesShrink_, titlesShrink) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline ExportHotTopicPlanningProposalsShrinkRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // topicSource Field Functions 
    bool hasTopicSource() const { return this->topicSource_ != nullptr;};
    void deleteTopicSource() { this->topicSource_ = nullptr;};
    inline string getTopicSource() const { DARABONBA_PTR_GET_DEFAULT(topicSource_, "") };
    inline ExportHotTopicPlanningProposalsShrinkRequest& setTopicSource(string topicSource) { DARABONBA_PTR_SET_VALUE(topicSource_, topicSource) };


    // viewPointType Field Functions 
    bool hasViewPointType() const { return this->viewPointType_ != nullptr;};
    void deleteViewPointType() { this->viewPointType_ = nullptr;};
    inline string getViewPointType() const { DARABONBA_PTR_GET_DEFAULT(viewPointType_, "") };
    inline ExportHotTopicPlanningProposalsShrinkRequest& setViewPointType(string viewPointType) { DARABONBA_PTR_SET_VALUE(viewPointType_, viewPointType) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentKey_ {};
    shared_ptr<string> customViewPointIdsShrink_ {};
    shared_ptr<string> exportType_ {};
    shared_ptr<string> titlesShrink_ {};
    // This parameter is required.
    shared_ptr<string> topic_ {};
    // This parameter is required.
    shared_ptr<string> topicSource_ {};
    shared_ptr<string> viewPointType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
