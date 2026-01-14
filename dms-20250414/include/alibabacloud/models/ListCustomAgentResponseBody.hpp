// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMAGENTRESPONSEBODY_HPP_
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
  class ListCustomAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCustomAgentResponseBody() = default ;
    ListCustomAgentResponseBody(const ListCustomAgentResponseBody &) = default ;
    ListCustomAgentResponseBody(ListCustomAgentResponseBody &&) = default ;
    ListCustomAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomAgentResponseBody() = default ;
    ListCustomAgentResponseBody& operator=(const ListCustomAgentResponseBody &) = default ;
    ListCustomAgentResponseBody& operator=(ListCustomAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalElements, totalElements_);
        DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalElements, totalElements_);
        DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
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
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(AliyunParentId, aliyunParentId_);
          DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
          DARABONBA_PTR_TO_JSON(CreatorUserName, creatorUserName_);
          DARABONBA_PTR_TO_JSON(CustomAgentId, customAgentId_);
          DARABONBA_PTR_TO_JSON(DataJson, dataJson_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DmsUnit, dmsUnit_);
          DARABONBA_PTR_TO_JSON(ExecutionConfig, executionConfig_);
          DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Instruction, instruction_);
          DARABONBA_PTR_TO_JSON(Knowledge, knowledge_);
          DARABONBA_PTR_TO_JSON(KnowledgeConfigList, knowledgeConfigList_);
          DARABONBA_PTR_TO_JSON(Modifier, modifier_);
          DARABONBA_PTR_TO_JSON(ModifierUserName, modifierUserName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OfflineTime, offlineTime_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(ReleaseTime, releaseTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TextReportConfig, textReportConfig_);
          DARABONBA_PTR_TO_JSON(WebReportConfig, webReportConfig_);
          DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(AliyunParentId, aliyunParentId_);
          DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
          DARABONBA_PTR_FROM_JSON(CreatorUserName, creatorUserName_);
          DARABONBA_PTR_FROM_JSON(CustomAgentId, customAgentId_);
          DARABONBA_PTR_FROM_JSON(DataJson, dataJson_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DmsUnit, dmsUnit_);
          DARABONBA_PTR_FROM_JSON(ExecutionConfig, executionConfig_);
          DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Instruction, instruction_);
          DARABONBA_PTR_FROM_JSON(Knowledge, knowledge_);
          DARABONBA_PTR_FROM_JSON(KnowledgeConfigList, knowledgeConfigList_);
          DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
          DARABONBA_PTR_FROM_JSON(ModifierUserName, modifierUserName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OfflineTime, offlineTime_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(ReleaseTime, releaseTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TextReportConfig, textReportConfig_);
          DARABONBA_PTR_FROM_JSON(WebReportConfig, webReportConfig_);
          DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
        };
        Content() = default ;
        Content(const Content &) = default ;
        Content(Content &&) = default ;
        Content(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Content() = default ;
        Content& operator=(const Content &) = default ;
        Content& operator=(Content &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class KnowledgeConfigList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const KnowledgeConfigList& obj) { 
            DARABONBA_PTR_TO_JSON(AccessType, accessType_);
            DARABONBA_PTR_TO_JSON(McpServerId, mcpServerId_);
          };
          friend void from_json(const Darabonba::Json& j, KnowledgeConfigList& obj) { 
            DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
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
        && this->mcpServerId_ == nullptr; };
          // accessType Field Functions 
          bool hasAccessType() const { return this->accessType_ != nullptr;};
          void deleteAccessType() { this->accessType_ = nullptr;};
          inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
          inline KnowledgeConfigList& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


          // mcpServerId Field Functions 
          bool hasMcpServerId() const { return this->mcpServerId_ != nullptr;};
          void deleteMcpServerId() { this->mcpServerId_ = nullptr;};
          inline string getMcpServerId() const { DARABONBA_PTR_GET_DEFAULT(mcpServerId_, "") };
          inline KnowledgeConfigList& setMcpServerId(string mcpServerId) { DARABONBA_PTR_SET_VALUE(mcpServerId_, mcpServerId) };


        protected:
          shared_ptr<string> accessType_ {};
          shared_ptr<string> mcpServerId_ {};
        };

        class ExecutionConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ExecutionConfig& obj) { 
            DARABONBA_PTR_TO_JSON(SkipAskHuman, skipAskHuman_);
            DARABONBA_PTR_TO_JSON(SkipPlan, skipPlan_);
            DARABONBA_PTR_TO_JSON(SkipSqlConfirm, skipSqlConfirm_);
            DARABONBA_PTR_TO_JSON(SkipWebReportConfirm, skipWebReportConfirm_);
          };
          friend void from_json(const Darabonba::Json& j, ExecutionConfig& obj) { 
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
          virtual bool empty() const override { return this->skipAskHuman_ == nullptr
        && this->skipPlan_ == nullptr && this->skipSqlConfirm_ == nullptr && this->skipWebReportConfirm_ == nullptr; };
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
          shared_ptr<bool> skipAskHuman_ {};
          shared_ptr<bool> skipPlan_ {};
          shared_ptr<bool> skipSqlConfirm_ {};
          shared_ptr<bool> skipWebReportConfirm_ {};
        };

        virtual bool empty() const override { return this->aliyunParentId_ == nullptr
        && this->aliyunUid_ == nullptr && this->creatorUserName_ == nullptr && this->customAgentId_ == nullptr && this->dataJson_ == nullptr && this->description_ == nullptr
        && this->dmsUnit_ == nullptr && this->executionConfig_ == nullptr && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr && this->instruction_ == nullptr
        && this->knowledge_ == nullptr && this->knowledgeConfigList_ == nullptr && this->modifier_ == nullptr && this->modifierUserName_ == nullptr && this->name_ == nullptr
        && this->offlineTime_ == nullptr && this->region_ == nullptr && this->releaseTime_ == nullptr && this->status_ == nullptr && this->textReportConfig_ == nullptr
        && this->webReportConfig_ == nullptr && this->workspaceId_ == nullptr; };
        // aliyunParentId Field Functions 
        bool hasAliyunParentId() const { return this->aliyunParentId_ != nullptr;};
        void deleteAliyunParentId() { this->aliyunParentId_ = nullptr;};
        inline string getAliyunParentId() const { DARABONBA_PTR_GET_DEFAULT(aliyunParentId_, "") };
        inline Content& setAliyunParentId(string aliyunParentId) { DARABONBA_PTR_SET_VALUE(aliyunParentId_, aliyunParentId) };


        // aliyunUid Field Functions 
        bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
        void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
        inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
        inline Content& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


        // creatorUserName Field Functions 
        bool hasCreatorUserName() const { return this->creatorUserName_ != nullptr;};
        void deleteCreatorUserName() { this->creatorUserName_ = nullptr;};
        inline string getCreatorUserName() const { DARABONBA_PTR_GET_DEFAULT(creatorUserName_, "") };
        inline Content& setCreatorUserName(string creatorUserName) { DARABONBA_PTR_SET_VALUE(creatorUserName_, creatorUserName) };


        // customAgentId Field Functions 
        bool hasCustomAgentId() const { return this->customAgentId_ != nullptr;};
        void deleteCustomAgentId() { this->customAgentId_ = nullptr;};
        inline string getCustomAgentId() const { DARABONBA_PTR_GET_DEFAULT(customAgentId_, "") };
        inline Content& setCustomAgentId(string customAgentId) { DARABONBA_PTR_SET_VALUE(customAgentId_, customAgentId) };


        // dataJson Field Functions 
        bool hasDataJson() const { return this->dataJson_ != nullptr;};
        void deleteDataJson() { this->dataJson_ = nullptr;};
        inline string getDataJson() const { DARABONBA_PTR_GET_DEFAULT(dataJson_, "") };
        inline Content& setDataJson(string dataJson) { DARABONBA_PTR_SET_VALUE(dataJson_, dataJson) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Content& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // dmsUnit Field Functions 
        bool hasDmsUnit() const { return this->dmsUnit_ != nullptr;};
        void deleteDmsUnit() { this->dmsUnit_ = nullptr;};
        inline string getDmsUnit() const { DARABONBA_PTR_GET_DEFAULT(dmsUnit_, "") };
        inline Content& setDmsUnit(string dmsUnit) { DARABONBA_PTR_SET_VALUE(dmsUnit_, dmsUnit) };


        // executionConfig Field Functions 
        bool hasExecutionConfig() const { return this->executionConfig_ != nullptr;};
        void deleteExecutionConfig() { this->executionConfig_ = nullptr;};
        inline const Content::ExecutionConfig & getExecutionConfig() const { DARABONBA_PTR_GET_CONST(executionConfig_, Content::ExecutionConfig) };
        inline Content::ExecutionConfig getExecutionConfig() { DARABONBA_PTR_GET(executionConfig_, Content::ExecutionConfig) };
        inline Content& setExecutionConfig(const Content::ExecutionConfig & executionConfig) { DARABONBA_PTR_SET_VALUE(executionConfig_, executionConfig) };
        inline Content& setExecutionConfig(Content::ExecutionConfig && executionConfig) { DARABONBA_PTR_SET_RVALUE(executionConfig_, executionConfig) };


        // gmtCreated Field Functions 
        bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
        void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
        inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
        inline Content& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Content& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // instruction Field Functions 
        bool hasInstruction() const { return this->instruction_ != nullptr;};
        void deleteInstruction() { this->instruction_ = nullptr;};
        inline string getInstruction() const { DARABONBA_PTR_GET_DEFAULT(instruction_, "") };
        inline Content& setInstruction(string instruction) { DARABONBA_PTR_SET_VALUE(instruction_, instruction) };


        // knowledge Field Functions 
        bool hasKnowledge() const { return this->knowledge_ != nullptr;};
        void deleteKnowledge() { this->knowledge_ = nullptr;};
        inline string getKnowledge() const { DARABONBA_PTR_GET_DEFAULT(knowledge_, "") };
        inline Content& setKnowledge(string knowledge) { DARABONBA_PTR_SET_VALUE(knowledge_, knowledge) };


        // knowledgeConfigList Field Functions 
        bool hasKnowledgeConfigList() const { return this->knowledgeConfigList_ != nullptr;};
        void deleteKnowledgeConfigList() { this->knowledgeConfigList_ = nullptr;};
        inline const vector<Content::KnowledgeConfigList> & getKnowledgeConfigList() const { DARABONBA_PTR_GET_CONST(knowledgeConfigList_, vector<Content::KnowledgeConfigList>) };
        inline vector<Content::KnowledgeConfigList> getKnowledgeConfigList() { DARABONBA_PTR_GET(knowledgeConfigList_, vector<Content::KnowledgeConfigList>) };
        inline Content& setKnowledgeConfigList(const vector<Content::KnowledgeConfigList> & knowledgeConfigList) { DARABONBA_PTR_SET_VALUE(knowledgeConfigList_, knowledgeConfigList) };
        inline Content& setKnowledgeConfigList(vector<Content::KnowledgeConfigList> && knowledgeConfigList) { DARABONBA_PTR_SET_RVALUE(knowledgeConfigList_, knowledgeConfigList) };


        // modifier Field Functions 
        bool hasModifier() const { return this->modifier_ != nullptr;};
        void deleteModifier() { this->modifier_ = nullptr;};
        inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
        inline Content& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


        // modifierUserName Field Functions 
        bool hasModifierUserName() const { return this->modifierUserName_ != nullptr;};
        void deleteModifierUserName() { this->modifierUserName_ = nullptr;};
        inline string getModifierUserName() const { DARABONBA_PTR_GET_DEFAULT(modifierUserName_, "") };
        inline Content& setModifierUserName(string modifierUserName) { DARABONBA_PTR_SET_VALUE(modifierUserName_, modifierUserName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Content& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // offlineTime Field Functions 
        bool hasOfflineTime() const { return this->offlineTime_ != nullptr;};
        void deleteOfflineTime() { this->offlineTime_ = nullptr;};
        inline string getOfflineTime() const { DARABONBA_PTR_GET_DEFAULT(offlineTime_, "") };
        inline Content& setOfflineTime(string offlineTime) { DARABONBA_PTR_SET_VALUE(offlineTime_, offlineTime) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline Content& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // releaseTime Field Functions 
        bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
        void deleteReleaseTime() { this->releaseTime_ = nullptr;};
        inline string getReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, "") };
        inline Content& setReleaseTime(string releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Content& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // textReportConfig Field Functions 
        bool hasTextReportConfig() const { return this->textReportConfig_ != nullptr;};
        void deleteTextReportConfig() { this->textReportConfig_ = nullptr;};
        inline string getTextReportConfig() const { DARABONBA_PTR_GET_DEFAULT(textReportConfig_, "") };
        inline Content& setTextReportConfig(string textReportConfig) { DARABONBA_PTR_SET_VALUE(textReportConfig_, textReportConfig) };


        // webReportConfig Field Functions 
        bool hasWebReportConfig() const { return this->webReportConfig_ != nullptr;};
        void deleteWebReportConfig() { this->webReportConfig_ = nullptr;};
        inline string getWebReportConfig() const { DARABONBA_PTR_GET_DEFAULT(webReportConfig_, "") };
        inline Content& setWebReportConfig(string webReportConfig) { DARABONBA_PTR_SET_VALUE(webReportConfig_, webReportConfig) };


        // workspaceId Field Functions 
        bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
        void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
        inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
        inline Content& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


      protected:
        shared_ptr<string> aliyunParentId_ {};
        shared_ptr<string> aliyunUid_ {};
        shared_ptr<string> creatorUserName_ {};
        shared_ptr<string> customAgentId_ {};
        shared_ptr<string> dataJson_ {};
        shared_ptr<string> description_ {};
        shared_ptr<string> dmsUnit_ {};
        shared_ptr<Content::ExecutionConfig> executionConfig_ {};
        shared_ptr<string> gmtCreated_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<string> instruction_ {};
        shared_ptr<string> knowledge_ {};
        shared_ptr<vector<Content::KnowledgeConfigList>> knowledgeConfigList_ {};
        shared_ptr<string> modifier_ {};
        shared_ptr<string> modifierUserName_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> offlineTime_ {};
        shared_ptr<string> region_ {};
        shared_ptr<string> releaseTime_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> textReportConfig_ {};
        shared_ptr<string> webReportConfig_ {};
        shared_ptr<string> workspaceId_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalElements_ == nullptr && this->totalPages_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const vector<Data::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Data::Content>) };
      inline vector<Data::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Data::Content>) };
      inline Data& setContent(const vector<Data::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Data& setContent(vector<Data::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Data& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalElements Field Functions 
      bool hasTotalElements() const { return this->totalElements_ != nullptr;};
      void deleteTotalElements() { this->totalElements_ = nullptr;};
      inline int64_t getTotalElements() const { DARABONBA_PTR_GET_DEFAULT(totalElements_, 0L) };
      inline Data& setTotalElements(int64_t totalElements) { DARABONBA_PTR_SET_VALUE(totalElements_, totalElements) };


      // totalPages Field Functions 
      bool hasTotalPages() const { return this->totalPages_ != nullptr;};
      void deleteTotalPages() { this->totalPages_ = nullptr;};
      inline int64_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0L) };
      inline Data& setTotalPages(int64_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


    protected:
      shared_ptr<vector<Data::Content>> content_ {};
      shared_ptr<int64_t> pageNumber_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<int64_t> totalElements_ {};
      shared_ptr<int64_t> totalPages_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCustomAgentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCustomAgentResponseBody::Data) };
    inline ListCustomAgentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCustomAgentResponseBody::Data) };
    inline ListCustomAgentResponseBody& setData(const ListCustomAgentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCustomAgentResponseBody& setData(ListCustomAgentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListCustomAgentResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListCustomAgentResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCustomAgentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<ListCustomAgentResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
