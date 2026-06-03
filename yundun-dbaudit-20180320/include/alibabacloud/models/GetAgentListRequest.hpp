// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunDbaudit20180320
{
namespace Models
{
  class GetAgentListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentIp, agentIp_);
      DARABONBA_PTR_TO_JSON(AgentOs, agentOs_);
      DARABONBA_PTR_TO_JSON(AgentStatus, agentStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentIp, agentIp_);
      DARABONBA_PTR_FROM_JSON(AgentOs, agentOs_);
      DARABONBA_PTR_FROM_JSON(AgentStatus, agentStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetAgentListRequest() = default ;
    GetAgentListRequest(const GetAgentListRequest &) = default ;
    GetAgentListRequest(GetAgentListRequest &&) = default ;
    GetAgentListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentListRequest() = default ;
    GetAgentListRequest& operator=(const GetAgentListRequest &) = default ;
    GetAgentListRequest& operator=(GetAgentListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentIp_ == nullptr
        && this->agentOs_ == nullptr && this->agentStatus_ == nullptr && this->instanceId_ == nullptr && this->lang_ == nullptr && this->regionId_ == nullptr; };
    // agentIp Field Functions 
    bool hasAgentIp() const { return this->agentIp_ != nullptr;};
    void deleteAgentIp() { this->agentIp_ = nullptr;};
    inline string getAgentIp() const { DARABONBA_PTR_GET_DEFAULT(agentIp_, "") };
    inline GetAgentListRequest& setAgentIp(string agentIp) { DARABONBA_PTR_SET_VALUE(agentIp_, agentIp) };


    // agentOs Field Functions 
    bool hasAgentOs() const { return this->agentOs_ != nullptr;};
    void deleteAgentOs() { this->agentOs_ = nullptr;};
    inline string getAgentOs() const { DARABONBA_PTR_GET_DEFAULT(agentOs_, "") };
    inline GetAgentListRequest& setAgentOs(string agentOs) { DARABONBA_PTR_SET_VALUE(agentOs_, agentOs) };


    // agentStatus Field Functions 
    bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
    void deleteAgentStatus() { this->agentStatus_ = nullptr;};
    inline int32_t getAgentStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStatus_, 0) };
    inline GetAgentListRequest& setAgentStatus(int32_t agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetAgentListRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetAgentListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAgentListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> agentIp_ {};
    shared_ptr<string> agentOs_ {};
    shared_ptr<int32_t> agentStatus_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunDbaudit20180320
#endif
