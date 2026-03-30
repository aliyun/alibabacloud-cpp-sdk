// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERMFAINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERMFAINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetUserMFAInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserMFAInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsMFAEnable, isMFAEnable_);
      DARABONBA_PTR_TO_JSON(MFADevice, MFADevice_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserMFAInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsMFAEnable, isMFAEnable_);
      DARABONBA_PTR_FROM_JSON(MFADevice, MFADevice_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetUserMFAInfoResponseBody() = default ;
    GetUserMFAInfoResponseBody(const GetUserMFAInfoResponseBody &) = default ;
    GetUserMFAInfoResponseBody(GetUserMFAInfoResponseBody &&) = default ;
    GetUserMFAInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserMFAInfoResponseBody() = default ;
    GetUserMFAInfoResponseBody& operator=(const GetUserMFAInfoResponseBody &) = default ;
    GetUserMFAInfoResponseBody& operator=(GetUserMFAInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MFADevice : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MFADevice& obj) { 
        DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, MFADevice& obj) { 
        DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      MFADevice() = default ;
      MFADevice(const MFADevice &) = default ;
      MFADevice(MFADevice &&) = default ;
      MFADevice(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MFADevice() = default ;
      MFADevice& operator=(const MFADevice &) = default ;
      MFADevice& operator=(MFADevice &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->serialNumber_ == nullptr
        && this->type_ == nullptr; };
      // serialNumber Field Functions 
      bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
      void deleteSerialNumber() { this->serialNumber_ = nullptr;};
      inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
      inline MFADevice& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline MFADevice& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The serial number of the MFA device.
      shared_ptr<string> serialNumber_ {};
      // The type of the MFA device. Valid values:
      // 
      // *   VMFA: virtual MFA device.
      // *   U2F: Universal 2nd Factor (U2F) security key.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->isMFAEnable_ == nullptr
        && this->MFADevice_ == nullptr && this->requestId_ == nullptr; };
    // isMFAEnable Field Functions 
    bool hasIsMFAEnable() const { return this->isMFAEnable_ != nullptr;};
    void deleteIsMFAEnable() { this->isMFAEnable_ = nullptr;};
    inline bool getIsMFAEnable() const { DARABONBA_PTR_GET_DEFAULT(isMFAEnable_, false) };
    inline GetUserMFAInfoResponseBody& setIsMFAEnable(bool isMFAEnable) { DARABONBA_PTR_SET_VALUE(isMFAEnable_, isMFAEnable) };


    // MFADevice Field Functions 
    bool hasMFADevice() const { return this->MFADevice_ != nullptr;};
    void deleteMFADevice() { this->MFADevice_ = nullptr;};
    inline const GetUserMFAInfoResponseBody::MFADevice & getMFADevice() const { DARABONBA_PTR_GET_CONST(MFADevice_, GetUserMFAInfoResponseBody::MFADevice) };
    inline GetUserMFAInfoResponseBody::MFADevice getMFADevice() { DARABONBA_PTR_GET(MFADevice_, GetUserMFAInfoResponseBody::MFADevice) };
    inline GetUserMFAInfoResponseBody& setMFADevice(const GetUserMFAInfoResponseBody::MFADevice & mFADevice) { DARABONBA_PTR_SET_VALUE(MFADevice_, mFADevice) };
    inline GetUserMFAInfoResponseBody& setMFADevice(GetUserMFAInfoResponseBody::MFADevice && mFADevice) { DARABONBA_PTR_SET_RVALUE(MFADevice_, mFADevice) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserMFAInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether the MFA device is enabled. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> isMFAEnable_ {};
    // The information about the MFA device.
    shared_ptr<GetUserMFAInfoResponseBody::MFADevice> MFADevice_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
