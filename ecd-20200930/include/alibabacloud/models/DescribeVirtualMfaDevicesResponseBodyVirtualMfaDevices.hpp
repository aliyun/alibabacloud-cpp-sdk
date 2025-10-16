// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVIRTUALMFADEVICESRESPONSEBODYVIRTUALMFADEVICES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVIRTUALMFADEVICESRESPONSEBODYVIRTUALMFADEVICES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVirtualMFADevicesResponseBodyVirtualMFADevicesAdUser.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeVirtualMFADevicesResponseBodyVirtualMFADevices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVirtualMFADevicesResponseBodyVirtualMFADevices& obj) { 
      DARABONBA_PTR_TO_JSON(AdUser, adUser_);
      DARABONBA_PTR_TO_JSON(ConsecutiveFails, consecutiveFails_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(GmtEnabled, gmtEnabled_);
      DARABONBA_PTR_TO_JSON(GmtUnlock, gmtUnlock_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVirtualMFADevicesResponseBodyVirtualMFADevices& obj) { 
      DARABONBA_PTR_FROM_JSON(AdUser, adUser_);
      DARABONBA_PTR_FROM_JSON(ConsecutiveFails, consecutiveFails_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(GmtEnabled, gmtEnabled_);
      DARABONBA_PTR_FROM_JSON(GmtUnlock, gmtUnlock_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    DescribeVirtualMFADevicesResponseBodyVirtualMFADevices() = default ;
    DescribeVirtualMFADevicesResponseBodyVirtualMFADevices(const DescribeVirtualMFADevicesResponseBodyVirtualMFADevices &) = default ;
    DescribeVirtualMFADevicesResponseBodyVirtualMFADevices(DescribeVirtualMFADevicesResponseBodyVirtualMFADevices &&) = default ;
    DescribeVirtualMFADevicesResponseBodyVirtualMFADevices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVirtualMFADevicesResponseBodyVirtualMFADevices() = default ;
    DescribeVirtualMFADevicesResponseBodyVirtualMFADevices& operator=(const DescribeVirtualMFADevicesResponseBodyVirtualMFADevices &) = default ;
    DescribeVirtualMFADevicesResponseBodyVirtualMFADevices& operator=(DescribeVirtualMFADevicesResponseBodyVirtualMFADevices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adUser_ == nullptr
        && return this->consecutiveFails_ == nullptr && return this->directoryId_ == nullptr && return this->endUserId_ == nullptr && return this->gmtEnabled_ == nullptr && return this->gmtUnlock_ == nullptr
        && return this->officeSiteId_ == nullptr && return this->serialNumber_ == nullptr && return this->status_ == nullptr; };
    // adUser Field Functions 
    bool hasAdUser() const { return this->adUser_ != nullptr;};
    void deleteAdUser() { this->adUser_ = nullptr;};
    inline const Models::DescribeVirtualMFADevicesResponseBodyVirtualMFADevicesAdUser & adUser() const { DARABONBA_PTR_GET_CONST(adUser_, Models::DescribeVirtualMFADevicesResponseBodyVirtualMFADevicesAdUser) };
    inline Models::DescribeVirtualMFADevicesResponseBodyVirtualMFADevicesAdUser adUser() { DARABONBA_PTR_GET(adUser_, Models::DescribeVirtualMFADevicesResponseBodyVirtualMFADevicesAdUser) };
    inline DescribeVirtualMFADevicesResponseBodyVirtualMFADevices& setAdUser(const Models::DescribeVirtualMFADevicesResponseBodyVirtualMFADevicesAdUser & adUser) { DARABONBA_PTR_SET_VALUE(adUser_, adUser) };
    inline DescribeVirtualMFADevicesResponseBodyVirtualMFADevices& setAdUser(Models::DescribeVirtualMFADevicesResponseBodyVirtualMFADevicesAdUser && adUser) { DARABONBA_PTR_SET_RVALUE(adUser_, adUser) };


    // consecutiveFails Field Functions 
    bool hasConsecutiveFails() const { return this->consecutiveFails_ != nullptr;};
    void deleteConsecutiveFails() { this->consecutiveFails_ = nullptr;};
    inline int32_t consecutiveFails() const { DARABONBA_PTR_GET_DEFAULT(consecutiveFails_, 0) };
    inline DescribeVirtualMFADevicesResponseBodyVirtualMFADevices& setConsecutiveFails(int32_t consecutiveFails) { DARABONBA_PTR_SET_VALUE(consecutiveFails_, consecutiveFails) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string directoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline DescribeVirtualMFADevicesResponseBodyVirtualMFADevices& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeVirtualMFADevicesResponseBodyVirtualMFADevices& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // gmtEnabled Field Functions 
    bool hasGmtEnabled() const { return this->gmtEnabled_ != nullptr;};
    void deleteGmtEnabled() { this->gmtEnabled_ = nullptr;};
    inline string gmtEnabled() const { DARABONBA_PTR_GET_DEFAULT(gmtEnabled_, "") };
    inline DescribeVirtualMFADevicesResponseBodyVirtualMFADevices& setGmtEnabled(string gmtEnabled) { DARABONBA_PTR_SET_VALUE(gmtEnabled_, gmtEnabled) };


    // gmtUnlock Field Functions 
    bool hasGmtUnlock() const { return this->gmtUnlock_ != nullptr;};
    void deleteGmtUnlock() { this->gmtUnlock_ = nullptr;};
    inline string gmtUnlock() const { DARABONBA_PTR_GET_DEFAULT(gmtUnlock_, "") };
    inline DescribeVirtualMFADevicesResponseBodyVirtualMFADevices& setGmtUnlock(string gmtUnlock) { DARABONBA_PTR_SET_VALUE(gmtUnlock_, gmtUnlock) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeVirtualMFADevicesResponseBodyVirtualMFADevices& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline DescribeVirtualMFADevicesResponseBodyVirtualMFADevices& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeVirtualMFADevicesResponseBodyVirtualMFADevices& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<Models::DescribeVirtualMFADevicesResponseBodyVirtualMFADevicesAdUser> adUser_ = nullptr;
    // The number of consecutive failures to bind the virtual MFA device, or the number of failures on the verification of the virtual MFA device.
    std::shared_ptr<int32_t> consecutiveFails_ = nullptr;
    // > This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<string> directoryId_ = nullptr;
    // The name of the AD user who uses the virtual MFA device.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The time when the virtual MFA device was started. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> gmtEnabled_ = nullptr;
    // The time when a locked virtual MFA device was automatically unlocked. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> gmtUnlock_ = nullptr;
    // The ID of the workspace.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The serial number of the virtual MFA device, which is a unique identifier.
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
} // namespace Ecd20200930
#endif
