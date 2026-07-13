// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEATIALERTSETTINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEATIALERTSETTINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateAtiAlertSettingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAtiAlertSettingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAtiAlertSettingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
    };
    UpdateAtiAlertSettingsRequest() = default ;
    UpdateAtiAlertSettingsRequest(const UpdateAtiAlertSettingsRequest &) = default ;
    UpdateAtiAlertSettingsRequest(UpdateAtiAlertSettingsRequest &&) = default ;
    UpdateAtiAlertSettingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAtiAlertSettingsRequest() = default ;
    UpdateAtiAlertSettingsRequest& operator=(const UpdateAtiAlertSettingsRequest &) = default ;
    UpdateAtiAlertSettingsRequest& operator=(UpdateAtiAlertSettingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertConfig_ == nullptr
        && this->alertGroup_ == nullptr && this->clientToken_ == nullptr; };
    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline string getAlertConfig() const { DARABONBA_PTR_GET_DEFAULT(alertConfig_, "") };
    inline UpdateAtiAlertSettingsRequest& setAlertConfig(string alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };


    // alertGroup Field Functions 
    bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
    void deleteAlertGroup() { this->alertGroup_ = nullptr;};
    inline string getAlertGroup() const { DARABONBA_PTR_GET_DEFAULT(alertGroup_, "") };
    inline UpdateAtiAlertSettingsRequest& setAlertGroup(string alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateAtiAlertSettingsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    shared_ptr<string> alertConfig_ {};
    shared_ptr<string> alertGroup_ {};
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
