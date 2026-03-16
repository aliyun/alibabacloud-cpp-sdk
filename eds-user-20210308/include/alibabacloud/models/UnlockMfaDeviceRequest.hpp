// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNLOCKMFADEVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNLOCKMFADEVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class UnlockMfaDeviceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnlockMfaDeviceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdDomain, adDomain_);
      DARABONBA_PTR_TO_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
    };
    friend void from_json(const Darabonba::Json& j, UnlockMfaDeviceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdDomain, adDomain_);
      DARABONBA_PTR_FROM_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
    };
    UnlockMfaDeviceRequest() = default ;
    UnlockMfaDeviceRequest(const UnlockMfaDeviceRequest &) = default ;
    UnlockMfaDeviceRequest(UnlockMfaDeviceRequest &&) = default ;
    UnlockMfaDeviceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnlockMfaDeviceRequest() = default ;
    UnlockMfaDeviceRequest& operator=(const UnlockMfaDeviceRequest &) = default ;
    UnlockMfaDeviceRequest& operator=(UnlockMfaDeviceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adDomain_ == nullptr
        && this->businessChannel_ == nullptr && this->serialNumber_ == nullptr; };
    // adDomain Field Functions 
    bool hasAdDomain() const { return this->adDomain_ != nullptr;};
    void deleteAdDomain() { this->adDomain_ = nullptr;};
    inline string getAdDomain() const { DARABONBA_PTR_GET_DEFAULT(adDomain_, "") };
    inline UnlockMfaDeviceRequest& setAdDomain(string adDomain) { DARABONBA_PTR_SET_VALUE(adDomain_, adDomain) };


    // businessChannel Field Functions 
    bool hasBusinessChannel() const { return this->businessChannel_ != nullptr;};
    void deleteBusinessChannel() { this->businessChannel_ = nullptr;};
    inline string getBusinessChannel() const { DARABONBA_PTR_GET_DEFAULT(businessChannel_, "") };
    inline UnlockMfaDeviceRequest& setBusinessChannel(string businessChannel) { DARABONBA_PTR_SET_VALUE(businessChannel_, businessChannel) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline UnlockMfaDeviceRequest& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


  protected:
    // The domain of the Active Directory (AD) workspace.
    shared_ptr<string> adDomain_ {};
    shared_ptr<string> businessChannel_ {};
    // The serial number of the virtual MFA device. The serial number is unique for each device.
    // 
    // This parameter is required.
    shared_ptr<string> serialNumber_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
