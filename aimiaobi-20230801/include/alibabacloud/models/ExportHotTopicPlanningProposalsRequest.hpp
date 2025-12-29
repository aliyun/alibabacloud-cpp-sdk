// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTHOTTOPICPLANNINGPROPOSALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTHOTTOPICPLANNINGPROPOSALSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ExportHotTopicPlanningProposalsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportHotTopicPlanningProposalsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(CustomViewPointIds, customViewPointIds_);
      DARABONBA_PTR_TO_JSON(ExportType, exportType_);
      DARABONBA_PTR_TO_JSON(Titles, titles_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(TopicSource, topicSource_);
      DARABONBA_PTR_TO_JSON(ViewPointType, viewPointType_);
    };
    friend void from_json(const Darabonba::Json& j, ExportHotTopicPlanningProposalsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(CustomViewPointIds, customViewPointIds_);
      DARABONBA_PTR_FROM_JSON(ExportType, exportType_);
      DARABONBA_PTR_FROM_JSON(Titles, titles_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(TopicSource, topicSource_);
      DARABONBA_PTR_FROM_JSON(ViewPointType, viewPointType_);
    };
    ExportHotTopicPlanningProposalsRequest() = default ;
    ExportHotTopicPlanningProposalsRequest(const ExportHotTopicPlanningProposalsRequest &) = default ;
    ExportHotTopicPlanningProposalsRequest(ExportHotTopicPlanningProposalsRequest &&) = default ;
    ExportHotTopicPlanningProposalsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportHotTopicPlanningProposalsRequest() = default ;
    ExportHotTopicPlanningProposalsRequest& operator=(const ExportHotTopicPlanningProposalsRequest &) = default ;
    ExportHotTopicPlanningProposalsRequest& operator=(ExportHotTopicPlanningProposalsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->customViewPointIds_ == nullptr && this->exportType_ == nullptr && this->titles_ == nullptr && this->topic_ == nullptr && this->topicSource_ == nullptr
        && this->viewPointType_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ExportHotTopicPlanningProposalsRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // customViewPointIds Field Functions 
    bool hasCustomViewPointIds() const { return this->customViewPointIds_ != nullptr;};
    void deleteCustomViewPointIds() { this->customViewPointIds_ = nullptr;};
    inline const vector<string> & getCustomViewPointIds() const { DARABONBA_PTR_GET_CONST(customViewPointIds_, vector<string>) };
    inline vector<string> getCustomViewPointIds() { DARABONBA_PTR_GET(customViewPointIds_, vector<string>) };
    inline ExportHotTopicPlanningProposalsRequest& setCustomViewPointIds(const vector<string> & customViewPointIds) { DARABONBA_PTR_SET_VALUE(customViewPointIds_, customViewPointIds) };
    inline ExportHotTopicPlanningProposalsRequest& setCustomViewPointIds(vector<string> && customViewPointIds) { DARABONBA_PTR_SET_RVALUE(customViewPointIds_, customViewPointIds) };


    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string getExportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline ExportHotTopicPlanningProposalsRequest& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // titles Field Functions 
    bool hasTitles() const { return this->titles_ != nullptr;};
    void deleteTitles() { this->titles_ = nullptr;};
    inline const vector<string> & getTitles() const { DARABONBA_PTR_GET_CONST(titles_, vector<string>) };
    inline vector<string> getTitles() { DARABONBA_PTR_GET(titles_, vector<string>) };
    inline ExportHotTopicPlanningProposalsRequest& setTitles(const vector<string> & titles) { DARABONBA_PTR_SET_VALUE(titles_, titles) };
    inline ExportHotTopicPlanningProposalsRequest& setTitles(vector<string> && titles) { DARABONBA_PTR_SET_RVALUE(titles_, titles) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline ExportHotTopicPlanningProposalsRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // topicSource Field Functions 
    bool hasTopicSource() const { return this->topicSource_ != nullptr;};
    void deleteTopicSource() { this->topicSource_ = nullptr;};
    inline string getTopicSource() const { DARABONBA_PTR_GET_DEFAULT(topicSource_, "") };
    inline ExportHotTopicPlanningProposalsRequest& setTopicSource(string topicSource) { DARABONBA_PTR_SET_VALUE(topicSource_, topicSource) };


    // viewPointType Field Functions 
    bool hasViewPointType() const { return this->viewPointType_ != nullptr;};
    void deleteViewPointType() { this->viewPointType_ = nullptr;};
    inline string getViewPointType() const { DARABONBA_PTR_GET_DEFAULT(viewPointType_, "") };
    inline ExportHotTopicPlanningProposalsRequest& setViewPointType(string viewPointType) { DARABONBA_PTR_SET_VALUE(viewPointType_, viewPointType) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentKey_ {};
    shared_ptr<vector<string>> customViewPointIds_ {};
    shared_ptr<string> exportType_ {};
    shared_ptr<vector<string>> titles_ {};
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
