// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDMFADEVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BINDMFADEVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class BindMFADeviceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindMFADeviceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthenticationCode1, authenticationCode1_);
      DARABONBA_PTR_TO_JSON(AuthenticationCode2, authenticationCode2_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, BindMFADeviceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthenticationCode1, authenticationCode1_);
      DARABONBA_PTR_FROM_JSON(AuthenticationCode2, authenticationCode2_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    BindMFADeviceRequest() = default ;
    BindMFADeviceRequest(const BindMFADeviceRequest &) = default ;
    BindMFADeviceRequest(BindMFADeviceRequest &&) = default ;
    BindMFADeviceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindMFADeviceRequest() = default ;
    BindMFADeviceRequest& operator=(const BindMFADeviceRequest &) = default ;
    BindMFADeviceRequest& operator=(BindMFADeviceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authenticationCode1_ == nullptr
        && this->authenticationCode2_ == nullptr && this->serialNumber_ == nullptr && this->userPrincipalName_ == nullptr; };
    // authenticationCode1 Field Functions 
    bool hasAuthenticationCode1() const { return this->authenticationCode1_ != nullptr;};
    void deleteAuthenticationCode1() { this->authenticationCode1_ = nullptr;};
    inline string getAuthenticationCode1() const { DARABONBA_PTR_GET_DEFAULT(authenticationCode1_, "") };
    inline BindMFADeviceRequest& setAuthenticationCode1(string authenticationCode1) { DARABONBA_PTR_SET_VALUE(authenticationCode1_, authenticationCode1) };


    // authenticationCode2 Field Functions 
    bool hasAuthenticationCode2() const { return this->authenticationCode2_ != nullptr;};
    void deleteAuthenticationCode2() { this->authenticationCode2_ = nullptr;};
    inline string getAuthenticationCode2() const { DARABONBA_PTR_GET_DEFAULT(authenticationCode2_, "") };
    inline BindMFADeviceRequest& setAuthenticationCode2(string authenticationCode2) { DARABONBA_PTR_SET_VALUE(authenticationCode2_, authenticationCode2) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline BindMFADeviceRequest& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string getUserPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline BindMFADeviceRequest& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    shared_ptr<string> authenticationCode1_ {};
    shared_ptr<string> authenticationCode2_ {};
    shared_ptr<string> serialNumber_ {};
    // This parameter is required.
    shared_ptr<string> userPrincipalName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
