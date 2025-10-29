// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTSERVICECONFIGDASHSCOPECONFIG_HPP_
#define ALIBABACLOUD_MODELS_AGENTSERVICECONFIGDASHSCOPECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AgentServiceConfigDashScopeConfigAppCredentials.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class AgentServiceConfigDashScopeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgentServiceConfigDashScopeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(appCredentials, appCredentials_);
    };
    friend void from_json(const Darabonba::Json& j, AgentServiceConfigDashScopeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(appCredentials, appCredentials_);
    };
    AgentServiceConfigDashScopeConfig() = default ;
    AgentServiceConfigDashScopeConfig(const AgentServiceConfigDashScopeConfig &) = default ;
    AgentServiceConfigDashScopeConfig(AgentServiceConfigDashScopeConfig &&) = default ;
    AgentServiceConfigDashScopeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgentServiceConfigDashScopeConfig() = default ;
    AgentServiceConfigDashScopeConfig& operator=(const AgentServiceConfigDashScopeConfig &) = default ;
    AgentServiceConfigDashScopeConfig& operator=(AgentServiceConfigDashScopeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCredentials_ == nullptr; };
    // appCredentials Field Functions 
    bool hasAppCredentials() const { return this->appCredentials_ != nullptr;};
    void deleteAppCredentials() { this->appCredentials_ = nullptr;};
    inline const vector<Models::AgentServiceConfigDashScopeConfigAppCredentials> & appCredentials() const { DARABONBA_PTR_GET_CONST(appCredentials_, vector<Models::AgentServiceConfigDashScopeConfigAppCredentials>) };
    inline vector<Models::AgentServiceConfigDashScopeConfigAppCredentials> appCredentials() { DARABONBA_PTR_GET(appCredentials_, vector<Models::AgentServiceConfigDashScopeConfigAppCredentials>) };
    inline AgentServiceConfigDashScopeConfig& setAppCredentials(const vector<Models::AgentServiceConfigDashScopeConfigAppCredentials> & appCredentials) { DARABONBA_PTR_SET_VALUE(appCredentials_, appCredentials) };
    inline AgentServiceConfigDashScopeConfig& setAppCredentials(vector<Models::AgentServiceConfigDashScopeConfigAppCredentials> && appCredentials) { DARABONBA_PTR_SET_RVALUE(appCredentials_, appCredentials) };


  protected:
    std::shared_ptr<vector<Models::AgentServiceConfigDashScopeConfigAppCredentials>> appCredentials_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
