// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLARCLAWCHANNELSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLARCLAWCHANNELSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreatePolarClawChannelShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolarClawChannelShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ChannelConfig, channelConfigShrink_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(NpmPackage, npmPackage_);
      DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(Restart, restart_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolarClawChannelShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ChannelConfig, channelConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(NpmPackage, npmPackage_);
      DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(Restart, restart_);
    };
    CreatePolarClawChannelShrinkRequest() = default ;
    CreatePolarClawChannelShrinkRequest(const CreatePolarClawChannelShrinkRequest &) = default ;
    CreatePolarClawChannelShrinkRequest(CreatePolarClawChannelShrinkRequest &&) = default ;
    CreatePolarClawChannelShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolarClawChannelShrinkRequest() = default ;
    CreatePolarClawChannelShrinkRequest& operator=(const CreatePolarClawChannelShrinkRequest &) = default ;
    CreatePolarClawChannelShrinkRequest& operator=(CreatePolarClawChannelShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->channelConfigShrink_ == nullptr && this->channelId_ == nullptr && this->npmPackage_ == nullptr && this->pluginId_ == nullptr && this->restart_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline CreatePolarClawChannelShrinkRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // channelConfigShrink Field Functions 
    bool hasChannelConfigShrink() const { return this->channelConfigShrink_ != nullptr;};
    void deleteChannelConfigShrink() { this->channelConfigShrink_ = nullptr;};
    inline string getChannelConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(channelConfigShrink_, "") };
    inline CreatePolarClawChannelShrinkRequest& setChannelConfigShrink(string channelConfigShrink) { DARABONBA_PTR_SET_VALUE(channelConfigShrink_, channelConfigShrink) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline CreatePolarClawChannelShrinkRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // npmPackage Field Functions 
    bool hasNpmPackage() const { return this->npmPackage_ != nullptr;};
    void deleteNpmPackage() { this->npmPackage_ = nullptr;};
    inline string getNpmPackage() const { DARABONBA_PTR_GET_DEFAULT(npmPackage_, "") };
    inline CreatePolarClawChannelShrinkRequest& setNpmPackage(string npmPackage) { DARABONBA_PTR_SET_VALUE(npmPackage_, npmPackage) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline CreatePolarClawChannelShrinkRequest& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // restart Field Functions 
    bool hasRestart() const { return this->restart_ != nullptr;};
    void deleteRestart() { this->restart_ = nullptr;};
    inline bool getRestart() const { DARABONBA_PTR_GET_DEFAULT(restart_, false) };
    inline CreatePolarClawChannelShrinkRequest& setRestart(bool restart) { DARABONBA_PTR_SET_VALUE(restart_, restart) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    shared_ptr<string> channelConfigShrink_ {};
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    // This parameter is required.
    shared_ptr<string> npmPackage_ {};
    // This parameter is required.
    shared_ptr<string> pluginId_ {};
    shared_ptr<bool> restart_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
