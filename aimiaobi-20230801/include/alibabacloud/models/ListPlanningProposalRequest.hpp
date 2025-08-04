// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLANNINGPROPOSALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPLANNINGPROPOSALREQUEST_HPP_
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
  class ListPlanningProposalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPlanningProposalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(CustomViewPointId, customViewPointId_);
      DARABONBA_PTR_TO_JSON(CustomViewPointIds, customViewPointIds_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Titles, titles_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(TopicSource, topicSource_);
      DARABONBA_PTR_TO_JSON(TopicVersion, topicVersion_);
      DARABONBA_PTR_TO_JSON(ViewPointType, viewPointType_);
    };
    friend void from_json(const Darabonba::Json& j, ListPlanningProposalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(CustomViewPointId, customViewPointId_);
      DARABONBA_PTR_FROM_JSON(CustomViewPointIds, customViewPointIds_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Titles, titles_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(TopicSource, topicSource_);
      DARABONBA_PTR_FROM_JSON(TopicVersion, topicVersion_);
      DARABONBA_PTR_FROM_JSON(ViewPointType, viewPointType_);
    };
    ListPlanningProposalRequest() = default ;
    ListPlanningProposalRequest(const ListPlanningProposalRequest &) = default ;
    ListPlanningProposalRequest(ListPlanningProposalRequest &&) = default ;
    ListPlanningProposalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPlanningProposalRequest() = default ;
    ListPlanningProposalRequest& operator=(const ListPlanningProposalRequest &) = default ;
    ListPlanningProposalRequest& operator=(ListPlanningProposalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->customViewPointId_ != nullptr && this->customViewPointIds_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->titles_ != nullptr
        && this->topic_ != nullptr && this->topicSource_ != nullptr && this->topicVersion_ != nullptr && this->viewPointType_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ListPlanningProposalRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // customViewPointId Field Functions 
    bool hasCustomViewPointId() const { return this->customViewPointId_ != nullptr;};
    void deleteCustomViewPointId() { this->customViewPointId_ = nullptr;};
    inline string customViewPointId() const { DARABONBA_PTR_GET_DEFAULT(customViewPointId_, "") };
    inline ListPlanningProposalRequest& setCustomViewPointId(string customViewPointId) { DARABONBA_PTR_SET_VALUE(customViewPointId_, customViewPointId) };


    // customViewPointIds Field Functions 
    bool hasCustomViewPointIds() const { return this->customViewPointIds_ != nullptr;};
    void deleteCustomViewPointIds() { this->customViewPointIds_ = nullptr;};
    inline const vector<string> & customViewPointIds() const { DARABONBA_PTR_GET_CONST(customViewPointIds_, vector<string>) };
    inline vector<string> customViewPointIds() { DARABONBA_PTR_GET(customViewPointIds_, vector<string>) };
    inline ListPlanningProposalRequest& setCustomViewPointIds(const vector<string> & customViewPointIds) { DARABONBA_PTR_SET_VALUE(customViewPointIds_, customViewPointIds) };
    inline ListPlanningProposalRequest& setCustomViewPointIds(vector<string> && customViewPointIds) { DARABONBA_PTR_SET_RVALUE(customViewPointIds_, customViewPointIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPlanningProposalRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPlanningProposalRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // titles Field Functions 
    bool hasTitles() const { return this->titles_ != nullptr;};
    void deleteTitles() { this->titles_ = nullptr;};
    inline const vector<string> & titles() const { DARABONBA_PTR_GET_CONST(titles_, vector<string>) };
    inline vector<string> titles() { DARABONBA_PTR_GET(titles_, vector<string>) };
    inline ListPlanningProposalRequest& setTitles(const vector<string> & titles) { DARABONBA_PTR_SET_VALUE(titles_, titles) };
    inline ListPlanningProposalRequest& setTitles(vector<string> && titles) { DARABONBA_PTR_SET_RVALUE(titles_, titles) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline ListPlanningProposalRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // topicSource Field Functions 
    bool hasTopicSource() const { return this->topicSource_ != nullptr;};
    void deleteTopicSource() { this->topicSource_ = nullptr;};
    inline string topicSource() const { DARABONBA_PTR_GET_DEFAULT(topicSource_, "") };
    inline ListPlanningProposalRequest& setTopicSource(string topicSource) { DARABONBA_PTR_SET_VALUE(topicSource_, topicSource) };


    // topicVersion Field Functions 
    bool hasTopicVersion() const { return this->topicVersion_ != nullptr;};
    void deleteTopicVersion() { this->topicVersion_ = nullptr;};
    inline string topicVersion() const { DARABONBA_PTR_GET_DEFAULT(topicVersion_, "") };
    inline ListPlanningProposalRequest& setTopicVersion(string topicVersion) { DARABONBA_PTR_SET_VALUE(topicVersion_, topicVersion) };


    // viewPointType Field Functions 
    bool hasViewPointType() const { return this->viewPointType_ != nullptr;};
    void deleteViewPointType() { this->viewPointType_ = nullptr;};
    inline string viewPointType() const { DARABONBA_PTR_GET_DEFAULT(viewPointType_, "") };
    inline ListPlanningProposalRequest& setViewPointType(string viewPointType) { DARABONBA_PTR_SET_VALUE(viewPointType_, viewPointType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> customViewPointId_ = nullptr;
    std::shared_ptr<vector<string>> customViewPointIds_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<string>> titles_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> topic_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> topicSource_ = nullptr;
    std::shared_ptr<string> topicVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> viewPointType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
