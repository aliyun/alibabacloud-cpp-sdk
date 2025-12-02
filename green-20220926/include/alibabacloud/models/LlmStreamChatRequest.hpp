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
      DARABONBA_ANY_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(Temperature, temperature_);
      DARABONBA_PTR_TO_JSON(TopP, topP_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, LlmStreamChatRequest& obj) { 
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
    virtual bool empty() const override { return this->messages_ == nullptr
        && return this->temperature_ == nullptr && return this->topP_ == nullptr && return this->type_ == nullptr; };
    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline     const Darabonba::Json & messages() const { DARABONBA_GET(messages_) };
    Darabonba::Json & messages() { DARABONBA_GET(messages_) };
    inline LlmStreamChatRequest& setMessages(const Darabonba::Json & messages) { DARABONBA_SET_VALUE(messages_, messages) };
    inline LlmStreamChatRequest& setMessages(Darabonba::Json & messages) { DARABONBA_SET_RVALUE(messages_, messages) };


    // temperature Field Functions 
    bool hasTemperature() const { return this->temperature_ != nullptr;};
    void deleteTemperature() { this->temperature_ = nullptr;};
    inline float temperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, 0.0) };
    inline LlmStreamChatRequest& setTemperature(float temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


    // topP Field Functions 
    bool hasTopP() const { return this->topP_ != nullptr;};
    void deleteTopP() { this->topP_ = nullptr;};
    inline float topP() const { DARABONBA_PTR_GET_DEFAULT(topP_, 0.0) };
    inline LlmStreamChatRequest& setTopP(float topP) { DARABONBA_PTR_SET_VALUE(topP_, topP) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline LlmStreamChatRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Conversation information
    Darabonba::Json messages_ = nullptr;
    // Temperature value for the large model
    std::shared_ptr<float> temperature_ = nullptr;
    // Top p parameter controlling the randomness of the large model\\"s output.
    std::shared_ptr<float> topP_ = nullptr;
    // Type of conversation
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
