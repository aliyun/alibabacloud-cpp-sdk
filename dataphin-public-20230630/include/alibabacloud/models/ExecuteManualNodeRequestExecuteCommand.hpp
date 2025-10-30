// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEMANUALNODEREQUESTEXECUTECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEMANUALNODEREQUESTEXECUTECOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ExecuteManualNodeRequestExecuteCommandParamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ExecuteManualNodeRequestExecuteCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteManualNodeRequestExecuteCommand& obj) { 
      DARABONBA_PTR_TO_JSON(EndBizDate, endBizDate_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(ParamList, paramList_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(StartBizDate, startBizDate_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteManualNodeRequestExecuteCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(EndBizDate, endBizDate_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(StartBizDate, startBizDate_);
    };
    ExecuteManualNodeRequestExecuteCommand() = default ;
    ExecuteManualNodeRequestExecuteCommand(const ExecuteManualNodeRequestExecuteCommand &) = default ;
    ExecuteManualNodeRequestExecuteCommand(ExecuteManualNodeRequestExecuteCommand &&) = default ;
    ExecuteManualNodeRequestExecuteCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteManualNodeRequestExecuteCommand() = default ;
    ExecuteManualNodeRequestExecuteCommand& operator=(const ExecuteManualNodeRequestExecuteCommand &) = default ;
    ExecuteManualNodeRequestExecuteCommand& operator=(ExecuteManualNodeRequestExecuteCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endBizDate_ == nullptr
        && return this->flowName_ == nullptr && return this->nodeId_ == nullptr && return this->paramList_ == nullptr && return this->projectId_ == nullptr && return this->startBizDate_ == nullptr; };
    // endBizDate Field Functions 
    bool hasEndBizDate() const { return this->endBizDate_ != nullptr;};
    void deleteEndBizDate() { this->endBizDate_ = nullptr;};
    inline string endBizDate() const { DARABONBA_PTR_GET_DEFAULT(endBizDate_, "") };
    inline ExecuteManualNodeRequestExecuteCommand& setEndBizDate(string endBizDate) { DARABONBA_PTR_SET_VALUE(endBizDate_, endBizDate) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string flowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline ExecuteManualNodeRequestExecuteCommand& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ExecuteManualNodeRequestExecuteCommand& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // paramList Field Functions 
    bool hasParamList() const { return this->paramList_ != nullptr;};
    void deleteParamList() { this->paramList_ = nullptr;};
    inline const vector<Models::ExecuteManualNodeRequestExecuteCommandParamList> & paramList() const { DARABONBA_PTR_GET_CONST(paramList_, vector<Models::ExecuteManualNodeRequestExecuteCommandParamList>) };
    inline vector<Models::ExecuteManualNodeRequestExecuteCommandParamList> paramList() { DARABONBA_PTR_GET(paramList_, vector<Models::ExecuteManualNodeRequestExecuteCommandParamList>) };
    inline ExecuteManualNodeRequestExecuteCommand& setParamList(const vector<Models::ExecuteManualNodeRequestExecuteCommandParamList> & paramList) { DARABONBA_PTR_SET_VALUE(paramList_, paramList) };
    inline ExecuteManualNodeRequestExecuteCommand& setParamList(vector<Models::ExecuteManualNodeRequestExecuteCommandParamList> && paramList) { DARABONBA_PTR_SET_RVALUE(paramList_, paramList) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ExecuteManualNodeRequestExecuteCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // startBizDate Field Functions 
    bool hasStartBizDate() const { return this->startBizDate_ != nullptr;};
    void deleteStartBizDate() { this->startBizDate_ = nullptr;};
    inline string startBizDate() const { DARABONBA_PTR_GET_DEFAULT(startBizDate_, "") };
    inline ExecuteManualNodeRequestExecuteCommand& setStartBizDate(string startBizDate) { DARABONBA_PTR_SET_VALUE(startBizDate_, startBizDate) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> endBizDate_ = nullptr;
    std::shared_ptr<string> flowName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<vector<Models::ExecuteManualNodeRequestExecuteCommandParamList>> paramList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startBizDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
