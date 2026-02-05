// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTPROFILETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTPROFILETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetAgentProfileTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentProfileTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentProfileTemplateId, agentProfileTemplateId_);
      DARABONBA_PTR_TO_JSON(AppIp, appIp_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentProfileTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentProfileTemplateId, agentProfileTemplateId_);
      DARABONBA_PTR_FROM_JSON(AppIp, appIp_);
    };
    GetAgentProfileTemplateRequest() = default ;
    GetAgentProfileTemplateRequest(const GetAgentProfileTemplateRequest &) = default ;
    GetAgentProfileTemplateRequest(GetAgentProfileTemplateRequest &&) = default ;
    GetAgentProfileTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentProfileTemplateRequest() = default ;
    GetAgentProfileTemplateRequest& operator=(const GetAgentProfileTemplateRequest &) = default ;
    GetAgentProfileTemplateRequest& operator=(GetAgentProfileTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentProfileTemplateId_ == nullptr
        && this->appIp_ == nullptr; };
    // agentProfileTemplateId Field Functions 
    bool hasAgentProfileTemplateId() const { return this->agentProfileTemplateId_ != nullptr;};
    void deleteAgentProfileTemplateId() { this->agentProfileTemplateId_ = nullptr;};
    inline string getAgentProfileTemplateId() const { DARABONBA_PTR_GET_DEFAULT(agentProfileTemplateId_, "") };
    inline GetAgentProfileTemplateRequest& setAgentProfileTemplateId(string agentProfileTemplateId) { DARABONBA_PTR_SET_VALUE(agentProfileTemplateId_, agentProfileTemplateId) };


    // appIp Field Functions 
    bool hasAppIp() const { return this->appIp_ != nullptr;};
    void deleteAppIp() { this->appIp_ = nullptr;};
    inline string getAppIp() const { DARABONBA_PTR_GET_DEFAULT(appIp_, "") };
    inline GetAgentProfileTemplateRequest& setAppIp(string appIp) { DARABONBA_PTR_SET_VALUE(appIp_, appIp) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentProfileTemplateId_ {};
    shared_ptr<string> appIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
