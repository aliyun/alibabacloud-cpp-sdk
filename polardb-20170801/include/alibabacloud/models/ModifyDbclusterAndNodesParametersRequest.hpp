// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERANDNODESPARAMETERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERANDNODESPARAMETERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyDBClusterAndNodesParametersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterAndNodesParametersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBNodeIds, DBNodeIds_);
      DARABONBA_PTR_TO_JSON(FromTimeService, fromTimeService_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(PlannedEndTime, plannedEndTime_);
      DARABONBA_PTR_TO_JSON(PlannedStartTime, plannedStartTime_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StandbyClusterIdListNeedToSync, standbyClusterIdListNeedToSync_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterAndNodesParametersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBNodeIds, DBNodeIds_);
      DARABONBA_PTR_FROM_JSON(FromTimeService, fromTimeService_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(PlannedEndTime, plannedEndTime_);
      DARABONBA_PTR_FROM_JSON(PlannedStartTime, plannedStartTime_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StandbyClusterIdListNeedToSync, standbyClusterIdListNeedToSync_);
    };
    ModifyDBClusterAndNodesParametersRequest() = default ;
    ModifyDBClusterAndNodesParametersRequest(const ModifyDBClusterAndNodesParametersRequest &) = default ;
    ModifyDBClusterAndNodesParametersRequest(ModifyDBClusterAndNodesParametersRequest &&) = default ;
    ModifyDBClusterAndNodesParametersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterAndNodesParametersRequest() = default ;
    ModifyDBClusterAndNodesParametersRequest& operator=(const ModifyDBClusterAndNodesParametersRequest &) = default ;
    ModifyDBClusterAndNodesParametersRequest& operator=(ModifyDBClusterAndNodesParametersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->DBNodeIds_ != nullptr && this->fromTimeService_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->parameterGroupId_ != nullptr
        && this->parameters_ != nullptr && this->plannedEndTime_ != nullptr && this->plannedStartTime_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->standbyClusterIdListNeedToSync_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterAndNodesParametersRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBNodeIds Field Functions 
    bool hasDBNodeIds() const { return this->DBNodeIds_ != nullptr;};
    void deleteDBNodeIds() { this->DBNodeIds_ = nullptr;};
    inline string DBNodeIds() const { DARABONBA_PTR_GET_DEFAULT(DBNodeIds_, "") };
    inline ModifyDBClusterAndNodesParametersRequest& setDBNodeIds(string DBNodeIds) { DARABONBA_PTR_SET_VALUE(DBNodeIds_, DBNodeIds) };


    // fromTimeService Field Functions 
    bool hasFromTimeService() const { return this->fromTimeService_ != nullptr;};
    void deleteFromTimeService() { this->fromTimeService_ = nullptr;};
    inline bool fromTimeService() const { DARABONBA_PTR_GET_DEFAULT(fromTimeService_, false) };
    inline ModifyDBClusterAndNodesParametersRequest& setFromTimeService(bool fromTimeService) { DARABONBA_PTR_SET_VALUE(fromTimeService_, fromTimeService) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBClusterAndNodesParametersRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBClusterAndNodesParametersRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parameterGroupId Field Functions 
    bool hasParameterGroupId() const { return this->parameterGroupId_ != nullptr;};
    void deleteParameterGroupId() { this->parameterGroupId_ = nullptr;};
    inline string parameterGroupId() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupId_, "") };
    inline ModifyDBClusterAndNodesParametersRequest& setParameterGroupId(string parameterGroupId) { DARABONBA_PTR_SET_VALUE(parameterGroupId_, parameterGroupId) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline ModifyDBClusterAndNodesParametersRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // plannedEndTime Field Functions 
    bool hasPlannedEndTime() const { return this->plannedEndTime_ != nullptr;};
    void deletePlannedEndTime() { this->plannedEndTime_ = nullptr;};
    inline string plannedEndTime() const { DARABONBA_PTR_GET_DEFAULT(plannedEndTime_, "") };
    inline ModifyDBClusterAndNodesParametersRequest& setPlannedEndTime(string plannedEndTime) { DARABONBA_PTR_SET_VALUE(plannedEndTime_, plannedEndTime) };


    // plannedStartTime Field Functions 
    bool hasPlannedStartTime() const { return this->plannedStartTime_ != nullptr;};
    void deletePlannedStartTime() { this->plannedStartTime_ = nullptr;};
    inline string plannedStartTime() const { DARABONBA_PTR_GET_DEFAULT(plannedStartTime_, "") };
    inline ModifyDBClusterAndNodesParametersRequest& setPlannedStartTime(string plannedStartTime) { DARABONBA_PTR_SET_VALUE(plannedStartTime_, plannedStartTime) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBClusterAndNodesParametersRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBClusterAndNodesParametersRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // standbyClusterIdListNeedToSync Field Functions 
    bool hasStandbyClusterIdListNeedToSync() const { return this->standbyClusterIdListNeedToSync_ != nullptr;};
    void deleteStandbyClusterIdListNeedToSync() { this->standbyClusterIdListNeedToSync_ = nullptr;};
    inline string standbyClusterIdListNeedToSync() const { DARABONBA_PTR_GET_DEFAULT(standbyClusterIdListNeedToSync_, "") };
    inline ModifyDBClusterAndNodesParametersRequest& setStandbyClusterIdListNeedToSync(string standbyClusterIdListNeedToSync) { DARABONBA_PTR_SET_VALUE(standbyClusterIdListNeedToSync_, standbyClusterIdListNeedToSync) };


  protected:
    // The ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The IDs of nodes. You can specify this parameter, or leave this parameter empty. Separate multiple node IDs with commas (,).
    // 
    // >  If you do not specify this parameter, only the cluster parameters are modified.
    std::shared_ptr<string> DBNodeIds_ = nullptr;
    // Specifies an immediate or scheduled task to modify parameters and restart the cluster. Default value: false. Valid values:
    // 
    // *   **false**: runs the kernel upgrade task in a scheduled manner.
    // *   **true**: immediately runs the kernel upgrade task.
    std::shared_ptr<bool> fromTimeService_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the parameter template.
    std::shared_ptr<string> parameterGroupId_ = nullptr;
    // The JSON string for the parameter and its value.
    std::shared_ptr<string> parameters_ = nullptr;
    // The latest start time to run the task. Specify the time in the `YYYY-MM-DDThh:mm:ssZ` format. The time must be in UTC.
    // 
    // > 
    // 
    // *   The value of this parameter must be at least 30 minutes later than the value of the PlannedStartTime parameter.
    // 
    // *   By default, if you specify the `PlannedStartTime` parameter but do not specify the PlannedEndTime parameter, the latest start time of the task is set to a value that is calculated by using the following formula: `Value of the PlannedEndTime parameter + 30 minutes`. For example, if you set the `PlannedStartTime` parameter to `2021-01-14T09:00:00Z` and you do not specify the PlannedEndTime parameter, the latest start time of the task is set to `2021-01-14T09:30:00Z`.
    std::shared_ptr<string> plannedEndTime_ = nullptr;
    // The earliest time to upgrade the specifications within the scheduled time period. Specify the time in the `YYYY-MM-DDThh:mm:ssZ` format. The time must be in UTC.
    // 
    // > 
    // 
    // *   The earliest start time of the task can be a point in time within the next 24 hours. For example, if the current time is `2021-01-14T09:00:00Z`, you can specify a point in the time range from `2021-01-14T09:00:00Z` to `2021-01-15T09:00:00Z`.
    // 
    // *   If this parameter is empty, the upgrade task is immediately performed.
    std::shared_ptr<string> plannedStartTime_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The secondary clusters in the GDN to which the parameter settings are synchronized.
    std::shared_ptr<string> standbyClusterIdListNeedToSync_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
