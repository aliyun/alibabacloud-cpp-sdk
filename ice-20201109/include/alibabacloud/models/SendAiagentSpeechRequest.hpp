// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDAIAGENTSPEECHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDAIAGENTSPEECHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SendAIAgentSpeechRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendAIAgentSpeechRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableInterrupt, enableInterrupt_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SendAIAgentSpeechRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableInterrupt, enableInterrupt_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SendAIAgentSpeechRequest() = default ;
    SendAIAgentSpeechRequest(const SendAIAgentSpeechRequest &) = default ;
    SendAIAgentSpeechRequest(SendAIAgentSpeechRequest &&) = default ;
    SendAIAgentSpeechRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendAIAgentSpeechRequest() = default ;
    SendAIAgentSpeechRequest& operator=(const SendAIAgentSpeechRequest &) = default ;
    SendAIAgentSpeechRequest& operator=(SendAIAgentSpeechRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableInterrupt_ != nullptr
        && this->instanceId_ != nullptr && this->text_ != nullptr && this->type_ != nullptr; };
    // enableInterrupt Field Functions 
    bool hasEnableInterrupt() const { return this->enableInterrupt_ != nullptr;};
    void deleteEnableInterrupt() { this->enableInterrupt_ = nullptr;};
    inline bool enableInterrupt() const { DARABONBA_PTR_GET_DEFAULT(enableInterrupt_, false) };
    inline SendAIAgentSpeechRequest& setEnableInterrupt(bool enableInterrupt) { DARABONBA_PTR_SET_VALUE(enableInterrupt_, enableInterrupt) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SendAIAgentSpeechRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline SendAIAgentSpeechRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SendAIAgentSpeechRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Specifies whether the broadcast can interrupt the ongoing speech. Default value: true
    std::shared_ptr<bool> enableInterrupt_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
