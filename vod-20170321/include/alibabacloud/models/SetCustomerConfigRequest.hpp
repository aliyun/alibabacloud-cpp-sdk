// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETCUSTOMERCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETCUSTOMERCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SetCustomerConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetCustomerConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AIConfig, AIConfig_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AuditConfig, auditConfig_);
      DARABONBA_PTR_TO_JSON(DownloadSwitch, downloadSwitch_);
      DARABONBA_PTR_TO_JSON(MetricConfig, metricConfig_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, SetCustomerConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AIConfig, AIConfig_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AuditConfig, auditConfig_);
      DARABONBA_PTR_FROM_JSON(DownloadSwitch, downloadSwitch_);
      DARABONBA_PTR_FROM_JSON(MetricConfig, metricConfig_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    SetCustomerConfigRequest() = default ;
    SetCustomerConfigRequest(const SetCustomerConfigRequest &) = default ;
    SetCustomerConfigRequest(SetCustomerConfigRequest &&) = default ;
    SetCustomerConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetCustomerConfigRequest() = default ;
    SetCustomerConfigRequest& operator=(const SetCustomerConfigRequest &) = default ;
    SetCustomerConfigRequest& operator=(SetCustomerConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AIConfig_ != nullptr
        && this->appId_ != nullptr && this->auditConfig_ != nullptr && this->downloadSwitch_ != nullptr && this->metricConfig_ != nullptr && this->ownerId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // AIConfig Field Functions 
    bool hasAIConfig() const { return this->AIConfig_ != nullptr;};
    void deleteAIConfig() { this->AIConfig_ = nullptr;};
    inline string AIConfig() const { DARABONBA_PTR_GET_DEFAULT(AIConfig_, "") };
    inline SetCustomerConfigRequest& setAIConfig(string AIConfig) { DARABONBA_PTR_SET_VALUE(AIConfig_, AIConfig) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SetCustomerConfigRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // auditConfig Field Functions 
    bool hasAuditConfig() const { return this->auditConfig_ != nullptr;};
    void deleteAuditConfig() { this->auditConfig_ = nullptr;};
    inline string auditConfig() const { DARABONBA_PTR_GET_DEFAULT(auditConfig_, "") };
    inline SetCustomerConfigRequest& setAuditConfig(string auditConfig) { DARABONBA_PTR_SET_VALUE(auditConfig_, auditConfig) };


    // downloadSwitch Field Functions 
    bool hasDownloadSwitch() const { return this->downloadSwitch_ != nullptr;};
    void deleteDownloadSwitch() { this->downloadSwitch_ = nullptr;};
    inline string downloadSwitch() const { DARABONBA_PTR_GET_DEFAULT(downloadSwitch_, "") };
    inline SetCustomerConfigRequest& setDownloadSwitch(string downloadSwitch) { DARABONBA_PTR_SET_VALUE(downloadSwitch_, downloadSwitch) };


    // metricConfig Field Functions 
    bool hasMetricConfig() const { return this->metricConfig_ != nullptr;};
    void deleteMetricConfig() { this->metricConfig_ = nullptr;};
    inline string metricConfig() const { DARABONBA_PTR_GET_DEFAULT(metricConfig_, "") };
    inline SetCustomerConfigRequest& setMetricConfig(string metricConfig) { DARABONBA_PTR_SET_VALUE(metricConfig_, metricConfig) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetCustomerConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SetCustomerConfigRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SetCustomerConfigRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    std::shared_ptr<string> AIConfig_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> auditConfig_ = nullptr;
    std::shared_ptr<string> downloadSwitch_ = nullptr;
    std::shared_ptr<string> metricConfig_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
