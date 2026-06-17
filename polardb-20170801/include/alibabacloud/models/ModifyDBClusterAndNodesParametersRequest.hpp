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
      DARABONBA_PTR_TO_JSON(ClearBinlog, clearBinlog_);
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
      DARABONBA_PTR_FROM_JSON(ClearBinlog, clearBinlog_);
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
    virtual bool empty() const override { return this->clearBinlog_ == nullptr
        && this->DBClusterId_ == nullptr && this->DBNodeIds_ == nullptr && this->fromTimeService_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->parameterGroupId_ == nullptr && this->parameters_ == nullptr && this->plannedEndTime_ == nullptr && this->plannedStartTime_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->standbyClusterIdListNeedToSync_ == nullptr; };
    // clearBinlog Field Functions 
    bool hasClearBinlog() const { return this->clearBinlog_ != nullptr;};
    void deleteClearBinlog() { this->clearBinlog_ = nullptr;};
    inline bool getClearBinlog() const { DARABONBA_PTR_GET_DEFAULT(clearBinlog_, false) };
    inline ModifyDBClusterAndNodesParametersRequest& setClearBinlog(bool clearBinlog) { DARABONBA_PTR_SET_VALUE(clearBinlog_, clearBinlog) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterAndNodesParametersRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBNodeIds Field Functions 
    bool hasDBNodeIds() const { return this->DBNodeIds_ != nullptr;};
    void deleteDBNodeIds() { this->DBNodeIds_ = nullptr;};
    inline string getDBNodeIds() const { DARABONBA_PTR_GET_DEFAULT(DBNodeIds_, "") };
    inline ModifyDBClusterAndNodesParametersRequest& setDBNodeIds(string DBNodeIds) { DARABONBA_PTR_SET_VALUE(DBNodeIds_, DBNodeIds) };


    // fromTimeService Field Functions 
    bool hasFromTimeService() const { return this->fromTimeService_ != nullptr;};
    void deleteFromTimeService() { this->fromTimeService_ = nullptr;};
    inline bool getFromTimeService() const { DARABONBA_PTR_GET_DEFAULT(fromTimeService_, false) };
    inline ModifyDBClusterAndNodesParametersRequest& setFromTimeService(bool fromTimeService) { DARABONBA_PTR_SET_VALUE(fromTimeService_, fromTimeService) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBClusterAndNodesParametersRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBClusterAndNodesParametersRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parameterGroupId Field Functions 
    bool hasParameterGroupId() const { return this->parameterGroupId_ != nullptr;};
    void deleteParameterGroupId() { this->parameterGroupId_ = nullptr;};
    inline string getParameterGroupId() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupId_, "") };
    inline ModifyDBClusterAndNodesParametersRequest& setParameterGroupId(string parameterGroupId) { DARABONBA_PTR_SET_VALUE(parameterGroupId_, parameterGroupId) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline ModifyDBClusterAndNodesParametersRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // plannedEndTime Field Functions 
    bool hasPlannedEndTime() const { return this->plannedEndTime_ != nullptr;};
    void deletePlannedEndTime() { this->plannedEndTime_ = nullptr;};
    inline string getPlannedEndTime() const { DARABONBA_PTR_GET_DEFAULT(plannedEndTime_, "") };
    inline ModifyDBClusterAndNodesParametersRequest& setPlannedEndTime(string plannedEndTime) { DARABONBA_PTR_SET_VALUE(plannedEndTime_, plannedEndTime) };


    // plannedStartTime Field Functions 
    bool hasPlannedStartTime() const { return this->plannedStartTime_ != nullptr;};
    void deletePlannedStartTime() { this->plannedStartTime_ = nullptr;};
    inline string getPlannedStartTime() const { DARABONBA_PTR_GET_DEFAULT(plannedStartTime_, "") };
    inline ModifyDBClusterAndNodesParametersRequest& setPlannedStartTime(string plannedStartTime) { DARABONBA_PTR_SET_VALUE(plannedStartTime_, plannedStartTime) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBClusterAndNodesParametersRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBClusterAndNodesParametersRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // standbyClusterIdListNeedToSync Field Functions 
    bool hasStandbyClusterIdListNeedToSync() const { return this->standbyClusterIdListNeedToSync_ != nullptr;};
    void deleteStandbyClusterIdListNeedToSync() { this->standbyClusterIdListNeedToSync_ = nullptr;};
    inline string getStandbyClusterIdListNeedToSync() const { DARABONBA_PTR_GET_DEFAULT(standbyClusterIdListNeedToSync_, "") };
    inline ModifyDBClusterAndNodesParametersRequest& setStandbyClusterIdListNeedToSync(string standbyClusterIdListNeedToSync) { DARABONBA_PTR_SET_VALUE(standbyClusterIdListNeedToSync_, standbyClusterIdListNeedToSync) };


  protected:
    // Specifies whether to clear binlog. This parameter is valid only when binlog is disabled.
    shared_ptr<bool> clearBinlog_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The IDs of the nodes. By setting this parameter, you can modify the parameters of the cluster and specified nodes. Separate multiple node IDs with commas (,).
    // 
    // > If this parameter is not specified, only the cluster parameters are modified.
    shared_ptr<string> DBNodeIds_ {};
    // Specifies whether to immediately or scheduledly modify parameters and restart the cluster. Valid values:
    // 
    // - **false** (default): scheduled execution
    // 
    // - **true**: immediate execution
    shared_ptr<bool> fromTimeService_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the parameter template.
    shared_ptr<string> parameterGroupId_ {};
    // The JSON string that consists of parameters and their values.
    shared_ptr<string> parameters_ {};
    // The latest time to start the scheduled task. Specify the time in the `YYYY-MM-DDThh:mm:ssZ` format. The time must be in UTC.
    // 
    // > - The latest start time must be 30 minutes or more later than the earliest start time.
    // >
    // > - If you specify `PlannedStartTime` but not this parameter, the latest start time of the task is `the earliest start time + 30 minutes` by default. For example, if you set `PlannedStartTime` to `2021-01-14T09:00:00Z` and leave this parameter empty, the task will start no later than `2021-01-14T09:30:00Z`.
    shared_ptr<string> plannedEndTime_ {};
    // The earliest time to start the scheduled task. Specify the time in the `YYYY-MM-DDThh:mm:ssZ` format. The time must be in UTC.
    // 
    // > - The start time can be any time within the next 24 hours. For example, if the current time is `2021-01-14T09:00:00Z`, you can specify a time that ranges from `2021-01-14T09:00:00Z` to `2021-01-15T09:00:00Z`.
    // >
    // > - If you leave this parameter empty, the task is immediately executed.
    shared_ptr<string> plannedStartTime_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The list of GDN standby clusters to which you want to synchronize the parameter settings.
    shared_ptr<string> standbyClusterIdListNeedToSync_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
