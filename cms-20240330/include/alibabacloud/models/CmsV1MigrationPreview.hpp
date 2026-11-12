// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CMSV1MIGRATIONPREVIEW_HPP_
#define ALIBABACLOUD_MODELS_CMSV1MIGRATIONPREVIEW_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CmsV1MigrationCheck.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CmsV1MigrationPreview : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CmsV1MigrationPreview& obj) { 
      DARABONBA_PTR_TO_JSON(checks, checks_);
      DARABONBA_PTR_TO_JSON(groupName, groupName_);
      DARABONBA_PTR_TO_JSON(migratable, migratable_);
      DARABONBA_PTR_TO_JSON(observeGroupId, observeGroupId_);
      DARABONBA_PTR_TO_JSON(originGroupId, originGroupId_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
      DARABONBA_PTR_TO_JSON(sourceReadOnly, sourceReadOnly_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(targetGroupName, targetGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, CmsV1MigrationPreview& obj) { 
      DARABONBA_PTR_FROM_JSON(checks, checks_);
      DARABONBA_PTR_FROM_JSON(groupName, groupName_);
      DARABONBA_PTR_FROM_JSON(migratable, migratable_);
      DARABONBA_PTR_FROM_JSON(observeGroupId, observeGroupId_);
      DARABONBA_PTR_FROM_JSON(originGroupId, originGroupId_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
      DARABONBA_PTR_FROM_JSON(sourceReadOnly, sourceReadOnly_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(targetGroupName, targetGroupName_);
    };
    CmsV1MigrationPreview() = default ;
    CmsV1MigrationPreview(const CmsV1MigrationPreview &) = default ;
    CmsV1MigrationPreview(CmsV1MigrationPreview &&) = default ;
    CmsV1MigrationPreview(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CmsV1MigrationPreview() = default ;
    CmsV1MigrationPreview& operator=(const CmsV1MigrationPreview &) = default ;
    CmsV1MigrationPreview& operator=(CmsV1MigrationPreview &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checks_ == nullptr
        && this->groupName_ == nullptr && this->migratable_ == nullptr && this->observeGroupId_ == nullptr && this->originGroupId_ == nullptr && this->reason_ == nullptr
        && this->sourceReadOnly_ == nullptr && this->sourceType_ == nullptr && this->targetGroupName_ == nullptr; };
    // checks Field Functions 
    bool hasChecks() const { return this->checks_ != nullptr;};
    void deleteChecks() { this->checks_ = nullptr;};
    inline const vector<CmsV1MigrationCheck> & getChecks() const { DARABONBA_PTR_GET_CONST(checks_, vector<CmsV1MigrationCheck>) };
    inline vector<CmsV1MigrationCheck> getChecks() { DARABONBA_PTR_GET(checks_, vector<CmsV1MigrationCheck>) };
    inline CmsV1MigrationPreview& setChecks(const vector<CmsV1MigrationCheck> & checks) { DARABONBA_PTR_SET_VALUE(checks_, checks) };
    inline CmsV1MigrationPreview& setChecks(vector<CmsV1MigrationCheck> && checks) { DARABONBA_PTR_SET_RVALUE(checks_, checks) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CmsV1MigrationPreview& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // migratable Field Functions 
    bool hasMigratable() const { return this->migratable_ != nullptr;};
    void deleteMigratable() { this->migratable_ = nullptr;};
    inline bool getMigratable() const { DARABONBA_PTR_GET_DEFAULT(migratable_, false) };
    inline CmsV1MigrationPreview& setMigratable(bool migratable) { DARABONBA_PTR_SET_VALUE(migratable_, migratable) };


    // observeGroupId Field Functions 
    bool hasObserveGroupId() const { return this->observeGroupId_ != nullptr;};
    void deleteObserveGroupId() { this->observeGroupId_ = nullptr;};
    inline string getObserveGroupId() const { DARABONBA_PTR_GET_DEFAULT(observeGroupId_, "") };
    inline CmsV1MigrationPreview& setObserveGroupId(string observeGroupId) { DARABONBA_PTR_SET_VALUE(observeGroupId_, observeGroupId) };


    // originGroupId Field Functions 
    bool hasOriginGroupId() const { return this->originGroupId_ != nullptr;};
    void deleteOriginGroupId() { this->originGroupId_ = nullptr;};
    inline string getOriginGroupId() const { DARABONBA_PTR_GET_DEFAULT(originGroupId_, "") };
    inline CmsV1MigrationPreview& setOriginGroupId(string originGroupId) { DARABONBA_PTR_SET_VALUE(originGroupId_, originGroupId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline CmsV1MigrationPreview& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // sourceReadOnly Field Functions 
    bool hasSourceReadOnly() const { return this->sourceReadOnly_ != nullptr;};
    void deleteSourceReadOnly() { this->sourceReadOnly_ = nullptr;};
    inline bool getSourceReadOnly() const { DARABONBA_PTR_GET_DEFAULT(sourceReadOnly_, false) };
    inline CmsV1MigrationPreview& setSourceReadOnly(bool sourceReadOnly) { DARABONBA_PTR_SET_VALUE(sourceReadOnly_, sourceReadOnly) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CmsV1MigrationPreview& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // targetGroupName Field Functions 
    bool hasTargetGroupName() const { return this->targetGroupName_ != nullptr;};
    void deleteTargetGroupName() { this->targetGroupName_ = nullptr;};
    inline string getTargetGroupName() const { DARABONBA_PTR_GET_DEFAULT(targetGroupName_, "") };
    inline CmsV1MigrationPreview& setTargetGroupName(string targetGroupName) { DARABONBA_PTR_SET_VALUE(targetGroupName_, targetGroupName) };


  protected:
    // The itemized check results for name and resource support.
    shared_ptr<vector<CmsV1MigrationCheck>> checks_ {};
    // The name of the source application group.
    shared_ptr<string> groupName_ {};
    // Indicates whether the dry run is passed.
    shared_ptr<bool> migratable_ {};
    // The ID of the target observation group.
    shared_ptr<string> observeGroupId_ {};
    // The ID of the source CloudMonitor 1.0 application group.
    shared_ptr<string> originGroupId_ {};
    // The reason for the dry run failure.
    shared_ptr<string> reason_ {};
    // Indicates whether the source 1.0 group is persistently read-only.
    shared_ptr<bool> sourceReadOnly_ {};
    // The type of the source application group. custom indicates a custom group, tag indicates a tag-based group, and regMgr indicates a resource group-based group.
    shared_ptr<string> sourceType_ {};
    // The name of the target observation group.
    shared_ptr<string> targetGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
