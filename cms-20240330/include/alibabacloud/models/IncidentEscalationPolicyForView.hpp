// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTESCALATIONPOLICYFORVIEW_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTESCALATIONPOLICYFORVIEW_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IncidentEscalationStageForView.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IncidentEscalationPolicyForView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncidentEscalationPolicyForView& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(escalationStageList, escalationStageList_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(ownerType, ownerType_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(syncFromType, syncFromType_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(uuid, uuid_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, IncidentEscalationPolicyForView& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(escalationStageList, escalationStageList_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(ownerType, ownerType_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(syncFromType, syncFromType_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    IncidentEscalationPolicyForView() = default ;
    IncidentEscalationPolicyForView(const IncidentEscalationPolicyForView &) = default ;
    IncidentEscalationPolicyForView(IncidentEscalationPolicyForView &&) = default ;
    IncidentEscalationPolicyForView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncidentEscalationPolicyForView() = default ;
    IncidentEscalationPolicyForView& operator=(const IncidentEscalationPolicyForView &) = default ;
    IncidentEscalationPolicyForView& operator=(IncidentEscalationPolicyForView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->enable_ == nullptr && this->escalationStageList_ == nullptr && this->name_ == nullptr && this->ownerType_ == nullptr
        && this->regionId_ == nullptr && this->source_ == nullptr && this->syncFromType_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr
        && this->uuid_ == nullptr && this->workspace_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline IncidentEscalationPolicyForView& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline IncidentEscalationPolicyForView& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline IncidentEscalationPolicyForView& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // escalationStageList Field Functions 
    bool hasEscalationStageList() const { return this->escalationStageList_ != nullptr;};
    void deleteEscalationStageList() { this->escalationStageList_ = nullptr;};
    inline const vector<IncidentEscalationStageForView> & getEscalationStageList() const { DARABONBA_PTR_GET_CONST(escalationStageList_, vector<IncidentEscalationStageForView>) };
    inline vector<IncidentEscalationStageForView> getEscalationStageList() { DARABONBA_PTR_GET(escalationStageList_, vector<IncidentEscalationStageForView>) };
    inline IncidentEscalationPolicyForView& setEscalationStageList(const vector<IncidentEscalationStageForView> & escalationStageList) { DARABONBA_PTR_SET_VALUE(escalationStageList_, escalationStageList) };
    inline IncidentEscalationPolicyForView& setEscalationStageList(vector<IncidentEscalationStageForView> && escalationStageList) { DARABONBA_PTR_SET_RVALUE(escalationStageList_, escalationStageList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline IncidentEscalationPolicyForView& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerType Field Functions 
    bool hasOwnerType() const { return this->ownerType_ != nullptr;};
    void deleteOwnerType() { this->ownerType_ = nullptr;};
    inline string getOwnerType() const { DARABONBA_PTR_GET_DEFAULT(ownerType_, "") };
    inline IncidentEscalationPolicyForView& setOwnerType(string ownerType) { DARABONBA_PTR_SET_VALUE(ownerType_, ownerType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline IncidentEscalationPolicyForView& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline IncidentEscalationPolicyForView& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // syncFromType Field Functions 
    bool hasSyncFromType() const { return this->syncFromType_ != nullptr;};
    void deleteSyncFromType() { this->syncFromType_ = nullptr;};
    inline string getSyncFromType() const { DARABONBA_PTR_GET_DEFAULT(syncFromType_, "") };
    inline IncidentEscalationPolicyForView& setSyncFromType(string syncFromType) { DARABONBA_PTR_SET_VALUE(syncFromType_, syncFromType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline IncidentEscalationPolicyForView& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline IncidentEscalationPolicyForView& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline IncidentEscalationPolicyForView& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline IncidentEscalationPolicyForView& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    shared_ptr<string> createTime_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> enable_ {};
    shared_ptr<vector<IncidentEscalationStageForView>> escalationStageList_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> ownerType_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> source_ {};
    shared_ptr<string> syncFromType_ {};
    shared_ptr<string> updateTime_ {};
    shared_ptr<string> userId_ {};
    shared_ptr<string> uuid_ {};
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
