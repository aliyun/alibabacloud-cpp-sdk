// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CMSV1MIGRATIONADMISSION_HPP_
#define ALIBABACLOUD_MODELS_CMSV1MIGRATIONADMISSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CmsV1MigrationAdmission : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CmsV1MigrationAdmission& obj) { 
      DARABONBA_PTR_TO_JSON(newMigrationAllowed, newMigrationAllowed_);
      DARABONBA_PTR_TO_JSON(policyRevision, policyRevision_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, CmsV1MigrationAdmission& obj) { 
      DARABONBA_PTR_FROM_JSON(newMigrationAllowed, newMigrationAllowed_);
      DARABONBA_PTR_FROM_JSON(policyRevision, policyRevision_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
    };
    CmsV1MigrationAdmission() = default ;
    CmsV1MigrationAdmission(const CmsV1MigrationAdmission &) = default ;
    CmsV1MigrationAdmission(CmsV1MigrationAdmission &&) = default ;
    CmsV1MigrationAdmission(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CmsV1MigrationAdmission() = default ;
    CmsV1MigrationAdmission& operator=(const CmsV1MigrationAdmission &) = default ;
    CmsV1MigrationAdmission& operator=(CmsV1MigrationAdmission &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newMigrationAllowed_ == nullptr
        && this->policyRevision_ == nullptr && this->reason_ == nullptr; };
    // newMigrationAllowed Field Functions 
    bool hasNewMigrationAllowed() const { return this->newMigrationAllowed_ != nullptr;};
    void deleteNewMigrationAllowed() { this->newMigrationAllowed_ = nullptr;};
    inline bool getNewMigrationAllowed() const { DARABONBA_PTR_GET_DEFAULT(newMigrationAllowed_, false) };
    inline CmsV1MigrationAdmission& setNewMigrationAllowed(bool newMigrationAllowed) { DARABONBA_PTR_SET_VALUE(newMigrationAllowed_, newMigrationAllowed) };


    // policyRevision Field Functions 
    bool hasPolicyRevision() const { return this->policyRevision_ != nullptr;};
    void deletePolicyRevision() { this->policyRevision_ = nullptr;};
    inline string getPolicyRevision() const { DARABONBA_PTR_GET_DEFAULT(policyRevision_, "") };
    inline CmsV1MigrationAdmission& setPolicyRevision(string policyRevision) { DARABONBA_PTR_SET_VALUE(policyRevision_, policyRevision) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline CmsV1MigrationAdmission& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // The real-time new migration eligibility evaluated for the current target primary account, which does not replace RAM, account ownership, or workspace validations.
    shared_ptr<bool> newMigrationAllowed_ {};
    // The summary of the normalized policy, which excludes the UID list and is not an authorization credential.
    shared_ptr<string> policyRevision_ {};
    // The reason why the new migration is denied. CMSV1_MIGRATION_NOT_ADMITTED indicates that the migration is not admitted, and CMSV1_MIGRATION_POLICY_UNAVAILABLE indicates that the policy is unavailable. Historical tasks remain queryable.
    shared_ptr<string> reason_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
