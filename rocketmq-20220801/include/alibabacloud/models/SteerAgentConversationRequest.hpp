// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STEERAGENTCONVERSATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STEERAGENTCONVERSATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class SteerAgentConversationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SteerAgentConversationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(commandId, commandId_);
      DARABONBA_PTR_TO_JSON(message, message_);
    };
    friend void from_json(const Darabonba::Json& j, SteerAgentConversationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(commandId, commandId_);
      DARABONBA_PTR_FROM_JSON(message, message_);
    };
    SteerAgentConversationRequest() = default ;
    SteerAgentConversationRequest(const SteerAgentConversationRequest &) = default ;
    SteerAgentConversationRequest(SteerAgentConversationRequest &&) = default ;
    SteerAgentConversationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SteerAgentConversationRequest() = default ;
    SteerAgentConversationRequest& operator=(const SteerAgentConversationRequest &) = default ;
    SteerAgentConversationRequest& operator=(SteerAgentConversationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commandId_ == nullptr
        && this->message_ == nullptr; };
    // commandId Field Functions 
    bool hasCommandId() const { return this->commandId_ != nullptr;};
    void deleteCommandId() { this->commandId_ = nullptr;};
    inline string getCommandId() const { DARABONBA_PTR_GET_DEFAULT(commandId_, "") };
    inline SteerAgentConversationRequest& setCommandId(string commandId) { DARABONBA_PTR_SET_VALUE(commandId_, commandId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SteerAgentConversationRequest& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // This parameter is required.
    shared_ptr<string> commandId_ {};
    // This parameter is required.
    shared_ptr<string> message_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
