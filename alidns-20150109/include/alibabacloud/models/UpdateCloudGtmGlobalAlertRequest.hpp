// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLOUDGTMGLOBALALERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLOUDGTMGLOBALALERTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateCloudGtmGlobalAlertRequestAlertConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateCloudGtmGlobalAlertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCloudGtmGlobalAlertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCloudGtmGlobalAlertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
    };
    UpdateCloudGtmGlobalAlertRequest() = default ;
    UpdateCloudGtmGlobalAlertRequest(const UpdateCloudGtmGlobalAlertRequest &) = default ;
    UpdateCloudGtmGlobalAlertRequest(UpdateCloudGtmGlobalAlertRequest &&) = default ;
    UpdateCloudGtmGlobalAlertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCloudGtmGlobalAlertRequest() = default ;
    UpdateCloudGtmGlobalAlertRequest& operator=(const UpdateCloudGtmGlobalAlertRequest &) = default ;
    UpdateCloudGtmGlobalAlertRequest& operator=(UpdateCloudGtmGlobalAlertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->alertConfig_ == nullptr && return this->alertGroup_ == nullptr && return this->clientToken_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateCloudGtmGlobalAlertRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline const vector<UpdateCloudGtmGlobalAlertRequestAlertConfig> & alertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, vector<UpdateCloudGtmGlobalAlertRequestAlertConfig>) };
    inline vector<UpdateCloudGtmGlobalAlertRequestAlertConfig> alertConfig() { DARABONBA_PTR_GET(alertConfig_, vector<UpdateCloudGtmGlobalAlertRequestAlertConfig>) };
    inline UpdateCloudGtmGlobalAlertRequest& setAlertConfig(const vector<UpdateCloudGtmGlobalAlertRequestAlertConfig> & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
    inline UpdateCloudGtmGlobalAlertRequest& setAlertConfig(vector<UpdateCloudGtmGlobalAlertRequestAlertConfig> && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


    // alertGroup Field Functions 
    bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
    void deleteAlertGroup() { this->alertGroup_ = nullptr;};
    inline const vector<string> & alertGroup() const { DARABONBA_PTR_GET_CONST(alertGroup_, vector<string>) };
    inline vector<string> alertGroup() { DARABONBA_PTR_GET(alertGroup_, vector<string>) };
    inline UpdateCloudGtmGlobalAlertRequest& setAlertGroup(const vector<string> & alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };
    inline UpdateCloudGtmGlobalAlertRequest& setAlertGroup(vector<string> && alertGroup) { DARABONBA_PTR_SET_RVALUE(alertGroup_, alertGroup) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateCloudGtmGlobalAlertRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh-CN: Chinese
    // *   en-US: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The alert configurations.
    std::shared_ptr<vector<UpdateCloudGtmGlobalAlertRequestAlertConfig>> alertConfig_ = nullptr;
    // The alert contact groups.
    std::shared_ptr<vector<string>> alertGroup_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can specify a custom value for this parameter, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
