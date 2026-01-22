// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVERIFICATIONINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVERIFICATIONINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetVerificationInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVerificationInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityEmailDevice, securityEmailDevice_);
      DARABONBA_PTR_TO_JSON(SecurityPhoneDevice, securityPhoneDevice_);
    };
    friend void from_json(const Darabonba::Json& j, GetVerificationInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityEmailDevice, securityEmailDevice_);
      DARABONBA_PTR_FROM_JSON(SecurityPhoneDevice, securityPhoneDevice_);
    };
    GetVerificationInfoResponseBody() = default ;
    GetVerificationInfoResponseBody(const GetVerificationInfoResponseBody &) = default ;
    GetVerificationInfoResponseBody(GetVerificationInfoResponseBody &&) = default ;
    GetVerificationInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVerificationInfoResponseBody() = default ;
    GetVerificationInfoResponseBody& operator=(const GetVerificationInfoResponseBody &) = default ;
    GetVerificationInfoResponseBody& operator=(GetVerificationInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityPhoneDevice : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityPhoneDevice& obj) { 
        DARABONBA_PTR_TO_JSON(AreaCode, areaCode_);
        DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityPhoneDevice& obj) { 
        DARABONBA_PTR_FROM_JSON(AreaCode, areaCode_);
        DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      SecurityPhoneDevice() = default ;
      SecurityPhoneDevice(const SecurityPhoneDevice &) = default ;
      SecurityPhoneDevice(SecurityPhoneDevice &&) = default ;
      SecurityPhoneDevice(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityPhoneDevice() = default ;
      SecurityPhoneDevice& operator=(const SecurityPhoneDevice &) = default ;
      SecurityPhoneDevice& operator=(SecurityPhoneDevice &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->areaCode_ == nullptr
        && this->phoneNumber_ == nullptr && this->status_ == nullptr; };
      // areaCode Field Functions 
      bool hasAreaCode() const { return this->areaCode_ != nullptr;};
      void deleteAreaCode() { this->areaCode_ = nullptr;};
      inline string getAreaCode() const { DARABONBA_PTR_GET_DEFAULT(areaCode_, "") };
      inline SecurityPhoneDevice& setAreaCode(string areaCode) { DARABONBA_PTR_SET_VALUE(areaCode_, areaCode) };


      // phoneNumber Field Functions 
      bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
      void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
      inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
      inline SecurityPhoneDevice& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SecurityPhoneDevice& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The international dialing code.
      shared_ptr<string> areaCode_ {};
      // The mobile phone number.
      shared_ptr<string> phoneNumber_ {};
      // The status of the mobile phone. Valid values:
      // 
      // *   active: The mobile phone is activated.
      // *   pending: The mobile phone is pending for activation.
      shared_ptr<string> status_ {};
    };

    class SecurityEmailDevice : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityEmailDevice& obj) { 
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityEmailDevice& obj) { 
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      SecurityEmailDevice() = default ;
      SecurityEmailDevice(const SecurityEmailDevice &) = default ;
      SecurityEmailDevice(SecurityEmailDevice &&) = default ;
      SecurityEmailDevice(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityEmailDevice() = default ;
      SecurityEmailDevice& operator=(const SecurityEmailDevice &) = default ;
      SecurityEmailDevice& operator=(SecurityEmailDevice &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->email_ == nullptr
        && this->status_ == nullptr; };
      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline SecurityEmailDevice& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline SecurityEmailDevice& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The email address.
      shared_ptr<string> email_ {};
      // The status of the email. Valid values:
      // 
      // *   active: The email is activated.
      // *   pending: The email is pending for activation.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->securityEmailDevice_ == nullptr && this->securityPhoneDevice_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVerificationInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityEmailDevice Field Functions 
    bool hasSecurityEmailDevice() const { return this->securityEmailDevice_ != nullptr;};
    void deleteSecurityEmailDevice() { this->securityEmailDevice_ = nullptr;};
    inline const GetVerificationInfoResponseBody::SecurityEmailDevice & getSecurityEmailDevice() const { DARABONBA_PTR_GET_CONST(securityEmailDevice_, GetVerificationInfoResponseBody::SecurityEmailDevice) };
    inline GetVerificationInfoResponseBody::SecurityEmailDevice getSecurityEmailDevice() { DARABONBA_PTR_GET(securityEmailDevice_, GetVerificationInfoResponseBody::SecurityEmailDevice) };
    inline GetVerificationInfoResponseBody& setSecurityEmailDevice(const GetVerificationInfoResponseBody::SecurityEmailDevice & securityEmailDevice) { DARABONBA_PTR_SET_VALUE(securityEmailDevice_, securityEmailDevice) };
    inline GetVerificationInfoResponseBody& setSecurityEmailDevice(GetVerificationInfoResponseBody::SecurityEmailDevice && securityEmailDevice) { DARABONBA_PTR_SET_RVALUE(securityEmailDevice_, securityEmailDevice) };


    // securityPhoneDevice Field Functions 
    bool hasSecurityPhoneDevice() const { return this->securityPhoneDevice_ != nullptr;};
    void deleteSecurityPhoneDevice() { this->securityPhoneDevice_ = nullptr;};
    inline const GetVerificationInfoResponseBody::SecurityPhoneDevice & getSecurityPhoneDevice() const { DARABONBA_PTR_GET_CONST(securityPhoneDevice_, GetVerificationInfoResponseBody::SecurityPhoneDevice) };
    inline GetVerificationInfoResponseBody::SecurityPhoneDevice getSecurityPhoneDevice() { DARABONBA_PTR_GET(securityPhoneDevice_, GetVerificationInfoResponseBody::SecurityPhoneDevice) };
    inline GetVerificationInfoResponseBody& setSecurityPhoneDevice(const GetVerificationInfoResponseBody::SecurityPhoneDevice & securityPhoneDevice) { DARABONBA_PTR_SET_VALUE(securityPhoneDevice_, securityPhoneDevice) };
    inline GetVerificationInfoResponseBody& setSecurityPhoneDevice(GetVerificationInfoResponseBody::SecurityPhoneDevice && securityPhoneDevice) { DARABONBA_PTR_SET_RVALUE(securityPhoneDevice_, securityPhoneDevice) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the email.
    shared_ptr<GetVerificationInfoResponseBody::SecurityEmailDevice> securityEmailDevice_ {};
    // The information about the mobile phone.
    shared_ptr<GetVerificationInfoResponseBody::SecurityPhoneDevice> securityPhoneDevice_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
