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
        && this->authModules_ == nullptr && this->ctdrCloudUserId_ == nullptr && this->domain_ == nullptr && this->extendInfo_ == nullptr && this->lang_ == nullptr
        && this->regions_ == nullptr && this->secretId_ == nullptr && this->secretKey_ == nullptr && this->status_ == nullptr && this->subscriptionIds_ == nullptr
        && this->tenantId_ == nullptr && this->vendorAuthAlias_ == nullptr; };
    // authIds Field Functions 
    bool hasAuthIds() const { return this->authIds_ != nullptr;};
    void deleteAuthIds() { this->authIds_ = nullptr;};
    inline string getAuthIds() const { DARABONBA_PTR_GET_DEFAULT(authIds_, "") };
    inline ModifyCloudVendorAccountAKRequest& setAuthIds(string authIds) { DARABONBA_PTR_SET_VALUE(authIds_, authIds) };


    // authModules Field Functions 
    bool hasAuthModules() const { return this->authModules_ != nullptr;};
    void deleteAuthModules() { this->authModules_ = nullptr;};
    inline const vector<string> & getAuthModules() const { DARABONBA_PTR_GET_CONST(authModules_, vector<string>) };
    inline vector<string> getAuthModules() { DARABONBA_PTR_GET(authModules_, vector<string>) };
    inline ModifyCloudVendorAccountAKRequest& setAuthModules(const vector<string> & authModules) { DARABONBA_PTR_SET_VALUE(authModules_, authModules) };
    inline ModifyCloudVendorAccountAKRequest& setAuthModules(vector<string> && authModules) { DARABONBA_PTR_SET_RVALUE(authModules_, authModules) };


    // ctdrCloudUserId Field Functions 
    bool hasCtdrCloudUserId() const { return this->ctdrCloudUserId_ != nullptr;};
    void deleteCtdrCloudUserId() { this->ctdrCloudUserId_ = nullptr;};
    inline string getCtdrCloudUserId() const { DARABONBA_PTR_GET_DEFAULT(ctdrCloudUserId_, "") };
    inline ModifyCloudVendorAccountAKRequest& setCtdrCloudUserId(string ctdrCloudUserId) { DARABONBA_PTR_SET_VALUE(ctdrCloudUserId_, ctdrCloudUserId) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ModifyCloudVendorAccountAKRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string getExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline ModifyCloudVendorAccountAKRequest& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyCloudVendorAccountAKRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<string> & getRegions() const { DARABONBA_PTR_GET_CONST(regions_, vector<string>) };
    inline vector<string> getRegions() { DARABONBA_PTR_GET(regions_, vector<string>) };
    inline ModifyCloudVendorAccountAKRequest& setRegions(const vector<string> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline ModifyCloudVendorAccountAKRequest& setRegions(vector<string> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // secretId Field Functions 
    bool hasSecretId() const { return this->secretId_ != nullptr;};
    void deleteSecretId() { this->secretId_ = nullptr;};
    inline string getSecretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, "") };
    inline ModifyCloudVendorAccountAKRequest& setSecretId(string secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


    // secretKey Field Functions 
    bool hasSecretKey() const { return this->secretKey_ != nullptr;};
    void deleteSecretKey() { this->secretKey_ = nullptr;};
    inline string getSecretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
    inline ModifyCloudVendorAccountAKRequest& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ModifyCloudVendorAccountAKRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subscriptionIds Field Functions 
    bool hasSubscriptionIds() const { return this->subscriptionIds_ != nullptr;};
    void deleteSubscriptionIds() { this->subscriptionIds_ = nullptr;};
    inline const vector<string> & getSubscriptionIds() const { DARABONBA_PTR_GET_CONST(subscriptionIds_, vector<string>) };
    inline vector<string> getSubscriptionIds() { DARABONBA_PTR_GET(subscriptionIds_, vector<string>) };
    inline ModifyCloudVendorAccountAKRequest& setSubscriptionIds(const vector<string> & subscriptionIds) { DARABONBA_PTR_SET_VALUE(subscriptionIds_, subscriptionIds) };
    inline ModifyCloudVendorAccountAKRequest& setSubscriptionIds(vector<string> && subscriptionIds) { DARABONBA_PTR_SET_RVALUE(subscriptionIds_, subscriptionIds) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ModifyCloudVendorAccountAKRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // vendorAuthAlias Field Functions 
    bool hasVendorAuthAlias() const { return this->vendorAuthAlias_ != nullptr;};
    void deleteVendorAuthAlias() { this->vendorAuthAlias_ = nullptr;};
    inline string getVendorAuthAlias() const { DARABONBA_PTR_GET_DEFAULT(vendorAuthAlias_, "") };
    inline ModifyCloudVendorAccountAKRequest& setVendorAuthAlias(string vendorAuthAlias) { DARABONBA_PTR_SET_VALUE(vendorAuthAlias_, vendorAuthAlias) };


  protected:
    // The unique ID of the AccessKey (AK).
    // >You can call the [DescribeCloudVendorAccountAKList](~~DescribeCloudVendorAccountAKList~~) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> authIds_ {};
    // The list of codes for the modules associated with the AK. Valid values:
    // - **HOST**: host
    // - **CSPM**: cloud product configuration check
    // - **SIEM**: threat analysis and response
    // - **TRIAL**: log audit
    // >You can call the [GetSupportedModules](~~GetSupportedModules~~) operation to obtain the supported modules.
    shared_ptr<vector<string>> authModules_ {};
    // The account ID.
    // >The account ID of the connected cloud vendor. This parameter is required when the permission description includes threat analysis and response.
    shared_ptr<string> ctdrCloudUserId_ {};
    // The domain to which the connected account belongs. Valid values:
    // - **china**: China
    // - **global**: global
    // - **europe**: Huawei Cloud Europe site
    // 
    // >This parameter is valid and required only when **Vendor** is set to **HUAWEICLOUD**, **Azure**, **AWS**, **VOLCENGINE**, **KingsoftCloud**, **UCloud**, **BaiduCloud**, or **OracleCloud**. For **KingsoftCloud** and **BaiduCloud**, this parameter is fixed to **china**. For **OracleCloud**, this parameter is fixed to **global**.
    shared_ptr<string> domain_ {};
    // The extended information.
    // >This parameter is used to record the extended information of different vendors.
    // Google Cloud is accessed through a service account. ExtendInfo stores the JSON-formatted service key file, excluding the private_key_id and zprivate_key fields. The file contains the following fields: type, project_id, client_email, client_id, auth_uri, token_uri, auth_provider_x509_cert_url, client_x509_cert_url, and universe_domain. If the vendor is **OracleCloud**, this parameter contains the **fingerprint** key, which indicates the fingerprint.
    shared_ptr<string> extendInfo_ {};
    // The language type of the request and response messages. Default value: **zh**. Valid values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The list of regions used for AK information verification. This parameter is valid only when **Vendor** is set to **AWS** or **OracleCloud**.
    // >You can call the [ListCloudVendorRegions](~~ListCloudVendorRegions~~) operation to obtain this parameter.
    shared_ptr<vector<string>> regions_ {};
    // The ID of the AK parameter. Valid values:
    // - If AkType is set to primary:
    // - - **Tencent**: the AccessKey ID of the primary account
    // - - **HUAWEICLOUD**: the AccessKey ID of the primary account
    // - - **Azure**: the client ID
    // - - **AWS**: the AccessKey ID of the primary account
    // - - **VOLCENGINE**: the AccessKey ID of the primary account
    // - - **KingsoftCloud**: the AccessKey ID of the primary account
    // - - **UCloud**: the AccessKey ID of the primary account
    // - If AkType is set to sub:
    // - - **Tencent**: the AccessKey ID of the sub-account
    // - - **HUAWEICLOUD**: the AccessKey ID of the sub-account
    // - - **Azure**: the client ID
    // - - **AWS**: the AccessKey ID of the sub-account
    // - - **VOLCENGINE**: the AccessKey ID of the sub-account
    // - - **google**: the private key ID
    // - - **OracleCloud**: the Oracle Cloud Identifier (OCID) of the sub-user
    // - - **BaiduCloud**: the AccessKey ID of the sub-account
    // - - **KingsoftCloud**: the AccessKey ID of the sub-account
    // - - **UCloud**: the AccessKey ID of the sub-account
    // - - **StateCloud**: the AccessKey ID of the sub-account
    // >If AkType is set to **primary**, this value is the SecretID of the primary account of the third-party cloud. If AkType is set to **sub**, this value is the AccessKey ID of the sub-account of the third-party cloud. For **Azure**, no distinction is made, and this value is the **appId** of the authentication information. Google Cloud is accessed through a service account. By default, AkType is set to sub, and this value is obtained from the private_key_id property of the JSON-formatted service key file. If the vendor is **OracleCloud**, this value is the OCID of the sub-user.
    shared_ptr<string> secretId_ {};
    // The secret of the AK parameter. Valid values:
    // - If AkType is set to primary:
    // - - **Tencent**: the SecretAccessKey of the primary account
    // - - **HUAWEICLOUD**: the SecretAccessKey of the primary account
    // - - **Azure**: the client secret
    // - - **AWS**: the SecretAccessKey of the primary account
    // - - **VOLCENGINE**: the SecretAccessKey of the primary account
    // - - **KingsoftCloud**: the SecretAccessKey of the primary account
    // - - **UCloud**: the SecretAccessKey of the primary account
    // - If AkType is set to sub:
    // - - **Tencent**: the SecretAccessKey of the sub-account
    // - - **HUAWEICLOUD**: the SecretAccessKey of the sub-account
    // - - **Azure**: the client secret
    // - - **AWS**: the SecretAccessKey of the sub-account
    // - - **google**: the private key
    // - - **OracleCloud**: the private key of the sub-user
    // - - **BaiduCloud**: the SecretAccessKey of the sub-account
    // - - **KingsoftCloud**: the SecretAccessKey of the sub-account
    // - - **UCloud**: the SecretAccessKey of the sub-account
    // - - **StateCloud**: the SecretAccessKey of the sub-account
    // >If AkType is set to **primary**, this value is the Secret Access Key of the primary account of the third-party cloud. If AkType is set to **sub**, this value is the Secret Access Key of the sub-account of the third-party cloud. For **Azure**, no distinction is made, and this value is the **password** of the authentication information. Google Cloud is accessed through a service account. By default, AkType is set to sub, and this value is obtained from the private_key property of the JSON-formatted service key file. For **OracleCloud**, this value is obtained from the content of the corresponding private key file.
    shared_ptr<string> secretKey_ {};
    // The usage status of the AK. Valid values:
    // - **0**: enabled
    // - **1**: disabled
    shared_ptr<int32_t> status_ {};
    // The list of subscription IDs.
    // > **[Deprecated]** This parameter is no longer valid.
    shared_ptr<vector<string>> subscriptionIds_ {};
    // The tenant ID.
    // >This parameter is valid only when Vendor is set to **Azure** or **OracleCloud**.
    shared_ptr<string> tenantId_ {};
    // The name of the AK account.
    // >This parameter is used to identify the account information to which the third-party host assets belong.
    shared_ptr<string> vendorAuthAlias_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
