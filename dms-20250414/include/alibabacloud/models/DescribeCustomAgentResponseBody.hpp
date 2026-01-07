// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DescribeCustomAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCustomAgentResponseBody() = default ;
    DescribeCustomAgentResponseBody(const DescribeCustomAgentResponseBody &) = default ;
    DescribeCustomAgentResponseBody(DescribeCustomAgentResponseBody &&) = default ;
    DescribeCustomAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomAgentResponseBody() = default ;
    DescribeCustomAgentResponseBody& operator=(const DescribeCustomAgentResponseBody &) = default ;
    DescribeCustomAgentResponseBody& operator=(DescribeCustomAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AliyunParentUid, aliyunParentUid_);
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AliyunParentUid, aliyunParentUid_);
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

      virtual bool empty() const override { return this->aliyunParentUid_ == nullptr
        && this->aliyunUid_ == nullptr && this->creatorUserName_ == nullptr && this->customAgentId_ == nullptr && this->dataJson_ == nullptr && this->description_ == nullptr
        && this->dmsUnit_ == nullptr && this->executionConfig_ == nullptr && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr && this->instruction_ == nullptr
        && this->knowledge_ == nullptr && this->modifier_ == nullptr && this->modifierUserName_ == nullptr && this->name_ == nullptr && this->offlineTime_ == nullptr
        && this->region_ == nullptr && this->releaseTime_ == nullptr && this->status_ == nullptr && this->textReportConfig_ == nullptr && this->webReportConfig_ == nullptr
        && this->workspaceId_ == nullptr; };
      // aliyunParentUid Field Functions 
      bool hasAliyunParentUid() const { return this->aliyunParentUid_ != nullptr;};
      void deleteAliyunParentUid() { this->aliyunParentUid_ = nullptr;};
      inline string getAliyunParentUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunParentUid_, "") };
      inline Data& setAliyunParentUid(string aliyunParentUid) { DARABONBA_PTR_SET_VALUE(aliyunParentUid_, aliyunParentUid) };


      // aliyunUid Field Functions 
      bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
      void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
      inline string getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, "") };
      inline Data& setAliyunUid(string aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


      // creatorUserName Field Functions 
      bool hasCreatorUserName() const { return this->creatorUserName_ != nullptr;};
      void deleteCreatorUserName() { this->creatorUserName_ = nullptr;};
      inline string getCreatorUserName() const { DARABONBA_PTR_GET_DEFAULT(creatorUserName_, "") };
      inline Data& setCreatorUserName(string creatorUserName) { DARABONBA_PTR_SET_VALUE(creatorUserName_, creatorUserName) };


      // customAgentId Field Functions 
      bool hasCustomAgentId() const { return this->customAgentId_ != nullptr;};
      void deleteCustomAgentId() { this->customAgentId_ = nullptr;};
      inline string getCustomAgentId() const { DARABONBA_PTR_GET_DEFAULT(customAgentId_, "") };
      inline Data& setCustomAgentId(string customAgentId) { DARABONBA_PTR_SET_VALUE(customAgentId_, customAgentId) };


      // dataJson Field Functions 
      bool hasDataJson() const { return this->dataJson_ != nullptr;};
      void deleteDataJson() { this->dataJson_ = nullptr;};
      inline string getDataJson() const { DARABONBA_PTR_GET_DEFAULT(dataJson_, "") };
      inline Data& setDataJson(string dataJson) { DARABONBA_PTR_SET_VALUE(dataJson_, dataJson) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // dmsUnit Field Functions 
      bool hasDmsUnit() const { return this->dmsUnit_ != nullptr;};
      void deleteDmsUnit() { this->dmsUnit_ = nullptr;};
      inline string getDmsUnit() const { DARABONBA_PTR_GET_DEFAULT(dmsUnit_, "") };
      inline Data& setDmsUnit(string dmsUnit) { DARABONBA_PTR_SET_VALUE(dmsUnit_, dmsUnit) };


      // executionConfig Field Functions 
      bool hasExecutionConfig() const { return this->executionConfig_ != nullptr;};
      void deleteExecutionConfig() { this->executionConfig_ = nullptr;};
      inline const Data::ExecutionConfig & getExecutionConfig() const { DARABONBA_PTR_GET_CONST(executionConfig_, Data::ExecutionConfig) };
      inline Data::ExecutionConfig getExecutionConfig() { DARABONBA_PTR_GET(executionConfig_, Data::ExecutionConfig) };
      inline Data& setExecutionConfig(const Data::ExecutionConfig & executionConfig) { DARABONBA_PTR_SET_VALUE(executionConfig_, executionConfig) };
      inline Data& setExecutionConfig(Data::ExecutionConfig && executionConfig) { DARABONBA_PTR_SET_RVALUE(executionConfig_, executionConfig) };


      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline Data& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // instruction Field Functions 
      bool hasInstruction() const { return this->instruction_ != nullptr;};
      void deleteInstruction() { this->instruction_ = nullptr;};
      inline string getInstruction() const { DARABONBA_PTR_GET_DEFAULT(instruction_, "") };
      inline Data& setInstruction(string instruction) { DARABONBA_PTR_SET_VALUE(instruction_, instruction) };


      // knowledge Field Functions 
      bool hasKnowledge() const { return this->knowledge_ != nullptr;};
      void deleteKnowledge() { this->knowledge_ = nullptr;};
      inline string getKnowledge() const { DARABONBA_PTR_GET_DEFAULT(knowledge_, "") };
      inline Data& setKnowledge(string knowledge) { DARABONBA_PTR_SET_VALUE(knowledge_, knowledge) };


      // modifier Field Functions 
      bool hasModifier() const { return this->modifier_ != nullptr;};
      void deleteModifier() { this->modifier_ = nullptr;};
      inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
      inline Data& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


      // modifierUserName Field Functions 
      bool hasModifierUserName() const { return this->modifierUserName_ != nullptr;};
      void deleteModifierUserName() { this->modifierUserName_ = nullptr;};
      inline string getModifierUserName() const { DARABONBA_PTR_GET_DEFAULT(modifierUserName_, "") };
      inline Data& setModifierUserName(string modifierUserName) { DARABONBA_PTR_SET_VALUE(modifierUserName_, modifierUserName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // offlineTime Field Functions 
      bool hasOfflineTime() const { return this->offlineTime_ != nullptr;};
      void deleteOfflineTime() { this->offlineTime_ = nullptr;};
      inline string getOfflineTime() const { DARABONBA_PTR_GET_DEFAULT(offlineTime_, "") };
      inline Data& setOfflineTime(string offlineTime) { DARABONBA_PTR_SET_VALUE(offlineTime_, offlineTime) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Data& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // releaseTime Field Functions 
      bool hasReleaseTime() const { return this->releaseTime_ != nullptr;};
      void deleteReleaseTime() { this->releaseTime_ = nullptr;};
      inline string getReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(releaseTime_, "") };
      inline Data& setReleaseTime(string releaseTime) { DARABONBA_PTR_SET_VALUE(releaseTime_, releaseTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // textReportConfig Field Functions 
      bool hasTextReportConfig() const { return this->textReportConfig_ != nullptr;};
      void deleteTextReportConfig() { this->textReportConfig_ = nullptr;};
      inline string getTextReportConfig() const { DARABONBA_PTR_GET_DEFAULT(textReportConfig_, "") };
      inline Data& setTextReportConfig(string textReportConfig) { DARABONBA_PTR_SET_VALUE(textReportConfig_, textReportConfig) };


      // webReportConfig Field Functions 
      bool hasWebReportConfig() const { return this->webReportConfig_ != nullptr;};
      void deleteWebReportConfig() { this->webReportConfig_ = nullptr;};
      inline string getWebReportConfig() const { DARABONBA_PTR_GET_DEFAULT(webReportConfig_, "") };
      inline Data& setWebReportConfig(string webReportConfig) { DARABONBA_PTR_SET_VALUE(webReportConfig_, webReportConfig) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      shared_ptr<string> aliyunParentUid_ {};
      shared_ptr<string> aliyunUid_ {};
      shared_ptr<string> creatorUserName_ {};
      shared_ptr<string> customAgentId_ {};
      shared_ptr<string> dataJson_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> dmsUnit_ {};
      shared_ptr<Data::ExecutionConfig> executionConfig_ {};
      shared_ptr<string> gmtCreated_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<string> instruction_ {};
      shared_ptr<string> knowledge_ {};
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

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeCustomAgentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeCustomAgentResponseBody::Data) };
    inline DescribeCustomAgentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeCustomAgentResponseBody::Data) };
    inline DescribeCustomAgentResponseBody& setData(const DescribeCustomAgentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCustomAgentResponseBody& setData(DescribeCustomAgentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeCustomAgentResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeCustomAgentResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeCustomAgentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<DescribeCustomAgentResponseBody::Data> data_ {};
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
