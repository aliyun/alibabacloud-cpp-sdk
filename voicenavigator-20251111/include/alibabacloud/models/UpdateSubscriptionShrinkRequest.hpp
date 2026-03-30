// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESUBSCRIPTIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESUBSCRIPTIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class UpdateSubscriptionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSubscriptionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(EventSubscriptions, eventSubscriptionsShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MqInstanceId, mqInstanceId_);
      DARABONBA_PTR_TO_JSON(MqType, mqType_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(ProducerId, producerId_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSubscriptionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(EventSubscriptions, eventSubscriptionsShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MqInstanceId, mqInstanceId_);
      DARABONBA_PTR_FROM_JSON(MqType, mqType_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(ProducerId, producerId_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    UpdateSubscriptionShrinkRequest() = default ;
    UpdateSubscriptionShrinkRequest(const UpdateSubscriptionShrinkRequest &) = default ;
    UpdateSubscriptionShrinkRequest(UpdateSubscriptionShrinkRequest &&) = default ;
    UpdateSubscriptionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSubscriptionShrinkRequest() = default ;
    UpdateSubscriptionShrinkRequest& operator=(const UpdateSubscriptionShrinkRequest &) = default ;
    UpdateSubscriptionShrinkRequest& operator=(UpdateSubscriptionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endpoint_ == nullptr
        && this->eventSubscriptionsShrink_ == nullptr && this->instanceId_ == nullptr && this->mqInstanceId_ == nullptr && this->mqType_ == nullptr && this->password_ == nullptr
        && this->producerId_ == nullptr && this->topic_ == nullptr && this->userName_ == nullptr; };
    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline UpdateSubscriptionShrinkRequest& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // eventSubscriptionsShrink Field Functions 
    bool hasEventSubscriptionsShrink() const { return this->eventSubscriptionsShrink_ != nullptr;};
    void deleteEventSubscriptionsShrink() { this->eventSubscriptionsShrink_ = nullptr;};
    inline string getEventSubscriptionsShrink() const { DARABONBA_PTR_GET_DEFAULT(eventSubscriptionsShrink_, "") };
    inline UpdateSubscriptionShrinkRequest& setEventSubscriptionsShrink(string eventSubscriptionsShrink) { DARABONBA_PTR_SET_VALUE(eventSubscriptionsShrink_, eventSubscriptionsShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateSubscriptionShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mqInstanceId Field Functions 
    bool hasMqInstanceId() const { return this->mqInstanceId_ != nullptr;};
    void deleteMqInstanceId() { this->mqInstanceId_ = nullptr;};
    inline string getMqInstanceId() const { DARABONBA_PTR_GET_DEFAULT(mqInstanceId_, "") };
    inline UpdateSubscriptionShrinkRequest& setMqInstanceId(string mqInstanceId) { DARABONBA_PTR_SET_VALUE(mqInstanceId_, mqInstanceId) };


    // mqType Field Functions 
    bool hasMqType() const { return this->mqType_ != nullptr;};
    void deleteMqType() { this->mqType_ = nullptr;};
    inline string getMqType() const { DARABONBA_PTR_GET_DEFAULT(mqType_, "") };
    inline UpdateSubscriptionShrinkRequest& setMqType(string mqType) { DARABONBA_PTR_SET_VALUE(mqType_, mqType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline UpdateSubscriptionShrinkRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // producerId Field Functions 
    bool hasProducerId() const { return this->producerId_ != nullptr;};
    void deleteProducerId() { this->producerId_ = nullptr;};
    inline string getProducerId() const { DARABONBA_PTR_GET_DEFAULT(producerId_, "") };
    inline UpdateSubscriptionShrinkRequest& setProducerId(string producerId) { DARABONBA_PTR_SET_VALUE(producerId_, producerId) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline UpdateSubscriptionShrinkRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline UpdateSubscriptionShrinkRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    shared_ptr<string> endpoint_ {};
    shared_ptr<string> eventSubscriptionsShrink_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> mqInstanceId_ {};
    shared_ptr<string> mqType_ {};
    shared_ptr<string> password_ {};
    shared_ptr<string> producerId_ {};
    shared_ptr<string> topic_ {};
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
