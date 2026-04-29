// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDPOLARCLAWAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDPOLARCLAWAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class BindPolarClawAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindPolarClawAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(ChannelAccountId, channelAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, BindPolarClawAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(ChannelAccountId, channelAccountId_);
    };
    BindPolarClawAgentRequest() = default ;
    BindPolarClawAgentRequest(const BindPolarClawAgentRequest &) = default ;
    BindPolarClawAgentRequest(BindPolarClawAgentRequest &&) = default ;
    BindPolarClawAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindPolarClawAgentRequest() = default ;
    BindPolarClawAgentRequest& operator=(const BindPolarClawAgentRequest &) = default ;
    BindPolarClawAgentRequest& operator=(BindPolarClawAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->applicationId_ == nullptr && this->channel_ == nullptr && this->channelAccountId_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline BindPolarClawAgentRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline BindPolarClawAgentRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline BindPolarClawAgentRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // channelAccountId Field Functions 
    bool hasChannelAccountId() const { return this->channelAccountId_ != nullptr;};
    void deleteChannelAccountId() { this->channelAccountId_ = nullptr;};
    inline string getChannelAccountId() const { DARABONBA_PTR_GET_DEFAULT(channelAccountId_, "") };
    inline BindPolarClawAgentRequest& setChannelAccountId(string channelAccountId) { DARABONBA_PTR_SET_VALUE(channelAccountId_, channelAccountId) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentId_ {};
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // This parameter is required.
    shared_ptr<string> channel_ {};
    shared_ptr<string> channelAccountId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
