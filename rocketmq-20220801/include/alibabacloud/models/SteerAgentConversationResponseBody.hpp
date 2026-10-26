// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STEERAGENTCONVERSATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STEERAGENTCONVERSATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class SteerAgentConversationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SteerAgentConversationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(accepted, accepted_);
      DARABONBA_PTR_TO_JSON(messageId, messageId_);
    };
    friend void from_json(const Darabonba::Json& j, SteerAgentConversationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(accepted, accepted_);
      DARABONBA_PTR_FROM_JSON(messageId, messageId_);
    };
    SteerAgentConversationResponseBody() = default ;
    SteerAgentConversationResponseBody(const SteerAgentConversationResponseBody &) = default ;
    SteerAgentConversationResponseBody(SteerAgentConversationResponseBody &&) = default ;
    SteerAgentConversationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SteerAgentConversationResponseBody() = default ;
    SteerAgentConversationResponseBody& operator=(const SteerAgentConversationResponseBody &) = default ;
    SteerAgentConversationResponseBody& operator=(SteerAgentConversationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accepted_ == nullptr
        && this->messageId_ == nullptr; };
    // accepted Field Functions 
    bool hasAccepted() const { return this->accepted_ != nullptr;};
    void deleteAccepted() { this->accepted_ = nullptr;};
    inline bool getAccepted() const { DARABONBA_PTR_GET_DEFAULT(accepted_, false) };
    inline SteerAgentConversationResponseBody& setAccepted(bool accepted) { DARABONBA_PTR_SET_VALUE(accepted_, accepted) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline SteerAgentConversationResponseBody& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


  protected:
    shared_ptr<bool> accepted_ {};
    shared_ptr<string> messageId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
