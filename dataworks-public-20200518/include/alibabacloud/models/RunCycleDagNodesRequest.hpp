// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCYCLEDAGNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCYCLEDAGNODESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class RunCycleDagNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCycleDagNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertNoticeType, alertNoticeType_);
      DARABONBA_PTR_TO_JSON(AlertType, alertType_);
      DARABONBA_PTR_TO_JSON(BizBeginTime, bizBeginTime_);
      DARABONBA_PTR_TO_JSON(BizEndTime, bizEndTime_);
      DARABONBA_PTR_TO_JSON(ConcurrentRuns, concurrentRuns_);
      DARABONBA_PTR_TO_JSON(EndBizDate, endBizDate_);
      DARABONBA_PTR_TO_JSON(ExcludeNodeIds, excludeNodeIds_);
      DARABONBA_PTR_TO_JSON(IncludeNodeIds, includeNodeIds_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NodeParams, nodeParams_);
      DARABONBA_PTR_TO_JSON(Parallelism, parallelism_);
      DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_TO_JSON(RootNodeId, rootNodeId_);
      DARABONBA_PTR_TO_JSON(StartBizDate, startBizDate_);
      DARABONBA_PTR_TO_JSON(StartFutureInstanceImmediately, startFutureInstanceImmediately_);
    };
    friend void from_json(const Darabonba::Json& j, RunCycleDagNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertNoticeType, alertNoticeType_);
      DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
      DARABONBA_PTR_FROM_JSON(BizBeginTime, bizBeginTime_);
      DARABONBA_PTR_FROM_JSON(BizEndTime, bizEndTime_);
      DARABONBA_PTR_FROM_JSON(ConcurrentRuns, concurrentRuns_);
      DARABONBA_PTR_FROM_JSON(EndBizDate, endBizDate_);
      DARABONBA_PTR_FROM_JSON(ExcludeNodeIds, excludeNodeIds_);
      DARABONBA_PTR_FROM_JSON(IncludeNodeIds, includeNodeIds_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NodeParams, nodeParams_);
      DARABONBA_PTR_FROM_JSON(Parallelism, parallelism_);
      DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_FROM_JSON(RootNodeId, rootNodeId_);
      DARABONBA_PTR_FROM_JSON(StartBizDate, startBizDate_);
      DARABONBA_PTR_FROM_JSON(StartFutureInstanceImmediately, startFutureInstanceImmediately_);
    };
    RunCycleDagNodesRequest() = default ;
    RunCycleDagNodesRequest(const RunCycleDagNodesRequest &) = default ;
    RunCycleDagNodesRequest(RunCycleDagNodesRequest &&) = default ;
    RunCycleDagNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCycleDagNodesRequest() = default ;
    RunCycleDagNodesRequest& operator=(const RunCycleDagNodesRequest &) = default ;
    RunCycleDagNodesRequest& operator=(RunCycleDagNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertNoticeType_ != nullptr
        && this->alertType_ != nullptr && this->bizBeginTime_ != nullptr && this->bizEndTime_ != nullptr && this->concurrentRuns_ != nullptr && this->endBizDate_ != nullptr
        && this->excludeNodeIds_ != nullptr && this->includeNodeIds_ != nullptr && this->name_ != nullptr && this->nodeParams_ != nullptr && this->parallelism_ != nullptr
        && this->projectEnv_ != nullptr && this->rootNodeId_ != nullptr && this->startBizDate_ != nullptr && this->startFutureInstanceImmediately_ != nullptr; };
    // alertNoticeType Field Functions 
    bool hasAlertNoticeType() const { return this->alertNoticeType_ != nullptr;};
    void deleteAlertNoticeType() { this->alertNoticeType_ = nullptr;};
    inline string alertNoticeType() const { DARABONBA_PTR_GET_DEFAULT(alertNoticeType_, "") };
    inline RunCycleDagNodesRequest& setAlertNoticeType(string alertNoticeType) { DARABONBA_PTR_SET_VALUE(alertNoticeType_, alertNoticeType) };


    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline string alertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
    inline RunCycleDagNodesRequest& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // bizBeginTime Field Functions 
    bool hasBizBeginTime() const { return this->bizBeginTime_ != nullptr;};
    void deleteBizBeginTime() { this->bizBeginTime_ = nullptr;};
    inline string bizBeginTime() const { DARABONBA_PTR_GET_DEFAULT(bizBeginTime_, "") };
    inline RunCycleDagNodesRequest& setBizBeginTime(string bizBeginTime) { DARABONBA_PTR_SET_VALUE(bizBeginTime_, bizBeginTime) };


    // bizEndTime Field Functions 
    bool hasBizEndTime() const { return this->bizEndTime_ != nullptr;};
    void deleteBizEndTime() { this->bizEndTime_ = nullptr;};
    inline string bizEndTime() const { DARABONBA_PTR_GET_DEFAULT(bizEndTime_, "") };
    inline RunCycleDagNodesRequest& setBizEndTime(string bizEndTime) { DARABONBA_PTR_SET_VALUE(bizEndTime_, bizEndTime) };


    // concurrentRuns Field Functions 
    bool hasConcurrentRuns() const { return this->concurrentRuns_ != nullptr;};
    void deleteConcurrentRuns() { this->concurrentRuns_ = nullptr;};
    inline int32_t concurrentRuns() const { DARABONBA_PTR_GET_DEFAULT(concurrentRuns_, 0) };
    inline RunCycleDagNodesRequest& setConcurrentRuns(int32_t concurrentRuns) { DARABONBA_PTR_SET_VALUE(concurrentRuns_, concurrentRuns) };


    // endBizDate Field Functions 
    bool hasEndBizDate() const { return this->endBizDate_ != nullptr;};
    void deleteEndBizDate() { this->endBizDate_ = nullptr;};
    inline string endBizDate() const { DARABONBA_PTR_GET_DEFAULT(endBizDate_, "") };
    inline RunCycleDagNodesRequest& setEndBizDate(string endBizDate) { DARABONBA_PTR_SET_VALUE(endBizDate_, endBizDate) };


    // excludeNodeIds Field Functions 
    bool hasExcludeNodeIds() const { return this->excludeNodeIds_ != nullptr;};
    void deleteExcludeNodeIds() { this->excludeNodeIds_ = nullptr;};
    inline string excludeNodeIds() const { DARABONBA_PTR_GET_DEFAULT(excludeNodeIds_, "") };
    inline RunCycleDagNodesRequest& setExcludeNodeIds(string excludeNodeIds) { DARABONBA_PTR_SET_VALUE(excludeNodeIds_, excludeNodeIds) };


    // includeNodeIds Field Functions 
    bool hasIncludeNodeIds() const { return this->includeNodeIds_ != nullptr;};
    void deleteIncludeNodeIds() { this->includeNodeIds_ = nullptr;};
    inline string includeNodeIds() const { DARABONBA_PTR_GET_DEFAULT(includeNodeIds_, "") };
    inline RunCycleDagNodesRequest& setIncludeNodeIds(string includeNodeIds) { DARABONBA_PTR_SET_VALUE(includeNodeIds_, includeNodeIds) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RunCycleDagNodesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeParams Field Functions 
    bool hasNodeParams() const { return this->nodeParams_ != nullptr;};
    void deleteNodeParams() { this->nodeParams_ = nullptr;};
    inline string nodeParams() const { DARABONBA_PTR_GET_DEFAULT(nodeParams_, "") };
    inline RunCycleDagNodesRequest& setNodeParams(string nodeParams) { DARABONBA_PTR_SET_VALUE(nodeParams_, nodeParams) };


    // parallelism Field Functions 
    bool hasParallelism() const { return this->parallelism_ != nullptr;};
    void deleteParallelism() { this->parallelism_ = nullptr;};
    inline bool parallelism() const { DARABONBA_PTR_GET_DEFAULT(parallelism_, false) };
    inline RunCycleDagNodesRequest& setParallelism(bool parallelism) { DARABONBA_PTR_SET_VALUE(parallelism_, parallelism) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string projectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline RunCycleDagNodesRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


    // rootNodeId Field Functions 
    bool hasRootNodeId() const { return this->rootNodeId_ != nullptr;};
    void deleteRootNodeId() { this->rootNodeId_ = nullptr;};
    inline int64_t rootNodeId() const { DARABONBA_PTR_GET_DEFAULT(rootNodeId_, 0L) };
    inline RunCycleDagNodesRequest& setRootNodeId(int64_t rootNodeId) { DARABONBA_PTR_SET_VALUE(rootNodeId_, rootNodeId) };


    // startBizDate Field Functions 
    bool hasStartBizDate() const { return this->startBizDate_ != nullptr;};
    void deleteStartBizDate() { this->startBizDate_ = nullptr;};
    inline string startBizDate() const { DARABONBA_PTR_GET_DEFAULT(startBizDate_, "") };
    inline RunCycleDagNodesRequest& setStartBizDate(string startBizDate) { DARABONBA_PTR_SET_VALUE(startBizDate_, startBizDate) };


    // startFutureInstanceImmediately Field Functions 
    bool hasStartFutureInstanceImmediately() const { return this->startFutureInstanceImmediately_ != nullptr;};
    void deleteStartFutureInstanceImmediately() { this->startFutureInstanceImmediately_ = nullptr;};
    inline bool startFutureInstanceImmediately() const { DARABONBA_PTR_GET_DEFAULT(startFutureInstanceImmediately_, false) };
    inline RunCycleDagNodesRequest& setStartFutureInstanceImmediately(bool startFutureInstanceImmediately) { DARABONBA_PTR_SET_VALUE(startFutureInstanceImmediately_, startFutureInstanceImmediately) };


  protected:
    // The alert notification method. Valid values:
    // 
    // *   SMS
    // *   MAIL
    // *   SMS_MAIL
    std::shared_ptr<string> alertNoticeType_ = nullptr;
    // The alert type. Valid values:
    // 
    // *   SUCCESS: An alert is generated when data backfill succeeds.
    // *   FAILURE: An alert is generated when data backfill fails.
    // *   SUCCESS_FAILURE: An alert is generated regardless of whether data backfill succeeds or fails.
    std::shared_ptr<string> alertType_ = nullptr;
    // The time when the node starts to run. This parameter is required only for auto triggered nodes that are scheduled by hour. Specify the value in the HH:mm:ss format. Valid values: 00:00:00 to 23:59:59.
    std::shared_ptr<string> bizBeginTime_ = nullptr;
    // The time when the node stops running. This parameter is required only for auto triggered nodes that are scheduled by hour. Specify the value in the HH:mm:ss format. Valid values: 00:00:00 to 23:59:59.
    std::shared_ptr<string> bizEndTime_ = nullptr;
    // The number of nodes that can run in parallel. Valid values: 2 to 10.
    std::shared_ptr<int32_t> concurrentRuns_ = nullptr;
    // The data timestamp at which data is no longer backfilled. Specify the value in the yyyy-MM-dd 00:00:00 format.
    // 
    // This parameter is required.
    std::shared_ptr<string> endBizDate_ = nullptr;
    // The IDs of the nodes for which no data needs to be backfilled. The system generates dry-run instances for all these nodes. After these dry-run instances are scheduled, the statuses of these instances are directly set to successful, but the script is not run.
    std::shared_ptr<string> excludeNodeIds_ = nullptr;
    // The ID of the node for which you want to backfill data. If you want to backfill data for multiple nodes, separate the IDs of the nodes with commas (,). You can call the [ListNodes](https://help.aliyun.com/document_detail/173979.html) operation to obtain the node ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> includeNodeIds_ = nullptr;
    // The name of the workflow.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The parameters that need to be configured for the node. Set this parameter to a JSON string. The key indicates the ID of the node, and the value indicates the actual values of the parameters.
    std::shared_ptr<string> nodeParams_ = nullptr;
    // Specifies whether data can be backfilled for multiple nodes at the same time.
    // 
    // This parameter is required.
    std::shared_ptr<bool> parallelism_ = nullptr;
    // The environment of the workspace. Valid values: PROD and DEV. The value PROD indicates the production environment, and the value DEV indicates the development environment.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectEnv_ = nullptr;
    // The ID of the node for which data is first backfilled. You can call the [ListNodes](https://help.aliyun.com/document_detail/173979.html) operation to obtain the node ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> rootNodeId_ = nullptr;
    // The data timestamp at which data starts to be backfilled. Specify the value in the yyyy-MM-dd 00:00:00 format.
    // 
    // This parameter is required.
    std::shared_ptr<string> startBizDate_ = nullptr;
    // Specifies whether to immediately run an instance that is scheduled to run in the future. If you set this parameter to true, the instance that is scheduled to run in the future is run immediately. Otherwise, the instance is run as scheduled.
    std::shared_ptr<bool> startFutureInstanceImmediately_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
