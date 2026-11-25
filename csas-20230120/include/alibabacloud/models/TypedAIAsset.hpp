// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TYPEDAIASSET_HPP_
#define ALIBABACLOUD_MODELS_TYPEDAIASSET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class TypedAIAsset : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TypedAIAsset& obj) { 
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(ConfigPath, configPath_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(FirstSeen, firstSeen_);
      DARABONBA_PTR_TO_JSON(Form, form_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IdentityIdentifiers, identityIdentifiers_);
      DARABONBA_PTR_TO_JSON(InstallPath, installPath_);
      DARABONBA_PTR_TO_JSON(InstanceLocalId, instanceLocalId_);
      DARABONBA_PTR_TO_JSON(LastCheckTime, lastCheckTime_);
      DARABONBA_PTR_TO_JSON(LastDetectTaskId, lastDetectTaskId_);
      DARABONBA_PTR_TO_JSON(LastSeen, lastSeen_);
      DARABONBA_PTR_TO_JSON(MatchedRules, matchedRules_);
      DARABONBA_PTR_TO_JSON(McpId, mcpId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProviderId, providerId_);
      DARABONBA_PTR_TO_JSON(ProviderName, providerName_);
      DARABONBA_PTR_TO_JSON(ProviderNameCn, providerNameCn_);
      DARABONBA_PTR_TO_JSON(ProviderNameEn, providerNameEn_);
      DARABONBA_PTR_TO_JSON(ProviderType, providerType_);
      DARABONBA_PTR_TO_JSON(RecognitionEvidence, recognitionEvidence_);
      DARABONBA_PTR_TO_JSON(RecognitionStatus, recognitionStatus_);
      DARABONBA_PTR_TO_JSON(RiskInfo, riskInfo_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(ScanId, scanId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StandardSha256, standardSha256_);
      DARABONBA_PTR_TO_JSON(Transport, transport_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, TypedAIAsset& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(ConfigPath, configPath_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(FirstSeen, firstSeen_);
      DARABONBA_PTR_FROM_JSON(Form, form_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IdentityIdentifiers, identityIdentifiers_);
      DARABONBA_PTR_FROM_JSON(InstallPath, installPath_);
      DARABONBA_PTR_FROM_JSON(InstanceLocalId, instanceLocalId_);
      DARABONBA_PTR_FROM_JSON(LastCheckTime, lastCheckTime_);
      DARABONBA_PTR_FROM_JSON(LastDetectTaskId, lastDetectTaskId_);
      DARABONBA_PTR_FROM_JSON(LastSeen, lastSeen_);
      DARABONBA_PTR_FROM_JSON(MatchedRules, matchedRules_);
      DARABONBA_PTR_FROM_JSON(McpId, mcpId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProviderId, providerId_);
      DARABONBA_PTR_FROM_JSON(ProviderName, providerName_);
      DARABONBA_PTR_FROM_JSON(ProviderNameCn, providerNameCn_);
      DARABONBA_PTR_FROM_JSON(ProviderNameEn, providerNameEn_);
      DARABONBA_PTR_FROM_JSON(ProviderType, providerType_);
      DARABONBA_PTR_FROM_JSON(RecognitionEvidence, recognitionEvidence_);
      DARABONBA_PTR_FROM_JSON(RecognitionStatus, recognitionStatus_);
      DARABONBA_PTR_FROM_JSON(RiskInfo, riskInfo_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(ScanId, scanId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StandardSha256, standardSha256_);
      DARABONBA_PTR_FROM_JSON(Transport, transport_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    TypedAIAsset() = default ;
    TypedAIAsset(const TypedAIAsset &) = default ;
    TypedAIAsset(TypedAIAsset &&) = default ;
    TypedAIAsset(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TypedAIAsset() = default ;
    TypedAIAsset& operator=(const TypedAIAsset &) = default ;
    TypedAIAsset& operator=(TypedAIAsset &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RiskInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RiskInfo& obj) { 
        DARABONBA_PTR_TO_JSON(highRiskCnt, highRiskCnt_);
        DARABONBA_PTR_TO_JSON(lowRiskCnt, lowRiskCnt_);
        DARABONBA_PTR_TO_JSON(mediumRiskCnt, mediumRiskCnt_);
      };
      friend void from_json(const Darabonba::Json& j, RiskInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(highRiskCnt, highRiskCnt_);
        DARABONBA_PTR_FROM_JSON(lowRiskCnt, lowRiskCnt_);
        DARABONBA_PTR_FROM_JSON(mediumRiskCnt, mediumRiskCnt_);
      };
      RiskInfo() = default ;
      RiskInfo(const RiskInfo &) = default ;
      RiskInfo(RiskInfo &&) = default ;
      RiskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RiskInfo() = default ;
      RiskInfo& operator=(const RiskInfo &) = default ;
      RiskInfo& operator=(RiskInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->highRiskCnt_ == nullptr
        && this->lowRiskCnt_ == nullptr && this->mediumRiskCnt_ == nullptr; };
      // highRiskCnt Field Functions 
      bool hasHighRiskCnt() const { return this->highRiskCnt_ != nullptr;};
      void deleteHighRiskCnt() { this->highRiskCnt_ = nullptr;};
      inline int64_t getHighRiskCnt() const { DARABONBA_PTR_GET_DEFAULT(highRiskCnt_, 0L) };
      inline RiskInfo& setHighRiskCnt(int64_t highRiskCnt) { DARABONBA_PTR_SET_VALUE(highRiskCnt_, highRiskCnt) };


      // lowRiskCnt Field Functions 
      bool hasLowRiskCnt() const { return this->lowRiskCnt_ != nullptr;};
      void deleteLowRiskCnt() { this->lowRiskCnt_ = nullptr;};
      inline int64_t getLowRiskCnt() const { DARABONBA_PTR_GET_DEFAULT(lowRiskCnt_, 0L) };
      inline RiskInfo& setLowRiskCnt(int64_t lowRiskCnt) { DARABONBA_PTR_SET_VALUE(lowRiskCnt_, lowRiskCnt) };


      // mediumRiskCnt Field Functions 
      bool hasMediumRiskCnt() const { return this->mediumRiskCnt_ != nullptr;};
      void deleteMediumRiskCnt() { this->mediumRiskCnt_ = nullptr;};
      inline int64_t getMediumRiskCnt() const { DARABONBA_PTR_GET_DEFAULT(mediumRiskCnt_, 0L) };
      inline RiskInfo& setMediumRiskCnt(int64_t mediumRiskCnt) { DARABONBA_PTR_SET_VALUE(mediumRiskCnt_, mediumRiskCnt) };


    protected:
      // The number of high-risk items in the currently saved detection results. This is interpreted as an actual count only when detection results are available.
      shared_ptr<int64_t> highRiskCnt_ {};
      // The number of low-risk items in the currently saved detection results. A value of zero indicates no low-risk items in the results but does not indicate overall security.
      shared_ptr<int64_t> lowRiskCnt_ {};
      // The number of medium-risk items in the currently saved detection results. A value of zero indicates no medium-risk items in the results but does not indicate the absence of other risks.
      shared_ptr<int64_t> mediumRiskCnt_ {};
    };

    class RecognitionEvidence : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RecognitionEvidence& obj) { 
        DARABONBA_PTR_TO_JSON(agent_declaration, agentDeclaration_);
        DARABONBA_PTR_TO_JSON(autonomous_execution, autonomousExecution_);
        DARABONBA_PTR_TO_JSON(model_call, modelCall_);
        DARABONBA_PTR_TO_JSON(state_management, stateManagement_);
        DARABONBA_PTR_TO_JSON(tool_call, toolCall_);
      };
      friend void from_json(const Darabonba::Json& j, RecognitionEvidence& obj) { 
        DARABONBA_PTR_FROM_JSON(agent_declaration, agentDeclaration_);
        DARABONBA_PTR_FROM_JSON(autonomous_execution, autonomousExecution_);
        DARABONBA_PTR_FROM_JSON(model_call, modelCall_);
        DARABONBA_PTR_FROM_JSON(state_management, stateManagement_);
        DARABONBA_PTR_FROM_JSON(tool_call, toolCall_);
      };
      RecognitionEvidence() = default ;
      RecognitionEvidence(const RecognitionEvidence &) = default ;
      RecognitionEvidence(RecognitionEvidence &&) = default ;
      RecognitionEvidence(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RecognitionEvidence() = default ;
      RecognitionEvidence& operator=(const RecognitionEvidence &) = default ;
      RecognitionEvidence& operator=(RecognitionEvidence &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ToolCall : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ToolCall& obj) { 
          DARABONBA_PTR_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(source_path, sourcePath_);
        };
        friend void from_json(const Darabonba::Json& j, ToolCall& obj) { 
          DARABONBA_PTR_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(source_path, sourcePath_);
        };
        ToolCall() = default ;
        ToolCall(const ToolCall &) = default ;
        ToolCall(ToolCall &&) = default ;
        ToolCall(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ToolCall() = default ;
        ToolCall& operator=(const ToolCall &) = default ;
        ToolCall& operator=(ToolCall &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->sourcePath_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline ToolCall& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // sourcePath Field Functions 
        bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
        void deleteSourcePath() { this->sourcePath_ = nullptr;};
        inline string getSourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
        inline ToolCall& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


      protected:
        // The collected declaration text related to the recognition basis. This is currently used mainly for agent_declaration, and other recognition evidence may not return content. This should not be interpreted as an actual execution log.
        shared_ptr<string> content_ {};
        // The local file or configuration path where the recognition evidence is located. This is used to display and locate static clues, and is not a server-side downloadable URL.
        shared_ptr<string> sourcePath_ {};
      };

      class StateManagement : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StateManagement& obj) { 
          DARABONBA_PTR_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(source_path, sourcePath_);
        };
        friend void from_json(const Darabonba::Json& j, StateManagement& obj) { 
          DARABONBA_PTR_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(source_path, sourcePath_);
        };
        StateManagement() = default ;
        StateManagement(const StateManagement &) = default ;
        StateManagement(StateManagement &&) = default ;
        StateManagement(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StateManagement() = default ;
        StateManagement& operator=(const StateManagement &) = default ;
        StateManagement& operator=(StateManagement &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->sourcePath_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline StateManagement& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // sourcePath Field Functions 
        bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
        void deleteSourcePath() { this->sourcePath_ = nullptr;};
        inline string getSourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
        inline StateManagement& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


      protected:
        // The collected declaration text related to the recognition basis. This is currently used mainly for agent_declaration, and other recognition evidence may not return content. This should not be interpreted as an actual execution log.
        shared_ptr<string> content_ {};
        // The local file or configuration path where the recognition evidence is located. This is used to display and locate static clues, and is not a server-side downloadable URL.
        shared_ptr<string> sourcePath_ {};
      };

      class ModelCall : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ModelCall& obj) { 
          DARABONBA_PTR_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(source_path, sourcePath_);
        };
        friend void from_json(const Darabonba::Json& j, ModelCall& obj) { 
          DARABONBA_PTR_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(source_path, sourcePath_);
        };
        ModelCall() = default ;
        ModelCall(const ModelCall &) = default ;
        ModelCall(ModelCall &&) = default ;
        ModelCall(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ModelCall() = default ;
        ModelCall& operator=(const ModelCall &) = default ;
        ModelCall& operator=(ModelCall &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->sourcePath_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline ModelCall& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // sourcePath Field Functions 
        bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
        void deleteSourcePath() { this->sourcePath_ = nullptr;};
        inline string getSourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
        inline ModelCall& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


      protected:
        // The collected declaration text related to the recognition basis. This is currently used mainly for agent_declaration, and other recognition evidence may not return content. This should not be interpreted as an actual execution log.
        shared_ptr<string> content_ {};
        // The local file or configuration path where the recognition evidence is located. This is used to display and locate static clues, and is not a server-side downloadable URL.
        shared_ptr<string> sourcePath_ {};
      };

      class AutonomousExecution : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutonomousExecution& obj) { 
          DARABONBA_PTR_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(source_path, sourcePath_);
        };
        friend void from_json(const Darabonba::Json& j, AutonomousExecution& obj) { 
          DARABONBA_PTR_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(source_path, sourcePath_);
        };
        AutonomousExecution() = default ;
        AutonomousExecution(const AutonomousExecution &) = default ;
        AutonomousExecution(AutonomousExecution &&) = default ;
        AutonomousExecution(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AutonomousExecution() = default ;
        AutonomousExecution& operator=(const AutonomousExecution &) = default ;
        AutonomousExecution& operator=(AutonomousExecution &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->sourcePath_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline AutonomousExecution& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // sourcePath Field Functions 
        bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
        void deleteSourcePath() { this->sourcePath_ = nullptr;};
        inline string getSourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
        inline AutonomousExecution& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


      protected:
        // The collected declaration text related to the recognition basis. This is currently used mainly for agent_declaration, and other recognition evidence may not return content. This should not be interpreted as an actual execution log.
        shared_ptr<string> content_ {};
        // The local file or configuration path where the recognition evidence is located. This is used to display and locate static clues, and is not a server-side downloadable URL.
        shared_ptr<string> sourcePath_ {};
      };

      class AgentDeclaration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AgentDeclaration& obj) { 
          DARABONBA_PTR_TO_JSON(content, content_);
          DARABONBA_PTR_TO_JSON(source_path, sourcePath_);
        };
        friend void from_json(const Darabonba::Json& j, AgentDeclaration& obj) { 
          DARABONBA_PTR_FROM_JSON(content, content_);
          DARABONBA_PTR_FROM_JSON(source_path, sourcePath_);
        };
        AgentDeclaration() = default ;
        AgentDeclaration(const AgentDeclaration &) = default ;
        AgentDeclaration(AgentDeclaration &&) = default ;
        AgentDeclaration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AgentDeclaration() = default ;
        AgentDeclaration& operator=(const AgentDeclaration &) = default ;
        AgentDeclaration& operator=(AgentDeclaration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->sourcePath_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline AgentDeclaration& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // sourcePath Field Functions 
        bool hasSourcePath() const { return this->sourcePath_ != nullptr;};
        void deleteSourcePath() { this->sourcePath_ = nullptr;};
        inline string getSourcePath() const { DARABONBA_PTR_GET_DEFAULT(sourcePath_, "") };
        inline AgentDeclaration& setSourcePath(string sourcePath) { DARABONBA_PTR_SET_VALUE(sourcePath_, sourcePath) };


      protected:
        // The collected declaration text related to the recognition basis. This is currently used mainly for agent_declaration, and other recognition evidence may not return content. This should not be interpreted as an actual execution log.
        shared_ptr<string> content_ {};
        // The local file or configuration path where the recognition evidence is located. This is used to display and locate static clues, and is not a server-side downloadable URL.
        shared_ptr<string> sourcePath_ {};
      };

      virtual bool empty() const override { return this->agentDeclaration_ == nullptr
        && this->autonomousExecution_ == nullptr && this->modelCall_ == nullptr && this->stateManagement_ == nullptr && this->toolCall_ == nullptr; };
      // agentDeclaration Field Functions 
      bool hasAgentDeclaration() const { return this->agentDeclaration_ != nullptr;};
      void deleteAgentDeclaration() { this->agentDeclaration_ = nullptr;};
      inline const vector<RecognitionEvidence::AgentDeclaration> & getAgentDeclaration() const { DARABONBA_PTR_GET_CONST(agentDeclaration_, vector<RecognitionEvidence::AgentDeclaration>) };
      inline vector<RecognitionEvidence::AgentDeclaration> getAgentDeclaration() { DARABONBA_PTR_GET(agentDeclaration_, vector<RecognitionEvidence::AgentDeclaration>) };
      inline RecognitionEvidence& setAgentDeclaration(const vector<RecognitionEvidence::AgentDeclaration> & agentDeclaration) { DARABONBA_PTR_SET_VALUE(agentDeclaration_, agentDeclaration) };
      inline RecognitionEvidence& setAgentDeclaration(vector<RecognitionEvidence::AgentDeclaration> && agentDeclaration) { DARABONBA_PTR_SET_RVALUE(agentDeclaration_, agentDeclaration) };


      // autonomousExecution Field Functions 
      bool hasAutonomousExecution() const { return this->autonomousExecution_ != nullptr;};
      void deleteAutonomousExecution() { this->autonomousExecution_ = nullptr;};
      inline const vector<RecognitionEvidence::AutonomousExecution> & getAutonomousExecution() const { DARABONBA_PTR_GET_CONST(autonomousExecution_, vector<RecognitionEvidence::AutonomousExecution>) };
      inline vector<RecognitionEvidence::AutonomousExecution> getAutonomousExecution() { DARABONBA_PTR_GET(autonomousExecution_, vector<RecognitionEvidence::AutonomousExecution>) };
      inline RecognitionEvidence& setAutonomousExecution(const vector<RecognitionEvidence::AutonomousExecution> & autonomousExecution) { DARABONBA_PTR_SET_VALUE(autonomousExecution_, autonomousExecution) };
      inline RecognitionEvidence& setAutonomousExecution(vector<RecognitionEvidence::AutonomousExecution> && autonomousExecution) { DARABONBA_PTR_SET_RVALUE(autonomousExecution_, autonomousExecution) };


      // modelCall Field Functions 
      bool hasModelCall() const { return this->modelCall_ != nullptr;};
      void deleteModelCall() { this->modelCall_ = nullptr;};
      inline const vector<RecognitionEvidence::ModelCall> & getModelCall() const { DARABONBA_PTR_GET_CONST(modelCall_, vector<RecognitionEvidence::ModelCall>) };
      inline vector<RecognitionEvidence::ModelCall> getModelCall() { DARABONBA_PTR_GET(modelCall_, vector<RecognitionEvidence::ModelCall>) };
      inline RecognitionEvidence& setModelCall(const vector<RecognitionEvidence::ModelCall> & modelCall) { DARABONBA_PTR_SET_VALUE(modelCall_, modelCall) };
      inline RecognitionEvidence& setModelCall(vector<RecognitionEvidence::ModelCall> && modelCall) { DARABONBA_PTR_SET_RVALUE(modelCall_, modelCall) };


      // stateManagement Field Functions 
      bool hasStateManagement() const { return this->stateManagement_ != nullptr;};
      void deleteStateManagement() { this->stateManagement_ = nullptr;};
      inline const vector<RecognitionEvidence::StateManagement> & getStateManagement() const { DARABONBA_PTR_GET_CONST(stateManagement_, vector<RecognitionEvidence::StateManagement>) };
      inline vector<RecognitionEvidence::StateManagement> getStateManagement() { DARABONBA_PTR_GET(stateManagement_, vector<RecognitionEvidence::StateManagement>) };
      inline RecognitionEvidence& setStateManagement(const vector<RecognitionEvidence::StateManagement> & stateManagement) { DARABONBA_PTR_SET_VALUE(stateManagement_, stateManagement) };
      inline RecognitionEvidence& setStateManagement(vector<RecognitionEvidence::StateManagement> && stateManagement) { DARABONBA_PTR_SET_RVALUE(stateManagement_, stateManagement) };


      // toolCall Field Functions 
      bool hasToolCall() const { return this->toolCall_ != nullptr;};
      void deleteToolCall() { this->toolCall_ = nullptr;};
      inline const vector<RecognitionEvidence::ToolCall> & getToolCall() const { DARABONBA_PTR_GET_CONST(toolCall_, vector<RecognitionEvidence::ToolCall>) };
      inline vector<RecognitionEvidence::ToolCall> getToolCall() { DARABONBA_PTR_GET(toolCall_, vector<RecognitionEvidence::ToolCall>) };
      inline RecognitionEvidence& setToolCall(const vector<RecognitionEvidence::ToolCall> & toolCall) { DARABONBA_PTR_SET_VALUE(toolCall_, toolCall) };
      inline RecognitionEvidence& setToolCall(vector<RecognitionEvidence::ToolCall> && toolCall) { DARABONBA_PTR_SET_RVALUE(toolCall_, toolCall) };


    protected:
      // The array of evidence for explicit declarations of agent roles, capabilities, or usage methods. The declaration content itself does not constitute security certification.
      shared_ptr<vector<RecognitionEvidence::AgentDeclaration>> agentDeclaration_ {};
      // The array of static evidence related to autonomous task execution or agent loops. This does not indicate that actual execution was observed during this scan.
      shared_ptr<vector<RecognitionEvidence::AutonomousExecution>> autonomousExecution_ {};
      // The array of static evidence related to model clients, requests, or configurations. This does not indicate that model requests were actually sent.
      shared_ptr<vector<RecognitionEvidence::ModelCall>> modelCall_ {};
      // The array of static evidence related to sessions, memory, or state management. This does not prove actual data persistence or runtime behavior.
      shared_ptr<vector<RecognitionEvidence::StateManagement>> stateManagement_ {};
      // The array of static evidence related to tool declarations or code to invoke tools. This does not indicate that the tools were actually executed.
      shared_ptr<vector<RecognitionEvidence::ToolCall>> toolCall_ {};
    };

    class IdentityIdentifiers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IdentityIdentifiers& obj) { 
        DARABONBA_PTR_TO_JSON(desktop_manifest_name, desktopManifestName_);
        DARABONBA_PTR_TO_JSON(jetbrains_plugin_id, jetbrainsPluginId_);
        DARABONBA_PTR_TO_JSON(macos_bundle_id, macosBundleId_);
        DARABONBA_PTR_TO_JSON(npm_package, npmPackage_);
        DARABONBA_PTR_TO_JSON(pe_product_identity, peProductIdentity_);
        DARABONBA_PTR_TO_JSON(pypi_package, pypiPackage_);
        DARABONBA_PTR_TO_JSON(vscode_extension_id, vscodeExtensionId_);
        DARABONBA_PTR_TO_JSON(windows_appx_identity, windowsAppxIdentity_);
        DARABONBA_PTR_TO_JSON(windows_package_family_name, windowsPackageFamilyName_);
      };
      friend void from_json(const Darabonba::Json& j, IdentityIdentifiers& obj) { 
        DARABONBA_PTR_FROM_JSON(desktop_manifest_name, desktopManifestName_);
        DARABONBA_PTR_FROM_JSON(jetbrains_plugin_id, jetbrainsPluginId_);
        DARABONBA_PTR_FROM_JSON(macos_bundle_id, macosBundleId_);
        DARABONBA_PTR_FROM_JSON(npm_package, npmPackage_);
        DARABONBA_PTR_FROM_JSON(pe_product_identity, peProductIdentity_);
        DARABONBA_PTR_FROM_JSON(pypi_package, pypiPackage_);
        DARABONBA_PTR_FROM_JSON(vscode_extension_id, vscodeExtensionId_);
        DARABONBA_PTR_FROM_JSON(windows_appx_identity, windowsAppxIdentity_);
        DARABONBA_PTR_FROM_JSON(windows_package_family_name, windowsPackageFamilyName_);
      };
      IdentityIdentifiers() = default ;
      IdentityIdentifiers(const IdentityIdentifiers &) = default ;
      IdentityIdentifiers(IdentityIdentifiers &&) = default ;
      IdentityIdentifiers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IdentityIdentifiers() = default ;
      IdentityIdentifiers& operator=(const IdentityIdentifiers &) = default ;
      IdentityIdentifiers& operator=(IdentityIdentifiers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WindowsAppxIdentity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WindowsAppxIdentity& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(publisher, publisher_);
        };
        friend void from_json(const Darabonba::Json& j, WindowsAppxIdentity& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(publisher, publisher_);
        };
        WindowsAppxIdentity() = default ;
        WindowsAppxIdentity(const WindowsAppxIdentity &) = default ;
        WindowsAppxIdentity(WindowsAppxIdentity &&) = default ;
        WindowsAppxIdentity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WindowsAppxIdentity() = default ;
        WindowsAppxIdentity& operator=(const WindowsAppxIdentity &) = default ;
        WindowsAppxIdentity& operator=(WindowsAppxIdentity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->publisher_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline WindowsAppxIdentity& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // publisher Field Functions 
        bool hasPublisher() const { return this->publisher_ != nullptr;};
        void deletePublisher() { this->publisher_ = nullptr;};
        inline string getPublisher() const { DARABONBA_PTR_GET_DEFAULT(publisher_, "") };
        inline WindowsAppxIdentity& setPublisher(string publisher) { DARABONBA_PTR_SET_VALUE(publisher_, publisher) };


      protected:
        // The original package name of the Identity.Name in a Windows AppX/MSIX manifest.
        shared_ptr<string> name_ {};
        // The publisher string of the Identity.Publisher in a Windows AppX/MSIX manifest. This is not equivalent to the signature verification result.
        shared_ptr<string> publisher_ {};
      };

      class PeProductIdentity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PeProductIdentity& obj) { 
          DARABONBA_PTR_TO_JSON(company_name, companyName_);
          DARABONBA_PTR_TO_JSON(product_name, productName_);
        };
        friend void from_json(const Darabonba::Json& j, PeProductIdentity& obj) { 
          DARABONBA_PTR_FROM_JSON(company_name, companyName_);
          DARABONBA_PTR_FROM_JSON(product_name, productName_);
        };
        PeProductIdentity() = default ;
        PeProductIdentity(const PeProductIdentity &) = default ;
        PeProductIdentity(PeProductIdentity &&) = default ;
        PeProductIdentity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PeProductIdentity() = default ;
        PeProductIdentity& operator=(const PeProductIdentity &) = default ;
        PeProductIdentity& operator=(PeProductIdentity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->companyName_ == nullptr
        && this->productName_ == nullptr; };
        // companyName Field Functions 
        bool hasCompanyName() const { return this->companyName_ != nullptr;};
        void deleteCompanyName() { this->companyName_ = nullptr;};
        inline string getCompanyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
        inline PeProductIdentity& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


        // productName Field Functions 
        bool hasProductName() const { return this->productName_ != nullptr;};
        void deleteProductName() { this->productName_ = nullptr;};
        inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
        inline PeProductIdentity& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      protected:
        // The CompanyName field in a Windows PE version resource. This is not a certified vendor identity.
        shared_ptr<string> companyName_ {};
        // The ProductName field in a Windows PE version resource.
        shared_ptr<string> productName_ {};
      };

      virtual bool empty() const override { return this->desktopManifestName_ == nullptr
        && this->jetbrainsPluginId_ == nullptr && this->macosBundleId_ == nullptr && this->npmPackage_ == nullptr && this->peProductIdentity_ == nullptr && this->pypiPackage_ == nullptr
        && this->vscodeExtensionId_ == nullptr && this->windowsAppxIdentity_ == nullptr && this->windowsPackageFamilyName_ == nullptr; };
      // desktopManifestName Field Functions 
      bool hasDesktopManifestName() const { return this->desktopManifestName_ != nullptr;};
      void deleteDesktopManifestName() { this->desktopManifestName_ = nullptr;};
      inline const vector<string> & getDesktopManifestName() const { DARABONBA_PTR_GET_CONST(desktopManifestName_, vector<string>) };
      inline vector<string> getDesktopManifestName() { DARABONBA_PTR_GET(desktopManifestName_, vector<string>) };
      inline IdentityIdentifiers& setDesktopManifestName(const vector<string> & desktopManifestName) { DARABONBA_PTR_SET_VALUE(desktopManifestName_, desktopManifestName) };
      inline IdentityIdentifiers& setDesktopManifestName(vector<string> && desktopManifestName) { DARABONBA_PTR_SET_RVALUE(desktopManifestName_, desktopManifestName) };


      // jetbrainsPluginId Field Functions 
      bool hasJetbrainsPluginId() const { return this->jetbrainsPluginId_ != nullptr;};
      void deleteJetbrainsPluginId() { this->jetbrainsPluginId_ = nullptr;};
      inline const vector<string> & getJetbrainsPluginId() const { DARABONBA_PTR_GET_CONST(jetbrainsPluginId_, vector<string>) };
      inline vector<string> getJetbrainsPluginId() { DARABONBA_PTR_GET(jetbrainsPluginId_, vector<string>) };
      inline IdentityIdentifiers& setJetbrainsPluginId(const vector<string> & jetbrainsPluginId) { DARABONBA_PTR_SET_VALUE(jetbrainsPluginId_, jetbrainsPluginId) };
      inline IdentityIdentifiers& setJetbrainsPluginId(vector<string> && jetbrainsPluginId) { DARABONBA_PTR_SET_RVALUE(jetbrainsPluginId_, jetbrainsPluginId) };


      // macosBundleId Field Functions 
      bool hasMacosBundleId() const { return this->macosBundleId_ != nullptr;};
      void deleteMacosBundleId() { this->macosBundleId_ = nullptr;};
      inline const vector<string> & getMacosBundleId() const { DARABONBA_PTR_GET_CONST(macosBundleId_, vector<string>) };
      inline vector<string> getMacosBundleId() { DARABONBA_PTR_GET(macosBundleId_, vector<string>) };
      inline IdentityIdentifiers& setMacosBundleId(const vector<string> & macosBundleId) { DARABONBA_PTR_SET_VALUE(macosBundleId_, macosBundleId) };
      inline IdentityIdentifiers& setMacosBundleId(vector<string> && macosBundleId) { DARABONBA_PTR_SET_RVALUE(macosBundleId_, macosBundleId) };


      // npmPackage Field Functions 
      bool hasNpmPackage() const { return this->npmPackage_ != nullptr;};
      void deleteNpmPackage() { this->npmPackage_ = nullptr;};
      inline const vector<string> & getNpmPackage() const { DARABONBA_PTR_GET_CONST(npmPackage_, vector<string>) };
      inline vector<string> getNpmPackage() { DARABONBA_PTR_GET(npmPackage_, vector<string>) };
      inline IdentityIdentifiers& setNpmPackage(const vector<string> & npmPackage) { DARABONBA_PTR_SET_VALUE(npmPackage_, npmPackage) };
      inline IdentityIdentifiers& setNpmPackage(vector<string> && npmPackage) { DARABONBA_PTR_SET_RVALUE(npmPackage_, npmPackage) };


      // peProductIdentity Field Functions 
      bool hasPeProductIdentity() const { return this->peProductIdentity_ != nullptr;};
      void deletePeProductIdentity() { this->peProductIdentity_ = nullptr;};
      inline const vector<IdentityIdentifiers::PeProductIdentity> & getPeProductIdentity() const { DARABONBA_PTR_GET_CONST(peProductIdentity_, vector<IdentityIdentifiers::PeProductIdentity>) };
      inline vector<IdentityIdentifiers::PeProductIdentity> getPeProductIdentity() { DARABONBA_PTR_GET(peProductIdentity_, vector<IdentityIdentifiers::PeProductIdentity>) };
      inline IdentityIdentifiers& setPeProductIdentity(const vector<IdentityIdentifiers::PeProductIdentity> & peProductIdentity) { DARABONBA_PTR_SET_VALUE(peProductIdentity_, peProductIdentity) };
      inline IdentityIdentifiers& setPeProductIdentity(vector<IdentityIdentifiers::PeProductIdentity> && peProductIdentity) { DARABONBA_PTR_SET_RVALUE(peProductIdentity_, peProductIdentity) };


      // pypiPackage Field Functions 
      bool hasPypiPackage() const { return this->pypiPackage_ != nullptr;};
      void deletePypiPackage() { this->pypiPackage_ = nullptr;};
      inline const vector<string> & getPypiPackage() const { DARABONBA_PTR_GET_CONST(pypiPackage_, vector<string>) };
      inline vector<string> getPypiPackage() { DARABONBA_PTR_GET(pypiPackage_, vector<string>) };
      inline IdentityIdentifiers& setPypiPackage(const vector<string> & pypiPackage) { DARABONBA_PTR_SET_VALUE(pypiPackage_, pypiPackage) };
      inline IdentityIdentifiers& setPypiPackage(vector<string> && pypiPackage) { DARABONBA_PTR_SET_RVALUE(pypiPackage_, pypiPackage) };


      // vscodeExtensionId Field Functions 
      bool hasVscodeExtensionId() const { return this->vscodeExtensionId_ != nullptr;};
      void deleteVscodeExtensionId() { this->vscodeExtensionId_ = nullptr;};
      inline const vector<string> & getVscodeExtensionId() const { DARABONBA_PTR_GET_CONST(vscodeExtensionId_, vector<string>) };
      inline vector<string> getVscodeExtensionId() { DARABONBA_PTR_GET(vscodeExtensionId_, vector<string>) };
      inline IdentityIdentifiers& setVscodeExtensionId(const vector<string> & vscodeExtensionId) { DARABONBA_PTR_SET_VALUE(vscodeExtensionId_, vscodeExtensionId) };
      inline IdentityIdentifiers& setVscodeExtensionId(vector<string> && vscodeExtensionId) { DARABONBA_PTR_SET_RVALUE(vscodeExtensionId_, vscodeExtensionId) };


      // windowsAppxIdentity Field Functions 
      bool hasWindowsAppxIdentity() const { return this->windowsAppxIdentity_ != nullptr;};
      void deleteWindowsAppxIdentity() { this->windowsAppxIdentity_ = nullptr;};
      inline const vector<IdentityIdentifiers::WindowsAppxIdentity> & getWindowsAppxIdentity() const { DARABONBA_PTR_GET_CONST(windowsAppxIdentity_, vector<IdentityIdentifiers::WindowsAppxIdentity>) };
      inline vector<IdentityIdentifiers::WindowsAppxIdentity> getWindowsAppxIdentity() { DARABONBA_PTR_GET(windowsAppxIdentity_, vector<IdentityIdentifiers::WindowsAppxIdentity>) };
      inline IdentityIdentifiers& setWindowsAppxIdentity(const vector<IdentityIdentifiers::WindowsAppxIdentity> & windowsAppxIdentity) { DARABONBA_PTR_SET_VALUE(windowsAppxIdentity_, windowsAppxIdentity) };
      inline IdentityIdentifiers& setWindowsAppxIdentity(vector<IdentityIdentifiers::WindowsAppxIdentity> && windowsAppxIdentity) { DARABONBA_PTR_SET_RVALUE(windowsAppxIdentity_, windowsAppxIdentity) };


      // windowsPackageFamilyName Field Functions 
      bool hasWindowsPackageFamilyName() const { return this->windowsPackageFamilyName_ != nullptr;};
      void deleteWindowsPackageFamilyName() { this->windowsPackageFamilyName_ = nullptr;};
      inline const vector<string> & getWindowsPackageFamilyName() const { DARABONBA_PTR_GET_CONST(windowsPackageFamilyName_, vector<string>) };
      inline vector<string> getWindowsPackageFamilyName() { DARABONBA_PTR_GET(windowsPackageFamilyName_, vector<string>) };
      inline IdentityIdentifiers& setWindowsPackageFamilyName(const vector<string> & windowsPackageFamilyName) { DARABONBA_PTR_SET_VALUE(windowsPackageFamilyName_, windowsPackageFamilyName) };
      inline IdentityIdentifiers& setWindowsPackageFamilyName(vector<string> && windowsPackageFamilyName) { DARABONBA_PTR_SET_RVALUE(windowsPackageFamilyName_, windowsPackageFamilyName) };


    protected:
      // The array of application names declared in desktop application manifests.
      shared_ptr<vector<string>> desktopManifestName_ {};
      // The array of plugin IDs declared in JetBrains plugin manifests.
      shared_ptr<vector<string>> jetbrainsPluginId_ {};
      // The array of macOS application bundle identifiers. These describe collected product identity clues and do not indicate that signatures are verified.
      shared_ptr<vector<string>> macosBundleId_ {};
      // The array of npm package names. Scoped packages retain the @scope/name format.
      shared_ptr<vector<string>> npmPackage_ {};
      // The array of product name and company name combinations in Windows PE version resources. These are not file hashes or verified signature identities.
      shared_ptr<vector<IdentityIdentifiers::PeProductIdentity>> peProductIdentity_ {};
      // The array of Python package distribution names. These are used for product identity identification and are not a list of import module names.
      shared_ptr<vector<string>> pypiPackage_ {};
      // The array of VS Code extension identifiers. Each is typically the publisher name and extension name connected by a dot.
      shared_ptr<vector<string>> vscodeExtensionId_ {};
      // The array of Windows AppX/MSIX manifest identities. Each item provides both the package name and publisher. This does not indicate that the publisher signature is verified.
      shared_ptr<vector<IdentityIdentifiers::WindowsAppxIdentity>> windowsAppxIdentity_ {};
      // The array of Windows application package family names. Each includes the package name and publisher identifier suffix and is not the application installation path.
      shared_ptr<vector<string>> windowsPackageFamilyName_ {};
    };

    virtual bool empty() const override { return this->accessType_ == nullptr
        && this->agentId_ == nullptr && this->configPath_ == nullptr && this->description_ == nullptr && this->endpoint_ == nullptr && this->endpointType_ == nullptr
        && this->firstSeen_ == nullptr && this->form_ == nullptr && this->id_ == nullptr && this->identityIdentifiers_ == nullptr && this->installPath_ == nullptr
        && this->instanceLocalId_ == nullptr && this->lastCheckTime_ == nullptr && this->lastDetectTaskId_ == nullptr && this->lastSeen_ == nullptr && this->matchedRules_ == nullptr
        && this->mcpId_ == nullptr && this->productCode_ == nullptr && this->providerId_ == nullptr && this->providerName_ == nullptr && this->providerNameCn_ == nullptr
        && this->providerNameEn_ == nullptr && this->providerType_ == nullptr && this->recognitionEvidence_ == nullptr && this->recognitionStatus_ == nullptr && this->riskInfo_ == nullptr
        && this->riskLevel_ == nullptr && this->scanId_ == nullptr && this->sourceType_ == nullptr && this->standardSha256_ == nullptr && this->transport_ == nullptr
        && this->vendor_ == nullptr && this->version_ == nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline TypedAIAsset& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline TypedAIAsset& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // configPath Field Functions 
    bool hasConfigPath() const { return this->configPath_ != nullptr;};
    void deleteConfigPath() { this->configPath_ = nullptr;};
    inline string getConfigPath() const { DARABONBA_PTR_GET_DEFAULT(configPath_, "") };
    inline TypedAIAsset& setConfigPath(string configPath) { DARABONBA_PTR_SET_VALUE(configPath_, configPath) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline TypedAIAsset& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline TypedAIAsset& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline TypedAIAsset& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // firstSeen Field Functions 
    bool hasFirstSeen() const { return this->firstSeen_ != nullptr;};
    void deleteFirstSeen() { this->firstSeen_ = nullptr;};
    inline string getFirstSeen() const { DARABONBA_PTR_GET_DEFAULT(firstSeen_, "") };
    inline TypedAIAsset& setFirstSeen(string firstSeen) { DARABONBA_PTR_SET_VALUE(firstSeen_, firstSeen) };


    // form Field Functions 
    bool hasForm() const { return this->form_ != nullptr;};
    void deleteForm() { this->form_ = nullptr;};
    inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
    inline TypedAIAsset& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline TypedAIAsset& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // identityIdentifiers Field Functions 
    bool hasIdentityIdentifiers() const { return this->identityIdentifiers_ != nullptr;};
    void deleteIdentityIdentifiers() { this->identityIdentifiers_ = nullptr;};
    inline const TypedAIAsset::IdentityIdentifiers & getIdentityIdentifiers() const { DARABONBA_PTR_GET_CONST(identityIdentifiers_, TypedAIAsset::IdentityIdentifiers) };
    inline TypedAIAsset::IdentityIdentifiers getIdentityIdentifiers() { DARABONBA_PTR_GET(identityIdentifiers_, TypedAIAsset::IdentityIdentifiers) };
    inline TypedAIAsset& setIdentityIdentifiers(const TypedAIAsset::IdentityIdentifiers & identityIdentifiers) { DARABONBA_PTR_SET_VALUE(identityIdentifiers_, identityIdentifiers) };
    inline TypedAIAsset& setIdentityIdentifiers(TypedAIAsset::IdentityIdentifiers && identityIdentifiers) { DARABONBA_PTR_SET_RVALUE(identityIdentifiers_, identityIdentifiers) };


    // installPath Field Functions 
    bool hasInstallPath() const { return this->installPath_ != nullptr;};
    void deleteInstallPath() { this->installPath_ = nullptr;};
    inline string getInstallPath() const { DARABONBA_PTR_GET_DEFAULT(installPath_, "") };
    inline TypedAIAsset& setInstallPath(string installPath) { DARABONBA_PTR_SET_VALUE(installPath_, installPath) };


    // instanceLocalId Field Functions 
    bool hasInstanceLocalId() const { return this->instanceLocalId_ != nullptr;};
    void deleteInstanceLocalId() { this->instanceLocalId_ = nullptr;};
    inline string getInstanceLocalId() const { DARABONBA_PTR_GET_DEFAULT(instanceLocalId_, "") };
    inline TypedAIAsset& setInstanceLocalId(string instanceLocalId) { DARABONBA_PTR_SET_VALUE(instanceLocalId_, instanceLocalId) };


    // lastCheckTime Field Functions 
    bool hasLastCheckTime() const { return this->lastCheckTime_ != nullptr;};
    void deleteLastCheckTime() { this->lastCheckTime_ = nullptr;};
    inline string getLastCheckTime() const { DARABONBA_PTR_GET_DEFAULT(lastCheckTime_, "") };
    inline TypedAIAsset& setLastCheckTime(string lastCheckTime) { DARABONBA_PTR_SET_VALUE(lastCheckTime_, lastCheckTime) };


    // lastDetectTaskId Field Functions 
    bool hasLastDetectTaskId() const { return this->lastDetectTaskId_ != nullptr;};
    void deleteLastDetectTaskId() { this->lastDetectTaskId_ = nullptr;};
    inline string getLastDetectTaskId() const { DARABONBA_PTR_GET_DEFAULT(lastDetectTaskId_, "") };
    inline TypedAIAsset& setLastDetectTaskId(string lastDetectTaskId) { DARABONBA_PTR_SET_VALUE(lastDetectTaskId_, lastDetectTaskId) };


    // lastSeen Field Functions 
    bool hasLastSeen() const { return this->lastSeen_ != nullptr;};
    void deleteLastSeen() { this->lastSeen_ = nullptr;};
    inline string getLastSeen() const { DARABONBA_PTR_GET_DEFAULT(lastSeen_, "") };
    inline TypedAIAsset& setLastSeen(string lastSeen) { DARABONBA_PTR_SET_VALUE(lastSeen_, lastSeen) };


    // matchedRules Field Functions 
    bool hasMatchedRules() const { return this->matchedRules_ != nullptr;};
    void deleteMatchedRules() { this->matchedRules_ = nullptr;};
    inline const vector<string> & getMatchedRules() const { DARABONBA_PTR_GET_CONST(matchedRules_, vector<string>) };
    inline vector<string> getMatchedRules() { DARABONBA_PTR_GET(matchedRules_, vector<string>) };
    inline TypedAIAsset& setMatchedRules(const vector<string> & matchedRules) { DARABONBA_PTR_SET_VALUE(matchedRules_, matchedRules) };
    inline TypedAIAsset& setMatchedRules(vector<string> && matchedRules) { DARABONBA_PTR_SET_RVALUE(matchedRules_, matchedRules) };


    // mcpId Field Functions 
    bool hasMcpId() const { return this->mcpId_ != nullptr;};
    void deleteMcpId() { this->mcpId_ = nullptr;};
    inline string getMcpId() const { DARABONBA_PTR_GET_DEFAULT(mcpId_, "") };
    inline TypedAIAsset& setMcpId(string mcpId) { DARABONBA_PTR_SET_VALUE(mcpId_, mcpId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline TypedAIAsset& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // providerId Field Functions 
    bool hasProviderId() const { return this->providerId_ != nullptr;};
    void deleteProviderId() { this->providerId_ = nullptr;};
    inline string getProviderId() const { DARABONBA_PTR_GET_DEFAULT(providerId_, "") };
    inline TypedAIAsset& setProviderId(string providerId) { DARABONBA_PTR_SET_VALUE(providerId_, providerId) };


    // providerName Field Functions 
    bool hasProviderName() const { return this->providerName_ != nullptr;};
    void deleteProviderName() { this->providerName_ = nullptr;};
    inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
    inline TypedAIAsset& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


    // providerNameCn Field Functions 
    bool hasProviderNameCn() const { return this->providerNameCn_ != nullptr;};
    void deleteProviderNameCn() { this->providerNameCn_ = nullptr;};
    inline string getProviderNameCn() const { DARABONBA_PTR_GET_DEFAULT(providerNameCn_, "") };
    inline TypedAIAsset& setProviderNameCn(string providerNameCn) { DARABONBA_PTR_SET_VALUE(providerNameCn_, providerNameCn) };


    // providerNameEn Field Functions 
    bool hasProviderNameEn() const { return this->providerNameEn_ != nullptr;};
    void deleteProviderNameEn() { this->providerNameEn_ = nullptr;};
    inline string getProviderNameEn() const { DARABONBA_PTR_GET_DEFAULT(providerNameEn_, "") };
    inline TypedAIAsset& setProviderNameEn(string providerNameEn) { DARABONBA_PTR_SET_VALUE(providerNameEn_, providerNameEn) };


    // providerType Field Functions 
    bool hasProviderType() const { return this->providerType_ != nullptr;};
    void deleteProviderType() { this->providerType_ = nullptr;};
    inline string getProviderType() const { DARABONBA_PTR_GET_DEFAULT(providerType_, "") };
    inline TypedAIAsset& setProviderType(string providerType) { DARABONBA_PTR_SET_VALUE(providerType_, providerType) };


    // recognitionEvidence Field Functions 
    bool hasRecognitionEvidence() const { return this->recognitionEvidence_ != nullptr;};
    void deleteRecognitionEvidence() { this->recognitionEvidence_ = nullptr;};
    inline const TypedAIAsset::RecognitionEvidence & getRecognitionEvidence() const { DARABONBA_PTR_GET_CONST(recognitionEvidence_, TypedAIAsset::RecognitionEvidence) };
    inline TypedAIAsset::RecognitionEvidence getRecognitionEvidence() { DARABONBA_PTR_GET(recognitionEvidence_, TypedAIAsset::RecognitionEvidence) };
    inline TypedAIAsset& setRecognitionEvidence(const TypedAIAsset::RecognitionEvidence & recognitionEvidence) { DARABONBA_PTR_SET_VALUE(recognitionEvidence_, recognitionEvidence) };
    inline TypedAIAsset& setRecognitionEvidence(TypedAIAsset::RecognitionEvidence && recognitionEvidence) { DARABONBA_PTR_SET_RVALUE(recognitionEvidence_, recognitionEvidence) };


    // recognitionStatus Field Functions 
    bool hasRecognitionStatus() const { return this->recognitionStatus_ != nullptr;};
    void deleteRecognitionStatus() { this->recognitionStatus_ = nullptr;};
    inline string getRecognitionStatus() const { DARABONBA_PTR_GET_DEFAULT(recognitionStatus_, "") };
    inline TypedAIAsset& setRecognitionStatus(string recognitionStatus) { DARABONBA_PTR_SET_VALUE(recognitionStatus_, recognitionStatus) };


    // riskInfo Field Functions 
    bool hasRiskInfo() const { return this->riskInfo_ != nullptr;};
    void deleteRiskInfo() { this->riskInfo_ = nullptr;};
    inline const TypedAIAsset::RiskInfo & getRiskInfo() const { DARABONBA_PTR_GET_CONST(riskInfo_, TypedAIAsset::RiskInfo) };
    inline TypedAIAsset::RiskInfo getRiskInfo() { DARABONBA_PTR_GET(riskInfo_, TypedAIAsset::RiskInfo) };
    inline TypedAIAsset& setRiskInfo(const TypedAIAsset::RiskInfo & riskInfo) { DARABONBA_PTR_SET_VALUE(riskInfo_, riskInfo) };
    inline TypedAIAsset& setRiskInfo(TypedAIAsset::RiskInfo && riskInfo) { DARABONBA_PTR_SET_RVALUE(riskInfo_, riskInfo) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline TypedAIAsset& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // scanId Field Functions 
    bool hasScanId() const { return this->scanId_ != nullptr;};
    void deleteScanId() { this->scanId_ = nullptr;};
    inline string getScanId() const { DARABONBA_PTR_GET_DEFAULT(scanId_, "") };
    inline TypedAIAsset& setScanId(string scanId) { DARABONBA_PTR_SET_VALUE(scanId_, scanId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline TypedAIAsset& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // standardSha256 Field Functions 
    bool hasStandardSha256() const { return this->standardSha256_ != nullptr;};
    void deleteStandardSha256() { this->standardSha256_ = nullptr;};
    inline string getStandardSha256() const { DARABONBA_PTR_GET_DEFAULT(standardSha256_, "") };
    inline TypedAIAsset& setStandardSha256(string standardSha256) { DARABONBA_PTR_SET_VALUE(standardSha256_, standardSha256) };


    // transport Field Functions 
    bool hasTransport() const { return this->transport_ != nullptr;};
    void deleteTransport() { this->transport_ = nullptr;};
    inline string getTransport() const { DARABONBA_PTR_GET_DEFAULT(transport_, "") };
    inline TypedAIAsset& setTransport(string transport) { DARABONBA_PTR_SET_VALUE(transport_, transport) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline TypedAIAsset& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline TypedAIAsset& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The access method for the MCP. Valid values: local_process for local processes, remote_service for remote services, and unknown for undetermined methods.
    shared_ptr<string> accessType_ {};
    // The database primary key of the agent instance associated with the leaf asset, returned as a decimal numeric string. The value can be 0 when no agent is associated, and it can also be 0 in the details of the agent itself. This field is not returned in aggregated lists.
    shared_ptr<string> agentId_ {};
    // The configuration path where the LLM, MCP, or tool declaration is located. This is not a skill package identifier. It is returned in instance details but not in aggregated lists.
    shared_ptr<string> configPath_ {};
    // The description text collected for an MCP, tool, or skill. This is not returned if missing. Aggregated lists only return descriptions that are consistent within the group.
    shared_ptr<string> description_ {};
    // The configured service endpoint for an LLM model service or remote MCP. Local stdio MCPs may not have this field. Its presence does not indicate a successful connection or actual invocation.
    shared_ptr<string> endpoint_ {};
    // The classification of the LLM service endpoint. Valid values: official for official services, third_party for third-party services, and unknown for undetermined services. This classification does not represent a security detection conclusion.
    shared_ptr<string> endpointType_ {};
    // The time when the asset instance was first observed. The value is a database datetime string that may include six decimal places for seconds, without a unified time zone indicator. This field is not returned in aggregated lists.
    shared_ptr<string> firstSeen_ {};
    // The installation form of the agent, such as desktop_app, ide_extension, cli, or sdk. This is not the endpoint operating system such as Windows or macOS. The specific value is subject to the instance recognition result.
    shared_ptr<string> form_ {};
    // The database primary key of the table where the asset instance is located, returned as a decimal numeric string to prevent precision loss of large integers. This is not the asset aggregation key AssetKey, and this instance field is not returned in aggregated lists.
    shared_ptr<string> id_ {};
    // The collected product identity clues and their categorization by identifier type. These are used for auxiliary identification and do not indicate that signatures, publishers, or file contents have been authenticated through security authentication.
    shared_ptr<TypedAIAsset::IdentityIdentifiers> identityIdentifiers_ {};
    // The installation path of the agent instance. This field is used only for instance details and is not returned in aggregated lists. It is not applicable to other asset types.
    shared_ptr<string> installPath_ {};
    // The instance identity installed or declared within the endpoint, calculated by the script based on the asset type, ownership, and location. The identity scope must still include the tenant and endpoint, and it cannot be used as a globally unique ID across endpoints. This field is not returned in aggregation lists.
    shared_ptr<string> instanceLocalId_ {};
    // The time of the last successful detection for the current skill content. This field is empty or not returned if no saved successful detection record exists. The value is a database datetime string without a unified time zone indicator. This field is not returned in aggregated lists.
    shared_ptr<string> lastCheckTime_ {};
    // The database ID of the latest detection task associated with the current skill content, returned as a decimal numeric string. The value can be 0 if no task is associated. The presence of a task ID does not indicate that the detection is complete. This field is not returned in aggregated lists.
    shared_ptr<string> lastDetectTaskId_ {};
    // The time when the asset instance was last actually observed. The value is a database datetime string that may include six decimal places for seconds. This is not the page query time. This field is not returned in aggregated lists.
    shared_ptr<string> lastSeen_ {};
    // The array of static recognition basis tags matched by the agent, which can include model_call, tool_call, autonomous_execution, state_management, and agent_declaration. This does not indicate that the agent was actually executed or passed security certification.
    shared_ptr<vector<string>> matchedRules_ {};
    // The database primary key of the MCP instance associated with the tool, returned as a decimal numeric string. The value can be 0 when no MCP is associated, and this field is not applicable to other asset types. This field is not returned in aggregated lists.
    shared_ptr<string> mcpId_ {};
    // The product code of the agent. The specific value is subject to the product catalog in the recognition rules. This field is not returned when it is not applicable, unidentified, or inconsistent across aggregated attributes.
    shared_ptr<string> productCode_ {};
    // The provider identifier matched based on the service endpoint and provider directory. This may not be returned if no match is found and is not the product code of the associated agent.
    shared_ptr<string> providerId_ {};
    // The provider display name of the tool. This is generated from the associated MCP, agent, or declaration source and is not a proof of security or trust.
    shared_ptr<string> providerName_ {};
    // The Chinese display name of the service provider. The directory name is prioritized. The name parsed from the service endpoint may be used if no match is found. The presence of this field does not indicate that the service provider is identified.
    shared_ptr<string> providerNameCn_ {};
    // The English display name of the service provider. The directory name is prioritized. The name parsed from the service endpoint may be used if no match is found. The presence of this field does not indicate that the service provider is identified.
    shared_ptr<string> providerNameEn_ {};
    // The declared provider type of the tool. Valid values: mcp, agent, software, file, or unknown. This describes the declaration source and does not represent the actual caller, authorization status, or vendor identity.
    shared_ptr<string> providerType_ {};
    // The static recognition basis of the agent, which lists the source paths and evidence text grouped by recognition tags. This is not a runtime audit record, and instance-level evidence is not returned in aggregated lists.
    shared_ptr<TypedAIAsset::RecognitionEvidence> recognitionEvidence_ {};
    // The product recognition status of the agent. identified indicates recognized, unidentified indicates pending recognition, and conflict indicates a recognition conflict. This status does not indicate whether the asset is secure.
    shared_ptr<string> recognitionStatus_ {};
    // The counts of high, medium, and low-risk items saved for the current skill content. This may be empty or not returned when no detection results are available. A missing value cannot be interpreted as a zero risk count or an indication of security.
    shared_ptr<TypedAIAsset::RiskInfo> riskInfo_ {};
    // The final risk level saved for the current skill content. This is not returned when no detection conclusion is available. The value high is provided only as a format example and does not serve as a new enumeration constraint.
    shared_ptr<string> riskLevel_ {};
    // The scan batch identifier of the most recent scan where the instance was actually observed. This is not a database primary key or asset content hash. This field is not returned in aggregated lists.
    shared_ptr<string> scanId_ {};
    // The source channel classification of the skill. The default value for current collection and storage is unknown. The unknown value cannot be inferred as an official or community source.
    shared_ptr<string> sourceType_ {};
    // The SHA-256 hash of the complete skill package bytes. The format is a 64-character lowercase hexadecimal string without the sha256: prefix. The current script uses the skill-canonical-zip-v1 specification for compression. This is not equivalent to the installation instance ID and does not indicate that the package has been inspected or is secure.
    shared_ptr<string> standardSha256_ {};
    // The transport protocol declared in the MCP configuration. The collected value is retained as-is, such as stdio, sse, or streamable_http. This cannot be used to determine whether the service is running or has been invoked.
    shared_ptr<string> transport_ {};
    // The vendor code for the collected and stored skill. The current default value is 1000. This cannot be used to infer a specific vendor or security status.
    shared_ptr<int32_t> vendor_ {};
    // The collected installation version of the agent. This field is not returned when the version is not collected. In aggregated lists, this field is returned only when the versions of all instances in the group are identical and not empty.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
