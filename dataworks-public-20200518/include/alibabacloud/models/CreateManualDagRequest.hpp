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
    virtual bool empty() const override { return this->bizDate_ == nullptr
        && this->dagParameters_ == nullptr && this->excludeNodeIds_ == nullptr && this->flowName_ == nullptr && this->includeNodeIds_ == nullptr && this->nodeParameters_ == nullptr
        && this->projectEnv_ == nullptr && this->projectName_ == nullptr; };
    // bizDate Field Functions 
    bool hasBizDate() const { return this->bizDate_ != nullptr;};
    void deleteBizDate() { this->bizDate_ = nullptr;};
    inline string getBizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
    inline CreateManualDagRequest& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


    // dagParameters Field Functions 
    bool hasDagParameters() const { return this->dagParameters_ != nullptr;};
    void deleteDagParameters() { this->dagParameters_ = nullptr;};
    inline string getDagParameters() const { DARABONBA_PTR_GET_DEFAULT(dagParameters_, "") };
    inline CreateManualDagRequest& setDagParameters(string dagParameters) { DARABONBA_PTR_SET_VALUE(dagParameters_, dagParameters) };


    // excludeNodeIds Field Functions 
    bool hasExcludeNodeIds() const { return this->excludeNodeIds_ != nullptr;};
    void deleteExcludeNodeIds() { this->excludeNodeIds_ = nullptr;};
    inline string getExcludeNodeIds() const { DARABONBA_PTR_GET_DEFAULT(excludeNodeIds_, "") };
    inline CreateManualDagRequest& setExcludeNodeIds(string excludeNodeIds) { DARABONBA_PTR_SET_VALUE(excludeNodeIds_, excludeNodeIds) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string getFlowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline CreateManualDagRequest& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // includeNodeIds Field Functions 
    bool hasIncludeNodeIds() const { return this->includeNodeIds_ != nullptr;};
    void deleteIncludeNodeIds() { this->includeNodeIds_ = nullptr;};
    inline string getIncludeNodeIds() const { DARABONBA_PTR_GET_DEFAULT(includeNodeIds_, "") };
    inline CreateManualDagRequest& setIncludeNodeIds(string includeNodeIds) { DARABONBA_PTR_SET_VALUE(includeNodeIds_, includeNodeIds) };


    // nodeParameters Field Functions 
    bool hasNodeParameters() const { return this->nodeParameters_ != nullptr;};
    void deleteNodeParameters() { this->nodeParameters_ = nullptr;};
    inline string getNodeParameters() const { DARABONBA_PTR_GET_DEFAULT(nodeParameters_, "") };
    inline CreateManualDagRequest& setNodeParameters(string nodeParameters) { DARABONBA_PTR_SET_VALUE(nodeParameters_, nodeParameters) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string getProjectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline CreateManualDagRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateManualDagRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The value of the business date must be less than or equal to the current date minus one day. For example, if today is November 11, 2020, the business date must be 2020-11-10 00:00:00 or an earlier date. The hour, minute, and second fields of the business date must all be set to 00.
    // 
    // This parameter is required.
    shared_ptr<string> bizDate_ {};
    // The workflow parameters. These parameters are synchronized to all instances of the current DAG. If the scheduling parameters of an internal node reference the workflow parameters in DagParameters, the corresponding parameter values of the node are replaced with the workflow parameters in DagParameters.
    shared_ptr<string> dagParameters_ {};
    // The list of IDs of the nodes that do not need to be run.
    shared_ptr<string> excludeNodeIds_ {};
    // The name of the manual workflow.
    // 
    // This parameter is required.
    shared_ptr<string> flowName_ {};
    // The list of IDs of the nodes to be run.
    shared_ptr<string> includeNodeIds_ {};
    // The node parameter information passed when the manual workflow is executed, in JSON format:
    // `
    // {
    //      "<A node ID inside the manual workflow>": "The scheduling parameter information of the node, consistent with the parameter format in the data development scheduling configuration", 
    //      "<A node ID inside the manual workflow>": "The scheduling parameter information of the node, consistent with the parameter format in the data development scheduling configuration"
    // }
    // `
    shared_ptr<string> nodeParameters_ {};
    // The environment identifier of the Scheduling Operation Center. PROD indicates the production environment, and DEV indicates the development environment.
    // 
    // This parameter is required.
    shared_ptr<string> projectEnv_ {};
    // The English name of the workspace to which the manual workflow belongs.
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
