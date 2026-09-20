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
    virtual bool empty() const override { return this->alertNoticeType_ == nullptr
        && this->alertType_ == nullptr && this->bizBeginTime_ == nullptr && this->bizEndTime_ == nullptr && this->concurrentRuns_ == nullptr && this->endBizDate_ == nullptr
        && this->excludeNodeIds_ == nullptr && this->includeNodeIds_ == nullptr && this->name_ == nullptr && this->nodeParams_ == nullptr && this->parallelism_ == nullptr
        && this->projectEnv_ == nullptr && this->rootNodeId_ == nullptr && this->startBizDate_ == nullptr && this->startFutureInstanceImmediately_ == nullptr; };
    // alertNoticeType Field Functions 
    bool hasAlertNoticeType() const { return this->alertNoticeType_ != nullptr;};
    void deleteAlertNoticeType() { this->alertNoticeType_ = nullptr;};
    inline string getAlertNoticeType() const { DARABONBA_PTR_GET_DEFAULT(alertNoticeType_, "") };
    inline RunCycleDagNodesRequest& setAlertNoticeType(string alertNoticeType) { DARABONBA_PTR_SET_VALUE(alertNoticeType_, alertNoticeType) };


    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline string getAlertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
    inline RunCycleDagNodesRequest& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // bizBeginTime Field Functions 
    bool hasBizBeginTime() const { return this->bizBeginTime_ != nullptr;};
    void deleteBizBeginTime() { this->bizBeginTime_ = nullptr;};
    inline string getBizBeginTime() const { DARABONBA_PTR_GET_DEFAULT(bizBeginTime_, "") };
    inline RunCycleDagNodesRequest& setBizBeginTime(string bizBeginTime) { DARABONBA_PTR_SET_VALUE(bizBeginTime_, bizBeginTime) };


    // bizEndTime Field Functions 
    bool hasBizEndTime() const { return this->bizEndTime_ != nullptr;};
    void deleteBizEndTime() { this->bizEndTime_ = nullptr;};
    inline string getBizEndTime() const { DARABONBA_PTR_GET_DEFAULT(bizEndTime_, "") };
    inline RunCycleDagNodesRequest& setBizEndTime(string bizEndTime) { DARABONBA_PTR_SET_VALUE(bizEndTime_, bizEndTime) };


    // concurrentRuns Field Functions 
    bool hasConcurrentRuns() const { return this->concurrentRuns_ != nullptr;};
    void deleteConcurrentRuns() { this->concurrentRuns_ = nullptr;};
    inline int32_t getConcurrentRuns() const { DARABONBA_PTR_GET_DEFAULT(concurrentRuns_, 0) };
    inline RunCycleDagNodesRequest& setConcurrentRuns(int32_t concurrentRuns) { DARABONBA_PTR_SET_VALUE(concurrentRuns_, concurrentRuns) };


    // endBizDate Field Functions 
    bool hasEndBizDate() const { return this->endBizDate_ != nullptr;};
    void deleteEndBizDate() { this->endBizDate_ = nullptr;};
    inline string getEndBizDate() const { DARABONBA_PTR_GET_DEFAULT(endBizDate_, "") };
    inline RunCycleDagNodesRequest& setEndBizDate(string endBizDate) { DARABONBA_PTR_SET_VALUE(endBizDate_, endBizDate) };


    // excludeNodeIds Field Functions 
    bool hasExcludeNodeIds() const { return this->excludeNodeIds_ != nullptr;};
    void deleteExcludeNodeIds() { this->excludeNodeIds_ = nullptr;};
    inline string getExcludeNodeIds() const { DARABONBA_PTR_GET_DEFAULT(excludeNodeIds_, "") };
    inline RunCycleDagNodesRequest& setExcludeNodeIds(string excludeNodeIds) { DARABONBA_PTR_SET_VALUE(excludeNodeIds_, excludeNodeIds) };


    // includeNodeIds Field Functions 
    bool hasIncludeNodeIds() const { return this->includeNodeIds_ != nullptr;};
    void deleteIncludeNodeIds() { this->includeNodeIds_ = nullptr;};
    inline string getIncludeNodeIds() const { DARABONBA_PTR_GET_DEFAULT(includeNodeIds_, "") };
    inline RunCycleDagNodesRequest& setIncludeNodeIds(string includeNodeIds) { DARABONBA_PTR_SET_VALUE(includeNodeIds_, includeNodeIds) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RunCycleDagNodesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeParams Field Functions 
    bool hasNodeParams() const { return this->nodeParams_ != nullptr;};
    void deleteNodeParams() { this->nodeParams_ = nullptr;};
    inline string getNodeParams() const { DARABONBA_PTR_GET_DEFAULT(nodeParams_, "") };
    inline RunCycleDagNodesRequest& setNodeParams(string nodeParams) { DARABONBA_PTR_SET_VALUE(nodeParams_, nodeParams) };


    // parallelism Field Functions 
    bool hasParallelism() const { return this->parallelism_ != nullptr;};
    void deleteParallelism() { this->parallelism_ = nullptr;};
    inline bool getParallelism() const { DARABONBA_PTR_GET_DEFAULT(parallelism_, false) };
    inline RunCycleDagNodesRequest& setParallelism(bool parallelism) { DARABONBA_PTR_SET_VALUE(parallelism_, parallelism) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string getProjectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline RunCycleDagNodesRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


    // rootNodeId Field Functions 
    bool hasRootNodeId() const { return this->rootNodeId_ != nullptr;};
    void deleteRootNodeId() { this->rootNodeId_ = nullptr;};
    inline int64_t getRootNodeId() const { DARABONBA_PTR_GET_DEFAULT(rootNodeId_, 0L) };
    inline RunCycleDagNodesRequest& setRootNodeId(int64_t rootNodeId) { DARABONBA_PTR_SET_VALUE(rootNodeId_, rootNodeId) };


    // startBizDate Field Functions 
    bool hasStartBizDate() const { return this->startBizDate_ != nullptr;};
    void deleteStartBizDate() { this->startBizDate_ = nullptr;};
    inline string getStartBizDate() const { DARABONBA_PTR_GET_DEFAULT(startBizDate_, "") };
    inline RunCycleDagNodesRequest& setStartBizDate(string startBizDate) { DARABONBA_PTR_SET_VALUE(startBizDate_, startBizDate) };


    // startFutureInstanceImmediately Field Functions 
    bool hasStartFutureInstanceImmediately() const { return this->startFutureInstanceImmediately_ != nullptr;};
    void deleteStartFutureInstanceImmediately() { this->startFutureInstanceImmediately_ = nullptr;};
    inline bool getStartFutureInstanceImmediately() const { DARABONBA_PTR_GET_DEFAULT(startFutureInstanceImmediately_, false) };
    inline RunCycleDagNodesRequest& setStartFutureInstanceImmediately(bool startFutureInstanceImmediately) { DARABONBA_PTR_SET_VALUE(startFutureInstanceImmediately_, startFutureInstanceImmediately) };


  protected:
    // The alert notification method. Valid values:
    // - SMS: text message.
    // - MAIL: email.
    // - SMS_MAIL: text message and email.
    shared_ptr<string> alertNoticeType_ {};
    // The Alarm Metric. Valid values:
    // - SUCCESS: Alerting on success.
    // - FAILURE: Alerting on failed.
    // - SUCCESS_FAILURE: Alerting on success or failed.
    shared_ptr<string> alertType_ {};
    // The start time of the node. This parameter is required only for hourly scheduled nodes. Format: HH:mm:ss. Valid values: 00:00:00 to 23:59:59.
    shared_ptr<string> bizBeginTime_ {};
    // The end time of the node. This parameter is required only for hourly scheduled nodes. Format: HH:mm:ss. Valid values: 00:00:00 to 23:59:59.
    shared_ptr<string> bizEndTime_ {};
    // The number of concurrent nodes. Valid values: 2 to 10.
    shared_ptr<int32_t> concurrentRuns_ {};
    // The end business date for data backfill. Format: yyyy-MM-dd 00:00:00.
    // 
    // This parameter is required.
    shared_ptr<string> endBizDate_ {};
    // The list of node IDs that do not require data backfill. Nodes in this list generate dry-run instances. After a dry-run instance is scheduled, it directly succeeds without executing the script content.
    shared_ptr<string> excludeNodeIds_ {};
    // The node IDs for data backfill. Separate multiple node IDs with commas (,). You can call the [ListNodes](https://help.aliyun.com/document_detail/173979.html) operation to obtain node IDs.
    // 
    // This parameter is required.
    shared_ptr<string> includeNodeIds_ {};
    // The name of the workflow.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // A JSON string in which the key is the node ID and the value is the actual parameter value.
    shared_ptr<string> nodeParams_ {};
    // Specifies whether nodes across multiple business dates can run in parallel.
    // 
    // This parameter is required.
    shared_ptr<bool> parallelism_ {};
    // The environment of the workspace. PROD indicates the production environment. DEV indicates the development environment.
    // 
    // This parameter is required.
    shared_ptr<string> projectEnv_ {};
    // The ID of the start node for data backfill. You can call the [ListNodes](https://help.aliyun.com/document_detail/173979.html) operation to obtain the node ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> rootNodeId_ {};
    // The start business date for data backfill. Format: yyyy-MM-dd 00:00:00.
    // 
    // This parameter is required.
    shared_ptr<string> startBizDate_ {};
    // Specifies whether to immediately run instances whose scheduling time is in the future. If this parameter is set to true, instances with a scheduling time later than the current time run immediately. Otherwise, the instances wait until the scheduling time.
    shared_ptr<bool> startFutureInstanceImmediately_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
