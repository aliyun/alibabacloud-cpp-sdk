// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIAGNOSTICTASKREQUESTAIJOBLOGINFOAIJOBLOGS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIAGNOSTICTASKREQUESTAIJOBLOGINFOAIJOBLOGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs& obj) { 
      DARABONBA_PTR_TO_JSON(AiInstance, aiInstance_);
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(AiInstance, aiInstance_);
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs() = default ;
    CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs(const CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs &) = default ;
    CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs(CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs &&) = default ;
    CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs() = default ;
    CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs& operator=(const CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs &) = default ;
    CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs& operator=(CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aiInstance_ != nullptr
        && this->logs_ != nullptr && this->nodeId_ != nullptr; };
    // aiInstance Field Functions 
    bool hasAiInstance() const { return this->aiInstance_ != nullptr;};
    void deleteAiInstance() { this->aiInstance_ = nullptr;};
    inline string aiInstance() const { DARABONBA_PTR_GET_DEFAULT(aiInstance_, "") };
    inline CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs& setAiInstance(string aiInstance) { DARABONBA_PTR_SET_VALUE(aiInstance_, aiInstance) };


    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<Models::CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs> & logs() const { DARABONBA_PTR_GET_CONST(logs_, vector<Models::CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs>) };
    inline vector<Models::CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs> logs() { DARABONBA_PTR_GET(logs_, vector<Models::CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs>) };
    inline CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs& setLogs(const vector<Models::CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs& setLogs(vector<Models::CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogs& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    // The instance ID.
    std::shared_ptr<string> aiInstance_ = nullptr;
    // The logs.
    std::shared_ptr<vector<Models::CreateDiagnosticTaskRequestAiJobLogInfoAiJobLogsLogs>> logs_ = nullptr;
    // The node ID.
    std::shared_ptr<string> nodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
