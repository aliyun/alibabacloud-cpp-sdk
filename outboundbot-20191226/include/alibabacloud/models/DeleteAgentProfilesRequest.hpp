// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGENTPROFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGENTPROFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DeleteAgentProfilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAgentProfilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentProfileIds, agentProfileIds_);
      DARABONBA_PTR_TO_JSON(AppIp, appIp_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAgentProfilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentProfileIds, agentProfileIds_);
      DARABONBA_PTR_FROM_JSON(AppIp, appIp_);
    };
    DeleteAgentProfilesRequest() = default ;
    DeleteAgentProfilesRequest(const DeleteAgentProfilesRequest &) = default ;
    DeleteAgentProfilesRequest(DeleteAgentProfilesRequest &&) = default ;
    DeleteAgentProfilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAgentProfilesRequest() = default ;
    DeleteAgentProfilesRequest& operator=(const DeleteAgentProfilesRequest &) = default ;
    DeleteAgentProfilesRequest& operator=(DeleteAgentProfilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentProfileIds_ == nullptr
        && this->appIp_ == nullptr; };
    // agentProfileIds Field Functions 
    bool hasAgentProfileIds() const { return this->agentProfileIds_ != nullptr;};
    void deleteAgentProfileIds() { this->agentProfileIds_ = nullptr;};
    inline const vector<string> & getAgentProfileIds() const { DARABONBA_PTR_GET_CONST(agentProfileIds_, vector<string>) };
    inline vector<string> getAgentProfileIds() { DARABONBA_PTR_GET(agentProfileIds_, vector<string>) };
    inline DeleteAgentProfilesRequest& setAgentProfileIds(const vector<string> & agentProfileIds) { DARABONBA_PTR_SET_VALUE(agentProfileIds_, agentProfileIds) };
    inline DeleteAgentProfilesRequest& setAgentProfileIds(vector<string> && agentProfileIds) { DARABONBA_PTR_SET_RVALUE(agentProfileIds_, agentProfileIds) };


    // appIp Field Functions 
    bool hasAppIp() const { return this->appIp_ != nullptr;};
    void deleteAppIp() { this->appIp_ = nullptr;};
    inline string getAppIp() const { DARABONBA_PTR_GET_DEFAULT(appIp_, "") };
    inline DeleteAgentProfilesRequest& setAppIp(string appIp) { DARABONBA_PTR_SET_VALUE(appIp_, appIp) };


  protected:
    shared_ptr<vector<string>> agentProfileIds_ {};
    shared_ptr<string> appIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
