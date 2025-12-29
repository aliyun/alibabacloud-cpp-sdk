// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMVIEWPOINTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMVIEWPOINTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListCustomViewPointsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomViewPointsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Attitude, attitude_);
      DARABONBA_PTR_TO_JSON(Attitudes, attitudesShrink_);
      DARABONBA_PTR_TO_JSON(CustomViewPointId, customViewPointId_);
      DARABONBA_PTR_TO_JSON(CustomViewPointIds, customViewPointIdsShrink_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(TopicId, topicId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomViewPointsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Attitude, attitude_);
      DARABONBA_PTR_FROM_JSON(Attitudes, attitudesShrink_);
      DARABONBA_PTR_FROM_JSON(CustomViewPointId, customViewPointId_);
      DARABONBA_PTR_FROM_JSON(CustomViewPointIds, customViewPointIdsShrink_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
    };
    ListCustomViewPointsShrinkRequest() = default ;
    ListCustomViewPointsShrinkRequest(const ListCustomViewPointsShrinkRequest &) = default ;
    ListCustomViewPointsShrinkRequest(ListCustomViewPointsShrinkRequest &&) = default ;
    ListCustomViewPointsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomViewPointsShrinkRequest() = default ;
    ListCustomViewPointsShrinkRequest& operator=(const ListCustomViewPointsShrinkRequest &) = default ;
    ListCustomViewPointsShrinkRequest& operator=(ListCustomViewPointsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->attitude_ == nullptr && this->attitudesShrink_ == nullptr && this->customViewPointId_ == nullptr && this->customViewPointIdsShrink_ == nullptr && this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->topic_ == nullptr && this->topicId_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ListCustomViewPointsShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // attitude Field Functions 
    bool hasAttitude() const { return this->attitude_ != nullptr;};
    void deleteAttitude() { this->attitude_ = nullptr;};
    inline string getAttitude() const { DARABONBA_PTR_GET_DEFAULT(attitude_, "") };
    inline ListCustomViewPointsShrinkRequest& setAttitude(string attitude) { DARABONBA_PTR_SET_VALUE(attitude_, attitude) };


    // attitudesShrink Field Functions 
    bool hasAttitudesShrink() const { return this->attitudesShrink_ != nullptr;};
    void deleteAttitudesShrink() { this->attitudesShrink_ = nullptr;};
    inline string getAttitudesShrink() const { DARABONBA_PTR_GET_DEFAULT(attitudesShrink_, "") };
    inline ListCustomViewPointsShrinkRequest& setAttitudesShrink(string attitudesShrink) { DARABONBA_PTR_SET_VALUE(attitudesShrink_, attitudesShrink) };


    // customViewPointId Field Functions 
    bool hasCustomViewPointId() const { return this->customViewPointId_ != nullptr;};
    void deleteCustomViewPointId() { this->customViewPointId_ = nullptr;};
    inline string getCustomViewPointId() const { DARABONBA_PTR_GET_DEFAULT(customViewPointId_, "") };
    inline ListCustomViewPointsShrinkRequest& setCustomViewPointId(string customViewPointId) { DARABONBA_PTR_SET_VALUE(customViewPointId_, customViewPointId) };


    // customViewPointIdsShrink Field Functions 
    bool hasCustomViewPointIdsShrink() const { return this->customViewPointIdsShrink_ != nullptr;};
    void deleteCustomViewPointIdsShrink() { this->customViewPointIdsShrink_ = nullptr;};
    inline string getCustomViewPointIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(customViewPointIdsShrink_, "") };
    inline ListCustomViewPointsShrinkRequest& setCustomViewPointIdsShrink(string customViewPointIdsShrink) { DARABONBA_PTR_SET_VALUE(customViewPointIdsShrink_, customViewPointIdsShrink) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCustomViewPointsShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCustomViewPointsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline ListCustomViewPointsShrinkRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // topicId Field Functions 
    bool hasTopicId() const { return this->topicId_ != nullptr;};
    void deleteTopicId() { this->topicId_ = nullptr;};
    inline string getTopicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, "") };
    inline ListCustomViewPointsShrinkRequest& setTopicId(string topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentKey_ {};
    shared_ptr<string> attitude_ {};
    shared_ptr<string> attitudesShrink_ {};
    shared_ptr<string> customViewPointId_ {};
    shared_ptr<string> customViewPointIdsShrink_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> topic_ {};
    shared_ptr<string> topicId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
