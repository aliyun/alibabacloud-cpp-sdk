// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDVENDORACCOUNTAKLISTRESPONSEBODYCLOUDVENDORACCOUNTAKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDVENDORACCOUNTAKLISTRESPONSEBODYCLOUDVENDORACCOUNTAKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs& obj) { 
      DARABONBA_PTR_TO_JSON(AkType, akType_);
      DARABONBA_PTR_TO_JSON(AuthId, authId_);
      DARABONBA_PTR_TO_JSON(AuthModules, authModules_);
      DARABONBA_PTR_TO_JSON(CtdrCloudUserId, ctdrCloudUserId_);
      DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(SecretId, secretId_);
      DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      DARABONBA_PTR_TO_JSON(VendorAuthAlias, vendorAuthAlias_);
      DARABONBA_PTR_TO_JSON(VendorUid, vendorUid_);
      DARABONBA_PTR_TO_JSON(VendorUserName, vendorUserName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs& obj) { 
      DARABONBA_PTR_FROM_JSON(AkType, akType_);
      DARABONBA_PTR_FROM_JSON(AuthId, authId_);
      DARABONBA_PTR_FROM_JSON(AuthModules, authModules_);
      DARABONBA_PTR_FROM_JSON(CtdrCloudUserId, ctdrCloudUserId_);
      DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(SecretId, secretId_);
      DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      DARABONBA_PTR_FROM_JSON(VendorAuthAlias, vendorAuthAlias_);
      DARABONBA_PTR_FROM_JSON(VendorUid, vendorUid_);
      DARABONBA_PTR_FROM_JSON(VendorUserName, vendorUserName_);
    };
    DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs() = default ;
    DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs(const DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs &) = default ;
    DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs(DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs &&) = default ;
    DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs() = default ;
    DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs& operator=(const DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs &) = default ;
    DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs& operator=(DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->akType_ == nullptr
        && return this->authId_ == nullptr && return this->authModules_ == nullptr && return this->ctdrCloudUserId_ == nullptr && return this->extendInfo_ == nullptr && return this->message_ == nullptr
        && return this->secretId_ == nullptr && return this->serviceStatus_ == nullptr && return this->status_ == nullptr && return this->vendor_ == nullptr && return this->vendorAuthAlias_ == nullptr
        && return this->vendorUid_ == nullptr && return this->vendorUserName_ == nullptr; };
    // akType Field Functions 
    bool hasAkType() const { return this->akType_ != nullptr;};
    void deleteAkType() { this->akType_ = nullptr;};
    inline string akType() const { DARABONBA_PTR_GET_DEFAULT(akType_, "") };
    inline DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs& setAkType(string akType) { DARABONBA_PTR_SET_VALUE(akType_, akType) };


    // authId Field Functions 
    bool hasAuthId() const { return this->authId_ != nullptr;};
    void deleteAuthId() { this->authId_ = nullptr;};
    inline int64_t authId() const { DARABONBA_PTR_GET_DEFAULT(authId_, 0L) };
    inline DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs& setAuthId(int64_t authId) { DARABONBA_PTR_SET_VALUE(authId_, authId) };


    // authModules Field Functions 
    bool hasAuthModules() const { return this->authModules_ != nullptr;};
    void deleteAuthModules() { this->authModules_ = nullptr;};
    inline const vector<Models::DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules> & authModules() const { DARABONBA_PTR_GET_CONST(authModules_, vector<Models::DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules>) };
    inline vector<Models::DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules> authModules() { DARABONBA_PTR_GET(authModules_, vector<Models::DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules>) };
    inline DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs& setAuthModules(const vector<Models::DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules> & authModules) { DARABONBA_PTR_SET_VALUE(authModules_, authModules) };
    inline DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs& setAuthModules(vector<Models::DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules> && authModules) { DARABONBA_PTR_SET_RVALUE(authModules_, authModules) };


    // ctdrCloudUserId Field Functions 
    bool hasCtdrCloudUserId() const { return this->ctdrCloudUserId_ != nullptr;};
    void deleteCtdrCloudUserId() { this->ctdrCloudUserId_ = nullptr;};
    inline string ctdrCloudUserId() const { DARABONBA_PTR_GET_DEFAULT(ctdrCloudUserId_, "") };
    inline DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs& setCtdrCloudUserId(string ctdrCloudUserId) { DARABONBA_PTR_SET_VALUE(ctdrCloudUserId_, ctdrCloudUserId) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string extendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // secretId Field Functions 
    bool hasSecretId() const { return this->secretId_ != nullptr;};
    void deleteSecretId() { this->secretId_ = nullptr;};
    inline string secretId() const { DARABONBA_PTR_GET_DEFAULT(secretId_, "") };
    inline DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs& setSecretId(string secretId) { DARABONBA_PTR_SET_VALUE(secretId_, secretId) };


    // serviceStatus Field Functions 
    bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
    void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
    inline int32_t serviceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, 0) };
    inline DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs& setServiceStatus(int32_t serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    // vendorAuthAlias Field Functions 
    bool hasVendorAuthAlias() const { return this->vendorAuthAlias_ != nullptr;};
    void deleteVendorAuthAlias() { this->vendorAuthAlias_ = nullptr;};
    inline string vendorAuthAlias() const { DARABONBA_PTR_GET_DEFAULT(vendorAuthAlias_, "") };
    inline DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs& setVendorAuthAlias(string vendorAuthAlias) { DARABONBA_PTR_SET_VALUE(vendorAuthAlias_, vendorAuthAlias) };


    // vendorUid Field Functions 
    bool hasVendorUid() const { return this->vendorUid_ != nullptr;};
    void deleteVendorUid() { this->vendorUid_ = nullptr;};
    inline string vendorUid() const { DARABONBA_PTR_GET_DEFAULT(vendorUid_, "") };
    inline DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs& setVendorUid(string vendorUid) { DARABONBA_PTR_SET_VALUE(vendorUid_, vendorUid) };


    // vendorUserName Field Functions 
    bool hasVendorUserName() const { return this->vendorUserName_ != nullptr;};
    void deleteVendorUserName() { this->vendorUserName_ = nullptr;};
    inline string vendorUserName() const { DARABONBA_PTR_GET_DEFAULT(vendorUserName_, "") };
    inline DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKs& setVendorUserName(string vendorUserName) { DARABONBA_PTR_SET_VALUE(vendorUserName_, vendorUserName) };


  protected:
    // The type of the account to which the AccessKey pair belongs. Valid values:
    // 
    // *   **primary**: a primary account
    // *   **sub**: a sub-account
    std::shared_ptr<string> akType_ = nullptr;
    // The unique ID of the AccessKey pair.
    std::shared_ptr<int64_t> authId_ = nullptr;
    // The modules that are associated with the AccessKey pair.
    std::shared_ptr<vector<Models::DescribeCloudVendorAccountAKListResponseBodyCloudVendorAccountAKsAuthModules>> authModules_ = nullptr;
    // The Account ID.
    std::shared_ptr<string> ctdrCloudUserId_ = nullptr;
    // The extended information of the module.
    std::shared_ptr<string> extendInfo_ = nullptr;
    // The error message of the AccessKey pair.
    std::shared_ptr<string> message_ = nullptr;
    // The AccessKey ID.
    std::shared_ptr<string> secretId_ = nullptr;
    // The service status of the AccessKey pair. Valid values:
    // 
    // *   **0**: being used
    // *   **1**: exception occurred
    // *   **2**: being validated
    // *   **3**: validation timed out
    std::shared_ptr<int32_t> serviceStatus_ = nullptr;
    // The status of the AccessKey pair. Valid values:
    // 
    // *   **0**: enabled
    // *   **1**: disabled
    std::shared_ptr<int32_t> status_ = nullptr;
    // The cloud service provider. Valid values:
    // 
    // *   **Tencent**: Tencent Cloud
    // *   **HUAWEICLOUD**: Huawei Cloud
    // *   **Azure**: Microsoft Azure
    // *   **AWS**: Amazon Web Services (AWS)
    std::shared_ptr<string> vendor_ = nullptr;
    // The name of the AccessKey pair.
    std::shared_ptr<string> vendorAuthAlias_ = nullptr;
    // Account ID of the multi-cloud instance.
    std::shared_ptr<string> vendorUid_ = nullptr;
    // Account name of the multi-cloud instance.
    std::shared_ptr<string> vendorUserName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
