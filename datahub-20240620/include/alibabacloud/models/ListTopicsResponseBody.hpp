// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTOPICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTOPICSRESPONSEBODY_HPP_
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
  class ListTopicsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTopicsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTopicsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTopicsResponseBody() = default ;
    ListTopicsResponseBody(const ListTopicsResponseBody &) = default ;
    ListTopicsResponseBody(ListTopicsResponseBody &&) = default ;
    ListTopicsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTopicsResponseBody() = default ;
    ListTopicsResponseBody& operator=(const ListTopicsResponseBody &) = default ;
    ListTopicsResponseBody& operator=(ListTopicsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(Topic, topic_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(Topic, topic_);
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
      class Topic : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Topic& obj) { 
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(EnableSchemaRegistry, enableSchemaRegistry_);
          DARABONBA_PTR_TO_JSON(ExpandMode, expandMode_);
          DARABONBA_PTR_TO_JSON(Lifecycle, lifecycle_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
          DARABONBA_PTR_TO_JSON(RecordSchema, recordSchema_);
          DARABONBA_PTR_TO_JSON(RecordType, recordType_);
          DARABONBA_PTR_TO_JSON(ShardCount, shardCount_);
          DARABONBA_PTR_TO_JSON(Storage, storage_);
          DARABONBA_PTR_TO_JSON(TopicName, topicName_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, Topic& obj) { 
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(EnableSchemaRegistry, enableSchemaRegistry_);
          DARABONBA_PTR_FROM_JSON(ExpandMode, expandMode_);
          DARABONBA_PTR_FROM_JSON(Lifecycle, lifecycle_);
          DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
          DARABONBA_PTR_FROM_JSON(RecordSchema, recordSchema_);
          DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
          DARABONBA_PTR_FROM_JSON(ShardCount, shardCount_);
          DARABONBA_PTR_FROM_JSON(Storage, storage_);
          DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        Topic() = default ;
        Topic(const Topic &) = default ;
        Topic(Topic &&) = default ;
        Topic(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Topic() = default ;
        Topic& operator=(const Topic &) = default ;
        Topic& operator=(Topic &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->comment_ == nullptr
        && this->createTime_ == nullptr && this->creator_ == nullptr && this->enableSchemaRegistry_ == nullptr && this->expandMode_ == nullptr && this->lifecycle_ == nullptr
        && this->projectName_ == nullptr && this->recordSchema_ == nullptr && this->recordType_ == nullptr && this->shardCount_ == nullptr && this->storage_ == nullptr
        && this->topicName_ == nullptr && this->updateTime_ == nullptr; };
        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline Topic& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Topic& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline Topic& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // enableSchemaRegistry Field Functions 
        bool hasEnableSchemaRegistry() const { return this->enableSchemaRegistry_ != nullptr;};
        void deleteEnableSchemaRegistry() { this->enableSchemaRegistry_ = nullptr;};
        inline string getEnableSchemaRegistry() const { DARABONBA_PTR_GET_DEFAULT(enableSchemaRegistry_, "") };
        inline Topic& setEnableSchemaRegistry(string enableSchemaRegistry) { DARABONBA_PTR_SET_VALUE(enableSchemaRegistry_, enableSchemaRegistry) };


        // expandMode Field Functions 
        bool hasExpandMode() const { return this->expandMode_ != nullptr;};
        void deleteExpandMode() { this->expandMode_ = nullptr;};
        inline string getExpandMode() const { DARABONBA_PTR_GET_DEFAULT(expandMode_, "") };
        inline Topic& setExpandMode(string expandMode) { DARABONBA_PTR_SET_VALUE(expandMode_, expandMode) };


        // lifecycle Field Functions 
        bool hasLifecycle() const { return this->lifecycle_ != nullptr;};
        void deleteLifecycle() { this->lifecycle_ = nullptr;};
        inline int32_t getLifecycle() const { DARABONBA_PTR_GET_DEFAULT(lifecycle_, 0) };
        inline Topic& setLifecycle(int32_t lifecycle) { DARABONBA_PTR_SET_VALUE(lifecycle_, lifecycle) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline Topic& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // recordSchema Field Functions 
        bool hasRecordSchema() const { return this->recordSchema_ != nullptr;};
        void deleteRecordSchema() { this->recordSchema_ = nullptr;};
        inline string getRecordSchema() const { DARABONBA_PTR_GET_DEFAULT(recordSchema_, "") };
        inline Topic& setRecordSchema(string recordSchema) { DARABONBA_PTR_SET_VALUE(recordSchema_, recordSchema) };


        // recordType Field Functions 
        bool hasRecordType() const { return this->recordType_ != nullptr;};
        void deleteRecordType() { this->recordType_ = nullptr;};
        inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
        inline Topic& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


        // shardCount Field Functions 
        bool hasShardCount() const { return this->shardCount_ != nullptr;};
        void deleteShardCount() { this->shardCount_ = nullptr;};
        inline int32_t getShardCount() const { DARABONBA_PTR_GET_DEFAULT(shardCount_, 0) };
        inline Topic& setShardCount(int32_t shardCount) { DARABONBA_PTR_SET_VALUE(shardCount_, shardCount) };


        // storage Field Functions 
        bool hasStorage() const { return this->storage_ != nullptr;};
        void deleteStorage() { this->storage_ = nullptr;};
        inline int64_t getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0L) };
        inline Topic& setStorage(int64_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


        // topicName Field Functions 
        bool hasTopicName() const { return this->topicName_ != nullptr;};
        void deleteTopicName() { this->topicName_ = nullptr;};
        inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
        inline Topic& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline Topic& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<string> comment_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> enableSchemaRegistry_ {};
        shared_ptr<string> expandMode_ {};
        shared_ptr<int32_t> lifecycle_ {};
        shared_ptr<string> projectName_ {};
        shared_ptr<string> recordSchema_ {};
        shared_ptr<string> recordType_ {};
        shared_ptr<int32_t> shardCount_ {};
        shared_ptr<int64_t> storage_ {};
        shared_ptr<string> topicName_ {};
        shared_ptr<int64_t> updateTime_ {};
      };

      virtual bool empty() const override { return this->topic_ == nullptr; };
      // topic Field Functions 
      bool hasTopic() const { return this->topic_ != nullptr;};
      void deleteTopic() { this->topic_ = nullptr;};
      inline const vector<List::Topic> & getTopic() const { DARABONBA_PTR_GET_CONST(topic_, vector<List::Topic>) };
      inline vector<List::Topic> getTopic() { DARABONBA_PTR_GET(topic_, vector<List::Topic>) };
      inline List& setTopic(const vector<List::Topic> & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
      inline List& setTopic(vector<List::Topic> && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


    protected:
      shared_ptr<vector<List::Topic>> topic_ {};
    };

    virtual bool empty() const override { return this->list_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const ListTopicsResponseBody::List & getList() const { DARABONBA_PTR_GET_CONST(list_, ListTopicsResponseBody::List) };
    inline ListTopicsResponseBody::List getList() { DARABONBA_PTR_GET(list_, ListTopicsResponseBody::List) };
    inline ListTopicsResponseBody& setList(const ListTopicsResponseBody::List & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListTopicsResponseBody& setList(ListTopicsResponseBody::List && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTopicsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTopicsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTopicsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTopicsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTopicsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<ListTopicsResponseBody::List> list_ {};
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
