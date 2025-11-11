// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTTOPICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTTOPICSREQUEST_HPP_
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
  class ListHotTopicsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotTopicsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(TopicIds, topicIds_);
      DARABONBA_PTR_TO_JSON(TopicQuery, topicQuery_);
      DARABONBA_PTR_TO_JSON(TopicSource, topicSource_);
      DARABONBA_PTR_TO_JSON(TopicVersion, topicVersion_);
      DARABONBA_PTR_TO_JSON(Topics, topics_);
      DARABONBA_PTR_TO_JSON(WithNews, withNews_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotTopicsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(TopicIds, topicIds_);
      DARABONBA_PTR_FROM_JSON(TopicQuery, topicQuery_);
      DARABONBA_PTR_FROM_JSON(TopicSource, topicSource_);
      DARABONBA_PTR_FROM_JSON(TopicVersion, topicVersion_);
      DARABONBA_PTR_FROM_JSON(Topics, topics_);
      DARABONBA_PTR_FROM_JSON(WithNews, withNews_);
    };
    ListHotTopicsRequest() = default ;
    ListHotTopicsRequest(const ListHotTopicsRequest &) = default ;
    ListHotTopicsRequest(ListHotTopicsRequest &&) = default ;
    ListHotTopicsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotTopicsRequest() = default ;
    ListHotTopicsRequest& operator=(const ListHotTopicsRequest &) = default ;
    ListHotTopicsRequest& operator=(ListHotTopicsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->topicIds_ == nullptr && return this->topicQuery_ == nullptr && return this->topicSource_ == nullptr
        && return this->topicVersion_ == nullptr && return this->topics_ == nullptr && return this->withNews_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ListHotTopicsRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListHotTopicsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListHotTopicsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // topicIds Field Functions 
    bool hasTopicIds() const { return this->topicIds_ != nullptr;};
    void deleteTopicIds() { this->topicIds_ = nullptr;};
    inline const vector<string> & topicIds() const { DARABONBA_PTR_GET_CONST(topicIds_, vector<string>) };
    inline vector<string> topicIds() { DARABONBA_PTR_GET(topicIds_, vector<string>) };
    inline ListHotTopicsRequest& setTopicIds(const vector<string> & topicIds) { DARABONBA_PTR_SET_VALUE(topicIds_, topicIds) };
    inline ListHotTopicsRequest& setTopicIds(vector<string> && topicIds) { DARABONBA_PTR_SET_RVALUE(topicIds_, topicIds) };


    // topicQuery Field Functions 
    bool hasTopicQuery() const { return this->topicQuery_ != nullptr;};
    void deleteTopicQuery() { this->topicQuery_ = nullptr;};
    inline string topicQuery() const { DARABONBA_PTR_GET_DEFAULT(topicQuery_, "") };
    inline ListHotTopicsRequest& setTopicQuery(string topicQuery) { DARABONBA_PTR_SET_VALUE(topicQuery_, topicQuery) };


    // topicSource Field Functions 
    bool hasTopicSource() const { return this->topicSource_ != nullptr;};
    void deleteTopicSource() { this->topicSource_ = nullptr;};
    inline string topicSource() const { DARABONBA_PTR_GET_DEFAULT(topicSource_, "") };
    inline ListHotTopicsRequest& setTopicSource(string topicSource) { DARABONBA_PTR_SET_VALUE(topicSource_, topicSource) };


    // topicVersion Field Functions 
    bool hasTopicVersion() const { return this->topicVersion_ != nullptr;};
    void deleteTopicVersion() { this->topicVersion_ = nullptr;};
    inline string topicVersion() const { DARABONBA_PTR_GET_DEFAULT(topicVersion_, "") };
    inline ListHotTopicsRequest& setTopicVersion(string topicVersion) { DARABONBA_PTR_SET_VALUE(topicVersion_, topicVersion) };


    // topics Field Functions 
    bool hasTopics() const { return this->topics_ != nullptr;};
    void deleteTopics() { this->topics_ = nullptr;};
    inline const vector<string> & topics() const { DARABONBA_PTR_GET_CONST(topics_, vector<string>) };
    inline vector<string> topics() { DARABONBA_PTR_GET(topics_, vector<string>) };
    inline ListHotTopicsRequest& setTopics(const vector<string> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
    inline ListHotTopicsRequest& setTopics(vector<string> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


    // withNews Field Functions 
    bool hasWithNews() const { return this->withNews_ != nullptr;};
    void deleteWithNews() { this->withNews_ = nullptr;};
    inline bool withNews() const { DARABONBA_PTR_GET_DEFAULT(withNews_, false) };
    inline ListHotTopicsRequest& setWithNews(bool withNews) { DARABONBA_PTR_SET_VALUE(withNews_, withNews) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<string>> topicIds_ = nullptr;
    std::shared_ptr<string> topicQuery_ = nullptr;
    std::shared_ptr<string> topicSource_ = nullptr;
    std::shared_ptr<string> topicVersion_ = nullptr;
    std::shared_ptr<vector<string>> topics_ = nullptr;
    std::shared_ptr<bool> withNews_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
