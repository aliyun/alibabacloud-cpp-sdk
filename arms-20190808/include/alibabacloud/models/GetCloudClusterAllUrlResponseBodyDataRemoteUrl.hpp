// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDCLUSTERALLURLRESPONSEBODYDATAREMOTEURL_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDCLUSTERALLURLRESPONSEBODYDATAREMOTEURL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetCloudClusterAllUrlResponseBodyDataRemoteUrl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudClusterAllUrlResponseBodyDataRemoteUrl& obj) { 
      DARABONBA_PTR_TO_JSON(AuthToken, authToken_);
      DARABONBA_PTR_TO_JSON(GrafanaUrl, grafanaUrl_);
      DARABONBA_PTR_TO_JSON(InternetGrafanaUrl, internetGrafanaUrl_);
      DARABONBA_PTR_TO_JSON(InternetPushGatewayUrl, internetPushGatewayUrl_);
      DARABONBA_PTR_TO_JSON(InternetRemoteReadUrl, internetRemoteReadUrl_);
      DARABONBA_PTR_TO_JSON(InternetRemoteWriteUrl, internetRemoteWriteUrl_);
      DARABONBA_PTR_TO_JSON(PushGatewayUrl, pushGatewayUrl_);
      DARABONBA_PTR_TO_JSON(RemoteReadUrl, remoteReadUrl_);
      DARABONBA_PTR_TO_JSON(RemoteWriteUrl, remoteWriteUrl_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudClusterAllUrlResponseBodyDataRemoteUrl& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthToken, authToken_);
      DARABONBA_PTR_FROM_JSON(GrafanaUrl, grafanaUrl_);
      DARABONBA_PTR_FROM_JSON(InternetGrafanaUrl, internetGrafanaUrl_);
      DARABONBA_PTR_FROM_JSON(InternetPushGatewayUrl, internetPushGatewayUrl_);
      DARABONBA_PTR_FROM_JSON(InternetRemoteReadUrl, internetRemoteReadUrl_);
      DARABONBA_PTR_FROM_JSON(InternetRemoteWriteUrl, internetRemoteWriteUrl_);
      DARABONBA_PTR_FROM_JSON(PushGatewayUrl, pushGatewayUrl_);
      DARABONBA_PTR_FROM_JSON(RemoteReadUrl, remoteReadUrl_);
      DARABONBA_PTR_FROM_JSON(RemoteWriteUrl, remoteWriteUrl_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    GetCloudClusterAllUrlResponseBodyDataRemoteUrl() = default ;
    GetCloudClusterAllUrlResponseBodyDataRemoteUrl(const GetCloudClusterAllUrlResponseBodyDataRemoteUrl &) = default ;
    GetCloudClusterAllUrlResponseBodyDataRemoteUrl(GetCloudClusterAllUrlResponseBodyDataRemoteUrl &&) = default ;
    GetCloudClusterAllUrlResponseBodyDataRemoteUrl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudClusterAllUrlResponseBodyDataRemoteUrl() = default ;
    GetCloudClusterAllUrlResponseBodyDataRemoteUrl& operator=(const GetCloudClusterAllUrlResponseBodyDataRemoteUrl &) = default ;
    GetCloudClusterAllUrlResponseBodyDataRemoteUrl& operator=(GetCloudClusterAllUrlResponseBodyDataRemoteUrl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authToken_ != nullptr
        && this->grafanaUrl_ != nullptr && this->internetGrafanaUrl_ != nullptr && this->internetPushGatewayUrl_ != nullptr && this->internetRemoteReadUrl_ != nullptr && this->internetRemoteWriteUrl_ != nullptr
        && this->pushGatewayUrl_ != nullptr && this->remoteReadUrl_ != nullptr && this->remoteWriteUrl_ != nullptr && this->token_ != nullptr; };
    // authToken Field Functions 
    bool hasAuthToken() const { return this->authToken_ != nullptr;};
    void deleteAuthToken() { this->authToken_ = nullptr;};
    inline bool authToken() const { DARABONBA_PTR_GET_DEFAULT(authToken_, false) };
    inline GetCloudClusterAllUrlResponseBodyDataRemoteUrl& setAuthToken(bool authToken) { DARABONBA_PTR_SET_VALUE(authToken_, authToken) };


    // grafanaUrl Field Functions 
    bool hasGrafanaUrl() const { return this->grafanaUrl_ != nullptr;};
    void deleteGrafanaUrl() { this->grafanaUrl_ = nullptr;};
    inline string grafanaUrl() const { DARABONBA_PTR_GET_DEFAULT(grafanaUrl_, "") };
    inline GetCloudClusterAllUrlResponseBodyDataRemoteUrl& setGrafanaUrl(string grafanaUrl) { DARABONBA_PTR_SET_VALUE(grafanaUrl_, grafanaUrl) };


    // internetGrafanaUrl Field Functions 
    bool hasInternetGrafanaUrl() const { return this->internetGrafanaUrl_ != nullptr;};
    void deleteInternetGrafanaUrl() { this->internetGrafanaUrl_ = nullptr;};
    inline string internetGrafanaUrl() const { DARABONBA_PTR_GET_DEFAULT(internetGrafanaUrl_, "") };
    inline GetCloudClusterAllUrlResponseBodyDataRemoteUrl& setInternetGrafanaUrl(string internetGrafanaUrl) { DARABONBA_PTR_SET_VALUE(internetGrafanaUrl_, internetGrafanaUrl) };


    // internetPushGatewayUrl Field Functions 
    bool hasInternetPushGatewayUrl() const { return this->internetPushGatewayUrl_ != nullptr;};
    void deleteInternetPushGatewayUrl() { this->internetPushGatewayUrl_ = nullptr;};
    inline string internetPushGatewayUrl() const { DARABONBA_PTR_GET_DEFAULT(internetPushGatewayUrl_, "") };
    inline GetCloudClusterAllUrlResponseBodyDataRemoteUrl& setInternetPushGatewayUrl(string internetPushGatewayUrl) { DARABONBA_PTR_SET_VALUE(internetPushGatewayUrl_, internetPushGatewayUrl) };


    // internetRemoteReadUrl Field Functions 
    bool hasInternetRemoteReadUrl() const { return this->internetRemoteReadUrl_ != nullptr;};
    void deleteInternetRemoteReadUrl() { this->internetRemoteReadUrl_ = nullptr;};
    inline string internetRemoteReadUrl() const { DARABONBA_PTR_GET_DEFAULT(internetRemoteReadUrl_, "") };
    inline GetCloudClusterAllUrlResponseBodyDataRemoteUrl& setInternetRemoteReadUrl(string internetRemoteReadUrl) { DARABONBA_PTR_SET_VALUE(internetRemoteReadUrl_, internetRemoteReadUrl) };


    // internetRemoteWriteUrl Field Functions 
    bool hasInternetRemoteWriteUrl() const { return this->internetRemoteWriteUrl_ != nullptr;};
    void deleteInternetRemoteWriteUrl() { this->internetRemoteWriteUrl_ = nullptr;};
    inline string internetRemoteWriteUrl() const { DARABONBA_PTR_GET_DEFAULT(internetRemoteWriteUrl_, "") };
    inline GetCloudClusterAllUrlResponseBodyDataRemoteUrl& setInternetRemoteWriteUrl(string internetRemoteWriteUrl) { DARABONBA_PTR_SET_VALUE(internetRemoteWriteUrl_, internetRemoteWriteUrl) };


    // pushGatewayUrl Field Functions 
    bool hasPushGatewayUrl() const { return this->pushGatewayUrl_ != nullptr;};
    void deletePushGatewayUrl() { this->pushGatewayUrl_ = nullptr;};
    inline string pushGatewayUrl() const { DARABONBA_PTR_GET_DEFAULT(pushGatewayUrl_, "") };
    inline GetCloudClusterAllUrlResponseBodyDataRemoteUrl& setPushGatewayUrl(string pushGatewayUrl) { DARABONBA_PTR_SET_VALUE(pushGatewayUrl_, pushGatewayUrl) };


    // remoteReadUrl Field Functions 
    bool hasRemoteReadUrl() const { return this->remoteReadUrl_ != nullptr;};
    void deleteRemoteReadUrl() { this->remoteReadUrl_ = nullptr;};
    inline string remoteReadUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteReadUrl_, "") };
    inline GetCloudClusterAllUrlResponseBodyDataRemoteUrl& setRemoteReadUrl(string remoteReadUrl) { DARABONBA_PTR_SET_VALUE(remoteReadUrl_, remoteReadUrl) };


    // remoteWriteUrl Field Functions 
    bool hasRemoteWriteUrl() const { return this->remoteWriteUrl_ != nullptr;};
    void deleteRemoteWriteUrl() { this->remoteWriteUrl_ = nullptr;};
    inline string remoteWriteUrl() const { DARABONBA_PTR_GET_DEFAULT(remoteWriteUrl_, "") };
    inline GetCloudClusterAllUrlResponseBodyDataRemoteUrl& setRemoteWriteUrl(string remoteWriteUrl) { DARABONBA_PTR_SET_VALUE(remoteWriteUrl_, remoteWriteUrl) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GetCloudClusterAllUrlResponseBodyDataRemoteUrl& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // Indicates whether authentication is enabled.
    std::shared_ptr<bool> authToken_ = nullptr;
    // The internal URL for Grafana.
    std::shared_ptr<string> grafanaUrl_ = nullptr;
    // The public URL for Grafana.
    std::shared_ptr<string> internetGrafanaUrl_ = nullptr;
    // The public URL for Pushgateway.
    std::shared_ptr<string> internetPushGatewayUrl_ = nullptr;
    // The public URL for remote read.
    std::shared_ptr<string> internetRemoteReadUrl_ = nullptr;
    // The public URL for remote write.
    std::shared_ptr<string> internetRemoteWriteUrl_ = nullptr;
    // The internal URL for Pushgateway.
    std::shared_ptr<string> pushGatewayUrl_ = nullptr;
    // The internal URL for remote read.
    std::shared_ptr<string> remoteReadUrl_ = nullptr;
    // The internal URL for remote write.
    std::shared_ptr<string> remoteWriteUrl_ = nullptr;
    // The token value used for authentication.
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
