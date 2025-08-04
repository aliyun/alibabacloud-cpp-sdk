// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWEBREVIEWPOINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWEBREVIEWPOINTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListWebReviewPointsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWebReviewPointsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(TopicSource, topicSource_);
    };
    friend void from_json(const Darabonba::Json& j, ListWebReviewPointsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(TopicSource, topicSource_);
    };
    ListWebReviewPointsRequest() = default ;
    ListWebReviewPointsRequest(const ListWebReviewPointsRequest &) = default ;
    ListWebReviewPointsRequest(ListWebReviewPointsRequest &&) = default ;
    ListWebReviewPointsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWebReviewPointsRequest() = default ;
    ListWebReviewPointsRequest& operator=(const ListWebReviewPointsRequest &) = default ;
    ListWebReviewPointsRequest& operator=(ListWebReviewPointsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->topic_ != nullptr && this->topicSource_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ListWebReviewPointsRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListWebReviewPointsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWebReviewPointsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline ListWebReviewPointsRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // topicSource Field Functions 
    bool hasTopicSource() const { return this->topicSource_ != nullptr;};
    void deleteTopicSource() { this->topicSource_ = nullptr;};
    inline string topicSource() const { DARABONBA_PTR_GET_DEFAULT(topicSource_, "") };
    inline ListWebReviewPointsRequest& setTopicSource(string topicSource) { DARABONBA_PTR_SET_VALUE(topicSource_, topicSource) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> topic_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> topicSource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
