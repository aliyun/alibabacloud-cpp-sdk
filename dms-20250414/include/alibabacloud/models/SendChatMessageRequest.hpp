// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDCHATMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDCHATMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class SendChatMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendChatMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MessageType, messageType_);
      DARABONBA_PTR_TO_JSON(ParentSessionId, parentSessionId_);
      DARABONBA_PTR_TO_JSON(Question, question_);
      DARABONBA_PTR_TO_JSON(QuotedMessage, quotedMessage_);
      DARABONBA_PTR_TO_JSON(ReplyTo, replyTo_);
      DARABONBA_PTR_TO_JSON(SessionConfig, sessionConfig_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TaskConfig, taskConfig_);
      DARABONBA_PTR_TO_JSON(UserOssBucket, userOssBucket_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SendChatMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
      DARABONBA_PTR_FROM_JSON(ParentSessionId, parentSessionId_);
      DARABONBA_PTR_FROM_JSON(Question, question_);
      DARABONBA_PTR_FROM_JSON(QuotedMessage, quotedMessage_);
      DARABONBA_PTR_FROM_JSON(ReplyTo, replyTo_);
      DARABONBA_PTR_FROM_JSON(SessionConfig, sessionConfig_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TaskConfig, taskConfig_);
      DARABONBA_PTR_FROM_JSON(UserOssBucket, userOssBucket_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SendChatMessageRequest() = default ;
    SendChatMessageRequest(const SendChatMessageRequest &) = default ;
    SendChatMessageRequest(SendChatMessageRequest &&) = default ;
    SendChatMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendChatMessageRequest() = default ;
    SendChatMessageRequest& operator=(const SendChatMessageRequest &) = default ;
    SendChatMessageRequest& operator=(SendChatMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ReportConfig, reportConfig_);
      };
      friend void from_json(const Darabonba::Json& j, TaskConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ReportConfig, reportConfig_);
      };
      TaskConfig() = default ;
      TaskConfig(const TaskConfig &) = default ;
      TaskConfig(TaskConfig &&) = default ;
      TaskConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskConfig() = default ;
      TaskConfig& operator=(const TaskConfig &) = default ;
      TaskConfig& operator=(TaskConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ReportConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReportConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ReportPrompt, reportPrompt_);
          DARABONBA_PTR_TO_JSON(ReportTheme, reportTheme_);
          DARABONBA_PTR_TO_JSON(ReportType, reportType_);
        };
        friend void from_json(const Darabonba::Json& j, ReportConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ReportPrompt, reportPrompt_);
          DARABONBA_PTR_FROM_JSON(ReportTheme, reportTheme_);
          DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
        };
        ReportConfig() = default ;
        ReportConfig(const ReportConfig &) = default ;
        ReportConfig(ReportConfig &&) = default ;
        ReportConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReportConfig() = default ;
        ReportConfig& operator=(const ReportConfig &) = default ;
        ReportConfig& operator=(ReportConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->reportPrompt_ == nullptr
        && this->reportTheme_ == nullptr && this->reportType_ == nullptr; };
        // reportPrompt Field Functions 
        bool hasReportPrompt() const { return this->reportPrompt_ != nullptr;};
        void deleteReportPrompt() { this->reportPrompt_ = nullptr;};
        inline string getReportPrompt() const { DARABONBA_PTR_GET_DEFAULT(reportPrompt_, "") };
        inline ReportConfig& setReportPrompt(string reportPrompt) { DARABONBA_PTR_SET_VALUE(reportPrompt_, reportPrompt) };


        // reportTheme Field Functions 
        bool hasReportTheme() const { return this->reportTheme_ != nullptr;};
        void deleteReportTheme() { this->reportTheme_ = nullptr;};
        inline string getReportTheme() const { DARABONBA_PTR_GET_DEFAULT(reportTheme_, "") };
        inline ReportConfig& setReportTheme(string reportTheme) { DARABONBA_PTR_SET_VALUE(reportTheme_, reportTheme) };


        // reportType Field Functions 
        bool hasReportType() const { return this->reportType_ != nullptr;};
        void deleteReportType() { this->reportType_ = nullptr;};
        inline string getReportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
        inline ReportConfig& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


      protected:
        // The prompt that the report must follow.
        shared_ptr<string> reportPrompt_ {};
        // The report theme. Valid values: default, journal, legacy, and neobrutalism.
        shared_ptr<string> reportTheme_ {};
        // The service type. Valid values: TextReport and WebReport, indicating that the task generates a text report or a web report. Only WebReport is supported.
        shared_ptr<string> reportType_ {};
      };

      virtual bool empty() const override { return this->reportConfig_ == nullptr; };
      // reportConfig Field Functions 
      bool hasReportConfig() const { return this->reportConfig_ != nullptr;};
      void deleteReportConfig() { this->reportConfig_ = nullptr;};
      inline const TaskConfig::ReportConfig & getReportConfig() const { DARABONBA_PTR_GET_CONST(reportConfig_, TaskConfig::ReportConfig) };
      inline TaskConfig::ReportConfig getReportConfig() { DARABONBA_PTR_GET(reportConfig_, TaskConfig::ReportConfig) };
      inline TaskConfig& setReportConfig(const TaskConfig::ReportConfig & reportConfig) { DARABONBA_PTR_SET_VALUE(reportConfig_, reportConfig) };
      inline TaskConfig& setReportConfig(TaskConfig::ReportConfig && reportConfig) { DARABONBA_PTR_SET_RVALUE(reportConfig_, reportConfig) };


    protected:
      // The report rule configuration. Only when MessageType is REPORT, a report task is executed based on this configuration.
      shared_ptr<TaskConfig::ReportConfig> reportConfig_ {};
    };

    class SessionConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SessionConfig& obj) { 
        DARABONBA_PTR_TO_JSON(CustomAgentId, customAgentId_);
        DARABONBA_PTR_TO_JSON(CustomAgentStage, customAgentStage_);
        DARABONBA_PTR_TO_JSON(EnableSearch, enableSearch_);
        DARABONBA_PTR_TO_JSON(KbUuidList, kbUuidList_);
        DARABONBA_PTR_TO_JSON(Language, language_);
        DARABONBA_PTR_TO_JSON(McpServerIds, mcpServerIds_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(PlanMode, planMode_);
        DARABONBA_PTR_TO_JSON(ReportWaterMark, reportWaterMark_);
        DARABONBA_PTR_TO_JSON(SkipAskHuman, skipAskHuman_);
        DARABONBA_PTR_TO_JSON(SkipPlan, skipPlan_);
        DARABONBA_PTR_TO_JSON(SkipSqlConfirm, skipSqlConfirm_);
        DARABONBA_PTR_TO_JSON(SkipWebReportConfirm, skipWebReportConfirm_);
      };
      friend void from_json(const Darabonba::Json& j, SessionConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomAgentId, customAgentId_);
        DARABONBA_PTR_FROM_JSON(CustomAgentStage, customAgentStage_);
        DARABONBA_PTR_FROM_JSON(EnableSearch, enableSearch_);
        DARABONBA_PTR_FROM_JSON(KbUuidList, kbUuidList_);
        DARABONBA_PTR_FROM_JSON(Language, language_);
        DARABONBA_PTR_FROM_JSON(McpServerIds, mcpServerIds_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(PlanMode, planMode_);
        DARABONBA_PTR_FROM_JSON(ReportWaterMark, reportWaterMark_);
        DARABONBA_PTR_FROM_JSON(SkipAskHuman, skipAskHuman_);
        DARABONBA_PTR_FROM_JSON(SkipPlan, skipPlan_);
        DARABONBA_PTR_FROM_JSON(SkipSqlConfirm, skipSqlConfirm_);
        DARABONBA_PTR_FROM_JSON(SkipWebReportConfirm, skipWebReportConfirm_);
      };
      SessionConfig() = default ;
      SessionConfig(const SessionConfig &) = default ;
      SessionConfig(SessionConfig &&) = default ;
      SessionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SessionConfig() = default ;
      SessionConfig& operator=(const SessionConfig &) = default ;
      SessionConfig& operator=(SessionConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->customAgentId_ == nullptr
        && this->customAgentStage_ == nullptr && this->enableSearch_ == nullptr && this->kbUuidList_ == nullptr && this->language_ == nullptr && this->mcpServerIds_ == nullptr
        && this->mode_ == nullptr && this->planMode_ == nullptr && this->reportWaterMark_ == nullptr && this->skipAskHuman_ == nullptr && this->skipPlan_ == nullptr
        && this->skipSqlConfirm_ == nullptr && this->skipWebReportConfirm_ == nullptr; };
      // customAgentId Field Functions 
      bool hasCustomAgentId() const { return this->customAgentId_ != nullptr;};
      void deleteCustomAgentId() { this->customAgentId_ = nullptr;};
      inline string getCustomAgentId() const { DARABONBA_PTR_GET_DEFAULT(customAgentId_, "") };
      inline SessionConfig& setCustomAgentId(string customAgentId) { DARABONBA_PTR_SET_VALUE(customAgentId_, customAgentId) };


      // customAgentStage Field Functions 
      bool hasCustomAgentStage() const { return this->customAgentStage_ != nullptr;};
      void deleteCustomAgentStage() { this->customAgentStage_ = nullptr;};
      inline string getCustomAgentStage() const { DARABONBA_PTR_GET_DEFAULT(customAgentStage_, "") };
      inline SessionConfig& setCustomAgentStage(string customAgentStage) { DARABONBA_PTR_SET_VALUE(customAgentStage_, customAgentStage) };


      // enableSearch Field Functions 
      bool hasEnableSearch() const { return this->enableSearch_ != nullptr;};
      void deleteEnableSearch() { this->enableSearch_ = nullptr;};
      inline string getEnableSearch() const { DARABONBA_PTR_GET_DEFAULT(enableSearch_, "") };
      inline SessionConfig& setEnableSearch(string enableSearch) { DARABONBA_PTR_SET_VALUE(enableSearch_, enableSearch) };


      // kbUuidList Field Functions 
      bool hasKbUuidList() const { return this->kbUuidList_ != nullptr;};
      void deleteKbUuidList() { this->kbUuidList_ = nullptr;};
      inline string getKbUuidList() const { DARABONBA_PTR_GET_DEFAULT(kbUuidList_, "") };
      inline SessionConfig& setKbUuidList(string kbUuidList) { DARABONBA_PTR_SET_VALUE(kbUuidList_, kbUuidList) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline SessionConfig& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // mcpServerIds Field Functions 
      bool hasMcpServerIds() const { return this->mcpServerIds_ != nullptr;};
      void deleteMcpServerIds() { this->mcpServerIds_ = nullptr;};
      inline string getMcpServerIds() const { DARABONBA_PTR_GET_DEFAULT(mcpServerIds_, "") };
      inline SessionConfig& setMcpServerIds(string mcpServerIds) { DARABONBA_PTR_SET_VALUE(mcpServerIds_, mcpServerIds) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline SessionConfig& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // planMode Field Functions 
      bool hasPlanMode() const { return this->planMode_ != nullptr;};
      void deletePlanMode() { this->planMode_ = nullptr;};
      inline string getPlanMode() const { DARABONBA_PTR_GET_DEFAULT(planMode_, "") };
      inline SessionConfig& setPlanMode(string planMode) { DARABONBA_PTR_SET_VALUE(planMode_, planMode) };


      // reportWaterMark Field Functions 
      bool hasReportWaterMark() const { return this->reportWaterMark_ != nullptr;};
      void deleteReportWaterMark() { this->reportWaterMark_ = nullptr;};
      inline string getReportWaterMark() const { DARABONBA_PTR_GET_DEFAULT(reportWaterMark_, "") };
      inline SessionConfig& setReportWaterMark(string reportWaterMark) { DARABONBA_PTR_SET_VALUE(reportWaterMark_, reportWaterMark) };


      // skipAskHuman Field Functions 
      bool hasSkipAskHuman() const { return this->skipAskHuman_ != nullptr;};
      void deleteSkipAskHuman() { this->skipAskHuman_ = nullptr;};
      inline bool getSkipAskHuman() const { DARABONBA_PTR_GET_DEFAULT(skipAskHuman_, false) };
      inline SessionConfig& setSkipAskHuman(bool skipAskHuman) { DARABONBA_PTR_SET_VALUE(skipAskHuman_, skipAskHuman) };


      // skipPlan Field Functions 
      bool hasSkipPlan() const { return this->skipPlan_ != nullptr;};
      void deleteSkipPlan() { this->skipPlan_ = nullptr;};
      inline bool getSkipPlan() const { DARABONBA_PTR_GET_DEFAULT(skipPlan_, false) };
      inline SessionConfig& setSkipPlan(bool skipPlan) { DARABONBA_PTR_SET_VALUE(skipPlan_, skipPlan) };


      // skipSqlConfirm Field Functions 
      bool hasSkipSqlConfirm() const { return this->skipSqlConfirm_ != nullptr;};
      void deleteSkipSqlConfirm() { this->skipSqlConfirm_ = nullptr;};
      inline bool getSkipSqlConfirm() const { DARABONBA_PTR_GET_DEFAULT(skipSqlConfirm_, false) };
      inline SessionConfig& setSkipSqlConfirm(bool skipSqlConfirm) { DARABONBA_PTR_SET_VALUE(skipSqlConfirm_, skipSqlConfirm) };


      // skipWebReportConfirm Field Functions 
      bool hasSkipWebReportConfirm() const { return this->skipWebReportConfirm_ != nullptr;};
      void deleteSkipWebReportConfirm() { this->skipWebReportConfirm_ = nullptr;};
      inline bool getSkipWebReportConfirm() const { DARABONBA_PTR_GET_DEFAULT(skipWebReportConfirm_, false) };
      inline SessionConfig& setSkipWebReportConfirm(bool skipWebReportConfirm) { DARABONBA_PTR_SET_VALUE(skipWebReportConfirm_, skipWebReportConfirm) };


    protected:
      // Deprecated. Use the input parameters of CreateAgentSession instead.
      shared_ptr<string> customAgentId_ {};
      // Deprecated. Use the input parameters of CreateAgentSession instead.
      shared_ptr<string> customAgentStage_ {};
      // Specifies whether to enable web search.
      shared_ptr<string> enableSearch_ {};
      // The list of knowledge base IDs.
      shared_ptr<string> kbUuidList_ {};
      // Only Chinese and English are supported. The default value is Chinese. Only uppercase values are supported.
      shared_ptr<string> language_ {};
      // The MCP server IDs in the session configuration.
      shared_ptr<string> mcpServerIds_ {};
      // The mode. Valid values:
      //  - **ASK_DATA**: data query mode.
      //  - **ANALYSIS**: analysis mode.
      //  - **INSIGHT**: insight mode.
      shared_ptr<string> mode_ {};
      // Specifies whether to enable the plan. Valid values: disable, enable, and force. Default value: enable.
      shared_ptr<string> planMode_ {};
      // The text of up to 64 characters that is used as a watermark in the generated PDF report.
      shared_ptr<string> reportWaterMark_ {};
      // Specifies whether to disable user inquiries during the process.
      shared_ptr<bool> skipAskHuman_ {};
      // Specifies whether to skip the plan confirmation step.
      shared_ptr<bool> skipPlan_ {};
      // Specifies whether to skip all SQL confirmations.
      shared_ptr<bool> skipSqlConfirm_ {};
      // Specifies whether to skip the web report generation confirmation.
      shared_ptr<bool> skipWebReportConfirm_ {};
    };

    class DataSources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSources& obj) { 
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
        DARABONBA_PTR_TO_JSON(Database, database_);
        DARABONBA_PTR_TO_JSON(DbName, dbName_);
        DARABONBA_PTR_TO_JSON(DmsDatabaseId, dmsDatabaseId_);
        DARABONBA_PTR_TO_JSON(DmsInstanceId, dmsInstanceId_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(Location, location_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Tables, tables_);
      };
      friend void from_json(const Darabonba::Json& j, DataSources& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
        DARABONBA_PTR_FROM_JSON(Database, database_);
        DARABONBA_PTR_FROM_JSON(DbName, dbName_);
        DARABONBA_PTR_FROM_JSON(DmsDatabaseId, dmsDatabaseId_);
        DARABONBA_PTR_FROM_JSON(DmsInstanceId, dmsInstanceId_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(Location, location_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Tables, tables_);
      };
      DataSources() = default ;
      DataSources(const DataSources &) = default ;
      DataSources(DataSources &&) = default ;
      DataSources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataSources() = default ;
      DataSources& operator=(const DataSources &) = default ;
      DataSources& operator=(DataSources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataSourceId_ == nullptr
        && this->dataSourceType_ == nullptr && this->database_ == nullptr && this->dbName_ == nullptr && this->dmsDatabaseId_ == nullptr && this->dmsInstanceId_ == nullptr
        && this->engine_ == nullptr && this->fileId_ == nullptr && this->location_ == nullptr && this->regionId_ == nullptr && this->tables_ == nullptr; };
      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
      inline DataSources& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // dataSourceType Field Functions 
      bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
      void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
      inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
      inline DataSources& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


      // database Field Functions 
      bool hasDatabase() const { return this->database_ != nullptr;};
      void deleteDatabase() { this->database_ = nullptr;};
      inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
      inline DataSources& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


      // dbName Field Functions 
      bool hasDbName() const { return this->dbName_ != nullptr;};
      void deleteDbName() { this->dbName_ = nullptr;};
      inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
      inline DataSources& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


      // dmsDatabaseId Field Functions 
      bool hasDmsDatabaseId() const { return this->dmsDatabaseId_ != nullptr;};
      void deleteDmsDatabaseId() { this->dmsDatabaseId_ = nullptr;};
      inline string getDmsDatabaseId() const { DARABONBA_PTR_GET_DEFAULT(dmsDatabaseId_, "") };
      inline DataSources& setDmsDatabaseId(string dmsDatabaseId) { DARABONBA_PTR_SET_VALUE(dmsDatabaseId_, dmsDatabaseId) };


      // dmsInstanceId Field Functions 
      bool hasDmsInstanceId() const { return this->dmsInstanceId_ != nullptr;};
      void deleteDmsInstanceId() { this->dmsInstanceId_ = nullptr;};
      inline string getDmsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dmsInstanceId_, "") };
      inline DataSources& setDmsInstanceId(string dmsInstanceId) { DARABONBA_PTR_SET_VALUE(dmsInstanceId_, dmsInstanceId) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline DataSources& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline DataSources& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // location Field Functions 
      bool hasLocation() const { return this->location_ != nullptr;};
      void deleteLocation() { this->location_ = nullptr;};
      inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
      inline DataSources& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline DataSources& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // tables Field Functions 
      bool hasTables() const { return this->tables_ != nullptr;};
      void deleteTables() { this->tables_ = nullptr;};
      inline const vector<string> & getTables() const { DARABONBA_PTR_GET_CONST(tables_, vector<string>) };
      inline vector<string> getTables() { DARABONBA_PTR_GET(tables_, vector<string>) };
      inline DataSources& setTables(const vector<string> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
      inline DataSources& setTables(vector<string> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    protected:
      // Deprecated. You do not need to specify this parameter.
      shared_ptr<string> dataSourceId_ {};
      // The data source type. Valid values: remote_data_center and database, indicating that the analysis is performed on a file or a database.
      shared_ptr<string> dataSourceType_ {};
      // Deprecated. You do not need to specify this parameter.
      shared_ptr<string> database_ {};
      // The database name.
      shared_ptr<string> dbName_ {};
      // The ID of the database in Data Management.
      shared_ptr<string> dmsDatabaseId_ {};
      // The ID of the instance in Data Management.
      shared_ptr<string> dmsInstanceId_ {};
      // The database engine type.
      shared_ptr<string> engine_ {};
      // The file ID.
      shared_ptr<string> fileId_ {};
      // Deprecated. You do not need to specify this parameter.
      shared_ptr<string> location_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The list of table names to analyze.
      shared_ptr<vector<string>> tables_ {};
    };

    class DataSource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSource& obj) { 
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
        DARABONBA_PTR_TO_JSON(Database, database_);
        DARABONBA_PTR_TO_JSON(DbName, dbName_);
        DARABONBA_PTR_TO_JSON(DmsDatabaseId, dmsDatabaseId_);
        DARABONBA_PTR_TO_JSON(DmsInstanceId, dmsInstanceId_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(Location, location_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Tables, tables_);
      };
      friend void from_json(const Darabonba::Json& j, DataSource& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
        DARABONBA_PTR_FROM_JSON(Database, database_);
        DARABONBA_PTR_FROM_JSON(DbName, dbName_);
        DARABONBA_PTR_FROM_JSON(DmsDatabaseId, dmsDatabaseId_);
        DARABONBA_PTR_FROM_JSON(DmsInstanceId, dmsInstanceId_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(Location, location_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Tables, tables_);
      };
      DataSource() = default ;
      DataSource(const DataSource &) = default ;
      DataSource(DataSource &&) = default ;
      DataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataSource() = default ;
      DataSource& operator=(const DataSource &) = default ;
      DataSource& operator=(DataSource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataSourceId_ == nullptr
        && this->dataSourceType_ == nullptr && this->database_ == nullptr && this->dbName_ == nullptr && this->dmsDatabaseId_ == nullptr && this->dmsInstanceId_ == nullptr
        && this->engine_ == nullptr && this->fileId_ == nullptr && this->location_ == nullptr && this->regionId_ == nullptr && this->tables_ == nullptr; };
      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
      inline DataSource& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // dataSourceType Field Functions 
      bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
      void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
      inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
      inline DataSource& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


      // database Field Functions 
      bool hasDatabase() const { return this->database_ != nullptr;};
      void deleteDatabase() { this->database_ = nullptr;};
      inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
      inline DataSource& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


      // dbName Field Functions 
      bool hasDbName() const { return this->dbName_ != nullptr;};
      void deleteDbName() { this->dbName_ = nullptr;};
      inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
      inline DataSource& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


      // dmsDatabaseId Field Functions 
      bool hasDmsDatabaseId() const { return this->dmsDatabaseId_ != nullptr;};
      void deleteDmsDatabaseId() { this->dmsDatabaseId_ = nullptr;};
      inline string getDmsDatabaseId() const { DARABONBA_PTR_GET_DEFAULT(dmsDatabaseId_, "") };
      inline DataSource& setDmsDatabaseId(string dmsDatabaseId) { DARABONBA_PTR_SET_VALUE(dmsDatabaseId_, dmsDatabaseId) };


      // dmsInstanceId Field Functions 
      bool hasDmsInstanceId() const { return this->dmsInstanceId_ != nullptr;};
      void deleteDmsInstanceId() { this->dmsInstanceId_ = nullptr;};
      inline string getDmsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dmsInstanceId_, "") };
      inline DataSource& setDmsInstanceId(string dmsInstanceId) { DARABONBA_PTR_SET_VALUE(dmsInstanceId_, dmsInstanceId) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline DataSource& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline DataSource& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // location Field Functions 
      bool hasLocation() const { return this->location_ != nullptr;};
      void deleteLocation() { this->location_ = nullptr;};
      inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
      inline DataSource& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline DataSource& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // tables Field Functions 
      bool hasTables() const { return this->tables_ != nullptr;};
      void deleteTables() { this->tables_ = nullptr;};
      inline const vector<string> & getTables() const { DARABONBA_PTR_GET_CONST(tables_, vector<string>) };
      inline vector<string> getTables() { DARABONBA_PTR_GET(tables_, vector<string>) };
      inline DataSource& setTables(const vector<string> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
      inline DataSource& setTables(vector<string> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    protected:
      // Deprecated. You do not need to specify this parameter.
      shared_ptr<string> dataSourceId_ {};
      // The data source type. Valid values: `[remote_data_center, database]`, indicating that the analysis is performed on a file or a database.
      shared_ptr<string> dataSourceType_ {};
      // Deprecated. You do not need to specify this parameter.
      shared_ptr<string> database_ {};
      // The database name.
      shared_ptr<string> dbName_ {};
      // The ID of the database in Data Management.
      shared_ptr<string> dmsDatabaseId_ {};
      // The ID of the instance in Data Management.
      shared_ptr<string> dmsInstanceId_ {};
      // The database engine type.
      shared_ptr<string> engine_ {};
      // The file ID.
      shared_ptr<string> fileId_ {};
      // Deprecated. You do not need to specify this parameter.
      shared_ptr<string> location_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The list of table names to analyze.
      shared_ptr<vector<string>> tables_ {};
    };

    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->DMSUnit_ == nullptr && this->dataSource_ == nullptr && this->dataSources_ == nullptr && this->message_ == nullptr && this->messageType_ == nullptr
        && this->parentSessionId_ == nullptr && this->question_ == nullptr && this->quotedMessage_ == nullptr && this->replyTo_ == nullptr && this->sessionConfig_ == nullptr
        && this->sessionId_ == nullptr && this->taskConfig_ == nullptr && this->userOssBucket_ == nullptr && this->workspaceId_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline SendChatMessageRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // DMSUnit Field Functions 
    bool hasDMSUnit() const { return this->DMSUnit_ != nullptr;};
    void deleteDMSUnit() { this->DMSUnit_ = nullptr;};
    inline string getDMSUnit() const { DARABONBA_PTR_GET_DEFAULT(DMSUnit_, "") };
    inline SendChatMessageRequest& setDMSUnit(string DMSUnit) { DARABONBA_PTR_SET_VALUE(DMSUnit_, DMSUnit) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline const SendChatMessageRequest::DataSource & getDataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, SendChatMessageRequest::DataSource) };
    inline SendChatMessageRequest::DataSource getDataSource() { DARABONBA_PTR_GET(dataSource_, SendChatMessageRequest::DataSource) };
    inline SendChatMessageRequest& setDataSource(const SendChatMessageRequest::DataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
    inline SendChatMessageRequest& setDataSource(SendChatMessageRequest::DataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<SendChatMessageRequest::DataSources> & getDataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<SendChatMessageRequest::DataSources>) };
    inline vector<SendChatMessageRequest::DataSources> getDataSources() { DARABONBA_PTR_GET(dataSources_, vector<SendChatMessageRequest::DataSources>) };
    inline SendChatMessageRequest& setDataSources(const vector<SendChatMessageRequest::DataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline SendChatMessageRequest& setDataSources(vector<SendChatMessageRequest::DataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SendChatMessageRequest& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline SendChatMessageRequest& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


    // parentSessionId Field Functions 
    bool hasParentSessionId() const { return this->parentSessionId_ != nullptr;};
    void deleteParentSessionId() { this->parentSessionId_ = nullptr;};
    inline string getParentSessionId() const { DARABONBA_PTR_GET_DEFAULT(parentSessionId_, "") };
    inline SendChatMessageRequest& setParentSessionId(string parentSessionId) { DARABONBA_PTR_SET_VALUE(parentSessionId_, parentSessionId) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline string getQuestion() const { DARABONBA_PTR_GET_DEFAULT(question_, "") };
    inline SendChatMessageRequest& setQuestion(string question) { DARABONBA_PTR_SET_VALUE(question_, question) };


    // quotedMessage Field Functions 
    bool hasQuotedMessage() const { return this->quotedMessage_ != nullptr;};
    void deleteQuotedMessage() { this->quotedMessage_ = nullptr;};
    inline string getQuotedMessage() const { DARABONBA_PTR_GET_DEFAULT(quotedMessage_, "") };
    inline SendChatMessageRequest& setQuotedMessage(string quotedMessage) { DARABONBA_PTR_SET_VALUE(quotedMessage_, quotedMessage) };


    // replyTo Field Functions 
    bool hasReplyTo() const { return this->replyTo_ != nullptr;};
    void deleteReplyTo() { this->replyTo_ = nullptr;};
    inline string getReplyTo() const { DARABONBA_PTR_GET_DEFAULT(replyTo_, "") };
    inline SendChatMessageRequest& setReplyTo(string replyTo) { DARABONBA_PTR_SET_VALUE(replyTo_, replyTo) };


    // sessionConfig Field Functions 
    bool hasSessionConfig() const { return this->sessionConfig_ != nullptr;};
    void deleteSessionConfig() { this->sessionConfig_ = nullptr;};
    inline const SendChatMessageRequest::SessionConfig & getSessionConfig() const { DARABONBA_PTR_GET_CONST(sessionConfig_, SendChatMessageRequest::SessionConfig) };
    inline SendChatMessageRequest::SessionConfig getSessionConfig() { DARABONBA_PTR_GET(sessionConfig_, SendChatMessageRequest::SessionConfig) };
    inline SendChatMessageRequest& setSessionConfig(const SendChatMessageRequest::SessionConfig & sessionConfig) { DARABONBA_PTR_SET_VALUE(sessionConfig_, sessionConfig) };
    inline SendChatMessageRequest& setSessionConfig(SendChatMessageRequest::SessionConfig && sessionConfig) { DARABONBA_PTR_SET_RVALUE(sessionConfig_, sessionConfig) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SendChatMessageRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // taskConfig Field Functions 
    bool hasTaskConfig() const { return this->taskConfig_ != nullptr;};
    void deleteTaskConfig() { this->taskConfig_ = nullptr;};
    inline const SendChatMessageRequest::TaskConfig & getTaskConfig() const { DARABONBA_PTR_GET_CONST(taskConfig_, SendChatMessageRequest::TaskConfig) };
    inline SendChatMessageRequest::TaskConfig getTaskConfig() { DARABONBA_PTR_GET(taskConfig_, SendChatMessageRequest::TaskConfig) };
    inline SendChatMessageRequest& setTaskConfig(const SendChatMessageRequest::TaskConfig & taskConfig) { DARABONBA_PTR_SET_VALUE(taskConfig_, taskConfig) };
    inline SendChatMessageRequest& setTaskConfig(SendChatMessageRequest::TaskConfig && taskConfig) { DARABONBA_PTR_SET_RVALUE(taskConfig_, taskConfig) };


    // userOssBucket Field Functions 
    bool hasUserOssBucket() const { return this->userOssBucket_ != nullptr;};
    void deleteUserOssBucket() { this->userOssBucket_ = nullptr;};
    inline string getUserOssBucket() const { DARABONBA_PTR_GET_DEFAULT(userOssBucket_, "") };
    inline SendChatMessageRequest& setUserOssBucket(string userOssBucket) { DARABONBA_PTR_SET_VALUE(userOssBucket_, userOssBucket) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SendChatMessageRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The agent ID. This parameter is required. You can obtain the current agent ID from the response of the CreateAgentSession operation. Agent resources have a lifecycle, so the agent ID that you specify in each request may change.
    shared_ptr<string> agentId_ {};
    // The Data Management unit you are currently in. If you choose to analyze a database, this information is used to correctly connect to your Data Management instance. You can go to the Data Management console to view your current Data Management unit. If you are a user of the Alibaba Cloud China Website, set this parameter to ap-southeast-1.
    shared_ptr<string> DMSUnit_ {};
    // The data source information. This parameter is optional. You can pass only one data source in this parameter. Use the DataSources parameter instead.
    shared_ptr<SendChatMessageRequest::DataSource> dataSource_ {};
    // The detailed data source information. This parameter is optional.
    shared_ptr<vector<SendChatMessageRequest::DataSources>> dataSources_ {};
    // The message content to send to the agent.
    // 
    // This parameter is required.
    shared_ptr<string> message_ {};
    // The message type. Default value: `[primary]`.  
    // 
    // - In normal cases, set the message type to `[primary]` when interacting with the agent.
    // 
    // - When the message is a response to a human-in-the-loop question from the agent, set the type to `[additional]`.
    // 
    // - When the message is intended to trigger report generation, set the type to `[report]`.
    // 
    // - When the message is intended to cancel the current session, set the type to `[cancel]`.
    shared_ptr<string> messageType_ {};
    // The parent session ID.
    shared_ptr<string> parentSessionId_ {};
    // The specific question that the agent asks the user through human-in-the-loop. This parameter is required when the message type is `additional`.
    shared_ptr<string> question_ {};
    // The quoted content. This parameter is typically used when interacting with the agent.
    shared_ptr<string> quotedMessage_ {};
    // **Important**
    // 
    // When this message is a reply to an agent message (for example, the agent asks a clarifying question through ASK_HUMAN), set reply_to to the exact Checkpoint sequence number carried in that agent message. If this message is not a targeted reply, such as requesting the agent to perform further in-depth analysis after analysis is complete, you can leave reply_to empty or set it to "0".  
    // 
    // This field affects how the agent decides to process the message. Passing an incorrect value may cause the analysis results to be less effective than expected.
    shared_ptr<string> replyTo_ {};
    // The special configuration for this session. Only the configuration passed in the first SendMessage call within the same session takes effect.
    shared_ptr<SendChatMessageRequest::SessionConfig> sessionConfig_ {};
    // The session ID. This parameter is required. You can call the CreateAgentSession operation to obtain the session ID.
    shared_ptr<string> sessionId_ {};
    // The configuration items that affect only the current task.
    shared_ptr<SendChatMessageRequest::TaskConfig> taskConfig_ {};
    // The OSS bucket of the user. If this parameter is not specified, the analysis process is securely stored in built-in storage.
    shared_ptr<string> userOssBucket_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
