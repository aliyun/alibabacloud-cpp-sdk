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
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MessageType, messageType_);
      DARABONBA_PTR_TO_JSON(ParentSessionId, parentSessionId_);
      DARABONBA_PTR_TO_JSON(Question, question_);
      DARABONBA_PTR_TO_JSON(QuotedMessage, quotedMessage_);
      DARABONBA_PTR_TO_JSON(ReplyTo, replyTo_);
      DARABONBA_PTR_TO_JSON(SessionConfig, sessionConfig_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, SendChatMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
      DARABONBA_PTR_FROM_JSON(ParentSessionId, parentSessionId_);
      DARABONBA_PTR_FROM_JSON(Question, question_);
      DARABONBA_PTR_FROM_JSON(QuotedMessage, quotedMessage_);
      DARABONBA_PTR_FROM_JSON(ReplyTo, replyTo_);
      DARABONBA_PTR_FROM_JSON(SessionConfig, sessionConfig_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
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
    class SessionConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SessionConfig& obj) { 
        DARABONBA_PTR_TO_JSON(CustomAgentId, customAgentId_);
        DARABONBA_PTR_TO_JSON(CustomAgentStage, customAgentStage_);
        DARABONBA_PTR_TO_JSON(Language, language_);
        DARABONBA_PTR_TO_JSON(ReportWaterMark, reportWaterMark_);
      };
      friend void from_json(const Darabonba::Json& j, SessionConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomAgentId, customAgentId_);
        DARABONBA_PTR_FROM_JSON(CustomAgentStage, customAgentStage_);
        DARABONBA_PTR_FROM_JSON(Language, language_);
        DARABONBA_PTR_FROM_JSON(ReportWaterMark, reportWaterMark_);
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
        && this->customAgentStage_ == nullptr && this->language_ == nullptr && this->reportWaterMark_ == nullptr; };
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


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline SessionConfig& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // reportWaterMark Field Functions 
      bool hasReportWaterMark() const { return this->reportWaterMark_ != nullptr;};
      void deleteReportWaterMark() { this->reportWaterMark_ = nullptr;};
      inline string getReportWaterMark() const { DARABONBA_PTR_GET_DEFAULT(reportWaterMark_, "") };
      inline SessionConfig& setReportWaterMark(string reportWaterMark) { DARABONBA_PTR_SET_VALUE(reportWaterMark_, reportWaterMark) };


    protected:
      shared_ptr<string> customAgentId_ {};
      shared_ptr<string> customAgentStage_ {};
      shared_ptr<string> language_ {};
      shared_ptr<string> reportWaterMark_ {};
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
      shared_ptr<string> dataSourceId_ {};
      shared_ptr<string> dataSourceType_ {};
      shared_ptr<string> database_ {};
      shared_ptr<string> dbName_ {};
      shared_ptr<string> dmsDatabaseId_ {};
      shared_ptr<string> dmsInstanceId_ {};
      shared_ptr<string> engine_ {};
      shared_ptr<string> fileId_ {};
      shared_ptr<string> location_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<vector<string>> tables_ {};
    };

    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->DMSUnit_ == nullptr && this->dataSource_ == nullptr && this->message_ == nullptr && this->messageType_ == nullptr && this->parentSessionId_ == nullptr
        && this->question_ == nullptr && this->quotedMessage_ == nullptr && this->replyTo_ == nullptr && this->sessionConfig_ == nullptr && this->sessionId_ == nullptr; };
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


  protected:
    // This parameter is required.
    shared_ptr<string> agentId_ {};
    shared_ptr<string> DMSUnit_ {};
    shared_ptr<SendChatMessageRequest::DataSource> dataSource_ {};
    // This parameter is required.
    shared_ptr<string> message_ {};
    shared_ptr<string> messageType_ {};
    shared_ptr<string> parentSessionId_ {};
    shared_ptr<string> question_ {};
    shared_ptr<string> quotedMessage_ {};
    shared_ptr<string> replyTo_ {};
    shared_ptr<SendChatMessageRequest::SessionConfig> sessionConfig_ {};
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
