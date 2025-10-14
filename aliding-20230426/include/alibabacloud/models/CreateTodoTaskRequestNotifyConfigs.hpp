// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETODOTASKREQUESTNOTIFYCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_CREATETODOTASKREQUESTNOTIFYCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateTodoTaskRequestNotifyConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTodoTaskRequestNotifyConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(dingNotify, dingNotify_);
      DARABONBA_PTR_TO_JSON(sendAssistantChat, sendAssistantChat_);
      DARABONBA_PTR_TO_JSON(sendTodoApn, sendTodoApn_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTodoTaskRequestNotifyConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(dingNotify, dingNotify_);
      DARABONBA_PTR_FROM_JSON(sendAssistantChat, sendAssistantChat_);
      DARABONBA_PTR_FROM_JSON(sendTodoApn, sendTodoApn_);
    };
    CreateTodoTaskRequestNotifyConfigs() = default ;
    CreateTodoTaskRequestNotifyConfigs(const CreateTodoTaskRequestNotifyConfigs &) = default ;
    CreateTodoTaskRequestNotifyConfigs(CreateTodoTaskRequestNotifyConfigs &&) = default ;
    CreateTodoTaskRequestNotifyConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTodoTaskRequestNotifyConfigs() = default ;
    CreateTodoTaskRequestNotifyConfigs& operator=(const CreateTodoTaskRequestNotifyConfigs &) = default ;
    CreateTodoTaskRequestNotifyConfigs& operator=(CreateTodoTaskRequestNotifyConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dingNotify_ == nullptr
        && return this->sendAssistantChat_ == nullptr && return this->sendTodoApn_ == nullptr; };
    // dingNotify Field Functions 
    bool hasDingNotify() const { return this->dingNotify_ != nullptr;};
    void deleteDingNotify() { this->dingNotify_ = nullptr;};
    inline string dingNotify() const { DARABONBA_PTR_GET_DEFAULT(dingNotify_, "") };
    inline CreateTodoTaskRequestNotifyConfigs& setDingNotify(string dingNotify) { DARABONBA_PTR_SET_VALUE(dingNotify_, dingNotify) };


    // sendAssistantChat Field Functions 
    bool hasSendAssistantChat() const { return this->sendAssistantChat_ != nullptr;};
    void deleteSendAssistantChat() { this->sendAssistantChat_ = nullptr;};
    inline string sendAssistantChat() const { DARABONBA_PTR_GET_DEFAULT(sendAssistantChat_, "") };
    inline CreateTodoTaskRequestNotifyConfigs& setSendAssistantChat(string sendAssistantChat) { DARABONBA_PTR_SET_VALUE(sendAssistantChat_, sendAssistantChat) };


    // sendTodoApn Field Functions 
    bool hasSendTodoApn() const { return this->sendTodoApn_ != nullptr;};
    void deleteSendTodoApn() { this->sendTodoApn_ = nullptr;};
    inline string sendTodoApn() const { DARABONBA_PTR_GET_DEFAULT(sendTodoApn_, "") };
    inline CreateTodoTaskRequestNotifyConfigs& setSendTodoApn(string sendTodoApn) { DARABONBA_PTR_SET_VALUE(sendTodoApn_, sendTodoApn) };


  protected:
    std::shared_ptr<string> dingNotify_ = nullptr;
    std::shared_ptr<string> sendAssistantChat_ = nullptr;
    std::shared_ptr<string> sendTodoApn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
