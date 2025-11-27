// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMFADEVICESRESPONSEBODYMFADEVICESADUSER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMFADEVICESRESPONSEBODYMFADEVICESADUSER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeMfaDevicesResponseBodyMfaDevicesAdUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMfaDevicesResponseBodyMfaDevicesAdUser& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(DisplayNameNew, displayNameNew_);
      DARABONBA_PTR_TO_JSON(EndUser, endUser_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMfaDevicesResponseBodyMfaDevicesAdUser& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(DisplayNameNew, displayNameNew_);
      DARABONBA_PTR_FROM_JSON(EndUser, endUser_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    DescribeMfaDevicesResponseBodyMfaDevicesAdUser() = default ;
    DescribeMfaDevicesResponseBodyMfaDevicesAdUser(const DescribeMfaDevicesResponseBodyMfaDevicesAdUser &) = default ;
    DescribeMfaDevicesResponseBodyMfaDevicesAdUser(DescribeMfaDevicesResponseBodyMfaDevicesAdUser &&) = default ;
    DescribeMfaDevicesResponseBodyMfaDevicesAdUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMfaDevicesResponseBodyMfaDevicesAdUser() = default ;
    DescribeMfaDevicesResponseBodyMfaDevicesAdUser& operator=(const DescribeMfaDevicesResponseBodyMfaDevicesAdUser &) = default ;
    DescribeMfaDevicesResponseBodyMfaDevicesAdUser& operator=(DescribeMfaDevicesResponseBodyMfaDevicesAdUser &&) = default ;
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
    inline DescribeMfaDevicesResponseBodyMfaDevicesAdUser& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // displayNameNew Field Functions 
    bool hasDisplayNameNew() const { return this->displayNameNew_ != nullptr;};
    void deleteDisplayNameNew() { this->displayNameNew_ = nullptr;};
    inline string displayNameNew() const { DARABONBA_PTR_GET_DEFAULT(displayNameNew_, "") };
    inline DescribeMfaDevicesResponseBodyMfaDevicesAdUser& setDisplayNameNew(string displayNameNew) { DARABONBA_PTR_SET_VALUE(displayNameNew_, displayNameNew) };


    // endUser Field Functions 
    bool hasEndUser() const { return this->endUser_ != nullptr;};
    void deleteEndUser() { this->endUser_ = nullptr;};
    inline string endUser() const { DARABONBA_PTR_GET_DEFAULT(endUser_, "") };
    inline DescribeMfaDevicesResponseBodyMfaDevicesAdUser& setEndUser(string endUser) { DARABONBA_PTR_SET_VALUE(endUser_, endUser) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string userPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline DescribeMfaDevicesResponseBodyMfaDevicesAdUser& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> displayNameNew_ = nullptr;
    std::shared_ptr<string> endUser_ = nullptr;
    std::shared_ptr<string> userPrincipalName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
