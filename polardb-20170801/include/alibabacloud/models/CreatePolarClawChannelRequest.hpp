// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOLARCLAWCHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOLARCLAWCHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreatePolarClawChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePolarClawChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_ANY_TO_JSON(ChannelConfig, channelConfig_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(NpmPackage, npmPackage_);
      DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(Restart, restart_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePolarClawChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_ANY_FROM_JSON(ChannelConfig, channelConfig_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(NpmPackage, npmPackage_);
      DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(Restart, restart_);
    };
    CreatePolarClawChannelRequest() = default ;
    CreatePolarClawChannelRequest(const CreatePolarClawChannelRequest &) = default ;
    CreatePolarClawChannelRequest(CreatePolarClawChannelRequest &&) = default ;
    CreatePolarClawChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePolarClawChannelRequest() = default ;
    CreatePolarClawChannelRequest& operator=(const CreatePolarClawChannelRequest &) = default ;
    CreatePolarClawChannelRequest& operator=(CreatePolarClawChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->channelConfig_ == nullptr && this->channelId_ == nullptr && this->npmPackage_ == nullptr && this->pluginId_ == nullptr && this->restart_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline CreatePolarClawChannelRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // channelConfig Field Functions 
    bool hasChannelConfig() const { return this->channelConfig_ != nullptr;};
    void deleteChannelConfig() { this->channelConfig_ = nullptr;};
    inline     const Darabonba::Json & getChannelConfig() const { DARABONBA_GET(channelConfig_) };
    Darabonba::Json & getChannelConfig() { DARABONBA_GET(channelConfig_) };
    inline CreatePolarClawChannelRequest& setChannelConfig(const Darabonba::Json & channelConfig) { DARABONBA_SET_VALUE(channelConfig_, channelConfig) };
    inline CreatePolarClawChannelRequest& setChannelConfig(Darabonba::Json && channelConfig) { DARABONBA_SET_RVALUE(channelConfig_, channelConfig) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline CreatePolarClawChannelRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // npmPackage Field Functions 
    bool hasNpmPackage() const { return this->npmPackage_ != nullptr;};
    void deleteNpmPackage() { this->npmPackage_ = nullptr;};
    inline string getNpmPackage() const { DARABONBA_PTR_GET_DEFAULT(npmPackage_, "") };
    inline CreatePolarClawChannelRequest& setNpmPackage(string npmPackage) { DARABONBA_PTR_SET_VALUE(npmPackage_, npmPackage) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline CreatePolarClawChannelRequest& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // restart Field Functions 
    bool hasRestart() const { return this->restart_ != nullptr;};
    void deleteRestart() { this->restart_ = nullptr;};
    inline bool getRestart() const { DARABONBA_PTR_GET_DEFAULT(restart_, false) };
    inline CreatePolarClawChannelRequest& setRestart(bool restart) { DARABONBA_PTR_SET_VALUE(restart_, restart) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    Darabonba::Json channelConfig_ {};
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
