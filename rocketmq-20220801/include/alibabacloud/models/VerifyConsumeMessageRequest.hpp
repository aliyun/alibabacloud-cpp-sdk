// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYCONSUMEMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VERIFYCONSUMEMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class VerifyConsumeMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyConsumeMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
      DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyConsumeMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
    };
    VerifyConsumeMessageRequest() = default ;
    VerifyConsumeMessageRequest(const VerifyConsumeMessageRequest &) = default ;
    VerifyConsumeMessageRequest(VerifyConsumeMessageRequest &&) = default ;
    VerifyConsumeMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyConsumeMessageRequest() = default ;
    VerifyConsumeMessageRequest& operator=(const VerifyConsumeMessageRequest &) = default ;
    VerifyConsumeMessageRequest& operator=(VerifyConsumeMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && this->consumerGroupId_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline VerifyConsumeMessageRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // consumerGroupId Field Functions 
    bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
    void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
    inline string getConsumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
    inline VerifyConsumeMessageRequest& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


  protected:
    // The client ID.
    // 
    // This parameter is required.
    shared_ptr<string> clientId_ {};
    // The ID of the consumer group.
    // 
    // This parameter is required.
    shared_ptr<string> consumerGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
