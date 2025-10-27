// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTALLCODEFORUUIDRESPONSEBODYINSTALLCODE_HPP_
#define ALIBABACLOUD_MODELS_GETINSTALLCODEFORUUIDRESPONSEBODYINSTALLCODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetInstallCodeForUuidResponseBodyInstallCode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstallCodeForUuidResponseBodyInstallCode& obj) { 
      DARABONBA_PTR_TO_JSON(CaptchaCode, captchaCode_);
      DARABONBA_PTR_TO_JSON(ExpiredDate, expiredDate_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(VendorName, vendorName_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstallCodeForUuidResponseBodyInstallCode& obj) { 
      DARABONBA_PTR_FROM_JSON(CaptchaCode, captchaCode_);
      DARABONBA_PTR_FROM_JSON(ExpiredDate, expiredDate_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(VendorName, vendorName_);
    };
    GetInstallCodeForUuidResponseBodyInstallCode() = default ;
    GetInstallCodeForUuidResponseBodyInstallCode(const GetInstallCodeForUuidResponseBodyInstallCode &) = default ;
    GetInstallCodeForUuidResponseBodyInstallCode(GetInstallCodeForUuidResponseBodyInstallCode &&) = default ;
    GetInstallCodeForUuidResponseBodyInstallCode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstallCodeForUuidResponseBodyInstallCode() = default ;
    GetInstallCodeForUuidResponseBodyInstallCode& operator=(const GetInstallCodeForUuidResponseBodyInstallCode &) = default ;
    GetInstallCodeForUuidResponseBodyInstallCode& operator=(GetInstallCodeForUuidResponseBodyInstallCode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->captchaCode_ == nullptr
        && return this->expiredDate_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->os_ == nullptr && return this->vendorName_ == nullptr; };
    // captchaCode Field Functions 
    bool hasCaptchaCode() const { return this->captchaCode_ != nullptr;};
    void deleteCaptchaCode() { this->captchaCode_ = nullptr;};
    inline string captchaCode() const { DARABONBA_PTR_GET_DEFAULT(captchaCode_, "") };
    inline GetInstallCodeForUuidResponseBodyInstallCode& setCaptchaCode(string captchaCode) { DARABONBA_PTR_SET_VALUE(captchaCode_, captchaCode) };


    // expiredDate Field Functions 
    bool hasExpiredDate() const { return this->expiredDate_ != nullptr;};
    void deleteExpiredDate() { this->expiredDate_ = nullptr;};
    inline int64_t expiredDate() const { DARABONBA_PTR_GET_DEFAULT(expiredDate_, 0L) };
    inline GetInstallCodeForUuidResponseBodyInstallCode& setExpiredDate(int64_t expiredDate) { DARABONBA_PTR_SET_VALUE(expiredDate_, expiredDate) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline GetInstallCodeForUuidResponseBodyInstallCode& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetInstallCodeForUuidResponseBodyInstallCode& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline GetInstallCodeForUuidResponseBodyInstallCode& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // vendorName Field Functions 
    bool hasVendorName() const { return this->vendorName_ != nullptr;};
    void deleteVendorName() { this->vendorName_ = nullptr;};
    inline string vendorName() const { DARABONBA_PTR_GET_DEFAULT(vendorName_, "") };
    inline GetInstallCodeForUuidResponseBodyInstallCode& setVendorName(string vendorName) { DARABONBA_PTR_SET_VALUE(vendorName_, vendorName) };


  protected:
    // Installation verification code for manually installing the Cloud Security Center client.
    std::shared_ptr<string> captchaCode_ = nullptr;
    // Expiration date of the installation verification code. The format is a 13-digit timestamp.
    // > The installation verification code can only be used within its validity period. Expired codes cannot be used.
    std::shared_ptr<int64_t> expiredDate_ = nullptr;
    // Server group ID.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // Server group name.
    std::shared_ptr<string> groupName_ = nullptr;
    // Operating system of the server. Values:
    // 
    // - **linux**: Linux
    // 
    // - **windows**: Windows
    std::shared_ptr<string> os_ = nullptr;
    // Name of the server vendor.
    std::shared_ptr<string> vendorName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
