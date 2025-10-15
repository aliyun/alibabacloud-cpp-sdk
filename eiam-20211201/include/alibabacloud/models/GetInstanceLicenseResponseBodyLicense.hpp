// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCELICENSERESPONSEBODYLICENSE_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCELICENSERESPONSEBODYLICENSE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetInstanceLicenseResponseBodyLicense : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceLicenseResponseBodyLicense& obj) { 
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(LicenseChargeType, licenseChargeType_);
      DARABONBA_PTR_TO_JSON(LicenseConfigJson, licenseConfigJson_);
      DARABONBA_PTR_TO_JSON(LicenseCreateTime, licenseCreateTime_);
      DARABONBA_PTR_TO_JSON(LicenseId, licenseId_);
      DARABONBA_PTR_TO_JSON(LicenseStatus, licenseStatus_);
      DARABONBA_PTR_TO_JSON(PurchaseChannel, purchaseChannel_);
      DARABONBA_PTR_TO_JSON(PurchaseInstanceId, purchaseInstanceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UserQuota, userQuota_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceLicenseResponseBodyLicense& obj) { 
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(LicenseChargeType, licenseChargeType_);
      DARABONBA_PTR_FROM_JSON(LicenseConfigJson, licenseConfigJson_);
      DARABONBA_PTR_FROM_JSON(LicenseCreateTime, licenseCreateTime_);
      DARABONBA_PTR_FROM_JSON(LicenseId, licenseId_);
      DARABONBA_PTR_FROM_JSON(LicenseStatus, licenseStatus_);
      DARABONBA_PTR_FROM_JSON(PurchaseChannel, purchaseChannel_);
      DARABONBA_PTR_FROM_JSON(PurchaseInstanceId, purchaseInstanceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UserQuota, userQuota_);
    };
    GetInstanceLicenseResponseBodyLicense() = default ;
    GetInstanceLicenseResponseBodyLicense(const GetInstanceLicenseResponseBodyLicense &) = default ;
    GetInstanceLicenseResponseBodyLicense(GetInstanceLicenseResponseBodyLicense &&) = default ;
    GetInstanceLicenseResponseBodyLicense(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceLicenseResponseBodyLicense() = default ;
    GetInstanceLicenseResponseBodyLicense& operator=(const GetInstanceLicenseResponseBodyLicense &) = default ;
    GetInstanceLicenseResponseBodyLicense& operator=(GetInstanceLicenseResponseBodyLicense &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->edition_ == nullptr
        && return this->endTime_ == nullptr && return this->licenseChargeType_ == nullptr && return this->licenseConfigJson_ == nullptr && return this->licenseCreateTime_ == nullptr && return this->licenseId_ == nullptr
        && return this->licenseStatus_ == nullptr && return this->purchaseChannel_ == nullptr && return this->purchaseInstanceId_ == nullptr && return this->startTime_ == nullptr && return this->userQuota_ == nullptr; };
    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string edition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline GetInstanceLicenseResponseBodyLicense& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetInstanceLicenseResponseBodyLicense& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // licenseChargeType Field Functions 
    bool hasLicenseChargeType() const { return this->licenseChargeType_ != nullptr;};
    void deleteLicenseChargeType() { this->licenseChargeType_ = nullptr;};
    inline string licenseChargeType() const { DARABONBA_PTR_GET_DEFAULT(licenseChargeType_, "") };
    inline GetInstanceLicenseResponseBodyLicense& setLicenseChargeType(string licenseChargeType) { DARABONBA_PTR_SET_VALUE(licenseChargeType_, licenseChargeType) };


    // licenseConfigJson Field Functions 
    bool hasLicenseConfigJson() const { return this->licenseConfigJson_ != nullptr;};
    void deleteLicenseConfigJson() { this->licenseConfigJson_ = nullptr;};
    inline string licenseConfigJson() const { DARABONBA_PTR_GET_DEFAULT(licenseConfigJson_, "") };
    inline GetInstanceLicenseResponseBodyLicense& setLicenseConfigJson(string licenseConfigJson) { DARABONBA_PTR_SET_VALUE(licenseConfigJson_, licenseConfigJson) };


    // licenseCreateTime Field Functions 
    bool hasLicenseCreateTime() const { return this->licenseCreateTime_ != nullptr;};
    void deleteLicenseCreateTime() { this->licenseCreateTime_ = nullptr;};
    inline int64_t licenseCreateTime() const { DARABONBA_PTR_GET_DEFAULT(licenseCreateTime_, 0L) };
    inline GetInstanceLicenseResponseBodyLicense& setLicenseCreateTime(int64_t licenseCreateTime) { DARABONBA_PTR_SET_VALUE(licenseCreateTime_, licenseCreateTime) };


    // licenseId Field Functions 
    bool hasLicenseId() const { return this->licenseId_ != nullptr;};
    void deleteLicenseId() { this->licenseId_ = nullptr;};
    inline string licenseId() const { DARABONBA_PTR_GET_DEFAULT(licenseId_, "") };
    inline GetInstanceLicenseResponseBodyLicense& setLicenseId(string licenseId) { DARABONBA_PTR_SET_VALUE(licenseId_, licenseId) };


    // licenseStatus Field Functions 
    bool hasLicenseStatus() const { return this->licenseStatus_ != nullptr;};
    void deleteLicenseStatus() { this->licenseStatus_ = nullptr;};
    inline string licenseStatus() const { DARABONBA_PTR_GET_DEFAULT(licenseStatus_, "") };
    inline GetInstanceLicenseResponseBodyLicense& setLicenseStatus(string licenseStatus) { DARABONBA_PTR_SET_VALUE(licenseStatus_, licenseStatus) };


    // purchaseChannel Field Functions 
    bool hasPurchaseChannel() const { return this->purchaseChannel_ != nullptr;};
    void deletePurchaseChannel() { this->purchaseChannel_ = nullptr;};
    inline string purchaseChannel() const { DARABONBA_PTR_GET_DEFAULT(purchaseChannel_, "") };
    inline GetInstanceLicenseResponseBodyLicense& setPurchaseChannel(string purchaseChannel) { DARABONBA_PTR_SET_VALUE(purchaseChannel_, purchaseChannel) };


    // purchaseInstanceId Field Functions 
    bool hasPurchaseInstanceId() const { return this->purchaseInstanceId_ != nullptr;};
    void deletePurchaseInstanceId() { this->purchaseInstanceId_ = nullptr;};
    inline string purchaseInstanceId() const { DARABONBA_PTR_GET_DEFAULT(purchaseInstanceId_, "") };
    inline GetInstanceLicenseResponseBodyLicense& setPurchaseInstanceId(string purchaseInstanceId) { DARABONBA_PTR_SET_VALUE(purchaseInstanceId_, purchaseInstanceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetInstanceLicenseResponseBodyLicense& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // userQuota Field Functions 
    bool hasUserQuota() const { return this->userQuota_ != nullptr;};
    void deleteUserQuota() { this->userQuota_ = nullptr;};
    inline int64_t userQuota() const { DARABONBA_PTR_GET_DEFAULT(userQuota_, 0L) };
    inline GetInstanceLicenseResponseBodyLicense& setUserQuota(int64_t userQuota) { DARABONBA_PTR_SET_VALUE(userQuota_, userQuota) };


  protected:
    // Edition of the License
    std::shared_ptr<string> edition_ = nullptr;
    // End date of the validity period of the License, timestamp
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // Payment type of the License
    std::shared_ptr<string> licenseChargeType_ = nullptr;
    // Detailed configuration JSON string of the License
    std::shared_ptr<string> licenseConfigJson_ = nullptr;
    // Creation time of the License, timestamp
    std::shared_ptr<int64_t> licenseCreateTime_ = nullptr;
    // Unique identifier of the License
    std::shared_ptr<string> licenseId_ = nullptr;
    // Status of the License
    std::shared_ptr<string> licenseStatus_ = nullptr;
    // Purchase channel of the License
    std::shared_ptr<string> purchaseChannel_ = nullptr;
    // Unique external product identifier corresponding to the License
    std::shared_ptr<string> purchaseInstanceId_ = nullptr;
    // Start date of the validity period of the License, timestamp
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // User quota of the License
    std::shared_ptr<int64_t> userQuota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
