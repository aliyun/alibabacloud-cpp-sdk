// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class PushReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(ConnectType, connectType_);
      DARABONBA_PTR_TO_JSON(DeliveryToken, deliveryToken_);
      DARABONBA_PTR_TO_JSON(Imei, imei_);
      DARABONBA_PTR_TO_JSON(Imsi, imsi_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(OsType, osType_);
      DARABONBA_PTR_TO_JSON(PushVersion, pushVersion_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(ThirdChannel, thirdChannel_);
      DARABONBA_PTR_TO_JSON(ThirdChannelDeviceToken, thirdChannelDeviceToken_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, PushReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(ConnectType, connectType_);
      DARABONBA_PTR_FROM_JSON(DeliveryToken, deliveryToken_);
      DARABONBA_PTR_FROM_JSON(Imei, imei_);
      DARABONBA_PTR_FROM_JSON(Imsi, imsi_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(OsType, osType_);
      DARABONBA_PTR_FROM_JSON(PushVersion, pushVersion_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(ThirdChannel, thirdChannel_);
      DARABONBA_PTR_FROM_JSON(ThirdChannelDeviceToken, thirdChannelDeviceToken_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    PushReportRequest() = default ;
    PushReportRequest(const PushReportRequest &) = default ;
    PushReportRequest(PushReportRequest &&) = default ;
    PushReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushReportRequest() = default ;
    PushReportRequest& operator=(const PushReportRequest &) = default ;
    PushReportRequest& operator=(PushReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appVersion_ == nullptr && return this->channel_ == nullptr && return this->connectType_ == nullptr && return this->deliveryToken_ == nullptr && return this->imei_ == nullptr
        && return this->imsi_ == nullptr && return this->model_ == nullptr && return this->osType_ == nullptr && return this->pushVersion_ == nullptr && return this->tenantId_ == nullptr
        && return this->thirdChannel_ == nullptr && return this->thirdChannelDeviceToken_ == nullptr && return this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline PushReportRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline PushReportRequest& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string channel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline PushReportRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // connectType Field Functions 
    bool hasConnectType() const { return this->connectType_ != nullptr;};
    void deleteConnectType() { this->connectType_ = nullptr;};
    inline string connectType() const { DARABONBA_PTR_GET_DEFAULT(connectType_, "") };
    inline PushReportRequest& setConnectType(string connectType) { DARABONBA_PTR_SET_VALUE(connectType_, connectType) };


    // deliveryToken Field Functions 
    bool hasDeliveryToken() const { return this->deliveryToken_ != nullptr;};
    void deleteDeliveryToken() { this->deliveryToken_ = nullptr;};
    inline string deliveryToken() const { DARABONBA_PTR_GET_DEFAULT(deliveryToken_, "") };
    inline PushReportRequest& setDeliveryToken(string deliveryToken) { DARABONBA_PTR_SET_VALUE(deliveryToken_, deliveryToken) };


    // imei Field Functions 
    bool hasImei() const { return this->imei_ != nullptr;};
    void deleteImei() { this->imei_ = nullptr;};
    inline string imei() const { DARABONBA_PTR_GET_DEFAULT(imei_, "") };
    inline PushReportRequest& setImei(string imei) { DARABONBA_PTR_SET_VALUE(imei_, imei) };


    // imsi Field Functions 
    bool hasImsi() const { return this->imsi_ != nullptr;};
    void deleteImsi() { this->imsi_ = nullptr;};
    inline string imsi() const { DARABONBA_PTR_GET_DEFAULT(imsi_, "") };
    inline PushReportRequest& setImsi(string imsi) { DARABONBA_PTR_SET_VALUE(imsi_, imsi) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline PushReportRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // osType Field Functions 
    bool hasOsType() const { return this->osType_ != nullptr;};
    void deleteOsType() { this->osType_ = nullptr;};
    inline int32_t osType() const { DARABONBA_PTR_GET_DEFAULT(osType_, 0) };
    inline PushReportRequest& setOsType(int32_t osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


    // pushVersion Field Functions 
    bool hasPushVersion() const { return this->pushVersion_ != nullptr;};
    void deletePushVersion() { this->pushVersion_ = nullptr;};
    inline string pushVersion() const { DARABONBA_PTR_GET_DEFAULT(pushVersion_, "") };
    inline PushReportRequest& setPushVersion(string pushVersion) { DARABONBA_PTR_SET_VALUE(pushVersion_, pushVersion) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline PushReportRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // thirdChannel Field Functions 
    bool hasThirdChannel() const { return this->thirdChannel_ != nullptr;};
    void deleteThirdChannel() { this->thirdChannel_ = nullptr;};
    inline int32_t thirdChannel() const { DARABONBA_PTR_GET_DEFAULT(thirdChannel_, 0) };
    inline PushReportRequest& setThirdChannel(int32_t thirdChannel) { DARABONBA_PTR_SET_VALUE(thirdChannel_, thirdChannel) };


    // thirdChannelDeviceToken Field Functions 
    bool hasThirdChannelDeviceToken() const { return this->thirdChannelDeviceToken_ != nullptr;};
    void deleteThirdChannelDeviceToken() { this->thirdChannelDeviceToken_ = nullptr;};
    inline string thirdChannelDeviceToken() const { DARABONBA_PTR_GET_DEFAULT(thirdChannelDeviceToken_, "") };
    inline PushReportRequest& setThirdChannelDeviceToken(string thirdChannelDeviceToken) { DARABONBA_PTR_SET_VALUE(thirdChannelDeviceToken_, thirdChannelDeviceToken) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline PushReportRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appVersion_ = nullptr;
    std::shared_ptr<string> channel_ = nullptr;
    std::shared_ptr<string> connectType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> deliveryToken_ = nullptr;
    std::shared_ptr<string> imei_ = nullptr;
    std::shared_ptr<string> imsi_ = nullptr;
    std::shared_ptr<string> model_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> osType_ = nullptr;
    std::shared_ptr<string> pushVersion_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<int32_t> thirdChannel_ = nullptr;
    std::shared_ptr<string> thirdChannelDeviceToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
