// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGENTREQUESTVOICECHATCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGENTREQUESTVOICECHATCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class UpdateAgentRequestVoiceChatConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAgentRequestVoiceChatConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ChatMode, chatMode_);
      DARABONBA_PTR_TO_JSON(InterruptMode, interruptMode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAgentRequestVoiceChatConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ChatMode, chatMode_);
      DARABONBA_PTR_FROM_JSON(InterruptMode, interruptMode_);
    };
    UpdateAgentRequestVoiceChatConfig() = default ;
    UpdateAgentRequestVoiceChatConfig(const UpdateAgentRequestVoiceChatConfig &) = default ;
    UpdateAgentRequestVoiceChatConfig(UpdateAgentRequestVoiceChatConfig &&) = default ;
    UpdateAgentRequestVoiceChatConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAgentRequestVoiceChatConfig() = default ;
    UpdateAgentRequestVoiceChatConfig& operator=(const UpdateAgentRequestVoiceChatConfig &) = default ;
    UpdateAgentRequestVoiceChatConfig& operator=(UpdateAgentRequestVoiceChatConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chatMode_ == nullptr
        && return this->interruptMode_ == nullptr; };
    // chatMode Field Functions 
    bool hasChatMode() const { return this->chatMode_ != nullptr;};
    void deleteChatMode() { this->chatMode_ = nullptr;};
    inline int32_t chatMode() const { DARABONBA_PTR_GET_DEFAULT(chatMode_, 0) };
    inline UpdateAgentRequestVoiceChatConfig& setChatMode(int32_t chatMode) { DARABONBA_PTR_SET_VALUE(chatMode_, chatMode) };


    // interruptMode Field Functions 
    bool hasInterruptMode() const { return this->interruptMode_ != nullptr;};
    void deleteInterruptMode() { this->interruptMode_ = nullptr;};
    inline int32_t interruptMode() const { DARABONBA_PTR_GET_DEFAULT(interruptMode_, 0) };
    inline UpdateAgentRequestVoiceChatConfig& setInterruptMode(int32_t interruptMode) { DARABONBA_PTR_SET_VALUE(interruptMode_, interruptMode) };


  protected:
    std::shared_ptr<int32_t> chatMode_ = nullptr;
    std::shared_ptr<int32_t> interruptMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
