// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTTOPICSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTTOPICSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListHotTopicsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotTopicsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(TopicIds, topicIdsShrink_);
      DARABONBA_PTR_TO_JSON(TopicQuery, topicQuery_);
      DARABONBA_PTR_TO_JSON(TopicSource, topicSource_);
      DARABONBA_PTR_TO_JSON(TopicVersion, topicVersion_);
      DARABONBA_PTR_TO_JSON(Topics, topicsShrink_);
      DARABONBA_PTR_TO_JSON(WithNews, withNews_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotTopicsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(TopicIds, topicIdsShrink_);
      DARABONBA_PTR_FROM_JSON(TopicQuery, topicQuery_);
      DARABONBA_PTR_FROM_JSON(TopicSource, topicSource_);
      DARABONBA_PTR_FROM_JSON(TopicVersion, topicVersion_);
      DARABONBA_PTR_FROM_JSON(Topics, topicsShrink_);
      DARABONBA_PTR_FROM_JSON(WithNews, withNews_);
    };
    ListHotTopicsShrinkRequest() = default ;
    ListHotTopicsShrinkRequest(const ListHotTopicsShrinkRequest &) = default ;
    ListHotTopicsShrinkRequest(ListHotTopicsShrinkRequest &&) = default ;
    ListHotTopicsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotTopicsShrinkRequest() = default ;
    ListHotTopicsShrinkRequest& operator=(const ListHotTopicsShrinkRequest &) = default ;
    ListHotTopicsShrinkRequest& operator=(ListHotTopicsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->topicIdsShrink_ != nullptr && this->topicQuery_ != nullptr && this->topicSource_ != nullptr
        && this->topicVersion_ != nullptr && this->topicsShrink_ != nullptr && this->withNews_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ListHotTopicsShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListHotTopicsShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListHotTopicsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // topicIdsShrink Field Functions 
    bool hasTopicIdsShrink() const { return this->topicIdsShrink_ != nullptr;};
    void deleteTopicIdsShrink() { this->topicIdsShrink_ = nullptr;};
    inline string topicIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(topicIdsShrink_, "") };
    inline ListHotTopicsShrinkRequest& setTopicIdsShrink(string topicIdsShrink) { DARABONBA_PTR_SET_VALUE(topicIdsShrink_, topicIdsShrink) };


    // topicQuery Field Functions 
    bool hasTopicQuery() const { return this->topicQuery_ != nullptr;};
    void deleteTopicQuery() { this->topicQuery_ = nullptr;};
    inline string topicQuery() const { DARABONBA_PTR_GET_DEFAULT(topicQuery_, "") };
    inline ListHotTopicsShrinkRequest& setTopicQuery(string topicQuery) { DARABONBA_PTR_SET_VALUE(topicQuery_, topicQuery) };


    // topicSource Field Functions 
    bool hasTopicSource() const { return this->topicSource_ != nullptr;};
    void deleteTopicSource() { this->topicSource_ = nullptr;};
    inline string topicSource() const { DARABONBA_PTR_GET_DEFAULT(topicSource_, "") };
    inline ListHotTopicsShrinkRequest& setTopicSource(string topicSource) { DARABONBA_PTR_SET_VALUE(topicSource_, topicSource) };


    // topicVersion Field Functions 
    bool hasTopicVersion() const { return this->topicVersion_ != nullptr;};
    void deleteTopicVersion() { this->topicVersion_ = nullptr;};
    inline string topicVersion() const { DARABONBA_PTR_GET_DEFAULT(topicVersion_, "") };
    inline ListHotTopicsShrinkRequest& setTopicVersion(string topicVersion) { DARABONBA_PTR_SET_VALUE(topicVersion_, topicVersion) };


    // topicsShrink Field Functions 
    bool hasTopicsShrink() const { return this->topicsShrink_ != nullptr;};
    void deleteTopicsShrink() { this->topicsShrink_ = nullptr;};
    inline string topicsShrink() const { DARABONBA_PTR_GET_DEFAULT(topicsShrink_, "") };
    inline ListHotTopicsShrinkRequest& setTopicsShrink(string topicsShrink) { DARABONBA_PTR_SET_VALUE(topicsShrink_, topicsShrink) };


    // withNews Field Functions 
    bool hasWithNews() const { return this->withNews_ != nullptr;};
    void deleteWithNews() { this->withNews_ = nullptr;};
    inline bool withNews() const { DARABONBA_PTR_GET_DEFAULT(withNews_, false) };
    inline ListHotTopicsShrinkRequest& setWithNews(bool withNews) { DARABONBA_PTR_SET_VALUE(withNews_, withNews) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> topicIdsShrink_ = nullptr;
    std::shared_ptr<string> topicQuery_ = nullptr;
    std::shared_ptr<string> topicSource_ = nullptr;
    std::shared_ptr<string> topicVersion_ = nullptr;
    std::shared_ptr<string> topicsShrink_ = nullptr;
    std::shared_ptr<bool> withNews_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
