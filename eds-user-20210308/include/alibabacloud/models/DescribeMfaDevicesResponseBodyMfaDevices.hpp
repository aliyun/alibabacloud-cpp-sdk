// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMFADEVICESRESPONSEBODYMFADEVICES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMFADEVICESRESPONSEBODYMFADEVICES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMfaDevicesResponseBodyMfaDevicesAdUser.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeMfaDevicesResponseBodyMfaDevices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMfaDevicesResponseBodyMfaDevices& obj) { 
      DARABONBA_PTR_TO_JSON(AdUser, adUser_);
      DARABONBA_PTR_TO_JSON(ConsecutiveFails, consecutiveFails_);
      DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(GmtEnabled, gmtEnabled_);
      DARABONBA_PTR_TO_JSON(GmtUnlock, gmtUnlock_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMfaDevicesResponseBodyMfaDevices& obj) { 
      DARABONBA_PTR_FROM_JSON(AdUser, adUser_);
      DARABONBA_PTR_FROM_JSON(ConsecutiveFails, consecutiveFails_);
      DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(GmtEnabled, gmtEnabled_);
      DARABONBA_PTR_FROM_JSON(GmtUnlock, gmtUnlock_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeMfaDevicesResponseBodyMfaDevices() = default ;
    DescribeMfaDevicesResponseBodyMfaDevices(const DescribeMfaDevicesResponseBodyMfaDevices &) = default ;
    DescribeMfaDevicesResponseBodyMfaDevices(DescribeMfaDevicesResponseBodyMfaDevices &&) = default ;
    DescribeMfaDevicesResponseBodyMfaDevices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMfaDevicesResponseBodyMfaDevices() = default ;
    DescribeMfaDevicesResponseBodyMfaDevices& operator=(const DescribeMfaDevicesResponseBodyMfaDevices &) = default ;
    DescribeMfaDevicesResponseBodyMfaDevices& operator=(DescribeMfaDevicesResponseBodyMfaDevices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adUser_ != nullptr
        && this->consecutiveFails_ != nullptr && this->deviceType_ != nullptr && this->email_ != nullptr && this->endUserId_ != nullptr && this->gmtEnabled_ != nullptr
        && this->gmtUnlock_ != nullptr && this->id_ != nullptr && this->serialNumber_ != nullptr && this->status_ != nullptr; };
    // adUser Field Functions 
    bool hasAdUser() const { return this->adUser_ != nullptr;};
    void deleteAdUser() { this->adUser_ = nullptr;};
    inline const Models::DescribeMfaDevicesResponseBodyMfaDevicesAdUser & adUser() const { DARABONBA_PTR_GET_CONST(adUser_, Models::DescribeMfaDevicesResponseBodyMfaDevicesAdUser) };
    inline Models::DescribeMfaDevicesResponseBodyMfaDevicesAdUser adUser() { DARABONBA_PTR_GET(adUser_, Models::DescribeMfaDevicesResponseBodyMfaDevicesAdUser) };
    inline DescribeMfaDevicesResponseBodyMfaDevices& setAdUser(const Models::DescribeMfaDevicesResponseBodyMfaDevicesAdUser & adUser) { DARABONBA_PTR_SET_VALUE(adUser_, adUser) };
    inline DescribeMfaDevicesResponseBodyMfaDevices& setAdUser(Models::DescribeMfaDevicesResponseBodyMfaDevicesAdUser && adUser) { DARABONBA_PTR_SET_RVALUE(adUser_, adUser) };


    // consecutiveFails Field Functions 
    bool hasConsecutiveFails() const { return this->consecutiveFails_ != nullptr;};
    void deleteConsecutiveFails() { this->consecutiveFails_ = nullptr;};
    inline int32_t consecutiveFails() const { DARABONBA_PTR_GET_DEFAULT(consecutiveFails_, 0) };
    inline DescribeMfaDevicesResponseBodyMfaDevices& setConsecutiveFails(int32_t consecutiveFails) { DARABONBA_PTR_SET_VALUE(consecutiveFails_, consecutiveFails) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string deviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline DescribeMfaDevicesResponseBodyMfaDevices& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline DescribeMfaDevicesResponseBodyMfaDevices& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeMfaDevicesResponseBodyMfaDevices& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // gmtEnabled Field Functions 
    bool hasGmtEnabled() const { return this->gmtEnabled_ != nullptr;};
    void deleteGmtEnabled() { this->gmtEnabled_ = nullptr;};
    inline string gmtEnabled() const { DARABONBA_PTR_GET_DEFAULT(gmtEnabled_, "") };
    inline DescribeMfaDevicesResponseBodyMfaDevices& setGmtEnabled(string gmtEnabled) { DARABONBA_PTR_SET_VALUE(gmtEnabled_, gmtEnabled) };


    // gmtUnlock Field Functions 
    bool hasGmtUnlock() const { return this->gmtUnlock_ != nullptr;};
    void deleteGmtUnlock() { this->gmtUnlock_ = nullptr;};
    inline string gmtUnlock() const { DARABONBA_PTR_GET_DEFAULT(gmtUnlock_, "") };
    inline DescribeMfaDevicesResponseBodyMfaDevices& setGmtUnlock(string gmtUnlock) { DARABONBA_PTR_SET_VALUE(gmtUnlock_, gmtUnlock) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeMfaDevicesResponseBodyMfaDevices& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline DescribeMfaDevicesResponseBodyMfaDevices& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeMfaDevicesResponseBodyMfaDevices& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<Models::DescribeMfaDevicesResponseBodyMfaDevicesAdUser> adUser_ = nullptr;
    // The number of consecutive failures to bind the virtual MFA device, or the number of authentication failures based on the virtual MFA device.
    std::shared_ptr<int32_t> consecutiveFails_ = nullptr;
    // The type of the virtual MFA device. The value can only be TOTP_VIRTUAL. This value indicates that the virtual MFA device follows the Time-based One-time Password (TOTP) algorithm.
    std::shared_ptr<string> deviceType_ = nullptr;
    // >  This parameter is not publicly available.
    std::shared_ptr<string> email_ = nullptr;
    // The username of the convenience user that uses the virtual MFA device.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The time when the virtual MFA device was enabled. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> gmtEnabled_ = nullptr;
    // The time when the locked virtual MFA device was automatically unlocked. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> gmtUnlock_ = nullptr;
    // >  This parameter is not publicly available.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The serial number of the virtual MFA device. The serial number is unique for each device.
    std::shared_ptr<string> serialNumber_ = nullptr;
    // The status of the virtual MFA device.
    // 
    // Valid values:
    // 
    // *   LOCKED
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   UNBOUND
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   NORMAL
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
