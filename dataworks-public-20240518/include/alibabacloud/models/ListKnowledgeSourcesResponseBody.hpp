// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKNOWLEDGESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKNOWLEDGESOURCESRESPONSEBODY_HPP_
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
  class ListKnowledgeSourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKnowledgeSourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListKnowledgeSourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListKnowledgeSourcesResponseBody() = default ;
    ListKnowledgeSourcesResponseBody(const ListKnowledgeSourcesResponseBody &) = default ;
    ListKnowledgeSourcesResponseBody(ListKnowledgeSourcesResponseBody &&) = default ;
    ListKnowledgeSourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKnowledgeSourcesResponseBody() = default ;
    ListKnowledgeSourcesResponseBody& operator=(const ListKnowledgeSourcesResponseBody &) = default ;
    ListKnowledgeSourcesResponseBody& operator=(ListKnowledgeSourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(Sources, sources_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(Sources, sources_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Sources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Sources& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
          DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Document, document_);
          DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Project, project_);
          DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Sources& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
          DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Document, document_);
          DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Project, project_);
          DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Sources() = default ;
        Sources(const Sources &) = default ;
        Sources(Sources &&) = default ;
        Sources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Sources() = default ;
        Sources& operator=(const Sources &) = default ;
        Sources& operator=(Sources &&) = default ;
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
          // The environment type. This optional field restricts the read environment to Dev or Prod. If this field is not specified, it does not mean that you have the permissions to read both environments.
          shared_ptr<string> envType_ {};
          // The ID of the DataWorks workspace. This field is used to locate the source.
          shared_ptr<int64_t> projectId_ {};
        };

        class Document : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Document& obj) { 
            DARABONBA_PTR_TO_JSON(ConnectorType, connectorType_);
            DARABONBA_PTR_TO_JSON(CredentialConfigured, credentialConfigured_);
            DARABONBA_PTR_TO_JSON(DingTalk, dingTalk_);
            DARABONBA_PTR_TO_JSON(Feishu, feishu_);
            DARABONBA_PTR_TO_JSON(Lark, lark_);
            DARABONBA_PTR_TO_JSON(WeCom, weCom_);
            DARABONBA_PTR_TO_JSON(Yuque, yuque_);
          };
          friend void from_json(const Darabonba::Json& j, Document& obj) { 
            DARABONBA_PTR_FROM_JSON(ConnectorType, connectorType_);
            DARABONBA_PTR_FROM_JSON(CredentialConfigured, credentialConfigured_);
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
                DARABONBA_PTR_TO_JSON(TeamId, teamId_);
                DARABONBA_PTR_TO_JSON(TeamLogin, teamLogin_);
                DARABONBA_PTR_TO_JSON(TeamName, teamName_);
              };
              friend void from_json(const Darabonba::Json& j, Teams& obj) { 
                DARABONBA_PTR_FROM_JSON(Host, host_);
                DARABONBA_PTR_FROM_JSON(SourceUrls, sourceUrls_);
                DARABONBA_PTR_FROM_JSON(TeamId, teamId_);
                DARABONBA_PTR_FROM_JSON(TeamLogin, teamLogin_);
                DARABONBA_PTR_FROM_JSON(TeamName, teamName_);
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
        && this->sourceUrls_ == nullptr && this->teamId_ == nullptr && this->teamLogin_ == nullptr && this->teamName_ == nullptr; };
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


              // teamId Field Functions 
              bool hasTeamId() const { return this->teamId_ != nullptr;};
              void deleteTeamId() { this->teamId_ = nullptr;};
              inline string getTeamId() const { DARABONBA_PTR_GET_DEFAULT(teamId_, "") };
              inline Teams& setTeamId(string teamId) { DARABONBA_PTR_SET_VALUE(teamId_, teamId) };


              // teamLogin Field Functions 
              bool hasTeamLogin() const { return this->teamLogin_ != nullptr;};
              void deleteTeamLogin() { this->teamLogin_ = nullptr;};
              inline string getTeamLogin() const { DARABONBA_PTR_GET_DEFAULT(teamLogin_, "") };
              inline Teams& setTeamLogin(string teamLogin) { DARABONBA_PTR_SET_VALUE(teamLogin_, teamLogin) };


              // teamName Field Functions 
              bool hasTeamName() const { return this->teamName_ != nullptr;};
              void deleteTeamName() { this->teamName_ = nullptr;};
              inline string getTeamName() const { DARABONBA_PTR_GET_DEFAULT(teamName_, "") };
              inline Teams& setTeamName(string teamName) { DARABONBA_PTR_SET_VALUE(teamName_, teamName) };


            protected:
              // The URL of the team site.
              shared_ptr<string> host_ {};
              // The URLs of the knowledge bases, spaces, or documents selected for this connector. The actual allowed scope is determined by the connector and authorization.
              shared_ptr<vector<string>> sourceUrls_ {};
              // The team ID verified by the server.
              shared_ptr<string> teamId_ {};
              // The team logon name. This is read-only display information.
              shared_ptr<string> teamLogin_ {};
              // The team name. This is read-only display information.
              shared_ptr<string> teamName_ {};
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
            // The Yuque team configurations. Each team independently selects the synchronization scope.
            shared_ptr<vector<Yuque::Teams>> teams_ {};
          };

          class WeCom : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const WeCom& obj) { 
              DARABONBA_PTR_TO_JSON(BotId, botId_);
              DARABONBA_PTR_TO_JSON(Spaces, spaces_);
            };
            friend void from_json(const Darabonba::Json& j, WeCom& obj) { 
              DARABONBA_PTR_FROM_JSON(BotId, botId_);
              DARABONBA_PTR_FROM_JSON(Spaces, spaces_);
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
            class Spaces : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Spaces& obj) { 
                DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
                DARABONBA_PTR_TO_JSON(SpaceName, spaceName_);
              };
              friend void from_json(const Darabonba::Json& j, Spaces& obj) { 
                DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
                DARABONBA_PTR_FROM_JSON(SpaceName, spaceName_);
              };
              Spaces() = default ;
              Spaces(const Spaces &) = default ;
              Spaces(Spaces &&) = default ;
              Spaces(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Spaces() = default ;
              Spaces& operator=(const Spaces &) = default ;
              Spaces& operator=(Spaces &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->spaceId_ == nullptr
        && this->spaceName_ == nullptr; };
              // spaceId Field Functions 
              bool hasSpaceId() const { return this->spaceId_ != nullptr;};
              void deleteSpaceId() { this->spaceId_ = nullptr;};
              inline string getSpaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
              inline Spaces& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


              // spaceName Field Functions 
              bool hasSpaceName() const { return this->spaceName_ != nullptr;};
              void deleteSpaceName() { this->spaceName_ = nullptr;};
              inline string getSpaceName() const { DARABONBA_PTR_GET_DEFAULT(spaceName_, "") };
              inline Spaces& setSpaceName(string spaceName) { DARABONBA_PTR_SET_VALUE(spaceName_, spaceName) };


            protected:
              // The identity of the shared space.
              shared_ptr<string> spaceId_ {};
              // The display name verified by the server. This field is not used for identity verification.
              shared_ptr<string> spaceName_ {};
            };

            virtual bool empty() const override { return this->botId_ == nullptr
        && this->spaces_ == nullptr; };
            // botId Field Functions 
            bool hasBotId() const { return this->botId_ != nullptr;};
            void deleteBotId() { this->botId_ = nullptr;};
            inline string getBotId() const { DARABONBA_PTR_GET_DEFAULT(botId_, "") };
            inline WeCom& setBotId(string botId) { DARABONBA_PTR_SET_VALUE(botId_, botId) };


            // spaces Field Functions 
            bool hasSpaces() const { return this->spaces_ != nullptr;};
            void deleteSpaces() { this->spaces_ = nullptr;};
            inline const vector<WeCom::Spaces> & getSpaces() const { DARABONBA_PTR_GET_CONST(spaces_, vector<WeCom::Spaces>) };
            inline vector<WeCom::Spaces> getSpaces() { DARABONBA_PTR_GET(spaces_, vector<WeCom::Spaces>) };
            inline WeCom& setSpaces(const vector<WeCom::Spaces> & spaces) { DARABONBA_PTR_SET_VALUE(spaces_, spaces) };
            inline WeCom& setSpaces(vector<WeCom::Spaces> && spaces) { DARABONBA_PTR_SET_RVALUE(spaces_, spaces) };


          protected:
            // The ID of the WeCom bot.
            shared_ptr<string> botId_ {};
            // The selected shared spaces, including their identities and display names.
            shared_ptr<vector<WeCom::Spaces>> spaces_ {};
          };

          class Lark : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Lark& obj) { 
              DARABONBA_PTR_TO_JSON(AppId, appId_);
              DARABONBA_PTR_TO_JSON(SourceUrls, sourceUrls_);
            };
            friend void from_json(const Darabonba::Json& j, Lark& obj) { 
              DARABONBA_PTR_FROM_JSON(AppId, appId_);
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
        && this->sourceUrls_ == nullptr; };
            // appId Field Functions 
            bool hasAppId() const { return this->appId_ != nullptr;};
            void deleteAppId() { this->appId_ = nullptr;};
            inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
            inline Lark& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


            // sourceUrls Field Functions 
            bool hasSourceUrls() const { return this->sourceUrls_ != nullptr;};
            void deleteSourceUrls() { this->sourceUrls_ = nullptr;};
            inline const vector<string> & getSourceUrls() const { DARABONBA_PTR_GET_CONST(sourceUrls_, vector<string>) };
            inline vector<string> getSourceUrls() { DARABONBA_PTR_GET(sourceUrls_, vector<string>) };
            inline Lark& setSourceUrls(const vector<string> & sourceUrls) { DARABONBA_PTR_SET_VALUE(sourceUrls_, sourceUrls) };
            inline Lark& setSourceUrls(vector<string> && sourceUrls) { DARABONBA_PTR_SET_RVALUE(sourceUrls_, sourceUrls) };


          protected:
            // The Feishu or Lark application ID. This is not the AppSecret.
            shared_ptr<string> appId_ {};
            // The URLs of the knowledge bases, spaces, or documents selected for this connector. The actual allowed scope is determined by the connector and authorization.
            shared_ptr<vector<string>> sourceUrls_ {};
          };

          class Feishu : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Feishu& obj) { 
              DARABONBA_PTR_TO_JSON(AppId, appId_);
              DARABONBA_PTR_TO_JSON(SourceUrls, sourceUrls_);
            };
            friend void from_json(const Darabonba::Json& j, Feishu& obj) { 
              DARABONBA_PTR_FROM_JSON(AppId, appId_);
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
        && this->sourceUrls_ == nullptr; };
            // appId Field Functions 
            bool hasAppId() const { return this->appId_ != nullptr;};
            void deleteAppId() { this->appId_ = nullptr;};
            inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
            inline Feishu& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


            // sourceUrls Field Functions 
            bool hasSourceUrls() const { return this->sourceUrls_ != nullptr;};
            void deleteSourceUrls() { this->sourceUrls_ = nullptr;};
            inline const vector<string> & getSourceUrls() const { DARABONBA_PTR_GET_CONST(sourceUrls_, vector<string>) };
            inline vector<string> getSourceUrls() { DARABONBA_PTR_GET(sourceUrls_, vector<string>) };
            inline Feishu& setSourceUrls(const vector<string> & sourceUrls) { DARABONBA_PTR_SET_VALUE(sourceUrls_, sourceUrls) };
            inline Feishu& setSourceUrls(vector<string> && sourceUrls) { DARABONBA_PTR_SET_RVALUE(sourceUrls_, sourceUrls) };


          protected:
            // The Feishu or Lark application ID. This is not the AppSecret.
            shared_ptr<string> appId_ {};
            // The URLs of the knowledge bases, spaces, or documents selected for this connector. The actual allowed scope is determined by the connector and authorization.
            shared_ptr<vector<string>> sourceUrls_ {};
          };

          class DingTalk : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DingTalk& obj) { 
              DARABONBA_PTR_TO_JSON(AppId, appId_);
              DARABONBA_PTR_TO_JSON(SourceUrls, sourceUrls_);
            };
            friend void from_json(const Darabonba::Json& j, DingTalk& obj) { 
              DARABONBA_PTR_FROM_JSON(AppId, appId_);
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
            virtual bool empty() const override { return this->appId_ == nullptr
        && this->sourceUrls_ == nullptr; };
            // appId Field Functions 
            bool hasAppId() const { return this->appId_ != nullptr;};
            void deleteAppId() { this->appId_ = nullptr;};
            inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
            inline DingTalk& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


            // sourceUrls Field Functions 
            bool hasSourceUrls() const { return this->sourceUrls_ != nullptr;};
            void deleteSourceUrls() { this->sourceUrls_ = nullptr;};
            inline const vector<string> & getSourceUrls() const { DARABONBA_PTR_GET_CONST(sourceUrls_, vector<string>) };
            inline vector<string> getSourceUrls() { DARABONBA_PTR_GET(sourceUrls_, vector<string>) };
            inline DingTalk& setSourceUrls(const vector<string> & sourceUrls) { DARABONBA_PTR_SET_VALUE(sourceUrls_, sourceUrls) };
            inline DingTalk& setSourceUrls(vector<string> && sourceUrls) { DARABONBA_PTR_SET_RVALUE(sourceUrls_, sourceUrls) };


          protected:
            // The Feishu or Lark application ID. This is not the AppSecret.
            shared_ptr<string> appId_ {};
            // The URLs of the knowledge bases, spaces, or documents selected for this connector. The actual allowed scope is determined by the connector and authorization.
            shared_ptr<vector<string>> sourceUrls_ {};
          };

          virtual bool empty() const override { return this->connectorType_ == nullptr
        && this->credentialConfigured_ == nullptr && this->dingTalk_ == nullptr && this->feishu_ == nullptr && this->lark_ == nullptr && this->weCom_ == nullptr
        && this->yuque_ == nullptr; };
          // connectorType Field Functions 
          bool hasConnectorType() const { return this->connectorType_ != nullptr;};
          void deleteConnectorType() { this->connectorType_ = nullptr;};
          inline string getConnectorType() const { DARABONBA_PTR_GET_DEFAULT(connectorType_, "") };
          inline Document& setConnectorType(string connectorType) { DARABONBA_PTR_SET_VALUE(connectorType_, connectorType) };


          // credentialConfigured Field Functions 
          bool hasCredentialConfigured() const { return this->credentialConfigured_ != nullptr;};
          void deleteCredentialConfigured() { this->credentialConfigured_ = nullptr;};
          inline bool getCredentialConfigured() const { DARABONBA_PTR_GET_DEFAULT(credentialConfigured_, false) };
          inline Document& setCredentialConfigured(bool credentialConfigured) { DARABONBA_PTR_SET_VALUE(credentialConfigured_, credentialConfigured) };


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
          // The connector type. Valid values: DINGTALK, FEISHU, LARK, WECOM, or YUQUE. The connector type cannot be changed after the source is created.
          shared_ptr<string> connectorType_ {};
          // Indicates whether the credentials required by the connector are configured. This field is read-only, and the credential content or ciphertext is not returned.
          shared_ptr<bool> credentialConfigured_ {};
          // The DingTalk configuration. This field is available only when the connector type is DingTalk.
          shared_ptr<Document::DingTalk> dingTalk_ {};
          // The Feishu configuration. This field is available only when the connector type is Feishu.
          shared_ptr<Document::Feishu> feishu_ {};
          // The Lark configuration. This field is available only when the connector type is Lark.
          shared_ptr<Document::Lark> lark_ {};
          // The WeCom configuration. This field is available only when the connector type is WeCom.
          shared_ptr<Document::WeCom> weCom_ {};
          // The Yuque configuration. This field is available only when the connector type is Yuque.
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
          // The ID of the DataWorks data source. The server uses this ID to resolve the workspace, environment, and data source type.
          shared_ptr<int64_t> dataSourceId_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createUser_ == nullptr && this->dataSource_ == nullptr && this->description_ == nullptr && this->document_ == nullptr && this->knowledgeBaseId_ == nullptr
        && this->modifyTime_ == nullptr && this->name_ == nullptr && this->project_ == nullptr && this->sourceId_ == nullptr && this->type_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Sources& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createUser Field Functions 
        bool hasCreateUser() const { return this->createUser_ != nullptr;};
        void deleteCreateUser() { this->createUser_ = nullptr;};
        inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
        inline Sources& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


        // dataSource Field Functions 
        bool hasDataSource() const { return this->dataSource_ != nullptr;};
        void deleteDataSource() { this->dataSource_ = nullptr;};
        inline const Sources::DataSource & getDataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, Sources::DataSource) };
        inline Sources::DataSource getDataSource() { DARABONBA_PTR_GET(dataSource_, Sources::DataSource) };
        inline Sources& setDataSource(const Sources::DataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
        inline Sources& setDataSource(Sources::DataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Sources& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // document Field Functions 
        bool hasDocument() const { return this->document_ != nullptr;};
        void deleteDocument() { this->document_ = nullptr;};
        inline const Sources::Document & getDocument() const { DARABONBA_PTR_GET_CONST(document_, Sources::Document) };
        inline Sources::Document getDocument() { DARABONBA_PTR_GET(document_, Sources::Document) };
        inline Sources& setDocument(const Sources::Document & document) { DARABONBA_PTR_SET_VALUE(document_, document) };
        inline Sources& setDocument(Sources::Document && document) { DARABONBA_PTR_SET_RVALUE(document_, document) };


        // knowledgeBaseId Field Functions 
        bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
        void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
        inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
        inline Sources& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
        inline Sources& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Sources& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // project Field Functions 
        bool hasProject() const { return this->project_ != nullptr;};
        void deleteProject() { this->project_ = nullptr;};
        inline const Sources::Project & getProject() const { DARABONBA_PTR_GET_CONST(project_, Sources::Project) };
        inline Sources::Project getProject() { DARABONBA_PTR_GET(project_, Sources::Project) };
        inline Sources& setProject(const Sources::Project & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
        inline Sources& setProject(Sources::Project && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


        // sourceId Field Functions 
        bool hasSourceId() const { return this->sourceId_ != nullptr;};
        void deleteSourceId() { this->sourceId_ = nullptr;};
        inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
        inline Sources& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Sources& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The creation time. The value is a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> createTime_ {};
        // The creator. This field is written by the server.
        shared_ptr<string> createUser_ {};
        // The data source information. This field is available only when Type is set to DATA_SOURCE.
        shared_ptr<Sources::DataSource> dataSource_ {};
        // The optional description of the purpose.
        shared_ptr<string> description_ {};
        // The document information. This field is available only when Type is set to DOCUMENT.
        shared_ptr<Sources::Document> document_ {};
        // The ID of the knowledge base to which the source belongs. The source cannot be migrated to another knowledge base after it is created.
        shared_ptr<string> knowledgeBaseId_ {};
        // The last modification time. The value is a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> modifyTime_ {};
        // The name used to identify the source.
        shared_ptr<string> name_ {};
        // The project information. This field is available only when Type is set to PROJECT.
        shared_ptr<Sources::Project> project_ {};
        // The stable source ID generated by the service.
        shared_ptr<string> sourceId_ {};
        // The source type. Valid values: PROJECT (workspace), DATA_SOURCE (DataWorks data source), or DOCUMENT (external document source).
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->sources_ == nullptr; };
      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // sources Field Functions 
      bool hasSources() const { return this->sources_ != nullptr;};
      void deleteSources() { this->sources_ = nullptr;};
      inline const vector<Data::Sources> & getSources() const { DARABONBA_PTR_GET_CONST(sources_, vector<Data::Sources>) };
      inline vector<Data::Sources> getSources() { DARABONBA_PTR_GET(sources_, vector<Data::Sources>) };
      inline Data& setSources(const vector<Data::Sources> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
      inline Data& setSources(vector<Data::Sources> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


    protected:
      // The pagination token for the next page. If no next page exists, the value is null.
      shared_ptr<string> nextToken_ {};
      // The knowledge sources that you have permission to read on the current page.
      shared_ptr<vector<Data::Sources>> sources_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListKnowledgeSourcesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListKnowledgeSourcesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListKnowledgeSourcesResponseBody::Data) };
    inline ListKnowledgeSourcesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListKnowledgeSourcesResponseBody::Data) };
    inline ListKnowledgeSourcesResponseBody& setData(const ListKnowledgeSourcesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListKnowledgeSourcesResponseBody& setData(ListKnowledgeSourcesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListKnowledgeSourcesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListKnowledgeSourcesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKnowledgeSourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListKnowledgeSourcesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business error code. This code is used to determine the error type when the request fails.
    shared_ptr<string> code_ {};
    // The business data returned when the request is successful.
    shared_ptr<ListKnowledgeSourcesResponseBody::Data> data_ {};
    // The maximum number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // The error message returned when the request fails.
    shared_ptr<string> message_ {};
    // The unique identifier of the request, which can be used to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
