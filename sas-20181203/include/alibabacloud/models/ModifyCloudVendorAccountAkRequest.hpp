// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDVENDORACCOUNTAKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDVENDORACCOUNTAKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyCloudVendorAccountAKRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudVendorAccountAKRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthIds, authIds_);
      DARABONBA_PTR_TO_JSON(AuthModules, authModules_);
      DARABONBA_PTR_TO_JSON(CtdrCloudUserId, ctdrCloudUserId_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(SecretId, secretId_);
      DARABONBA_PTR_TO_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubscriptionIds, subscriptionIds_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(VendorAuthAlias, vendorAuthAlias_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudVendorAccountAKRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthIds, authIds_);
      DARABONBA_PTR_FROM_JSON(AuthModules, authModules_);
      DARABONBA_PTR_FROM_JSON(CtdrCloudUserId, ctdrCloudUserId_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
      DARABONBA_PTR_FROM_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubscriptionIds, subscriptionIds_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(VendorAuthAlias, vendorAuthAlias_);
    };
    ModifyCloudVendorAccountAKRequest() = default ;
    ModifyCloudVendorAccountAKRequest(const ModifyCloudVendorAccountAKRequest &) = default ;
    ModifyCloudVendorAccountAKRequest(ModifyCloudVendorAccountAKRequest &&) = default ;
    ModifyCloudVendorAccountAKRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudVendorAccountAKRequest() = default ;
    ModifyCloudVendorAccountAKRequest& operator=(const ModifyCloudVendorAccountAKRequest &) = default ;
    ModifyCloudVendorAccountAKRequest& operator=(ModifyCloudVendorAccountAKRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authIds_ == nullptr
        && return this->authModules_ == nullptr && return this->ctdrCloudUserId_ == nullptr && return this->domain_ == nullptr && return this->extendInfo_ == nullptr && return this->lang_ == nullptr
        && return this->regions_ == nullptr && return this->secretId_ == nullptr && return this->secretKey_ == nullptr && return this->status_ == nullptr && return this->subscriptionIds_ == nullptr
        && return this->tenantId_ == nullptr && return this->vendorAuthAlias_ == nullptr; };
    // authIds Field Functions 
    bool hasAuthIds() const { return this->authIds_ != nullptr;};
    void deleteAuthIds() { this->authIds_ = nullptr;};
    inline string authIds() const { DARABONBA_PTR_GET_DEFAULT(authIds_, "") };
    inline ModifyCloudVendorAccountAKRequest& setAuthIds(string authIds) { DARABONBA_PTR_SET_VALUE(authIds_, authIds) };


    // authModules Field Functions 
    bool hasAuthModules() const { return this->authModules_ != nullptr;};
    void deleteAuthModules() { this->authModules_ = nullptr;};
    inline const vector<string> & authModules() const { DARABONBA_PTR_GET_CONST(authModules_, vector<string>) };
    inline vector<string> authModules() { DARABONBA_PTR_GET(authModules_, vector<string>) };
    inline ModifyCloudVendorAccountAKRequest& setAuthModules(const vector<string> & authModules) { DARABONBA_PTR_SET_VALUE(authModules_, authModules) };
    inline ModifyCloudVendorAccountAKRequest& setAuthModules(vector<string> && authModules) { DARABONBA_PTR_SET_RVALUE(authModules_, authModules) };


    // ctdrCloudUserId Field Functions 
    bool hasCtdrCloudUserId() const { return this->ctdrCloudUserId_ != nullptr;};
    void deleteCtdrCloudUserId() { this->ctdrCloudUserId_ = nullptr;};
    inline string ctdrCloudUserId() const { DARABONBA_PTR_GET_DEFAULT(ctdrCloudUserId_, "") };
    inline ModifyCloudVendorAccountAKRequest& setCtdrCloudUserId(string ctdrCloudUserId) { DARABONBA_PTR_SET_VALUE(ctdrCloudUserId_, ctdrCloudUserId) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ModifyCloudVendorAccountAKRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string extendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline ModifyCloudVendorAccountAKRequest& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyCloudVendorAccountAKRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<string> & regions() const { DARABONBA_PTR_GET_CONST(regions_, vector<string>) };
    inline vector<string> regions() { DARABONBA_PTR_GET(regions_, vector<string>) };
    inline ModifyCloudVendorAccountAKRequest& setRegions(const vector<string> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline ModifyCloudVendorAccountAKRequest& setRegions(vector<string> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // secretId Field Functions 
    bool hasSecretId() const { return this->secretId_ != nullptr;};
    void deleteSecretId() { this->secretId_ = nullptr;};
    inline string secretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, "") };
    inline ModifyCloudVendorAccountAKRequest& setSecretId(string secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


    // secretKey Field Functions 
    bool hasSecretKey() const { return this->secretKey_ != nullptr;};
    void deleteSecretKey() { this->secretKey_ = nullptr;};
    inline string secretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
    inline ModifyCloudVendorAccountAKRequest& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ModifyCloudVendorAccountAKRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subscriptionIds Field Functions 
    bool hasSubscriptionIds() const { return this->subscriptionIds_ != nullptr;};
    void deleteSubscriptionIds() { this->subscriptionIds_ = nullptr;};
    inline const vector<string> & subscriptionIds() const { DARABONBA_PTR_GET_CONST(subscriptionIds_, vector<string>) };
    inline vector<string> subscriptionIds() { DARABONBA_PTR_GET(subscriptionIds_, vector<string>) };
    inline ModifyCloudVendorAccountAKRequest& setSubscriptionIds(const vector<string> & subscriptionIds) { DARABONBA_PTR_SET_VALUE(subscriptionIds_, subscriptionIds) };
    inline ModifyCloudVendorAccountAKRequest& setSubscriptionIds(vector<string> && subscriptionIds) { DARABONBA_PTR_SET_RVALUE(subscriptionIds_, subscriptionIds) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ModifyCloudVendorAccountAKRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // vendorAuthAlias Field Functions 
    bool hasVendorAuthAlias() const { return this->vendorAuthAlias_ != nullptr;};
    void deleteVendorAuthAlias() { this->vendorAuthAlias_ = nullptr;};
    inline string vendorAuthAlias() const { DARABONBA_PTR_GET_DEFAULT(vendorAuthAlias_, "") };
    inline ModifyCloudVendorAccountAKRequest& setVendorAuthAlias(string vendorAuthAlias) { DARABONBA_PTR_SET_VALUE(vendorAuthAlias_, vendorAuthAlias) };


  protected:
    // The unique ID of the AccessKey pair.
    // 
    // >  You can call the [DescribeCloudVendorAccountAKList](~~DescribeCloudVendorAccountAKList~~) operation to query the unique ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> authIds_ = nullptr;
    // The modules that are associated with the AccessKey pair. Valid values:
    // 
    // *   **HOST**: host.
    // *   **CSPM**: configuration assessment.
    // *   **SIEM**: Cloud Threat Detection and Response (CTDR).
    // *   **TRIAL**: log audit.
    // 
    // >  You can call the [GetSupportedModules](~~GetSupportedModules~~) operation to query the supported modules.
    std::shared_ptr<vector<string>> authModules_ = nullptr;
    std::shared_ptr<string> ctdrCloudUserId_ = nullptr;
    // The Active Directory (AD) domain. Valid values:
    // 
    // *   **china**
    // *   **global**
    // 
    // >  This parameter takes effect only when Vendor is set to Azure.
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<string> extendInfo_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese.
    // *   **en**: English.
    std::shared_ptr<string> lang_ = nullptr;
    // The regions that are examined during AccessKey pair authentication.
    // 
    // >  This parameter takes effect only when Vendor is set to AWS. You can call the [ListCloudVendorRegions](~~ListCloudVendorRegions~~) operation to query regions.
    std::shared_ptr<vector<string>> regions_ = nullptr;
    // The AccessKey ID.
    // 
    // >  If AkType is set to **primary**, you must set SecretId to the AccessKey ID of the third-party master account. If AkType is set to **sub**, you must set SecretId to the AccessKey ID of the third-party sub-account. This parameter value does not change for a **Microsoft Azure account**. For an Azure account, set this parameter to the **app ID** that is used for authentication.
    std::shared_ptr<string> secretId_ = nullptr;
    // The AccessKey secret.
    // 
    // >  If AkType is set to **primary**, you must set SecretKey to the AccessKey secret of the third-party master account. If AkType is set to **sub**, you must set SecretKey to the AccessKey secret of the third-party sub-account. This parameter value does not change for a **Microsoft Azure account**. For an Azure account, set this parameter to the **password** that is used for authentication.
    std::shared_ptr<string> secretKey_ = nullptr;
    // The status of the AccessKey pair. Valid values:
    // 
    // *   **0**: enabled.
    // *   **1**: disabled.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The IDs of subscriptions.
    // 
    // >  This parameter takes effect only when Vendor is set to Azure.
    std::shared_ptr<vector<string>> subscriptionIds_ = nullptr;
    // The tenant ID.
    // 
    // >  This parameter takes effect only when Vendor is set to Azure.
    std::shared_ptr<string> tenantId_ = nullptr;
    // The name of the AccessKey pair.
    // 
    // >  The account information of the third-party cloud servers.
    std::shared_ptr<string> vendorAuthAlias_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
