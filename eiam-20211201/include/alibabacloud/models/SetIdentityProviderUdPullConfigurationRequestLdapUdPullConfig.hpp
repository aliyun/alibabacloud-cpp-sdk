// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETIDENTITYPROVIDERUDPULLCONFIGURATIONREQUESTLDAPUDPULLCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SETIDENTITYPROVIDERUDPULLCONFIGURATIONREQUESTLDAPUDPULLCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig& obj) { 
      DARABONBA_PTR_TO_JSON(GroupMemberAttributeName, groupMemberAttributeName_);
      DARABONBA_PTR_TO_JSON(GroupObjectClass, groupObjectClass_);
      DARABONBA_PTR_TO_JSON(GroupObjectClassCustomFilter, groupObjectClassCustomFilter_);
      DARABONBA_PTR_TO_JSON(OrganizationUnitObjectClass, organizationUnitObjectClass_);
      DARABONBA_PTR_TO_JSON(UserObjectClass, userObjectClass_);
      DARABONBA_PTR_TO_JSON(UserObjectClassCustomFilter, userObjectClassCustomFilter_);
    };
    friend void from_json(const Darabonba::Json& j, SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupMemberAttributeName, groupMemberAttributeName_);
      DARABONBA_PTR_FROM_JSON(GroupObjectClass, groupObjectClass_);
      DARABONBA_PTR_FROM_JSON(GroupObjectClassCustomFilter, groupObjectClassCustomFilter_);
      DARABONBA_PTR_FROM_JSON(OrganizationUnitObjectClass, organizationUnitObjectClass_);
      DARABONBA_PTR_FROM_JSON(UserObjectClass, userObjectClass_);
      DARABONBA_PTR_FROM_JSON(UserObjectClassCustomFilter, userObjectClassCustomFilter_);
    };
    SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig() = default ;
    SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig(const SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig &) = default ;
    SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig(SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig &&) = default ;
    SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig() = default ;
    SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig& operator=(const SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig &) = default ;
    SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig& operator=(SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupMemberAttributeName_ != nullptr
        && this->groupObjectClass_ != nullptr && this->groupObjectClassCustomFilter_ != nullptr && this->organizationUnitObjectClass_ != nullptr && this->userObjectClass_ != nullptr && this->userObjectClassCustomFilter_ != nullptr; };
    // groupMemberAttributeName Field Functions 
    bool hasGroupMemberAttributeName() const { return this->groupMemberAttributeName_ != nullptr;};
    void deleteGroupMemberAttributeName() { this->groupMemberAttributeName_ = nullptr;};
    inline string groupMemberAttributeName() const { DARABONBA_PTR_GET_DEFAULT(groupMemberAttributeName_, "") };
    inline SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig& setGroupMemberAttributeName(string groupMemberAttributeName) { DARABONBA_PTR_SET_VALUE(groupMemberAttributeName_, groupMemberAttributeName) };


    // groupObjectClass Field Functions 
    bool hasGroupObjectClass() const { return this->groupObjectClass_ != nullptr;};
    void deleteGroupObjectClass() { this->groupObjectClass_ = nullptr;};
    inline string groupObjectClass() const { DARABONBA_PTR_GET_DEFAULT(groupObjectClass_, "") };
    inline SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig& setGroupObjectClass(string groupObjectClass) { DARABONBA_PTR_SET_VALUE(groupObjectClass_, groupObjectClass) };


    // groupObjectClassCustomFilter Field Functions 
    bool hasGroupObjectClassCustomFilter() const { return this->groupObjectClassCustomFilter_ != nullptr;};
    void deleteGroupObjectClassCustomFilter() { this->groupObjectClassCustomFilter_ = nullptr;};
    inline string groupObjectClassCustomFilter() const { DARABONBA_PTR_GET_DEFAULT(groupObjectClassCustomFilter_, "") };
    inline SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig& setGroupObjectClassCustomFilter(string groupObjectClassCustomFilter) { DARABONBA_PTR_SET_VALUE(groupObjectClassCustomFilter_, groupObjectClassCustomFilter) };


    // organizationUnitObjectClass Field Functions 
    bool hasOrganizationUnitObjectClass() const { return this->organizationUnitObjectClass_ != nullptr;};
    void deleteOrganizationUnitObjectClass() { this->organizationUnitObjectClass_ = nullptr;};
    inline string organizationUnitObjectClass() const { DARABONBA_PTR_GET_DEFAULT(organizationUnitObjectClass_, "") };
    inline SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig& setOrganizationUnitObjectClass(string organizationUnitObjectClass) { DARABONBA_PTR_SET_VALUE(organizationUnitObjectClass_, organizationUnitObjectClass) };


    // userObjectClass Field Functions 
    bool hasUserObjectClass() const { return this->userObjectClass_ != nullptr;};
    void deleteUserObjectClass() { this->userObjectClass_ = nullptr;};
    inline string userObjectClass() const { DARABONBA_PTR_GET_DEFAULT(userObjectClass_, "") };
    inline SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig& setUserObjectClass(string userObjectClass) { DARABONBA_PTR_SET_VALUE(userObjectClass_, userObjectClass) };


    // userObjectClassCustomFilter Field Functions 
    bool hasUserObjectClassCustomFilter() const { return this->userObjectClassCustomFilter_ != nullptr;};
    void deleteUserObjectClassCustomFilter() { this->userObjectClassCustomFilter_ = nullptr;};
    inline string userObjectClassCustomFilter() const { DARABONBA_PTR_GET_DEFAULT(userObjectClassCustomFilter_, "") };
    inline SetIdentityProviderUdPullConfigurationRequestLdapUdPullConfig& setUserObjectClassCustomFilter(string userObjectClassCustomFilter) { DARABONBA_PTR_SET_VALUE(userObjectClassCustomFilter_, userObjectClassCustomFilter) };


  protected:
    // Group member attribute name
    std::shared_ptr<string> groupMemberAttributeName_ = nullptr;
    // GroupObjectClass
    std::shared_ptr<string> groupObjectClass_ = nullptr;
    // GroupObjectClass custom filter
    std::shared_ptr<string> groupObjectClassCustomFilter_ = nullptr;
    // OrganizationUnitObjectClass
    std::shared_ptr<string> organizationUnitObjectClass_ = nullptr;
    // UserObjectClass
    std::shared_ptr<string> userObjectClass_ = nullptr;
    // UserObjectClass custom filter
    std::shared_ptr<string> userObjectClassCustomFilter_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
