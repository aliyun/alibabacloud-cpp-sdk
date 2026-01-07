// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTTOPICSUMMARIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTTOPICSUMMARIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class ListHotTopicSummariesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotTopicSummariesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(hotTopic, hotTopic_);
      DARABONBA_PTR_TO_JSON(hotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotTopicSummariesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(hotTopic, hotTopic_);
      DARABONBA_PTR_FROM_JSON(hotTopicVersion, hotTopicVersion_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
    };
    ListHotTopicSummariesRequest() = default ;
    ListHotTopicSummariesRequest(const ListHotTopicSummariesRequest &) = default ;
    ListHotTopicSummariesRequest(ListHotTopicSummariesRequest &&) = default ;
    ListHotTopicSummariesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotTopicSummariesRequest() = default ;
    ListHotTopicSummariesRequest& operator=(const ListHotTopicSummariesRequest &) = default ;
    ListHotTopicSummariesRequest& operator=(ListHotTopicSummariesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->hotTopic_ == nullptr && this->hotTopicVersion_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListHotTopicSummariesRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // hotTopic Field Functions 
    bool hasHotTopic() const { return this->hotTopic_ != nullptr;};
    void deleteHotTopic() { this->hotTopic_ = nullptr;};
    inline string getHotTopic() const { DARABONBA_PTR_GET_DEFAULT(hotTopic_, "") };
    inline ListHotTopicSummariesRequest& setHotTopic(string hotTopic) { DARABONBA_PTR_SET_VALUE(hotTopic_, hotTopic) };


    // hotTopicVersion Field Functions 
    bool hasHotTopicVersion() const { return this->hotTopicVersion_ != nullptr;};
    void deleteHotTopicVersion() { this->hotTopicVersion_ = nullptr;};
    inline string getHotTopicVersion() const { DARABONBA_PTR_GET_DEFAULT(hotTopicVersion_, "") };
    inline ListHotTopicSummariesRequest& setHotTopicVersion(string hotTopicVersion) { DARABONBA_PTR_SET_VALUE(hotTopicVersion_, hotTopicVersion) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListHotTopicSummariesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListHotTopicSummariesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    shared_ptr<string> category_ {};
    shared_ptr<string> hotTopic_ {};
    shared_ptr<string> hotTopicVersion_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
