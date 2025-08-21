// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRTUALMFADEVICESRESPONSEBODYVIRTUALMFADEVICESVIRTUALMFADEVICEUSER_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRTUALMFADEVICESRESPONSEBODYVIRTUALMFADEVICESVIRTUALMFADEVICEUSER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser() = default ;
    ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser(const ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser &) = default ;
    ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser(ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser &&) = default ;
    ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser() = default ;
    ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser& operator=(const ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser &) = default ;
    ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser& operator=(ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->displayName_ != nullptr
        && this->userId_ != nullptr && this->userPrincipalName_ != nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string userPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    // The display name of the RAM user.
    std::shared_ptr<string> displayName_ = nullptr;
    // The ID of the RAM user.
    std::shared_ptr<string> userId_ = nullptr;
    // The logon name of the RAM user.
    std::shared_ptr<string> userPrincipalName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
