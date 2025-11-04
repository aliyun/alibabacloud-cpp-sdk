// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDAIAGENTTEXTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDAIAGENTTEXTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SendAIAgentTextRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendAIAgentTextRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, SendAIAgentTextRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    SendAIAgentTextRequest() = default ;
    SendAIAgentTextRequest(const SendAIAgentTextRequest &) = default ;
    SendAIAgentTextRequest(SendAIAgentTextRequest &&) = default ;
    SendAIAgentTextRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendAIAgentTextRequest() = default ;
    SendAIAgentTextRequest& operator=(const SendAIAgentTextRequest &) = default ;
    SendAIAgentTextRequest& operator=(SendAIAgentTextRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->text_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SendAIAgentTextRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline SendAIAgentTextRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    // The ID of the AI agent instance.
    // 
    // > InstanceId is a unique identifier that is returned when the AI agent is started. To start an AI agent, call [StartAIAgentInstance ](https://help.aliyun.com/document_detail/2846201.html) or [GenerateAIAgentCall](https://help.aliyun.com/document_detail/2846209.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The input to the LLM.
    // 
    // This parameter is required.
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
