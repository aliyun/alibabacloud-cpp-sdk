// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CMSV1MIGRATIONCANDIDATE_HPP_
#define ALIBABACLOUD_MODELS_CMSV1MIGRATIONCANDIDATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CmsV1MigrationCandidate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CmsV1MigrationCandidate& obj) { 
      DARABONBA_PTR_TO_JSON(groupName, groupName_);
      DARABONBA_PTR_TO_JSON(migrationStatus, migrationStatus_);
      DARABONBA_PTR_TO_JSON(observeGroupId, observeGroupId_);
      DARABONBA_PTR_TO_JSON(originGroupId, originGroupId_);
      DARABONBA_PTR_TO_JSON(rejectionReason, rejectionReason_);
      DARABONBA_PTR_TO_JSON(selectable, selectable_);
      DARABONBA_PTR_TO_JSON(sourceReadOnly, sourceReadOnly_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(targetGroupName, targetGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, CmsV1MigrationCandidate& obj) { 
      DARABONBA_PTR_FROM_JSON(groupName, groupName_);
      DARABONBA_PTR_FROM_JSON(migrationStatus, migrationStatus_);
      DARABONBA_PTR_FROM_JSON(observeGroupId, observeGroupId_);
      DARABONBA_PTR_FROM_JSON(originGroupId, originGroupId_);
      DARABONBA_PTR_FROM_JSON(rejectionReason, rejectionReason_);
      DARABONBA_PTR_FROM_JSON(selectable, selectable_);
      DARABONBA_PTR_FROM_JSON(sourceReadOnly, sourceReadOnly_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(targetGroupName, targetGroupName_);
    };
    CmsV1MigrationCandidate() = default ;
    CmsV1MigrationCandidate(const CmsV1MigrationCandidate &) = default ;
    CmsV1MigrationCandidate(CmsV1MigrationCandidate &&) = default ;
    CmsV1MigrationCandidate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CmsV1MigrationCandidate() = default ;
    CmsV1MigrationCandidate& operator=(const CmsV1MigrationCandidate &) = default ;
    CmsV1MigrationCandidate& operator=(CmsV1MigrationCandidate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr
        && this->migrationStatus_ == nullptr && this->observeGroupId_ == nullptr && this->originGroupId_ == nullptr && this->rejectionReason_ == nullptr && this->selectable_ == nullptr
        && this->sourceReadOnly_ == nullptr && this->sourceType_ == nullptr && this->targetGroupName_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CmsV1MigrationCandidate& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // migrationStatus Field Functions 
    bool hasMigrationStatus() const { return this->migrationStatus_ != nullptr;};
    void deleteMigrationStatus() { this->migrationStatus_ = nullptr;};
    inline string getMigrationStatus() const { DARABONBA_PTR_GET_DEFAULT(migrationStatus_, "") };
    inline CmsV1MigrationCandidate& setMigrationStatus(string migrationStatus) { DARABONBA_PTR_SET_VALUE(migrationStatus_, migrationStatus) };


    // observeGroupId Field Functions 
    bool hasObserveGroupId() const { return this->observeGroupId_ != nullptr;};
    void deleteObserveGroupId() { this->observeGroupId_ = nullptr;};
    inline string getObserveGroupId() const { DARABONBA_PTR_GET_DEFAULT(observeGroupId_, "") };
    inline CmsV1MigrationCandidate& setObserveGroupId(string observeGroupId) { DARABONBA_PTR_SET_VALUE(observeGroupId_, observeGroupId) };


    // originGroupId Field Functions 
    bool hasOriginGroupId() const { return this->originGroupId_ != nullptr;};
    void deleteOriginGroupId() { this->originGroupId_ = nullptr;};
    inline string getOriginGroupId() const { DARABONBA_PTR_GET_DEFAULT(originGroupId_, "") };
    inline CmsV1MigrationCandidate& setOriginGroupId(string originGroupId) { DARABONBA_PTR_SET_VALUE(originGroupId_, originGroupId) };


    // rejectionReason Field Functions 
    bool hasRejectionReason() const { return this->rejectionReason_ != nullptr;};
    void deleteRejectionReason() { this->rejectionReason_ = nullptr;};
    inline string getRejectionReason() const { DARABONBA_PTR_GET_DEFAULT(rejectionReason_, "") };
    inline CmsV1MigrationCandidate& setRejectionReason(string rejectionReason) { DARABONBA_PTR_SET_VALUE(rejectionReason_, rejectionReason) };


    // selectable Field Functions 
    bool hasSelectable() const { return this->selectable_ != nullptr;};
    void deleteSelectable() { this->selectable_ = nullptr;};
    inline bool getSelectable() const { DARABONBA_PTR_GET_DEFAULT(selectable_, false) };
    inline CmsV1MigrationCandidate& setSelectable(bool selectable) { DARABONBA_PTR_SET_VALUE(selectable_, selectable) };


    // sourceReadOnly Field Functions 
    bool hasSourceReadOnly() const { return this->sourceReadOnly_ != nullptr;};
    void deleteSourceReadOnly() { this->sourceReadOnly_ = nullptr;};
    inline bool getSourceReadOnly() const { DARABONBA_PTR_GET_DEFAULT(sourceReadOnly_, false) };
    inline CmsV1MigrationCandidate& setSourceReadOnly(bool sourceReadOnly) { DARABONBA_PTR_SET_VALUE(sourceReadOnly_, sourceReadOnly) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CmsV1MigrationCandidate& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // targetGroupName Field Functions 
    bool hasTargetGroupName() const { return this->targetGroupName_ != nullptr;};
    void deleteTargetGroupName() { this->targetGroupName_ = nullptr;};
    inline string getTargetGroupName() const { DARABONBA_PTR_GET_DEFAULT(targetGroupName_, "") };
    inline CmsV1MigrationCandidate& setTargetGroupName(string targetGroupName) { DARABONBA_PTR_SET_VALUE(targetGroupName_, targetGroupName) };


  protected:
    // The name of the source application group.
    shared_ptr<string> groupName_ {};
    // The current migration or takeover status of the source group. Valid values: NOT_MIGRATED: Not migrated. PROCESSING: In progress. MIGRATED: Migrated. If a historical task lacks proof of source read-only status, NEEDS_REVIEW is returned through rejectionReason.
    shared_ptr<string> migrationStatus_ {};
    // The ID of the target observation group.
    shared_ptr<string> observeGroupId_ {};
    // The ID of the source CloudMonitor 1.0 application group.
    shared_ptr<string> originGroupId_ {};
    // The reason why the group cannot be selected.
    shared_ptr<string> rejectionReason_ {};
    // Specifies whether the group can be selected for migration.
    shared_ptr<bool> selectable_ {};
    // Specifies whether the source 1.0 group is persistently read-only.
    shared_ptr<bool> sourceReadOnly_ {};
    // The type of the source application group. Valid values: custom: Custom group. tag: Tag-based group. regMgr: Resource group-based group.
    shared_ptr<string> sourceType_ {};
    // The name of the target observation group.
    shared_ptr<string> targetGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
