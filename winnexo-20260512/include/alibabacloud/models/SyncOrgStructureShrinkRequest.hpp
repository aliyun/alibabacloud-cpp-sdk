// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCORGSTRUCTURESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCORGSTRUCTURESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class SyncOrgStructureShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncOrgStructureShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(corpId, corpId_);
      DARABONBA_PTR_TO_JSON(departments, departmentsShrink_);
      DARABONBA_PTR_TO_JSON(members, membersShrink_);
      DARABONBA_PTR_TO_JSON(platformType, platformType_);
      DARABONBA_PTR_TO_JSON(ssoSettingsId, ssoSettingsId_);
      DARABONBA_PTR_TO_JSON(syncMembers, syncMembers_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, SyncOrgStructureShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(corpId, corpId_);
      DARABONBA_PTR_FROM_JSON(departments, departmentsShrink_);
      DARABONBA_PTR_FROM_JSON(members, membersShrink_);
      DARABONBA_PTR_FROM_JSON(platformType, platformType_);
      DARABONBA_PTR_FROM_JSON(ssoSettingsId, ssoSettingsId_);
      DARABONBA_PTR_FROM_JSON(syncMembers, syncMembers_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    SyncOrgStructureShrinkRequest() = default ;
    SyncOrgStructureShrinkRequest(const SyncOrgStructureShrinkRequest &) = default ;
    SyncOrgStructureShrinkRequest(SyncOrgStructureShrinkRequest &&) = default ;
    SyncOrgStructureShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncOrgStructureShrinkRequest() = default ;
    SyncOrgStructureShrinkRequest& operator=(const SyncOrgStructureShrinkRequest &) = default ;
    SyncOrgStructureShrinkRequest& operator=(SyncOrgStructureShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->corpId_ == nullptr
        && this->departmentsShrink_ == nullptr && this->membersShrink_ == nullptr && this->platformType_ == nullptr && this->ssoSettingsId_ == nullptr && this->syncMembers_ == nullptr
        && this->tenantId_ == nullptr; };
    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline SyncOrgStructureShrinkRequest& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // departmentsShrink Field Functions 
    bool hasDepartmentsShrink() const { return this->departmentsShrink_ != nullptr;};
    void deleteDepartmentsShrink() { this->departmentsShrink_ = nullptr;};
    inline string getDepartmentsShrink() const { DARABONBA_PTR_GET_DEFAULT(departmentsShrink_, "") };
    inline SyncOrgStructureShrinkRequest& setDepartmentsShrink(string departmentsShrink) { DARABONBA_PTR_SET_VALUE(departmentsShrink_, departmentsShrink) };


    // membersShrink Field Functions 
    bool hasMembersShrink() const { return this->membersShrink_ != nullptr;};
    void deleteMembersShrink() { this->membersShrink_ = nullptr;};
    inline string getMembersShrink() const { DARABONBA_PTR_GET_DEFAULT(membersShrink_, "") };
    inline SyncOrgStructureShrinkRequest& setMembersShrink(string membersShrink) { DARABONBA_PTR_SET_VALUE(membersShrink_, membersShrink) };


    // platformType Field Functions 
    bool hasPlatformType() const { return this->platformType_ != nullptr;};
    void deletePlatformType() { this->platformType_ = nullptr;};
    inline string getPlatformType() const { DARABONBA_PTR_GET_DEFAULT(platformType_, "") };
    inline SyncOrgStructureShrinkRequest& setPlatformType(string platformType) { DARABONBA_PTR_SET_VALUE(platformType_, platformType) };


    // ssoSettingsId Field Functions 
    bool hasSsoSettingsId() const { return this->ssoSettingsId_ != nullptr;};
    void deleteSsoSettingsId() { this->ssoSettingsId_ = nullptr;};
    inline string getSsoSettingsId() const { DARABONBA_PTR_GET_DEFAULT(ssoSettingsId_, "") };
    inline SyncOrgStructureShrinkRequest& setSsoSettingsId(string ssoSettingsId) { DARABONBA_PTR_SET_VALUE(ssoSettingsId_, ssoSettingsId) };


    // syncMembers Field Functions 
    bool hasSyncMembers() const { return this->syncMembers_ != nullptr;};
    void deleteSyncMembers() { this->syncMembers_ = nullptr;};
    inline bool getSyncMembers() const { DARABONBA_PTR_GET_DEFAULT(syncMembers_, false) };
    inline SyncOrgStructureShrinkRequest& setSyncMembers(bool syncMembers) { DARABONBA_PTR_SET_VALUE(syncMembers_, syncMembers) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline SyncOrgStructureShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The enterprise identifier. This value must match the corpId returned by listAvailableConfigs.
    // 
    // This parameter is required.
    shared_ptr<string> corpId_ {};
    // The department list. At least one root department must be included.
    // 
    // This parameter is required.
    shared_ptr<string> departmentsShrink_ {};
    // The member list. This parameter is required when syncMembers is set to true.
    shared_ptr<string> membersShrink_ {};
    // The platform type. Valid values: saml, oauth2, or custom.
    // 
    // This parameter is required.
    shared_ptr<string> platformType_ {};
    // The SSO configuration ID. For SAML/OAuth2, this parameter is optional. If not specified, the value is automatically derived based on corpId. If multiple IdPs use the same corpId, you must explicitly specify this parameter. Otherwise, an AMBIGUOUS error is returned. This parameter is not required for custom.
    shared_ptr<string> ssoSettingsId_ {};
    // Specifies whether to synchronize member relationships. In custom mode, this parameter is forced to false.
    shared_ptr<bool> syncMembers_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
