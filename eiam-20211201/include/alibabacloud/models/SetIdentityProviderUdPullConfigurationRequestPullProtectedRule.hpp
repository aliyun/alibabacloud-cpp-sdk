// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETIDENTITYPROVIDERUDPULLCONFIGURATIONREQUESTPULLPROTECTEDRULE_HPP_
#define ALIBABACLOUD_MODELS_SETIDENTITYPROVIDERUDPULLCONFIGURATIONREQUESTPULLPROTECTEDRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetIdentityProviderUdPullConfigurationRequestPullProtectedRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetIdentityProviderUdPullConfigurationRequestPullProtectedRule& obj) { 
      DARABONBA_PTR_TO_JSON(GroupDeletedThreshold, groupDeletedThreshold_);
      DARABONBA_PTR_TO_JSON(OrganizationalUnitDeletedThreshold, organizationalUnitDeletedThreshold_);
      DARABONBA_PTR_TO_JSON(UserDeletedThreshold, userDeletedThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, SetIdentityProviderUdPullConfigurationRequestPullProtectedRule& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupDeletedThreshold, groupDeletedThreshold_);
      DARABONBA_PTR_FROM_JSON(OrganizationalUnitDeletedThreshold, organizationalUnitDeletedThreshold_);
      DARABONBA_PTR_FROM_JSON(UserDeletedThreshold, userDeletedThreshold_);
    };
    SetIdentityProviderUdPullConfigurationRequestPullProtectedRule() = default ;
    SetIdentityProviderUdPullConfigurationRequestPullProtectedRule(const SetIdentityProviderUdPullConfigurationRequestPullProtectedRule &) = default ;
    SetIdentityProviderUdPullConfigurationRequestPullProtectedRule(SetIdentityProviderUdPullConfigurationRequestPullProtectedRule &&) = default ;
    SetIdentityProviderUdPullConfigurationRequestPullProtectedRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetIdentityProviderUdPullConfigurationRequestPullProtectedRule() = default ;
    SetIdentityProviderUdPullConfigurationRequestPullProtectedRule& operator=(const SetIdentityProviderUdPullConfigurationRequestPullProtectedRule &) = default ;
    SetIdentityProviderUdPullConfigurationRequestPullProtectedRule& operator=(SetIdentityProviderUdPullConfigurationRequestPullProtectedRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupDeletedThreshold_ != nullptr
        && this->organizationalUnitDeletedThreshold_ != nullptr && this->userDeletedThreshold_ != nullptr; };
    // groupDeletedThreshold Field Functions 
    bool hasGroupDeletedThreshold() const { return this->groupDeletedThreshold_ != nullptr;};
    void deleteGroupDeletedThreshold() { this->groupDeletedThreshold_ = nullptr;};
    inline int32_t groupDeletedThreshold() const { DARABONBA_PTR_GET_DEFAULT(groupDeletedThreshold_, 0) };
    inline SetIdentityProviderUdPullConfigurationRequestPullProtectedRule& setGroupDeletedThreshold(int32_t groupDeletedThreshold) { DARABONBA_PTR_SET_VALUE(groupDeletedThreshold_, groupDeletedThreshold) };


    // organizationalUnitDeletedThreshold Field Functions 
    bool hasOrganizationalUnitDeletedThreshold() const { return this->organizationalUnitDeletedThreshold_ != nullptr;};
    void deleteOrganizationalUnitDeletedThreshold() { this->organizationalUnitDeletedThreshold_ = nullptr;};
    inline int32_t organizationalUnitDeletedThreshold() const { DARABONBA_PTR_GET_DEFAULT(organizationalUnitDeletedThreshold_, 0) };
    inline SetIdentityProviderUdPullConfigurationRequestPullProtectedRule& setOrganizationalUnitDeletedThreshold(int32_t organizationalUnitDeletedThreshold) { DARABONBA_PTR_SET_VALUE(organizationalUnitDeletedThreshold_, organizationalUnitDeletedThreshold) };


    // userDeletedThreshold Field Functions 
    bool hasUserDeletedThreshold() const { return this->userDeletedThreshold_ != nullptr;};
    void deleteUserDeletedThreshold() { this->userDeletedThreshold_ = nullptr;};
    inline int32_t userDeletedThreshold() const { DARABONBA_PTR_GET_DEFAULT(userDeletedThreshold_, 0) };
    inline SetIdentityProviderUdPullConfigurationRequestPullProtectedRule& setUserDeletedThreshold(int32_t userDeletedThreshold) { DARABONBA_PTR_SET_VALUE(userDeletedThreshold_, userDeletedThreshold) };


  protected:
    // Group deleted threshold
    std::shared_ptr<int32_t> groupDeletedThreshold_ = nullptr;
    // OrganizationalUnit deleted threshold
    std::shared_ptr<int32_t> organizationalUnitDeletedThreshold_ = nullptr;
    // User deleted threshold
    std::shared_ptr<int32_t> userDeletedThreshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
