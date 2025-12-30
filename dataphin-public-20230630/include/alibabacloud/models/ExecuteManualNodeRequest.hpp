// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEMANUALNODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEMANUALNODEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ExecuteManualNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteManualNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(ExecuteCommand, executeCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteManualNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(ExecuteCommand, executeCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ExecuteManualNodeRequest() = default ;
    ExecuteManualNodeRequest(const ExecuteManualNodeRequest &) = default ;
    ExecuteManualNodeRequest(ExecuteManualNodeRequest &&) = default ;
    ExecuteManualNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteManualNodeRequest() = default ;
    ExecuteManualNodeRequest& operator=(const ExecuteManualNodeRequest &) = default ;
    ExecuteManualNodeRequest& operator=(ExecuteManualNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExecuteCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExecuteCommand& obj) { 
        DARABONBA_PTR_TO_JSON(EndBizDate, endBizDate_);
        DARABONBA_PTR_TO_JSON(FlowName, flowName_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(ParamList, paramList_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(StartBizDate, startBizDate_);
      };
      friend void from_json(const Darabonba::Json& j, ExecuteCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(EndBizDate, endBizDate_);
        DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(StartBizDate, startBizDate_);
      };
      ExecuteCommand() = default ;
      ExecuteCommand(const ExecuteCommand &) = default ;
      ExecuteCommand(ExecuteCommand &&) = default ;
      ExecuteCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExecuteCommand() = default ;
      ExecuteCommand& operator=(const ExecuteCommand &) = default ;
      ExecuteCommand& operator=(ExecuteCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ParamList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ParamList& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, ParamList& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        ParamList() = default ;
        ParamList(const ParamList &) = default ;
        ParamList(ParamList &&) = default ;
        ParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ParamList() = default ;
        ParamList& operator=(const ParamList &) = default ;
        ParamList& operator=(ParamList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline ParamList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline ParamList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->endBizDate_ == nullptr
        && this->flowName_ == nullptr && this->nodeId_ == nullptr && this->paramList_ == nullptr && this->projectId_ == nullptr && this->startBizDate_ == nullptr; };
      // endBizDate Field Functions 
      bool hasEndBizDate() const { return this->endBizDate_ != nullptr;};
      void deleteEndBizDate() { this->endBizDate_ = nullptr;};
      inline string getEndBizDate() const { DARABONBA_PTR_GET_DEFAULT(endBizDate_, "") };
      inline ExecuteCommand& setEndBizDate(string endBizDate) { DARABONBA_PTR_SET_VALUE(endBizDate_, endBizDate) };


      // flowName Field Functions 
      bool hasFlowName() const { return this->flowName_ != nullptr;};
      void deleteFlowName() { this->flowName_ = nullptr;};
      inline string getFlowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
      inline ExecuteCommand& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline ExecuteCommand& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // paramList Field Functions 
      bool hasParamList() const { return this->paramList_ != nullptr;};
      void deleteParamList() { this->paramList_ = nullptr;};
      inline const vector<ExecuteCommand::ParamList> & getParamList() const { DARABONBA_PTR_GET_CONST(paramList_, vector<ExecuteCommand::ParamList>) };
      inline vector<ExecuteCommand::ParamList> getParamList() { DARABONBA_PTR_GET(paramList_, vector<ExecuteCommand::ParamList>) };
      inline ExecuteCommand& setParamList(const vector<ExecuteCommand::ParamList> & paramList) { DARABONBA_PTR_SET_VALUE(paramList_, paramList) };
      inline ExecuteCommand& setParamList(vector<ExecuteCommand::ParamList> && paramList) { DARABONBA_PTR_SET_RVALUE(paramList_, paramList) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline ExecuteCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // startBizDate Field Functions 
      bool hasStartBizDate() const { return this->startBizDate_ != nullptr;};
      void deleteStartBizDate() { this->startBizDate_ = nullptr;};
      inline string getStartBizDate() const { DARABONBA_PTR_GET_DEFAULT(startBizDate_, "") };
      inline ExecuteCommand& setStartBizDate(string startBizDate) { DARABONBA_PTR_SET_VALUE(startBizDate_, startBizDate) };


    protected:
      // This parameter is required.
      shared_ptr<string> endBizDate_ {};
      shared_ptr<string> flowName_ {};
      // This parameter is required.
      shared_ptr<string> nodeId_ {};
      shared_ptr<vector<ExecuteCommand::ParamList>> paramList_ {};
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
      // This parameter is required.
      shared_ptr<string> startBizDate_ {};
    };

    virtual bool empty() const override { return this->env_ == nullptr
        && this->executeCommand_ == nullptr && this->opTenantId_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline ExecuteManualNodeRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // executeCommand Field Functions 
    bool hasExecuteCommand() const { return this->executeCommand_ != nullptr;};
    void deleteExecuteCommand() { this->executeCommand_ = nullptr;};
    inline const ExecuteManualNodeRequest::ExecuteCommand & getExecuteCommand() const { DARABONBA_PTR_GET_CONST(executeCommand_, ExecuteManualNodeRequest::ExecuteCommand) };
    inline ExecuteManualNodeRequest::ExecuteCommand getExecuteCommand() { DARABONBA_PTR_GET(executeCommand_, ExecuteManualNodeRequest::ExecuteCommand) };
    inline ExecuteManualNodeRequest& setExecuteCommand(const ExecuteManualNodeRequest::ExecuteCommand & executeCommand) { DARABONBA_PTR_SET_VALUE(executeCommand_, executeCommand) };
    inline ExecuteManualNodeRequest& setExecuteCommand(ExecuteManualNodeRequest::ExecuteCommand && executeCommand) { DARABONBA_PTR_SET_RVALUE(executeCommand_, executeCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ExecuteManualNodeRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    shared_ptr<string> env_ {};
    // This parameter is required.
    shared_ptr<ExecuteManualNodeRequest::ExecuteCommand> executeCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
