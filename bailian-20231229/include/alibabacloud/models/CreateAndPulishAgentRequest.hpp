// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANDPULISHAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEANDPULISHAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class CreateAndPulishAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAndPulishAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(applicationConfig, applicationConfig_);
      DARABONBA_PTR_TO_JSON(instructions, instructions_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(sampleLibrary, sampleLibrary_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAndPulishAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(applicationConfig, applicationConfig_);
      DARABONBA_PTR_FROM_JSON(instructions, instructions_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(sampleLibrary, sampleLibrary_);
    };
    CreateAndPulishAgentRequest() = default ;
    CreateAndPulishAgentRequest(const CreateAndPulishAgentRequest &) = default ;
    CreateAndPulishAgentRequest(CreateAndPulishAgentRequest &&) = default ;
    CreateAndPulishAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAndPulishAgentRequest() = default ;
    CreateAndPulishAgentRequest& operator=(const CreateAndPulishAgentRequest &) = default ;
    CreateAndPulishAgentRequest& operator=(CreateAndPulishAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SampleLibrary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SampleLibrary& obj) { 
        DARABONBA_PTR_TO_JSON(enableSample, enableSample_);
        DARABONBA_PTR_TO_JSON(sampleLibraryIdList, sampleLibraryIdList_);
        DARABONBA_PTR_TO_JSON(topK, topK_);
      };
      friend void from_json(const Darabonba::Json& j, SampleLibrary& obj) { 
        DARABONBA_PTR_FROM_JSON(enableSample, enableSample_);
        DARABONBA_PTR_FROM_JSON(sampleLibraryIdList, sampleLibraryIdList_);
        DARABONBA_PTR_FROM_JSON(topK, topK_);
      };
      SampleLibrary() = default ;
      SampleLibrary(const SampleLibrary &) = default ;
      SampleLibrary(SampleLibrary &&) = default ;
      SampleLibrary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SampleLibrary() = default ;
      SampleLibrary& operator=(const SampleLibrary &) = default ;
      SampleLibrary& operator=(SampleLibrary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableSample_ == nullptr
        && this->sampleLibraryIdList_ == nullptr && this->topK_ == nullptr; };
      // enableSample Field Functions 
      bool hasEnableSample() const { return this->enableSample_ != nullptr;};
      void deleteEnableSample() { this->enableSample_ = nullptr;};
      inline bool getEnableSample() const { DARABONBA_PTR_GET_DEFAULT(enableSample_, false) };
      inline SampleLibrary& setEnableSample(bool enableSample) { DARABONBA_PTR_SET_VALUE(enableSample_, enableSample) };


      // sampleLibraryIdList Field Functions 
      bool hasSampleLibraryIdList() const { return this->sampleLibraryIdList_ != nullptr;};
      void deleteSampleLibraryIdList() { this->sampleLibraryIdList_ = nullptr;};
      inline const vector<string> & getSampleLibraryIdList() const { DARABONBA_PTR_GET_CONST(sampleLibraryIdList_, vector<string>) };
      inline vector<string> getSampleLibraryIdList() { DARABONBA_PTR_GET(sampleLibraryIdList_, vector<string>) };
      inline SampleLibrary& setSampleLibraryIdList(const vector<string> & sampleLibraryIdList) { DARABONBA_PTR_SET_VALUE(sampleLibraryIdList_, sampleLibraryIdList) };
      inline SampleLibrary& setSampleLibraryIdList(vector<string> && sampleLibraryIdList) { DARABONBA_PTR_SET_RVALUE(sampleLibraryIdList_, sampleLibraryIdList) };


      // topK Field Functions 
      bool hasTopK() const { return this->topK_ != nullptr;};
      void deleteTopK() { this->topK_ = nullptr;};
      inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
      inline SampleLibrary& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    protected:
      shared_ptr<bool> enableSample_ {};
      shared_ptr<vector<string>> sampleLibraryIdList_ {};
      shared_ptr<int32_t> topK_ {};
    };

    class ApplicationConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationConfig& obj) { 
        DARABONBA_PTR_TO_JSON(historyConfig, historyConfig_);
        DARABONBA_PTR_TO_JSON(longTermMemory, longTermMemory_);
        DARABONBA_PTR_TO_JSON(parameters, parameters_);
        DARABONBA_PTR_TO_JSON(ragConfig, ragConfig_);
        DARABONBA_PTR_TO_JSON(securityConfig, securityConfig_);
        DARABONBA_PTR_TO_JSON(tools, tools_);
        DARABONBA_PTR_TO_JSON(workFlows, workFlows_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(historyConfig, historyConfig_);
        DARABONBA_PTR_FROM_JSON(longTermMemory, longTermMemory_);
        DARABONBA_PTR_FROM_JSON(parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(ragConfig, ragConfig_);
        DARABONBA_PTR_FROM_JSON(securityConfig, securityConfig_);
        DARABONBA_PTR_FROM_JSON(tools, tools_);
        DARABONBA_PTR_FROM_JSON(workFlows, workFlows_);
      };
      ApplicationConfig() = default ;
      ApplicationConfig(const ApplicationConfig &) = default ;
      ApplicationConfig(ApplicationConfig &&) = default ;
      ApplicationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationConfig() = default ;
      ApplicationConfig& operator=(const ApplicationConfig &) = default ;
      ApplicationConfig& operator=(ApplicationConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WorkFlows : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WorkFlows& obj) { 
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, WorkFlows& obj) { 
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        WorkFlows() = default ;
        WorkFlows(const WorkFlows &) = default ;
        WorkFlows(WorkFlows &&) = default ;
        WorkFlows(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WorkFlows() = default ;
        WorkFlows& operator=(const WorkFlows &) = default ;
        WorkFlows& operator=(WorkFlows &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->type_ == nullptr; };
        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline WorkFlows& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> type_ {};
      };

      class Tools : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tools& obj) { 
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Tools& obj) { 
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Tools() = default ;
        Tools(const Tools &) = default ;
        Tools(Tools &&) = default ;
        Tools(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tools() = default ;
        Tools& operator=(const Tools &) = default ;
        Tools& operator=(Tools &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->type_ == nullptr; };
        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Tools& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> type_ {};
      };

      class SecurityConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SecurityConfig& obj) { 
          DARABONBA_PTR_TO_JSON(processingStrategy, processingStrategy_);
        };
        friend void from_json(const Darabonba::Json& j, SecurityConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(processingStrategy, processingStrategy_);
        };
        SecurityConfig() = default ;
        SecurityConfig(const SecurityConfig &) = default ;
        SecurityConfig(SecurityConfig &&) = default ;
        SecurityConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SecurityConfig() = default ;
        SecurityConfig& operator=(const SecurityConfig &) = default ;
        SecurityConfig& operator=(SecurityConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->processingStrategy_ == nullptr; };
        // processingStrategy Field Functions 
        bool hasProcessingStrategy() const { return this->processingStrategy_ != nullptr;};
        void deleteProcessingStrategy() { this->processingStrategy_ = nullptr;};
        inline string getProcessingStrategy() const { DARABONBA_PTR_GET_DEFAULT(processingStrategy_, "") };
        inline SecurityConfig& setProcessingStrategy(string processingStrategy) { DARABONBA_PTR_SET_VALUE(processingStrategy_, processingStrategy) };


      protected:
        shared_ptr<string> processingStrategy_ {};
      };

      class RagConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RagConfig& obj) { 
          DARABONBA_PTR_TO_JSON(answerScope, answerScope_);
          DARABONBA_PTR_TO_JSON(enableCitation, enableCitation_);
          DARABONBA_PTR_TO_JSON(enableSearch, enableSearch_);
          DARABONBA_PTR_TO_JSON(enableWebSearch, enableWebSearch_);
          DARABONBA_PTR_TO_JSON(fixedReplyDetail, fixedReplyDetail_);
          DARABONBA_PTR_TO_JSON(knowledgeBaseCodeList, knowledgeBaseCodeList_);
          DARABONBA_PTR_TO_JSON(promptStrategy, promptStrategy_);
          DARABONBA_PTR_TO_JSON(ragRejectType, ragRejectType_);
          DARABONBA_PTR_TO_JSON(rejectFilterPrompt, rejectFilterPrompt_);
          DARABONBA_PTR_TO_JSON(rejectFilterType, rejectFilterType_);
          DARABONBA_PTR_TO_JSON(retrieveMaxLength, retrieveMaxLength_);
          DARABONBA_PTR_TO_JSON(topK, topK_);
        };
        friend void from_json(const Darabonba::Json& j, RagConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(answerScope, answerScope_);
          DARABONBA_PTR_FROM_JSON(enableCitation, enableCitation_);
          DARABONBA_PTR_FROM_JSON(enableSearch, enableSearch_);
          DARABONBA_PTR_FROM_JSON(enableWebSearch, enableWebSearch_);
          DARABONBA_PTR_FROM_JSON(fixedReplyDetail, fixedReplyDetail_);
          DARABONBA_PTR_FROM_JSON(knowledgeBaseCodeList, knowledgeBaseCodeList_);
          DARABONBA_PTR_FROM_JSON(promptStrategy, promptStrategy_);
          DARABONBA_PTR_FROM_JSON(ragRejectType, ragRejectType_);
          DARABONBA_PTR_FROM_JSON(rejectFilterPrompt, rejectFilterPrompt_);
          DARABONBA_PTR_FROM_JSON(rejectFilterType, rejectFilterType_);
          DARABONBA_PTR_FROM_JSON(retrieveMaxLength, retrieveMaxLength_);
          DARABONBA_PTR_FROM_JSON(topK, topK_);
        };
        RagConfig() = default ;
        RagConfig(const RagConfig &) = default ;
        RagConfig(RagConfig &&) = default ;
        RagConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RagConfig() = default ;
        RagConfig& operator=(const RagConfig &) = default ;
        RagConfig& operator=(RagConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->answerScope_ == nullptr
        && this->enableCitation_ == nullptr && this->enableSearch_ == nullptr && this->enableWebSearch_ == nullptr && this->fixedReplyDetail_ == nullptr && this->knowledgeBaseCodeList_ == nullptr
        && this->promptStrategy_ == nullptr && this->ragRejectType_ == nullptr && this->rejectFilterPrompt_ == nullptr && this->rejectFilterType_ == nullptr && this->retrieveMaxLength_ == nullptr
        && this->topK_ == nullptr; };
        // answerScope Field Functions 
        bool hasAnswerScope() const { return this->answerScope_ != nullptr;};
        void deleteAnswerScope() { this->answerScope_ = nullptr;};
        inline string getAnswerScope() const { DARABONBA_PTR_GET_DEFAULT(answerScope_, "") };
        inline RagConfig& setAnswerScope(string answerScope) { DARABONBA_PTR_SET_VALUE(answerScope_, answerScope) };


        // enableCitation Field Functions 
        bool hasEnableCitation() const { return this->enableCitation_ != nullptr;};
        void deleteEnableCitation() { this->enableCitation_ = nullptr;};
        inline bool getEnableCitation() const { DARABONBA_PTR_GET_DEFAULT(enableCitation_, false) };
        inline RagConfig& setEnableCitation(bool enableCitation) { DARABONBA_PTR_SET_VALUE(enableCitation_, enableCitation) };


        // enableSearch Field Functions 
        bool hasEnableSearch() const { return this->enableSearch_ != nullptr;};
        void deleteEnableSearch() { this->enableSearch_ = nullptr;};
        inline bool getEnableSearch() const { DARABONBA_PTR_GET_DEFAULT(enableSearch_, false) };
        inline RagConfig& setEnableSearch(bool enableSearch) { DARABONBA_PTR_SET_VALUE(enableSearch_, enableSearch) };


        // enableWebSearch Field Functions 
        bool hasEnableWebSearch() const { return this->enableWebSearch_ != nullptr;};
        void deleteEnableWebSearch() { this->enableWebSearch_ = nullptr;};
        inline bool getEnableWebSearch() const { DARABONBA_PTR_GET_DEFAULT(enableWebSearch_, false) };
        inline RagConfig& setEnableWebSearch(bool enableWebSearch) { DARABONBA_PTR_SET_VALUE(enableWebSearch_, enableWebSearch) };


        // fixedReplyDetail Field Functions 
        bool hasFixedReplyDetail() const { return this->fixedReplyDetail_ != nullptr;};
        void deleteFixedReplyDetail() { this->fixedReplyDetail_ = nullptr;};
        inline string getFixedReplyDetail() const { DARABONBA_PTR_GET_DEFAULT(fixedReplyDetail_, "") };
        inline RagConfig& setFixedReplyDetail(string fixedReplyDetail) { DARABONBA_PTR_SET_VALUE(fixedReplyDetail_, fixedReplyDetail) };


        // knowledgeBaseCodeList Field Functions 
        bool hasKnowledgeBaseCodeList() const { return this->knowledgeBaseCodeList_ != nullptr;};
        void deleteKnowledgeBaseCodeList() { this->knowledgeBaseCodeList_ = nullptr;};
        inline const vector<string> & getKnowledgeBaseCodeList() const { DARABONBA_PTR_GET_CONST(knowledgeBaseCodeList_, vector<string>) };
        inline vector<string> getKnowledgeBaseCodeList() { DARABONBA_PTR_GET(knowledgeBaseCodeList_, vector<string>) };
        inline RagConfig& setKnowledgeBaseCodeList(const vector<string> & knowledgeBaseCodeList) { DARABONBA_PTR_SET_VALUE(knowledgeBaseCodeList_, knowledgeBaseCodeList) };
        inline RagConfig& setKnowledgeBaseCodeList(vector<string> && knowledgeBaseCodeList) { DARABONBA_PTR_SET_RVALUE(knowledgeBaseCodeList_, knowledgeBaseCodeList) };


        // promptStrategy Field Functions 
        bool hasPromptStrategy() const { return this->promptStrategy_ != nullptr;};
        void deletePromptStrategy() { this->promptStrategy_ = nullptr;};
        inline string getPromptStrategy() const { DARABONBA_PTR_GET_DEFAULT(promptStrategy_, "") };
        inline RagConfig& setPromptStrategy(string promptStrategy) { DARABONBA_PTR_SET_VALUE(promptStrategy_, promptStrategy) };


        // ragRejectType Field Functions 
        bool hasRagRejectType() const { return this->ragRejectType_ != nullptr;};
        void deleteRagRejectType() { this->ragRejectType_ = nullptr;};
        inline string getRagRejectType() const { DARABONBA_PTR_GET_DEFAULT(ragRejectType_, "") };
        inline RagConfig& setRagRejectType(string ragRejectType) { DARABONBA_PTR_SET_VALUE(ragRejectType_, ragRejectType) };


        // rejectFilterPrompt Field Functions 
        bool hasRejectFilterPrompt() const { return this->rejectFilterPrompt_ != nullptr;};
        void deleteRejectFilterPrompt() { this->rejectFilterPrompt_ = nullptr;};
        inline string getRejectFilterPrompt() const { DARABONBA_PTR_GET_DEFAULT(rejectFilterPrompt_, "") };
        inline RagConfig& setRejectFilterPrompt(string rejectFilterPrompt) { DARABONBA_PTR_SET_VALUE(rejectFilterPrompt_, rejectFilterPrompt) };


        // rejectFilterType Field Functions 
        bool hasRejectFilterType() const { return this->rejectFilterType_ != nullptr;};
        void deleteRejectFilterType() { this->rejectFilterType_ = nullptr;};
        inline string getRejectFilterType() const { DARABONBA_PTR_GET_DEFAULT(rejectFilterType_, "") };
        inline RagConfig& setRejectFilterType(string rejectFilterType) { DARABONBA_PTR_SET_VALUE(rejectFilterType_, rejectFilterType) };


        // retrieveMaxLength Field Functions 
        bool hasRetrieveMaxLength() const { return this->retrieveMaxLength_ != nullptr;};
        void deleteRetrieveMaxLength() { this->retrieveMaxLength_ = nullptr;};
        inline int32_t getRetrieveMaxLength() const { DARABONBA_PTR_GET_DEFAULT(retrieveMaxLength_, 0) };
        inline RagConfig& setRetrieveMaxLength(int32_t retrieveMaxLength) { DARABONBA_PTR_SET_VALUE(retrieveMaxLength_, retrieveMaxLength) };


        // topK Field Functions 
        bool hasTopK() const { return this->topK_ != nullptr;};
        void deleteTopK() { this->topK_ = nullptr;};
        inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
        inline RagConfig& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


      protected:
        shared_ptr<string> answerScope_ {};
        shared_ptr<bool> enableCitation_ {};
        shared_ptr<bool> enableSearch_ {};
        shared_ptr<bool> enableWebSearch_ {};
        shared_ptr<string> fixedReplyDetail_ {};
        shared_ptr<vector<string>> knowledgeBaseCodeList_ {};
        shared_ptr<string> promptStrategy_ {};
        shared_ptr<string> ragRejectType_ {};
        shared_ptr<string> rejectFilterPrompt_ {};
        shared_ptr<string> rejectFilterType_ {};
        shared_ptr<int32_t> retrieveMaxLength_ {};
        shared_ptr<int32_t> topK_ {};
      };

      class Parameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
          DARABONBA_PTR_TO_JSON(dialogRound, dialogRound_);
          DARABONBA_PTR_TO_JSON(enable_thinking, enableThinking_);
          DARABONBA_PTR_TO_JSON(maxTokens, maxTokens_);
          DARABONBA_PTR_TO_JSON(temperature, temperature_);
        };
        friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
          DARABONBA_PTR_FROM_JSON(dialogRound, dialogRound_);
          DARABONBA_PTR_FROM_JSON(enable_thinking, enableThinking_);
          DARABONBA_PTR_FROM_JSON(maxTokens, maxTokens_);
          DARABONBA_PTR_FROM_JSON(temperature, temperature_);
        };
        Parameters() = default ;
        Parameters(const Parameters &) = default ;
        Parameters(Parameters &&) = default ;
        Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Parameters() = default ;
        Parameters& operator=(const Parameters &) = default ;
        Parameters& operator=(Parameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dialogRound_ == nullptr
        && this->enableThinking_ == nullptr && this->maxTokens_ == nullptr && this->temperature_ == nullptr; };
        // dialogRound Field Functions 
        bool hasDialogRound() const { return this->dialogRound_ != nullptr;};
        void deleteDialogRound() { this->dialogRound_ = nullptr;};
        inline int32_t getDialogRound() const { DARABONBA_PTR_GET_DEFAULT(dialogRound_, 0) };
        inline Parameters& setDialogRound(int32_t dialogRound) { DARABONBA_PTR_SET_VALUE(dialogRound_, dialogRound) };


        // enableThinking Field Functions 
        bool hasEnableThinking() const { return this->enableThinking_ != nullptr;};
        void deleteEnableThinking() { this->enableThinking_ = nullptr;};
        inline bool getEnableThinking() const { DARABONBA_PTR_GET_DEFAULT(enableThinking_, false) };
        inline Parameters& setEnableThinking(bool enableThinking) { DARABONBA_PTR_SET_VALUE(enableThinking_, enableThinking) };


        // maxTokens Field Functions 
        bool hasMaxTokens() const { return this->maxTokens_ != nullptr;};
        void deleteMaxTokens() { this->maxTokens_ = nullptr;};
        inline int32_t getMaxTokens() const { DARABONBA_PTR_GET_DEFAULT(maxTokens_, 0) };
        inline Parameters& setMaxTokens(int32_t maxTokens) { DARABONBA_PTR_SET_VALUE(maxTokens_, maxTokens) };


        // temperature Field Functions 
        bool hasTemperature() const { return this->temperature_ != nullptr;};
        void deleteTemperature() { this->temperature_ = nullptr;};
        inline double getTemperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, 0.0) };
        inline Parameters& setTemperature(double temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


      protected:
        shared_ptr<int32_t> dialogRound_ {};
        shared_ptr<bool> enableThinking_ {};
        shared_ptr<int32_t> maxTokens_ {};
        shared_ptr<double> temperature_ {};
      };

      class LongTermMemory : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LongTermMemory& obj) { 
          DARABONBA_PTR_TO_JSON(enable, enable_);
        };
        friend void from_json(const Darabonba::Json& j, LongTermMemory& obj) { 
          DARABONBA_PTR_FROM_JSON(enable, enable_);
        };
        LongTermMemory() = default ;
        LongTermMemory(const LongTermMemory &) = default ;
        LongTermMemory(LongTermMemory &&) = default ;
        LongTermMemory(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LongTermMemory() = default ;
        LongTermMemory& operator=(const LongTermMemory &) = default ;
        LongTermMemory& operator=(LongTermMemory &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enable_ == nullptr; };
        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline LongTermMemory& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      protected:
        shared_ptr<bool> enable_ {};
      };

      class HistoryConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HistoryConfig& obj) { 
          DARABONBA_PTR_TO_JSON(enableAdbRecord, enableAdbRecord_);
          DARABONBA_PTR_TO_JSON(enableRecord, enableRecord_);
          DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(region, region_);
          DARABONBA_PTR_TO_JSON(storeCode, storeCode_);
        };
        friend void from_json(const Darabonba::Json& j, HistoryConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(enableAdbRecord, enableAdbRecord_);
          DARABONBA_PTR_FROM_JSON(enableRecord, enableRecord_);
          DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(region, region_);
          DARABONBA_PTR_FROM_JSON(storeCode, storeCode_);
        };
        HistoryConfig() = default ;
        HistoryConfig(const HistoryConfig &) = default ;
        HistoryConfig(HistoryConfig &&) = default ;
        HistoryConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HistoryConfig() = default ;
        HistoryConfig& operator=(const HistoryConfig &) = default ;
        HistoryConfig& operator=(HistoryConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->enableAdbRecord_ == nullptr
        && this->enableRecord_ == nullptr && this->instanceId_ == nullptr && this->region_ == nullptr && this->storeCode_ == nullptr; };
        // enableAdbRecord Field Functions 
        bool hasEnableAdbRecord() const { return this->enableAdbRecord_ != nullptr;};
        void deleteEnableAdbRecord() { this->enableAdbRecord_ = nullptr;};
        inline bool getEnableAdbRecord() const { DARABONBA_PTR_GET_DEFAULT(enableAdbRecord_, false) };
        inline HistoryConfig& setEnableAdbRecord(bool enableAdbRecord) { DARABONBA_PTR_SET_VALUE(enableAdbRecord_, enableAdbRecord) };


        // enableRecord Field Functions 
        bool hasEnableRecord() const { return this->enableRecord_ != nullptr;};
        void deleteEnableRecord() { this->enableRecord_ = nullptr;};
        inline bool getEnableRecord() const { DARABONBA_PTR_GET_DEFAULT(enableRecord_, false) };
        inline HistoryConfig& setEnableRecord(bool enableRecord) { DARABONBA_PTR_SET_VALUE(enableRecord_, enableRecord) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline HistoryConfig& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline HistoryConfig& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // storeCode Field Functions 
        bool hasStoreCode() const { return this->storeCode_ != nullptr;};
        void deleteStoreCode() { this->storeCode_ = nullptr;};
        inline string getStoreCode() const { DARABONBA_PTR_GET_DEFAULT(storeCode_, "") };
        inline HistoryConfig& setStoreCode(string storeCode) { DARABONBA_PTR_SET_VALUE(storeCode_, storeCode) };


      protected:
        shared_ptr<bool> enableAdbRecord_ {};
        shared_ptr<bool> enableRecord_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> region_ {};
        shared_ptr<string> storeCode_ {};
      };

      virtual bool empty() const override { return this->historyConfig_ == nullptr
        && this->longTermMemory_ == nullptr && this->parameters_ == nullptr && this->ragConfig_ == nullptr && this->securityConfig_ == nullptr && this->tools_ == nullptr
        && this->workFlows_ == nullptr; };
      // historyConfig Field Functions 
      bool hasHistoryConfig() const { return this->historyConfig_ != nullptr;};
      void deleteHistoryConfig() { this->historyConfig_ = nullptr;};
      inline const ApplicationConfig::HistoryConfig & getHistoryConfig() const { DARABONBA_PTR_GET_CONST(historyConfig_, ApplicationConfig::HistoryConfig) };
      inline ApplicationConfig::HistoryConfig getHistoryConfig() { DARABONBA_PTR_GET(historyConfig_, ApplicationConfig::HistoryConfig) };
      inline ApplicationConfig& setHistoryConfig(const ApplicationConfig::HistoryConfig & historyConfig) { DARABONBA_PTR_SET_VALUE(historyConfig_, historyConfig) };
      inline ApplicationConfig& setHistoryConfig(ApplicationConfig::HistoryConfig && historyConfig) { DARABONBA_PTR_SET_RVALUE(historyConfig_, historyConfig) };


      // longTermMemory Field Functions 
      bool hasLongTermMemory() const { return this->longTermMemory_ != nullptr;};
      void deleteLongTermMemory() { this->longTermMemory_ = nullptr;};
      inline const ApplicationConfig::LongTermMemory & getLongTermMemory() const { DARABONBA_PTR_GET_CONST(longTermMemory_, ApplicationConfig::LongTermMemory) };
      inline ApplicationConfig::LongTermMemory getLongTermMemory() { DARABONBA_PTR_GET(longTermMemory_, ApplicationConfig::LongTermMemory) };
      inline ApplicationConfig& setLongTermMemory(const ApplicationConfig::LongTermMemory & longTermMemory) { DARABONBA_PTR_SET_VALUE(longTermMemory_, longTermMemory) };
      inline ApplicationConfig& setLongTermMemory(ApplicationConfig::LongTermMemory && longTermMemory) { DARABONBA_PTR_SET_RVALUE(longTermMemory_, longTermMemory) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const ApplicationConfig::Parameters & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, ApplicationConfig::Parameters) };
      inline ApplicationConfig::Parameters getParameters() { DARABONBA_PTR_GET(parameters_, ApplicationConfig::Parameters) };
      inline ApplicationConfig& setParameters(const ApplicationConfig::Parameters & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline ApplicationConfig& setParameters(ApplicationConfig::Parameters && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


      // ragConfig Field Functions 
      bool hasRagConfig() const { return this->ragConfig_ != nullptr;};
      void deleteRagConfig() { this->ragConfig_ = nullptr;};
      inline const ApplicationConfig::RagConfig & getRagConfig() const { DARABONBA_PTR_GET_CONST(ragConfig_, ApplicationConfig::RagConfig) };
      inline ApplicationConfig::RagConfig getRagConfig() { DARABONBA_PTR_GET(ragConfig_, ApplicationConfig::RagConfig) };
      inline ApplicationConfig& setRagConfig(const ApplicationConfig::RagConfig & ragConfig) { DARABONBA_PTR_SET_VALUE(ragConfig_, ragConfig) };
      inline ApplicationConfig& setRagConfig(ApplicationConfig::RagConfig && ragConfig) { DARABONBA_PTR_SET_RVALUE(ragConfig_, ragConfig) };


      // securityConfig Field Functions 
      bool hasSecurityConfig() const { return this->securityConfig_ != nullptr;};
      void deleteSecurityConfig() { this->securityConfig_ = nullptr;};
      inline const ApplicationConfig::SecurityConfig & getSecurityConfig() const { DARABONBA_PTR_GET_CONST(securityConfig_, ApplicationConfig::SecurityConfig) };
      inline ApplicationConfig::SecurityConfig getSecurityConfig() { DARABONBA_PTR_GET(securityConfig_, ApplicationConfig::SecurityConfig) };
      inline ApplicationConfig& setSecurityConfig(const ApplicationConfig::SecurityConfig & securityConfig) { DARABONBA_PTR_SET_VALUE(securityConfig_, securityConfig) };
      inline ApplicationConfig& setSecurityConfig(ApplicationConfig::SecurityConfig && securityConfig) { DARABONBA_PTR_SET_RVALUE(securityConfig_, securityConfig) };


      // tools Field Functions 
      bool hasTools() const { return this->tools_ != nullptr;};
      void deleteTools() { this->tools_ = nullptr;};
      inline const vector<ApplicationConfig::Tools> & getTools() const { DARABONBA_PTR_GET_CONST(tools_, vector<ApplicationConfig::Tools>) };
      inline vector<ApplicationConfig::Tools> getTools() { DARABONBA_PTR_GET(tools_, vector<ApplicationConfig::Tools>) };
      inline ApplicationConfig& setTools(const vector<ApplicationConfig::Tools> & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
      inline ApplicationConfig& setTools(vector<ApplicationConfig::Tools> && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


      // workFlows Field Functions 
      bool hasWorkFlows() const { return this->workFlows_ != nullptr;};
      void deleteWorkFlows() { this->workFlows_ = nullptr;};
      inline const vector<ApplicationConfig::WorkFlows> & getWorkFlows() const { DARABONBA_PTR_GET_CONST(workFlows_, vector<ApplicationConfig::WorkFlows>) };
      inline vector<ApplicationConfig::WorkFlows> getWorkFlows() { DARABONBA_PTR_GET(workFlows_, vector<ApplicationConfig::WorkFlows>) };
      inline ApplicationConfig& setWorkFlows(const vector<ApplicationConfig::WorkFlows> & workFlows) { DARABONBA_PTR_SET_VALUE(workFlows_, workFlows) };
      inline ApplicationConfig& setWorkFlows(vector<ApplicationConfig::WorkFlows> && workFlows) { DARABONBA_PTR_SET_RVALUE(workFlows_, workFlows) };


    protected:
      shared_ptr<ApplicationConfig::HistoryConfig> historyConfig_ {};
      shared_ptr<ApplicationConfig::LongTermMemory> longTermMemory_ {};
      shared_ptr<ApplicationConfig::Parameters> parameters_ {};
      shared_ptr<ApplicationConfig::RagConfig> ragConfig_ {};
      shared_ptr<ApplicationConfig::SecurityConfig> securityConfig_ {};
      shared_ptr<vector<ApplicationConfig::Tools>> tools_ {};
      shared_ptr<vector<ApplicationConfig::WorkFlows>> workFlows_ {};
    };

    virtual bool empty() const override { return this->applicationConfig_ == nullptr
        && this->instructions_ == nullptr && this->modelId_ == nullptr && this->name_ == nullptr && this->sampleLibrary_ == nullptr; };
    // applicationConfig Field Functions 
    bool hasApplicationConfig() const { return this->applicationConfig_ != nullptr;};
    void deleteApplicationConfig() { this->applicationConfig_ = nullptr;};
    inline const CreateAndPulishAgentRequest::ApplicationConfig & getApplicationConfig() const { DARABONBA_PTR_GET_CONST(applicationConfig_, CreateAndPulishAgentRequest::ApplicationConfig) };
    inline CreateAndPulishAgentRequest::ApplicationConfig getApplicationConfig() { DARABONBA_PTR_GET(applicationConfig_, CreateAndPulishAgentRequest::ApplicationConfig) };
    inline CreateAndPulishAgentRequest& setApplicationConfig(const CreateAndPulishAgentRequest::ApplicationConfig & applicationConfig) { DARABONBA_PTR_SET_VALUE(applicationConfig_, applicationConfig) };
    inline CreateAndPulishAgentRequest& setApplicationConfig(CreateAndPulishAgentRequest::ApplicationConfig && applicationConfig) { DARABONBA_PTR_SET_RVALUE(applicationConfig_, applicationConfig) };


    // instructions Field Functions 
    bool hasInstructions() const { return this->instructions_ != nullptr;};
    void deleteInstructions() { this->instructions_ = nullptr;};
    inline string getInstructions() const { DARABONBA_PTR_GET_DEFAULT(instructions_, "") };
    inline CreateAndPulishAgentRequest& setInstructions(string instructions) { DARABONBA_PTR_SET_VALUE(instructions_, instructions) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline CreateAndPulishAgentRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAndPulishAgentRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sampleLibrary Field Functions 
    bool hasSampleLibrary() const { return this->sampleLibrary_ != nullptr;};
    void deleteSampleLibrary() { this->sampleLibrary_ = nullptr;};
    inline const CreateAndPulishAgentRequest::SampleLibrary & getSampleLibrary() const { DARABONBA_PTR_GET_CONST(sampleLibrary_, CreateAndPulishAgentRequest::SampleLibrary) };
    inline CreateAndPulishAgentRequest::SampleLibrary getSampleLibrary() { DARABONBA_PTR_GET(sampleLibrary_, CreateAndPulishAgentRequest::SampleLibrary) };
    inline CreateAndPulishAgentRequest& setSampleLibrary(const CreateAndPulishAgentRequest::SampleLibrary & sampleLibrary) { DARABONBA_PTR_SET_VALUE(sampleLibrary_, sampleLibrary) };
    inline CreateAndPulishAgentRequest& setSampleLibrary(CreateAndPulishAgentRequest::SampleLibrary && sampleLibrary) { DARABONBA_PTR_SET_RVALUE(sampleLibrary_, sampleLibrary) };


  protected:
    shared_ptr<CreateAndPulishAgentRequest::ApplicationConfig> applicationConfig_ {};
    shared_ptr<string> instructions_ {};
    shared_ptr<string> modelId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<CreateAndPulishAgentRequest::SampleLibrary> sampleLibrary_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
