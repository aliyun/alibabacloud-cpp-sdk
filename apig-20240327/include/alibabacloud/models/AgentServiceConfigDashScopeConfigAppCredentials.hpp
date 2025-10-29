// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTSERVICECONFIGDASHSCOPECONFIGAPPCREDENTIALS_HPP_
#define ALIBABACLOUD_MODELS_AGENTSERVICECONFIGDASHSCOPECONFIGAPPCREDENTIALS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class AgentServiceConfigDashScopeConfigAppCredentials : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgentServiceConfigDashScopeConfigAppCredentials& obj) { 
      DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(appId, appId_);
    };
    friend void from_json(const Darabonba::Json& j, AgentServiceConfigDashScopeConfigAppCredentials& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(appId, appId_);
    };
    AgentServiceConfigDashScopeConfigAppCredentials() = default ;
    AgentServiceConfigDashScopeConfigAppCredentials(const AgentServiceConfigDashScopeConfigAppCredentials &) = default ;
    AgentServiceConfigDashScopeConfigAppCredentials(AgentServiceConfigDashScopeConfigAppCredentials &&) = default ;
    AgentServiceConfigDashScopeConfigAppCredentials(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgentServiceConfigDashScopeConfigAppCredentials() = default ;
    AgentServiceConfigDashScopeConfigAppCredentials& operator=(const AgentServiceConfigDashScopeConfigAppCredentials &) = default ;
    AgentServiceConfigDashScopeConfigAppCredentials& operator=(AgentServiceConfigDashScopeConfigAppCredentials &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiKey_ == nullptr
        && return this->appId_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline AgentServiceConfigDashScopeConfigAppCredentials& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline AgentServiceConfigDashScopeConfigAppCredentials& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


  protected:
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
