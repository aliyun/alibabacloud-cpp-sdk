// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPOLARCLAWCHANNELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPOLARCLAWCHANNELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeletePolarClawChannelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePolarClawChannelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(Restart, restart_);
      DARABONBA_PTR_TO_JSON(UninstallPlugin, uninstallPlugin_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePolarClawChannelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(Restart, restart_);
      DARABONBA_PTR_FROM_JSON(UninstallPlugin, uninstallPlugin_);
    };
    DeletePolarClawChannelRequest() = default ;
    DeletePolarClawChannelRequest(const DeletePolarClawChannelRequest &) = default ;
    DeletePolarClawChannelRequest(DeletePolarClawChannelRequest &&) = default ;
    DeletePolarClawChannelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePolarClawChannelRequest() = default ;
    DeletePolarClawChannelRequest& operator=(const DeletePolarClawChannelRequest &) = default ;
    DeletePolarClawChannelRequest& operator=(DeletePolarClawChannelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->channelId_ == nullptr && this->pluginId_ == nullptr && this->restart_ == nullptr && this->uninstallPlugin_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DeletePolarClawChannelRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline DeletePolarClawChannelRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline DeletePolarClawChannelRequest& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // restart Field Functions 
    bool hasRestart() const { return this->restart_ != nullptr;};
    void deleteRestart() { this->restart_ = nullptr;};
    inline bool getRestart() const { DARABONBA_PTR_GET_DEFAULT(restart_, false) };
    inline DeletePolarClawChannelRequest& setRestart(bool restart) { DARABONBA_PTR_SET_VALUE(restart_, restart) };


    // uninstallPlugin Field Functions 
    bool hasUninstallPlugin() const { return this->uninstallPlugin_ != nullptr;};
    void deleteUninstallPlugin() { this->uninstallPlugin_ = nullptr;};
    inline bool getUninstallPlugin() const { DARABONBA_PTR_GET_DEFAULT(uninstallPlugin_, false) };
    inline DeletePolarClawChannelRequest& setUninstallPlugin(bool uninstallPlugin) { DARABONBA_PTR_SET_VALUE(uninstallPlugin_, uninstallPlugin) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // This parameter is required.
    shared_ptr<string> channelId_ {};
    shared_ptr<string> pluginId_ {};
    shared_ptr<bool> restart_ {};
    shared_ptr<bool> uninstallPlugin_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
