// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MQTOPICSUBSDIGEST_HPP_
#define ALIBABACLOUD_MODELS_MQTOPICSUBSDIGEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MqTopicSubsDigest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MqTopicSubsDigest& obj) { 
      DARABONBA_PTR_TO_JSON(MessageModel, messageModel_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(SubsExpression, subsExpression_);
    };
    friend void from_json(const Darabonba::Json& j, MqTopicSubsDigest& obj) { 
      DARABONBA_PTR_FROM_JSON(MessageModel, messageModel_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(SubsExpression, subsExpression_);
    };
    MqTopicSubsDigest() = default ;
    MqTopicSubsDigest(const MqTopicSubsDigest &) = default ;
    MqTopicSubsDigest(MqTopicSubsDigest &&) = default ;
    MqTopicSubsDigest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MqTopicSubsDigest() = default ;
    MqTopicSubsDigest& operator=(const MqTopicSubsDigest &) = default ;
    MqTopicSubsDigest& operator=(MqTopicSubsDigest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messageModel_ == nullptr
        && this->serviceId_ == nullptr && this->serviceName_ == nullptr && this->subsExpression_ == nullptr; };
    // messageModel Field Functions 
    bool hasMessageModel() const { return this->messageModel_ != nullptr;};
    void deleteMessageModel() { this->messageModel_ = nullptr;};
    inline string getMessageModel() const { DARABONBA_PTR_GET_DEFAULT(messageModel_, "") };
    inline MqTopicSubsDigest& setMessageModel(string messageModel) { DARABONBA_PTR_SET_VALUE(messageModel_, messageModel) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline MqTopicSubsDigest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline MqTopicSubsDigest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // subsExpression Field Functions 
    bool hasSubsExpression() const { return this->subsExpression_ != nullptr;};
    void deleteSubsExpression() { this->subsExpression_ = nullptr;};
    inline string getSubsExpression() const { DARABONBA_PTR_GET_DEFAULT(subsExpression_, "") };
    inline MqTopicSubsDigest& setSubsExpression(string subsExpression) { DARABONBA_PTR_SET_VALUE(subsExpression_, subsExpression) };


  protected:
    shared_ptr<string> messageModel_ {};
    shared_ptr<string> serviceId_ {};
    shared_ptr<string> serviceName_ {};
    shared_ptr<string> subsExpression_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
