// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNMANUALDAGNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNMANUALDAGNODESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class RunManualDagNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunManualDagNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
      DARABONBA_PTR_TO_JSON(DagParameters, dagParameters_);
      DARABONBA_PTR_TO_JSON(EndBizDate, endBizDate_);
      DARABONBA_PTR_TO_JSON(ExcludeNodeIds, excludeNodeIds_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(IncludeNodeIds, includeNodeIds_);
      DARABONBA_PTR_TO_JSON(NodeParameters, nodeParameters_);
      DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(StartBizDate, startBizDate_);
    };
    friend void from_json(const Darabonba::Json& j, RunManualDagNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
      DARABONBA_PTR_FROM_JSON(DagParameters, dagParameters_);
      DARABONBA_PTR_FROM_JSON(EndBizDate, endBizDate_);
      DARABONBA_PTR_FROM_JSON(ExcludeNodeIds, excludeNodeIds_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(IncludeNodeIds, includeNodeIds_);
      DARABONBA_PTR_FROM_JSON(NodeParameters, nodeParameters_);
      DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(StartBizDate, startBizDate_);
    };
    RunManualDagNodesRequest() = default ;
    RunManualDagNodesRequest(const RunManualDagNodesRequest &) = default ;
    RunManualDagNodesRequest(RunManualDagNodesRequest &&) = default ;
    RunManualDagNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunManualDagNodesRequest() = default ;
    RunManualDagNodesRequest& operator=(const RunManualDagNodesRequest &) = default ;
    RunManualDagNodesRequest& operator=(RunManualDagNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizDate_ == nullptr
        && this->dagParameters_ == nullptr && this->endBizDate_ == nullptr && this->excludeNodeIds_ == nullptr && this->flowName_ == nullptr && this->includeNodeIds_ == nullptr
        && this->nodeParameters_ == nullptr && this->projectEnv_ == nullptr && this->projectId_ == nullptr && this->projectName_ == nullptr && this->startBizDate_ == nullptr; };
    // bizDate Field Functions 
    bool hasBizDate() const { return this->bizDate_ != nullptr;};
    void deleteBizDate() { this->bizDate_ = nullptr;};
    inline string getBizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
    inline RunManualDagNodesRequest& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


    // dagParameters Field Functions 
    bool hasDagParameters() const { return this->dagParameters_ != nullptr;};
    void deleteDagParameters() { this->dagParameters_ = nullptr;};
    inline string getDagParameters() const { DARABONBA_PTR_GET_DEFAULT(dagParameters_, "") };
    inline RunManualDagNodesRequest& setDagParameters(string dagParameters) { DARABONBA_PTR_SET_VALUE(dagParameters_, dagParameters) };


    // endBizDate Field Functions 
    bool hasEndBizDate() const { return this->endBizDate_ != nullptr;};
    void deleteEndBizDate() { this->endBizDate_ = nullptr;};
    inline string getEndBizDate() const { DARABONBA_PTR_GET_DEFAULT(endBizDate_, "") };
    inline RunManualDagNodesRequest& setEndBizDate(string endBizDate) { DARABONBA_PTR_SET_VALUE(endBizDate_, endBizDate) };


    // excludeNodeIds Field Functions 
    bool hasExcludeNodeIds() const { return this->excludeNodeIds_ != nullptr;};
    void deleteExcludeNodeIds() { this->excludeNodeIds_ = nullptr;};
    inline string getExcludeNodeIds() const { DARABONBA_PTR_GET_DEFAULT(excludeNodeIds_, "") };
    inline RunManualDagNodesRequest& setExcludeNodeIds(string excludeNodeIds) { DARABONBA_PTR_SET_VALUE(excludeNodeIds_, excludeNodeIds) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string getFlowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline RunManualDagNodesRequest& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // includeNodeIds Field Functions 
    bool hasIncludeNodeIds() const { return this->includeNodeIds_ != nullptr;};
    void deleteIncludeNodeIds() { this->includeNodeIds_ = nullptr;};
    inline string getIncludeNodeIds() const { DARABONBA_PTR_GET_DEFAULT(includeNodeIds_, "") };
    inline RunManualDagNodesRequest& setIncludeNodeIds(string includeNodeIds) { DARABONBA_PTR_SET_VALUE(includeNodeIds_, includeNodeIds) };


    // nodeParameters Field Functions 
    bool hasNodeParameters() const { return this->nodeParameters_ != nullptr;};
    void deleteNodeParameters() { this->nodeParameters_ = nullptr;};
    inline string getNodeParameters() const { DARABONBA_PTR_GET_DEFAULT(nodeParameters_, "") };
    inline RunManualDagNodesRequest& setNodeParameters(string nodeParameters) { DARABONBA_PTR_SET_VALUE(nodeParameters_, nodeParameters) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string getProjectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline RunManualDagNodesRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline RunManualDagNodesRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline RunManualDagNodesRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // startBizDate Field Functions 
    bool hasStartBizDate() const { return this->startBizDate_ != nullptr;};
    void deleteStartBizDate() { this->startBizDate_ = nullptr;};
    inline string getStartBizDate() const { DARABONBA_PTR_GET_DEFAULT(startBizDate_, "") };
    inline RunManualDagNodesRequest& setStartBizDate(string startBizDate) { DARABONBA_PTR_SET_VALUE(startBizDate_, startBizDate) };


  protected:
    // The business date. The value must be less than or equal to the current date minus 1 day. For example, if today is November 11, 2020, the business date must be 00:00:00 on November 10, 2020 or an earlier date. The hour, minute, and second values of the business date must all be set to 00.
    // 
    // This parameter is used together with the StartBizDate and EndBizDate parameters. You can configure only one of BizDate or the StartBizDate and EndBizDate pair.
    // 
    // Format: `yyyy-MM-dd HH:mm:ss`. Example: `2020-11-11 00:00:00`.
    shared_ptr<string> bizDate_ {};
    // This parameter is synchronized to all instances of the current dagrun. If the scheduling parameters of internal nodes ([supported node types](https://help.aliyun.com/document_detail/147245.html)) reference workflow parameters in DagParameters, the corresponding parameter values of the nodes are replaced with the workflow parameters in DagParameters.
    shared_ptr<string> dagParameters_ {};
    // The business end date. Format: yyyy-MM-dd HH:mm:ss.
    // 
    // This parameter is used together with the StartBizDate parameter. You can configure only one of the StartBizDate and EndBizDate pair or the BizDate parameter.
    shared_ptr<string> endBizDate_ {};
    // The IDs of nodes that you do not want to run within the workflow. The specified nodes generate dry-run instances during execution. After a dry-run instance is scheduled, it immediately succeeds without executing the script content. Separate multiple node IDs with commas (,).
    // 
    // The ExcludeNodeIds parameter takes effect only when used together with the IncludeNodeIds parameter.
    shared_ptr<string> excludeNodeIds_ {};
    // The name of the manual workflow.
    // 
    // This parameter is required.
    shared_ptr<string> flowName_ {};
    // The IDs of specific nodes to run within the manual workflow. Separate multiple node IDs with commas (,).
    shared_ptr<string> includeNodeIds_ {};
    // The node parameter information passed when the manual workflow is executed. This corresponds to the **scheduling parameters** configured in the **Properties** of nodes within the manual workflow.
    // 
    // A JSON format: { "<Node ID within the manual workflow>": "Scheduling parameter information of the node, in the same format as the parameters in the data development scheduling configuration", "<Node ID within the manual workflow>": "Scheduling parameter information of the node, in the same format as the parameters in the data development scheduling configuration" }
    shared_ptr<string> nodeParameters_ {};
    // The environment identifier of the Operation Center. PROD indicates the production environment. DEV indicates the development environment.
    // 
    // This parameter is required.
    shared_ptr<string> projectEnv_ {};
    // The project ID.
    shared_ptr<int64_t> projectId_ {};
    // The name of the workspace to which the manual workflow belongs.
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The business start date. Format: yyyy-MM-dd HH:mm:ss.
    // 
    // This parameter is used together with the EndBizDate parameter. You can configure only one of the StartBizDate and EndBizDate pair or the BizDate parameter.
    shared_ptr<string> startBizDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
