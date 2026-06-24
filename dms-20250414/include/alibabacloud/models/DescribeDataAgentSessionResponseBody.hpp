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
        DARABONBA_PTR_TO_JSON(ChatHistoryLocations, chatHistoryLocations_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
        DARABONBA_PTR_TO_JSON(FavoriteInWorkspace, favoriteInWorkspace_);
        DARABONBA_PTR_TO_JSON(File, file_);
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
        DARABONBA_PTR_FROM_JSON(ChatHistoryLocations, chatHistoryLocations_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
        DARABONBA_PTR_FROM_JSON(FavoriteInWorkspace, favoriteInWorkspace_);
        DARABONBA_PTR_FROM_JSON(File, file_);
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
        // The custom agent ID.
        shared_ptr<string> customAgentId_ {};
        // The stage of the custom agent. Valid values:
        // - **debug**: the debugging stage.
        // - **prod**: the production stage.
        shared_ptr<string> customAgentStage_ {};
        // Specifies whether to enable web search.
        shared_ptr<bool> enableSearch_ {};
        // The encryption key for storing artifacts in OSS (including built-in and user-specified OSS). This is typically specified in CreateDataAgentSession.
        shared_ptr<string> encryptKey_ {};
        // The encryption type for storing artifacts in OSS (including built-in and user-specified OSS).
        shared_ptr<string> encryptType_ {};
        // The list of knowledge base IDs for this session.
        shared_ptr<vector<string>> kbUuidList_ {};
        // The language. Valid values:
        // - **CHINESE**: Chinese.
        // - **ENGLISH**: English.
        shared_ptr<string> language_ {};
        // The list of MCP server IDs in the session configuration.
        shared_ptr<vector<string>> mcpServerIds_ {};
        // The mode. Valid values:
        // - **ASK_DATA**: the data query mode.
        // - **ANALYSIS**: the analysis mode.
        // - **INSIGHT**: the insight mode.
        shared_ptr<string> mode_ {};
        // The report page width.
        shared_ptr<int64_t> reportPageWidth_ {};
        // The report watermark.
        shared_ptr<string> reportWaterMark_ {};
        // The name of the user OSS bucket. Analysis process files and report artifacts can be uploaded to the user-specified OSS bucket.
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
        // The similarity score of this data entry. The scoring algorithm is related to the algorithm (l2/ip/cosine) specified when the index was created.
        shared_ptr<double> score_ {};
        // The type of recalled knowledge.
        shared_ptr<string> type_ {};
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
        // 
        // - **CHAT**: specified through the CreateDataAgentSession or SendChatMessage operation during a conversation.
        // 
        // - **CUSTOM_AGENT**: from the preset analysis data scope in a custom agent.
        shared_ptr<string> category_ {};
        // The data source details.
        // 
        // When Category is CHAT or CUSTOM_AGENT, the structure of Detail is aligned with the structure of a single element in the DataSources parameter of the SendChatMessage operation.
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
        // The key of the chat replay history.
        shared_ptr<string> key_ {};
        // The OSS download URL of the chat replay history.
        shared_ptr<string> url_ {};
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
        // The brief description of the artifact. This value may be empty.
        shared_ptr<string> description_ {};
        // The time when the backend completed the artifact task. This is a UNIX timestamp accurate to the second.
        shared_ptr<string> finishTime_ {};
        // The globally unique artifact ID. If the report is produced by calling SendChatMessage with MessageType set to REPORT, the artifact ID is the same as the MessageId returned by the SendChatMessage operation.
        shared_ptr<string> id_ {};
        // The artifact name. This is typically a string concatenated by the system. It is aligned with the name field in the ListFileUpload operation. You can use this field to query the download URL of the artifact file.
        shared_ptr<string> name_ {};
        // The time when the backend received the artifact request. This is a UNIX timestamp accurate to the second.
        shared_ptr<string> receiveTime_ {};
        // The time when the backend actually started running the artifact task. This is a UNIX timestamp accurate to the second.
        shared_ptr<string> startTime_ {};
        // The artifact status. Valid values:
        // 
        // - PENDING: The backend has received the task but has not started it.
        // 
        // - RUNNING: The backend has started the task but has not completed it.
        // 
        // - SUCCESS: The task succeeded. You can query the file information by calling the ListFileUpload operation.
        // 
        // - FAILED: The task failed.
        shared_ptr<string> status_ {};
        // The artifact type. Valid values: TextReport and WebReport.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentStatus_ == nullptr && this->artifacts_ == nullptr && this->chatHistoryLocations_ == nullptr && this->createTime_ == nullptr && this->dataSources_ == nullptr
        && this->favoriteInWorkspace_ == nullptr && this->file_ == nullptr && this->recallResults_ == nullptr && this->saved_ == nullptr && this->sessionConfig_ == nullptr
        && this->sessionId_ == nullptr && this->sessionStatus_ == nullptr && this->title_ == nullptr && this->userId_ == nullptr; };
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
      // The list of artifacts produced by the session. Currently, only reports are included.
      shared_ptr<vector<Data::Artifacts>> artifacts_ {};
      // The chat replay history.
      shared_ptr<vector<Data::ChatHistoryLocations>> chatHistoryLocations_ {};
      // The time when the session was created.
      shared_ptr<int64_t> createTime_ {};
      // The list of data sources used in the current session.
      shared_ptr<vector<Data::DataSources>> dataSources_ {};
      // Indicates whether the session is saved to favorites in the workspace by the current user.
      shared_ptr<string> favoriteInWorkspace_ {};
      // The file ID.
      shared_ptr<string> file_ {};
      // The recall results from the knowledge base and memory for this session.
      shared_ptr<vector<Data::RecallResults>> recallResults_ {};
      // Indicates whether the session is saved to favorites by the current user.
      shared_ptr<bool> saved_ {};
      // The session configuration item.
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
    // The response struct.
    shared_ptr<DescribeDataAgentSessionResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the call failed.
    shared_ptr<string> errorMessage_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The return value. Valid values:
    // 
    // - **true**: The operation was successful.
    // - **false**: The operation failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
