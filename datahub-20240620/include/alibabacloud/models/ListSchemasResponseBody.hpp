// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEMASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEMASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
namespace Models
{
  class ListSchemasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSchemasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSchemasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSchemasResponseBody() = default ;
    ListSchemasResponseBody(const ListSchemasResponseBody &) = default ;
    ListSchemasResponseBody(ListSchemasResponseBody &&) = default ;
    ListSchemasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSchemasResponseBody() = default ;
    ListSchemasResponseBody& operator=(const ListSchemasResponseBody &) = default ;
    ListSchemasResponseBody& operator=(ListSchemasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(RecordSchema, recordSchema_);
        DARABONBA_PTR_TO_JSON(TopicName, topicName_);
        DARABONBA_PTR_TO_JSON(VersionId, versionId_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(RecordSchema, recordSchema_);
        DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
        DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->creator_ == nullptr && this->projectName_ == nullptr && this->recordSchema_ == nullptr && this->topicName_ == nullptr && this->versionId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline List& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline List& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline List& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // recordSchema Field Functions 
      bool hasRecordSchema() const { return this->recordSchema_ != nullptr;};
      void deleteRecordSchema() { this->recordSchema_ = nullptr;};
      inline string getRecordSchema() const { DARABONBA_PTR_GET_DEFAULT(recordSchema_, "") };
      inline List& setRecordSchema(string recordSchema) { DARABONBA_PTR_SET_VALUE(recordSchema_, recordSchema) };


      // topicName Field Functions 
      bool hasTopicName() const { return this->topicName_ != nullptr;};
      void deleteTopicName() { this->topicName_ = nullptr;};
      inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
      inline List& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


      // versionId Field Functions 
      bool hasVersionId() const { return this->versionId_ != nullptr;};
      void deleteVersionId() { this->versionId_ = nullptr;};
      inline int32_t getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, 0) };
      inline List& setVersionId(int32_t versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    protected:
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> creator_ {};
      shared_ptr<string> projectName_ {};
      shared_ptr<string> recordSchema_ {};
      shared_ptr<string> topicName_ {};
      shared_ptr<int32_t> versionId_ {};
    };

    virtual bool empty() const override { return this->list_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListSchemasResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<ListSchemasResponseBody::List>) };
    inline vector<ListSchemasResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<ListSchemasResponseBody::List>) };
    inline ListSchemasResponseBody& setList(const vector<ListSchemasResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListSchemasResponseBody& setList(vector<ListSchemasResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSchemasResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSchemasResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSchemasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListSchemasResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListSchemasResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListSchemasResponseBody::List>> list_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif
