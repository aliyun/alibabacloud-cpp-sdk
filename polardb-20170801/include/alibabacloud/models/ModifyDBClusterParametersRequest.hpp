// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERPARAMETERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERPARAMETERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyDBClusterParametersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterParametersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClearBinlog, clearBinlog_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(FromTimeService, fromTimeService_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(PlannedEndTime, plannedEndTime_);
      DARABONBA_PTR_TO_JSON(PlannedStartTime, plannedStartTime_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterParametersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClearBinlog, clearBinlog_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(FromTimeService, fromTimeService_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ParameterGroupId, parameterGroupId_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(PlannedEndTime, plannedEndTime_);
      DARABONBA_PTR_FROM_JSON(PlannedStartTime, plannedStartTime_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyDBClusterParametersRequest() = default ;
    ModifyDBClusterParametersRequest(const ModifyDBClusterParametersRequest &) = default ;
    ModifyDBClusterParametersRequest(ModifyDBClusterParametersRequest &&) = default ;
    ModifyDBClusterParametersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterParametersRequest() = default ;
    ModifyDBClusterParametersRequest& operator=(const ModifyDBClusterParametersRequest &) = default ;
    ModifyDBClusterParametersRequest& operator=(ModifyDBClusterParametersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clearBinlog_ == nullptr
        && this->DBClusterId_ == nullptr && this->fromTimeService_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->parameterGroupId_ == nullptr
        && this->parameters_ == nullptr && this->plannedEndTime_ == nullptr && this->plannedStartTime_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // clearBinlog Field Functions 
    bool hasClearBinlog() const { return this->clearBinlog_ != nullptr;};
    void deleteClearBinlog() { this->clearBinlog_ = nullptr;};
    inline bool getClearBinlog() const { DARABONBA_PTR_GET_DEFAULT(clearBinlog_, false) };
    inline ModifyDBClusterParametersRequest& setClearBinlog(bool clearBinlog) { DARABONBA_PTR_SET_VALUE(clearBinlog_, clearBinlog) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterParametersRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // fromTimeService Field Functions 
    bool hasFromTimeService() const { return this->fromTimeService_ != nullptr;};
    void deleteFromTimeService() { this->fromTimeService_ = nullptr;};
    inline bool getFromTimeService() const { DARABONBA_PTR_GET_DEFAULT(fromTimeService_, false) };
    inline ModifyDBClusterParametersRequest& setFromTimeService(bool fromTimeService) { DARABONBA_PTR_SET_VALUE(fromTimeService_, fromTimeService) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBClusterParametersRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBClusterParametersRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parameterGroupId Field Functions 
    bool hasParameterGroupId() const { return this->parameterGroupId_ != nullptr;};
    void deleteParameterGroupId() { this->parameterGroupId_ = nullptr;};
    inline string getParameterGroupId() const { DARABONBA_PTR_GET_DEFAULT(parameterGroupId_, "") };
    inline ModifyDBClusterParametersRequest& setParameterGroupId(string parameterGroupId) { DARABONBA_PTR_SET_VALUE(parameterGroupId_, parameterGroupId) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline ModifyDBClusterParametersRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // plannedEndTime Field Functions 
    bool hasPlannedEndTime() const { return this->plannedEndTime_ != nullptr;};
    void deletePlannedEndTime() { this->plannedEndTime_ = nullptr;};
    inline string getPlannedEndTime() const { DARABONBA_PTR_GET_DEFAULT(plannedEndTime_, "") };
    inline ModifyDBClusterParametersRequest& setPlannedEndTime(string plannedEndTime) { DARABONBA_PTR_SET_VALUE(plannedEndTime_, plannedEndTime) };


    // plannedStartTime Field Functions 
    bool hasPlannedStartTime() const { return this->plannedStartTime_ != nullptr;};
    void deletePlannedStartTime() { this->plannedStartTime_ = nullptr;};
    inline string getPlannedStartTime() const { DARABONBA_PTR_GET_DEFAULT(plannedStartTime_, "") };
    inline ModifyDBClusterParametersRequest& setPlannedStartTime(string plannedStartTime) { DARABONBA_PTR_SET_VALUE(plannedStartTime_, plannedStartTime) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBClusterParametersRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBClusterParametersRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    shared_ptr<bool> clearBinlog_ {};
    // The cluster ID.
    // 
    // > Call the [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html) operation to view information about all clusters in the destination region, including cluster IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // Specifies whether to immediately modify the parameters and restart the cluster. Valid values:
    // 
    // - false (default): The modification is scheduled.
    // 
    // - true: The modification is performed immediately.
    shared_ptr<bool> fromTimeService_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the parameter template.
    // 
    // > - Call the [DescribeParameterGroups](https://help.aliyun.com/document_detail/207178.html) operation to view the ID of the parameter template.
    // >
    // > - You must specify this parameter or the `Parameters` parameter.
    // >
    // > - This parameter is supported only by PolarDB for MySQL.
    shared_ptr<string> parameterGroupId_ {};
    // A JSON string that consists of parameters and their values. The parameter values must be strings. For example: `{"wait_timeout":"86","innodb_old_blocks_time":"10"}`.
    // 
    // > - Call the [DescribeDBClusterParameters](https://help.aliyun.com/document_detail/98122.html) operation to view the parameters of a PolarDB cluster.
    // >
    // > - This parameter is required if the destination cluster is a PolarDB for PostgreSQL or PolarDB for PostgreSQL (Oracle compatible) cluster.
    // >
    // > - If the destination cluster is a PolarDB for MySQL cluster, you must specify this parameter or the `ParameterGroupId` parameter.
    shared_ptr<string> parameters_ {};
    // The latest time to start the scheduled task. Specify the time in the `YYYY-MM-DDThh:mm:ssZ` format. The time must be in UTC.
    // 
    // > - The latest start time must be at least 30 minutes later than the earliest start time.
    // >
    // > - If you specify `PlannedStartTime` but not this parameter, the latest time to start the task is `PlannedStartTime + 30 minutes` by default. For example, if you set `PlannedStartTime` to `2021-01-14T09:00:00Z` and leave this parameter empty, the task starts no later than `2021-01-14T09:30:00Z`.
    shared_ptr<string> plannedEndTime_ {};
    // The earliest time to start the scheduled task. Specify the time in the `YYYY-MM-DDThh:mm:ssZ` format. The time must be in UTC.
    // 
    // > - The start time can be any point in time within the next 24 hours. For example, if the current time is `2021-01-14T09:00:00Z`, you can set the start time to a value in the range of `2021-01-14T09:00:00Z` to `2021-01-15T09:00:00Z`.
    // >
    // > - If you leave this parameter empty, the task is executed immediately.
    shared_ptr<string> plannedStartTime_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
