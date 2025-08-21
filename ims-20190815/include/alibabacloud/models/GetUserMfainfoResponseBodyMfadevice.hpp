// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERMFAINFORESPONSEBODYMFADEVICE_HPP_
#define ALIBABACLOUD_MODELS_GETUSERMFAINFORESPONSEBODYMFADEVICE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetUserMFAInfoResponseBodyMFADevice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserMFAInfoResponseBodyMFADevice& obj) { 
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserMFAInfoResponseBodyMFADevice& obj) { 
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetUserMFAInfoResponseBodyMFADevice() = default ;
    GetUserMFAInfoResponseBodyMFADevice(const GetUserMFAInfoResponseBodyMFADevice &) = default ;
    GetUserMFAInfoResponseBodyMFADevice(GetUserMFAInfoResponseBodyMFADevice &&) = default ;
    GetUserMFAInfoResponseBodyMFADevice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserMFAInfoResponseBodyMFADevice() = default ;
    GetUserMFAInfoResponseBodyMFADevice& operator=(const GetUserMFAInfoResponseBodyMFADevice &) = default ;
    GetUserMFAInfoResponseBodyMFADevice& operator=(GetUserMFAInfoResponseBodyMFADevice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->serialNumber_ != nullptr
        && this->type_ != nullptr; };
    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline GetUserMFAInfoResponseBodyMFADevice& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetUserMFAInfoResponseBodyMFADevice& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The serial number of the MFA device.
    std::shared_ptr<string> serialNumber_ = nullptr;
    // The type of the MFA device. Valid values:
    // 
    // *   VMFA: virtual MFA device.
    // *   U2F: Universal 2nd Factor (U2F) security key.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
