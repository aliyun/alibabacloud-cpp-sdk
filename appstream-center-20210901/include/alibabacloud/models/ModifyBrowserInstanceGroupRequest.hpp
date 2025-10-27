// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBROWSERINSTANCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBROWSERINSTANCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyBrowserInstanceGroupRequestBrowserConfig.hpp>
#include <alibabacloud/models/ModifyBrowserInstanceGroupRequestNetwork.hpp>
#include <alibabacloud/models/ModifyBrowserInstanceGroupRequestPolicy.hpp>
#include <vector>
#include <alibabacloud/models/ModifyBrowserInstanceGroupRequestTimers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyBrowserInstanceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBrowserInstanceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BrowserConfig, browserConfig_);
      DARABONBA_PTR_TO_JSON(BrowserInstanceGroupId, browserInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(CloudBrowserName, cloudBrowserName_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(Timers, timers_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBrowserInstanceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BrowserConfig, browserConfig_);
      DARABONBA_PTR_FROM_JSON(BrowserInstanceGroupId, browserInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(CloudBrowserName, cloudBrowserName_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(Timers, timers_);
    };
    ModifyBrowserInstanceGroupRequest() = default ;
    ModifyBrowserInstanceGroupRequest(const ModifyBrowserInstanceGroupRequest &) = default ;
    ModifyBrowserInstanceGroupRequest(ModifyBrowserInstanceGroupRequest &&) = default ;
    ModifyBrowserInstanceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBrowserInstanceGroupRequest() = default ;
    ModifyBrowserInstanceGroupRequest& operator=(const ModifyBrowserInstanceGroupRequest &) = default ;
    ModifyBrowserInstanceGroupRequest& operator=(ModifyBrowserInstanceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->browserConfig_ == nullptr
        && return this->browserInstanceGroupId_ == nullptr && return this->cloudBrowserName_ == nullptr && return this->network_ == nullptr && return this->policy_ == nullptr && return this->timers_ == nullptr; };
    // browserConfig Field Functions 
    bool hasBrowserConfig() const { return this->browserConfig_ != nullptr;};
    void deleteBrowserConfig() { this->browserConfig_ = nullptr;};
    inline const ModifyBrowserInstanceGroupRequestBrowserConfig & browserConfig() const { DARABONBA_PTR_GET_CONST(browserConfig_, ModifyBrowserInstanceGroupRequestBrowserConfig) };
    inline ModifyBrowserInstanceGroupRequestBrowserConfig browserConfig() { DARABONBA_PTR_GET(browserConfig_, ModifyBrowserInstanceGroupRequestBrowserConfig) };
    inline ModifyBrowserInstanceGroupRequest& setBrowserConfig(const ModifyBrowserInstanceGroupRequestBrowserConfig & browserConfig) { DARABONBA_PTR_SET_VALUE(browserConfig_, browserConfig) };
    inline ModifyBrowserInstanceGroupRequest& setBrowserConfig(ModifyBrowserInstanceGroupRequestBrowserConfig && browserConfig) { DARABONBA_PTR_SET_RVALUE(browserConfig_, browserConfig) };


    // browserInstanceGroupId Field Functions 
    bool hasBrowserInstanceGroupId() const { return this->browserInstanceGroupId_ != nullptr;};
    void deleteBrowserInstanceGroupId() { this->browserInstanceGroupId_ = nullptr;};
    inline string browserInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(browserInstanceGroupId_, "") };
    inline ModifyBrowserInstanceGroupRequest& setBrowserInstanceGroupId(string browserInstanceGroupId) { DARABONBA_PTR_SET_VALUE(browserInstanceGroupId_, browserInstanceGroupId) };


    // cloudBrowserName Field Functions 
    bool hasCloudBrowserName() const { return this->cloudBrowserName_ != nullptr;};
    void deleteCloudBrowserName() { this->cloudBrowserName_ = nullptr;};
    inline string cloudBrowserName() const { DARABONBA_PTR_GET_DEFAULT(cloudBrowserName_, "") };
    inline ModifyBrowserInstanceGroupRequest& setCloudBrowserName(string cloudBrowserName) { DARABONBA_PTR_SET_VALUE(cloudBrowserName_, cloudBrowserName) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const ModifyBrowserInstanceGroupRequestNetwork & network() const { DARABONBA_PTR_GET_CONST(network_, ModifyBrowserInstanceGroupRequestNetwork) };
    inline ModifyBrowserInstanceGroupRequestNetwork network() { DARABONBA_PTR_GET(network_, ModifyBrowserInstanceGroupRequestNetwork) };
    inline ModifyBrowserInstanceGroupRequest& setNetwork(const ModifyBrowserInstanceGroupRequestNetwork & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline ModifyBrowserInstanceGroupRequest& setNetwork(ModifyBrowserInstanceGroupRequestNetwork && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline const ModifyBrowserInstanceGroupRequestPolicy & policy() const { DARABONBA_PTR_GET_CONST(policy_, ModifyBrowserInstanceGroupRequestPolicy) };
    inline ModifyBrowserInstanceGroupRequestPolicy policy() { DARABONBA_PTR_GET(policy_, ModifyBrowserInstanceGroupRequestPolicy) };
    inline ModifyBrowserInstanceGroupRequest& setPolicy(const ModifyBrowserInstanceGroupRequestPolicy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
    inline ModifyBrowserInstanceGroupRequest& setPolicy(ModifyBrowserInstanceGroupRequestPolicy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


    // timers Field Functions 
    bool hasTimers() const { return this->timers_ != nullptr;};
    void deleteTimers() { this->timers_ = nullptr;};
    inline const vector<ModifyBrowserInstanceGroupRequestTimers> & timers() const { DARABONBA_PTR_GET_CONST(timers_, vector<ModifyBrowserInstanceGroupRequestTimers>) };
    inline vector<ModifyBrowserInstanceGroupRequestTimers> timers() { DARABONBA_PTR_GET(timers_, vector<ModifyBrowserInstanceGroupRequestTimers>) };
    inline ModifyBrowserInstanceGroupRequest& setTimers(const vector<ModifyBrowserInstanceGroupRequestTimers> & timers) { DARABONBA_PTR_SET_VALUE(timers_, timers) };
    inline ModifyBrowserInstanceGroupRequest& setTimers(vector<ModifyBrowserInstanceGroupRequestTimers> && timers) { DARABONBA_PTR_SET_RVALUE(timers_, timers) };


  protected:
    std::shared_ptr<ModifyBrowserInstanceGroupRequestBrowserConfig> browserConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> browserInstanceGroupId_ = nullptr;
    std::shared_ptr<string> cloudBrowserName_ = nullptr;
    std::shared_ptr<ModifyBrowserInstanceGroupRequestNetwork> network_ = nullptr;
    std::shared_ptr<ModifyBrowserInstanceGroupRequestPolicy> policy_ = nullptr;
    std::shared_ptr<vector<ModifyBrowserInstanceGroupRequestTimers>> timers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
