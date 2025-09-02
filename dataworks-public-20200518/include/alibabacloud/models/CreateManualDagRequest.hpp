// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMANUALDAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMANUALDAGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateManualDagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateManualDagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
      DARABONBA_PTR_TO_JSON(DagParameters, dagParameters_);
      DARABONBA_PTR_TO_JSON(ExcludeNodeIds, excludeNodeIds_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(IncludeNodeIds, includeNodeIds_);
      DARABONBA_PTR_TO_JSON(NodeParameters, nodeParameters_);
      DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateManualDagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
      DARABONBA_PTR_FROM_JSON(DagParameters, dagParameters_);
      DARABONBA_PTR_FROM_JSON(ExcludeNodeIds, excludeNodeIds_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(IncludeNodeIds, includeNodeIds_);
      DARABONBA_PTR_FROM_JSON(NodeParameters, nodeParameters_);
      DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    CreateManualDagRequest() = default ;
    CreateManualDagRequest(const CreateManualDagRequest &) = default ;
    CreateManualDagRequest(CreateManualDagRequest &&) = default ;
    CreateManualDagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateManualDagRequest() = default ;
    CreateManualDagRequest& operator=(const CreateManualDagRequest &) = default ;
    CreateManualDagRequest& operator=(CreateManualDagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizDate_ != nullptr
        && this->dagParameters_ != nullptr && this->excludeNodeIds_ != nullptr && this->flowName_ != nullptr && this->includeNodeIds_ != nullptr && this->nodeParameters_ != nullptr
        && this->projectEnv_ != nullptr && this->projectName_ != nullptr; };
    // bizDate Field Functions 
    bool hasBizDate() const { return this->bizDate_ != nullptr;};
    void deleteBizDate() { this->bizDate_ = nullptr;};
    inline string bizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
    inline CreateManualDagRequest& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


    // dagParameters Field Functions 
    bool hasDagParameters() const { return this->dagParameters_ != nullptr;};
    void deleteDagParameters() { this->dagParameters_ = nullptr;};
    inline string dagParameters() const { DARABONBA_PTR_GET_DEFAULT(dagParameters_, "") };
    inline CreateManualDagRequest& setDagParameters(string dagParameters) { DARABONBA_PTR_SET_VALUE(dagParameters_, dagParameters) };


    // excludeNodeIds Field Functions 
    bool hasExcludeNodeIds() const { return this->excludeNodeIds_ != nullptr;};
    void deleteExcludeNodeIds() { this->excludeNodeIds_ = nullptr;};
    inline string excludeNodeIds() const { DARABONBA_PTR_GET_DEFAULT(excludeNodeIds_, "") };
    inline CreateManualDagRequest& setExcludeNodeIds(string excludeNodeIds) { DARABONBA_PTR_SET_VALUE(excludeNodeIds_, excludeNodeIds) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string flowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline CreateManualDagRequest& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // includeNodeIds Field Functions 
    bool hasIncludeNodeIds() const { return this->includeNodeIds_ != nullptr;};
    void deleteIncludeNodeIds() { this->includeNodeIds_ = nullptr;};
    inline string includeNodeIds() const { DARABONBA_PTR_GET_DEFAULT(includeNodeIds_, "") };
    inline CreateManualDagRequest& setIncludeNodeIds(string includeNodeIds) { DARABONBA_PTR_SET_VALUE(includeNodeIds_, includeNodeIds) };


    // nodeParameters Field Functions 
    bool hasNodeParameters() const { return this->nodeParameters_ != nullptr;};
    void deleteNodeParameters() { this->nodeParameters_ = nullptr;};
    inline string nodeParameters() const { DARABONBA_PTR_GET_DEFAULT(nodeParameters_, "") };
    inline CreateManualDagRequest& setNodeParameters(string nodeParameters) { DARABONBA_PTR_SET_VALUE(nodeParameters_, nodeParameters) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string projectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline CreateManualDagRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateManualDagRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The data timestamp. The value of the data timestamp must be one or more days before the current date. For example, if the current date is November 11, 2020, set the value to 2020-11-10 00:00:00 or earlier. Configure this parameter in the YYYY-MM-DD 00:00:00 format.
    // 
    // This parameter is required.
    std::shared_ptr<string> bizDate_ = nullptr;
    // The parameters of the manually triggered workflow, which are synchronized to all the instances in the directed acyclic graph (DAG) of the workflow. If a workflow parameter specified in DagParameters is referenced as a scheduling parameter of a node, the value of the scheduling parameter is replaced with the value of the workflow parameter.
    std::shared_ptr<string> dagParameters_ = nullptr;
    // The IDs of the nodes that do not need to be run.
    std::shared_ptr<string> excludeNodeIds_ = nullptr;
    // The name of the manually triggered workflow.
    // 
    // This parameter is required.
    std::shared_ptr<string> flowName_ = nullptr;
    // The IDs of the nodes that you want to run.
    std::shared_ptr<string> includeNodeIds_ = nullptr;
    // The parameters transmitted between nodes in the manually triggered workflow. The parameters are in the following JSON format: `{ "<ID of a node in the manually triggered workflow>": "Scheduling parameter settings of the node, which are in the same format as the parameters in the Scheduling Parameter section on the Properties tab of the DataStudio page", "<ID of a node in the manually triggered workflow>": "Scheduling parameter settings of the node, which are in the same format as the parameters in the Scheduling Parameter section on the Properties tab of the DataStudio page" }`
    std::shared_ptr<string> nodeParameters_ = nullptr;
    // The environment type of Operation Center. Valid values: PROD and DEV.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectEnv_ = nullptr;
    // The name of the workspace to which the manually triggered workflow belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
