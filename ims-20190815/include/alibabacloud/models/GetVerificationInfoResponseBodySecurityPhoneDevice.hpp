// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVERIFICATIONINFORESPONSEBODYSECURITYPHONEDEVICE_HPP_
#define ALIBABACLOUD_MODELS_GETVERIFICATIONINFORESPONSEBODYSECURITYPHONEDEVICE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetVerificationInfoResponseBodySecurityPhoneDevice : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVerificationInfoResponseBodySecurityPhoneDevice& obj) { 
      DARABONBA_PTR_TO_JSON(AreaCode, areaCode_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetVerificationInfoResponseBodySecurityPhoneDevice& obj) { 
      DARABONBA_PTR_FROM_JSON(AreaCode, areaCode_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetVerificationInfoResponseBodySecurityPhoneDevice() = default ;
    GetVerificationInfoResponseBodySecurityPhoneDevice(const GetVerificationInfoResponseBodySecurityPhoneDevice &) = default ;
    GetVerificationInfoResponseBodySecurityPhoneDevice(GetVerificationInfoResponseBodySecurityPhoneDevice &&) = default ;
    GetVerificationInfoResponseBodySecurityPhoneDevice(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVerificationInfoResponseBodySecurityPhoneDevice() = default ;
    GetVerificationInfoResponseBodySecurityPhoneDevice& operator=(const GetVerificationInfoResponseBodySecurityPhoneDevice &) = default ;
    GetVerificationInfoResponseBodySecurityPhoneDevice& operator=(GetVerificationInfoResponseBodySecurityPhoneDevice &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->areaCode_ != nullptr
        && this->phoneNumber_ != nullptr && this->status_ != nullptr; };
    // areaCode Field Functions 
    bool hasAreaCode() const { return this->areaCode_ != nullptr;};
    void deleteAreaCode() { this->areaCode_ = nullptr;};
    inline string areaCode() const { DARABONBA_PTR_GET_DEFAULT(areaCode_, "") };
    inline GetVerificationInfoResponseBodySecurityPhoneDevice& setAreaCode(string areaCode) { DARABONBA_PTR_SET_VALUE(areaCode_, areaCode) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string phoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline GetVerificationInfoResponseBodySecurityPhoneDevice& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetVerificationInfoResponseBodySecurityPhoneDevice& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The international dialing code.
    std::shared_ptr<string> areaCode_ = nullptr;
    // The mobile phone number.
    std::shared_ptr<string> phoneNumber_ = nullptr;
    // The status of the mobile phone. Valid values:
    // 
    // *   active: The mobile phone is activated.
    // *   pending: The mobile phone is pending for activation.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
