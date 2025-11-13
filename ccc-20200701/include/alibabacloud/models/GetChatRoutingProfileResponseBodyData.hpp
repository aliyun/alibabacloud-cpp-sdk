// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHATROUTINGPROFILERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCHATROUTINGPROFILERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetChatRoutingProfileResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChatRoutingProfileResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AgentConcurrencySettings, agentConcurrencySettings_);
      DARABONBA_PTR_TO_JSON(ChatSettings, chatSettings_);
      DARABONBA_PTR_TO_JSON(DistributionSettings, distributionSettings_);
      DARABONBA_PTR_TO_JSON(RoutingType, routingType_);
    };
    friend void from_json(const Darabonba::Json& j, GetChatRoutingProfileResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentConcurrencySettings, agentConcurrencySettings_);
      DARABONBA_PTR_FROM_JSON(ChatSettings, chatSettings_);
      DARABONBA_PTR_FROM_JSON(DistributionSettings, distributionSettings_);
      DARABONBA_PTR_FROM_JSON(RoutingType, routingType_);
    };
    GetChatRoutingProfileResponseBodyData() = default ;
    GetChatRoutingProfileResponseBodyData(const GetChatRoutingProfileResponseBodyData &) = default ;
    GetChatRoutingProfileResponseBodyData(GetChatRoutingProfileResponseBodyData &&) = default ;
    GetChatRoutingProfileResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChatRoutingProfileResponseBodyData() = default ;
    GetChatRoutingProfileResponseBodyData& operator=(const GetChatRoutingProfileResponseBodyData &) = default ;
    GetChatRoutingProfileResponseBodyData& operator=(GetChatRoutingProfileResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentConcurrencySettings_ == nullptr
        && return this->chatSettings_ == nullptr && return this->distributionSettings_ == nullptr && return this->routingType_ == nullptr; };
    // agentConcurrencySettings Field Functions 
    bool hasAgentConcurrencySettings() const { return this->agentConcurrencySettings_ != nullptr;};
    void deleteAgentConcurrencySettings() { this->agentConcurrencySettings_ = nullptr;};
    inline string agentConcurrencySettings() const { DARABONBA_PTR_GET_DEFAULT(agentConcurrencySettings_, "") };
    inline GetChatRoutingProfileResponseBodyData& setAgentConcurrencySettings(string agentConcurrencySettings) { DARABONBA_PTR_SET_VALUE(agentConcurrencySettings_, agentConcurrencySettings) };


    // chatSettings Field Functions 
    bool hasChatSettings() const { return this->chatSettings_ != nullptr;};
    void deleteChatSettings() { this->chatSettings_ = nullptr;};
    inline string chatSettings() const { DARABONBA_PTR_GET_DEFAULT(chatSettings_, "") };
    inline GetChatRoutingProfileResponseBodyData& setChatSettings(string chatSettings) { DARABONBA_PTR_SET_VALUE(chatSettings_, chatSettings) };


    // distributionSettings Field Functions 
    bool hasDistributionSettings() const { return this->distributionSettings_ != nullptr;};
    void deleteDistributionSettings() { this->distributionSettings_ = nullptr;};
    inline string distributionSettings() const { DARABONBA_PTR_GET_DEFAULT(distributionSettings_, "") };
    inline GetChatRoutingProfileResponseBodyData& setDistributionSettings(string distributionSettings) { DARABONBA_PTR_SET_VALUE(distributionSettings_, distributionSettings) };


    // routingType Field Functions 
    bool hasRoutingType() const { return this->routingType_ != nullptr;};
    void deleteRoutingType() { this->routingType_ = nullptr;};
    inline string routingType() const { DARABONBA_PTR_GET_DEFAULT(routingType_, "") };
    inline GetChatRoutingProfileResponseBodyData& setRoutingType(string routingType) { DARABONBA_PTR_SET_VALUE(routingType_, routingType) };


  protected:
    std::shared_ptr<string> agentConcurrencySettings_ = nullptr;
    std::shared_ptr<string> chatSettings_ = nullptr;
    std::shared_ptr<string> distributionSettings_ = nullptr;
    std::shared_ptr<string> routingType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
