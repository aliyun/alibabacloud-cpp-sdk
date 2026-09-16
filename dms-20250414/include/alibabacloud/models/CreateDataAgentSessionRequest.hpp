// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAAGENTSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAAGENTSESSIONREQUEST_HPP_
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
  class CreateDataAgentSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataAgentSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_TO_JSON(File, file_);
      DARABONBA_PTR_TO_JSON(SessionConfig, sessionConfig_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataAgentSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DMSUnit, DMSUnit_);
      DARABONBA_PTR_FROM_JSON(File, file_);
      DARABONBA_PTR_FROM_JSON(SessionConfig, sessionConfig_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateDataAgentSessionRequest() = default ;
    CreateDataAgentSessionRequest(const CreateDataAgentSessionRequest &) = default ;
    CreateDataAgentSessionRequest(CreateDataAgentSessionRequest &&) = default ;
    CreateDataAgentSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataAgentSessionRequest() = default ;
    CreateDataAgentSessionRequest& operator=(const CreateDataAgentSessionRequest &) = default ;
    CreateDataAgentSessionRequest& operator=(CreateDataAgentSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SessionConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SessionConfig& obj) { 
        DARABONBA_PTR_TO_JSON(CustomAgentId, customAgentId_);
        DARABONBA_PTR_TO_JSON(CustomAgentStage, customAgentStage_);
        DARABONBA_PTR_TO_JSON(EnableSearch, enableSearch_);
        DARABONBA_PTR_TO_JSON(EncryptKey, encryptKey_);
        DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
        DARABONBA_PTR_TO_JSON(KbUuidList, kbUuidList_);
        DARABONBA_PTR_TO_JSON(Language, language_);
        DARABONBA_PTR_TO_JSON(McpHeaders, mcpHeaders_);
        DARABONBA_PTR_TO_JSON(McpServerIds, mcpServerIds_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(ReportPageWidth, reportPageWidth_);
        DARABONBA_PTR_TO_JSON(ReportWaterMark, reportWaterMark_);
        DARABONBA_PTR_TO_JSON(UserOssBucket, userOssBucket_);
      };
      friend void from_json(const Darabonba::Json& j, SessionConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomAgentId, customAgentId_);
        DARABONBA_PTR_FROM_JSON(CustomAgentStage, customAgentStage_);
        DARABONBA_PTR_FROM_JSON(EnableSearch, enableSearch_);
        DARABONBA_PTR_FROM_JSON(EncryptKey, encryptKey_);
        DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
        DARABONBA_PTR_FROM_JSON(KbUuidList, kbUuidList_);
        DARABONBA_PTR_FROM_JSON(Language, language_);
        DARABONBA_PTR_FROM_JSON(McpHeaders, mcpHeaders_);
        DARABONBA_PTR_FROM_JSON(McpServerIds, mcpServerIds_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(ReportPageWidth, reportPageWidth_);
        DARABONBA_PTR_FROM_JSON(ReportWaterMark, reportWaterMark_);
        DARABONBA_PTR_FROM_JSON(UserOssBucket, userOssBucket_);
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
      class McpHeaders : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const McpHeaders& obj) { 
          DARABONBA_PTR_TO_JSON(McpHeader, mcpHeader_);
          DARABONBA_PTR_TO_JSON(McpServerId, mcpServerId_);
        };
        friend void from_json(const Darabonba::Json& j, McpHeaders& obj) { 
          DARABONBA_PTR_FROM_JSON(McpHeader, mcpHeader_);
          DARABONBA_PTR_FROM_JSON(McpServerId, mcpServerId_);
        };
        McpHeaders() = default ;
        McpHeaders(const McpHeaders &) = default ;
        McpHeaders(McpHeaders &&) = default ;
        McpHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~McpHeaders() = default ;
        McpHeaders& operator=(const McpHeaders &) = default ;
        McpHeaders& operator=(McpHeaders &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class McpHeader : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const McpHeader& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, McpHeader& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          McpHeader() = default ;
          McpHeader(const McpHeader &) = default ;
          McpHeader(McpHeader &&) = default ;
          McpHeader(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~McpHeader() = default ;
          McpHeader& operator=(const McpHeader &) = default ;
          McpHeader& operator=(McpHeader &&) = default ;
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
          inline McpHeader& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline McpHeader& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The key to add to the header.
          shared_ptr<string> key_ {};
          // The value to add to the header.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->mcpHeader_ == nullptr
        && this->mcpServerId_ == nullptr; };
        // mcpHeader Field Functions 
        bool hasMcpHeader() const { return this->mcpHeader_ != nullptr;};
        void deleteMcpHeader() { this->mcpHeader_ = nullptr;};
        inline const vector<McpHeaders::McpHeader> & getMcpHeader() const { DARABONBA_PTR_GET_CONST(mcpHeader_, vector<McpHeaders::McpHeader>) };
        inline vector<McpHeaders::McpHeader> getMcpHeader() { DARABONBA_PTR_GET(mcpHeader_, vector<McpHeaders::McpHeader>) };
        inline McpHeaders& setMcpHeader(const vector<McpHeaders::McpHeader> & mcpHeader) { DARABONBA_PTR_SET_VALUE(mcpHeader_, mcpHeader) };
        inline McpHeaders& setMcpHeader(vector<McpHeaders::McpHeader> && mcpHeader) { DARABONBA_PTR_SET_RVALUE(mcpHeader_, mcpHeader) };


        // mcpServerId Field Functions 
        bool hasMcpServerId() const { return this->mcpServerId_ != nullptr;};
        void deleteMcpServerId() { this->mcpServerId_ = nullptr;};
        inline string getMcpServerId() const { DARABONBA_PTR_GET_DEFAULT(mcpServerId_, "") };
        inline McpHeaders& setMcpServerId(string mcpServerId) { DARABONBA_PTR_SET_VALUE(mcpServerId_, mcpServerId) };


      protected:
        // The MCP header configuration.
        shared_ptr<vector<McpHeaders::McpHeader>> mcpHeader_ {};
        // The ID of the MCP server.
        shared_ptr<string> mcpServerId_ {};
      };

      virtual bool empty() const override { return this->customAgentId_ == nullptr
        && this->customAgentStage_ == nullptr && this->enableSearch_ == nullptr && this->encryptKey_ == nullptr && this->encryptType_ == nullptr && this->kbUuidList_ == nullptr
        && this->language_ == nullptr && this->mcpHeaders_ == nullptr && this->mcpServerIds_ == nullptr && this->mode_ == nullptr && this->reportPageWidth_ == nullptr
        && this->reportWaterMark_ == nullptr && this->userOssBucket_ == nullptr; };
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
      inline bool getEnableSearch() const { DARABONBA_PTR_GET_DEFAULT(enableSearch_, false) };
      inline SessionConfig& setEnableSearch(bool enableSearch) { DARABONBA_PTR_SET_VALUE(enableSearch_, enableSearch) };


      // encryptKey Field Functions 
      bool hasEncryptKey() const { return this->encryptKey_ != nullptr;};
      void deleteEncryptKey() { this->encryptKey_ = nullptr;};
      inline string getEncryptKey() const { DARABONBA_PTR_GET_DEFAULT(encryptKey_, "") };
      inline SessionConfig& setEncryptKey(string encryptKey) { DARABONBA_PTR_SET_VALUE(encryptKey_, encryptKey) };


      // encryptType Field Functions 
      bool hasEncryptType() const { return this->encryptType_ != nullptr;};
      void deleteEncryptType() { this->encryptType_ = nullptr;};
      inline string getEncryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, "") };
      inline SessionConfig& setEncryptType(string encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


      // kbUuidList Field Functions 
      bool hasKbUuidList() const { return this->kbUuidList_ != nullptr;};
      void deleteKbUuidList() { this->kbUuidList_ = nullptr;};
      inline const vector<string> & getKbUuidList() const { DARABONBA_PTR_GET_CONST(kbUuidList_, vector<string>) };
      inline vector<string> getKbUuidList() { DARABONBA_PTR_GET(kbUuidList_, vector<string>) };
      inline SessionConfig& setKbUuidList(const vector<string> & kbUuidList) { DARABONBA_PTR_SET_VALUE(kbUuidList_, kbUuidList) };
      inline SessionConfig& setKbUuidList(vector<string> && kbUuidList) { DARABONBA_PTR_SET_RVALUE(kbUuidList_, kbUuidList) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline SessionConfig& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // mcpHeaders Field Functions 
      bool hasMcpHeaders() const { return this->mcpHeaders_ != nullptr;};
      void deleteMcpHeaders() { this->mcpHeaders_ = nullptr;};
      inline const vector<SessionConfig::McpHeaders> & getMcpHeaders() const { DARABONBA_PTR_GET_CONST(mcpHeaders_, vector<SessionConfig::McpHeaders>) };
      inline vector<SessionConfig::McpHeaders> getMcpHeaders() { DARABONBA_PTR_GET(mcpHeaders_, vector<SessionConfig::McpHeaders>) };
      inline SessionConfig& setMcpHeaders(const vector<SessionConfig::McpHeaders> & mcpHeaders) { DARABONBA_PTR_SET_VALUE(mcpHeaders_, mcpHeaders) };
      inline SessionConfig& setMcpHeaders(vector<SessionConfig::McpHeaders> && mcpHeaders) { DARABONBA_PTR_SET_RVALUE(mcpHeaders_, mcpHeaders) };


      // mcpServerIds Field Functions 
      bool hasMcpServerIds() const { return this->mcpServerIds_ != nullptr;};
      void deleteMcpServerIds() { this->mcpServerIds_ = nullptr;};
      inline const vector<string> & getMcpServerIds() const { DARABONBA_PTR_GET_CONST(mcpServerIds_, vector<string>) };
      inline vector<string> getMcpServerIds() { DARABONBA_PTR_GET(mcpServerIds_, vector<string>) };
      inline SessionConfig& setMcpServerIds(const vector<string> & mcpServerIds) { DARABONBA_PTR_SET_VALUE(mcpServerIds_, mcpServerIds) };
      inline SessionConfig& setMcpServerIds(vector<string> && mcpServerIds) { DARABONBA_PTR_SET_RVALUE(mcpServerIds_, mcpServerIds) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline SessionConfig& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // reportPageWidth Field Functions 
      bool hasReportPageWidth() const { return this->reportPageWidth_ != nullptr;};
      void deleteReportPageWidth() { this->reportPageWidth_ = nullptr;};
      inline int64_t getReportPageWidth() const { DARABONBA_PTR_GET_DEFAULT(reportPageWidth_, 0L) };
      inline SessionConfig& setReportPageWidth(int64_t reportPageWidth) { DARABONBA_PTR_SET_VALUE(reportPageWidth_, reportPageWidth) };


      // reportWaterMark Field Functions 
      bool hasReportWaterMark() const { return this->reportWaterMark_ != nullptr;};
      void deleteReportWaterMark() { this->reportWaterMark_ = nullptr;};
      inline string getReportWaterMark() const { DARABONBA_PTR_GET_DEFAULT(reportWaterMark_, "") };
      inline SessionConfig& setReportWaterMark(string reportWaterMark) { DARABONBA_PTR_SET_VALUE(reportWaterMark_, reportWaterMark) };


      // userOssBucket Field Functions 
      bool hasUserOssBucket() const { return this->userOssBucket_ != nullptr;};
      void deleteUserOssBucket() { this->userOssBucket_ = nullptr;};
      inline string getUserOssBucket() const { DARABONBA_PTR_GET_DEFAULT(userOssBucket_, "") };
      inline SessionConfig& setUserOssBucket(string userOssBucket) { DARABONBA_PTR_SET_VALUE(userOssBucket_, userOssBucket) };


    protected:
      // The custom agent ID.
      shared_ptr<string> customAgentId_ {};
      // The stage of the custom agent. Valid values:
      // - **debug**: the debugging stage.
      // - **prod**: the production stage.
      shared_ptr<string> customAgentStage_ {};
      // Specifies whether to enable web search.
      shared_ptr<bool> enableSearch_ {};
      // The encryption key.
      shared_ptr<string> encryptKey_ {};
      // The encryption type.
      shared_ptr<string> encryptType_ {};
      // The list of knowledge base IDs.
      shared_ptr<vector<string>> kbUuidList_ {};
      // The language. Valid values:
      // - **CHINESE**: Chinese.
      // - **ENGLISH**: English.
      shared_ptr<string> language_ {};
      // The list of MCP header configurations.
      shared_ptr<vector<SessionConfig::McpHeaders>> mcpHeaders_ {};
      // The list of MCP server IDs in the session configuration.
      shared_ptr<vector<string>> mcpServerIds_ {};
      // The mode. Valid values:
      //  - **ASK_DATA**: the data query mode.
      //  - **ANALYSIS**: the analysis mode.
      //  - **INSIGHT**: the insight mode.
      shared_ptr<string> mode_ {};
      // The report page width.
      shared_ptr<int64_t> reportPageWidth_ {};
      // The report watermark.
      shared_ptr<string> reportWaterMark_ {};
      // The name of the user OSS bucket. Analysis process files and report artifacts can be uploaded to the specified OSS bucket.
      shared_ptr<string> userOssBucket_ {};
    };

    virtual bool empty() const override { return this->DMSUnit_ == nullptr
        && this->file_ == nullptr && this->sessionConfig_ == nullptr && this->title_ == nullptr && this->workspaceId_ == nullptr; };
    // DMSUnit Field Functions 
    bool hasDMSUnit() const { return this->DMSUnit_ != nullptr;};
    void deleteDMSUnit() { this->DMSUnit_ = nullptr;};
    inline string getDMSUnit() const { DARABONBA_PTR_GET_DEFAULT(DMSUnit_, "") };
    inline CreateDataAgentSessionRequest& setDMSUnit(string DMSUnit) { DARABONBA_PTR_SET_VALUE(DMSUnit_, DMSUnit) };


    // file Field Functions 
    bool hasFile() const { return this->file_ != nullptr;};
    void deleteFile() { this->file_ = nullptr;};
    inline string getFile() const { DARABONBA_PTR_GET_DEFAULT(file_, "") };
    inline CreateDataAgentSessionRequest& setFile(string file) { DARABONBA_PTR_SET_VALUE(file_, file) };


    // sessionConfig Field Functions 
    bool hasSessionConfig() const { return this->sessionConfig_ != nullptr;};
    void deleteSessionConfig() { this->sessionConfig_ = nullptr;};
    inline const CreateDataAgentSessionRequest::SessionConfig & getSessionConfig() const { DARABONBA_PTR_GET_CONST(sessionConfig_, CreateDataAgentSessionRequest::SessionConfig) };
    inline CreateDataAgentSessionRequest::SessionConfig getSessionConfig() { DARABONBA_PTR_GET(sessionConfig_, CreateDataAgentSessionRequest::SessionConfig) };
    inline CreateDataAgentSessionRequest& setSessionConfig(const CreateDataAgentSessionRequest::SessionConfig & sessionConfig) { DARABONBA_PTR_SET_VALUE(sessionConfig_, sessionConfig) };
    inline CreateDataAgentSessionRequest& setSessionConfig(CreateDataAgentSessionRequest::SessionConfig && sessionConfig) { DARABONBA_PTR_SET_RVALUE(sessionConfig_, sessionConfig) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateDataAgentSessionRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateDataAgentSessionRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The current DMS unit.
    shared_ptr<string> DMSUnit_ {};
    // The file ID.
    shared_ptr<string> file_ {};
    // The session configuration.
    shared_ptr<CreateDataAgentSessionRequest::SessionConfig> sessionConfig_ {};
    // The title. Chinese and English characters are supported. Maximum length: 128 characters.
    shared_ptr<string> title_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
