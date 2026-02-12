// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSCONSUMERTIMESPANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ONSCONSUMERTIMESPANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsConsumerTimeSpanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsConsumerTimeSpanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, OnsConsumerTimeSpanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    OnsConsumerTimeSpanRequest() = default ;
    OnsConsumerTimeSpanRequest(const OnsConsumerTimeSpanRequest &) = default ;
    OnsConsumerTimeSpanRequest(OnsConsumerTimeSpanRequest &&) = default ;
    OnsConsumerTimeSpanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsConsumerTimeSpanRequest() = default ;
    OnsConsumerTimeSpanRequest& operator=(const OnsConsumerTimeSpanRequest &) = default ;
    OnsConsumerTimeSpanRequest& operator=(OnsConsumerTimeSpanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->instanceId_ == nullptr && this->topic_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline OnsConsumerTimeSpanRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline OnsConsumerTimeSpanRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline OnsConsumerTimeSpanRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // The ID of the consumer group whose reset time range you want to query.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The ID of the instance to which the consumer group belongs.
    shared_ptr<string> instanceId_ {};
    // The topic to which the consumer group subscribes.
    // 
    // This parameter is required.
    shared_ptr<string> topic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
