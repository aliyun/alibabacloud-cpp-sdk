// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCLOUDVENDORACCOUNTAKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCLOUDVENDORACCOUNTAKREQUEST_HPP_
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
  class AddCloudVendorAccountAKRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCloudVendorAccountAKRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AkType, akType_);
      DARABONBA_PTR_TO_JSON(AuthModules, authModules_);
      DARABONBA_PTR_TO_JSON(CtdrCloudUserId, ctdrCloudUserId_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(SecretId, secretId_);
      DARABONBA_PTR_TO_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_TO_JSON(SubscriptionIds, subscriptionIds_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      DARABONBA_PTR_TO_JSON(VendorAuthAlias, vendorAuthAlias_);
    };
    friend void from_json(const Darabonba::Json& j, AddCloudVendorAccountAKRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AkType, akType_);
      DARABONBA_PTR_FROM_JSON(AuthModules, authModules_);
      DARABONBA_PTR_FROM_JSON(CtdrCloudUserId, ctdrCloudUserId_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
      DARABONBA_PTR_FROM_JSON(SecretKey, secretKey_);
      DARABONBA_PTR_FROM_JSON(SubscriptionIds, subscriptionIds_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      DARABONBA_PTR_FROM_JSON(VendorAuthAlias, vendorAuthAlias_);
    };
    AddCloudVendorAccountAKRequest() = default ;
    AddCloudVendorAccountAKRequest(const AddCloudVendorAccountAKRequest &) = default ;
    AddCloudVendorAccountAKRequest(AddCloudVendorAccountAKRequest &&) = default ;
    AddCloudVendorAccountAKRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCloudVendorAccountAKRequest() = default ;
    AddCloudVendorAccountAKRequest& operator=(const AddCloudVendorAccountAKRequest &) = default ;
    AddCloudVendorAccountAKRequest& operator=(AddCloudVendorAccountAKRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->akType_ == nullptr
        && this->authModules_ == nullptr && this->ctdrCloudUserId_ == nullptr && this->domain_ == nullptr && this->extendInfo_ == nullptr && this->lang_ == nullptr
        && this->regions_ == nullptr && this->secretId_ == nullptr && this->secretKey_ == nullptr && this->subscriptionIds_ == nullptr && this->tenantId_ == nullptr
        && this->vendor_ == nullptr && this->vendorAuthAlias_ == nullptr; };
    // akType Field Functions 
    bool hasAkType() const { return this->akType_ != nullptr;};
    void deleteAkType() { this->akType_ = nullptr;};
    inline string getAkType() const { DARABONBA_PTR_GET_DEFAULT(akType_, "") };
    inline AddCloudVendorAccountAKRequest& setAkType(string akType) { DARABONBA_PTR_SET_VALUE(akType_, akType) };


    // authModules Field Functions 
    bool hasAuthModules() const { return this->authModules_ != nullptr;};
    void deleteAuthModules() { this->authModules_ = nullptr;};
    inline const vector<string> & getAuthModules() const { DARABONBA_PTR_GET_CONST(authModules_, vector<string>) };
    inline vector<string> getAuthModules() { DARABONBA_PTR_GET(authModules_, vector<string>) };
    inline AddCloudVendorAccountAKRequest& setAuthModules(const vector<string> & authModules) { DARABONBA_PTR_SET_VALUE(authModules_, authModules) };
    inline AddCloudVendorAccountAKRequest& setAuthModules(vector<string> && authModules) { DARABONBA_PTR_SET_RVALUE(authModules_, authModules) };


    // ctdrCloudUserId Field Functions 
    bool hasCtdrCloudUserId() const { return this->ctdrCloudUserId_ != nullptr;};
    void deleteCtdrCloudUserId() { this->ctdrCloudUserId_ = nullptr;};
    inline string getCtdrCloudUserId() const { DARABONBA_PTR_GET_DEFAULT(ctdrCloudUserId_, "") };
    inline AddCloudVendorAccountAKRequest& setCtdrCloudUserId(string ctdrCloudUserId) { DARABONBA_PTR_SET_VALUE(ctdrCloudUserId_, ctdrCloudUserId) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline AddCloudVendorAccountAKRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string getExtendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline AddCloudVendorAccountAKRequest& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddCloudVendorAccountAKRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<string> & getRegions() const { DARABONBA_PTR_GET_CONST(regions_, vector<string>) };
    inline vector<string> getRegions() { DARABONBA_PTR_GET(regions_, vector<string>) };
    inline AddCloudVendorAccountAKRequest& setRegions(const vector<string> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline AddCloudVendorAccountAKRequest& setRegions(vector<string> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // secretId Field Functions 
    bool hasSecretId() const { return this->secretId_ != nullptr;};
    void deleteSecretId() { this->secretId_ = nullptr;};
    inline string getSecretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, "") };
    inline AddCloudVendorAccountAKRequest& setSecretId(string secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


    // secretKey Field Functions 
    bool hasSecretKey() const { return this->secretKey_ != nullptr;};
    void deleteSecretKey() { this->secretKey_ = nullptr;};
    inline string getSecretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
    inline AddCloudVendorAccountAKRequest& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


    // subscriptionIds Field Functions 
    bool hasSubscriptionIds() const { return this->subscriptionIds_ != nullptr;};
    void deleteSubscriptionIds() { this->subscriptionIds_ = nullptr;};
    inline const vector<string> & getSubscriptionIds() const { DARABONBA_PTR_GET_CONST(subscriptionIds_, vector<string>) };
    inline vector<string> getSubscriptionIds() { DARABONBA_PTR_GET(subscriptionIds_, vector<string>) };
    inline AddCloudVendorAccountAKRequest& setSubscriptionIds(const vector<string> & subscriptionIds) { DARABONBA_PTR_SET_VALUE(subscriptionIds_, subscriptionIds) };
    inline AddCloudVendorAccountAKRequest& setSubscriptionIds(vector<string> && subscriptionIds) { DARABONBA_PTR_SET_RVALUE(subscriptionIds_, subscriptionIds) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline AddCloudVendorAccountAKRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline AddCloudVendorAccountAKRequest& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    // vendorAuthAlias Field Functions 
    bool hasVendorAuthAlias() const { return this->vendorAuthAlias_ != nullptr;};
    void deleteVendorAuthAlias() { this->vendorAuthAlias_ = nullptr;};
    inline string getVendorAuthAlias() const { DARABONBA_PTR_GET_DEFAULT(vendorAuthAlias_, "") };
    inline AddCloudVendorAccountAKRequest& setVendorAuthAlias(string vendorAuthAlias) { DARABONBA_PTR_SET_VALUE(vendorAuthAlias_, vendorAuthAlias) };


  protected:
    // The AccessKey type. Valid values:
    // 
    // - **primary**: Primary account
    // - **sub**: Sub-account
    // - **ctdr**: Agentic SOC
    // >Warning: When the vendor is **CHAITIN**, **FORTINET**, **THREATBOOK**, or **WIZ**, set this parameter to **ctdr**. When the vendor is **OracleCloud**, **google**, **BaiduCloud**, or **StateCloud**, set this parameter to **sub**.
    // 
    // This parameter is required.
    shared_ptr<string> akType_ {};
    // The list of modules associated with the AccessKey.
    // 
    // When AkType is set to ctdr, this parameter is required and at least one module must be provided, such as SIEM, HOST, or CSPM. If this parameter is not provided, the API returns HTTP 400 with the error code -101.
    shared_ptr<vector<string>> authModules_ {};
    // The account ID.
    // 
    // > The account ID of the connected cloud vendor. This parameter is required when the permission description includes Cloud Threat Detection and Response.
    shared_ptr<string> ctdrCloudUserId_ {};
    // The domain to which the connected account belongs. Valid values:
    // - **china**: China
    // - **global**: Global
    // - **europe**: Huawei Cloud Europe
    // 
    // > This parameter is valid and required only when **Vendor** is set to **HUAWEICLOUD**, **Azure**, **AWS**, **VOLCENGINE**, **KingsoftCloud**, **UCloud**, **BaiduCloud**, or **OracleCloud**. For **KingsoftCloud** and **BaiduCloud**, set this parameter to **china**. For **OracleCloud**, set this parameter to **global**.
    shared_ptr<string> domain_ {};
    // The extension information.
    // 
    // > This parameter is used to record the extension information of different vendors.
    // Google Cloud is accessed through a service account. ExtendInfo stores the JSON-formatted service key file, excluding the private_key_id and zprivate_key fields. The file contains the following fields: type, project_id, client_email, client_id, auth_uri, token_uri, auth_provider_x509_cert_url, client_x509_cert_url, and universe_domain. When the vendor is **OracleCloud**, this parameter contains the **fingerprint** key, which indicates the fingerprint.
    shared_ptr<string> extendInfo_ {};
    // The language of the request and response. Default value: **zh**. Valid values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The list of regions used to verify the AccessKey information. This parameter is valid only when **Vendor** is set to **AWS** or **OracleCloud**.
    // >You can call the [ListCloudVendorRegions](~~ListCloudVendorRegions~~) operation to query the regions.
    shared_ptr<vector<string>> regions_ {};
    // The AccessKey ID. Valid values:
    // 
    // - If AkType is set to primary:
    //   - **Tencent**: AccessKey ID of the primary account
    //   - **HUAWEICLOUD**: AccessKey ID of the primary account
    //   - **Azure**: Client ID
    //   - **AWS**: AccessKey ID of the primary account
    //   - **VOLCENGINE**: AccessKey ID of the primary account
    //   - **KingsoftCloud**: AccessKey ID of the primary account
    //   - **UCloud**: AccessKey ID of the primary account
    // - If AkType is set to sub:
    //   - **Tencent**: AccessKey ID of the sub-account
    //   - **HUAWEICLOUD**: AccessKey ID of the sub-account
    //   - **Azure**: Client ID
    //   - **AWS**: AccessKey ID of the sub-account
    //   - **VOLCENGINE**: AccessKey ID of the sub-account
    //   - **google**: private_key_id
    //   - **OracleCloud**: OCID of the sub-user
    //   - **BaiduCloud**: AccessKey ID of the sub-account
    //   - **KingsoftCloud**: AccessKey ID of the sub-account
    //   - **UCloud**: AccessKey ID of the sub-account
    //   - **StateCloud**: AccessKey ID of the sub-account
    // 
    // >If AkType is set to **primary**, this value is the AccessKey ID of the primary account in the third-party cloud. If AkType is set to **sub**, this value is the AccessKey ID of the sub-account in the third-party cloud. For **Azure**, this parameter is not differentiated and the value is the **appId** of the authentication information. Google Cloud is accessed through a service account, and AkType defaults to **sub**. The value is obtained from the private_key_id property in the JSON-formatted service key file. If the vendor is **OracleCloud**, this value is the OCID of the sub-user.
    // 
    // This parameter is required.
    shared_ptr<string> secretId_ {};
    // The AccessKey secret. Valid values:
    // - If AkType is set to primary:
    //   - **Tencent**: AccessKey secret of the primary account
    //   - **HUAWEICLOUD**: AccessKey secret of the primary account
    //   - **Azure**: Client secret
    //   - **AWS**: AccessKey secret of the primary account
    //   - **VOLCENGINE**: AccessKey secret of the primary account
    //   - **KingsoftCloud**: AccessKey secret of the primary account
    //   - **UCloud**: AccessKey secret of the primary account
    // - If AkType is set to sub:
    //   - **Tencent**: AccessKey secret of the sub-account
    //   - **HUAWEICLOUD**: AccessKey secret of the sub-account
    //   - **Azure**: Client secret
    //   - **AWS**: AccessKey secret of the sub-account
    //   - **google**: private_key
    //   - **OracleCloud**: private_key of the sub-user
    //   - **BaiduCloud**: AccessKey secret of the sub-account
    //   - **KingsoftCloud**: AccessKey secret of the sub-account
    //   - **UCloud**: AccessKey secret of the sub-account
    //   - **StateCloud**: AccessKey secret of the sub-account
    // >If AkType is set to **primary**, this value is the AccessKey secret of the primary account in the third-party cloud. If AkType is set to **sub**, this value is the AccessKey secret of the sub-account in the third-party cloud. For **Azure**, this parameter is not differentiated and the value is the **password** of the authentication information. Google Cloud is accessed through a service account, and AkType defaults to **sub**. The value is obtained from the private_key property in the JSON-formatted service key file. For **OracleCloud**, this value is obtained from the content of the corresponding private key file.
    // 
    // This parameter is required.
    shared_ptr<string> secretKey_ {};
    // The list of subscription IDs.
    // 
    // > This parameter is deprecated.
    shared_ptr<vector<string>> subscriptionIds_ {};
    // The tenant ID.
    // > This parameter is valid only when Vendor is set to **Azure** or **OracleCloud**.
    shared_ptr<string> tenantId_ {};
    // The cloud asset vendor. Valid values:
    // - **Tencent**: Tencent Cloud
    // - **HUAWEICLOUD**: Huawei Cloud
    // - **Azure**: Azure
    // - **AWS**: AWS
    // - **VOLCENGINE**: Volcengine
    // - **google**: Google Cloud
    // - **CHAITIN**: Chaitin Tech
    // - **FORTINET**: Fortinet
    // - **THREATBOOK**: ThreatBook
    // - **KingsoftCloud**: Kingsoft Cloud
    // - **UCloud**: UCloud
    // - **BaiduCloud**: Baidu AI Cloud
    // - **WIZ**: Wiz
    // - **OracleCloud**: Oracle Cloud
    // - **StateCloud**: China Telecom Cloud
    // 
    // This parameter is required.
    shared_ptr<string> vendor_ {};
    // The name of the AccessKey account.
    // > This parameter is used to identify the account to which the third-party host assets belong.
    shared_ptr<string> vendorAuthAlias_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
