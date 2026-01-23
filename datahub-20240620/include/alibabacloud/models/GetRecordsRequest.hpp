// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
namespace Models
{
  class GetRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(ShardId, shardId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, GetRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(ShardId, shardId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    GetRecordsRequest() = default ;
    GetRecordsRequest(const GetRecordsRequest &) = default ;
    GetRecordsRequest(GetRecordsRequest &&) = default ;
    GetRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRecordsRequest() = default ;
    GetRecordsRequest& operator=(const GetRecordsRequest &) = default ;
    GetRecordsRequest& operator=(GetRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectName_ == nullptr
        && this->shardId_ == nullptr && this->startTime_ == nullptr && this->topicName_ == nullptr; };
    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetRecordsRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // shardId Field Functions 
    bool hasShardId() const { return this->shardId_ != nullptr;};
    void deleteShardId() { this->shardId_ = nullptr;};
    inline string getShardId() const { DARABONBA_PTR_GET_DEFAULT(shardId_, "") };
    inline GetRecordsRequest& setShardId(string shardId) { DARABONBA_PTR_SET_VALUE(shardId_, shardId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetRecordsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline GetRecordsRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    shared_ptr<string> shardId_ {};
    shared_ptr<int64_t> startTime_ {};
    // This parameter is required.
    shared_ptr<string> topicName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif
