// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCELICENSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCELICENSERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetInstanceLicenseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceLicenseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(License, license_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceLicenseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(License, license_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetInstanceLicenseResponseBody() = default ;
    GetInstanceLicenseResponseBody(const GetInstanceLicenseResponseBody &) = default ;
    GetInstanceLicenseResponseBody(GetInstanceLicenseResponseBody &&) = default ;
    GetInstanceLicenseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceLicenseResponseBody() = default ;
    GetInstanceLicenseResponseBody& operator=(const GetInstanceLicenseResponseBody &) = default ;
    GetInstanceLicenseResponseBody& operator=(GetInstanceLicenseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class License : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const License& obj) { 
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
      friend void from_json(const Darabonba::Json& j, License& obj) { 
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
      License() = default ;
      License(const License &) = default ;
      License(License &&) = default ;
      License(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~License() = default ;
      License& operator=(const License &) = default ;
      License& operator=(License &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->edition_ == nullptr
        && this->endTime_ == nullptr && this->licenseChargeType_ == nullptr && this->licenseConfigJson_ == nullptr && this->licenseCreateTime_ == nullptr && this->licenseId_ == nullptr
        && this->licenseStatus_ == nullptr && this->purchaseChannel_ == nullptr && this->purchaseInstanceId_ == nullptr && this->startTime_ == nullptr && this->userQuota_ == nullptr; };
      // edition Field Functions 
      bool hasEdition() const { return this->edition_ != nullptr;};
      void deleteEdition() { this->edition_ = nullptr;};
      inline string getEdition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
      inline License& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline License& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // licenseChargeType Field Functions 
      bool hasLicenseChargeType() const { return this->licenseChargeType_ != nullptr;};
      void deleteLicenseChargeType() { this->licenseChargeType_ = nullptr;};
      inline string getLicenseChargeType() const { DARABONBA_PTR_GET_DEFAULT(licenseChargeType_, "") };
      inline License& setLicenseChargeType(string licenseChargeType) { DARABONBA_PTR_SET_VALUE(licenseChargeType_, licenseChargeType) };


      // licenseConfigJson Field Functions 
      bool hasLicenseConfigJson() const { return this->licenseConfigJson_ != nullptr;};
      void deleteLicenseConfigJson() { this->licenseConfigJson_ = nullptr;};
      inline string getLicenseConfigJson() const { DARABONBA_PTR_GET_DEFAULT(licenseConfigJson_, "") };
      inline License& setLicenseConfigJson(string licenseConfigJson) { DARABONBA_PTR_SET_VALUE(licenseConfigJson_, licenseConfigJson) };


      // licenseCreateTime Field Functions 
      bool hasLicenseCreateTime() const { return this->licenseCreateTime_ != nullptr;};
      void deleteLicenseCreateTime() { this->licenseCreateTime_ = nullptr;};
      inline int64_t getLicenseCreateTime() const { DARABONBA_PTR_GET_DEFAULT(licenseCreateTime_, 0L) };
      inline License& setLicenseCreateTime(int64_t licenseCreateTime) { DARABONBA_PTR_SET_VALUE(licenseCreateTime_, licenseCreateTime) };


      // licenseId Field Functions 
      bool hasLicenseId() const { return this->licenseId_ != nullptr;};
      void deleteLicenseId() { this->licenseId_ = nullptr;};
      inline string getLicenseId() const { DARABONBA_PTR_GET_DEFAULT(licenseId_, "") };
      inline License& setLicenseId(string licenseId) { DARABONBA_PTR_SET_VALUE(licenseId_, licenseId) };


      // licenseStatus Field Functions 
      bool hasLicenseStatus() const { return this->licenseStatus_ != nullptr;};
      void deleteLicenseStatus() { this->licenseStatus_ = nullptr;};
      inline string getLicenseStatus() const { DARABONBA_PTR_GET_DEFAULT(licenseStatus_, "") };
      inline License& setLicenseStatus(string licenseStatus) { DARABONBA_PTR_SET_VALUE(licenseStatus_, licenseStatus) };


      // purchaseChannel Field Functions 
      bool hasPurchaseChannel() const { return this->purchaseChannel_ != nullptr;};
      void deletePurchaseChannel() { this->purchaseChannel_ = nullptr;};
      inline string getPurchaseChannel() const { DARABONBA_PTR_GET_DEFAULT(purchaseChannel_, "") };
      inline License& setPurchaseChannel(string purchaseChannel) { DARABONBA_PTR_SET_VALUE(purchaseChannel_, purchaseChannel) };


      // purchaseInstanceId Field Functions 
      bool hasPurchaseInstanceId() const { return this->purchaseInstanceId_ != nullptr;};
      void deletePurchaseInstanceId() { this->purchaseInstanceId_ = nullptr;};
      inline string getPurchaseInstanceId() const { DARABONBA_PTR_GET_DEFAULT(purchaseInstanceId_, "") };
      inline License& setPurchaseInstanceId(string purchaseInstanceId) { DARABONBA_PTR_SET_VALUE(purchaseInstanceId_, purchaseInstanceId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline License& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // userQuota Field Functions 
      bool hasUserQuota() const { return this->userQuota_ != nullptr;};
      void deleteUserQuota() { this->userQuota_ = nullptr;};
      inline int64_t getUserQuota() const { DARABONBA_PTR_GET_DEFAULT(userQuota_, 0L) };
      inline License& setUserQuota(int64_t userQuota) { DARABONBA_PTR_SET_VALUE(userQuota_, userQuota) };


    protected:
      // Edition of the License
      shared_ptr<string> edition_ {};
      // End date of the validity period of the License, timestamp
      shared_ptr<int64_t> endTime_ {};
      // Payment type of the License
      shared_ptr<string> licenseChargeType_ {};
      // Detailed configuration JSON string of the License
      shared_ptr<string> licenseConfigJson_ {};
      // Creation time of the License, timestamp
      shared_ptr<int64_t> licenseCreateTime_ {};
      // Unique identifier of the License
      shared_ptr<string> licenseId_ {};
      // Status of the License
      shared_ptr<string> licenseStatus_ {};
      // Purchase channel of the License
      shared_ptr<string> purchaseChannel_ {};
      // Unique external product identifier corresponding to the License
      shared_ptr<string> purchaseInstanceId_ {};
      // Start date of the validity period of the License, timestamp
      shared_ptr<int64_t> startTime_ {};
      // User quota of the License
      shared_ptr<int64_t> userQuota_ {};
    };

    virtual bool empty() const override { return this->license_ == nullptr
        && this->requestId_ == nullptr; };
    // license Field Functions 
    bool hasLicense() const { return this->license_ != nullptr;};
    void deleteLicense() { this->license_ = nullptr;};
    inline const GetInstanceLicenseResponseBody::License & getLicense() const { DARABONBA_PTR_GET_CONST(license_, GetInstanceLicenseResponseBody::License) };
    inline GetInstanceLicenseResponseBody::License getLicense() { DARABONBA_PTR_GET(license_, GetInstanceLicenseResponseBody::License) };
    inline GetInstanceLicenseResponseBody& setLicense(const GetInstanceLicenseResponseBody::License & license) { DARABONBA_PTR_SET_VALUE(license_, license) };
    inline GetInstanceLicenseResponseBody& setLicense(GetInstanceLicenseResponseBody::License && license) { DARABONBA_PTR_SET_RVALUE(license_, license) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceLicenseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned result.
    shared_ptr<GetInstanceLicenseResponseBody::License> license_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
