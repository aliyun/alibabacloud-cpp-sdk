// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPIPELINELISTRESPONSEBODYPIPELINELISTPIPELINENOTIFYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_QUERYPIPELINELISTRESPONSEBODYPIPELINELISTPIPELINENOTIFYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryPipelineListResponseBodyPipelineListPipelineNotifyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPipelineListResponseBodyPipelineListPipelineNotifyConfig& obj) { 
      DARABONBA_PTR_TO_JSON(MqTag, mqTag_);
      DARABONBA_PTR_TO_JSON(MqTopic, mqTopic_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPipelineListResponseBodyPipelineListPipelineNotifyConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(MqTag, mqTag_);
      DARABONBA_PTR_FROM_JSON(MqTopic, mqTopic_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    QueryPipelineListResponseBodyPipelineListPipelineNotifyConfig() = default ;
    QueryPipelineListResponseBodyPipelineListPipelineNotifyConfig(const QueryPipelineListResponseBodyPipelineListPipelineNotifyConfig &) = default ;
    QueryPipelineListResponseBodyPipelineListPipelineNotifyConfig(QueryPipelineListResponseBodyPipelineListPipelineNotifyConfig &&) = default ;
    QueryPipelineListResponseBodyPipelineListPipelineNotifyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPipelineListResponseBodyPipelineListPipelineNotifyConfig() = default ;
    QueryPipelineListResponseBodyPipelineListPipelineNotifyConfig& operator=(const QueryPipelineListResponseBodyPipelineListPipelineNotifyConfig &) = default ;
    QueryPipelineListResponseBodyPipelineListPipelineNotifyConfig& operator=(QueryPipelineListResponseBodyPipelineListPipelineNotifyConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mqTag_ == nullptr
        && return this->mqTopic_ == nullptr && return this->queueName_ == nullptr && return this->topic_ == nullptr; };
    // mqTag Field Functions 
    bool hasMqTag() const { return this->mqTag_ != nullptr;};
    void deleteMqTag() { this->mqTag_ = nullptr;};
    inline string mqTag() const { DARABONBA_PTR_GET_DEFAULT(mqTag_, "") };
    inline QueryPipelineListResponseBodyPipelineListPipelineNotifyConfig& setMqTag(string mqTag) { DARABONBA_PTR_SET_VALUE(mqTag_, mqTag) };


    // mqTopic Field Functions 
    bool hasMqTopic() const { return this->mqTopic_ != nullptr;};
    void deleteMqTopic() { this->mqTopic_ = nullptr;};
    inline string mqTopic() const { DARABONBA_PTR_GET_DEFAULT(mqTopic_, "") };
    inline QueryPipelineListResponseBodyPipelineListPipelineNotifyConfig& setMqTopic(string mqTopic) { DARABONBA_PTR_SET_VALUE(mqTopic_, mqTopic) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline QueryPipelineListResponseBodyPipelineListPipelineNotifyConfig& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline QueryPipelineListResponseBodyPipelineListPipelineNotifyConfig& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // The tag string.
    std::shared_ptr<string> mqTag_ = nullptr;
    // The queue of messages that are received.
    std::shared_ptr<string> mqTopic_ = nullptr;
    // The name of the queue that is created in MNS.
    std::shared_ptr<string> queueName_ = nullptr;
    // The name of the topic that is created in MNS.
    std::shared_ptr<string> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
