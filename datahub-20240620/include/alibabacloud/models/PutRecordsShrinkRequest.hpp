// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTRECORDSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTRECORDSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
namespace Models
{
  class PutRecordsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutRecordsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Records, recordsShrink_);
      DARABONBA_PTR_TO_JSON(ShardId, shardId_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, PutRecordsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Records, recordsShrink_);
      DARABONBA_PTR_FROM_JSON(ShardId, shardId_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    PutRecordsShrinkRequest() = default ;
    PutRecordsShrinkRequest(const PutRecordsShrinkRequest &) = default ;
    PutRecordsShrinkRequest(PutRecordsShrinkRequest &&) = default ;
    PutRecordsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutRecordsShrinkRequest() = default ;
    PutRecordsShrinkRequest& operator=(const PutRecordsShrinkRequest &) = default ;
    PutRecordsShrinkRequest& operator=(PutRecordsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectName_ == nullptr
        && this->recordsShrink_ == nullptr && this->shardId_ == nullptr && this->topicName_ == nullptr; };
    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline PutRecordsShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // recordsShrink Field Functions 
    bool hasRecordsShrink() const { return this->recordsShrink_ != nullptr;};
    void deleteRecordsShrink() { this->recordsShrink_ = nullptr;};
    inline string getRecordsShrink() const { DARABONBA_PTR_GET_DEFAULT(recordsShrink_, "") };
    inline PutRecordsShrinkRequest& setRecordsShrink(string recordsShrink) { DARABONBA_PTR_SET_VALUE(recordsShrink_, recordsShrink) };


    // shardId Field Functions 
    bool hasShardId() const { return this->shardId_ != nullptr;};
    void deleteShardId() { this->shardId_ = nullptr;};
    inline string getShardId() const { DARABONBA_PTR_GET_DEFAULT(shardId_, "") };
    inline PutRecordsShrinkRequest& setShardId(string shardId) { DARABONBA_PTR_SET_VALUE(shardId_, shardId) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline PutRecordsShrinkRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // This parameter is required.
    shared_ptr<string> recordsShrink_ {};
    shared_ptr<string> shardId_ {};
    // This parameter is required.
    shared_ptr<string> topicName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif
