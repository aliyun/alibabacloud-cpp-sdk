// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATACONNECTORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATACONNECTORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class UpdateDataConnectorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataConnectorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthConfigId, authConfigId_);
      DARABONBA_PTR_TO_JSON(AuthConfigProduct, authConfigProduct_);
      DARABONBA_PTR_TO_JSON(AuthConfigVendor, authConfigVendor_);
      DARABONBA_PTR_TO_JSON(DataConnectorConfig, dataConnectorConfig_);
      DARABONBA_PTR_TO_JSON(DataConnectorId, dataConnectorId_);
      DARABONBA_PTR_TO_JSON(DataConnectorStatus, dataConnectorStatus_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataConnectorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthConfigId, authConfigId_);
      DARABONBA_PTR_FROM_JSON(AuthConfigProduct, authConfigProduct_);
      DARABONBA_PTR_FROM_JSON(AuthConfigVendor, authConfigVendor_);
      DARABONBA_PTR_FROM_JSON(DataConnectorConfig, dataConnectorConfig_);
      DARABONBA_PTR_FROM_JSON(DataConnectorId, dataConnectorId_);
      DARABONBA_PTR_FROM_JSON(DataConnectorStatus, dataConnectorStatus_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
    };
    UpdateDataConnectorRequest() = default ;
    UpdateDataConnectorRequest(const UpdateDataConnectorRequest &) = default ;
    UpdateDataConnectorRequest(UpdateDataConnectorRequest &&) = default ;
    UpdateDataConnectorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataConnectorRequest() = default ;
    UpdateDataConnectorRequest& operator=(const UpdateDataConnectorRequest &) = default ;
    UpdateDataConnectorRequest& operator=(UpdateDataConnectorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authConfigId_ == nullptr
        && this->authConfigProduct_ == nullptr && this->authConfigVendor_ == nullptr && this->dataConnectorConfig_ == nullptr && this->dataConnectorId_ == nullptr && this->dataConnectorStatus_ == nullptr
        && this->lang_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr; };
    // authConfigId Field Functions 
    bool hasAuthConfigId() const { return this->authConfigId_ != nullptr;};
    void deleteAuthConfigId() { this->authConfigId_ = nullptr;};
    inline string getAuthConfigId() const { DARABONBA_PTR_GET_DEFAULT(authConfigId_, "") };
    inline UpdateDataConnectorRequest& setAuthConfigId(string authConfigId) { DARABONBA_PTR_SET_VALUE(authConfigId_, authConfigId) };


    // authConfigProduct Field Functions 
    bool hasAuthConfigProduct() const { return this->authConfigProduct_ != nullptr;};
    void deleteAuthConfigProduct() { this->authConfigProduct_ = nullptr;};
    inline string getAuthConfigProduct() const { DARABONBA_PTR_GET_DEFAULT(authConfigProduct_, "") };
    inline UpdateDataConnectorRequest& setAuthConfigProduct(string authConfigProduct) { DARABONBA_PTR_SET_VALUE(authConfigProduct_, authConfigProduct) };


    // authConfigVendor Field Functions 
    bool hasAuthConfigVendor() const { return this->authConfigVendor_ != nullptr;};
    void deleteAuthConfigVendor() { this->authConfigVendor_ = nullptr;};
    inline string getAuthConfigVendor() const { DARABONBA_PTR_GET_DEFAULT(authConfigVendor_, "") };
    inline UpdateDataConnectorRequest& setAuthConfigVendor(string authConfigVendor) { DARABONBA_PTR_SET_VALUE(authConfigVendor_, authConfigVendor) };


    // dataConnectorConfig Field Functions 
    bool hasDataConnectorConfig() const { return this->dataConnectorConfig_ != nullptr;};
    void deleteDataConnectorConfig() { this->dataConnectorConfig_ = nullptr;};
    inline string getDataConnectorConfig() const { DARABONBA_PTR_GET_DEFAULT(dataConnectorConfig_, "") };
    inline UpdateDataConnectorRequest& setDataConnectorConfig(string dataConnectorConfig) { DARABONBA_PTR_SET_VALUE(dataConnectorConfig_, dataConnectorConfig) };


    // dataConnectorId Field Functions 
    bool hasDataConnectorId() const { return this->dataConnectorId_ != nullptr;};
    void deleteDataConnectorId() { this->dataConnectorId_ = nullptr;};
    inline string getDataConnectorId() const { DARABONBA_PTR_GET_DEFAULT(dataConnectorId_, "") };
    inline UpdateDataConnectorRequest& setDataConnectorId(string dataConnectorId) { DARABONBA_PTR_SET_VALUE(dataConnectorId_, dataConnectorId) };


    // dataConnectorStatus Field Functions 
    bool hasDataConnectorStatus() const { return this->dataConnectorStatus_ != nullptr;};
    void deleteDataConnectorStatus() { this->dataConnectorStatus_ = nullptr;};
    inline string getDataConnectorStatus() const { DARABONBA_PTR_GET_DEFAULT(dataConnectorStatus_, "") };
    inline UpdateDataConnectorRequest& setDataConnectorStatus(string dataConnectorStatus) { DARABONBA_PTR_SET_VALUE(dataConnectorStatus_, dataConnectorStatus) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDataConnectorRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateDataConnectorRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline UpdateDataConnectorRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


  protected:
    // The configuration item ID of the collector access object in the multi-cloud configuration.
    shared_ptr<string> authConfigId_ {};
    // The cloud service to which the authentication configuration belongs.
    shared_ptr<string> authConfigProduct_ {};
    // The authentication vendor name.
    shared_ptr<string> authConfigVendor_ {};
    // The configuration information of the collector.
    shared_ptr<string> dataConnectorConfig_ {};
    // The collector ID.
    // 
    // This parameter is required.
    shared_ptr<string> dataConnectorId_ {};
    // The status of the collector. Valid values:
    // - enabled: enabled.
    // - disabled: disabled.
    shared_ptr<string> dataConnectorStatus_ {};
    // The language of the response. Valid values:
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The data management center of the threat analysis feature. Specify this parameter based on the region where your assets reside. Valid values:
    // - cn-hangzhou: Your assets belong to the Chinese mainland and Hong Kong (China).
    // - ap-southeast-1: Your assets belong to regions outside China.
    shared_ptr<string> regionId_ {};
    // The ID of the member account that the administrator switches to.
    shared_ptr<int64_t> roleFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
