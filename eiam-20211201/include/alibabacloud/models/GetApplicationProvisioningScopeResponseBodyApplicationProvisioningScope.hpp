// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONPROVISIONINGSCOPERESPONSEBODYAPPLICATIONPROVISIONINGSCOPE_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONPROVISIONINGSCOPERESPONSEBODYAPPLICATIONPROVISIONINGSCOPE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope& obj) { 
      DARABONBA_PTR_TO_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_TO_JSON(MaxQuota, maxQuota_);
      DARABONBA_PTR_TO_JSON(OrganizationalUnitIds, organizationalUnitIds_);
      DARABONBA_PTR_TO_JSON(UsedQuota, usedQuota_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupIds, groupIds_);
      DARABONBA_PTR_FROM_JSON(MaxQuota, maxQuota_);
      DARABONBA_PTR_FROM_JSON(OrganizationalUnitIds, organizationalUnitIds_);
      DARABONBA_PTR_FROM_JSON(UsedQuota, usedQuota_);
    };
    GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope() = default ;
    GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope(const GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope &) = default ;
    GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope(GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope &&) = default ;
    GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope() = default ;
    GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope& operator=(const GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope &) = default ;
    GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope& operator=(GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupIds_ != nullptr
        && this->maxQuota_ != nullptr && this->organizationalUnitIds_ != nullptr && this->usedQuota_ != nullptr; };
    // groupIds Field Functions 
    bool hasGroupIds() const { return this->groupIds_ != nullptr;};
    void deleteGroupIds() { this->groupIds_ = nullptr;};
    inline const vector<string> & groupIds() const { DARABONBA_PTR_GET_CONST(groupIds_, vector<string>) };
    inline vector<string> groupIds() { DARABONBA_PTR_GET(groupIds_, vector<string>) };
    inline GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope& setGroupIds(const vector<string> & groupIds) { DARABONBA_PTR_SET_VALUE(groupIds_, groupIds) };
    inline GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope& setGroupIds(vector<string> && groupIds) { DARABONBA_PTR_SET_RVALUE(groupIds_, groupIds) };


    // maxQuota Field Functions 
    bool hasMaxQuota() const { return this->maxQuota_ != nullptr;};
    void deleteMaxQuota() { this->maxQuota_ = nullptr;};
    inline int32_t maxQuota() const { DARABONBA_PTR_GET_DEFAULT(maxQuota_, 0) };
    inline GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope& setMaxQuota(int32_t maxQuota) { DARABONBA_PTR_SET_VALUE(maxQuota_, maxQuota) };


    // organizationalUnitIds Field Functions 
    bool hasOrganizationalUnitIds() const { return this->organizationalUnitIds_ != nullptr;};
    void deleteOrganizationalUnitIds() { this->organizationalUnitIds_ = nullptr;};
    inline const vector<string> & organizationalUnitIds() const { DARABONBA_PTR_GET_CONST(organizationalUnitIds_, vector<string>) };
    inline vector<string> organizationalUnitIds() { DARABONBA_PTR_GET(organizationalUnitIds_, vector<string>) };
    inline GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope& setOrganizationalUnitIds(const vector<string> & organizationalUnitIds) { DARABONBA_PTR_SET_VALUE(organizationalUnitIds_, organizationalUnitIds) };
    inline GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope& setOrganizationalUnitIds(vector<string> && organizationalUnitIds) { DARABONBA_PTR_SET_RVALUE(organizationalUnitIds_, organizationalUnitIds) };


    // usedQuota Field Functions 
    bool hasUsedQuota() const { return this->usedQuota_ != nullptr;};
    void deleteUsedQuota() { this->usedQuota_ = nullptr;};
    inline int32_t usedQuota() const { DARABONBA_PTR_GET_DEFAULT(usedQuota_, 0) };
    inline GetApplicationProvisioningScopeResponseBodyApplicationProvisioningScope& setUsedQuota(int32_t usedQuota) { DARABONBA_PTR_SET_VALUE(usedQuota_, usedQuota) };


  protected:
    // Synchronize the list of authorized groups.
    std::shared_ptr<vector<string>> groupIds_ = nullptr;
    // Instance Indicates the maximum quota number of authorized agents.
    std::shared_ptr<int32_t> maxQuota_ = nullptr;
    // The list of organizational units that are authorized for account synchronization.
    std::shared_ptr<vector<string>> organizationalUnitIds_ = nullptr;
    // Indicates the quota number of used authorized agents.
    std::shared_ptr<int32_t> usedQuota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
