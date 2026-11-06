// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAAGENTSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAAGENTSESSIONRESPONSEBODY_HPP_
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
  class DescribeDataAgentSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataAgentSessionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataAgentSessionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeDataAgentSessionResponseBody() = default ;
    DescribeDataAgentSessionResponseBody(const DescribeDataAgentSessionResponseBody &) = default ;
    DescribeDataAgentSessionResponseBody(DescribeDataAgentSessionResponseBody &&) = default ;
    DescribeDataAgentSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataAgentSessionResponseBody() = default ;
    DescribeDataAgentSessionResponseBody& operator=(const DescribeDataAgentSessionResponseBody &) = default ;
    DescribeDataAgentSessionResponseBody& operator=(DescribeDataAgentSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentId, agentId_);
        DARABONBA_PTR_TO_JSON(AgentStatus, agentStatus_);
        DARABONBA_PTR_TO_JSON(Artifacts, artifacts_);
        DARABONBA_PTR_TO_JSON(Capabilities, capabilities_);
        DARABONBA_PTR_TO_JSON(ChatHistoryLocations, chatHistoryLocations_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
        DARABONBA_PTR_TO_JSON(FavoriteInWorkspace, favoriteInWorkspace_);
        DARABONBA_PTR_TO_JSON(File, file_);
        DARABONBA_PTR_TO_JSON(Messages, messages_);
        DARABONBA_PTR_TO_JSON(PreviewCustomAgent, previewCustomAgent_);
        DARABONBA_PTR_TO_JSON(RecallResults, recallResults_);
        DARABONBA_PTR_TO_JSON(Saved, saved_);
        DARABONBA_PTR_TO_JSON(SessionConfig, sessionConfig_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(SessionStatus, sessionStatus_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
        DARABONBA_PTR_FROM_JSON(AgentStatus, agentStatus_);
        DARABONBA_PTR_FROM_JSON(Artifacts, artifacts_);
        DARABONBA_PTR_FROM_JSON(Capabilities, capabilities_);
        DARABONBA_PTR_FROM_JSON(ChatHistoryLocations, chatHistoryLocations_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
        DARABONBA_PTR_FROM_JSON(FavoriteInWorkspace, favoriteInWorkspace_);
        DARABONBA_PTR_FROM_JSON(File, file_);
        DARABONBA_PTR_FROM_JSON(Messages, messages_);
        DARABONBA_PTR_FROM_JSON(PreviewCustomAgent, previewCustomAgent_);
        DARABONBA_PTR_FROM_JSON(RecallResults, recallResults_);
        DARABONBA_PTR_FROM_JSON(Saved, saved_);
        DARABONBA_PTR_FROM_JSON(SessionConfig, sessionConfig_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(SessionStatus, sessionStatus_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
        virtual bool empty() const override { return this->customAgentId_ == nullptr
        && this->customAgentStage_ == nullptr && this->enableSearch_ == nullptr && this->encryptKey_ == nullptr && this->encryptType_ == nullptr && this->kbUuidList_ == nullptr
        && this->language_ == nullptr && this->mcpServerIds_ == nullptr && this->mode_ == nullptr && this->reportPageWidth_ == nullptr && this->reportWaterMark_ == nullptr
        && this->userOssBucket_ == nullptr; };
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
        // The ID of the custom agent.
        shared_ptr<string> customAgentId_ {};
        // The usage stage of the custom agent. Valid values:
        // - **debug**: Debug stage.
        // - **prod**: Production stage.
        shared_ptr<string> customAgentStage_ {};
        // Specifies whether to enable web search.
        shared_ptr<bool> enableSearch_ {};
        // The encryption key for storing artifacts in OSS, including built-in and user OSS. This key is typically specified in CreateDataAgentSession.
        shared_ptr<string> encryptKey_ {};
        // The encryption type for storing artifacts in OSS, including built-in and user OSS.
        shared_ptr<string> encryptType_ {};
        // The list of knowledge base IDs for the current session.
        shared_ptr<vector<string>> kbUuidList_ {};
        // The language. Valid values:
        // - **CHINESE**: Chinese.
        // - **ENGLISH**: English.
        shared_ptr<string> language_ {};
        // The list of MCP server IDs in the session configuration.
        shared_ptr<vector<string>> mcpServerIds_ {};
        // The mode. Valid values:
        // - **ASK_DATA**: Data query mode.
        // - **ANALYSIS**: Analysis mode.
        // - **INSIGHT**: Insight mode.
        shared_ptr<string> mode_ {};
        // The report page width.
        shared_ptr<int64_t> reportPageWidth_ {};
        // The report watermark.
        shared_ptr<string> reportWaterMark_ {};
        // The name of the user OSS bucket.
        // - Analysis process files and report artifacts can be uploaded to the user-specified OSS bucket.
        shared_ptr<string> userOssBucket_ {};
      };

      class RecallResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecallResults& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, RecallResults& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        RecallResults() = default ;
        RecallResults(const RecallResults &) = default ;
        RecallResults(RecallResults &&) = default ;
        RecallResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecallResults() = default ;
        RecallResults& operator=(const RecallResults &) = default ;
        RecallResults& operator=(RecallResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->score_ == nullptr && this->type_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline RecallResults& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
        inline RecallResults& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline RecallResults& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The content of the recalled knowledge chunk.
        shared_ptr<string> content_ {};
        // The similarity score of this data entry. The scoring algorithm is related to the algorithm specified when the index is created, such as l2, ip, or cosine.
        shared_ptr<double> score_ {};
        // The category of the recalled knowledge.
        shared_ptr<string> type_ {};
      };

      class PreviewCustomAgent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PreviewCustomAgent& obj) { 
          DARABONBA_PTR_TO_JSON(AliyunParentUid, aliyunParentUid_);
          DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
          DARABONBA_PTR_TO_JSON(CallbackConfig, callbackConfig_);
          DARABONBA_PTR_TO_JSON(CreatorUserName, creatorUserName_);
          DARABONBA_PTR_TO_JSON(CustomAgentId, customAgentId_);
          DARABONBA_PTR_TO_JSON(DMSUnit, DMSUnit_);
          DARABONBA_PTR_TO_JSON(DataJson, dataJson_);
          DARABONBA_PTR_TO_JSON(DefaultAgent, defaultAgent_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DmsUnit, dmsUnit_);
          DARABONBA_PTR_TO_JSON(ExecutionConfig, executionConfig_);
          DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Instruction, instruction_);
          DARABONBA_PTR_TO_JSON(IsScheduleTask, isScheduleTask_);
          DARABONBA_PTR_TO_JSON(Knowledge, knowledge_);
          DARABONBA_PTR_TO_JSON(KnowledgeConfigList, knowledgeConfigList_);
          DARABONBA_PTR_TO_JSON(KnowledgeSemanticConfigList, knowledgeSemanticConfigList_);
          DARABONBA_PTR_TO_JSON(Modifier, modifier_);
          DARABONBA_PTR_TO_JSON(ModifierUserName, modifierUserName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NextRuntime, nextRuntime_);
          DARABONBA_PTR_TO_JSON(OfflineTime, offlineTime_);
          DARABONBA_PTR_TO_JSON(RecommendQuestionList, recommendQuestionList_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(RelatedSessionId, relatedSessionId_);
          DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
          DARABONBA_PTR_TO_JSON(ScheduleTaskConfig, scheduleTaskConfig_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TextReportConfig, textReportConfig_);
          DARABONBA_PTR_TO_JSON(UserSpecifiedSkillList, userSpecifiedSkillList_);
          DARABONBA_PTR_TO_JSON(WebReportConfig, webReportConfig_);
          DARABONBA_PTR_TO_JSON(WebReportTheme, webReportTheme_);
          DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
        };
        friend void from_json(const Darabonba::Json& j, PreviewCustomAgent& obj) { 
          DARABONBA_PTR_FROM_JSON(AliyunParentUid, aliyunParentUid_);
          DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
          DARABONBA_PTR_FROM_JSON(CallbackConfig, callbackConfig_);
          DARABONBA_PTR_FROM_JSON(CreatorUserName, creatorUserName_);
          DARABONBA_PTR_FROM_JSON(CustomAgentId, customAgentId_);
          DARABONBA_PTR_FROM_JSON(DMSUnit, DMSUnit_);
          DARABONBA_PTR_FROM_JSON(DataJson, dataJson_);
          DARABONBA_PTR_FROM_JSON(DefaultAgent, defaultAgent_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DmsUnit, dmsUnit_);
          DARABONBA_PTR_FROM_JSON(ExecutionConfig, executionConfig_);
          DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Instruction, instruction_);
          DARABONBA_PTR_FROM_JSON(IsScheduleTask, isScheduleTask_);
          DARABONBA_PTR_FROM_JSON(Knowledge, knowledge_);
          DARABONBA_PTR_FROM_JSON(KnowledgeConfigList, knowledgeConfigList_);
          DARABONBA_PTR_FROM_JSON(KnowledgeSemanticConfigList, knowledgeSemanticConfigList_);
          DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
          DARABONBA_PTR_FROM_JSON(ModifierUserName, modifierUserName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NextRuntime, nextRuntime_);
          DARABONBA_PTR_FROM_JSON(OfflineTime, offlineTime_);
          DARABONBA_PTR_FROM_JSON(RecommendQuestionList, recommendQuestionList_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(RelatedSessionId, relatedSessionId_);
          DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
          DARABONBA_PTR_FROM_JSON(ScheduleTaskConfig, scheduleTaskConfig_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TextReportConfig, textReportConfig_);
          DARABONBA_PTR_FROM_JSON(UserSpecifiedSkillList, userSpecifiedSkillList_);
          DARABONBA_PTR_FROM_JSON(WebReportConfig, webReportConfig_);
          DARABONBA_PTR_FROM_JSON(WebReportTheme, webReportTheme_);
          DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
        };
        PreviewCustomAgent() = default ;
        PreviewCustomAgent(const PreviewCustomAgent &) = default ;
        PreviewCustomAgent(PreviewCustomAgent &&) = default ;
        PreviewCustomAgent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PreviewCustomAgent() = default ;
        PreviewCustomAgent& operator=(const PreviewCustomAgent &) = default ;
        PreviewCustomAgent& operator=(PreviewCustomAgent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ScheduleTaskConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ScheduleTaskConfig& obj) { 
            DARABONBA_PTR_TO_JSON(CronExpression, cronExpression_);
            DARABONBA_PTR_TO_JSON(Query, query_);
            DARABONBA_PTR_TO_JSON(RelatedSessionId, relatedSessionId_);
          };
          friend void from_json(const Darabonba::Json& j, ScheduleTaskConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(CronExpression, cronExpression_);
            DARABONBA_PTR_FROM_JSON(Query, query_);
            DARABONBA_PTR_FROM_JSON(RelatedSessionId, relatedSessionId_);
          };
          ScheduleTaskConfig() = default ;
          ScheduleTaskConfig(const ScheduleTaskConfig &) = default ;
          ScheduleTaskConfig(ScheduleTaskConfig &&) = default ;
          ScheduleTaskConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ScheduleTaskConfig() = default ;
          ScheduleTaskConfig& operator=(const ScheduleTaskConfig &) = default ;
          ScheduleTaskConfig& operator=(ScheduleTaskConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cronExpression_ == nullptr
        && this->query_ == nullptr && this->relatedSessionId_ == nullptr; };
          // cronExpression Field Functions 
          bool hasCronExpression() const { return this->cronExpression_ != nullptr;};
          void deleteCronExpression() { this->cronExpression_ = nullptr;};
          inline string getCronExpression() const { DARABONBA_PTR_GET_DEFAULT(cronExpression_, "") };
          inline ScheduleTaskConfig& setCronExpression(string cronExpression) { DARABONBA_PTR_SET_VALUE(cronExpression_, cronExpression) };


          // query Field Functions 
          bool hasQuery() const { return this->query_ != nullptr;};
          void deleteQuery() { this->query_ = nullptr;};
          inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
          inline ScheduleTaskConfig& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


          // relatedSessionId Field Functions 
          bool hasRelatedSessionId() const { return this->relatedSessionId_ != nullptr;};
          void deleteRelatedSessionId() { this->relatedSessionId_ = nullptr;};
          inline string getRelatedSessionId() const { DARABONBA_PTR_GET_DEFAULT(relatedSessionId_, "") };
          inline ScheduleTaskConfig& setRelatedSessionId(string relatedSessionId) { DARABONBA_PTR_SET_VALUE(relatedSessionId_, relatedSessionId) };


        protected:
          // The cron expression for scheduled runs.
          shared_ptr<string> cronExpression_ {};
          // The question for scheduled runs.
          shared_ptr<string> query_ {};
          // The ID of the referenced session.
          shared_ptr<string> relatedSessionId_ {};
        };

        class KnowledgeSemanticConfigList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const KnowledgeSemanticConfigList& obj) { 
            DARABONBA_PTR_TO_JSON(DbId, dbId_);
            DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_TO_JSON(KnowledgeUuid, knowledgeUuid_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, KnowledgeSemanticConfigList& obj) { 
            DARABONBA_PTR_FROM_JSON(DbId, dbId_);
            DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
            DARABONBA_PTR_FROM_JSON(KnowledgeUuid, knowledgeUuid_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          KnowledgeSemanticConfigList() = default ;
          KnowledgeSemanticConfigList(const KnowledgeSemanticConfigList &) = default ;
          KnowledgeSemanticConfigList(KnowledgeSemanticConfigList &&) = default ;
          KnowledgeSemanticConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~KnowledgeSemanticConfigList() = default ;
          KnowledgeSemanticConfigList& operator=(const KnowledgeSemanticConfigList &) = default ;
          KnowledgeSemanticConfigList& operator=(KnowledgeSemanticConfigList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dbId_ == nullptr
        && this->instanceId_ == nullptr && this->knowledgeUuid_ == nullptr && this->type_ == nullptr; };
          // dbId Field Functions 
          bool hasDbId() const { return this->dbId_ != nullptr;};
          void deleteDbId() { this->dbId_ = nullptr;};
          inline string getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, "") };
          inline KnowledgeSemanticConfigList& setDbId(string dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline KnowledgeSemanticConfigList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // knowledgeUuid Field Functions 
          bool hasKnowledgeUuid() const { return this->knowledgeUuid_ != nullptr;};
          void deleteKnowledgeUuid() { this->knowledgeUuid_ = nullptr;};
          inline string getKnowledgeUuid() const { DARABONBA_PTR_GET_DEFAULT(knowledgeUuid_, "") };
          inline KnowledgeSemanticConfigList& setKnowledgeUuid(string knowledgeUuid) { DARABONBA_PTR_SET_VALUE(knowledgeUuid_, knowledgeUuid) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline KnowledgeSemanticConfigList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The DMS database ID.
          shared_ptr<string> dbId_ {};
          // The DMS instance ID.
          shared_ptr<string> instanceId_ {};
          // The knowledge UUID.
          shared_ptr<string> knowledgeUuid_ {};
          // The knowledge semantic type. Valid values:
          // - sql_template: SQL template
          // - ossie_model: Ossie semantic view
          shared_ptr<string> type_ {};
        };

        class KnowledgeConfigList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const KnowledgeConfigList& obj) { 
            DARABONBA_PTR_TO_JSON(AccessType, accessType_);
            DARABONBA_PTR_TO_JSON(KbUuid, kbUuid_);
            DARABONBA_PTR_TO_JSON(McpServerId, mcpServerId_);
          };
          friend void from_json(const Darabonba::Json& j, KnowledgeConfigList& obj) { 
            DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
            DARABONBA_PTR_FROM_JSON(KbUuid, kbUuid_);
            DARABONBA_PTR_FROM_JSON(McpServerId, mcpServerId_);
          };
          KnowledgeConfigList() = default ;
          KnowledgeConfigList(const KnowledgeConfigList &) = default ;
          KnowledgeConfigList(KnowledgeConfigList &&) = default ;
          KnowledgeConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~KnowledgeConfigList() = default ;
          KnowledgeConfigList& operator=(const KnowledgeConfigList &) = default ;
          KnowledgeConfigList& operator=(KnowledgeConfigList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->accessType_ == nullptr
        && this->kbUuid_ == nullptr && this->mcpServerId_ == nullptr; };
          // accessType Field Functions 
          bool hasAccessType() const { return this->accessType_ != nullptr;};
          void deleteAccessType() { this->accessType_ = nullptr;};
          inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
          inline KnowledgeConfigList& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


          // kbUuid Field Functions 
          bool hasKbUuid() const { return this->kbUuid_ != nullptr;};
          void deleteKbUuid() { this->kbUuid_ = nullptr;};
          inline string getKbUuid() const { DARABONBA_PTR_GET_DEFAULT(kbUuid_, "") };
          inline KnowledgeConfigList& setKbUuid(string kbUuid) { DARABONBA_PTR_SET_VALUE(kbUuid_, kbUuid) };


          // mcpServerId Field Functions 
          bool hasMcpServerId() const { return this->mcpServerId_ != nullptr;};
          void deleteMcpServerId() { this->mcpServerId_ = nullptr;};
          inline string getMcpServerId() const { DARABONBA_PTR_GET_DEFAULT(mcpServerId_, "") };
          inline KnowledgeConfigList& setMcpServerId(string mcpServerId) { DARABONBA_PTR_SET_VALUE(mcpServerId_, mcpServerId) };


        protected:
          // The access type. If this parameter is not specified, the default value is mcp. Valid values:
          // - mcp: MCP access. You must specify the McpServerId parameter.
          // - dms_kb: DMS knowledge base access. You must specify the KbUuid parameter.
          shared_ptr<string> accessType_ {};
          // The knowledge base ID.
          shared_ptr<string> kbUuid_ {};
          // The MCP server ID.
          shared_ptr<string> mcpServerId_ {};
        };

        class ExecutionConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ExecutionConfig& obj) { 
            DARABONBA_PTR_TO_JSON(ClarificationTendency, clarificationTendency_);
            DARABONBA_PTR_TO_JSON(ForbiddenAppendDataSource, forbiddenAppendDataSource_);
            DARABONBA_PTR_TO_JSON(SkipAskHuman, skipAskHuman_);
            DARABONBA_PTR_TO_JSON(SkipPlan, skipPlan_);
            DARABONBA_PTR_TO_JSON(SkipSqlConfirm, skipSqlConfirm_);
            DARABONBA_PTR_TO_JSON(SkipWebReportConfirm, skipWebReportConfirm_);
          };
          friend void from_json(const Darabonba::Json& j, ExecutionConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(ClarificationTendency, clarificationTendency_);
            DARABONBA_PTR_FROM_JSON(ForbiddenAppendDataSource, forbiddenAppendDataSource_);
            DARABONBA_PTR_FROM_JSON(SkipAskHuman, skipAskHuman_);
            DARABONBA_PTR_FROM_JSON(SkipPlan, skipPlan_);
            DARABONBA_PTR_FROM_JSON(SkipSqlConfirm, skipSqlConfirm_);
            DARABONBA_PTR_FROM_JSON(SkipWebReportConfirm, skipWebReportConfirm_);
          };
          ExecutionConfig() = default ;
          ExecutionConfig(const ExecutionConfig &) = default ;
          ExecutionConfig(ExecutionConfig &&) = default ;
          ExecutionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ExecutionConfig() = default ;
          ExecutionConfig& operator=(const ExecutionConfig &) = default ;
          ExecutionConfig& operator=(ExecutionConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->clarificationTendency_ == nullptr
        && this->forbiddenAppendDataSource_ == nullptr && this->skipAskHuman_ == nullptr && this->skipPlan_ == nullptr && this->skipSqlConfirm_ == nullptr && this->skipWebReportConfirm_ == nullptr; };
          // clarificationTendency Field Functions 
          bool hasClarificationTendency() const { return this->clarificationTendency_ != nullptr;};
          void deleteClarificationTendency() { this->clarificationTendency_ = nullptr;};
          inline double getClarificationTendency() const { DARABONBA_PTR_GET_DEFAULT(clarificationTendency_, 0.0) };
          inline ExecutionConfig& setClarificationTendency(double clarificationTendency) { DARABONBA_PTR_SET_VALUE(clarificationTendency_, clarificationTendency) };


          // forbiddenAppendDataSource Field Functions 
          bool hasForbiddenAppendDataSource() const { return this->forbiddenAppendDataSource_ != nullptr;};
          void deleteForbiddenAppendDataSource() { this->forbiddenAppendDataSource_ = nullptr;};
          inline bool getForbiddenAppendDataSource() const { DARABONBA_PTR_GET_DEFAULT(forbiddenAppendDataSource_, false) };
          inline ExecutionConfig& setForbiddenAppendDataSource(bool forbiddenAppendDataSource) { DARABONBA_PTR_SET_VALUE(forbiddenAppendDataSource_, forbiddenAppendDataSource) };


          // skipAskHuman Field Functions 
          bool hasSkipAskHuman() const { return this->skipAskHuman_ != nullptr;};
          void deleteSkipAskHuman() { this->skipAskHuman_ = nullptr;};
          inline bool getSkipAskHuman() const { DARABONBA_PTR_GET_DEFAULT(skipAskHuman_, false) };
          inline ExecutionConfig& setSkipAskHuman(bool skipAskHuman) { DARABONBA_PTR_SET_VALUE(skipAskHuman_, skipAskHuman) };


          // skipPlan Field Functions 
          bool hasSkipPlan() const { return this->skipPlan_ != nullptr;};
          void deleteSkipPlan() { this->skipPlan_ = nullptr;};
          inline bool getSkipPlan() const { DARABONBA_PTR_GET_DEFAULT(skipPlan_, false) };
          inline ExecutionConfig& setSkipPlan(bool skipPlan) { DARABONBA_PTR_SET_VALUE(skipPlan_, skipPlan) };


          // skipSqlConfirm Field Functions 
          bool hasSkipSqlConfirm() const { return this->skipSqlConfirm_ != nullptr;};
          void deleteSkipSqlConfirm() { this->skipSqlConfirm_ = nullptr;};
          inline bool getSkipSqlConfirm() const { DARABONBA_PTR_GET_DEFAULT(skipSqlConfirm_, false) };
          inline ExecutionConfig& setSkipSqlConfirm(bool skipSqlConfirm) { DARABONBA_PTR_SET_VALUE(skipSqlConfirm_, skipSqlConfirm) };


          // skipWebReportConfirm Field Functions 
          bool hasSkipWebReportConfirm() const { return this->skipWebReportConfirm_ != nullptr;};
          void deleteSkipWebReportConfirm() { this->skipWebReportConfirm_ = nullptr;};
          inline bool getSkipWebReportConfirm() const { DARABONBA_PTR_GET_DEFAULT(skipWebReportConfirm_, false) };
          inline ExecutionConfig& setSkipWebReportConfirm(bool skipWebReportConfirm) { DARABONBA_PTR_SET_VALUE(skipWebReportConfirm_, skipWebReportConfirm) };


        protected:
          // The tendency of the agent to ask follow-up questions to clarify requirements. **This parameter takes effect only when SkipAskHuman is set to false and SkipPlan is set to false.** Valid values: 0 to 1.
          // 
          // The following list describes some tendency values:
          // - 0.0: Do not ask questions. The agent does not ask the user any questions, skips confirmation after generating a plan, and directly executes the plan.
          // - 0.1: Confirm the plan only. The agent confirms the generated plan only once and does not ask additional questions about requirements or details.
          // - 0.4: Ask questions when the task is blocked. The agent handles the task autonomously by default and asks questions only when the task cannot proceed or be completed.
          // - 0.7: Ask questions when key criteria are uncertain. The agent proactively asks questions when there is critical ambiguity in the goals, scope, business criteria, or acceptance criteria.
          // - 1.0: Fully align throughout the process. The agent proactively clarifies requirements during planning and execution, and continuously confirms when encountering important ambiguities, assumptions, or solution branches.
          shared_ptr<double> clarificationTendency_ {};
          // Indicates whether appending data sources in the session is prohibited.
          shared_ptr<bool> forbiddenAppendDataSource_ {};
          // Indicates whether user inquiries during the process are prohibited.
          shared_ptr<bool> skipAskHuman_ {};
          // Indicates whether the plan confirmation step is skipped.
          shared_ptr<bool> skipPlan_ {};
          // Indicates whether all SQL confirmations are skipped.
          shared_ptr<bool> skipSqlConfirm_ {};
          // Indicates whether the confirmation for generating a web report is skipped.
          shared_ptr<bool> skipWebReportConfirm_ {};
        };

        class CallbackConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CallbackConfig& obj) { 
            DARABONBA_PTR_TO_JSON(CallbackArgs, callbackArgs_);
            DARABONBA_PTR_TO_JSON(CallbackPrompt, callbackPrompt_);
            DARABONBA_PTR_TO_JSON(CallbackTime, callbackTime_);
            DARABONBA_PTR_TO_JSON(ToolId, toolId_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, CallbackConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(CallbackArgs, callbackArgs_);
            DARABONBA_PTR_FROM_JSON(CallbackPrompt, callbackPrompt_);
            DARABONBA_PTR_FROM_JSON(CallbackTime, callbackTime_);
            DARABONBA_PTR_FROM_JSON(ToolId, toolId_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          CallbackConfig() = default ;
          CallbackConfig(const CallbackConfig &) = default ;
          CallbackConfig(CallbackConfig &&) = default ;
          CallbackConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CallbackConfig() = default ;
          CallbackConfig& operator=(const CallbackConfig &) = default ;
          CallbackConfig& operator=(CallbackConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->callbackArgs_ == nullptr
        && this->callbackPrompt_ == nullptr && this->callbackTime_ == nullptr && this->toolId_ == nullptr && this->type_ == nullptr; };
          // callbackArgs Field Functions 
          bool hasCallbackArgs() const { return this->callbackArgs_ != nullptr;};
          void deleteCallbackArgs() { this->callbackArgs_ = nullptr;};
          inline string getCallbackArgs() const { DARABONBA_PTR_GET_DEFAULT(callbackArgs_, "") };
          inline CallbackConfig& setCallbackArgs(string callbackArgs) { DARABONBA_PTR_SET_VALUE(callbackArgs_, callbackArgs) };


          // callbackPrompt Field Functions 
          bool hasCallbackPrompt() const { return this->callbackPrompt_ != nullptr;};
          void deleteCallbackPrompt() { this->callbackPrompt_ = nullptr;};
          inline string getCallbackPrompt() const { DARABONBA_PTR_GET_DEFAULT(callbackPrompt_, "") };
          inline CallbackConfig& setCallbackPrompt(string callbackPrompt) { DARABONBA_PTR_SET_VALUE(callbackPrompt_, callbackPrompt) };


          // callbackTime Field Functions 
          bool hasCallbackTime() const { return this->callbackTime_ != nullptr;};
          void deleteCallbackTime() { this->callbackTime_ = nullptr;};
          inline int32_t getCallbackTime() const { DARABONBA_PTR_GET_DEFAULT(callbackTime_, 0) };
          inline CallbackConfig& setCallbackTime(int32_t callbackTime) { DARABONBA_PTR_SET_VALUE(callbackTime_, callbackTime) };


          // toolId Field Functions 
          bool hasToolId() const { return this->toolId_ != nullptr;};
          void deleteToolId() { this->toolId_ = nullptr;};
          inline string getToolId() const { DARABONBA_PTR_GET_DEFAULT(toolId_, "") };
          inline CallbackConfig& setToolId(string toolId) { DARABONBA_PTR_SET_VALUE(toolId_, toolId) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline CallbackConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The callback tool invocation parameters.
          shared_ptr<string> callbackArgs_ {};
          // The prompt used to generate callback tool invocation parameters.
          shared_ptr<string> callbackPrompt_ {};
          // The timing for callback tool invocation.
          shared_ptr<int32_t> callbackTime_ {};
          // The callback tool identifier.
          shared_ptr<string> toolId_ {};
          // The callback tool type.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->aliyunParentUid_ == nullptr
        && this->aliyunUid_ == nullptr && this->callbackConfig_ == nullptr && this->creatorUserName_ == nullptr && this->customAgentId_ == nullptr && this->DMSUnit_ == nullptr
        && this->dataJson_ == nullptr && this->defaultAgent_ == nullptr && this->description_ == nullptr && this->dmsUnit_ == nullptr && this->executionConfig_ == nullptr
        && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr && this->instruction_ == nullptr && this->isScheduleTask_ == nullptr && this->knowledge_ == nullptr
        && this->knowledgeConfigList_ == nullptr && this->knowledgeSemanticConfigList_ == nullptr && this->modifier_ == nullptr && this->modifierUserName_ == nullptr && this->name_ == nullptr
        && this->nextRuntime_ == nullptr && this->offlineTime_ == nullptr && this->recommendQuestionList_ == nullptr && this->region_ == nullptr && this->relatedSessionId_ == nullptr
        && this->releaseTime_ == nullptr && this->scheduleTaskConfig_ == nullptr && this->status_ == nullptr && this->textReportConfig_ == nullptr && this->userSpecifiedSkillList_ == nullptr
        && this->webReportConfig_ == nullptr && this->webReportTheme_ == nullptr && this->workspaceId_ == nullptr; };
        // aliyunParentUid Field Functions 
        bool hasAliyunParentUid() const { return this->aliyunParentUid_ != nullptr;};
        void deleteAliyunParentUid() { this->aliyunParentUid_ = nullptr;};
        inline string getAliyunParentUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunParentUid_, "") };
        inline PreviewCustomAgent& setAliyunParentUid(string aliyunParentUid) { DARABONBA_PTR_SET_VALUE(aliyunParentUid_, aliyunParentUid) };


        // aliyunUid Field Functions 
        bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
        void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
        inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
        inline PreviewCustomAgent& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


        // callbackConfig Field Functions 
        bool hasCallbackConfig() const { return this->callbackConfig_ != nullptr;};
        void deleteCallbackConfig() { this->callbackConfig_ = nullptr;};
        inline const PreviewCustomAgent::CallbackConfig & getCallbackConfig() const { DARABONBA_PTR_GET_CONST(callbackConfig_, PreviewCustomAgent::CallbackConfig) };
        inline PreviewCustomAgent::CallbackConfig getCallbackConfig() { DARABONBA_PTR_GET(callbackConfig_, PreviewCustomAgent::CallbackConfig) };
        inline PreviewCustomAgent& setCallbackConfig(const PreviewCustomAgent::CallbackConfig & callbackConfig) { DARABONBA_PTR_SET_VALUE(callbackConfig_, callbackConfig) };
        inline PreviewCustomAgent& setCallbackConfig(PreviewCustomAgent::CallbackConfig && callbackConfig) { DARABONBA_PTR_SET_RVALUE(callbackConfig_, callbackConfig) };


        // creatorUserName Field Functions 
        bool hasCreatorUserName() const { return this->creatorUserName_ != nullptr;};
        void deleteCreatorUserName() { this->creatorUserName_ = nullptr;};
        inline string getCreatorUserName() const { DARABONBA_PTR_GET_DEFAULT(creatorUserName_, "") };
        inline PreviewCustomAgent& setCreatorUserName(string creatorUserName) { DARABONBA_PTR_SET_VALUE(creatorUserName_, creatorUserName) };


        // customAgentId Field Functions 
        bool hasCustomAgentId() const { return this->customAgentId_ != nullptr;};
        void deleteCustomAgentId() { this->customAgentId_ = nullptr;};
        inline string getCustomAgentId() const { DARABONBA_PTR_GET_DEFAULT(customAgentId_, "") };
        inline PreviewCustomAgent& setCustomAgentId(string customAgentId) { DARABONBA_PTR_SET_VALUE(customAgentId_, customAgentId) };


        // DMSUnit Field Functions 
        bool hasDMSUnit() const { return this->DMSUnit_ != nullptr;};
        void deleteDMSUnit() { this->DMSUnit_ = nullptr;};
        inline string getDMSUnit() const { DARABONBA_PTR_GET_DEFAULT(DMSUnit_, "") };
        inline PreviewCustomAgent& setDMSUnit(string DMSUnit) { DARABONBA_PTR_SET_VALUE(DMSUnit_, DMSUnit) };


        // dataJson Field Functions 
        bool hasDataJson() const { return this->dataJson_ != nullptr;};
        void deleteDataJson() { this->dataJson_ = nullptr;};
        inline string getDataJson() const { DARABONBA_PTR_GET_DEFAULT(dataJson_, "") };
        inline PreviewCustomAgent& setDataJson(string dataJson) { DARABONBA_PTR_SET_VALUE(dataJson_, dataJson) };


        // defaultAgent Field Functions 
        bool hasDefaultAgent() const { return this->defaultAgent_ != nullptr;};
        void deleteDefaultAgent() { this->defaultAgent_ = nullptr;};
        inline int32_t getDefaultAgent() const { DARABONBA_PTR_GET_DEFAULT(defaultAgent_, 0) };
        inline PreviewCustomAgent& setDefaultAgent(int32_t defaultAgent) { DARABONBA_PTR_SET_VALUE(defaultAgent_, defaultAgent) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline PreviewCustomAgent& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // dmsUnit Field Functions 
        bool hasDmsUnit() const { return this->dmsUnit_ != nullptr;};
        void deleteDmsUnit() { this->dmsUnit_ = nullptr;};
        inline string getDmsUnit() const { DARABONBA_PTR_GET_DEFAULT(dmsUnit_, "") };
        inline PreviewCustomAgent& setDmsUnit(string dmsUnit) { DARABONBA_PTR_SET_VALUE(dmsUnit_, dmsUnit) };


        // executionConfig Field Functions 
        bool hasExecutionConfig() const { return this->executionConfig_ != nullptr;};
        void deleteExecutionConfig() { this->executionConfig_ = nullptr;};
        inline const PreviewCustomAgent::ExecutionConfig & getExecutionConfig() const { DARABONBA_PTR_GET_CONST(executionConfig_, PreviewCustomAgent::ExecutionConfig) };
        inline PreviewCustomAgent::ExecutionConfig getExecutionConfig() { DARABONBA_PTR_GET(executionConfig_, PreviewCustomAgent::ExecutionConfig) };
        inline PreviewCustomAgent& setExecutionConfig(const PreviewCustomAgent::ExecutionConfig & executionConfig) { DARABONBA_PTR_SET_VALUE(executionConfig_, executionConfig) };
        inline PreviewCustomAgent& setExecutionConfig(PreviewCustomAgent::ExecutionConfig && executionConfig) { DARABONBA_PTR_SET_RVALUE(executionConfig_, executionConfig) };


        // gmtCreated Field Functions 
        bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
        void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
        inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
        inline PreviewCustomAgent& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline PreviewCustomAgent& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // instruction Field Functions 
        bool hasInstruction() const { return this->instruction_ != nullptr;};
        void deleteInstruction() { this->instruction_ = nullptr;};
        inline string getInstruction() const { DARABONBA_PTR_GET_DEFAULT(instruction_, "") };
        inline PreviewCustomAgent& setInstruction(string instruction) { DARABONBA_PTR_SET_VALUE(instruction_, instruction) };


        // isScheduleTask Field Functions 
        bool hasIsScheduleTask() const { return this->isScheduleTask_ != nullptr;};
        void deleteIsScheduleTask() { this->isScheduleTask_ = nullptr;};
        inline bool getIsScheduleTask() const { DARABONBA_PTR_GET_DEFAULT(isScheduleTask_, false) };
        inline PreviewCustomAgent& setIsScheduleTask(bool isScheduleTask) { DARABONBA_PTR_SET_VALUE(isScheduleTask_, isScheduleTask) };


        // knowledge Field Functions 
        bool hasKnowledge() const { return this->knowledge_ != nullptr;};
        void deleteKnowledge() { this->knowledge_ = nullptr;};
        inline string getKnowledge() const { DARABONBA_PTR_GET_DEFAULT(knowledge_, "") };
        inline PreviewCustomAgent& setKnowledge(string knowledge) { DARABONBA_PTR_SET_VALUE(knowledge_, knowledge) };


        // knowledgeConfigList Field Functions 
        bool hasKnowledgeConfigList() const { return this->knowledgeConfigList_ != nullptr;};
        void deleteKnowledgeConfigList() { this->knowledgeConfigList_ = nullptr;};
        inline const vector<PreviewCustomAgent::KnowledgeConfigList> & getKnowledgeConfigList() const { DARABONBA_PTR_GET_CONST(knowledgeConfigList_, vector<PreviewCustomAgent::KnowledgeConfigList>) };
        inline vector<PreviewCustomAgent::KnowledgeConfigList> getKnowledgeConfigList() { DARABONBA_PTR_GET(knowledgeConfigList_, vector<PreviewCustomAgent::KnowledgeConfigList>) };
        inline PreviewCustomAgent& setKnowledgeConfigList(const vector<PreviewCustomAgent::KnowledgeConfigList> & knowledgeConfigList) { DARABONBA_PTR_SET_VALUE(knowledgeConfigList_, knowledgeConfigList) };
        inline PreviewCustomAgent& setKnowledgeConfigList(vector<PreviewCustomAgent::KnowledgeConfigList> && knowledgeConfigList) { DARABONBA_PTR_SET_RVALUE(knowledgeConfigList_, knowledgeConfigList) };


        // knowledgeSemanticConfigList Field Functions 
        bool hasKnowledgeSemanticConfigList() const { return this->knowledgeSemanticConfigList_ != nullptr;};
        void deleteKnowledgeSemanticConfigList() { this->knowledgeSemanticConfigList_ = nullptr;};
        inline const vector<PreviewCustomAgent::KnowledgeSemanticConfigList> & getKnowledgeSemanticConfigList() const { DARABONBA_PTR_GET_CONST(knowledgeSemanticConfigList_, vector<PreviewCustomAgent::KnowledgeSemanticConfigList>) };
        inline vector<PreviewCustomAgent::KnowledgeSemanticConfigList> getKnowledgeSemanticConfigList() { DARABONBA_PTR_GET(knowledgeSemanticConfigList_, vector<PreviewCustomAgent::KnowledgeSemanticConfigList>) };
        inline PreviewCustomAgent& setKnowledgeSemanticConfigList(const vector<PreviewCustomAgent::KnowledgeSemanticConfigList> & knowledgeSemanticConfigList) { DARABONBA_PTR_SET_VALUE(knowledgeSemanticConfigList_, knowledgeSemanticConfigList) };
        inline PreviewCustomAgent& setKnowledgeSemanticConfigList(vector<PreviewCustomAgent::KnowledgeSemanticConfigList> && knowledgeSemanticConfigList) { DARABONBA_PTR_SET_RVALUE(knowledgeSemanticConfigList_, knowledgeSemanticConfigList) };


        // modifier Field Functions 
        bool hasModifier() const { return this->modifier_ != nullptr;};
        void deleteModifier() { this->modifier_ = nullptr;};
        inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
        inline PreviewCustomAgent& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


        // modifierUserName Field Functions 
        bool hasModifierUserName() const { return this->modifierUserName_ != nullptr;};
        void deleteModifierUserName() { this->modifierUserName_ = nullptr;};
        inline string getModifierUserName() const { DARABONBA_PTR_GET_DEFAULT(modifierUserName_, "") };
        inline PreviewCustomAgent& setModifierUserName(string modifierUserName) { DARABONBA_PTR_SET_VALUE(modifierUserName_, modifierUserName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline PreviewCustomAgent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nextRuntime Field Functions 
        bool hasNextRuntime() const { return this->nextRuntime_ != nullptr;};
        void deleteNextRuntime() { this->nextRuntime_ = nullptr;};
        inline int64_t getNextRuntime() const { DARABONBA_PTR_GET_DEFAULT(nextRuntime_, 0L) };
        inline PreviewCustomAgent& setNextRuntime(int64_t nextRuntime) { DARABONBA_PTR_SET_VALUE(nextRuntime_, nextRuntime) };


        // offlineTime Field Functions 
        bool hasOfflineTime() const { return this->offlineTime_ != nullptr;};
        void deleteOfflineTime() { this->offlineTime_ = nullptr;};
        inline string getOfflineTime() const { DARABONBA_PTR_GET_DEFAULT(offlineTime_, "") };
        inline PreviewCustomAgent& setOfflineTime(string offlineTime) { DARABONBA_PTR_SET_VALUE(offlineTime_, offlineTime) };


        // recommendQuestionList Field Functions 
        bool hasRecommendQuestionList() const { return this->recommendQuestionList_ != nullptr;};
        void deleteRecommendQuestionList() { this->recommendQuestionList_ = nullptr;};
        inline const vector<string> & getRecommendQuestionList() const { DARABONBA_PTR_GET_CONST(recommendQuestionList_, vector<string>) };
        inline vector<string> getRecommendQuestionList() { DARABONBA_PTR_GET(recommendQuestionList_, vector<string>) };
        inline PreviewCustomAgent& setRecommendQuestionList(const vector<string> & recommendQuestionList) { DARABONBA_PTR_SET_VALUE(recommendQuestionList_, recommendQuestionList) };
        inline PreviewCustomAgent& setRecommendQuestionList(vector<string> && recommendQuestionList) { DARABONBA_PTR_SET_RVALUE(recommendQuestionList_, recommendQuestionList) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline PreviewCustomAgent& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // relatedSessionId Field Functions 
        bool hasRelatedSessionId() const { return this->relatedSessionId_ != nullptr;};
        void deleteRelatedSessionId() { this->relatedSessionId_ = nullptr;};
        inline string getRelatedSessionId() const { DARABONBA_PTR_GET_DEFAULT(relatedSessionId_, "") };
        inline PreviewCustomAgent& setRelatedSessionId(string relatedSessionId) { DARABONBA_PTR_SET_VALUE(relatedSessionId_, relatedSessionId) };


        // releaseTime Field Functions 
        bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
        void deleteReleaseTime() { this->releaseTime_ = nullptr;};
        inline string getReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, "") };
        inline PreviewCustomAgent& setReleaseTime(string releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


        // scheduleTaskConfig Field Functions 
        bool hasScheduleTaskConfig() const { return this->scheduleTaskConfig_ != nullptr;};
        void deleteScheduleTaskConfig() { this->scheduleTaskConfig_ = nullptr;};
        inline const PreviewCustomAgent::ScheduleTaskConfig & getScheduleTaskConfig() const { DARABONBA_PTR_GET_CONST(scheduleTaskConfig_, PreviewCustomAgent::ScheduleTaskConfig) };
        inline PreviewCustomAgent::ScheduleTaskConfig getScheduleTaskConfig() { DARABONBA_PTR_GET(scheduleTaskConfig_, PreviewCustomAgent::ScheduleTaskConfig) };
        inline PreviewCustomAgent& setScheduleTaskConfig(const PreviewCustomAgent::ScheduleTaskConfig & scheduleTaskConfig) { DARABONBA_PTR_SET_VALUE(scheduleTaskConfig_, scheduleTaskConfig) };
        inline PreviewCustomAgent& setScheduleTaskConfig(PreviewCustomAgent::ScheduleTaskConfig && scheduleTaskConfig) { DARABONBA_PTR_SET_RVALUE(scheduleTaskConfig_, scheduleTaskConfig) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PreviewCustomAgent& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // textReportConfig Field Functions 
        bool hasTextReportConfig() const { return this->textReportConfig_ != nullptr;};
        void deleteTextReportConfig() { this->textReportConfig_ = nullptr;};
        inline string getTextReportConfig() const { DARABONBA_PTR_GET_DEFAULT(textReportConfig_, "") };
        inline PreviewCustomAgent& setTextReportConfig(string textReportConfig) { DARABONBA_PTR_SET_VALUE(textReportConfig_, textReportConfig) };


        // userSpecifiedSkillList Field Functions 
        bool hasUserSpecifiedSkillList() const { return this->userSpecifiedSkillList_ != nullptr;};
        void deleteUserSpecifiedSkillList() { this->userSpecifiedSkillList_ = nullptr;};
        inline const vector<string> & getUserSpecifiedSkillList() const { DARABONBA_PTR_GET_CONST(userSpecifiedSkillList_, vector<string>) };
        inline vector<string> getUserSpecifiedSkillList() { DARABONBA_PTR_GET(userSpecifiedSkillList_, vector<string>) };
        inline PreviewCustomAgent& setUserSpecifiedSkillList(const vector<string> & userSpecifiedSkillList) { DARABONBA_PTR_SET_VALUE(userSpecifiedSkillList_, userSpecifiedSkillList) };
        inline PreviewCustomAgent& setUserSpecifiedSkillList(vector<string> && userSpecifiedSkillList) { DARABONBA_PTR_SET_RVALUE(userSpecifiedSkillList_, userSpecifiedSkillList) };


        // webReportConfig Field Functions 
        bool hasWebReportConfig() const { return this->webReportConfig_ != nullptr;};
        void deleteWebReportConfig() { this->webReportConfig_ = nullptr;};
        inline string getWebReportConfig() const { DARABONBA_PTR_GET_DEFAULT(webReportConfig_, "") };
        inline PreviewCustomAgent& setWebReportConfig(string webReportConfig) { DARABONBA_PTR_SET_VALUE(webReportConfig_, webReportConfig) };


        // webReportTheme Field Functions 
        bool hasWebReportTheme() const { return this->webReportTheme_ != nullptr;};
        void deleteWebReportTheme() { this->webReportTheme_ = nullptr;};
        inline string getWebReportTheme() const { DARABONBA_PTR_GET_DEFAULT(webReportTheme_, "") };
        inline PreviewCustomAgent& setWebReportTheme(string webReportTheme) { DARABONBA_PTR_SET_VALUE(webReportTheme_, webReportTheme) };


        // workspaceId Field Functions 
        bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
        void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
        inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
        inline PreviewCustomAgent& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


      protected:
        // The Alibaba Cloud main account ID.
        shared_ptr<string> aliyunParentUid_ {};
        // The Alibaba Cloud account ID.
        shared_ptr<string> aliyunUid_ {};
        // The callback configuration.
        shared_ptr<PreviewCustomAgent::CallbackConfig> callbackConfig_ {};
        // The name of the creator.
        shared_ptr<string> creatorUserName_ {};
        // The custom agent ID.
        shared_ptr<string> customAgentId_ {};
        // The current DMS unit.
        shared_ptr<string> DMSUnit_ {};
        // The specified data scope in JSON string format.
        shared_ptr<string> dataJson_ {};
        // Indicates whether the agent is displayed by default.
        shared_ptr<int32_t> defaultAgent_ {};
        // The custom agent description.
        shared_ptr<string> description_ {};
        // The current DMS unit.
        shared_ptr<string> dmsUnit_ {};
        // The execution configuration.
        shared_ptr<PreviewCustomAgent::ExecutionConfig> executionConfig_ {};
        // The creation time.
        shared_ptr<string> gmtCreated_ {};
        // The modification time.
        shared_ptr<string> gmtModified_ {};
        // The instruction.
        shared_ptr<string> instruction_ {};
        // Indicates whether a periodic task is configured.
        shared_ptr<bool> isScheduleTask_ {};
        // The knowledge.
        shared_ptr<string> knowledge_ {};
        // The external knowledge bases.
        shared_ptr<vector<PreviewCustomAgent::KnowledgeConfigList>> knowledgeConfigList_ {};
        // The knowledge semantic configuration struct.
        shared_ptr<vector<PreviewCustomAgent::KnowledgeSemanticConfigList>> knowledgeSemanticConfigList_ {};
        // The modifier.
        shared_ptr<string> modifier_ {};
        // The name of the modifier.
        shared_ptr<string> modifierUserName_ {};
        // The name of the custom agent.
        shared_ptr<string> name_ {};
        // The next run time of the scheduled task.
        shared_ptr<int64_t> nextRuntime_ {};
        // The offline time.
        shared_ptr<string> offlineTime_ {};
        // The list of recommended questions.
        // - Up to 10 recommended questions can be configured.
        shared_ptr<vector<string>> recommendQuestionList_ {};
        // The region.
        shared_ptr<string> region_ {};
        // The ID of the referenced historical session.
        shared_ptr<string> relatedSessionId_ {};
        // The release time.
        shared_ptr<string> releaseTime_ {};
        // The scheduled task configuration.
        shared_ptr<PreviewCustomAgent::ScheduleTaskConfig> scheduleTaskConfig_ {};
        // The status of the custom agent.
        shared_ptr<string> status_ {};
        // The text report format.
        shared_ptr<string> textReportConfig_ {};
        // The list of user-specified skills.
        shared_ptr<vector<string>> userSpecifiedSkillList_ {};
        // The web report format.
        shared_ptr<string> webReportConfig_ {};
        // The web report theme. Valid values:
        // - default: default
        // - journal: journal
        // - legacy: legacy
        // - neobrutalism: stylized
        // - infographic: infographic
        shared_ptr<string> webReportTheme_ {};
        // The workspace ID.
        shared_ptr<string> workspaceId_ {};
      };

      class Messages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Messages& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(SendTime, sendTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Messages& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(SendTime, sendTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Messages() = default ;
        Messages(const Messages &) = default ;
        Messages(Messages &&) = default ;
        Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Messages() = default ;
        Messages& operator=(const Messages &) = default ;
        Messages& operator=(Messages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->id_ == nullptr && this->sendTime_ == nullptr && this->status_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline Messages& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Messages& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // sendTime Field Functions 
        bool hasSendTime() const { return this->sendTime_ != nullptr;};
        void deleteSendTime() { this->sendTime_ = nullptr;};
        inline int64_t getSendTime() const { DARABONBA_PTR_GET_DEFAULT(sendTime_, 0L) };
        inline Messages& setSendTime(int64_t sendTime) { DARABONBA_PTR_SET_VALUE(sendTime_, sendTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Messages& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The content of the historical conversation message.
        shared_ptr<string> content_ {};
        // The unique ID of the historical conversation message.
        shared_ptr<string> id_ {};
        // The send time of the historical conversation message.
        shared_ptr<int64_t> sendTime_ {};
        // The status of the historical conversation message.
        shared_ptr<string> status_ {};
      };

      class DataSources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataSources& obj) { 
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(Detail, detail_);
        };
        friend void from_json(const Darabonba::Json& j, DataSources& obj) { 
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(Detail, detail_);
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
        virtual bool empty() const override { return this->category_ == nullptr
        && this->detail_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline DataSources& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // detail Field Functions 
        bool hasDetail() const { return this->detail_ != nullptr;};
        void deleteDetail() { this->detail_ = nullptr;};
        inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
        inline DataSources& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


      protected:
        // The data source category. Valid values:
        // - **CHAT**: The data source is specified in a conversation by calling the CreateDataAgentSession or SendChatMessage operation.
        // - **CUSTOM_AGENT**: The data source comes from the preset analysis data scope in a custom agent.
        shared_ptr<string> category_ {};
        // The data source details. When Category is set to CHAT or CUSTOM_AGENT, the structure of Detail aligns with the structure of a single element in the DataSources parameter of the SendChatMessage operation.
        shared_ptr<string> detail_ {};
      };

      class ChatHistoryLocations : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChatHistoryLocations& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, ChatHistoryLocations& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        ChatHistoryLocations() = default ;
        ChatHistoryLocations(const ChatHistoryLocations &) = default ;
        ChatHistoryLocations(ChatHistoryLocations &&) = default ;
        ChatHistoryLocations(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChatHistoryLocations() = default ;
        ChatHistoryLocations& operator=(const ChatHistoryLocations &) = default ;
        ChatHistoryLocations& operator=(ChatHistoryLocations &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->url_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline ChatHistoryLocations& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline ChatHistoryLocations& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        // The key of the session playback history.
        shared_ptr<string> key_ {};
        // The OSS download URL of the session playback history.
        shared_ptr<string> url_ {};
      };

      class Capabilities : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Capabilities& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Capabilities& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Capabilities() = default ;
        Capabilities(const Capabilities &) = default ;
        Capabilities(Capabilities &&) = default ;
        Capabilities(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Capabilities() = default ;
        Capabilities& operator=(const Capabilities &) = default ;
        Capabilities& operator=(Capabilities &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->type_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Capabilities& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Capabilities& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The ID of the mounted capability.
        // - If Type is set to skill, the value indicates the skill ID.
        // - If Type is set to dms_kb, the value indicates the knowledge base ID.
        shared_ptr<string> id_ {};
        // The type. Valid values:
        // - skill: skill
        // - dms_kb: knowledge base
        shared_ptr<string> type_ {};
      };

      class Artifacts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Artifacts& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ReceiveTime, receiveTime_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Artifacts& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ReceiveTime, receiveTime_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Artifacts() = default ;
        Artifacts(const Artifacts &) = default ;
        Artifacts(Artifacts &&) = default ;
        Artifacts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Artifacts() = default ;
        Artifacts& operator=(const Artifacts &) = default ;
        Artifacts& operator=(Artifacts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->finishTime_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->receiveTime_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Artifacts& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
        inline Artifacts& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Artifacts& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Artifacts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // receiveTime Field Functions 
        bool hasReceiveTime() const { return this->receiveTime_ != nullptr;};
        void deleteReceiveTime() { this->receiveTime_ = nullptr;};
        inline string getReceiveTime() const { DARABONBA_PTR_GET_DEFAULT(receiveTime_, "") };
        inline Artifacts& setReceiveTime(string receiveTime) { DARABONBA_PTR_SET_VALUE(receiveTime_, receiveTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline Artifacts& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Artifacts& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Artifacts& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The brief description of the artifact. This field may be empty.
        shared_ptr<string> description_ {};
        // The time when the backend completed the artifact task. The value is a UNIX timestamp accurate to seconds.
        shared_ptr<string> finishTime_ {};
        // The globally unique artifact ID. If the report is generated by calling the SendChatMessage operation with MessageType set to REPORT, the artifact ID is the same as the MessageId value returned by the SendChatMessage operation.
        shared_ptr<string> id_ {};
        // The artifact name. This is usually a concatenated string generated by the project and aligns with the name field in the ListFileUpload operation. You can use this field to query the download URL of the artifact file.
        shared_ptr<string> name_ {};
        // The time when the backend received the artifact request. The value is a UNIX timestamp accurate to seconds.
        shared_ptr<string> receiveTime_ {};
        // The time when the backend actually started running the artifact task. The value is a UNIX timestamp accurate to seconds.
        shared_ptr<string> startTime_ {};
        // The artifact status. Valid values:
        // - PENDING: The backend has received the task but has not started it.
        // - RUNNING: The backend has started the task but has not completed it.
        // - SUCCESS: The task succeeded. You can query the file information by calling the ListFileUpload operation.
        // - FAILED: The task failed.
        shared_ptr<string> status_ {};
        // The artifact type. Valid values: TextReport and WebReport.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentStatus_ == nullptr && this->artifacts_ == nullptr && this->capabilities_ == nullptr && this->chatHistoryLocations_ == nullptr && this->createTime_ == nullptr
        && this->dataSources_ == nullptr && this->favoriteInWorkspace_ == nullptr && this->file_ == nullptr && this->messages_ == nullptr && this->previewCustomAgent_ == nullptr
        && this->recallResults_ == nullptr && this->saved_ == nullptr && this->sessionConfig_ == nullptr && this->sessionId_ == nullptr && this->sessionStatus_ == nullptr
        && this->title_ == nullptr && this->userId_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
      inline Data& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // agentStatus Field Functions 
      bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
      void deleteAgentStatus() { this->agentStatus_ = nullptr;};
      inline string getAgentStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStatus_, "") };
      inline Data& setAgentStatus(string agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };


      // artifacts Field Functions 
      bool hasArtifacts() const { return this->artifacts_ != nullptr;};
      void deleteArtifacts() { this->artifacts_ = nullptr;};
      inline const vector<Data::Artifacts> & getArtifacts() const { DARABONBA_PTR_GET_CONST(artifacts_, vector<Data::Artifacts>) };
      inline vector<Data::Artifacts> getArtifacts() { DARABONBA_PTR_GET(artifacts_, vector<Data::Artifacts>) };
      inline Data& setArtifacts(const vector<Data::Artifacts> & artifacts) { DARABONBA_PTR_SET_VALUE(artifacts_, artifacts) };
      inline Data& setArtifacts(vector<Data::Artifacts> && artifacts) { DARABONBA_PTR_SET_RVALUE(artifacts_, artifacts) };


      // capabilities Field Functions 
      bool hasCapabilities() const { return this->capabilities_ != nullptr;};
      void deleteCapabilities() { this->capabilities_ = nullptr;};
      inline const vector<Data::Capabilities> & getCapabilities() const { DARABONBA_PTR_GET_CONST(capabilities_, vector<Data::Capabilities>) };
      inline vector<Data::Capabilities> getCapabilities() { DARABONBA_PTR_GET(capabilities_, vector<Data::Capabilities>) };
      inline Data& setCapabilities(const vector<Data::Capabilities> & capabilities) { DARABONBA_PTR_SET_VALUE(capabilities_, capabilities) };
      inline Data& setCapabilities(vector<Data::Capabilities> && capabilities) { DARABONBA_PTR_SET_RVALUE(capabilities_, capabilities) };


      // chatHistoryLocations Field Functions 
      bool hasChatHistoryLocations() const { return this->chatHistoryLocations_ != nullptr;};
      void deleteChatHistoryLocations() { this->chatHistoryLocations_ = nullptr;};
      inline const vector<Data::ChatHistoryLocations> & getChatHistoryLocations() const { DARABONBA_PTR_GET_CONST(chatHistoryLocations_, vector<Data::ChatHistoryLocations>) };
      inline vector<Data::ChatHistoryLocations> getChatHistoryLocations() { DARABONBA_PTR_GET(chatHistoryLocations_, vector<Data::ChatHistoryLocations>) };
      inline Data& setChatHistoryLocations(const vector<Data::ChatHistoryLocations> & chatHistoryLocations) { DARABONBA_PTR_SET_VALUE(chatHistoryLocations_, chatHistoryLocations) };
      inline Data& setChatHistoryLocations(vector<Data::ChatHistoryLocations> && chatHistoryLocations) { DARABONBA_PTR_SET_RVALUE(chatHistoryLocations_, chatHistoryLocations) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // dataSources Field Functions 
      bool hasDataSources() const { return this->dataSources_ != nullptr;};
      void deleteDataSources() { this->dataSources_ = nullptr;};
      inline const vector<Data::DataSources> & getDataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<Data::DataSources>) };
      inline vector<Data::DataSources> getDataSources() { DARABONBA_PTR_GET(dataSources_, vector<Data::DataSources>) };
      inline Data& setDataSources(const vector<Data::DataSources> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
      inline Data& setDataSources(vector<Data::DataSources> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


      // favoriteInWorkspace Field Functions 
      bool hasFavoriteInWorkspace() const { return this->favoriteInWorkspace_ != nullptr;};
      void deleteFavoriteInWorkspace() { this->favoriteInWorkspace_ = nullptr;};
      inline string getFavoriteInWorkspace() const { DARABONBA_PTR_GET_DEFAULT(favoriteInWorkspace_, "") };
      inline Data& setFavoriteInWorkspace(string favoriteInWorkspace) { DARABONBA_PTR_SET_VALUE(favoriteInWorkspace_, favoriteInWorkspace) };


      // file Field Functions 
      bool hasFile() const { return this->file_ != nullptr;};
      void deleteFile() { this->file_ = nullptr;};
      inline string getFile() const { DARABONBA_PTR_GET_DEFAULT(file_, "") };
      inline Data& setFile(string file) { DARABONBA_PTR_SET_VALUE(file_, file) };


      // messages Field Functions 
      bool hasMessages() const { return this->messages_ != nullptr;};
      void deleteMessages() { this->messages_ = nullptr;};
      inline const vector<Data::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Data::Messages>) };
      inline vector<Data::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<Data::Messages>) };
      inline Data& setMessages(const vector<Data::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
      inline Data& setMessages(vector<Data::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


      // previewCustomAgent Field Functions 
      bool hasPreviewCustomAgent() const { return this->previewCustomAgent_ != nullptr;};
      void deletePreviewCustomAgent() { this->previewCustomAgent_ = nullptr;};
      inline const Data::PreviewCustomAgent & getPreviewCustomAgent() const { DARABONBA_PTR_GET_CONST(previewCustomAgent_, Data::PreviewCustomAgent) };
      inline Data::PreviewCustomAgent getPreviewCustomAgent() { DARABONBA_PTR_GET(previewCustomAgent_, Data::PreviewCustomAgent) };
      inline Data& setPreviewCustomAgent(const Data::PreviewCustomAgent & previewCustomAgent) { DARABONBA_PTR_SET_VALUE(previewCustomAgent_, previewCustomAgent) };
      inline Data& setPreviewCustomAgent(Data::PreviewCustomAgent && previewCustomAgent) { DARABONBA_PTR_SET_RVALUE(previewCustomAgent_, previewCustomAgent) };


      // recallResults Field Functions 
      bool hasRecallResults() const { return this->recallResults_ != nullptr;};
      void deleteRecallResults() { this->recallResults_ = nullptr;};
      inline const vector<Data::RecallResults> & getRecallResults() const { DARABONBA_PTR_GET_CONST(recallResults_, vector<Data::RecallResults>) };
      inline vector<Data::RecallResults> getRecallResults() { DARABONBA_PTR_GET(recallResults_, vector<Data::RecallResults>) };
      inline Data& setRecallResults(const vector<Data::RecallResults> & recallResults) { DARABONBA_PTR_SET_VALUE(recallResults_, recallResults) };
      inline Data& setRecallResults(vector<Data::RecallResults> && recallResults) { DARABONBA_PTR_SET_RVALUE(recallResults_, recallResults) };


      // saved Field Functions 
      bool hasSaved() const { return this->saved_ != nullptr;};
      void deleteSaved() { this->saved_ = nullptr;};
      inline bool getSaved() const { DARABONBA_PTR_GET_DEFAULT(saved_, false) };
      inline Data& setSaved(bool saved) { DARABONBA_PTR_SET_VALUE(saved_, saved) };


      // sessionConfig Field Functions 
      bool hasSessionConfig() const { return this->sessionConfig_ != nullptr;};
      void deleteSessionConfig() { this->sessionConfig_ = nullptr;};
      inline const Data::SessionConfig & getSessionConfig() const { DARABONBA_PTR_GET_CONST(sessionConfig_, Data::SessionConfig) };
      inline Data::SessionConfig getSessionConfig() { DARABONBA_PTR_GET(sessionConfig_, Data::SessionConfig) };
      inline Data& setSessionConfig(const Data::SessionConfig & sessionConfig) { DARABONBA_PTR_SET_VALUE(sessionConfig_, sessionConfig) };
      inline Data& setSessionConfig(Data::SessionConfig && sessionConfig) { DARABONBA_PTR_SET_RVALUE(sessionConfig_, sessionConfig) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Data& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // sessionStatus Field Functions 
      bool hasSessionStatus() const { return this->sessionStatus_ != nullptr;};
      void deleteSessionStatus() { this->sessionStatus_ = nullptr;};
      inline string getSessionStatus() const { DARABONBA_PTR_GET_DEFAULT(sessionStatus_, "") };
      inline Data& setSessionStatus(string sessionStatus) { DARABONBA_PTR_SET_VALUE(sessionStatus_, sessionStatus) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The current agent ID.
      shared_ptr<string> agentId_ {};
      // The current agent status.
      shared_ptr<string> agentStatus_ {};
      // The list of artifacts generated by the session. Currently, only reports are included.
      shared_ptr<vector<Data::Artifacts>> artifacts_ {};
      // The capabilities mounted to the session, such as knowledge bases and skills.
      shared_ptr<vector<Data::Capabilities>> capabilities_ {};
      // The session playback history.
      shared_ptr<vector<Data::ChatHistoryLocations>> chatHistoryLocations_ {};
      // The session creation time.
      shared_ptr<int64_t> createTime_ {};
      // The list of data sources used in the current session.
      shared_ptr<vector<Data::DataSources>> dataSources_ {};
      // Indicates whether the session is favorited by the current logged-on user in the workspace.
      shared_ptr<string> favoriteInWorkspace_ {};
      // The file ID.
      shared_ptr<string> file_ {};
      // The list of historical conversation messages in the session.
      shared_ptr<vector<Data::Messages>> messages_ {};
      // The custom agent for the intelligent development session preview.
      shared_ptr<Data::PreviewCustomAgent> previewCustomAgent_ {};
      // The recall results from the knowledge base and memory for the current session.
      shared_ptr<vector<Data::RecallResults>> recallResults_ {};
      // Indicates whether the session is favorited by the current logged-on user.
      shared_ptr<bool> saved_ {};
      // The session configuration items.
      shared_ptr<Data::SessionConfig> sessionConfig_ {};
      // The agent session ID.
      shared_ptr<string> sessionId_ {};
      // The session status.
      shared_ptr<string> sessionStatus_ {};
      // The title.
      shared_ptr<string> title_ {};
      // The ID of the session owner.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeDataAgentSessionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeDataAgentSessionResponseBody::Data) };
    inline DescribeDataAgentSessionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeDataAgentSessionResponseBody::Data) };
    inline DescribeDataAgentSessionResponseBody& setData(const DescribeDataAgentSessionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeDataAgentSessionResponseBody& setData(DescribeDataAgentSessionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeDataAgentSessionResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeDataAgentSessionResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataAgentSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDataAgentSessionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned struct.
    shared_ptr<DescribeDataAgentSessionResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message returned when the call fails.
    shared_ptr<string> errorMessage_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // - **true**: The deletion succeeded.
    // - **false**: The deletion failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
