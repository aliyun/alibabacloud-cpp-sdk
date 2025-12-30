// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIAGNOSTICTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIAGNOSTICTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateDiagnosticTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDiagnosticTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AiJobLogInfo, aiJobLogInfo_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DiagnosticType, diagnosticType_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDiagnosticTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AiJobLogInfo, aiJobLogInfo_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DiagnosticType, diagnosticType_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
    };
    CreateDiagnosticTaskRequest() = default ;
    CreateDiagnosticTaskRequest(const CreateDiagnosticTaskRequest &) = default ;
    CreateDiagnosticTaskRequest(CreateDiagnosticTaskRequest &&) = default ;
    CreateDiagnosticTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDiagnosticTaskRequest() = default ;
    CreateDiagnosticTaskRequest& operator=(const CreateDiagnosticTaskRequest &) = default ;
    CreateDiagnosticTaskRequest& operator=(CreateDiagnosticTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AiJobLogInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AiJobLogInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AiJobLogs, aiJobLogs_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, AiJobLogInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AiJobLogs, aiJobLogs_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      };
      AiJobLogInfo() = default ;
      AiJobLogInfo(const AiJobLogInfo &) = default ;
      AiJobLogInfo(AiJobLogInfo &&) = default ;
      AiJobLogInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AiJobLogInfo() = default ;
      AiJobLogInfo& operator=(const AiJobLogInfo &) = default ;
      AiJobLogInfo& operator=(AiJobLogInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AiJobLogs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AiJobLogs& obj) { 
          DARABONBA_PTR_TO_JSON(AiInstance, aiInstance_);
          DARABONBA_PTR_TO_JSON(Logs, logs_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        };
        friend void from_json(const Darabonba::Json& j, AiJobLogs& obj) { 
          DARABONBA_PTR_FROM_JSON(AiInstance, aiInstance_);
          DARABONBA_PTR_FROM_JSON(Logs, logs_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        };
        AiJobLogs() = default ;
        AiJobLogs(const AiJobLogs &) = default ;
        AiJobLogs(AiJobLogs &&) = default ;
        AiJobLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AiJobLogs() = default ;
        AiJobLogs& operator=(const AiJobLogs &) = default ;
        AiJobLogs& operator=(AiJobLogs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Logs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Logs& obj) { 
            DARABONBA_PTR_TO_JSON(Datetime, datetime_);
            DARABONBA_PTR_TO_JSON(LogContent, logContent_);
          };
          friend void from_json(const Darabonba::Json& j, Logs& obj) { 
            DARABONBA_PTR_FROM_JSON(Datetime, datetime_);
            DARABONBA_PTR_FROM_JSON(LogContent, logContent_);
          };
          Logs() = default ;
          Logs(const Logs &) = default ;
          Logs(Logs &&) = default ;
          Logs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Logs() = default ;
          Logs& operator=(const Logs &) = default ;
          Logs& operator=(Logs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->datetime_ == nullptr
        && this->logContent_ == nullptr; };
          // datetime Field Functions 
          bool hasDatetime() const { return this->datetime_ != nullptr;};
          void deleteDatetime() { this->datetime_ = nullptr;};
          inline string getDatetime() const { DARABONBA_PTR_GET_DEFAULT(datetime_, "") };
          inline Logs& setDatetime(string datetime) { DARABONBA_PTR_SET_VALUE(datetime_, datetime) };


          // logContent Field Functions 
          bool hasLogContent() const { return this->logContent_ != nullptr;};
          void deleteLogContent() { this->logContent_ = nullptr;};
          inline string getLogContent() const { DARABONBA_PTR_GET_DEFAULT(logContent_, "") };
          inline Logs& setLogContent(string logContent) { DARABONBA_PTR_SET_VALUE(logContent_, logContent) };


        protected:
          // The sending date in the yyyymmdd format.
          shared_ptr<string> datetime_ {};
          // The log content.
          shared_ptr<string> logContent_ {};
        };

        virtual bool empty() const override { return this->aiInstance_ == nullptr
        && this->logs_ == nullptr && this->nodeId_ == nullptr; };
        // aiInstance Field Functions 
        bool hasAiInstance() const { return this->aiInstance_ != nullptr;};
        void deleteAiInstance() { this->aiInstance_ = nullptr;};
        inline string getAiInstance() const { DARABONBA_PTR_GET_DEFAULT(aiInstance_, "") };
        inline AiJobLogs& setAiInstance(string aiInstance) { DARABONBA_PTR_SET_VALUE(aiInstance_, aiInstance) };


        // logs Field Functions 
        bool hasLogs() const { return this->logs_ != nullptr;};
        void deleteLogs() { this->logs_ = nullptr;};
        inline const vector<AiJobLogs::Logs> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<AiJobLogs::Logs>) };
        inline vector<AiJobLogs::Logs> getLogs() { DARABONBA_PTR_GET(logs_, vector<AiJobLogs::Logs>) };
        inline AiJobLogs& setLogs(const vector<AiJobLogs::Logs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
        inline AiJobLogs& setLogs(vector<AiJobLogs::Logs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline AiJobLogs& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      protected:
        // The instance ID.
        shared_ptr<string> aiInstance_ {};
        // The logs.
        shared_ptr<vector<AiJobLogs::Logs>> logs_ {};
        // The node ID.
        shared_ptr<string> nodeId_ {};
      };

      virtual bool empty() const override { return this->aiJobLogs_ == nullptr
        && this->endTime_ == nullptr && this->startTime_ == nullptr; };
      // aiJobLogs Field Functions 
      bool hasAiJobLogs() const { return this->aiJobLogs_ != nullptr;};
      void deleteAiJobLogs() { this->aiJobLogs_ = nullptr;};
      inline const vector<AiJobLogInfo::AiJobLogs> & getAiJobLogs() const { DARABONBA_PTR_GET_CONST(aiJobLogs_, vector<AiJobLogInfo::AiJobLogs>) };
      inline vector<AiJobLogInfo::AiJobLogs> getAiJobLogs() { DARABONBA_PTR_GET(aiJobLogs_, vector<AiJobLogInfo::AiJobLogs>) };
      inline AiJobLogInfo& setAiJobLogs(const vector<AiJobLogInfo::AiJobLogs> & aiJobLogs) { DARABONBA_PTR_SET_VALUE(aiJobLogs_, aiJobLogs) };
      inline AiJobLogInfo& setAiJobLogs(vector<AiJobLogInfo::AiJobLogs> && aiJobLogs) { DARABONBA_PTR_SET_RVALUE(aiJobLogs_, aiJobLogs) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline AiJobLogInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline AiJobLogInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // The task logs.
      shared_ptr<vector<AiJobLogInfo::AiJobLogs>> aiJobLogs_ {};
      // The end time. The value is in the timestamp format. Unit: seconds.
      // 
      // >  This timestamp must indicate a point in time that is accurate to the minute.
      shared_ptr<string> endTime_ {};
      // The start time. The value is in the timestamp format. Unit: seconds.
      // 
      // >  This timestamp must indicate a point in time that is accurate to the minute.
      shared_ptr<string> startTime_ {};
    };

    virtual bool empty() const override { return this->aiJobLogInfo_ == nullptr
        && this->clusterId_ == nullptr && this->diagnosticType_ == nullptr && this->nodeIds_ == nullptr; };
    // aiJobLogInfo Field Functions 
    bool hasAiJobLogInfo() const { return this->aiJobLogInfo_ != nullptr;};
    void deleteAiJobLogInfo() { this->aiJobLogInfo_ = nullptr;};
    inline const CreateDiagnosticTaskRequest::AiJobLogInfo & getAiJobLogInfo() const { DARABONBA_PTR_GET_CONST(aiJobLogInfo_, CreateDiagnosticTaskRequest::AiJobLogInfo) };
    inline CreateDiagnosticTaskRequest::AiJobLogInfo getAiJobLogInfo() { DARABONBA_PTR_GET(aiJobLogInfo_, CreateDiagnosticTaskRequest::AiJobLogInfo) };
    inline CreateDiagnosticTaskRequest& setAiJobLogInfo(const CreateDiagnosticTaskRequest::AiJobLogInfo & aiJobLogInfo) { DARABONBA_PTR_SET_VALUE(aiJobLogInfo_, aiJobLogInfo) };
    inline CreateDiagnosticTaskRequest& setAiJobLogInfo(CreateDiagnosticTaskRequest::AiJobLogInfo && aiJobLogInfo) { DARABONBA_PTR_SET_RVALUE(aiJobLogInfo_, aiJobLogInfo) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateDiagnosticTaskRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // diagnosticType Field Functions 
    bool hasDiagnosticType() const { return this->diagnosticType_ != nullptr;};
    void deleteDiagnosticType() { this->diagnosticType_ = nullptr;};
    inline string getDiagnosticType() const { DARABONBA_PTR_GET_DEFAULT(diagnosticType_, "") };
    inline CreateDiagnosticTaskRequest& setDiagnosticType(string diagnosticType) { DARABONBA_PTR_SET_VALUE(diagnosticType_, diagnosticType) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline const vector<string> & getNodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<string>) };
    inline vector<string> getNodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<string>) };
    inline CreateDiagnosticTaskRequest& setNodeIds(const vector<string> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
    inline CreateDiagnosticTaskRequest& setNodeIds(vector<string> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


  protected:
    // The log information.
    shared_ptr<CreateDiagnosticTaskRequest::AiJobLogInfo> aiJobLogInfo_ {};
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The diagnostics type.
    shared_ptr<string> diagnosticType_ {};
    // The IDs of the nodes.
    shared_ptr<vector<string>> nodeIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
