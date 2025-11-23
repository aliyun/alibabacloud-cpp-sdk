// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWRESPONSEBODYTASKFLOWLISTTASKFLOW_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWRESPONSEBODYTASKFLOWLISTTASKFLOW_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTaskFlowResponseBodyTaskFlowListTaskFlow : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowResponseBodyTaskFlowListTaskFlow& obj) { 
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(CreatorNickName, creatorNickName_);
      DARABONBA_PTR_TO_JSON(DagOwnerNickName, dagOwnerNickName_);
      DARABONBA_PTR_TO_JSON(DeployId, deployId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LatestInstanceStatus, latestInstanceStatus_);
      DARABONBA_PTR_TO_JSON(LatestInstanceTime, latestInstanceTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowResponseBodyTaskFlowListTaskFlow& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(CreatorNickName, creatorNickName_);
      DARABONBA_PTR_FROM_JSON(DagOwnerNickName, dagOwnerNickName_);
      DARABONBA_PTR_FROM_JSON(DeployId, deployId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LatestInstanceStatus, latestInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(LatestInstanceTime, latestInstanceTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListTaskFlowResponseBodyTaskFlowListTaskFlow() = default ;
    ListTaskFlowResponseBodyTaskFlowListTaskFlow(const ListTaskFlowResponseBodyTaskFlowListTaskFlow &) = default ;
    ListTaskFlowResponseBodyTaskFlowListTaskFlow(ListTaskFlowResponseBodyTaskFlowListTaskFlow &&) = default ;
    ListTaskFlowResponseBodyTaskFlowListTaskFlow(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowResponseBodyTaskFlowListTaskFlow() = default ;
    ListTaskFlowResponseBodyTaskFlowListTaskFlow& operator=(const ListTaskFlowResponseBodyTaskFlowListTaskFlow &) = default ;
    ListTaskFlowResponseBodyTaskFlowListTaskFlow& operator=(ListTaskFlowResponseBodyTaskFlowListTaskFlow &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creatorId_ == nullptr
        && return this->creatorNickName_ == nullptr && return this->dagOwnerNickName_ == nullptr && return this->deployId_ == nullptr && return this->id_ == nullptr && return this->latestInstanceStatus_ == nullptr
        && return this->latestInstanceTime_ == nullptr && return this->status_ == nullptr; };
    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline ListTaskFlowResponseBodyTaskFlowListTaskFlow& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // creatorNickName Field Functions 
    bool hasCreatorNickName() const { return this->creatorNickName_ != nullptr;};
    void deleteCreatorNickName() { this->creatorNickName_ = nullptr;};
    inline string creatorNickName() const { DARABONBA_PTR_GET_DEFAULT(creatorNickName_, "") };
    inline ListTaskFlowResponseBodyTaskFlowListTaskFlow& setCreatorNickName(string creatorNickName) { DARABONBA_PTR_SET_VALUE(creatorNickName_, creatorNickName) };


    // dagOwnerNickName Field Functions 
    bool hasDagOwnerNickName() const { return this->dagOwnerNickName_ != nullptr;};
    void deleteDagOwnerNickName() { this->dagOwnerNickName_ = nullptr;};
    inline string dagOwnerNickName() const { DARABONBA_PTR_GET_DEFAULT(dagOwnerNickName_, "") };
    inline ListTaskFlowResponseBodyTaskFlowListTaskFlow& setDagOwnerNickName(string dagOwnerNickName) { DARABONBA_PTR_SET_VALUE(dagOwnerNickName_, dagOwnerNickName) };


    // deployId Field Functions 
    bool hasDeployId() const { return this->deployId_ != nullptr;};
    void deleteDeployId() { this->deployId_ = nullptr;};
    inline int64_t deployId() const { DARABONBA_PTR_GET_DEFAULT(deployId_, 0L) };
    inline ListTaskFlowResponseBodyTaskFlowListTaskFlow& setDeployId(int64_t deployId) { DARABONBA_PTR_SET_VALUE(deployId_, deployId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListTaskFlowResponseBodyTaskFlowListTaskFlow& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // latestInstanceStatus Field Functions 
    bool hasLatestInstanceStatus() const { return this->latestInstanceStatus_ != nullptr;};
    void deleteLatestInstanceStatus() { this->latestInstanceStatus_ = nullptr;};
    inline int32_t latestInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(latestInstanceStatus_, 0) };
    inline ListTaskFlowResponseBodyTaskFlowListTaskFlow& setLatestInstanceStatus(int32_t latestInstanceStatus) { DARABONBA_PTR_SET_VALUE(latestInstanceStatus_, latestInstanceStatus) };


    // latestInstanceTime Field Functions 
    bool hasLatestInstanceTime() const { return this->latestInstanceTime_ != nullptr;};
    void deleteLatestInstanceTime() { this->latestInstanceTime_ = nullptr;};
    inline string latestInstanceTime() const { DARABONBA_PTR_GET_DEFAULT(latestInstanceTime_, "") };
    inline ListTaskFlowResponseBodyTaskFlowListTaskFlow& setLatestInstanceTime(string latestInstanceTime) { DARABONBA_PTR_SET_VALUE(latestInstanceTime_, latestInstanceTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListTaskFlowResponseBodyTaskFlowListTaskFlow& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the user who creates the task flow.
    std::shared_ptr<string> creatorId_ = nullptr;
    // The name of the user who creates the task flow.
    std::shared_ptr<string> creatorNickName_ = nullptr;
    // The name of the task flow owner.
    std::shared_ptr<string> dagOwnerNickName_ = nullptr;
    // The ID of the latest deployment record.
    std::shared_ptr<int64_t> deployId_ = nullptr;
    // The ID of the task flow.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The status of the latest execution. Valid values:
    // 
    // *   **0**: invalid.
    // *   **1**: scheduling disabled.
    // *   **2**: waiting to be scheduled.
    std::shared_ptr<int32_t> latestInstanceStatus_ = nullptr;
    // The time when the latest execution record was generated.
    std::shared_ptr<string> latestInstanceTime_ = nullptr;
    // The status of the task flow. Valid values:
    // 
    // *   **0**: The task flow is invalid.
    // *   **1**: Scheduling is disabled for the task flow.
    // *   **2**: The task flow is waiting to be scheduled.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
