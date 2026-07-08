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
      DARABONBA_PTR_TO_JSON(CreateTimeEnd, createTimeEnd_);
      DARABONBA_PTR_TO_JSON(CreateTimeStart, createTimeStart_);
      DARABONBA_PTR_TO_JSON(CustomField, customField_);
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
      DARABONBA_PTR_FROM_JSON(CreateTimeEnd, createTimeEnd_);
      DARABONBA_PTR_FROM_JSON(CreateTimeStart, createTimeStart_);
      DARABONBA_PTR_FROM_JSON(CustomField, customField_);
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
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->createTimeEnd_ == nullptr && this->createTimeStart_ == nullptr && this->customField_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->topicIdsShrink_ == nullptr && this->topicQuery_ == nullptr && this->topicSource_ == nullptr && this->topicVersion_ == nullptr && this->topicsShrink_ == nullptr
        && this->withNews_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ListHotTopicsShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // createTimeEnd Field Functions 
    bool hasCreateTimeEnd() const { return this->createTimeEnd_ != nullptr;};
    void deleteCreateTimeEnd() { this->createTimeEnd_ = nullptr;};
    inline string getCreateTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(createTimeEnd_, "") };
    inline ListHotTopicsShrinkRequest& setCreateTimeEnd(string createTimeEnd) { DARABONBA_PTR_SET_VALUE(createTimeEnd_, createTimeEnd) };


    // createTimeStart Field Functions 
    bool hasCreateTimeStart() const { return this->createTimeStart_ != nullptr;};
    void deleteCreateTimeStart() { this->createTimeStart_ = nullptr;};
    inline string getCreateTimeStart() const { DARABONBA_PTR_GET_DEFAULT(createTimeStart_, "") };
    inline ListHotTopicsShrinkRequest& setCreateTimeStart(string createTimeStart) { DARABONBA_PTR_SET_VALUE(createTimeStart_, createTimeStart) };


    // customField Field Functions 
    bool hasCustomField() const { return this->customField_ != nullptr;};
    void deleteCustomField() { this->customField_ = nullptr;};
    inline string getCustomField() const { DARABONBA_PTR_GET_DEFAULT(customField_, "") };
    inline ListHotTopicsShrinkRequest& setCustomField(string customField) { DARABONBA_PTR_SET_VALUE(customField_, customField) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListHotTopicsShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListHotTopicsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // topicIdsShrink Field Functions 
    bool hasTopicIdsShrink() const { return this->topicIdsShrink_ != nullptr;};
    void deleteTopicIdsShrink() { this->topicIdsShrink_ = nullptr;};
    inline string getTopicIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(topicIdsShrink_, "") };
    inline ListHotTopicsShrinkRequest& setTopicIdsShrink(string topicIdsShrink) { DARABONBA_PTR_SET_VALUE(topicIdsShrink_, topicIdsShrink) };


    // topicQuery Field Functions 
    bool hasTopicQuery() const { return this->topicQuery_ != nullptr;};
    void deleteTopicQuery() { this->topicQuery_ = nullptr;};
    inline string getTopicQuery() const { DARABONBA_PTR_GET_DEFAULT(topicQuery_, "") };
    inline ListHotTopicsShrinkRequest& setTopicQuery(string topicQuery) { DARABONBA_PTR_SET_VALUE(topicQuery_, topicQuery) };


    // topicSource Field Functions 
    bool hasTopicSource() const { return this->topicSource_ != nullptr;};
    void deleteTopicSource() { this->topicSource_ = nullptr;};
    inline string getTopicSource() const { DARABONBA_PTR_GET_DEFAULT(topicSource_, "") };
    inline ListHotTopicsShrinkRequest& setTopicSource(string topicSource) { DARABONBA_PTR_SET_VALUE(topicSource_, topicSource) };


    // topicVersion Field Functions 
    bool hasTopicVersion() const { return this->topicVersion_ != nullptr;};
    void deleteTopicVersion() { this->topicVersion_ = nullptr;};
    inline string getTopicVersion() const { DARABONBA_PTR_GET_DEFAULT(topicVersion_, "") };
    inline ListHotTopicsShrinkRequest& setTopicVersion(string topicVersion) { DARABONBA_PTR_SET_VALUE(topicVersion_, topicVersion) };


    // topicsShrink Field Functions 
    bool hasTopicsShrink() const { return this->topicsShrink_ != nullptr;};
    void deleteTopicsShrink() { this->topicsShrink_ = nullptr;};
    inline string getTopicsShrink() const { DARABONBA_PTR_GET_DEFAULT(topicsShrink_, "") };
    inline ListHotTopicsShrinkRequest& setTopicsShrink(string topicsShrink) { DARABONBA_PTR_SET_VALUE(topicsShrink_, topicsShrink) };


    // withNews Field Functions 
    bool hasWithNews() const { return this->withNews_ != nullptr;};
    void deleteWithNews() { this->withNews_ = nullptr;};
    inline bool getWithNews() const { DARABONBA_PTR_GET_DEFAULT(withNews_, false) };
    inline ListHotTopicsShrinkRequest& setWithNews(bool withNews) { DARABONBA_PTR_SET_VALUE(withNews_, withNews) };


  protected:
    // The unique identifier of the business space.
    // 
    // This parameter is required.
    shared_ptr<string> agentKey_ {};
    // The end of the creation time filter range (inclusive). The value must be in the `yyyy-MM-dd HH:mm:ss` format.
    shared_ptr<string> createTimeEnd_ {};
    // The start of the creation time filter range (inclusive). The value must be in the `yyyy-MM-dd HH:mm:ss` format.
    shared_ptr<string> createTimeStart_ {};
    // Filters the results by a custom business field. The service performs an exact keyword match on this field. The value can be up to 255 characters long.
    shared_ptr<string> customField_ {};
    // The maximum number of results to return for a single request. If this parameter is not specified, the service uses a default value.
    shared_ptr<int32_t> maxResults_ {};
    // The token used to retrieve the next page of results. If you do not specify this parameter, the service returns the first page of results. You can get this token from the `NextToken` response parameter of the previous request.
    shared_ptr<string> nextToken_ {};
    // A list of topic IDs.
    shared_ptr<string> topicIdsShrink_ {};
    // The keywords for a full-text search on hot topics.
    shared_ptr<string> topicQuery_ {};
    // Filters the results by hot topic source. For a list of supported hot topic sources, call the `ListHotSources` operation.
    // 
    // `Aggregation`: represents the aggregated list of national hot topics.
    shared_ptr<string> topicSource_ {};
    // Filters the results by data version.
    shared_ptr<string> topicVersion_ {};
    // Filters the results by hot topic.
    shared_ptr<string> topicsShrink_ {};
    // Specifies whether to include news in the response.
    shared_ptr<bool> withNews_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
