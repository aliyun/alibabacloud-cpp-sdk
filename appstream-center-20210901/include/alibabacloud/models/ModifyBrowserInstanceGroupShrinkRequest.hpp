// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBROWSERINSTANCEGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBROWSERINSTANCEGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyBrowserInstanceGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBrowserInstanceGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BrowserConfig, browserConfigShrink_);
      DARABONBA_PTR_TO_JSON(BrowserInstanceGroupId, browserInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(CloudBrowserName, cloudBrowserName_);
      DARABONBA_PTR_TO_JSON(Network, networkShrink_);
      DARABONBA_PTR_TO_JSON(Policy, policyShrink_);
      DARABONBA_PTR_TO_JSON(Timers, timersShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBrowserInstanceGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BrowserConfig, browserConfigShrink_);
      DARABONBA_PTR_FROM_JSON(BrowserInstanceGroupId, browserInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(CloudBrowserName, cloudBrowserName_);
      DARABONBA_PTR_FROM_JSON(Network, networkShrink_);
      DARABONBA_PTR_FROM_JSON(Policy, policyShrink_);
      DARABONBA_PTR_FROM_JSON(Timers, timersShrink_);
    };
    ModifyBrowserInstanceGroupShrinkRequest() = default ;
    ModifyBrowserInstanceGroupShrinkRequest(const ModifyBrowserInstanceGroupShrinkRequest &) = default ;
    ModifyBrowserInstanceGroupShrinkRequest(ModifyBrowserInstanceGroupShrinkRequest &&) = default ;
    ModifyBrowserInstanceGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBrowserInstanceGroupShrinkRequest() = default ;
    ModifyBrowserInstanceGroupShrinkRequest& operator=(const ModifyBrowserInstanceGroupShrinkRequest &) = default ;
    ModifyBrowserInstanceGroupShrinkRequest& operator=(ModifyBrowserInstanceGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->browserConfigShrink_ == nullptr
        && return this->browserInstanceGroupId_ == nullptr && return this->cloudBrowserName_ == nullptr && return this->networkShrink_ == nullptr && return this->policyShrink_ == nullptr && return this->timersShrink_ == nullptr; };
    // browserConfigShrink Field Functions 
    bool hasBrowserConfigShrink() const { return this->browserConfigShrink_ != nullptr;};
    void deleteBrowserConfigShrink() { this->browserConfigShrink_ = nullptr;};
    inline string browserConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(browserConfigShrink_, "") };
    inline ModifyBrowserInstanceGroupShrinkRequest& setBrowserConfigShrink(string browserConfigShrink) { DARABONBA_PTR_SET_VALUE(browserConfigShrink_, browserConfigShrink) };


    // browserInstanceGroupId Field Functions 
    bool hasBrowserInstanceGroupId() const { return this->browserInstanceGroupId_ != nullptr;};
    void deleteBrowserInstanceGroupId() { this->browserInstanceGroupId_ = nullptr;};
    inline string browserInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(browserInstanceGroupId_, "") };
    inline ModifyBrowserInstanceGroupShrinkRequest& setBrowserInstanceGroupId(string browserInstanceGroupId) { DARABONBA_PTR_SET_VALUE(browserInstanceGroupId_, browserInstanceGroupId) };


    // cloudBrowserName Field Functions 
    bool hasCloudBrowserName() const { return this->cloudBrowserName_ != nullptr;};
    void deleteCloudBrowserName() { this->cloudBrowserName_ = nullptr;};
    inline string cloudBrowserName() const { DARABONBA_PTR_GET_DEFAULT(cloudBrowserName_, "") };
    inline ModifyBrowserInstanceGroupShrinkRequest& setCloudBrowserName(string cloudBrowserName) { DARABONBA_PTR_SET_VALUE(cloudBrowserName_, cloudBrowserName) };


    // networkShrink Field Functions 
    bool hasNetworkShrink() const { return this->networkShrink_ != nullptr;};
    void deleteNetworkShrink() { this->networkShrink_ = nullptr;};
    inline string networkShrink() const { DARABONBA_PTR_GET_DEFAULT(networkShrink_, "") };
    inline ModifyBrowserInstanceGroupShrinkRequest& setNetworkShrink(string networkShrink) { DARABONBA_PTR_SET_VALUE(networkShrink_, networkShrink) };


    // policyShrink Field Functions 
    bool hasPolicyShrink() const { return this->policyShrink_ != nullptr;};
    void deletePolicyShrink() { this->policyShrink_ = nullptr;};
    inline string policyShrink() const { DARABONBA_PTR_GET_DEFAULT(policyShrink_, "") };
    inline ModifyBrowserInstanceGroupShrinkRequest& setPolicyShrink(string policyShrink) { DARABONBA_PTR_SET_VALUE(policyShrink_, policyShrink) };


    // timersShrink Field Functions 
    bool hasTimersShrink() const { return this->timersShrink_ != nullptr;};
    void deleteTimersShrink() { this->timersShrink_ = nullptr;};
    inline string timersShrink() const { DARABONBA_PTR_GET_DEFAULT(timersShrink_, "") };
    inline ModifyBrowserInstanceGroupShrinkRequest& setTimersShrink(string timersShrink) { DARABONBA_PTR_SET_VALUE(timersShrink_, timersShrink) };


  protected:
    std::shared_ptr<string> browserConfigShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> browserInstanceGroupId_ = nullptr;
    std::shared_ptr<string> cloudBrowserName_ = nullptr;
    std::shared_ptr<string> networkShrink_ = nullptr;
    std::shared_ptr<string> policyShrink_ = nullptr;
    std::shared_ptr<string> timersShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
