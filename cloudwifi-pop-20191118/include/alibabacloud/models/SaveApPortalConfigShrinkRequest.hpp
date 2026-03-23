// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEAPPORTALCONFIGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEAPPORTALCONFIGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudwifiPop20191118
{
namespace Models
{
  class SaveApPortalConfigShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveApPortalConfigShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApConfigId, apConfigId_);
      DARABONBA_PTR_TO_JSON(AppAuthUrl, appAuthUrl_);
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
      DARABONBA_PTR_TO_JSON(AuthSecret, authSecret_);
      DARABONBA_PTR_TO_JSON(CheckUrl, checkUrl_);
      DARABONBA_PTR_TO_JSON(ClientDownload, clientDownload_);
      DARABONBA_PTR_TO_JSON(ClientUpload, clientUpload_);
      DARABONBA_PTR_TO_JSON(Countdown, countdown_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(PortalTypes, portalTypesShrink_);
      DARABONBA_PTR_TO_JSON(PortalUrl, portalUrl_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(TotalDownload, totalDownload_);
      DARABONBA_PTR_TO_JSON(TotalUpload, totalUpload_);
      DARABONBA_PTR_TO_JSON(WebAuthUrl, webAuthUrl_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, SaveApPortalConfigShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApConfigId, apConfigId_);
      DARABONBA_PTR_FROM_JSON(AppAuthUrl, appAuthUrl_);
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
      DARABONBA_PTR_FROM_JSON(AuthSecret, authSecret_);
      DARABONBA_PTR_FROM_JSON(CheckUrl, checkUrl_);
      DARABONBA_PTR_FROM_JSON(ClientDownload, clientDownload_);
      DARABONBA_PTR_FROM_JSON(ClientUpload, clientUpload_);
      DARABONBA_PTR_FROM_JSON(Countdown, countdown_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(PortalTypes, portalTypesShrink_);
      DARABONBA_PTR_FROM_JSON(PortalUrl, portalUrl_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(TotalDownload, totalDownload_);
      DARABONBA_PTR_FROM_JSON(TotalUpload, totalUpload_);
      DARABONBA_PTR_FROM_JSON(WebAuthUrl, webAuthUrl_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    SaveApPortalConfigShrinkRequest() = default ;
    SaveApPortalConfigShrinkRequest(const SaveApPortalConfigShrinkRequest &) = default ;
    SaveApPortalConfigShrinkRequest(SaveApPortalConfigShrinkRequest &&) = default ;
    SaveApPortalConfigShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveApPortalConfigShrinkRequest() = default ;
    SaveApPortalConfigShrinkRequest& operator=(const SaveApPortalConfigShrinkRequest &) = default ;
    SaveApPortalConfigShrinkRequest& operator=(SaveApPortalConfigShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apConfigId_ == nullptr
        && this->appAuthUrl_ == nullptr && this->appCode_ == nullptr && this->appName_ == nullptr && this->authKey_ == nullptr && this->authSecret_ == nullptr
        && this->checkUrl_ == nullptr && this->clientDownload_ == nullptr && this->clientUpload_ == nullptr && this->countdown_ == nullptr && this->network_ == nullptr
        && this->portalTypesShrink_ == nullptr && this->portalUrl_ == nullptr && this->timeStamp_ == nullptr && this->totalDownload_ == nullptr && this->totalUpload_ == nullptr
        && this->webAuthUrl_ == nullptr && this->whitelist_ == nullptr; };
    // apConfigId Field Functions 
    bool hasApConfigId() const { return this->apConfigId_ != nullptr;};
    void deleteApConfigId() { this->apConfigId_ = nullptr;};
    inline int64_t getApConfigId() const { DARABONBA_PTR_GET_DEFAULT(apConfigId_, 0L) };
    inline SaveApPortalConfigShrinkRequest& setApConfigId(int64_t apConfigId) { DARABONBA_PTR_SET_VALUE(apConfigId_, apConfigId) };


    // appAuthUrl Field Functions 
    bool hasAppAuthUrl() const { return this->appAuthUrl_ != nullptr;};
    void deleteAppAuthUrl() { this->appAuthUrl_ = nullptr;};
    inline string getAppAuthUrl() const { DARABONBA_PTR_GET_DEFAULT(appAuthUrl_, "") };
    inline SaveApPortalConfigShrinkRequest& setAppAuthUrl(string appAuthUrl) { DARABONBA_PTR_SET_VALUE(appAuthUrl_, appAuthUrl) };


    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string getAppCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline SaveApPortalConfigShrinkRequest& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline SaveApPortalConfigShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // authKey Field Functions 
    bool hasAuthKey() const { return this->authKey_ != nullptr;};
    void deleteAuthKey() { this->authKey_ = nullptr;};
    inline string getAuthKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
    inline SaveApPortalConfigShrinkRequest& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


    // authSecret Field Functions 
    bool hasAuthSecret() const { return this->authSecret_ != nullptr;};
    void deleteAuthSecret() { this->authSecret_ = nullptr;};
    inline string getAuthSecret() const { DARABONBA_PTR_GET_DEFAULT(authSecret_, "") };
    inline SaveApPortalConfigShrinkRequest& setAuthSecret(string authSecret) { DARABONBA_PTR_SET_VALUE(authSecret_, authSecret) };


    // checkUrl Field Functions 
    bool hasCheckUrl() const { return this->checkUrl_ != nullptr;};
    void deleteCheckUrl() { this->checkUrl_ = nullptr;};
    inline string getCheckUrl() const { DARABONBA_PTR_GET_DEFAULT(checkUrl_, "") };
    inline SaveApPortalConfigShrinkRequest& setCheckUrl(string checkUrl) { DARABONBA_PTR_SET_VALUE(checkUrl_, checkUrl) };


    // clientDownload Field Functions 
    bool hasClientDownload() const { return this->clientDownload_ != nullptr;};
    void deleteClientDownload() { this->clientDownload_ = nullptr;};
    inline int32_t getClientDownload() const { DARABONBA_PTR_GET_DEFAULT(clientDownload_, 0) };
    inline SaveApPortalConfigShrinkRequest& setClientDownload(int32_t clientDownload) { DARABONBA_PTR_SET_VALUE(clientDownload_, clientDownload) };


    // clientUpload Field Functions 
    bool hasClientUpload() const { return this->clientUpload_ != nullptr;};
    void deleteClientUpload() { this->clientUpload_ = nullptr;};
    inline int32_t getClientUpload() const { DARABONBA_PTR_GET_DEFAULT(clientUpload_, 0) };
    inline SaveApPortalConfigShrinkRequest& setClientUpload(int32_t clientUpload) { DARABONBA_PTR_SET_VALUE(clientUpload_, clientUpload) };


    // countdown Field Functions 
    bool hasCountdown() const { return this->countdown_ != nullptr;};
    void deleteCountdown() { this->countdown_ = nullptr;};
    inline int32_t getCountdown() const { DARABONBA_PTR_GET_DEFAULT(countdown_, 0) };
    inline SaveApPortalConfigShrinkRequest& setCountdown(int32_t countdown) { DARABONBA_PTR_SET_VALUE(countdown_, countdown) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline int32_t getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, 0) };
    inline SaveApPortalConfigShrinkRequest& setNetwork(int32_t network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // portalTypesShrink Field Functions 
    bool hasPortalTypesShrink() const { return this->portalTypesShrink_ != nullptr;};
    void deletePortalTypesShrink() { this->portalTypesShrink_ = nullptr;};
    inline string getPortalTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(portalTypesShrink_, "") };
    inline SaveApPortalConfigShrinkRequest& setPortalTypesShrink(string portalTypesShrink) { DARABONBA_PTR_SET_VALUE(portalTypesShrink_, portalTypesShrink) };


    // portalUrl Field Functions 
    bool hasPortalUrl() const { return this->portalUrl_ != nullptr;};
    void deletePortalUrl() { this->portalUrl_ = nullptr;};
    inline string getPortalUrl() const { DARABONBA_PTR_GET_DEFAULT(portalUrl_, "") };
    inline SaveApPortalConfigShrinkRequest& setPortalUrl(string portalUrl) { DARABONBA_PTR_SET_VALUE(portalUrl_, portalUrl) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline int64_t getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0L) };
    inline SaveApPortalConfigShrinkRequest& setTimeStamp(int64_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // totalDownload Field Functions 
    bool hasTotalDownload() const { return this->totalDownload_ != nullptr;};
    void deleteTotalDownload() { this->totalDownload_ = nullptr;};
    inline int32_t getTotalDownload() const { DARABONBA_PTR_GET_DEFAULT(totalDownload_, 0) };
    inline SaveApPortalConfigShrinkRequest& setTotalDownload(int32_t totalDownload) { DARABONBA_PTR_SET_VALUE(totalDownload_, totalDownload) };


    // totalUpload Field Functions 
    bool hasTotalUpload() const { return this->totalUpload_ != nullptr;};
    void deleteTotalUpload() { this->totalUpload_ = nullptr;};
    inline int32_t getTotalUpload() const { DARABONBA_PTR_GET_DEFAULT(totalUpload_, 0) };
    inline SaveApPortalConfigShrinkRequest& setTotalUpload(int32_t totalUpload) { DARABONBA_PTR_SET_VALUE(totalUpload_, totalUpload) };


    // webAuthUrl Field Functions 
    bool hasWebAuthUrl() const { return this->webAuthUrl_ != nullptr;};
    void deleteWebAuthUrl() { this->webAuthUrl_ = nullptr;};
    inline string getWebAuthUrl() const { DARABONBA_PTR_GET_DEFAULT(webAuthUrl_, "") };
    inline SaveApPortalConfigShrinkRequest& setWebAuthUrl(string webAuthUrl) { DARABONBA_PTR_SET_VALUE(webAuthUrl_, webAuthUrl) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline string getWhitelist() const { DARABONBA_PTR_GET_DEFAULT(whitelist_, "") };
    inline SaveApPortalConfigShrinkRequest& setWhitelist(string whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> apConfigId_ {};
    shared_ptr<string> appAuthUrl_ {};
    // This parameter is required.
    shared_ptr<string> appCode_ {};
    // This parameter is required.
    shared_ptr<string> appName_ {};
    shared_ptr<string> authKey_ {};
    shared_ptr<string> authSecret_ {};
    shared_ptr<string> checkUrl_ {};
    shared_ptr<int32_t> clientDownload_ {};
    shared_ptr<int32_t> clientUpload_ {};
    shared_ptr<int32_t> countdown_ {};
    shared_ptr<int32_t> network_ {};
    shared_ptr<string> portalTypesShrink_ {};
    shared_ptr<string> portalUrl_ {};
    shared_ptr<int64_t> timeStamp_ {};
    shared_ptr<int32_t> totalDownload_ {};
    shared_ptr<int32_t> totalUpload_ {};
    shared_ptr<string> webAuthUrl_ {};
    shared_ptr<string> whitelist_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudwifiPop20191118
#endif
