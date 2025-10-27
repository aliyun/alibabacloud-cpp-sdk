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
        && return this->authModules_ == nullptr && return this->ctdrCloudUserId_ == nullptr && return this->domain_ == nullptr && return this->extendInfo_ == nullptr && return this->lang_ == nullptr
        && return this->regions_ == nullptr && return this->secretId_ == nullptr && return this->secretKey_ == nullptr && return this->subscriptionIds_ == nullptr && return this->tenantId_ == nullptr
        && return this->vendor_ == nullptr && return this->vendorAuthAlias_ == nullptr; };
    // akType Field Functions 
    bool hasAkType() const { return this->akType_ != nullptr;};
    void deleteAkType() { this->akType_ = nullptr;};
    inline string akType() const { DARABONBA_PTR_GET_DEFAULT(akType_, "") };
    inline AddCloudVendorAccountAKRequest& setAkType(string akType) { DARABONBA_PTR_SET_VALUE(akType_, akType) };


    // authModules Field Functions 
    bool hasAuthModules() const { return this->authModules_ != nullptr;};
    void deleteAuthModules() { this->authModules_ = nullptr;};
    inline const vector<string> & authModules() const { DARABONBA_PTR_GET_CONST(authModules_, vector<string>) };
    inline vector<string> authModules() { DARABONBA_PTR_GET(authModules_, vector<string>) };
    inline AddCloudVendorAccountAKRequest& setAuthModules(const vector<string> & authModules) { DARABONBA_PTR_SET_VALUE(authModules_, authModules) };
    inline AddCloudVendorAccountAKRequest& setAuthModules(vector<string> && authModules) { DARABONBA_PTR_SET_RVALUE(authModules_, authModules) };


    // ctdrCloudUserId Field Functions 
    bool hasCtdrCloudUserId() const { return this->ctdrCloudUserId_ != nullptr;};
    void deleteCtdrCloudUserId() { this->ctdrCloudUserId_ = nullptr;};
    inline string ctdrCloudUserId() const { DARABONBA_PTR_GET_DEFAULT(ctdrCloudUserId_, "") };
    inline AddCloudVendorAccountAKRequest& setCtdrCloudUserId(string ctdrCloudUserId) { DARABONBA_PTR_SET_VALUE(ctdrCloudUserId_, ctdrCloudUserId) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline AddCloudVendorAccountAKRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string extendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline AddCloudVendorAccountAKRequest& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddCloudVendorAccountAKRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<string> & regions() const { DARABONBA_PTR_GET_CONST(regions_, vector<string>) };
    inline vector<string> regions() { DARABONBA_PTR_GET(regions_, vector<string>) };
    inline AddCloudVendorAccountAKRequest& setRegions(const vector<string> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline AddCloudVendorAccountAKRequest& setRegions(vector<string> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // secretId Field Functions 
    bool hasSecretId() const { return this->secretId_ != nullptr;};
    void deleteSecretId() { this->secretId_ = nullptr;};
    inline string secretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, "") };
    inline AddCloudVendorAccountAKRequest& setSecretId(string secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


    // secretKey Field Functions 
    bool hasSecretKey() const { return this->secretKey_ != nullptr;};
    void deleteSecretKey() { this->secretKey_ = nullptr;};
    inline string secretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
    inline AddCloudVendorAccountAKRequest& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


    // subscriptionIds Field Functions 
    bool hasSubscriptionIds() const { return this->subscriptionIds_ != nullptr;};
    void deleteSubscriptionIds() { this->subscriptionIds_ = nullptr;};
    inline const vector<string> & subscriptionIds() const { DARABONBA_PTR_GET_CONST(subscriptionIds_, vector<string>) };
    inline vector<string> subscriptionIds() { DARABONBA_PTR_GET(subscriptionIds_, vector<string>) };
    inline AddCloudVendorAccountAKRequest& setSubscriptionIds(const vector<string> & subscriptionIds) { DARABONBA_PTR_SET_VALUE(subscriptionIds_, subscriptionIds) };
    inline AddCloudVendorAccountAKRequest& setSubscriptionIds(vector<string> && subscriptionIds) { DARABONBA_PTR_SET_RVALUE(subscriptionIds_, subscriptionIds) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline AddCloudVendorAccountAKRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline AddCloudVendorAccountAKRequest& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    // vendorAuthAlias Field Functions 
    bool hasVendorAuthAlias() const { return this->vendorAuthAlias_ != nullptr;};
    void deleteVendorAuthAlias() { this->vendorAuthAlias_ = nullptr;};
    inline string vendorAuthAlias() const { DARABONBA_PTR_GET_DEFAULT(vendorAuthAlias_, "") };
    inline AddCloudVendorAccountAKRequest& setVendorAuthAlias(string vendorAuthAlias) { DARABONBA_PTR_SET_VALUE(vendorAuthAlias_, vendorAuthAlias) };


  protected:
    // The type of the account to which the AccessKey pair belongs. Valid values:
    // 
    // *   **primary**: a primary account
    // *   **sub**: a sub-account
    // 
    // This parameter is required.
    std::shared_ptr<string> akType_ = nullptr;
    // The modules that are associated with the AccessKey pair.
    std::shared_ptr<vector<string>> authModules_ = nullptr;
    std::shared_ptr<string> ctdrCloudUserId_ = nullptr;
    // The Active Directory (AD) domain. This parameter takes effect only when Vendor is set to Azure. Valid values:
    // 
    // *   **china**
    // *   **global**
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<string> extendInfo_ = nullptr;
    // The language of the content in the request and response messages. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The regions that are examined during AccessKey pair authentication. This parameter takes effect only when Vendor is set to AWS.
    // 
    // >  You can call the [ListCloudVendorRegions](~~ListCloudVendorRegions~~) operation to query regions.
    std::shared_ptr<vector<string>> regions_ = nullptr;
    // The AccessKey ID. Valid values:
    // 
    // 1\\. If AkType is set to primary, specify this parameter based on the following description:
    // 
    // *   **Tencent**: Enter the AccessKey ID of a primary account on Tencent Cloud.
    // *   **HUAWEICLOUD**: Enter the AccessKey ID of a primary account on Huawei Cloud.
    // *   **Azure**: Enter the AccessKey ID of a primary account on Microsoft Azure.
    // *   **AWS**: Enter the AccessKey ID of a primary account on AWS.
    // 
    // 2\\. If AkType is set to sub, specify this parameter based on the following description:
    // 
    // *   **Tencent**: Enter the AccessKey ID of a sub-account on Tencent Cloud.
    // *   **HUAWEICLOUD**: Enter the AccessKey ID of a sub-account on Huawei Cloud.
    // *   **Azure**: Enter the AccessKey ID of a sub-account on Microsoft Azure.
    // *   **AWS**: Enter the AccessKey ID of a sub-account on AWS.
    // 
    // This parameter is required.
    std::shared_ptr<string> secretId_ = nullptr;
    // The AccessKey secret. Valid values:
    // 
    // 1\\. If AkType is set to primary, specify this parameter based on the following description:
    // 
    // *   **Tencent**: Enter the AccessKey secret of a primary account on Tencent Cloud.
    // *   **HUAWEICLOUD**: Enter the AccessKey secret of a primary account on Huawei Cloud.
    // *   **Azure**: Enter the AccessKey secret of a primary account on Microsoft Azure.
    // *   **AWS**: Enter the AccessKey secret of a primary account on AWS.
    // 
    // 2\\. If AkType is set to sub, specify this parameter based on the following description:
    // 
    // *   **Tencent**: Enter the AccessKey secret of a sub-account on Tencent Cloud.
    // *   **HUAWEICLOUD**: Enter the AccessKey secret of a sub-account on Huawei Cloud.
    // *   **Azure**: Enter the AccessKey secret of a sub-account on Microsoft Azure.
    // *   **AWS**: Enter the AccessKey secret of a sub-account on AWS.
    // 
    // This parameter is required.
    std::shared_ptr<string> secretKey_ = nullptr;
    // The subscription IDs. This parameter takes effect only when Vendor is set to Azure.
    std::shared_ptr<vector<string>> subscriptionIds_ = nullptr;
    // The tenant ID. This parameter takes effect only when Vendor is set to Azure.
    std::shared_ptr<string> tenantId_ = nullptr;
    // The cloud service provider. Valid values:
    // 
    // *   **Tencent**: Tencent Cloud
    // *   **HUAWEICLOUD**: Huawei Cloud
    // *   **Azure**: Microsoft Azure
    // *   **AWS**: Amazon Web Services (AWS)
    // 
    // This parameter is required.
    std::shared_ptr<string> vendor_ = nullptr;
    // The name of the AccessKey pair.
    // 
    // >  The account information of the third-party cloud servers.
    std::shared_ptr<string> vendorAuthAlias_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
