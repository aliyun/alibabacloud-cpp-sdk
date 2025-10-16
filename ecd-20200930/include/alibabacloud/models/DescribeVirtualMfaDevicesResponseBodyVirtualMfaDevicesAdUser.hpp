// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVIRTUALMFADEVICESRESPONSEBODYVIRTUALMFADEVICESADUSER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVIRTUALMFADEVICESRESPONSEBODYVIRTUALMFADEVICESADUSER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeVirtualMFADevicesResponseBodyVirtualMFADevicesAdUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVirtualMFADevicesResponseBodyVirtualMFADevicesAdUser& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(DisplayNameNew, displayNameNew_);
      DARABONBA_PTR_TO_JSON(EndUser, endUser_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVirtualMFADevicesResponseBodyVirtualMFADevicesAdUser& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(DisplayNameNew, displayNameNew_);
      DARABONBA_PTR_FROM_JSON(EndUser, endUser_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    DescribeVirtualMFADevicesResponseBodyVirtualMFADevicesAdUser() = default ;
    DescribeVirtualMFADevicesResponseBodyVirtualMFADevicesAdUser(const DescribeVirtualMFADevicesResponseBodyVirtualMFADevicesAdUser &) = default ;
    DescribeVirtualMFADevicesResponseBodyVirtualMFADevicesAdUser(DescribeVirtualMFADevicesResponseBodyVirtualMFADevicesAdUser &&) = default ;
    DescribeVirtualMFADevicesResponseBodyVirtualMFADevicesAdUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVirtualMFADevicesResponseBodyVirtualMFADevicesAdUser() = default ;
    DescribeVirtualMFADevicesResponseBodyVirtualMFADevicesAdUser& operator=(const DescribeVirtualMFADevicesResponseBodyVirtualMFADevicesAdUser &) = default ;
    DescribeVirtualMFADevicesResponseBodyVirtualMFADevicesAdUser& operator=(DescribeVirtualMFADevicesResponseBodyVirtualMFADevicesAdUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && return this->displayNameNew_ == nullptr && return this->endUser_ == nullptr && return this->userPrincipalName_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DescribeVirtualMFADevicesResponseBodyVirtualMFADevicesAdUser& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // displayNameNew Field Functions 
    bool hasDisplayNameNew() const { return this->displayNameNew_ != nullptr;};
    void deleteDisplayNameNew() { this->displayNameNew_ = nullptr;};
    inline string displayNameNew() const { DARABONBA_PTR_GET_DEFAULT(displayNameNew_, "") };
    inline DescribeVirtualMFADevicesResponseBodyVirtualMFADevicesAdUser& setDisplayNameNew(string displayNameNew) { DARABONBA_PTR_SET_VALUE(displayNameNew_, displayNameNew) };


    // endUser Field Functions 
    bool hasEndUser() const { return this->endUser_ != nullptr;};
    void deleteEndUser() { this->endUser_ = nullptr;};
    inline string endUser() const { DARABONBA_PTR_GET_DEFAULT(endUser_, "") };
    inline DescribeVirtualMFADevicesResponseBodyVirtualMFADevicesAdUser& setEndUser(string endUser) { DARABONBA_PTR_SET_VALUE(endUser_, endUser) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string userPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline DescribeVirtualMFADevicesResponseBodyVirtualMFADevicesAdUser& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> displayNameNew_ = nullptr;
    std::shared_ptr<string> endUser_ = nullptr;
    std::shared_ptr<string> userPrincipalName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
