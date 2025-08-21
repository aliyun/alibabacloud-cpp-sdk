// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRTUALMFADEVICESRESPONSEBODYVIRTUALMFADEVICESVIRTUALMFADEVICE_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRTUALMFADEVICESRESPONSEBODYVIRTUALMFADEVICESVIRTUALMFADEVICE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice& obj) { 
      DARABONBA_PTR_TO_JSON(ActivateDate, activateDate_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice& obj) { 
      DARABONBA_PTR_FROM_JSON(ActivateDate, activateDate_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice() = default ;
    ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice(const ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice &) = default ;
    ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice(ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice &&) = default ;
    ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice() = default ;
    ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice& operator=(const ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice &) = default ;
    ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice& operator=(ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activateDate_ != nullptr
        && this->serialNumber_ != nullptr && this->user_ != nullptr; };
    // activateDate Field Functions 
    bool hasActivateDate() const { return this->activateDate_ != nullptr;};
    void deleteActivateDate() { this->activateDate_ = nullptr;};
    inline string activateDate() const { DARABONBA_PTR_GET_DEFAULT(activateDate_, "") };
    inline ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice& setActivateDate(string activateDate) { DARABONBA_PTR_SET_VALUE(activateDate_, activateDate) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const Models::ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser & user() const { DARABONBA_PTR_GET_CONST(user_, Models::ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser) };
    inline Models::ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser user() { DARABONBA_PTR_GET(user_, Models::ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser) };
    inline ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice& setUser(const Models::ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice& setUser(Models::ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    // The time when the MFA device was activated.
    std::shared_ptr<string> activateDate_ = nullptr;
    // The serial number of the MFA device.
    std::shared_ptr<string> serialNumber_ = nullptr;
    // The information of the RAM user that has an MFA device bound.
    std::shared_ptr<Models::ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
