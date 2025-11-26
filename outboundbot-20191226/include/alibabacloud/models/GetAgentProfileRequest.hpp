// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTPROFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTPROFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetAgentProfileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentProfileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentProfileId, agentProfileId_);
      DARABONBA_PTR_TO_JSON(AppIp, appIp_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentProfileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentProfileId, agentProfileId_);
      DARABONBA_PTR_FROM_JSON(AppIp, appIp_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetAgentProfileRequest() = default ;
    GetAgentProfileRequest(const GetAgentProfileRequest &) = default ;
    GetAgentProfileRequest(GetAgentProfileRequest &&) = default ;
    GetAgentProfileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentProfileRequest() = default ;
    GetAgentProfileRequest& operator=(const GetAgentProfileRequest &) = default ;
    GetAgentProfileRequest& operator=(GetAgentProfileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentProfileId_ == nullptr
        && return this->appIp_ == nullptr && return this->instanceId_ == nullptr; };
    // agentProfileId Field Functions 
    bool hasAgentProfileId() const { return this->agentProfileId_ != nullptr;};
    void deleteAgentProfileId() { this->agentProfileId_ = nullptr;};
    inline string agentProfileId() const { DARABONBA_PTR_GET_DEFAULT(agentProfileId_, "") };
    inline GetAgentProfileRequest& setAgentProfileId(string agentProfileId) { DARABONBA_PTR_SET_VALUE(agentProfileId_, agentProfileId) };


    // appIp Field Functions 
    bool hasAppIp() const { return this->appIp_ != nullptr;};
    void deleteAppIp() { this->appIp_ = nullptr;};
    inline string appIp() const { DARABONBA_PTR_GET_DEFAULT(appIp_, "") };
    inline GetAgentProfileRequest& setAppIp(string appIp) { DARABONBA_PTR_SET_VALUE(appIp_, appIp) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetAgentProfileRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentProfileId_ = nullptr;
    std::shared_ptr<string> appIp_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
