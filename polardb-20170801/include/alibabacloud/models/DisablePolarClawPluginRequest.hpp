// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEPOLARCLAWPLUGINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEPOLARCLAWPLUGINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DisablePolarClawPluginRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisablePolarClawPluginRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(Restart, restart_);
    };
    friend void from_json(const Darabonba::Json& j, DisablePolarClawPluginRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(Restart, restart_);
    };
    DisablePolarClawPluginRequest() = default ;
    DisablePolarClawPluginRequest(const DisablePolarClawPluginRequest &) = default ;
    DisablePolarClawPluginRequest(DisablePolarClawPluginRequest &&) = default ;
    DisablePolarClawPluginRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisablePolarClawPluginRequest() = default ;
    DisablePolarClawPluginRequest& operator=(const DisablePolarClawPluginRequest &) = default ;
    DisablePolarClawPluginRequest& operator=(DisablePolarClawPluginRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->pluginId_ == nullptr && this->restart_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DisablePolarClawPluginRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline DisablePolarClawPluginRequest& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // restart Field Functions 
    bool hasRestart() const { return this->restart_ != nullptr;};
    void deleteRestart() { this->restart_ = nullptr;};
    inline bool getRestart() const { DARABONBA_PTR_GET_DEFAULT(restart_, false) };
    inline DisablePolarClawPluginRequest& setRestart(bool restart) { DARABONBA_PTR_SET_VALUE(restart_, restart) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // This parameter is required.
    shared_ptr<string> pluginId_ {};
    shared_ptr<bool> restart_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
