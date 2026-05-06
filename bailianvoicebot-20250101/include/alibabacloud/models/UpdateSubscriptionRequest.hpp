// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESUBSCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESUBSCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianVoiceBot20250101
{
namespace Models
{
  class UpdateSubscriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSubscriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(EventSubscriptions, eventSubscriptions_);
      DARABONBA_PTR_TO_JSON(MqInstanceId, mqInstanceId_);
      DARABONBA_PTR_TO_JSON(MqType, mqType_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(ProducerId, producerId_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSubscriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(EventSubscriptions, eventSubscriptions_);
      DARABONBA_PTR_FROM_JSON(MqInstanceId, mqInstanceId_);
      DARABONBA_PTR_FROM_JSON(MqType, mqType_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(ProducerId, producerId_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    UpdateSubscriptionRequest() = default ;
    UpdateSubscriptionRequest(const UpdateSubscriptionRequest &) = default ;
    UpdateSubscriptionRequest(UpdateSubscriptionRequest &&) = default ;
    UpdateSubscriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSubscriptionRequest() = default ;
    UpdateSubscriptionRequest& operator=(const UpdateSubscriptionRequest &) = default ;
    UpdateSubscriptionRequest& operator=(UpdateSubscriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessUnitId_ == nullptr
        && this->endpoint_ == nullptr && this->eventSubscriptions_ == nullptr && this->mqInstanceId_ == nullptr && this->mqType_ == nullptr && this->password_ == nullptr
        && this->producerId_ == nullptr && this->topic_ == nullptr && this->userName_ == nullptr; };
    // businessUnitId Field Functions 
    bool hasBusinessUnitId() const { return this->businessUnitId_ != nullptr;};
    void deleteBusinessUnitId() { this->businessUnitId_ = nullptr;};
    inline string getBusinessUnitId() const { DARABONBA_PTR_GET_DEFAULT(businessUnitId_, "") };
    inline UpdateSubscriptionRequest& setBusinessUnitId(string businessUnitId) { DARABONBA_PTR_SET_VALUE(businessUnitId_, businessUnitId) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline UpdateSubscriptionRequest& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // eventSubscriptions Field Functions 
    bool hasEventSubscriptions() const { return this->eventSubscriptions_ != nullptr;};
    void deleteEventSubscriptions() { this->eventSubscriptions_ = nullptr;};
    inline const vector<string> & getEventSubscriptions() const { DARABONBA_PTR_GET_CONST(eventSubscriptions_, vector<string>) };
    inline vector<string> getEventSubscriptions() { DARABONBA_PTR_GET(eventSubscriptions_, vector<string>) };
    inline UpdateSubscriptionRequest& setEventSubscriptions(const vector<string> & eventSubscriptions) { DARABONBA_PTR_SET_VALUE(eventSubscriptions_, eventSubscriptions) };
    inline UpdateSubscriptionRequest& setEventSubscriptions(vector<string> && eventSubscriptions) { DARABONBA_PTR_SET_RVALUE(eventSubscriptions_, eventSubscriptions) };


    // mqInstanceId Field Functions 
    bool hasMqInstanceId() const { return this->mqInstanceId_ != nullptr;};
    void deleteMqInstanceId() { this->mqInstanceId_ = nullptr;};
    inline string getMqInstanceId() const { DARABONBA_PTR_GET_DEFAULT(mqInstanceId_, "") };
    inline UpdateSubscriptionRequest& setMqInstanceId(string mqInstanceId) { DARABONBA_PTR_SET_VALUE(mqInstanceId_, mqInstanceId) };


    // mqType Field Functions 
    bool hasMqType() const { return this->mqType_ != nullptr;};
    void deleteMqType() { this->mqType_ = nullptr;};
    inline string getMqType() const { DARABONBA_PTR_GET_DEFAULT(mqType_, "") };
    inline UpdateSubscriptionRequest& setMqType(string mqType) { DARABONBA_PTR_SET_VALUE(mqType_, mqType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline UpdateSubscriptionRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // producerId Field Functions 
    bool hasProducerId() const { return this->producerId_ != nullptr;};
    void deleteProducerId() { this->producerId_ = nullptr;};
    inline string getProducerId() const { DARABONBA_PTR_GET_DEFAULT(producerId_, "") };
    inline UpdateSubscriptionRequest& setProducerId(string producerId) { DARABONBA_PTR_SET_VALUE(producerId_, producerId) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline UpdateSubscriptionRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline UpdateSubscriptionRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    shared_ptr<string> businessUnitId_ {};
    shared_ptr<string> endpoint_ {};
    shared_ptr<vector<string>> eventSubscriptions_ {};
    shared_ptr<string> mqInstanceId_ {};
    shared_ptr<string> mqType_ {};
    shared_ptr<string> password_ {};
    shared_ptr<string> producerId_ {};
    shared_ptr<string> topic_ {};
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianVoiceBot20250101
#endif
