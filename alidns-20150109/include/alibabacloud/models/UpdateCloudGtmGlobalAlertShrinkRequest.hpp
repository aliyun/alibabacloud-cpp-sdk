// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLOUDGTMGLOBALALERTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLOUDGTMGLOBALALERTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateCloudGtmGlobalAlertShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCloudGtmGlobalAlertShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfigShrink_);
      DARABONBA_PTR_TO_JSON(AlertGroup, alertGroupShrink_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCloudGtmGlobalAlertShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfigShrink_);
      DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroupShrink_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
    };
    UpdateCloudGtmGlobalAlertShrinkRequest() = default ;
    UpdateCloudGtmGlobalAlertShrinkRequest(const UpdateCloudGtmGlobalAlertShrinkRequest &) = default ;
    UpdateCloudGtmGlobalAlertShrinkRequest(UpdateCloudGtmGlobalAlertShrinkRequest &&) = default ;
    UpdateCloudGtmGlobalAlertShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCloudGtmGlobalAlertShrinkRequest() = default ;
    UpdateCloudGtmGlobalAlertShrinkRequest& operator=(const UpdateCloudGtmGlobalAlertShrinkRequest &) = default ;
    UpdateCloudGtmGlobalAlertShrinkRequest& operator=(UpdateCloudGtmGlobalAlertShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->alertConfigShrink_ != nullptr && this->alertGroupShrink_ != nullptr && this->clientToken_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateCloudGtmGlobalAlertShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // alertConfigShrink Field Functions 
    bool hasAlertConfigShrink() const { return this->alertConfigShrink_ != nullptr;};
    void deleteAlertConfigShrink() { this->alertConfigShrink_ = nullptr;};
    inline string alertConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(alertConfigShrink_, "") };
    inline UpdateCloudGtmGlobalAlertShrinkRequest& setAlertConfigShrink(string alertConfigShrink) { DARABONBA_PTR_SET_VALUE(alertConfigShrink_, alertConfigShrink) };


    // alertGroupShrink Field Functions 
    bool hasAlertGroupShrink() const { return this->alertGroupShrink_ != nullptr;};
    void deleteAlertGroupShrink() { this->alertGroupShrink_ = nullptr;};
    inline string alertGroupShrink() const { DARABONBA_PTR_GET_DEFAULT(alertGroupShrink_, "") };
    inline UpdateCloudGtmGlobalAlertShrinkRequest& setAlertGroupShrink(string alertGroupShrink) { DARABONBA_PTR_SET_VALUE(alertGroupShrink_, alertGroupShrink) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateCloudGtmGlobalAlertShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh-CN: Chinese
    // *   en-US: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The alert configurations.
    std::shared_ptr<string> alertConfigShrink_ = nullptr;
    // The alert contact groups.
    std::shared_ptr<string> alertGroupShrink_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can specify a custom value for this parameter, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
