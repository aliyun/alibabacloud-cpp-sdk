// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKNOWLEDGESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKNOWLEDGESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateKnowledgeSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKnowledgeSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Document, document_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKnowledgeSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Document, document_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
    };
    UpdateKnowledgeSourceRequest() = default ;
    UpdateKnowledgeSourceRequest(const UpdateKnowledgeSourceRequest &) = default ;
    UpdateKnowledgeSourceRequest(UpdateKnowledgeSourceRequest &&) = default ;
    UpdateKnowledgeSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKnowledgeSourceRequest() = default ;
    UpdateKnowledgeSourceRequest& operator=(const UpdateKnowledgeSourceRequest &) = default ;
    UpdateKnowledgeSourceRequest& operator=(UpdateKnowledgeSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Project : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Project& obj) { 
        DARABONBA_PTR_TO_JSON(EnvType, envType_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, Project& obj) { 
        DARABONBA_PTR_FROM_JSON(EnvType, envType_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      };
      Project() = default ;
      Project(const Project &) = default ;
      Project(Project &&) = default ;
      Project(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Project() = default ;
      Project& operator=(const Project &) = default ;
      Project& operator=(Project &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->envType_ == nullptr
        && this->projectId_ == nullptr; };
      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
      inline Project& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Project& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      // Optional. Limits the read environment to Dev or Prod. If this parameter is not specified, cross-environment read access is not granted.
      shared_ptr<string> envType_ {};
      // The DataWorks workspace ID, which is used to locate the source.
      shared_ptr<int64_t> projectId_ {};
    };

    class Document : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Document& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectorType, connectorType_);
        DARABONBA_PTR_TO_JSON(DingTalk, dingTalk_);
        DARABONBA_PTR_TO_JSON(Feishu, feishu_);
        DARABONBA_PTR_TO_JSON(Lark, lark_);
        DARABONBA_PTR_TO_JSON(WeCom, weCom_);
        DARABONBA_PTR_TO_JSON(Yuque, yuque_);
      };
      friend void from_json(const Darabonba::Json& j, Document& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectorType, connectorType_);
        DARABONBA_PTR_FROM_JSON(DingTalk, dingTalk_);
        DARABONBA_PTR_FROM_JSON(Feishu, feishu_);
        DARABONBA_PTR_FROM_JSON(Lark, lark_);
        DARABONBA_PTR_FROM_JSON(WeCom, weCom_);
        DARABONBA_PTR_FROM_JSON(Yuque, yuque_);
      };
      Document() = default ;
      Document(const Document &) = default ;
      Document(Document &&) = default ;
      Document(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Document() = default ;
      Document& operator=(const Document &) = default ;
      Document& operator=(Document &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Yuque : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Yuque& obj) { 
          DARABONBA_PTR_TO_JSON(Teams, teams_);
        };
        friend void from_json(const Darabonba::Json& j, Yuque& obj) { 
          DARABONBA_PTR_FROM_JSON(Teams, teams_);
        };
        Yuque() = default ;
        Yuque(const Yuque &) = default ;
        Yuque(Yuque &&) = default ;
        Yuque(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Yuque() = default ;
        Yuque& operator=(const Yuque &) = default ;
        Yuque& operator=(Yuque &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Teams : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Teams& obj) { 
            DARABONBA_PTR_TO_JSON(Host, host_);
            DARABONBA_PTR_TO_JSON(SourceUrls, sourceUrls_);
            DARABONBA_PTR_TO_JSON(Token, token_);
          };
          friend void from_json(const Darabonba::Json& j, Teams& obj) { 
            DARABONBA_PTR_FROM_JSON(Host, host_);
            DARABONBA_PTR_FROM_JSON(SourceUrls, sourceUrls_);
            DARABONBA_PTR_FROM_JSON(Token, token_);
          };
          Teams() = default ;
          Teams(const Teams &) = default ;
          Teams(Teams &&) = default ;
          Teams(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Teams() = default ;
          Teams& operator=(const Teams &) = default ;
          Teams& operator=(Teams &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->host_ == nullptr
        && this->sourceUrls_ == nullptr && this->token_ == nullptr; };
          // host Field Functions 
          bool hasHost() const { return this->host_ != nullptr;};
          void deleteHost() { this->host_ = nullptr;};
          inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
          inline Teams& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


          // sourceUrls Field Functions 
          bool hasSourceUrls() const { return this->sourceUrls_ != nullptr;};
          void deleteSourceUrls() { this->sourceUrls_ = nullptr;};
          inline const vector<string> & getSourceUrls() const { DARABONBA_PTR_GET_CONST(sourceUrls_, vector<string>) };
          inline vector<string> getSourceUrls() { DARABONBA_PTR_GET(sourceUrls_, vector<string>) };
          inline Teams& setSourceUrls(const vector<string> & sourceUrls) { DARABONBA_PTR_SET_VALUE(sourceUrls_, sourceUrls) };
          inline Teams& setSourceUrls(vector<string> && sourceUrls) { DARABONBA_PTR_SET_RVALUE(sourceUrls_, sourceUrls) };


          // token Field Functions 
          bool hasToken() const { return this->token_ != nullptr;};
          void deleteToken() { this->token_ = nullptr;};
          inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
          inline Teams& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


        protected:
          // The URL of the team site.
          shared_ptr<string> host_ {};
          // The URLs of the knowledge bases, spaces, or documents selected for this connector. The actual allowed scope is determined by the connector and authorization.
          shared_ptr<vector<string>> sourceUrls_ {};
          // The Yuque team access credential. This credential is used only for creation or updates and is not returned in the response.
          shared_ptr<string> token_ {};
        };

        virtual bool empty() const override { return this->teams_ == nullptr; };
        // teams Field Functions 
        bool hasTeams() const { return this->teams_ != nullptr;};
        void deleteTeams() { this->teams_ = nullptr;};
        inline const vector<Yuque::Teams> & getTeams() const { DARABONBA_PTR_GET_CONST(teams_, vector<Yuque::Teams>) };
        inline vector<Yuque::Teams> getTeams() { DARABONBA_PTR_GET(teams_, vector<Yuque::Teams>) };
        inline Yuque& setTeams(const vector<Yuque::Teams> & teams) { DARABONBA_PTR_SET_VALUE(teams_, teams) };
        inline Yuque& setTeams(vector<Yuque::Teams> && teams) { DARABONBA_PTR_SET_RVALUE(teams_, teams) };


      protected:
        // The Yuque team configuration. Each team independently selects the synchronization scope.
        shared_ptr<vector<Yuque::Teams>> teams_ {};
      };

      class WeCom : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WeCom& obj) { 
          DARABONBA_PTR_TO_JSON(BotId, botId_);
          DARABONBA_PTR_TO_JSON(BotSecret, botSecret_);
          DARABONBA_PTR_TO_JSON(SpaceIds, spaceIds_);
        };
        friend void from_json(const Darabonba::Json& j, WeCom& obj) { 
          DARABONBA_PTR_FROM_JSON(BotId, botId_);
          DARABONBA_PTR_FROM_JSON(BotSecret, botSecret_);
          DARABONBA_PTR_FROM_JSON(SpaceIds, spaceIds_);
        };
        WeCom() = default ;
        WeCom(const WeCom &) = default ;
        WeCom(WeCom &&) = default ;
        WeCom(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WeCom() = default ;
        WeCom& operator=(const WeCom &) = default ;
        WeCom& operator=(WeCom &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->botId_ == nullptr
        && this->botSecret_ == nullptr && this->spaceIds_ == nullptr; };
        // botId Field Functions 
        bool hasBotId() const { return this->botId_ != nullptr;};
        void deleteBotId() { this->botId_ = nullptr;};
        inline string getBotId() const { DARABONBA_PTR_GET_DEFAULT(botId_, "") };
        inline WeCom& setBotId(string botId) { DARABONBA_PTR_SET_VALUE(botId_, botId) };


        // botSecret Field Functions 
        bool hasBotSecret() const { return this->botSecret_ != nullptr;};
        void deleteBotSecret() { this->botSecret_ = nullptr;};
        inline string getBotSecret() const { DARABONBA_PTR_GET_DEFAULT(botSecret_, "") };
        inline WeCom& setBotSecret(string botSecret) { DARABONBA_PTR_SET_VALUE(botSecret_, botSecret) };


        // spaceIds Field Functions 
        bool hasSpaceIds() const { return this->spaceIds_ != nullptr;};
        void deleteSpaceIds() { this->spaceIds_ = nullptr;};
        inline const vector<string> & getSpaceIds() const { DARABONBA_PTR_GET_CONST(spaceIds_, vector<string>) };
        inline vector<string> getSpaceIds() { DARABONBA_PTR_GET(spaceIds_, vector<string>) };
        inline WeCom& setSpaceIds(const vector<string> & spaceIds) { DARABONBA_PTR_SET_VALUE(spaceIds_, spaceIds) };
        inline WeCom& setSpaceIds(vector<string> && spaceIds) { DARABONBA_PTR_SET_RVALUE(spaceIds_, spaceIds) };


      protected:
        // The WeCom bot ID.
        shared_ptr<string> botId_ {};
        // The secret of the WeCom bot. This secret is used only for creation or updates and is not returned in the response.
        shared_ptr<string> botSecret_ {};
        // The IDs of the shared spaces selected for the WeCom connector.
        shared_ptr<vector<string>> spaceIds_ {};
      };

      class Lark : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Lark& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppSecret, appSecret_);
          DARABONBA_PTR_TO_JSON(SourceUrls, sourceUrls_);
        };
        friend void from_json(const Darabonba::Json& j, Lark& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppSecret, appSecret_);
          DARABONBA_PTR_FROM_JSON(SourceUrls, sourceUrls_);
        };
        Lark() = default ;
        Lark(const Lark &) = default ;
        Lark(Lark &&) = default ;
        Lark(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Lark() = default ;
        Lark& operator=(const Lark &) = default ;
        Lark& operator=(Lark &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appSecret_ == nullptr && this->sourceUrls_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline Lark& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appSecret Field Functions 
        bool hasAppSecret() const { return this->appSecret_ != nullptr;};
        void deleteAppSecret() { this->appSecret_ = nullptr;};
        inline string getAppSecret() const { DARABONBA_PTR_GET_DEFAULT(appSecret_, "") };
        inline Lark& setAppSecret(string appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };


        // sourceUrls Field Functions 
        bool hasSourceUrls() const { return this->sourceUrls_ != nullptr;};
        void deleteSourceUrls() { this->sourceUrls_ = nullptr;};
        inline const vector<string> & getSourceUrls() const { DARABONBA_PTR_GET_CONST(sourceUrls_, vector<string>) };
        inline vector<string> getSourceUrls() { DARABONBA_PTR_GET(sourceUrls_, vector<string>) };
        inline Lark& setSourceUrls(const vector<string> & sourceUrls) { DARABONBA_PTR_SET_VALUE(sourceUrls_, sourceUrls) };
        inline Lark& setSourceUrls(vector<string> && sourceUrls) { DARABONBA_PTR_SET_RVALUE(sourceUrls_, sourceUrls) };


      protected:
        // The application ID of Feishu or Lark. This is not the AppSecret.
        shared_ptr<string> appId_ {};
        // The secret of the Feishu or Lark application. This secret is used only for creation or updates and is not returned in the response.
        shared_ptr<string> appSecret_ {};
        // The URLs of the knowledge bases, spaces, or documents selected for this connector. The actual allowed scope is determined by the connector and authorization.
        shared_ptr<vector<string>> sourceUrls_ {};
      };

      class Feishu : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Feishu& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppSecret, appSecret_);
          DARABONBA_PTR_TO_JSON(SourceUrls, sourceUrls_);
        };
        friend void from_json(const Darabonba::Json& j, Feishu& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppSecret, appSecret_);
          DARABONBA_PTR_FROM_JSON(SourceUrls, sourceUrls_);
        };
        Feishu() = default ;
        Feishu(const Feishu &) = default ;
        Feishu(Feishu &&) = default ;
        Feishu(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Feishu() = default ;
        Feishu& operator=(const Feishu &) = default ;
        Feishu& operator=(Feishu &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appSecret_ == nullptr && this->sourceUrls_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline Feishu& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appSecret Field Functions 
        bool hasAppSecret() const { return this->appSecret_ != nullptr;};
        void deleteAppSecret() { this->appSecret_ = nullptr;};
        inline string getAppSecret() const { DARABONBA_PTR_GET_DEFAULT(appSecret_, "") };
        inline Feishu& setAppSecret(string appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };


        // sourceUrls Field Functions 
        bool hasSourceUrls() const { return this->sourceUrls_ != nullptr;};
        void deleteSourceUrls() { this->sourceUrls_ = nullptr;};
        inline const vector<string> & getSourceUrls() const { DARABONBA_PTR_GET_CONST(sourceUrls_, vector<string>) };
        inline vector<string> getSourceUrls() { DARABONBA_PTR_GET(sourceUrls_, vector<string>) };
        inline Feishu& setSourceUrls(const vector<string> & sourceUrls) { DARABONBA_PTR_SET_VALUE(sourceUrls_, sourceUrls) };
        inline Feishu& setSourceUrls(vector<string> && sourceUrls) { DARABONBA_PTR_SET_RVALUE(sourceUrls_, sourceUrls) };


      protected:
        // The application ID of Feishu or Lark. This is not the AppSecret.
        shared_ptr<string> appId_ {};
        // The secret of the Feishu or Lark application. This secret is used only for creation or updates and is not returned in the response.
        shared_ptr<string> appSecret_ {};
        // The URLs of the knowledge bases, spaces, or documents selected for this connector. The actual allowed scope is determined by the connector and authorization.
        shared_ptr<vector<string>> sourceUrls_ {};
      };

      class DingTalk : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DingTalk& obj) { 
          DARABONBA_PTR_TO_JSON(McpKey, mcpKey_);
          DARABONBA_PTR_TO_JSON(SourceUrls, sourceUrls_);
        };
        friend void from_json(const Darabonba::Json& j, DingTalk& obj) { 
          DARABONBA_PTR_FROM_JSON(McpKey, mcpKey_);
          DARABONBA_PTR_FROM_JSON(SourceUrls, sourceUrls_);
        };
        DingTalk() = default ;
        DingTalk(const DingTalk &) = default ;
        DingTalk(DingTalk &&) = default ;
        DingTalk(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DingTalk() = default ;
        DingTalk& operator=(const DingTalk &) = default ;
        DingTalk& operator=(DingTalk &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->mcpKey_ == nullptr
        && this->sourceUrls_ == nullptr; };
        // mcpKey Field Functions 
        bool hasMcpKey() const { return this->mcpKey_ != nullptr;};
        void deleteMcpKey() { this->mcpKey_ = nullptr;};
        inline string getMcpKey() const { DARABONBA_PTR_GET_DEFAULT(mcpKey_, "") };
        inline DingTalk& setMcpKey(string mcpKey) { DARABONBA_PTR_SET_VALUE(mcpKey_, mcpKey) };


        // sourceUrls Field Functions 
        bool hasSourceUrls() const { return this->sourceUrls_ != nullptr;};
        void deleteSourceUrls() { this->sourceUrls_ = nullptr;};
        inline const vector<string> & getSourceUrls() const { DARABONBA_PTR_GET_CONST(sourceUrls_, vector<string>) };
        inline vector<string> getSourceUrls() { DARABONBA_PTR_GET(sourceUrls_, vector<string>) };
        inline DingTalk& setSourceUrls(const vector<string> & sourceUrls) { DARABONBA_PTR_SET_VALUE(sourceUrls_, sourceUrls) };
        inline DingTalk& setSourceUrls(vector<string> && sourceUrls) { DARABONBA_PTR_SET_RVALUE(sourceUrls_, sourceUrls) };


      protected:
        // The MCP authorization credential for the DingTalk document connector. This credential is used only for creation or updates and is not returned in the response.
        shared_ptr<string> mcpKey_ {};
        // The URLs of the knowledge bases, spaces, or documents selected for this connector. The actual allowed scope is determined by the connector and authorization.
        shared_ptr<vector<string>> sourceUrls_ {};
      };

      virtual bool empty() const override { return this->connectorType_ == nullptr
        && this->dingTalk_ == nullptr && this->feishu_ == nullptr && this->lark_ == nullptr && this->weCom_ == nullptr && this->yuque_ == nullptr; };
      // connectorType Field Functions 
      bool hasConnectorType() const { return this->connectorType_ != nullptr;};
      void deleteConnectorType() { this->connectorType_ = nullptr;};
      inline string getConnectorType() const { DARABONBA_PTR_GET_DEFAULT(connectorType_, "") };
      inline Document& setConnectorType(string connectorType) { DARABONBA_PTR_SET_VALUE(connectorType_, connectorType) };


      // dingTalk Field Functions 
      bool hasDingTalk() const { return this->dingTalk_ != nullptr;};
      void deleteDingTalk() { this->dingTalk_ = nullptr;};
      inline const Document::DingTalk & getDingTalk() const { DARABONBA_PTR_GET_CONST(dingTalk_, Document::DingTalk) };
      inline Document::DingTalk getDingTalk() { DARABONBA_PTR_GET(dingTalk_, Document::DingTalk) };
      inline Document& setDingTalk(const Document::DingTalk & dingTalk) { DARABONBA_PTR_SET_VALUE(dingTalk_, dingTalk) };
      inline Document& setDingTalk(Document::DingTalk && dingTalk) { DARABONBA_PTR_SET_RVALUE(dingTalk_, dingTalk) };


      // feishu Field Functions 
      bool hasFeishu() const { return this->feishu_ != nullptr;};
      void deleteFeishu() { this->feishu_ = nullptr;};
      inline const Document::Feishu & getFeishu() const { DARABONBA_PTR_GET_CONST(feishu_, Document::Feishu) };
      inline Document::Feishu getFeishu() { DARABONBA_PTR_GET(feishu_, Document::Feishu) };
      inline Document& setFeishu(const Document::Feishu & feishu) { DARABONBA_PTR_SET_VALUE(feishu_, feishu) };
      inline Document& setFeishu(Document::Feishu && feishu) { DARABONBA_PTR_SET_RVALUE(feishu_, feishu) };


      // lark Field Functions 
      bool hasLark() const { return this->lark_ != nullptr;};
      void deleteLark() { this->lark_ = nullptr;};
      inline const Document::Lark & getLark() const { DARABONBA_PTR_GET_CONST(lark_, Document::Lark) };
      inline Document::Lark getLark() { DARABONBA_PTR_GET(lark_, Document::Lark) };
      inline Document& setLark(const Document::Lark & lark) { DARABONBA_PTR_SET_VALUE(lark_, lark) };
      inline Document& setLark(Document::Lark && lark) { DARABONBA_PTR_SET_RVALUE(lark_, lark) };


      // weCom Field Functions 
      bool hasWeCom() const { return this->weCom_ != nullptr;};
      void deleteWeCom() { this->weCom_ = nullptr;};
      inline const Document::WeCom & getWeCom() const { DARABONBA_PTR_GET_CONST(weCom_, Document::WeCom) };
      inline Document::WeCom getWeCom() { DARABONBA_PTR_GET(weCom_, Document::WeCom) };
      inline Document& setWeCom(const Document::WeCom & weCom) { DARABONBA_PTR_SET_VALUE(weCom_, weCom) };
      inline Document& setWeCom(Document::WeCom && weCom) { DARABONBA_PTR_SET_RVALUE(weCom_, weCom) };


      // yuque Field Functions 
      bool hasYuque() const { return this->yuque_ != nullptr;};
      void deleteYuque() { this->yuque_ = nullptr;};
      inline const Document::Yuque & getYuque() const { DARABONBA_PTR_GET_CONST(yuque_, Document::Yuque) };
      inline Document::Yuque getYuque() { DARABONBA_PTR_GET(yuque_, Document::Yuque) };
      inline Document& setYuque(const Document::Yuque & yuque) { DARABONBA_PTR_SET_VALUE(yuque_, yuque) };
      inline Document& setYuque(Document::Yuque && yuque) { DARABONBA_PTR_SET_RVALUE(yuque_, yuque) };


    protected:
      // The connector type. Valid values: DINGTALK, FEISHU, LARK, WECOM, and YUQUE. This value cannot be changed after creation.
      shared_ptr<string> connectorType_ {};
      // The DingTalk configuration. This parameter is present only when the connector type is DINGTALK.
      shared_ptr<Document::DingTalk> dingTalk_ {};
      // The Feishu configuration. This parameter is present only when the connector type is FEISHU.
      shared_ptr<Document::Feishu> feishu_ {};
      // The Lark configuration. This parameter is present only when the connector type is LARK.
      shared_ptr<Document::Lark> lark_ {};
      // The WeCom configuration. This parameter is present only when the connector type is WECOM.
      shared_ptr<Document::WeCom> weCom_ {};
      // The Yuque configuration. This parameter is present only when the connector type is YUQUE.
      shared_ptr<Document::Yuque> yuque_ {};
    };

    class DataSource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataSource& obj) { 
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      };
      friend void from_json(const Darabonba::Json& j, DataSource& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
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
      virtual bool empty() const override { return this->dataSourceId_ == nullptr; };
      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline int64_t getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
      inline DataSource& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    protected:
      // The DataWorks data source ID. The server uses this ID to resolve the associated workspace, environment, and data source type.
      shared_ptr<int64_t> dataSourceId_ {};
    };

    virtual bool empty() const override { return this->dataSource_ == nullptr
        && this->description_ == nullptr && this->document_ == nullptr && this->knowledgeBaseId_ == nullptr && this->name_ == nullptr && this->project_ == nullptr
        && this->sourceId_ == nullptr; };
    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline const UpdateKnowledgeSourceRequest::DataSource & getDataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, UpdateKnowledgeSourceRequest::DataSource) };
    inline UpdateKnowledgeSourceRequest::DataSource getDataSource() { DARABONBA_PTR_GET(dataSource_, UpdateKnowledgeSourceRequest::DataSource) };
    inline UpdateKnowledgeSourceRequest& setDataSource(const UpdateKnowledgeSourceRequest::DataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
    inline UpdateKnowledgeSourceRequest& setDataSource(UpdateKnowledgeSourceRequest::DataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateKnowledgeSourceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // document Field Functions 
    bool hasDocument() const { return this->document_ != nullptr;};
    void deleteDocument() { this->document_ = nullptr;};
    inline const UpdateKnowledgeSourceRequest::Document & getDocument() const { DARABONBA_PTR_GET_CONST(document_, UpdateKnowledgeSourceRequest::Document) };
    inline UpdateKnowledgeSourceRequest::Document getDocument() { DARABONBA_PTR_GET(document_, UpdateKnowledgeSourceRequest::Document) };
    inline UpdateKnowledgeSourceRequest& setDocument(const UpdateKnowledgeSourceRequest::Document & document) { DARABONBA_PTR_SET_VALUE(document_, document) };
    inline UpdateKnowledgeSourceRequest& setDocument(UpdateKnowledgeSourceRequest::Document && document) { DARABONBA_PTR_SET_RVALUE(document_, document) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline UpdateKnowledgeSourceRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateKnowledgeSourceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline const UpdateKnowledgeSourceRequest::Project & getProject() const { DARABONBA_PTR_GET_CONST(project_, UpdateKnowledgeSourceRequest::Project) };
    inline UpdateKnowledgeSourceRequest::Project getProject() { DARABONBA_PTR_GET(project_, UpdateKnowledgeSourceRequest::Project) };
    inline UpdateKnowledgeSourceRequest& setProject(const UpdateKnowledgeSourceRequest::Project & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
    inline UpdateKnowledgeSourceRequest& setProject(UpdateKnowledgeSourceRequest::Project && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline UpdateKnowledgeSourceRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


  protected:
    // The complete configuration for Type=DATA_SOURCE.
    shared_ptr<UpdateKnowledgeSourceRequest::DataSource> dataSource_ {};
    // The new description.
    shared_ptr<string> description_ {};
    // The complete configuration for Type=DOCUMENT. Credentials are not returned after they are written.
    shared_ptr<UpdateKnowledgeSourceRequest::Document> document_ {};
    // The ID of the knowledge base to which the source belongs.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // The new name.
    shared_ptr<string> name_ {};
    // The complete configuration for Type=PROJECT.
    shared_ptr<UpdateKnowledgeSourceRequest::Project> project_ {};
    // The source ID.
    // 
    // This parameter is required.
    shared_ptr<string> sourceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
