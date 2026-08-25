// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMFADEVICESFORUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMFADEVICESFORUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class ListMFADevicesForUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMFADevicesForUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MFADevices, MFADevices_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCounts, totalCounts_);
    };
    friend void from_json(const Darabonba::Json& j, ListMFADevicesForUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MFADevices, MFADevices_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCounts, totalCounts_);
    };
    ListMFADevicesForUserResponseBody() = default ;
    ListMFADevicesForUserResponseBody(const ListMFADevicesForUserResponseBody &) = default ;
    ListMFADevicesForUserResponseBody(ListMFADevicesForUserResponseBody &&) = default ;
    ListMFADevicesForUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMFADevicesForUserResponseBody() = default ;
    ListMFADevicesForUserResponseBody& operator=(const ListMFADevicesForUserResponseBody &) = default ;
    ListMFADevicesForUserResponseBody& operator=(ListMFADevicesForUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MFADevices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MFADevices& obj) { 
        DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
        DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
        DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
        DARABONBA_PTR_TO_JSON(LastUseTime, lastUseTime_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, MFADevices& obj) { 
        DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
        DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
        DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
        DARABONBA_PTR_FROM_JSON(LastUseTime, lastUseTime_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      MFADevices() = default ;
      MFADevices(const MFADevices &) = default ;
      MFADevices(MFADevices &&) = default ;
      MFADevices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MFADevices() = default ;
      MFADevices& operator=(const MFADevices &) = default ;
      MFADevices& operator=(MFADevices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deviceId_ == nullptr
        && this->deviceName_ == nullptr && this->deviceType_ == nullptr && this->effectiveTime_ == nullptr && this->lastUseTime_ == nullptr && this->userId_ == nullptr; };
      // deviceId Field Functions 
      bool hasDeviceId() const { return this->deviceId_ != nullptr;};
      void deleteDeviceId() { this->deviceId_ = nullptr;};
      inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
      inline MFADevices& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


      // deviceName Field Functions 
      bool hasDeviceName() const { return this->deviceName_ != nullptr;};
      void deleteDeviceName() { this->deviceName_ = nullptr;};
      inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
      inline MFADevices& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


      // deviceType Field Functions 
      bool hasDeviceType() const { return this->deviceType_ != nullptr;};
      void deleteDeviceType() { this->deviceType_ = nullptr;};
      inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
      inline MFADevices& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


      // effectiveTime Field Functions 
      bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
      void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
      inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
      inline MFADevices& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


      // lastUseTime Field Functions 
      bool hasLastUseTime() const { return this->lastUseTime_ != nullptr;};
      void deleteLastUseTime() { this->lastUseTime_ = nullptr;};
      inline string getLastUseTime() const { DARABONBA_PTR_GET_DEFAULT(lastUseTime_, "") };
      inline MFADevices& setLastUseTime(string lastUseTime) { DARABONBA_PTR_SET_VALUE(lastUseTime_, lastUseTime) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline MFADevices& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The MFA device ID.
      shared_ptr<string> deviceId_ {};
      // The MFA device name.
      shared_ptr<string> deviceName_ {};
      // The MFA device type. Valid values:
      // - TOTP: a virtual MFA device based on the Time-based One-Time Password algorithm.
      // - CrossPlatformPasskey: a cross-platform passkey.
      // - PlatformPasskey: a platform built-in passkey.
      shared_ptr<string> deviceType_ {};
      // The effective period. The time is in UTC and follows the RFC 3339 format (YYYY-MM-DDTHH:mm:ssZ).
      shared_ptr<string> effectiveTime_ {};
      // The last time the MFA device was used.
      shared_ptr<string> lastUseTime_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->MFADevices_ == nullptr
        && this->requestId_ == nullptr && this->totalCounts_ == nullptr; };
    // MFADevices Field Functions 
    bool hasMFADevices() const { return this->MFADevices_ != nullptr;};
    void deleteMFADevices() { this->MFADevices_ = nullptr;};
    inline const vector<ListMFADevicesForUserResponseBody::MFADevices> & getMFADevices() const { DARABONBA_PTR_GET_CONST(MFADevices_, vector<ListMFADevicesForUserResponseBody::MFADevices>) };
    inline vector<ListMFADevicesForUserResponseBody::MFADevices> getMFADevices() { DARABONBA_PTR_GET(MFADevices_, vector<ListMFADevicesForUserResponseBody::MFADevices>) };
    inline ListMFADevicesForUserResponseBody& setMFADevices(const vector<ListMFADevicesForUserResponseBody::MFADevices> & mFADevices) { DARABONBA_PTR_SET_VALUE(MFADevices_, mFADevices) };
    inline ListMFADevicesForUserResponseBody& setMFADevices(vector<ListMFADevicesForUserResponseBody::MFADevices> && mFADevices) { DARABONBA_PTR_SET_RVALUE(MFADevices_, mFADevices) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMFADevicesForUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCounts Field Functions 
    bool hasTotalCounts() const { return this->totalCounts_ != nullptr;};
    void deleteTotalCounts() { this->totalCounts_ = nullptr;};
    inline int32_t getTotalCounts() const { DARABONBA_PTR_GET_DEFAULT(totalCounts_, 0) };
    inline ListMFADevicesForUserResponseBody& setTotalCounts(int32_t totalCounts) { DARABONBA_PTR_SET_VALUE(totalCounts_, totalCounts) };


  protected:
    // The MFA device list.
    shared_ptr<vector<ListMFADevicesForUserResponseBody::MFADevices>> MFADevices_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of MFA devices.
    shared_ptr<int32_t> totalCounts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
