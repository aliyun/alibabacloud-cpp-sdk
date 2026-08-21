// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCORGSTRUCTUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCORGSTRUCTUREREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class SyncOrgStructureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncOrgStructureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(corpId, corpId_);
      DARABONBA_PTR_TO_JSON(departments, departments_);
      DARABONBA_PTR_TO_JSON(members, members_);
      DARABONBA_PTR_TO_JSON(platformType, platformType_);
      DARABONBA_PTR_TO_JSON(ssoSettingsId, ssoSettingsId_);
      DARABONBA_PTR_TO_JSON(syncMembers, syncMembers_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, SyncOrgStructureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(corpId, corpId_);
      DARABONBA_PTR_FROM_JSON(departments, departments_);
      DARABONBA_PTR_FROM_JSON(members, members_);
      DARABONBA_PTR_FROM_JSON(platformType, platformType_);
      DARABONBA_PTR_FROM_JSON(ssoSettingsId, ssoSettingsId_);
      DARABONBA_PTR_FROM_JSON(syncMembers, syncMembers_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    SyncOrgStructureRequest() = default ;
    SyncOrgStructureRequest(const SyncOrgStructureRequest &) = default ;
    SyncOrgStructureRequest(SyncOrgStructureRequest &&) = default ;
    SyncOrgStructureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncOrgStructureRequest() = default ;
    SyncOrgStructureRequest& operator=(const SyncOrgStructureRequest &) = default ;
    SyncOrgStructureRequest& operator=(SyncOrgStructureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Members : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Members& obj) { 
        DARABONBA_PTR_TO_JSON(accountId, accountId_);
        DARABONBA_PTR_TO_JSON(deptId, deptId_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Members& obj) { 
        DARABONBA_PTR_FROM_JSON(accountId, accountId_);
        DARABONBA_PTR_FROM_JSON(deptId, deptId_);
        DARABONBA_PTR_FROM_JSON(name, name_);
      };
      Members() = default ;
      Members(const Members &) = default ;
      Members(Members &&) = default ;
      Members(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Members() = default ;
      Members& operator=(const Members &) = default ;
      Members& operator=(Members &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->deptId_ == nullptr && this->name_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Members& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // deptId Field Functions 
      bool hasDeptId() const { return this->deptId_ != nullptr;};
      void deleteDeptId() { this->deptId_ = nullptr;};
      inline string getDeptId() const { DARABONBA_PTR_GET_DEFAULT(deptId_, "") };
      inline Members& setDeptId(string deptId) { DARABONBA_PTR_SET_VALUE(deptId_, deptId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Members& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The user identifier. In the SAML scenario, this is an email address or UPN, which must match rbj_user_account.account_id.
      shared_ptr<string> accountId_ {};
      // The department ID to which the member belongs. This value must correspond to a deptId in the departments list.
      shared_ptr<string> deptId_ {};
      // The username for display purposes. This parameter is optional.
      shared_ptr<string> name_ {};
    };

    class Departments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Departments& obj) { 
        DARABONBA_PTR_TO_JSON(deptId, deptId_);
        DARABONBA_PTR_TO_JSON(deptName, deptName_);
        DARABONBA_PTR_TO_JSON(order, order_);
        DARABONBA_PTR_TO_JSON(parentDeptId, parentDeptId_);
      };
      friend void from_json(const Darabonba::Json& j, Departments& obj) { 
        DARABONBA_PTR_FROM_JSON(deptId, deptId_);
        DARABONBA_PTR_FROM_JSON(deptName, deptName_);
        DARABONBA_PTR_FROM_JSON(order, order_);
        DARABONBA_PTR_FROM_JSON(parentDeptId, parentDeptId_);
      };
      Departments() = default ;
      Departments(const Departments &) = default ;
      Departments(Departments &&) = default ;
      Departments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Departments() = default ;
      Departments& operator=(const Departments &) = default ;
      Departments& operator=(Departments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deptId_ == nullptr
        && this->deptName_ == nullptr && this->order_ == nullptr && this->parentDeptId_ == nullptr; };
      // deptId Field Functions 
      bool hasDeptId() const { return this->deptId_ != nullptr;};
      void deleteDeptId() { this->deptId_ = nullptr;};
      inline string getDeptId() const { DARABONBA_PTR_GET_DEFAULT(deptId_, "") };
      inline Departments& setDeptId(string deptId) { DARABONBA_PTR_SET_VALUE(deptId_, deptId) };


      // deptName Field Functions 
      bool hasDeptName() const { return this->deptName_ != nullptr;};
      void deleteDeptName() { this->deptName_ = nullptr;};
      inline string getDeptName() const { DARABONBA_PTR_GET_DEFAULT(deptName_, "") };
      inline Departments& setDeptName(string deptName) { DARABONBA_PTR_SET_VALUE(deptName_, deptName) };


      // order Field Functions 
      bool hasOrder() const { return this->order_ != nullptr;};
      void deleteOrder() { this->order_ = nullptr;};
      inline int64_t getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, 0L) };
      inline Departments& setOrder(int64_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


      // parentDeptId Field Functions 
      bool hasParentDeptId() const { return this->parentDeptId_ != nullptr;};
      void deleteParentDeptId() { this->parentDeptId_ = nullptr;};
      inline string getParentDeptId() const { DARABONBA_PTR_GET_DEFAULT(parentDeptId_, "") };
      inline Departments& setParentDeptId(string parentDeptId) { DARABONBA_PTR_SET_VALUE(parentDeptId_, parentDeptId) };


    protected:
      // The department ID. This is an external identifier. The client is responsible for ensuring uniqueness.
      shared_ptr<string> deptId_ {};
      // The department name.
      shared_ptr<string> deptName_ {};
      // The sort order. A smaller value indicates a higher priority.
      shared_ptr<int64_t> order_ {};
      // The parent department ID. A value of null indicates a top-level department or root department.
      shared_ptr<string> parentDeptId_ {};
    };

    virtual bool empty() const override { return this->corpId_ == nullptr
        && this->departments_ == nullptr && this->members_ == nullptr && this->platformType_ == nullptr && this->ssoSettingsId_ == nullptr && this->syncMembers_ == nullptr
        && this->tenantId_ == nullptr; };
    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline SyncOrgStructureRequest& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // departments Field Functions 
    bool hasDepartments() const { return this->departments_ != nullptr;};
    void deleteDepartments() { this->departments_ = nullptr;};
    inline const vector<SyncOrgStructureRequest::Departments> & getDepartments() const { DARABONBA_PTR_GET_CONST(departments_, vector<SyncOrgStructureRequest::Departments>) };
    inline vector<SyncOrgStructureRequest::Departments> getDepartments() { DARABONBA_PTR_GET(departments_, vector<SyncOrgStructureRequest::Departments>) };
    inline SyncOrgStructureRequest& setDepartments(const vector<SyncOrgStructureRequest::Departments> & departments) { DARABONBA_PTR_SET_VALUE(departments_, departments) };
    inline SyncOrgStructureRequest& setDepartments(vector<SyncOrgStructureRequest::Departments> && departments) { DARABONBA_PTR_SET_RVALUE(departments_, departments) };


    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<SyncOrgStructureRequest::Members> & getMembers() const { DARABONBA_PTR_GET_CONST(members_, vector<SyncOrgStructureRequest::Members>) };
    inline vector<SyncOrgStructureRequest::Members> getMembers() { DARABONBA_PTR_GET(members_, vector<SyncOrgStructureRequest::Members>) };
    inline SyncOrgStructureRequest& setMembers(const vector<SyncOrgStructureRequest::Members> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline SyncOrgStructureRequest& setMembers(vector<SyncOrgStructureRequest::Members> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // platformType Field Functions 
    bool hasPlatformType() const { return this->platformType_ != nullptr;};
    void deletePlatformType() { this->platformType_ = nullptr;};
    inline string getPlatformType() const { DARABONBA_PTR_GET_DEFAULT(platformType_, "") };
    inline SyncOrgStructureRequest& setPlatformType(string platformType) { DARABONBA_PTR_SET_VALUE(platformType_, platformType) };


    // ssoSettingsId Field Functions 
    bool hasSsoSettingsId() const { return this->ssoSettingsId_ != nullptr;};
    void deleteSsoSettingsId() { this->ssoSettingsId_ = nullptr;};
    inline string getSsoSettingsId() const { DARABONBA_PTR_GET_DEFAULT(ssoSettingsId_, "") };
    inline SyncOrgStructureRequest& setSsoSettingsId(string ssoSettingsId) { DARABONBA_PTR_SET_VALUE(ssoSettingsId_, ssoSettingsId) };


    // syncMembers Field Functions 
    bool hasSyncMembers() const { return this->syncMembers_ != nullptr;};
    void deleteSyncMembers() { this->syncMembers_ = nullptr;};
    inline bool getSyncMembers() const { DARABONBA_PTR_GET_DEFAULT(syncMembers_, false) };
    inline SyncOrgStructureRequest& setSyncMembers(bool syncMembers) { DARABONBA_PTR_SET_VALUE(syncMembers_, syncMembers) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline SyncOrgStructureRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The enterprise identifier. This value must match the corpId returned by listAvailableConfigs.
    // 
    // This parameter is required.
    shared_ptr<string> corpId_ {};
    // The department list. At least one root department must be included.
    // 
    // This parameter is required.
    shared_ptr<vector<SyncOrgStructureRequest::Departments>> departments_ {};
    // The member list. This parameter is required when syncMembers is set to true.
    shared_ptr<vector<SyncOrgStructureRequest::Members>> members_ {};
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
