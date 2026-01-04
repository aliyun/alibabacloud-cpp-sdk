// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEMASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEMASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
namespace Models
{
  class ListSchemasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSchemasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Skip, skip_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, ListSchemasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Skip, skip_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    ListSchemasRequest() = default ;
    ListSchemasRequest(const ListSchemasRequest &) = default ;
    ListSchemasRequest(ListSchemasRequest &&) = default ;
    ListSchemasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSchemasRequest() = default ;
    ListSchemasRequest& operator=(const ListSchemasRequest &) = default ;
    ListSchemasRequest& operator=(ListSchemasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->projectName_ == nullptr && this->skip_ == nullptr && this->topicName_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSchemasRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSchemasRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListSchemasRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // skip Field Functions 
    bool hasSkip() const { return this->skip_ != nullptr;};
    void deleteSkip() { this->skip_ = nullptr;};
    inline int32_t getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, 0) };
    inline ListSchemasRequest& setSkip(int32_t skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline ListSchemasRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    shared_ptr<int32_t> skip_ {};
    // This parameter is required.
    shared_ptr<string> topicName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif
