// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LLMSTREAMCHATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LLMSTREAMCHATREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class LlmStreamChatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LlmStreamChatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_ANY_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(Temperature, temperature_);
      DARABONBA_PTR_TO_JSON(TopP, topP_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, LlmStreamChatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_ANY_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(Temperature, temperature_);
      DARABONBA_PTR_FROM_JSON(TopP, topP_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    LlmStreamChatRequest() = default ;
    LlmStreamChatRequest(const LlmStreamChatRequest &) = default ;
    LlmStreamChatRequest(LlmStreamChatRequest &&) = default ;
    LlmStreamChatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LlmStreamChatRequest() = default ;
    LlmStreamChatRequest& operator=(const LlmStreamChatRequest &) = default ;
    LlmStreamChatRequest& operator=(LlmStreamChatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channel_ == nullptr
        && this->messages_ == nullptr && this->temperature_ == nullptr && this->topP_ == nullptr && this->type_ == nullptr; };
    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline LlmStreamChatRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline     const Darabonba::Json & getMessages() const { DARABONBA_GET(messages_) };
    Darabonba::Json & getMessages() { DARABONBA_GET(messages_) };
    inline LlmStreamChatRequest& setMessages(const Darabonba::Json & messages) { DARABONBA_SET_VALUE(messages_, messages) };
    inline LlmStreamChatRequest& setMessages(Darabonba::Json && messages) { DARABONBA_SET_RVALUE(messages_, messages) };


    // temperature Field Functions 
    bool hasTemperature() const { return this->temperature_ != nullptr;};
    void deleteTemperature() { this->temperature_ = nullptr;};
    inline float getTemperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, 0.0) };
    inline LlmStreamChatRequest& setTemperature(float temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


    // topP Field Functions 
    bool hasTopP() const { return this->topP_ != nullptr;};
    void deleteTopP() { this->topP_ = nullptr;};
    inline float getTopP() const { DARABONBA_PTR_GET_DEFAULT(topP_, 0.0) };
    inline LlmStreamChatRequest& setTopP(float topP) { DARABONBA_PTR_SET_VALUE(topP_, topP) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline LlmStreamChatRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> channel_ {};
    // Conversation information
    Darabonba::Json messages_ {};
    // Temperature value for the large model
    shared_ptr<float> temperature_ {};
    // Top p parameter controlling the randomness of the large model\\"s output.
    shared_ptr<float> topP_ {};
    // Type of conversation
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
