// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVERIFICATIONINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVERIFICATIONINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetVerificationInfoResponseBodySecurityEmailDevice.hpp>
#include <alibabacloud/models/GetVerificationInfoResponseBodySecurityPhoneDevice.hpp>
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
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->securityEmailDevice_ != nullptr && this->securityPhoneDevice_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVerificationInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityEmailDevice Field Functions 
    bool hasSecurityEmailDevice() const { return this->securityEmailDevice_ != nullptr;};
    void deleteSecurityEmailDevice() { this->securityEmailDevice_ = nullptr;};
    inline const GetVerificationInfoResponseBodySecurityEmailDevice & securityEmailDevice() const { DARABONBA_PTR_GET_CONST(securityEmailDevice_, GetVerificationInfoResponseBodySecurityEmailDevice) };
    inline GetVerificationInfoResponseBodySecurityEmailDevice securityEmailDevice() { DARABONBA_PTR_GET(securityEmailDevice_, GetVerificationInfoResponseBodySecurityEmailDevice) };
    inline GetVerificationInfoResponseBody& setSecurityEmailDevice(const GetVerificationInfoResponseBodySecurityEmailDevice & securityEmailDevice) { DARABONBA_PTR_SET_VALUE(securityEmailDevice_, securityEmailDevice) };
    inline GetVerificationInfoResponseBody& setSecurityEmailDevice(GetVerificationInfoResponseBodySecurityEmailDevice && securityEmailDevice) { DARABONBA_PTR_SET_RVALUE(securityEmailDevice_, securityEmailDevice) };


    // securityPhoneDevice Field Functions 
    bool hasSecurityPhoneDevice() const { return this->securityPhoneDevice_ != nullptr;};
    void deleteSecurityPhoneDevice() { this->securityPhoneDevice_ = nullptr;};
    inline const GetVerificationInfoResponseBodySecurityPhoneDevice & securityPhoneDevice() const { DARABONBA_PTR_GET_CONST(securityPhoneDevice_, GetVerificationInfoResponseBodySecurityPhoneDevice) };
    inline GetVerificationInfoResponseBodySecurityPhoneDevice securityPhoneDevice() { DARABONBA_PTR_GET(securityPhoneDevice_, GetVerificationInfoResponseBodySecurityPhoneDevice) };
    inline GetVerificationInfoResponseBody& setSecurityPhoneDevice(const GetVerificationInfoResponseBodySecurityPhoneDevice & securityPhoneDevice) { DARABONBA_PTR_SET_VALUE(securityPhoneDevice_, securityPhoneDevice) };
    inline GetVerificationInfoResponseBody& setSecurityPhoneDevice(GetVerificationInfoResponseBodySecurityPhoneDevice && securityPhoneDevice) { DARABONBA_PTR_SET_RVALUE(securityPhoneDevice_, securityPhoneDevice) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the email.
    std::shared_ptr<GetVerificationInfoResponseBodySecurityEmailDevice> securityEmailDevice_ = nullptr;
    // The information about the mobile phone.
    std::shared_ptr<GetVerificationInfoResponseBodySecurityPhoneDevice> securityPhoneDevice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
