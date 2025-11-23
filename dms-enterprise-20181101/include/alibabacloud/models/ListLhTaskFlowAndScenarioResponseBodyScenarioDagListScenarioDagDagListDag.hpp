// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLHTASKFLOWANDSCENARIORESPONSEBODYSCENARIODAGLISTSCENARIODAGDAGLISTDAG_HPP_
#define ALIBABACLOUD_MODELS_LISTLHTASKFLOWANDSCENARIORESPONSEBODYSCENARIODAGLISTSCENARIODAGDAGLISTDAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag& obj) { 
      DARABONBA_PTR_TO_JSON(CanEdit, canEdit_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(CreatorNickName, creatorNickName_);
      DARABONBA_PTR_TO_JSON(DagName, dagName_);
      DARABONBA_PTR_TO_JSON(DagOwnerId, dagOwnerId_);
      DARABONBA_PTR_TO_JSON(DagOwnerNickName, dagOwnerNickName_);
      DARABONBA_PTR_TO_JSON(DataFlowId, dataFlowId_);
      DARABONBA_PTR_TO_JSON(DemoId, demoId_);
      DARABONBA_PTR_TO_JSON(DeployId, deployId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsDeleted, isDeleted_);
      DARABONBA_PTR_TO_JSON(LatestInstanceStatus, latestInstanceStatus_);
      DARABONBA_PTR_TO_JSON(LatestInstanceTime, latestInstanceTime_);
      DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag& obj) { 
      DARABONBA_PTR_FROM_JSON(CanEdit, canEdit_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(CreatorNickName, creatorNickName_);
      DARABONBA_PTR_FROM_JSON(DagName, dagName_);
      DARABONBA_PTR_FROM_JSON(DagOwnerId, dagOwnerId_);
      DARABONBA_PTR_FROM_JSON(DagOwnerNickName, dagOwnerNickName_);
      DARABONBA_PTR_FROM_JSON(DataFlowId, dataFlowId_);
      DARABONBA_PTR_FROM_JSON(DemoId, demoId_);
      DARABONBA_PTR_FROM_JSON(DeployId, deployId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsDeleted, isDeleted_);
      DARABONBA_PTR_FROM_JSON(LatestInstanceStatus, latestInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(LatestInstanceTime, latestInstanceTime_);
      DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag() = default ;
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag(const ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag &) = default ;
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag(ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag &&) = default ;
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag() = default ;
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag& operator=(const ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag &) = default ;
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag& operator=(ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canEdit_ == nullptr
        && return this->creatorId_ == nullptr && return this->creatorNickName_ == nullptr && return this->dagName_ == nullptr && return this->dagOwnerId_ == nullptr && return this->dagOwnerNickName_ == nullptr
        && return this->dataFlowId_ == nullptr && return this->demoId_ == nullptr && return this->deployId_ == nullptr && return this->id_ == nullptr && return this->isDeleted_ == nullptr
        && return this->latestInstanceStatus_ == nullptr && return this->latestInstanceTime_ == nullptr && return this->scenarioId_ == nullptr && return this->spaceId_ == nullptr && return this->status_ == nullptr; };
    // canEdit Field Functions 
    bool hasCanEdit() const { return this->canEdit_ != nullptr;};
    void deleteCanEdit() { this->canEdit_ = nullptr;};
    inline bool canEdit() const { DARABONBA_PTR_GET_DEFAULT(canEdit_, false) };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag& setCanEdit(bool canEdit) { DARABONBA_PTR_SET_VALUE(canEdit_, canEdit) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // creatorNickName Field Functions 
    bool hasCreatorNickName() const { return this->creatorNickName_ != nullptr;};
    void deleteCreatorNickName() { this->creatorNickName_ = nullptr;};
    inline string creatorNickName() const { DARABONBA_PTR_GET_DEFAULT(creatorNickName_, "") };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag& setCreatorNickName(string creatorNickName) { DARABONBA_PTR_SET_VALUE(creatorNickName_, creatorNickName) };


    // dagName Field Functions 
    bool hasDagName() const { return this->dagName_ != nullptr;};
    void deleteDagName() { this->dagName_ = nullptr;};
    inline string dagName() const { DARABONBA_PTR_GET_DEFAULT(dagName_, "") };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag& setDagName(string dagName) { DARABONBA_PTR_SET_VALUE(dagName_, dagName) };


    // dagOwnerId Field Functions 
    bool hasDagOwnerId() const { return this->dagOwnerId_ != nullptr;};
    void deleteDagOwnerId() { this->dagOwnerId_ = nullptr;};
    inline string dagOwnerId() const { DARABONBA_PTR_GET_DEFAULT(dagOwnerId_, "") };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag& setDagOwnerId(string dagOwnerId) { DARABONBA_PTR_SET_VALUE(dagOwnerId_, dagOwnerId) };


    // dagOwnerNickName Field Functions 
    bool hasDagOwnerNickName() const { return this->dagOwnerNickName_ != nullptr;};
    void deleteDagOwnerNickName() { this->dagOwnerNickName_ = nullptr;};
    inline string dagOwnerNickName() const { DARABONBA_PTR_GET_DEFAULT(dagOwnerNickName_, "") };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag& setDagOwnerNickName(string dagOwnerNickName) { DARABONBA_PTR_SET_VALUE(dagOwnerNickName_, dagOwnerNickName) };


    // dataFlowId Field Functions 
    bool hasDataFlowId() const { return this->dataFlowId_ != nullptr;};
    void deleteDataFlowId() { this->dataFlowId_ = nullptr;};
    inline int64_t dataFlowId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowId_, 0L) };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag& setDataFlowId(int64_t dataFlowId) { DARABONBA_PTR_SET_VALUE(dataFlowId_, dataFlowId) };


    // demoId Field Functions 
    bool hasDemoId() const { return this->demoId_ != nullptr;};
    void deleteDemoId() { this->demoId_ = nullptr;};
    inline string demoId() const { DARABONBA_PTR_GET_DEFAULT(demoId_, "") };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag& setDemoId(string demoId) { DARABONBA_PTR_SET_VALUE(demoId_, demoId) };


    // deployId Field Functions 
    bool hasDeployId() const { return this->deployId_ != nullptr;};
    void deleteDeployId() { this->deployId_ = nullptr;};
    inline int64_t deployId() const { DARABONBA_PTR_GET_DEFAULT(deployId_, 0L) };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag& setDeployId(int64_t deployId) { DARABONBA_PTR_SET_VALUE(deployId_, deployId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isDeleted Field Functions 
    bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
    void deleteIsDeleted() { this->isDeleted_ = nullptr;};
    inline bool isDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, false) };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag& setIsDeleted(bool isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


    // latestInstanceStatus Field Functions 
    bool hasLatestInstanceStatus() const { return this->latestInstanceStatus_ != nullptr;};
    void deleteLatestInstanceStatus() { this->latestInstanceStatus_ = nullptr;};
    inline int32_t latestInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(latestInstanceStatus_, 0) };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag& setLatestInstanceStatus(int32_t latestInstanceStatus) { DARABONBA_PTR_SET_VALUE(latestInstanceStatus_, latestInstanceStatus) };


    // latestInstanceTime Field Functions 
    bool hasLatestInstanceTime() const { return this->latestInstanceTime_ != nullptr;};
    void deleteLatestInstanceTime() { this->latestInstanceTime_ = nullptr;};
    inline int32_t latestInstanceTime() const { DARABONBA_PTR_GET_DEFAULT(latestInstanceTime_, 0) };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag& setLatestInstanceTime(int32_t latestInstanceTime) { DARABONBA_PTR_SET_VALUE(latestInstanceTime_, latestInstanceTime) };


    // scenarioId Field Functions 
    bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
    void deleteScenarioId() { this->scenarioId_ = nullptr;};
    inline int64_t scenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, 0L) };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag& setScenarioId(int64_t scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline int64_t spaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, 0L) };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag& setSpaceId(int64_t spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagListDag& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Indicates whether the task flow can be modified. Valid values:
    // 
    // - **true**: The task flow can be modified.
    // - **false**: The task flow cannot be modified.
    std::shared_ptr<bool> canEdit_ = nullptr;
    // The ID of the user who creates the task flow.
    std::shared_ptr<string> creatorId_ = nullptr;
    // The name of the user who creates the workspace.
    std::shared_ptr<string> creatorNickName_ = nullptr;
    // The name of the task flow.
    std::shared_ptr<string> dagName_ = nullptr;
    // The user ID of the task flow owner.
    std::shared_ptr<string> dagOwnerId_ = nullptr;
    // The name of the task flow owner.
    std::shared_ptr<string> dagOwnerNickName_ = nullptr;
    // The extended field. No meaning is specified for this field.
    std::shared_ptr<int64_t> dataFlowId_ = nullptr;
    // The extended field. No meaning is specified for this field.
    std::shared_ptr<string> demoId_ = nullptr;
    // The ID of the latest deployment record.
    std::shared_ptr<int64_t> deployId_ = nullptr;
    // The ID of the task flow.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Indicates whether the task flow is deleted. Valid values:
    // 
    // - **true**: deleted
    // - **false**: not deleted
    std::shared_ptr<bool> isDeleted_ = nullptr;
    // The status of the latest execution. Valid values:
    // 
    // - 0: invalid
    // - 1: scheduling disabled
    // - 2: waiting to be scheduled
    std::shared_ptr<int32_t> latestInstanceStatus_ = nullptr;
    // The time when the latest execution record was generated.
    std::shared_ptr<int32_t> latestInstanceTime_ = nullptr;
    // The ID of the business scenario.
    std::shared_ptr<int64_t> scenarioId_ = nullptr;
    // The ID of the workspace.
    std::shared_ptr<int64_t> spaceId_ = nullptr;
    // The status of the task flow. Valid values:
    // 
    // - **0**: invalid
    // - **1**: scheduling disabled
    // - **2**: waiting to be scheduled
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
