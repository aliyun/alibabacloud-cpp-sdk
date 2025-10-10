// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAGENTREQUESTVOICECHATCONFIGBACKCHANNELCONFIG_HPP_
#define ALIBABACLOUD_MODELS_STARTAGENTREQUESTVOICECHATCONFIGBACKCHANNELCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartAgentRequestVoiceChatConfigBackChannelConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAgentRequestVoiceChatConfigBackChannelConfig& obj) { 
      DARABONBA_PTR_TO_JSON(UserTurnEnd, userTurnEnd_);
    };
    friend void from_json(const Darabonba::Json& j, StartAgentRequestVoiceChatConfigBackChannelConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(UserTurnEnd, userTurnEnd_);
    };
    StartAgentRequestVoiceChatConfigBackChannelConfig() = default ;
    StartAgentRequestVoiceChatConfigBackChannelConfig(const StartAgentRequestVoiceChatConfigBackChannelConfig &) = default ;
    StartAgentRequestVoiceChatConfigBackChannelConfig(StartAgentRequestVoiceChatConfigBackChannelConfig &&) = default ;
    StartAgentRequestVoiceChatConfigBackChannelConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAgentRequestVoiceChatConfigBackChannelConfig() = default ;
    StartAgentRequestVoiceChatConfigBackChannelConfig& operator=(const StartAgentRequestVoiceChatConfigBackChannelConfig &) = default ;
    StartAgentRequestVoiceChatConfigBackChannelConfig& operator=(StartAgentRequestVoiceChatConfigBackChannelConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userTurnEnd_ != nullptr; };
    // userTurnEnd Field Functions 
    bool hasUserTurnEnd() const { return this->userTurnEnd_ != nullptr;};
    void deleteUserTurnEnd() { this->userTurnEnd_ = nullptr;};
    inline bool userTurnEnd() const { DARABONBA_PTR_GET_DEFAULT(userTurnEnd_, false) };
    inline StartAgentRequestVoiceChatConfigBackChannelConfig& setUserTurnEnd(bool userTurnEnd) { DARABONBA_PTR_SET_VALUE(userTurnEnd_, userTurnEnd) };


  protected:
    std::shared_ptr<bool> userTurnEnd_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
