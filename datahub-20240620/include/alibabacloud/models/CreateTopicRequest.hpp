// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETOPICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETOPICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
namespace Models
{
  class CreateTopicRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTopicRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(EnableSchemaRegistry, enableSchemaRegistry_);
      DARABONBA_PTR_TO_JSON(ExpandMode, expandMode_);
      DARABONBA_PTR_TO_JSON(Lifecycle, lifecycle_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RecordSchema, recordSchema_);
      DARABONBA_PTR_TO_JSON(RecordType, recordType_);
      DARABONBA_PTR_TO_JSON(ShardCount, shardCount_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTopicRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(EnableSchemaRegistry, enableSchemaRegistry_);
      DARABONBA_PTR_FROM_JSON(ExpandMode, expandMode_);
      DARABONBA_PTR_FROM_JSON(Lifecycle, lifecycle_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RecordSchema, recordSchema_);
      DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
      DARABONBA_PTR_FROM_JSON(ShardCount, shardCount_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    CreateTopicRequest() = default ;
    CreateTopicRequest(const CreateTopicRequest &) = default ;
    CreateTopicRequest(CreateTopicRequest &&) = default ;
    CreateTopicRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTopicRequest() = default ;
    CreateTopicRequest& operator=(const CreateTopicRequest &) = default ;
    CreateTopicRequest& operator=(CreateTopicRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->enableSchemaRegistry_ == nullptr && this->expandMode_ == nullptr && this->lifecycle_ == nullptr && this->projectName_ == nullptr && this->recordSchema_ == nullptr
        && this->recordType_ == nullptr && this->shardCount_ == nullptr && this->topicName_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateTopicRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // enableSchemaRegistry Field Functions 
    bool hasEnableSchemaRegistry() const { return this->enableSchemaRegistry_ != nullptr;};
    void deleteEnableSchemaRegistry() { this->enableSchemaRegistry_ = nullptr;};
    inline bool getEnableSchemaRegistry() const { DARABONBA_PTR_GET_DEFAULT(enableSchemaRegistry_, false) };
    inline CreateTopicRequest& setEnableSchemaRegistry(bool enableSchemaRegistry) { DARABONBA_PTR_SET_VALUE(enableSchemaRegistry_, enableSchemaRegistry) };


    // expandMode Field Functions 
    bool hasExpandMode() const { return this->expandMode_ != nullptr;};
    void deleteExpandMode() { this->expandMode_ = nullptr;};
    inline bool getExpandMode() const { DARABONBA_PTR_GET_DEFAULT(expandMode_, false) };
    inline CreateTopicRequest& setExpandMode(bool expandMode) { DARABONBA_PTR_SET_VALUE(expandMode_, expandMode) };


    // lifecycle Field Functions 
    bool hasLifecycle() const { return this->lifecycle_ != nullptr;};
    void deleteLifecycle() { this->lifecycle_ = nullptr;};
    inline int32_t getLifecycle() const { DARABONBA_PTR_GET_DEFAULT(lifecycle_, 0) };
    inline CreateTopicRequest& setLifecycle(int32_t lifecycle) { DARABONBA_PTR_SET_VALUE(lifecycle_, lifecycle) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateTopicRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // recordSchema Field Functions 
    bool hasRecordSchema() const { return this->recordSchema_ != nullptr;};
    void deleteRecordSchema() { this->recordSchema_ = nullptr;};
    inline string getRecordSchema() const { DARABONBA_PTR_GET_DEFAULT(recordSchema_, "") };
    inline CreateTopicRequest& setRecordSchema(string recordSchema) { DARABONBA_PTR_SET_VALUE(recordSchema_, recordSchema) };


    // recordType Field Functions 
    bool hasRecordType() const { return this->recordType_ != nullptr;};
    void deleteRecordType() { this->recordType_ = nullptr;};
    inline string getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
    inline CreateTopicRequest& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


    // shardCount Field Functions 
    bool hasShardCount() const { return this->shardCount_ != nullptr;};
    void deleteShardCount() { this->shardCount_ = nullptr;};
    inline int32_t getShardCount() const { DARABONBA_PTR_GET_DEFAULT(shardCount_, 0) };
    inline CreateTopicRequest& setShardCount(int32_t shardCount) { DARABONBA_PTR_SET_VALUE(shardCount_, shardCount) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline CreateTopicRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // The description of the topic.
    // 
    // This parameter is required.
    shared_ptr<string> comment_ {};
    // Specifies whether to enable multi-version schema. After this feature is enabled, a topic can have multiple schemas. You can select one of the schemas for writing. The consumer automatically parses each record based on the version tag. If the schema for the corresponding version has been deleted, parsing fails.
    // 
    // > Enabling multi-version schema has the following impacts:
    // 1. You can no longer use the appendFields operation.
    //  2. You can create, delete, modify, and query schemas.
    //  3. Connectors are created by using the schema of the latest version.
    shared_ptr<bool> enableSchemaRegistry_ {};
    // The expansion mode of the topic. After the expansion mode is enabled, shards support horizontal scaling and no longer support merge or split operations. The number of shards can only increase and cannot decrease. After this mode is enabled, you can consume the current topic by using Kafka.
    shared_ptr<bool> expandMode_ {};
    // The lifecycle of the topic. Unit: days.
    // 
    // This parameter is required.
    shared_ptr<int32_t> lifecycle_ {};
    // The project name.
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The schema table structure.
    shared_ptr<string> recordSchema_ {};
    // The topic type. Valid values:
    // 
    // 1. Blob: supports writing a block of binary data as a single record.
    // 
    // 1. Tuple: supports database-like records where each record contains multiple columns. You must specify RecordSchema because data is transmitted over the network as strings and requires a schema to convert the data into the corresponding types.
    // 
    // This parameter is required.
    shared_ptr<string> recordType_ {};
    // The number of shards.
    // 
    // This parameter is required.
    shared_ptr<int32_t> shardCount_ {};
    // The topic name.
    // 
    // This parameter is required.
    shared_ptr<string> topicName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif
