// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLISHEDAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLISHEDAGENTRESPONSEBODY_HPP_
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
  class ListPublishedAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublishedAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublishedAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ListPublishedAgentResponseBody() = default ;
    ListPublishedAgentResponseBody(const ListPublishedAgentResponseBody &) = default ;
    ListPublishedAgentResponseBody(ListPublishedAgentResponseBody &&) = default ;
    ListPublishedAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublishedAgentResponseBody() = default ;
    ListPublishedAgentResponseBody& operator=(const ListPublishedAgentResponseBody &) = default ;
    ListPublishedAgentResponseBody& operator=(ListPublishedAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(list, list_);
        DARABONBA_PTR_TO_JSON(pageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(list, list_);
        DARABONBA_PTR_FROM_JSON(pageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(total, total_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(applicationConfig, applicationConfig_);
          DARABONBA_PTR_TO_JSON(code, code_);
          DARABONBA_PTR_TO_JSON(instructions, instructions_);
          DARABONBA_PTR_TO_JSON(modelId, modelId_);
          DARABONBA_PTR_TO_JSON(name, name_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(applicationConfig, applicationConfig_);
          DARABONBA_PTR_FROM_JSON(code, code_);
          DARABONBA_PTR_FROM_JSON(instructions, instructions_);
          DARABONBA_PTR_FROM_JSON(modelId, modelId_);
          DARABONBA_PTR_FROM_JSON(name, name_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ApplicationConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ApplicationConfig& obj) { 
            DARABONBA_PTR_TO_JSON(historyConfig, historyConfig_);
            DARABONBA_PTR_TO_JSON(longTermMemory, longTermMemory_);
            DARABONBA_PTR_TO_JSON(parameters, parameters_);
            DARABONBA_PTR_TO_JSON(ragConfig, ragConfig_);
            DARABONBA_PTR_TO_JSON(security, security_);
            DARABONBA_PTR_TO_JSON(tools, tools_);
            DARABONBA_PTR_TO_JSON(workFlows, workFlows_);
          };
          friend void from_json(const Darabonba::Json& j, ApplicationConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(historyConfig, historyConfig_);
            DARABONBA_PTR_FROM_JSON(longTermMemory, longTermMemory_);
            DARABONBA_PTR_FROM_JSON(parameters, parameters_);
            DARABONBA_PTR_FROM_JSON(ragConfig, ragConfig_);
            DARABONBA_PTR_FROM_JSON(security, security_);
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

          class Security : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Security& obj) { 
              DARABONBA_PTR_TO_JSON(processingStrategy, processingStrategy_);
            };
            friend void from_json(const Darabonba::Json& j, Security& obj) { 
              DARABONBA_PTR_FROM_JSON(processingStrategy, processingStrategy_);
            };
            Security() = default ;
            Security(const Security &) = default ;
            Security(Security &&) = default ;
            Security(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Security() = default ;
            Security& operator=(const Security &) = default ;
            Security& operator=(Security &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->processingStrategy_ == nullptr; };
            // processingStrategy Field Functions 
            bool hasProcessingStrategy() const { return this->processingStrategy_ != nullptr;};
            void deleteProcessingStrategy() { this->processingStrategy_ = nullptr;};
            inline string getProcessingStrategy() const { DARABONBA_PTR_GET_DEFAULT(processingStrategy_, "") };
            inline Security& setProcessingStrategy(string processingStrategy) { DARABONBA_PTR_SET_VALUE(processingStrategy_, processingStrategy) };


          protected:
            shared_ptr<string> processingStrategy_ {};
          };

          class RagConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RagConfig& obj) { 
              DARABONBA_PTR_TO_JSON(enableCitation, enableCitation_);
              DARABONBA_PTR_TO_JSON(enableSearch, enableSearch_);
              DARABONBA_PTR_TO_JSON(knowledgeBaseCodeList, knowledgeBaseCodeList_);
              DARABONBA_PTR_TO_JSON(topK, topK_);
            };
            friend void from_json(const Darabonba::Json& j, RagConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(enableCitation, enableCitation_);
              DARABONBA_PTR_FROM_JSON(enableSearch, enableSearch_);
              DARABONBA_PTR_FROM_JSON(knowledgeBaseCodeList, knowledgeBaseCodeList_);
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
            virtual bool empty() const override { return this->enableCitation_ == nullptr
        && this->enableSearch_ == nullptr && this->knowledgeBaseCodeList_ == nullptr && this->topK_ == nullptr; };
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


            // knowledgeBaseCodeList Field Functions 
            bool hasKnowledgeBaseCodeList() const { return this->knowledgeBaseCodeList_ != nullptr;};
            void deleteKnowledgeBaseCodeList() { this->knowledgeBaseCodeList_ = nullptr;};
            inline const vector<string> & getKnowledgeBaseCodeList() const { DARABONBA_PTR_GET_CONST(knowledgeBaseCodeList_, vector<string>) };
            inline vector<string> getKnowledgeBaseCodeList() { DARABONBA_PTR_GET(knowledgeBaseCodeList_, vector<string>) };
            inline RagConfig& setKnowledgeBaseCodeList(const vector<string> & knowledgeBaseCodeList) { DARABONBA_PTR_SET_VALUE(knowledgeBaseCodeList_, knowledgeBaseCodeList) };
            inline RagConfig& setKnowledgeBaseCodeList(vector<string> && knowledgeBaseCodeList) { DARABONBA_PTR_SET_RVALUE(knowledgeBaseCodeList_, knowledgeBaseCodeList) };


            // topK Field Functions 
            bool hasTopK() const { return this->topK_ != nullptr;};
            void deleteTopK() { this->topK_ = nullptr;};
            inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
            inline RagConfig& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


          protected:
            shared_ptr<bool> enableCitation_ {};
            shared_ptr<bool> enableSearch_ {};
            shared_ptr<vector<string>> knowledgeBaseCodeList_ {};
            shared_ptr<int32_t> topK_ {};
          };

          class Parameters : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
              DARABONBA_PTR_TO_JSON(dialogRound, dialogRound_);
              DARABONBA_PTR_TO_JSON(maxTokens, maxTokens_);
              DARABONBA_PTR_TO_JSON(temperature, temperature_);
            };
            friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
              DARABONBA_PTR_FROM_JSON(dialogRound, dialogRound_);
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
        && this->maxTokens_ == nullptr && this->temperature_ == nullptr; };
            // dialogRound Field Functions 
            bool hasDialogRound() const { return this->dialogRound_ != nullptr;};
            void deleteDialogRound() { this->dialogRound_ = nullptr;};
            inline int32_t getDialogRound() const { DARABONBA_PTR_GET_DEFAULT(dialogRound_, 0) };
            inline Parameters& setDialogRound(int32_t dialogRound) { DARABONBA_PTR_SET_VALUE(dialogRound_, dialogRound) };


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
        && this->longTermMemory_ == nullptr && this->parameters_ == nullptr && this->ragConfig_ == nullptr && this->security_ == nullptr && this->tools_ == nullptr
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


          // security Field Functions 
          bool hasSecurity() const { return this->security_ != nullptr;};
          void deleteSecurity() { this->security_ = nullptr;};
          inline const ApplicationConfig::Security & getSecurity() const { DARABONBA_PTR_GET_CONST(security_, ApplicationConfig::Security) };
          inline ApplicationConfig::Security getSecurity() { DARABONBA_PTR_GET(security_, ApplicationConfig::Security) };
          inline ApplicationConfig& setSecurity(const ApplicationConfig::Security & security) { DARABONBA_PTR_SET_VALUE(security_, security) };
          inline ApplicationConfig& setSecurity(ApplicationConfig::Security && security) { DARABONBA_PTR_SET_RVALUE(security_, security) };


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
          shared_ptr<ApplicationConfig::Security> security_ {};
          shared_ptr<vector<ApplicationConfig::Tools>> tools_ {};
          shared_ptr<vector<ApplicationConfig::WorkFlows>> workFlows_ {};
        };

        virtual bool empty() const override { return this->applicationConfig_ == nullptr
        && this->code_ == nullptr && this->instructions_ == nullptr && this->modelId_ == nullptr && this->name_ == nullptr; };
        // applicationConfig Field Functions 
        bool hasApplicationConfig() const { return this->applicationConfig_ != nullptr;};
        void deleteApplicationConfig() { this->applicationConfig_ = nullptr;};
        inline const List::ApplicationConfig & getApplicationConfig() const { DARABONBA_PTR_GET_CONST(applicationConfig_, List::ApplicationConfig) };
        inline List::ApplicationConfig getApplicationConfig() { DARABONBA_PTR_GET(applicationConfig_, List::ApplicationConfig) };
        inline List& setApplicationConfig(const List::ApplicationConfig & applicationConfig) { DARABONBA_PTR_SET_VALUE(applicationConfig_, applicationConfig) };
        inline List& setApplicationConfig(List::ApplicationConfig && applicationConfig) { DARABONBA_PTR_SET_RVALUE(applicationConfig_, applicationConfig) };


        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline List& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // instructions Field Functions 
        bool hasInstructions() const { return this->instructions_ != nullptr;};
        void deleteInstructions() { this->instructions_ = nullptr;};
        inline string getInstructions() const { DARABONBA_PTR_GET_DEFAULT(instructions_, "") };
        inline List& setInstructions(string instructions) { DARABONBA_PTR_SET_VALUE(instructions_, instructions) };


        // modelId Field Functions 
        bool hasModelId() const { return this->modelId_ != nullptr;};
        void deleteModelId() { this->modelId_ = nullptr;};
        inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
        inline List& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline List& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        shared_ptr<List::ApplicationConfig> applicationConfig_ {};
        shared_ptr<string> code_ {};
        shared_ptr<string> instructions_ {};
        shared_ptr<string> modelId_ {};
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
      inline Data& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int32_t> pageNo_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListPublishedAgentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListPublishedAgentResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListPublishedAgentResponseBody::Data) };
    inline ListPublishedAgentResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListPublishedAgentResponseBody::Data) };
    inline ListPublishedAgentResponseBody& setData(const ListPublishedAgentResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListPublishedAgentResponseBody& setData(ListPublishedAgentResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListPublishedAgentResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListPublishedAgentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPublishedAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ListPublishedAgentResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListPublishedAgentResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
