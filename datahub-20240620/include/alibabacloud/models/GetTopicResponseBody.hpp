// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
namespace Models
{
  class GetTopicResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(EnableSchemaRegistry, enableSchemaRegistry_);
      DARABONBA_PTR_TO_JSON(ExpandMode, expandMode_);
      DARABONBA_PTR_TO_JSON(Lifecycle, lifecycle_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RecordSchema, recordSchema_);
      DARABONBA_PTR_TO_JSON(RecordType, recordType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShardCount, shardCount_);
      DARABONBA_PTR_TO_JSON(Storage, storage_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(EnableSchemaRegistry, enableSchemaRegistry_);
      DARABONBA_PTR_FROM_JSON(ExpandMode, expandMode_);
      DARABONBA_PTR_FROM_JSON(Lifecycle, lifecycle_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RecordSchema, recordSchema_);
      DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShardCount, shardCount_);
      DARABONBA_PTR_FROM_JSON(Storage, storage_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetTopicResponseBody() = default ;
    GetTopicResponseBody(const GetTopicResponseBody &) = default ;
    GetTopicResponseBody(GetTopicResponseBody &&) = default ;
    GetTopicResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicResponseBody() = default ;
    GetTopicResponseBody& operator=(const GetTopicResponseBody &) = default ;
    GetTopicResponseBody& operator=(GetTopicResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->createTime_ == nullptr && this->creator_ == nullptr && this->enableSchemaRegistry_ == nullptr && this->expandMode_ == nullptr && this->lifecycle_ == nullptr
        && this->projectName_ == nullptr && this->recordSchema_ == nullptr && this->recordType_ == nullptr && this->requestId_ == nullptr && this->shardCount_ == nullptr
        && this->storage_ == nullptr && this->success_ == nullptr && this->topicName_ == nullptr && this->updateTime_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetTopicResponseBody& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetTopicResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetTopicResponseBody& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // enableSchemaRegistry Field Functions 
    bool hasEnableSchemaRegistry() const { return this->enableSchemaRegistry_ != nullptr;};
    void deleteEnableSchemaRegistry() { this->enableSchemaRegistry_ = nullptr;};
    inline bool getEnableSchemaRegistry() const { DARABONBA_PTR_GET_DEFAULT(enableSchemaRegistry_, false) };
    inline GetTopicResponseBody& setEnableSchemaRegistry(bool enableSchemaRegistry) { DARABONBA_PTR_SET_VALUE(enableSchemaRegistry_, enableSchemaRegistry) };


    // expandMode Field Functions 
    bool hasExpandMode() const { return this->expandMode_ != nullptr;};
    void deleteExpandMode() { this->expandMode_ = nullptr;};
    inline bool getExpandMode() const { DARABONBA_PTR_GET_DEFAULT(expandMode_, false) };
    inline GetTopicResponseBody& setExpandMode(bool expandMode) { DARABONBA_PTR_SET_VALUE(expandMode_, expandMode) };


    // lifecycle Field Functions 
    bool hasLifecycle() const { return this->lifecycle_ != nullptr;};
    void deleteLifecycle() { this->lifecycle_ = nullptr;};
    inline int32_t getLifecycle() const { DARABONBA_PTR_GET_DEFAULT(lifecycle_, 0) };
    inline GetTopicResponseBody& setLifecycle(int32_t lifecycle) { DARABONBA_PTR_SET_VALUE(lifecycle_, lifecycle) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetTopicResponseBody& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // recordSchema Field Functions 
    bool hasRecordSchema() const { return this->recordSchema_ != nullptr;};
    void deleteRecordSchema() { this->recordSchema_ = nullptr;};
    inline string getRecordSchema() const { DARABONBA_PTR_GET_DEFAULT(recordSchema_, "") };
    inline GetTopicResponseBody& setRecordSchema(string recordSchema) { DARABONBA_PTR_SET_VALUE(recordSchema_, recordSchema) };


    // recordType Field Functions 
    bool hasRecordType() const { return this->recordType_ != nullptr;};
    void deleteRecordType() { this->recordType_ = nullptr;};
    inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
    inline GetTopicResponseBody& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTopicResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // shardCount Field Functions 
    bool hasShardCount() const { return this->shardCount_ != nullptr;};
    void deleteShardCount() { this->shardCount_ = nullptr;};
    inline int32_t getShardCount() const { DARABONBA_PTR_GET_DEFAULT(shardCount_, 0) };
    inline GetTopicResponseBody& setShardCount(int32_t shardCount) { DARABONBA_PTR_SET_VALUE(shardCount_, shardCount) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline int64_t getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0L) };
    inline GetTopicResponseBody& setStorage(int64_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTopicResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline GetTopicResponseBody& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetTopicResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    shared_ptr<string> comment_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<string> creator_ {};
    shared_ptr<bool> enableSchemaRegistry_ {};
    shared_ptr<bool> expandMode_ {};
    shared_ptr<int32_t> lifecycle_ {};
    shared_ptr<string> projectName_ {};
    shared_ptr<string> recordSchema_ {};
    shared_ptr<string> recordType_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> shardCount_ {};
    shared_ptr<int64_t> storage_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> topicName_ {};
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif
