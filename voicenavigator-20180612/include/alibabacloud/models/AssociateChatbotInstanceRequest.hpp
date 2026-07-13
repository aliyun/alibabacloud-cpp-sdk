// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATECHATBOTINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATECHATBOTINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class AssociateChatbotInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateChatbotInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChatbotInstanceId, chatbotInstanceId_);
      DARABONBA_PTR_TO_JSON(ChatbotName, chatbotName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NluServiceParamsJson, nluServiceParamsJson_);
      DARABONBA_PTR_TO_JSON(NluServiceType, nluServiceType_);
      DARABONBA_PTR_TO_JSON(UnionSource, unionSource_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateChatbotInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChatbotInstanceId, chatbotInstanceId_);
      DARABONBA_PTR_FROM_JSON(ChatbotName, chatbotName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NluServiceParamsJson, nluServiceParamsJson_);
      DARABONBA_PTR_FROM_JSON(NluServiceType, nluServiceType_);
      DARABONBA_PTR_FROM_JSON(UnionSource, unionSource_);
    };
    AssociateChatbotInstanceRequest() = default ;
    AssociateChatbotInstanceRequest(const AssociateChatbotInstanceRequest &) = default ;
    AssociateChatbotInstanceRequest(AssociateChatbotInstanceRequest &&) = default ;
    AssociateChatbotInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateChatbotInstanceRequest() = default ;
    AssociateChatbotInstanceRequest& operator=(const AssociateChatbotInstanceRequest &) = default ;
    AssociateChatbotInstanceRequest& operator=(AssociateChatbotInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chatbotInstanceId_ == nullptr
        && this->chatbotName_ == nullptr && this->instanceId_ == nullptr && this->nluServiceParamsJson_ == nullptr && this->nluServiceType_ == nullptr && this->unionSource_ == nullptr; };
    // chatbotInstanceId Field Functions 
    bool hasChatbotInstanceId() const { return this->chatbotInstanceId_ != nullptr;};
    void deleteChatbotInstanceId() { this->chatbotInstanceId_ = nullptr;};
    inline string getChatbotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(chatbotInstanceId_, "") };
    inline AssociateChatbotInstanceRequest& setChatbotInstanceId(string chatbotInstanceId) { DARABONBA_PTR_SET_VALUE(chatbotInstanceId_, chatbotInstanceId) };


    // chatbotName Field Functions 
    bool hasChatbotName() const { return this->chatbotName_ != nullptr;};
    void deleteChatbotName() { this->chatbotName_ = nullptr;};
    inline string getChatbotName() const { DARABONBA_PTR_GET_DEFAULT(chatbotName_, "") };
    inline AssociateChatbotInstanceRequest& setChatbotName(string chatbotName) { DARABONBA_PTR_SET_VALUE(chatbotName_, chatbotName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AssociateChatbotInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nluServiceParamsJson Field Functions 
    bool hasNluServiceParamsJson() const { return this->nluServiceParamsJson_ != nullptr;};
    void deleteNluServiceParamsJson() { this->nluServiceParamsJson_ = nullptr;};
    inline string getNluServiceParamsJson() const { DARABONBA_PTR_GET_DEFAULT(nluServiceParamsJson_, "") };
    inline AssociateChatbotInstanceRequest& setNluServiceParamsJson(string nluServiceParamsJson) { DARABONBA_PTR_SET_VALUE(nluServiceParamsJson_, nluServiceParamsJson) };


    // nluServiceType Field Functions 
    bool hasNluServiceType() const { return this->nluServiceType_ != nullptr;};
    void deleteNluServiceType() { this->nluServiceType_ = nullptr;};
    inline string getNluServiceType() const { DARABONBA_PTR_GET_DEFAULT(nluServiceType_, "") };
    inline AssociateChatbotInstanceRequest& setNluServiceType(string nluServiceType) { DARABONBA_PTR_SET_VALUE(nluServiceType_, nluServiceType) };


    // unionSource Field Functions 
    bool hasUnionSource() const { return this->unionSource_ != nullptr;};
    void deleteUnionSource() { this->unionSource_ = nullptr;};
    inline string getUnionSource() const { DARABONBA_PTR_GET_DEFAULT(unionSource_, "") };
    inline AssociateChatbotInstanceRequest& setUnionSource(string unionSource) { DARABONBA_PTR_SET_VALUE(unionSource_, unionSource) };


  protected:
    // The ID of the Chatbot instance.
    shared_ptr<string> chatbotInstanceId_ {};
    // The name of the Chatbot instance.
    shared_ptr<string> chatbotName_ {};
    // The instance ID of the navigation instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> nluServiceParamsJson_ {};
    shared_ptr<string> nluServiceType_ {};
    shared_ptr<string> unionSource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
