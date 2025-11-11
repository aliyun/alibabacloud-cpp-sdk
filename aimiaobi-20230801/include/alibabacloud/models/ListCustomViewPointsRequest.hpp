// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMVIEWPOINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMVIEWPOINTSREQUEST_HPP_
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
  class ListCustomViewPointsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomViewPointsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Attitude, attitude_);
      DARABONBA_PTR_TO_JSON(Attitudes, attitudes_);
      DARABONBA_PTR_TO_JSON(CustomViewPointId, customViewPointId_);
      DARABONBA_PTR_TO_JSON(CustomViewPointIds, customViewPointIds_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(TopicId, topicId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomViewPointsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Attitude, attitude_);
      DARABONBA_PTR_FROM_JSON(Attitudes, attitudes_);
      DARABONBA_PTR_FROM_JSON(CustomViewPointId, customViewPointId_);
      DARABONBA_PTR_FROM_JSON(CustomViewPointIds, customViewPointIds_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
    };
    ListCustomViewPointsRequest() = default ;
    ListCustomViewPointsRequest(const ListCustomViewPointsRequest &) = default ;
    ListCustomViewPointsRequest(ListCustomViewPointsRequest &&) = default ;
    ListCustomViewPointsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomViewPointsRequest() = default ;
    ListCustomViewPointsRequest& operator=(const ListCustomViewPointsRequest &) = default ;
    ListCustomViewPointsRequest& operator=(ListCustomViewPointsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->attitude_ == nullptr && return this->attitudes_ == nullptr && return this->customViewPointId_ == nullptr && return this->customViewPointIds_ == nullptr && return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->topic_ == nullptr && return this->topicId_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ListCustomViewPointsRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // attitude Field Functions 
    bool hasAttitude() const { return this->attitude_ != nullptr;};
    void deleteAttitude() { this->attitude_ = nullptr;};
    inline string attitude() const { DARABONBA_PTR_GET_DEFAULT(attitude_, "") };
    inline ListCustomViewPointsRequest& setAttitude(string attitude) { DARABONBA_PTR_SET_VALUE(attitude_, attitude) };


    // attitudes Field Functions 
    bool hasAttitudes() const { return this->attitudes_ != nullptr;};
    void deleteAttitudes() { this->attitudes_ = nullptr;};
    inline const vector<string> & attitudes() const { DARABONBA_PTR_GET_CONST(attitudes_, vector<string>) };
    inline vector<string> attitudes() { DARABONBA_PTR_GET(attitudes_, vector<string>) };
    inline ListCustomViewPointsRequest& setAttitudes(const vector<string> & attitudes) { DARABONBA_PTR_SET_VALUE(attitudes_, attitudes) };
    inline ListCustomViewPointsRequest& setAttitudes(vector<string> && attitudes) { DARABONBA_PTR_SET_RVALUE(attitudes_, attitudes) };


    // customViewPointId Field Functions 
    bool hasCustomViewPointId() const { return this->customViewPointId_ != nullptr;};
    void deleteCustomViewPointId() { this->customViewPointId_ = nullptr;};
    inline string customViewPointId() const { DARABONBA_PTR_GET_DEFAULT(customViewPointId_, "") };
    inline ListCustomViewPointsRequest& setCustomViewPointId(string customViewPointId) { DARABONBA_PTR_SET_VALUE(customViewPointId_, customViewPointId) };


    // customViewPointIds Field Functions 
    bool hasCustomViewPointIds() const { return this->customViewPointIds_ != nullptr;};
    void deleteCustomViewPointIds() { this->customViewPointIds_ = nullptr;};
    inline const vector<string> & customViewPointIds() const { DARABONBA_PTR_GET_CONST(customViewPointIds_, vector<string>) };
    inline vector<string> customViewPointIds() { DARABONBA_PTR_GET(customViewPointIds_, vector<string>) };
    inline ListCustomViewPointsRequest& setCustomViewPointIds(const vector<string> & customViewPointIds) { DARABONBA_PTR_SET_VALUE(customViewPointIds_, customViewPointIds) };
    inline ListCustomViewPointsRequest& setCustomViewPointIds(vector<string> && customViewPointIds) { DARABONBA_PTR_SET_RVALUE(customViewPointIds_, customViewPointIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCustomViewPointsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCustomViewPointsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline ListCustomViewPointsRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // topicId Field Functions 
    bool hasTopicId() const { return this->topicId_ != nullptr;};
    void deleteTopicId() { this->topicId_ = nullptr;};
    inline string topicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, "") };
    inline ListCustomViewPointsRequest& setTopicId(string topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> attitude_ = nullptr;
    std::shared_ptr<vector<string>> attitudes_ = nullptr;
    std::shared_ptr<string> customViewPointId_ = nullptr;
    std::shared_ptr<vector<string>> customViewPointIds_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> topic_ = nullptr;
    std::shared_ptr<string> topicId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
