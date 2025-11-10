// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetTopicResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(liteTopicExpiration, liteTopicExpiration_);
      DARABONBA_PTR_TO_JSON(maxSendTps, maxSendTps_);
      DARABONBA_PTR_TO_JSON(messageType, messageType_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(topicName, topicName_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(liteTopicExpiration, liteTopicExpiration_);
      DARABONBA_PTR_FROM_JSON(maxSendTps, maxSendTps_);
      DARABONBA_PTR_FROM_JSON(messageType, messageType_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(topicName, topicName_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    GetTopicResponseBodyData() = default ;
    GetTopicResponseBodyData(const GetTopicResponseBodyData &) = default ;
    GetTopicResponseBodyData(GetTopicResponseBodyData &&) = default ;
    GetTopicResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicResponseBodyData() = default ;
    GetTopicResponseBodyData& operator=(const GetTopicResponseBodyData &) = default ;
    GetTopicResponseBodyData& operator=(GetTopicResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->instanceId_ == nullptr && return this->liteTopicExpiration_ == nullptr && return this->maxSendTps_ == nullptr && return this->messageType_ == nullptr && return this->regionId_ == nullptr
        && return this->remark_ == nullptr && return this->status_ == nullptr && return this->topicName_ == nullptr && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetTopicResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetTopicResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // liteTopicExpiration Field Functions 
    bool hasLiteTopicExpiration() const { return this->liteTopicExpiration_ != nullptr;};
    void deleteLiteTopicExpiration() { this->liteTopicExpiration_ = nullptr;};
    inline int64_t liteTopicExpiration() const { DARABONBA_PTR_GET_DEFAULT(liteTopicExpiration_, 0L) };
    inline GetTopicResponseBodyData& setLiteTopicExpiration(int64_t liteTopicExpiration) { DARABONBA_PTR_SET_VALUE(liteTopicExpiration_, liteTopicExpiration) };


    // maxSendTps Field Functions 
    bool hasMaxSendTps() const { return this->maxSendTps_ != nullptr;};
    void deleteMaxSendTps() { this->maxSendTps_ = nullptr;};
    inline int64_t maxSendTps() const { DARABONBA_PTR_GET_DEFAULT(maxSendTps_, 0L) };
    inline GetTopicResponseBodyData& setMaxSendTps(int64_t maxSendTps) { DARABONBA_PTR_SET_VALUE(maxSendTps_, maxSendTps) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string messageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline GetTopicResponseBodyData& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTopicResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetTopicResponseBodyData& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetTopicResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline GetTopicResponseBodyData& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetTopicResponseBodyData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // Creation time of the topic.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the instance to which the topic belongs.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> liteTopicExpiration_ = nullptr;
    // The maximum TPS for message sending.
    std::shared_ptr<int64_t> maxSendTps_ = nullptr;
    // The type of messages in the topic.
    // 
    // Valid values:
    // 
    // *   TRANSACTION: transactional messages
    // *   FIFO: ordered messages
    // *   DELAY: scheduled or delayed messages
    // *   NORMAL: normal messages
    // 
    // Valid values:
    // 
    // *   TRANSACTION: transactional messages
    // *   FIFO: ordered messages
    // *   DELAY: scheduled or delayed messages
    // *   NORMAL: normal messages
    std::shared_ptr<string> messageType_ = nullptr;
    // The region ID to which the instance belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    // Remark information of the topic.
    std::shared_ptr<string> remark_ = nullptr;
    // The topic status.
    // 
    // Valid values:
    // 
    // *   RUNNING
    // *   CREATING
    std::shared_ptr<string> status_ = nullptr;
    // Topic name.
    std::shared_ptr<string> topicName_ = nullptr;
    // Last modification time of the topic.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
