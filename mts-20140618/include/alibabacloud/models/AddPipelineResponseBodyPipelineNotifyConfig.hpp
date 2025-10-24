// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPIPELINERESPONSEBODYPIPELINENOTIFYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_ADDPIPELINERESPONSEBODYPIPELINENOTIFYCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class AddPipelineResponseBodyPipelineNotifyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddPipelineResponseBodyPipelineNotifyConfig& obj) { 
      DARABONBA_PTR_TO_JSON(MqTag, mqTag_);
      DARABONBA_PTR_TO_JSON(MqTopic, mqTopic_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, AddPipelineResponseBodyPipelineNotifyConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(MqTag, mqTag_);
      DARABONBA_PTR_FROM_JSON(MqTopic, mqTopic_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    AddPipelineResponseBodyPipelineNotifyConfig() = default ;
    AddPipelineResponseBodyPipelineNotifyConfig(const AddPipelineResponseBodyPipelineNotifyConfig &) = default ;
    AddPipelineResponseBodyPipelineNotifyConfig(AddPipelineResponseBodyPipelineNotifyConfig &&) = default ;
    AddPipelineResponseBodyPipelineNotifyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddPipelineResponseBodyPipelineNotifyConfig() = default ;
    AddPipelineResponseBodyPipelineNotifyConfig& operator=(const AddPipelineResponseBodyPipelineNotifyConfig &) = default ;
    AddPipelineResponseBodyPipelineNotifyConfig& operator=(AddPipelineResponseBodyPipelineNotifyConfig &&) = default ;
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
    inline AddPipelineResponseBodyPipelineNotifyConfig& setMqTag(string mqTag) { DARABONBA_PTR_SET_VALUE(mqTag_, mqTag) };


    // mqTopic Field Functions 
    bool hasMqTopic() const { return this->mqTopic_ != nullptr;};
    void deleteMqTopic() { this->mqTopic_ = nullptr;};
    inline string mqTopic() const { DARABONBA_PTR_GET_DEFAULT(mqTopic_, "") };
    inline AddPipelineResponseBodyPipelineNotifyConfig& setMqTopic(string mqTopic) { DARABONBA_PTR_SET_VALUE(mqTopic_, mqTopic) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline AddPipelineResponseBodyPipelineNotifyConfig& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline AddPipelineResponseBodyPipelineNotifyConfig& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // The tag string.
    std::shared_ptr<string> mqTag_ = nullptr;
    // The queue of messages that are received.
    std::shared_ptr<string> mqTopic_ = nullptr;
    // The name of the queue.
    std::shared_ptr<string> queueName_ = nullptr;
    // The name of the topic.
    std::shared_ptr<string> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
