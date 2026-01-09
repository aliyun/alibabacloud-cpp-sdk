// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryAiVoiceAgentDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAiVoiceAgentDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAiVoiceAgentDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryAiVoiceAgentDetailResponseBody() = default ;
    QueryAiVoiceAgentDetailResponseBody(const QueryAiVoiceAgentDetailResponseBody &) = default ;
    QueryAiVoiceAgentDetailResponseBody(QueryAiVoiceAgentDetailResponseBody &&) = default ;
    QueryAiVoiceAgentDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAiVoiceAgentDetailResponseBody() = default ;
    QueryAiVoiceAgentDetailResponseBody& operator=(const QueryAiVoiceAgentDetailResponseBody &) = default ;
    QueryAiVoiceAgentDetailResponseBody& operator=(QueryAiVoiceAgentDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentId, agentId_);
        DARABONBA_PTR_TO_JSON(AgentName, agentName_);
        DARABONBA_PTR_TO_JSON(AiVoiceAgentCallConfig, aiVoiceAgentCallConfig_);
        DARABONBA_PTR_TO_JSON(AiVoiceAgentModelConfig, aiVoiceAgentModelConfig_);
        DARABONBA_PTR_TO_JSON(BusinessTypeName, businessTypeName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(KnowledgeName, knowledgeName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VoiceStyleName, voiceStyleName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
        DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
        DARABONBA_PTR_FROM_JSON(AiVoiceAgentCallConfig, aiVoiceAgentCallConfig_);
        DARABONBA_PTR_FROM_JSON(AiVoiceAgentModelConfig, aiVoiceAgentModelConfig_);
        DARABONBA_PTR_FROM_JSON(BusinessTypeName, businessTypeName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(KnowledgeName, knowledgeName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VoiceStyleName, voiceStyleName_);
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
      class AiVoiceAgentModelConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AiVoiceAgentModelConfig& obj) { 
          DARABONBA_PTR_TO_JSON(BasicTaskDescription, basicTaskDescription_);
          DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
          DARABONBA_PTR_TO_JSON(ChildTaskList, childTaskList_);
          DARABONBA_PTR_TO_JSON(CustomExceptionEnable, customExceptionEnable_);
          DARABONBA_PTR_TO_JSON(CustomExceptionFileId, customExceptionFileId_);
          DARABONBA_PTR_TO_JSON(CustomExceptionFileName, customExceptionFileName_);
          DARABONBA_PTR_TO_JSON(CustomExceptionList, customExceptionList_);
          DARABONBA_PTR_TO_JSON(CustomExceptionUrlPath, customExceptionUrlPath_);
          DARABONBA_PTR_TO_JSON(CustomExceptionVoiceStyle, customExceptionVoiceStyle_);
          DARABONBA_PTR_TO_JSON(FlowDesc, flowDesc_);
          DARABONBA_PTR_TO_JSON(KnowledgeDocIdList, knowledgeDocIdList_);
          DARABONBA_PTR_TO_JSON(KnowledgeDocNameList, knowledgeDocNameList_);
          DARABONBA_PTR_TO_JSON(KnowledgeDocOriginalNameList, knowledgeDocOriginalNameList_);
          DARABONBA_PTR_TO_JSON(KnowledgeEnable, knowledgeEnable_);
          DARABONBA_PTR_TO_JSON(KnowledgeId, knowledgeId_);
          DARABONBA_PTR_TO_JSON(MainPurpose, mainPurpose_);
          DARABONBA_PTR_TO_JSON(OutputTagConfig, outputTagConfig_);
          DARABONBA_PTR_TO_JSON(PhoneTagConfig, phoneTagConfig_);
          DARABONBA_PTR_TO_JSON(Prologue, prologue_);
          DARABONBA_PTR_TO_JSON(RecordingFile, recordingFile_);
          DARABONBA_PTR_TO_JSON(StartWordType, startWordType_);
          DARABONBA_PTR_TO_JSON(SysRole, sysRole_);
          DARABONBA_PTR_TO_JSON(TaskType, taskType_);
          DARABONBA_PTR_TO_JSON(UserRole, userRole_);
        };
        friend void from_json(const Darabonba::Json& j, AiVoiceAgentModelConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(BasicTaskDescription, basicTaskDescription_);
          DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
          DARABONBA_PTR_FROM_JSON(ChildTaskList, childTaskList_);
          DARABONBA_PTR_FROM_JSON(CustomExceptionEnable, customExceptionEnable_);
          DARABONBA_PTR_FROM_JSON(CustomExceptionFileId, customExceptionFileId_);
          DARABONBA_PTR_FROM_JSON(CustomExceptionFileName, customExceptionFileName_);
          DARABONBA_PTR_FROM_JSON(CustomExceptionList, customExceptionList_);
          DARABONBA_PTR_FROM_JSON(CustomExceptionUrlPath, customExceptionUrlPath_);
          DARABONBA_PTR_FROM_JSON(CustomExceptionVoiceStyle, customExceptionVoiceStyle_);
          DARABONBA_PTR_FROM_JSON(FlowDesc, flowDesc_);
          DARABONBA_PTR_FROM_JSON(KnowledgeDocIdList, knowledgeDocIdList_);
          DARABONBA_PTR_FROM_JSON(KnowledgeDocNameList, knowledgeDocNameList_);
          DARABONBA_PTR_FROM_JSON(KnowledgeDocOriginalNameList, knowledgeDocOriginalNameList_);
          DARABONBA_PTR_FROM_JSON(KnowledgeEnable, knowledgeEnable_);
          DARABONBA_PTR_FROM_JSON(KnowledgeId, knowledgeId_);
          DARABONBA_PTR_FROM_JSON(MainPurpose, mainPurpose_);
          DARABONBA_PTR_FROM_JSON(OutputTagConfig, outputTagConfig_);
          DARABONBA_PTR_FROM_JSON(PhoneTagConfig, phoneTagConfig_);
          DARABONBA_PTR_FROM_JSON(Prologue, prologue_);
          DARABONBA_PTR_FROM_JSON(RecordingFile, recordingFile_);
          DARABONBA_PTR_FROM_JSON(StartWordType, startWordType_);
          DARABONBA_PTR_FROM_JSON(SysRole, sysRole_);
          DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
          DARABONBA_PTR_FROM_JSON(UserRole, userRole_);
        };
        AiVoiceAgentModelConfig() = default ;
        AiVoiceAgentModelConfig(const AiVoiceAgentModelConfig &) = default ;
        AiVoiceAgentModelConfig(AiVoiceAgentModelConfig &&) = default ;
        AiVoiceAgentModelConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AiVoiceAgentModelConfig() = default ;
        AiVoiceAgentModelConfig& operator=(const AiVoiceAgentModelConfig &) = default ;
        AiVoiceAgentModelConfig& operator=(AiVoiceAgentModelConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PhoneTagConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PhoneTagConfig& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(PhoneTagDescription, phoneTagDescription_);
            DARABONBA_PTR_TO_JSON(PhoneTagEnum, phoneTagEnum_);
            DARABONBA_PTR_TO_JSON(PhoneTagKey, phoneTagKey_);
            DARABONBA_PTR_TO_JSON(PhoneTagName, phoneTagName_);
            DARABONBA_PTR_TO_JSON(PhoneTagRequired, phoneTagRequired_);
            DARABONBA_PTR_TO_JSON(PhoneTagSource, phoneTagSource_);
            DARABONBA_PTR_TO_JSON(PhoneTagType, phoneTagType_);
          };
          friend void from_json(const Darabonba::Json& j, PhoneTagConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(PhoneTagDescription, phoneTagDescription_);
            DARABONBA_PTR_FROM_JSON(PhoneTagEnum, phoneTagEnum_);
            DARABONBA_PTR_FROM_JSON(PhoneTagKey, phoneTagKey_);
            DARABONBA_PTR_FROM_JSON(PhoneTagName, phoneTagName_);
            DARABONBA_PTR_FROM_JSON(PhoneTagRequired, phoneTagRequired_);
            DARABONBA_PTR_FROM_JSON(PhoneTagSource, phoneTagSource_);
            DARABONBA_PTR_FROM_JSON(PhoneTagType, phoneTagType_);
          };
          PhoneTagConfig() = default ;
          PhoneTagConfig(const PhoneTagConfig &) = default ;
          PhoneTagConfig(PhoneTagConfig &&) = default ;
          PhoneTagConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PhoneTagConfig() = default ;
          PhoneTagConfig& operator=(const PhoneTagConfig &) = default ;
          PhoneTagConfig& operator=(PhoneTagConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class PhoneTagEnum : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PhoneTagEnum& obj) { 
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, PhoneTagEnum& obj) { 
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            PhoneTagEnum() = default ;
            PhoneTagEnum(const PhoneTagEnum &) = default ;
            PhoneTagEnum(PhoneTagEnum &&) = default ;
            PhoneTagEnum(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PhoneTagEnum() = default ;
            PhoneTagEnum& operator=(const PhoneTagEnum &) = default ;
            PhoneTagEnum& operator=(PhoneTagEnum &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->value_ == nullptr; };
            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline PhoneTagEnum& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
            inline PhoneTagEnum& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline PhoneTagEnum& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> description_ {};
            shared_ptr<string> id_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->id_ == nullptr
        && this->phoneTagDescription_ == nullptr && this->phoneTagEnum_ == nullptr && this->phoneTagKey_ == nullptr && this->phoneTagName_ == nullptr && this->phoneTagRequired_ == nullptr
        && this->phoneTagSource_ == nullptr && this->phoneTagType_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline PhoneTagConfig& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // phoneTagDescription Field Functions 
          bool hasPhoneTagDescription() const { return this->phoneTagDescription_ != nullptr;};
          void deletePhoneTagDescription() { this->phoneTagDescription_ = nullptr;};
          inline string getPhoneTagDescription() const { DARABONBA_PTR_GET_DEFAULT(phoneTagDescription_, "") };
          inline PhoneTagConfig& setPhoneTagDescription(string phoneTagDescription) { DARABONBA_PTR_SET_VALUE(phoneTagDescription_, phoneTagDescription) };


          // phoneTagEnum Field Functions 
          bool hasPhoneTagEnum() const { return this->phoneTagEnum_ != nullptr;};
          void deletePhoneTagEnum() { this->phoneTagEnum_ = nullptr;};
          inline const vector<PhoneTagConfig::PhoneTagEnum> & getPhoneTagEnum() const { DARABONBA_PTR_GET_CONST(phoneTagEnum_, vector<PhoneTagConfig::PhoneTagEnum>) };
          inline vector<PhoneTagConfig::PhoneTagEnum> getPhoneTagEnum() { DARABONBA_PTR_GET(phoneTagEnum_, vector<PhoneTagConfig::PhoneTagEnum>) };
          inline PhoneTagConfig& setPhoneTagEnum(const vector<PhoneTagConfig::PhoneTagEnum> & phoneTagEnum) { DARABONBA_PTR_SET_VALUE(phoneTagEnum_, phoneTagEnum) };
          inline PhoneTagConfig& setPhoneTagEnum(vector<PhoneTagConfig::PhoneTagEnum> && phoneTagEnum) { DARABONBA_PTR_SET_RVALUE(phoneTagEnum_, phoneTagEnum) };


          // phoneTagKey Field Functions 
          bool hasPhoneTagKey() const { return this->phoneTagKey_ != nullptr;};
          void deletePhoneTagKey() { this->phoneTagKey_ = nullptr;};
          inline string getPhoneTagKey() const { DARABONBA_PTR_GET_DEFAULT(phoneTagKey_, "") };
          inline PhoneTagConfig& setPhoneTagKey(string phoneTagKey) { DARABONBA_PTR_SET_VALUE(phoneTagKey_, phoneTagKey) };


          // phoneTagName Field Functions 
          bool hasPhoneTagName() const { return this->phoneTagName_ != nullptr;};
          void deletePhoneTagName() { this->phoneTagName_ = nullptr;};
          inline string getPhoneTagName() const { DARABONBA_PTR_GET_DEFAULT(phoneTagName_, "") };
          inline PhoneTagConfig& setPhoneTagName(string phoneTagName) { DARABONBA_PTR_SET_VALUE(phoneTagName_, phoneTagName) };


          // phoneTagRequired Field Functions 
          bool hasPhoneTagRequired() const { return this->phoneTagRequired_ != nullptr;};
          void deletePhoneTagRequired() { this->phoneTagRequired_ = nullptr;};
          inline bool getPhoneTagRequired() const { DARABONBA_PTR_GET_DEFAULT(phoneTagRequired_, false) };
          inline PhoneTagConfig& setPhoneTagRequired(bool phoneTagRequired) { DARABONBA_PTR_SET_VALUE(phoneTagRequired_, phoneTagRequired) };


          // phoneTagSource Field Functions 
          bool hasPhoneTagSource() const { return this->phoneTagSource_ != nullptr;};
          void deletePhoneTagSource() { this->phoneTagSource_ = nullptr;};
          inline string getPhoneTagSource() const { DARABONBA_PTR_GET_DEFAULT(phoneTagSource_, "") };
          inline PhoneTagConfig& setPhoneTagSource(string phoneTagSource) { DARABONBA_PTR_SET_VALUE(phoneTagSource_, phoneTagSource) };


          // phoneTagType Field Functions 
          bool hasPhoneTagType() const { return this->phoneTagType_ != nullptr;};
          void deletePhoneTagType() { this->phoneTagType_ = nullptr;};
          inline string getPhoneTagType() const { DARABONBA_PTR_GET_DEFAULT(phoneTagType_, "") };
          inline PhoneTagConfig& setPhoneTagType(string phoneTagType) { DARABONBA_PTR_SET_VALUE(phoneTagType_, phoneTagType) };


        protected:
          shared_ptr<string> id_ {};
          shared_ptr<string> phoneTagDescription_ {};
          shared_ptr<vector<PhoneTagConfig::PhoneTagEnum>> phoneTagEnum_ {};
          shared_ptr<string> phoneTagKey_ {};
          shared_ptr<string> phoneTagName_ {};
          shared_ptr<bool> phoneTagRequired_ {};
          shared_ptr<string> phoneTagSource_ {};
          shared_ptr<string> phoneTagType_ {};
        };

        class OutputTagConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OutputTagConfig& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(OutputTagDescription, outputTagDescription_);
            DARABONBA_PTR_TO_JSON(OutputTagEnum, outputTagEnum_);
            DARABONBA_PTR_TO_JSON(OutputTagName, outputTagName_);
            DARABONBA_PTR_TO_JSON(OutputTagType, outputTagType_);
          };
          friend void from_json(const Darabonba::Json& j, OutputTagConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(OutputTagDescription, outputTagDescription_);
            DARABONBA_PTR_FROM_JSON(OutputTagEnum, outputTagEnum_);
            DARABONBA_PTR_FROM_JSON(OutputTagName, outputTagName_);
            DARABONBA_PTR_FROM_JSON(OutputTagType, outputTagType_);
          };
          OutputTagConfig() = default ;
          OutputTagConfig(const OutputTagConfig &) = default ;
          OutputTagConfig(OutputTagConfig &&) = default ;
          OutputTagConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OutputTagConfig() = default ;
          OutputTagConfig& operator=(const OutputTagConfig &) = default ;
          OutputTagConfig& operator=(OutputTagConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class OutputTagEnum : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const OutputTagEnum& obj) { 
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, OutputTagEnum& obj) { 
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            OutputTagEnum() = default ;
            OutputTagEnum(const OutputTagEnum &) = default ;
            OutputTagEnum(OutputTagEnum &&) = default ;
            OutputTagEnum(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~OutputTagEnum() = default ;
            OutputTagEnum& operator=(const OutputTagEnum &) = default ;
            OutputTagEnum& operator=(OutputTagEnum &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->value_ == nullptr; };
            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline OutputTagEnum& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
            inline OutputTagEnum& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline OutputTagEnum& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> description_ {};
            shared_ptr<string> id_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->id_ == nullptr
        && this->outputTagDescription_ == nullptr && this->outputTagEnum_ == nullptr && this->outputTagName_ == nullptr && this->outputTagType_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline OutputTagConfig& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // outputTagDescription Field Functions 
          bool hasOutputTagDescription() const { return this->outputTagDescription_ != nullptr;};
          void deleteOutputTagDescription() { this->outputTagDescription_ = nullptr;};
          inline string getOutputTagDescription() const { DARABONBA_PTR_GET_DEFAULT(outputTagDescription_, "") };
          inline OutputTagConfig& setOutputTagDescription(string outputTagDescription) { DARABONBA_PTR_SET_VALUE(outputTagDescription_, outputTagDescription) };


          // outputTagEnum Field Functions 
          bool hasOutputTagEnum() const { return this->outputTagEnum_ != nullptr;};
          void deleteOutputTagEnum() { this->outputTagEnum_ = nullptr;};
          inline const vector<OutputTagConfig::OutputTagEnum> & getOutputTagEnum() const { DARABONBA_PTR_GET_CONST(outputTagEnum_, vector<OutputTagConfig::OutputTagEnum>) };
          inline vector<OutputTagConfig::OutputTagEnum> getOutputTagEnum() { DARABONBA_PTR_GET(outputTagEnum_, vector<OutputTagConfig::OutputTagEnum>) };
          inline OutputTagConfig& setOutputTagEnum(const vector<OutputTagConfig::OutputTagEnum> & outputTagEnum) { DARABONBA_PTR_SET_VALUE(outputTagEnum_, outputTagEnum) };
          inline OutputTagConfig& setOutputTagEnum(vector<OutputTagConfig::OutputTagEnum> && outputTagEnum) { DARABONBA_PTR_SET_RVALUE(outputTagEnum_, outputTagEnum) };


          // outputTagName Field Functions 
          bool hasOutputTagName() const { return this->outputTagName_ != nullptr;};
          void deleteOutputTagName() { this->outputTagName_ = nullptr;};
          inline string getOutputTagName() const { DARABONBA_PTR_GET_DEFAULT(outputTagName_, "") };
          inline OutputTagConfig& setOutputTagName(string outputTagName) { DARABONBA_PTR_SET_VALUE(outputTagName_, outputTagName) };


          // outputTagType Field Functions 
          bool hasOutputTagType() const { return this->outputTagType_ != nullptr;};
          void deleteOutputTagType() { this->outputTagType_ = nullptr;};
          inline string getOutputTagType() const { DARABONBA_PTR_GET_DEFAULT(outputTagType_, "") };
          inline OutputTagConfig& setOutputTagType(string outputTagType) { DARABONBA_PTR_SET_VALUE(outputTagType_, outputTagType) };


        protected:
          shared_ptr<string> id_ {};
          shared_ptr<string> outputTagDescription_ {};
          shared_ptr<vector<OutputTagConfig::OutputTagEnum>> outputTagEnum_ {};
          shared_ptr<string> outputTagName_ {};
          shared_ptr<string> outputTagType_ {};
        };

        class MainPurpose : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MainPurpose& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(MainPurposeDescription, mainPurposeDescription_);
            DARABONBA_PTR_TO_JSON(MainPurposeEnum, mainPurposeEnum_);
            DARABONBA_PTR_TO_JSON(MainPurposeName, mainPurposeName_);
            DARABONBA_PTR_TO_JSON(MainPurposeType, mainPurposeType_);
          };
          friend void from_json(const Darabonba::Json& j, MainPurpose& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(MainPurposeDescription, mainPurposeDescription_);
            DARABONBA_PTR_FROM_JSON(MainPurposeEnum, mainPurposeEnum_);
            DARABONBA_PTR_FROM_JSON(MainPurposeName, mainPurposeName_);
            DARABONBA_PTR_FROM_JSON(MainPurposeType, mainPurposeType_);
          };
          MainPurpose() = default ;
          MainPurpose(const MainPurpose &) = default ;
          MainPurpose(MainPurpose &&) = default ;
          MainPurpose(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MainPurpose() = default ;
          MainPurpose& operator=(const MainPurpose &) = default ;
          MainPurpose& operator=(MainPurpose &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class MainPurposeEnum : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MainPurposeEnum& obj) { 
              DARABONBA_PTR_TO_JSON(Description, description_);
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, MainPurposeEnum& obj) { 
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            MainPurposeEnum() = default ;
            MainPurposeEnum(const MainPurposeEnum &) = default ;
            MainPurposeEnum(MainPurposeEnum &&) = default ;
            MainPurposeEnum(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MainPurposeEnum() = default ;
            MainPurposeEnum& operator=(const MainPurposeEnum &) = default ;
            MainPurposeEnum& operator=(MainPurposeEnum &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->value_ == nullptr; };
            // description Field Functions 
            bool hasDescription() const { return this->description_ != nullptr;};
            void deleteDescription() { this->description_ = nullptr;};
            inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
            inline MainPurposeEnum& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
            inline MainPurposeEnum& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline MainPurposeEnum& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> description_ {};
            shared_ptr<string> id_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->id_ == nullptr
        && this->mainPurposeDescription_ == nullptr && this->mainPurposeEnum_ == nullptr && this->mainPurposeName_ == nullptr && this->mainPurposeType_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline MainPurpose& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // mainPurposeDescription Field Functions 
          bool hasMainPurposeDescription() const { return this->mainPurposeDescription_ != nullptr;};
          void deleteMainPurposeDescription() { this->mainPurposeDescription_ = nullptr;};
          inline string getMainPurposeDescription() const { DARABONBA_PTR_GET_DEFAULT(mainPurposeDescription_, "") };
          inline MainPurpose& setMainPurposeDescription(string mainPurposeDescription) { DARABONBA_PTR_SET_VALUE(mainPurposeDescription_, mainPurposeDescription) };


          // mainPurposeEnum Field Functions 
          bool hasMainPurposeEnum() const { return this->mainPurposeEnum_ != nullptr;};
          void deleteMainPurposeEnum() { this->mainPurposeEnum_ = nullptr;};
          inline const vector<MainPurpose::MainPurposeEnum> & getMainPurposeEnum() const { DARABONBA_PTR_GET_CONST(mainPurposeEnum_, vector<MainPurpose::MainPurposeEnum>) };
          inline vector<MainPurpose::MainPurposeEnum> getMainPurposeEnum() { DARABONBA_PTR_GET(mainPurposeEnum_, vector<MainPurpose::MainPurposeEnum>) };
          inline MainPurpose& setMainPurposeEnum(const vector<MainPurpose::MainPurposeEnum> & mainPurposeEnum) { DARABONBA_PTR_SET_VALUE(mainPurposeEnum_, mainPurposeEnum) };
          inline MainPurpose& setMainPurposeEnum(vector<MainPurpose::MainPurposeEnum> && mainPurposeEnum) { DARABONBA_PTR_SET_RVALUE(mainPurposeEnum_, mainPurposeEnum) };


          // mainPurposeName Field Functions 
          bool hasMainPurposeName() const { return this->mainPurposeName_ != nullptr;};
          void deleteMainPurposeName() { this->mainPurposeName_ = nullptr;};
          inline string getMainPurposeName() const { DARABONBA_PTR_GET_DEFAULT(mainPurposeName_, "") };
          inline MainPurpose& setMainPurposeName(string mainPurposeName) { DARABONBA_PTR_SET_VALUE(mainPurposeName_, mainPurposeName) };


          // mainPurposeType Field Functions 
          bool hasMainPurposeType() const { return this->mainPurposeType_ != nullptr;};
          void deleteMainPurposeType() { this->mainPurposeType_ = nullptr;};
          inline string getMainPurposeType() const { DARABONBA_PTR_GET_DEFAULT(mainPurposeType_, "") };
          inline MainPurpose& setMainPurposeType(string mainPurposeType) { DARABONBA_PTR_SET_VALUE(mainPurposeType_, mainPurposeType) };


        protected:
          shared_ptr<string> id_ {};
          shared_ptr<string> mainPurposeDescription_ {};
          shared_ptr<vector<MainPurpose::MainPurposeEnum>> mainPurposeEnum_ {};
          shared_ptr<string> mainPurposeName_ {};
          shared_ptr<string> mainPurposeType_ {};
        };

        class CustomExceptionList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CustomExceptionList& obj) { 
            DARABONBA_PTR_TO_JSON(ExceptionSign, exceptionSign_);
            DARABONBA_PTR_TO_JSON(ExceptionType, exceptionType_);
            DARABONBA_PTR_TO_JSON(Reply, reply_);
            DARABONBA_PTR_TO_JSON(SupportBreak, supportBreak_);
          };
          friend void from_json(const Darabonba::Json& j, CustomExceptionList& obj) { 
            DARABONBA_PTR_FROM_JSON(ExceptionSign, exceptionSign_);
            DARABONBA_PTR_FROM_JSON(ExceptionType, exceptionType_);
            DARABONBA_PTR_FROM_JSON(Reply, reply_);
            DARABONBA_PTR_FROM_JSON(SupportBreak, supportBreak_);
          };
          CustomExceptionList() = default ;
          CustomExceptionList(const CustomExceptionList &) = default ;
          CustomExceptionList(CustomExceptionList &&) = default ;
          CustomExceptionList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CustomExceptionList() = default ;
          CustomExceptionList& operator=(const CustomExceptionList &) = default ;
          CustomExceptionList& operator=(CustomExceptionList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->exceptionSign_ == nullptr
        && this->exceptionType_ == nullptr && this->reply_ == nullptr && this->supportBreak_ == nullptr; };
          // exceptionSign Field Functions 
          bool hasExceptionSign() const { return this->exceptionSign_ != nullptr;};
          void deleteExceptionSign() { this->exceptionSign_ = nullptr;};
          inline bool getExceptionSign() const { DARABONBA_PTR_GET_DEFAULT(exceptionSign_, false) };
          inline CustomExceptionList& setExceptionSign(bool exceptionSign) { DARABONBA_PTR_SET_VALUE(exceptionSign_, exceptionSign) };


          // exceptionType Field Functions 
          bool hasExceptionType() const { return this->exceptionType_ != nullptr;};
          void deleteExceptionType() { this->exceptionType_ = nullptr;};
          inline string getExceptionType() const { DARABONBA_PTR_GET_DEFAULT(exceptionType_, "") };
          inline CustomExceptionList& setExceptionType(string exceptionType) { DARABONBA_PTR_SET_VALUE(exceptionType_, exceptionType) };


          // reply Field Functions 
          bool hasReply() const { return this->reply_ != nullptr;};
          void deleteReply() { this->reply_ = nullptr;};
          inline string getReply() const { DARABONBA_PTR_GET_DEFAULT(reply_, "") };
          inline CustomExceptionList& setReply(string reply) { DARABONBA_PTR_SET_VALUE(reply_, reply) };


          // supportBreak Field Functions 
          bool hasSupportBreak() const { return this->supportBreak_ != nullptr;};
          void deleteSupportBreak() { this->supportBreak_ = nullptr;};
          inline bool getSupportBreak() const { DARABONBA_PTR_GET_DEFAULT(supportBreak_, false) };
          inline CustomExceptionList& setSupportBreak(bool supportBreak) { DARABONBA_PTR_SET_VALUE(supportBreak_, supportBreak) };


        protected:
          shared_ptr<bool> exceptionSign_ {};
          shared_ptr<string> exceptionType_ {};
          shared_ptr<string> reply_ {};
          shared_ptr<bool> supportBreak_ {};
        };

        class ChildTaskList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ChildTaskList& obj) { 
            DARABONBA_PTR_TO_JSON(ChildTaskDescription, childTaskDescription_);
            DARABONBA_PTR_TO_JSON(ChildTaskName, childTaskName_);
            DARABONBA_PTR_TO_JSON(Id, id_);
          };
          friend void from_json(const Darabonba::Json& j, ChildTaskList& obj) { 
            DARABONBA_PTR_FROM_JSON(ChildTaskDescription, childTaskDescription_);
            DARABONBA_PTR_FROM_JSON(ChildTaskName, childTaskName_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
          };
          ChildTaskList() = default ;
          ChildTaskList(const ChildTaskList &) = default ;
          ChildTaskList(ChildTaskList &&) = default ;
          ChildTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ChildTaskList() = default ;
          ChildTaskList& operator=(const ChildTaskList &) = default ;
          ChildTaskList& operator=(ChildTaskList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->childTaskDescription_ == nullptr
        && this->childTaskName_ == nullptr && this->id_ == nullptr; };
          // childTaskDescription Field Functions 
          bool hasChildTaskDescription() const { return this->childTaskDescription_ != nullptr;};
          void deleteChildTaskDescription() { this->childTaskDescription_ = nullptr;};
          inline string getChildTaskDescription() const { DARABONBA_PTR_GET_DEFAULT(childTaskDescription_, "") };
          inline ChildTaskList& setChildTaskDescription(string childTaskDescription) { DARABONBA_PTR_SET_VALUE(childTaskDescription_, childTaskDescription) };


          // childTaskName Field Functions 
          bool hasChildTaskName() const { return this->childTaskName_ != nullptr;};
          void deleteChildTaskName() { this->childTaskName_ = nullptr;};
          inline string getChildTaskName() const { DARABONBA_PTR_GET_DEFAULT(childTaskName_, "") };
          inline ChildTaskList& setChildTaskName(string childTaskName) { DARABONBA_PTR_SET_VALUE(childTaskName_, childTaskName) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline ChildTaskList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        protected:
          shared_ptr<string> childTaskDescription_ {};
          shared_ptr<string> childTaskName_ {};
          shared_ptr<string> id_ {};
        };

        virtual bool empty() const override { return this->basicTaskDescription_ == nullptr
        && this->businessType_ == nullptr && this->childTaskList_ == nullptr && this->customExceptionEnable_ == nullptr && this->customExceptionFileId_ == nullptr && this->customExceptionFileName_ == nullptr
        && this->customExceptionList_ == nullptr && this->customExceptionUrlPath_ == nullptr && this->customExceptionVoiceStyle_ == nullptr && this->flowDesc_ == nullptr && this->knowledgeDocIdList_ == nullptr
        && this->knowledgeDocNameList_ == nullptr && this->knowledgeDocOriginalNameList_ == nullptr && this->knowledgeEnable_ == nullptr && this->knowledgeId_ == nullptr && this->mainPurpose_ == nullptr
        && this->outputTagConfig_ == nullptr && this->phoneTagConfig_ == nullptr && this->prologue_ == nullptr && this->recordingFile_ == nullptr && this->startWordType_ == nullptr
        && this->sysRole_ == nullptr && this->taskType_ == nullptr && this->userRole_ == nullptr; };
        // basicTaskDescription Field Functions 
        bool hasBasicTaskDescription() const { return this->basicTaskDescription_ != nullptr;};
        void deleteBasicTaskDescription() { this->basicTaskDescription_ = nullptr;};
        inline string getBasicTaskDescription() const { DARABONBA_PTR_GET_DEFAULT(basicTaskDescription_, "") };
        inline AiVoiceAgentModelConfig& setBasicTaskDescription(string basicTaskDescription) { DARABONBA_PTR_SET_VALUE(basicTaskDescription_, basicTaskDescription) };


        // businessType Field Functions 
        bool hasBusinessType() const { return this->businessType_ != nullptr;};
        void deleteBusinessType() { this->businessType_ = nullptr;};
        inline int64_t getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, 0L) };
        inline AiVoiceAgentModelConfig& setBusinessType(int64_t businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


        // childTaskList Field Functions 
        bool hasChildTaskList() const { return this->childTaskList_ != nullptr;};
        void deleteChildTaskList() { this->childTaskList_ = nullptr;};
        inline const vector<AiVoiceAgentModelConfig::ChildTaskList> & getChildTaskList() const { DARABONBA_PTR_GET_CONST(childTaskList_, vector<AiVoiceAgentModelConfig::ChildTaskList>) };
        inline vector<AiVoiceAgentModelConfig::ChildTaskList> getChildTaskList() { DARABONBA_PTR_GET(childTaskList_, vector<AiVoiceAgentModelConfig::ChildTaskList>) };
        inline AiVoiceAgentModelConfig& setChildTaskList(const vector<AiVoiceAgentModelConfig::ChildTaskList> & childTaskList) { DARABONBA_PTR_SET_VALUE(childTaskList_, childTaskList) };
        inline AiVoiceAgentModelConfig& setChildTaskList(vector<AiVoiceAgentModelConfig::ChildTaskList> && childTaskList) { DARABONBA_PTR_SET_RVALUE(childTaskList_, childTaskList) };


        // customExceptionEnable Field Functions 
        bool hasCustomExceptionEnable() const { return this->customExceptionEnable_ != nullptr;};
        void deleteCustomExceptionEnable() { this->customExceptionEnable_ = nullptr;};
        inline bool getCustomExceptionEnable() const { DARABONBA_PTR_GET_DEFAULT(customExceptionEnable_, false) };
        inline AiVoiceAgentModelConfig& setCustomExceptionEnable(bool customExceptionEnable) { DARABONBA_PTR_SET_VALUE(customExceptionEnable_, customExceptionEnable) };


        // customExceptionFileId Field Functions 
        bool hasCustomExceptionFileId() const { return this->customExceptionFileId_ != nullptr;};
        void deleteCustomExceptionFileId() { this->customExceptionFileId_ = nullptr;};
        inline string getCustomExceptionFileId() const { DARABONBA_PTR_GET_DEFAULT(customExceptionFileId_, "") };
        inline AiVoiceAgentModelConfig& setCustomExceptionFileId(string customExceptionFileId) { DARABONBA_PTR_SET_VALUE(customExceptionFileId_, customExceptionFileId) };


        // customExceptionFileName Field Functions 
        bool hasCustomExceptionFileName() const { return this->customExceptionFileName_ != nullptr;};
        void deleteCustomExceptionFileName() { this->customExceptionFileName_ = nullptr;};
        inline string getCustomExceptionFileName() const { DARABONBA_PTR_GET_DEFAULT(customExceptionFileName_, "") };
        inline AiVoiceAgentModelConfig& setCustomExceptionFileName(string customExceptionFileName) { DARABONBA_PTR_SET_VALUE(customExceptionFileName_, customExceptionFileName) };


        // customExceptionList Field Functions 
        bool hasCustomExceptionList() const { return this->customExceptionList_ != nullptr;};
        void deleteCustomExceptionList() { this->customExceptionList_ = nullptr;};
        inline const vector<AiVoiceAgentModelConfig::CustomExceptionList> & getCustomExceptionList() const { DARABONBA_PTR_GET_CONST(customExceptionList_, vector<AiVoiceAgentModelConfig::CustomExceptionList>) };
        inline vector<AiVoiceAgentModelConfig::CustomExceptionList> getCustomExceptionList() { DARABONBA_PTR_GET(customExceptionList_, vector<AiVoiceAgentModelConfig::CustomExceptionList>) };
        inline AiVoiceAgentModelConfig& setCustomExceptionList(const vector<AiVoiceAgentModelConfig::CustomExceptionList> & customExceptionList) { DARABONBA_PTR_SET_VALUE(customExceptionList_, customExceptionList) };
        inline AiVoiceAgentModelConfig& setCustomExceptionList(vector<AiVoiceAgentModelConfig::CustomExceptionList> && customExceptionList) { DARABONBA_PTR_SET_RVALUE(customExceptionList_, customExceptionList) };


        // customExceptionUrlPath Field Functions 
        bool hasCustomExceptionUrlPath() const { return this->customExceptionUrlPath_ != nullptr;};
        void deleteCustomExceptionUrlPath() { this->customExceptionUrlPath_ = nullptr;};
        inline string getCustomExceptionUrlPath() const { DARABONBA_PTR_GET_DEFAULT(customExceptionUrlPath_, "") };
        inline AiVoiceAgentModelConfig& setCustomExceptionUrlPath(string customExceptionUrlPath) { DARABONBA_PTR_SET_VALUE(customExceptionUrlPath_, customExceptionUrlPath) };


        // customExceptionVoiceStyle Field Functions 
        bool hasCustomExceptionVoiceStyle() const { return this->customExceptionVoiceStyle_ != nullptr;};
        void deleteCustomExceptionVoiceStyle() { this->customExceptionVoiceStyle_ = nullptr;};
        inline int64_t getCustomExceptionVoiceStyle() const { DARABONBA_PTR_GET_DEFAULT(customExceptionVoiceStyle_, 0L) };
        inline AiVoiceAgentModelConfig& setCustomExceptionVoiceStyle(int64_t customExceptionVoiceStyle) { DARABONBA_PTR_SET_VALUE(customExceptionVoiceStyle_, customExceptionVoiceStyle) };


        // flowDesc Field Functions 
        bool hasFlowDesc() const { return this->flowDesc_ != nullptr;};
        void deleteFlowDesc() { this->flowDesc_ = nullptr;};
        inline string getFlowDesc() const { DARABONBA_PTR_GET_DEFAULT(flowDesc_, "") };
        inline AiVoiceAgentModelConfig& setFlowDesc(string flowDesc) { DARABONBA_PTR_SET_VALUE(flowDesc_, flowDesc) };


        // knowledgeDocIdList Field Functions 
        bool hasKnowledgeDocIdList() const { return this->knowledgeDocIdList_ != nullptr;};
        void deleteKnowledgeDocIdList() { this->knowledgeDocIdList_ = nullptr;};
        inline const vector<string> & getKnowledgeDocIdList() const { DARABONBA_PTR_GET_CONST(knowledgeDocIdList_, vector<string>) };
        inline vector<string> getKnowledgeDocIdList() { DARABONBA_PTR_GET(knowledgeDocIdList_, vector<string>) };
        inline AiVoiceAgentModelConfig& setKnowledgeDocIdList(const vector<string> & knowledgeDocIdList) { DARABONBA_PTR_SET_VALUE(knowledgeDocIdList_, knowledgeDocIdList) };
        inline AiVoiceAgentModelConfig& setKnowledgeDocIdList(vector<string> && knowledgeDocIdList) { DARABONBA_PTR_SET_RVALUE(knowledgeDocIdList_, knowledgeDocIdList) };


        // knowledgeDocNameList Field Functions 
        bool hasKnowledgeDocNameList() const { return this->knowledgeDocNameList_ != nullptr;};
        void deleteKnowledgeDocNameList() { this->knowledgeDocNameList_ = nullptr;};
        inline const vector<string> & getKnowledgeDocNameList() const { DARABONBA_PTR_GET_CONST(knowledgeDocNameList_, vector<string>) };
        inline vector<string> getKnowledgeDocNameList() { DARABONBA_PTR_GET(knowledgeDocNameList_, vector<string>) };
        inline AiVoiceAgentModelConfig& setKnowledgeDocNameList(const vector<string> & knowledgeDocNameList) { DARABONBA_PTR_SET_VALUE(knowledgeDocNameList_, knowledgeDocNameList) };
        inline AiVoiceAgentModelConfig& setKnowledgeDocNameList(vector<string> && knowledgeDocNameList) { DARABONBA_PTR_SET_RVALUE(knowledgeDocNameList_, knowledgeDocNameList) };


        // knowledgeDocOriginalNameList Field Functions 
        bool hasKnowledgeDocOriginalNameList() const { return this->knowledgeDocOriginalNameList_ != nullptr;};
        void deleteKnowledgeDocOriginalNameList() { this->knowledgeDocOriginalNameList_ = nullptr;};
        inline const vector<string> & getKnowledgeDocOriginalNameList() const { DARABONBA_PTR_GET_CONST(knowledgeDocOriginalNameList_, vector<string>) };
        inline vector<string> getKnowledgeDocOriginalNameList() { DARABONBA_PTR_GET(knowledgeDocOriginalNameList_, vector<string>) };
        inline AiVoiceAgentModelConfig& setKnowledgeDocOriginalNameList(const vector<string> & knowledgeDocOriginalNameList) { DARABONBA_PTR_SET_VALUE(knowledgeDocOriginalNameList_, knowledgeDocOriginalNameList) };
        inline AiVoiceAgentModelConfig& setKnowledgeDocOriginalNameList(vector<string> && knowledgeDocOriginalNameList) { DARABONBA_PTR_SET_RVALUE(knowledgeDocOriginalNameList_, knowledgeDocOriginalNameList) };


        // knowledgeEnable Field Functions 
        bool hasKnowledgeEnable() const { return this->knowledgeEnable_ != nullptr;};
        void deleteKnowledgeEnable() { this->knowledgeEnable_ = nullptr;};
        inline bool getKnowledgeEnable() const { DARABONBA_PTR_GET_DEFAULT(knowledgeEnable_, false) };
        inline AiVoiceAgentModelConfig& setKnowledgeEnable(bool knowledgeEnable) { DARABONBA_PTR_SET_VALUE(knowledgeEnable_, knowledgeEnable) };


        // knowledgeId Field Functions 
        bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
        void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
        inline string getKnowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, "") };
        inline AiVoiceAgentModelConfig& setKnowledgeId(string knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


        // mainPurpose Field Functions 
        bool hasMainPurpose() const { return this->mainPurpose_ != nullptr;};
        void deleteMainPurpose() { this->mainPurpose_ = nullptr;};
        inline const AiVoiceAgentModelConfig::MainPurpose & getMainPurpose() const { DARABONBA_PTR_GET_CONST(mainPurpose_, AiVoiceAgentModelConfig::MainPurpose) };
        inline AiVoiceAgentModelConfig::MainPurpose getMainPurpose() { DARABONBA_PTR_GET(mainPurpose_, AiVoiceAgentModelConfig::MainPurpose) };
        inline AiVoiceAgentModelConfig& setMainPurpose(const AiVoiceAgentModelConfig::MainPurpose & mainPurpose) { DARABONBA_PTR_SET_VALUE(mainPurpose_, mainPurpose) };
        inline AiVoiceAgentModelConfig& setMainPurpose(AiVoiceAgentModelConfig::MainPurpose && mainPurpose) { DARABONBA_PTR_SET_RVALUE(mainPurpose_, mainPurpose) };


        // outputTagConfig Field Functions 
        bool hasOutputTagConfig() const { return this->outputTagConfig_ != nullptr;};
        void deleteOutputTagConfig() { this->outputTagConfig_ = nullptr;};
        inline const vector<AiVoiceAgentModelConfig::OutputTagConfig> & getOutputTagConfig() const { DARABONBA_PTR_GET_CONST(outputTagConfig_, vector<AiVoiceAgentModelConfig::OutputTagConfig>) };
        inline vector<AiVoiceAgentModelConfig::OutputTagConfig> getOutputTagConfig() { DARABONBA_PTR_GET(outputTagConfig_, vector<AiVoiceAgentModelConfig::OutputTagConfig>) };
        inline AiVoiceAgentModelConfig& setOutputTagConfig(const vector<AiVoiceAgentModelConfig::OutputTagConfig> & outputTagConfig) { DARABONBA_PTR_SET_VALUE(outputTagConfig_, outputTagConfig) };
        inline AiVoiceAgentModelConfig& setOutputTagConfig(vector<AiVoiceAgentModelConfig::OutputTagConfig> && outputTagConfig) { DARABONBA_PTR_SET_RVALUE(outputTagConfig_, outputTagConfig) };


        // phoneTagConfig Field Functions 
        bool hasPhoneTagConfig() const { return this->phoneTagConfig_ != nullptr;};
        void deletePhoneTagConfig() { this->phoneTagConfig_ = nullptr;};
        inline const vector<AiVoiceAgentModelConfig::PhoneTagConfig> & getPhoneTagConfig() const { DARABONBA_PTR_GET_CONST(phoneTagConfig_, vector<AiVoiceAgentModelConfig::PhoneTagConfig>) };
        inline vector<AiVoiceAgentModelConfig::PhoneTagConfig> getPhoneTagConfig() { DARABONBA_PTR_GET(phoneTagConfig_, vector<AiVoiceAgentModelConfig::PhoneTagConfig>) };
        inline AiVoiceAgentModelConfig& setPhoneTagConfig(const vector<AiVoiceAgentModelConfig::PhoneTagConfig> & phoneTagConfig) { DARABONBA_PTR_SET_VALUE(phoneTagConfig_, phoneTagConfig) };
        inline AiVoiceAgentModelConfig& setPhoneTagConfig(vector<AiVoiceAgentModelConfig::PhoneTagConfig> && phoneTagConfig) { DARABONBA_PTR_SET_RVALUE(phoneTagConfig_, phoneTagConfig) };


        // prologue Field Functions 
        bool hasPrologue() const { return this->prologue_ != nullptr;};
        void deletePrologue() { this->prologue_ = nullptr;};
        inline string getPrologue() const { DARABONBA_PTR_GET_DEFAULT(prologue_, "") };
        inline AiVoiceAgentModelConfig& setPrologue(string prologue) { DARABONBA_PTR_SET_VALUE(prologue_, prologue) };


        // recordingFile Field Functions 
        bool hasRecordingFile() const { return this->recordingFile_ != nullptr;};
        void deleteRecordingFile() { this->recordingFile_ = nullptr;};
        inline string getRecordingFile() const { DARABONBA_PTR_GET_DEFAULT(recordingFile_, "") };
        inline AiVoiceAgentModelConfig& setRecordingFile(string recordingFile) { DARABONBA_PTR_SET_VALUE(recordingFile_, recordingFile) };


        // startWordType Field Functions 
        bool hasStartWordType() const { return this->startWordType_ != nullptr;};
        void deleteStartWordType() { this->startWordType_ = nullptr;};
        inline int64_t getStartWordType() const { DARABONBA_PTR_GET_DEFAULT(startWordType_, 0L) };
        inline AiVoiceAgentModelConfig& setStartWordType(int64_t startWordType) { DARABONBA_PTR_SET_VALUE(startWordType_, startWordType) };


        // sysRole Field Functions 
        bool hasSysRole() const { return this->sysRole_ != nullptr;};
        void deleteSysRole() { this->sysRole_ = nullptr;};
        inline string getSysRole() const { DARABONBA_PTR_GET_DEFAULT(sysRole_, "") };
        inline AiVoiceAgentModelConfig& setSysRole(string sysRole) { DARABONBA_PTR_SET_VALUE(sysRole_, sysRole) };


        // taskType Field Functions 
        bool hasTaskType() const { return this->taskType_ != nullptr;};
        void deleteTaskType() { this->taskType_ = nullptr;};
        inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
        inline AiVoiceAgentModelConfig& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


        // userRole Field Functions 
        bool hasUserRole() const { return this->userRole_ != nullptr;};
        void deleteUserRole() { this->userRole_ = nullptr;};
        inline string getUserRole() const { DARABONBA_PTR_GET_DEFAULT(userRole_, "") };
        inline AiVoiceAgentModelConfig& setUserRole(string userRole) { DARABONBA_PTR_SET_VALUE(userRole_, userRole) };


      protected:
        shared_ptr<string> basicTaskDescription_ {};
        shared_ptr<int64_t> businessType_ {};
        shared_ptr<vector<AiVoiceAgentModelConfig::ChildTaskList>> childTaskList_ {};
        shared_ptr<bool> customExceptionEnable_ {};
        shared_ptr<string> customExceptionFileId_ {};
        shared_ptr<string> customExceptionFileName_ {};
        shared_ptr<vector<AiVoiceAgentModelConfig::CustomExceptionList>> customExceptionList_ {};
        shared_ptr<string> customExceptionUrlPath_ {};
        shared_ptr<int64_t> customExceptionVoiceStyle_ {};
        shared_ptr<string> flowDesc_ {};
        shared_ptr<vector<string>> knowledgeDocIdList_ {};
        shared_ptr<vector<string>> knowledgeDocNameList_ {};
        shared_ptr<vector<string>> knowledgeDocOriginalNameList_ {};
        shared_ptr<bool> knowledgeEnable_ {};
        shared_ptr<string> knowledgeId_ {};
        shared_ptr<AiVoiceAgentModelConfig::MainPurpose> mainPurpose_ {};
        shared_ptr<vector<AiVoiceAgentModelConfig::OutputTagConfig>> outputTagConfig_ {};
        shared_ptr<vector<AiVoiceAgentModelConfig::PhoneTagConfig>> phoneTagConfig_ {};
        shared_ptr<string> prologue_ {};
        shared_ptr<string> recordingFile_ {};
        shared_ptr<int64_t> startWordType_ {};
        shared_ptr<string> sysRole_ {};
        shared_ptr<string> taskType_ {};
        shared_ptr<string> userRole_ {};
      };

      class AiVoiceAgentCallConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AiVoiceAgentCallConfig& obj) { 
          DARABONBA_PTR_TO_JSON(EventConfig, eventConfig_);
          DARABONBA_PTR_TO_JSON(TtsConfig, ttsConfig_);
          DARABONBA_PTR_TO_JSON(VocabId, vocabId_);
        };
        friend void from_json(const Darabonba::Json& j, AiVoiceAgentCallConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(EventConfig, eventConfig_);
          DARABONBA_PTR_FROM_JSON(TtsConfig, ttsConfig_);
          DARABONBA_PTR_FROM_JSON(VocabId, vocabId_);
        };
        AiVoiceAgentCallConfig() = default ;
        AiVoiceAgentCallConfig(const AiVoiceAgentCallConfig &) = default ;
        AiVoiceAgentCallConfig(AiVoiceAgentCallConfig &&) = default ;
        AiVoiceAgentCallConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AiVoiceAgentCallConfig() = default ;
        AiVoiceAgentCallConfig& operator=(const AiVoiceAgentCallConfig &) = default ;
        AiVoiceAgentCallConfig& operator=(AiVoiceAgentCallConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TtsConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TtsConfig& obj) { 
            DARABONBA_PTR_TO_JSON(BackgroundEnabled, backgroundEnabled_);
            DARABONBA_PTR_TO_JSON(BackgroundSound, backgroundSound_);
            DARABONBA_PTR_TO_JSON(BackgroundVolume, backgroundVolume_);
            DARABONBA_PTR_TO_JSON(MixingEnabled, mixingEnabled_);
            DARABONBA_PTR_TO_JSON(MixingTemplate, mixingTemplate_);
            DARABONBA_PTR_TO_JSON(TtsSpeed, ttsSpeed_);
            DARABONBA_PTR_TO_JSON(TtsStyle, ttsStyle_);
            DARABONBA_PTR_TO_JSON(TtsVolume, ttsVolume_);
            DARABONBA_PTR_TO_JSON(VoiceCode, voiceCode_);
            DARABONBA_PTR_TO_JSON(VoiceType, voiceType_);
          };
          friend void from_json(const Darabonba::Json& j, TtsConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(BackgroundEnabled, backgroundEnabled_);
            DARABONBA_PTR_FROM_JSON(BackgroundSound, backgroundSound_);
            DARABONBA_PTR_FROM_JSON(BackgroundVolume, backgroundVolume_);
            DARABONBA_PTR_FROM_JSON(MixingEnabled, mixingEnabled_);
            DARABONBA_PTR_FROM_JSON(MixingTemplate, mixingTemplate_);
            DARABONBA_PTR_FROM_JSON(TtsSpeed, ttsSpeed_);
            DARABONBA_PTR_FROM_JSON(TtsStyle, ttsStyle_);
            DARABONBA_PTR_FROM_JSON(TtsVolume, ttsVolume_);
            DARABONBA_PTR_FROM_JSON(VoiceCode, voiceCode_);
            DARABONBA_PTR_FROM_JSON(VoiceType, voiceType_);
          };
          TtsConfig() = default ;
          TtsConfig(const TtsConfig &) = default ;
          TtsConfig(TtsConfig &&) = default ;
          TtsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TtsConfig() = default ;
          TtsConfig& operator=(const TtsConfig &) = default ;
          TtsConfig& operator=(TtsConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->backgroundEnabled_ == nullptr
        && this->backgroundSound_ == nullptr && this->backgroundVolume_ == nullptr && this->mixingEnabled_ == nullptr && this->mixingTemplate_ == nullptr && this->ttsSpeed_ == nullptr
        && this->ttsStyle_ == nullptr && this->ttsVolume_ == nullptr && this->voiceCode_ == nullptr && this->voiceType_ == nullptr; };
          // backgroundEnabled Field Functions 
          bool hasBackgroundEnabled() const { return this->backgroundEnabled_ != nullptr;};
          void deleteBackgroundEnabled() { this->backgroundEnabled_ = nullptr;};
          inline bool getBackgroundEnabled() const { DARABONBA_PTR_GET_DEFAULT(backgroundEnabled_, false) };
          inline TtsConfig& setBackgroundEnabled(bool backgroundEnabled) { DARABONBA_PTR_SET_VALUE(backgroundEnabled_, backgroundEnabled) };


          // backgroundSound Field Functions 
          bool hasBackgroundSound() const { return this->backgroundSound_ != nullptr;};
          void deleteBackgroundSound() { this->backgroundSound_ = nullptr;};
          inline int64_t getBackgroundSound() const { DARABONBA_PTR_GET_DEFAULT(backgroundSound_, 0L) };
          inline TtsConfig& setBackgroundSound(int64_t backgroundSound) { DARABONBA_PTR_SET_VALUE(backgroundSound_, backgroundSound) };


          // backgroundVolume Field Functions 
          bool hasBackgroundVolume() const { return this->backgroundVolume_ != nullptr;};
          void deleteBackgroundVolume() { this->backgroundVolume_ = nullptr;};
          inline int64_t getBackgroundVolume() const { DARABONBA_PTR_GET_DEFAULT(backgroundVolume_, 0L) };
          inline TtsConfig& setBackgroundVolume(int64_t backgroundVolume) { DARABONBA_PTR_SET_VALUE(backgroundVolume_, backgroundVolume) };


          // mixingEnabled Field Functions 
          bool hasMixingEnabled() const { return this->mixingEnabled_ != nullptr;};
          void deleteMixingEnabled() { this->mixingEnabled_ = nullptr;};
          inline bool getMixingEnabled() const { DARABONBA_PTR_GET_DEFAULT(mixingEnabled_, false) };
          inline TtsConfig& setMixingEnabled(bool mixingEnabled) { DARABONBA_PTR_SET_VALUE(mixingEnabled_, mixingEnabled) };


          // mixingTemplate Field Functions 
          bool hasMixingTemplate() const { return this->mixingTemplate_ != nullptr;};
          void deleteMixingTemplate() { this->mixingTemplate_ = nullptr;};
          inline int64_t getMixingTemplate() const { DARABONBA_PTR_GET_DEFAULT(mixingTemplate_, 0L) };
          inline TtsConfig& setMixingTemplate(int64_t mixingTemplate) { DARABONBA_PTR_SET_VALUE(mixingTemplate_, mixingTemplate) };


          // ttsSpeed Field Functions 
          bool hasTtsSpeed() const { return this->ttsSpeed_ != nullptr;};
          void deleteTtsSpeed() { this->ttsSpeed_ = nullptr;};
          inline int64_t getTtsSpeed() const { DARABONBA_PTR_GET_DEFAULT(ttsSpeed_, 0L) };
          inline TtsConfig& setTtsSpeed(int64_t ttsSpeed) { DARABONBA_PTR_SET_VALUE(ttsSpeed_, ttsSpeed) };


          // ttsStyle Field Functions 
          bool hasTtsStyle() const { return this->ttsStyle_ != nullptr;};
          void deleteTtsStyle() { this->ttsStyle_ = nullptr;};
          inline string getTtsStyle() const { DARABONBA_PTR_GET_DEFAULT(ttsStyle_, "") };
          inline TtsConfig& setTtsStyle(string ttsStyle) { DARABONBA_PTR_SET_VALUE(ttsStyle_, ttsStyle) };


          // ttsVolume Field Functions 
          bool hasTtsVolume() const { return this->ttsVolume_ != nullptr;};
          void deleteTtsVolume() { this->ttsVolume_ = nullptr;};
          inline int64_t getTtsVolume() const { DARABONBA_PTR_GET_DEFAULT(ttsVolume_, 0L) };
          inline TtsConfig& setTtsVolume(int64_t ttsVolume) { DARABONBA_PTR_SET_VALUE(ttsVolume_, ttsVolume) };


          // voiceCode Field Functions 
          bool hasVoiceCode() const { return this->voiceCode_ != nullptr;};
          void deleteVoiceCode() { this->voiceCode_ = nullptr;};
          inline string getVoiceCode() const { DARABONBA_PTR_GET_DEFAULT(voiceCode_, "") };
          inline TtsConfig& setVoiceCode(string voiceCode) { DARABONBA_PTR_SET_VALUE(voiceCode_, voiceCode) };


          // voiceType Field Functions 
          bool hasVoiceType() const { return this->voiceType_ != nullptr;};
          void deleteVoiceType() { this->voiceType_ = nullptr;};
          inline string getVoiceType() const { DARABONBA_PTR_GET_DEFAULT(voiceType_, "") };
          inline TtsConfig& setVoiceType(string voiceType) { DARABONBA_PTR_SET_VALUE(voiceType_, voiceType) };


        protected:
          shared_ptr<bool> backgroundEnabled_ {};
          shared_ptr<int64_t> backgroundSound_ {};
          shared_ptr<int64_t> backgroundVolume_ {};
          shared_ptr<bool> mixingEnabled_ {};
          shared_ptr<int64_t> mixingTemplate_ {};
          shared_ptr<int64_t> ttsSpeed_ {};
          shared_ptr<string> ttsStyle_ {};
          shared_ptr<int64_t> ttsVolume_ {};
          shared_ptr<string> voiceCode_ {};
          shared_ptr<string> voiceType_ {};
        };

        class EventConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EventConfig& obj) { 
            DARABONBA_PTR_TO_JSON(CallAssistantHangup, callAssistantHangup_);
            DARABONBA_PTR_TO_JSON(CallAssistantRecognize, callAssistantRecognize_);
            DARABONBA_PTR_TO_JSON(MuteActive, muteActive_);
            DARABONBA_PTR_TO_JSON(MuteDuration, muteDuration_);
            DARABONBA_PTR_TO_JSON(MuteHangupNum, muteHangupNum_);
            DARABONBA_PTR_TO_JSON(SessionTimeout, sessionTimeout_);
          };
          friend void from_json(const Darabonba::Json& j, EventConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(CallAssistantHangup, callAssistantHangup_);
            DARABONBA_PTR_FROM_JSON(CallAssistantRecognize, callAssistantRecognize_);
            DARABONBA_PTR_FROM_JSON(MuteActive, muteActive_);
            DARABONBA_PTR_FROM_JSON(MuteDuration, muteDuration_);
            DARABONBA_PTR_FROM_JSON(MuteHangupNum, muteHangupNum_);
            DARABONBA_PTR_FROM_JSON(SessionTimeout, sessionTimeout_);
          };
          EventConfig() = default ;
          EventConfig(const EventConfig &) = default ;
          EventConfig(EventConfig &&) = default ;
          EventConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EventConfig() = default ;
          EventConfig& operator=(const EventConfig &) = default ;
          EventConfig& operator=(EventConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->callAssistantHangup_ == nullptr
        && this->callAssistantRecognize_ == nullptr && this->muteActive_ == nullptr && this->muteDuration_ == nullptr && this->muteHangupNum_ == nullptr && this->sessionTimeout_ == nullptr; };
          // callAssistantHangup Field Functions 
          bool hasCallAssistantHangup() const { return this->callAssistantHangup_ != nullptr;};
          void deleteCallAssistantHangup() { this->callAssistantHangup_ = nullptr;};
          inline bool getCallAssistantHangup() const { DARABONBA_PTR_GET_DEFAULT(callAssistantHangup_, false) };
          inline EventConfig& setCallAssistantHangup(bool callAssistantHangup) { DARABONBA_PTR_SET_VALUE(callAssistantHangup_, callAssistantHangup) };


          // callAssistantRecognize Field Functions 
          bool hasCallAssistantRecognize() const { return this->callAssistantRecognize_ != nullptr;};
          void deleteCallAssistantRecognize() { this->callAssistantRecognize_ = nullptr;};
          inline bool getCallAssistantRecognize() const { DARABONBA_PTR_GET_DEFAULT(callAssistantRecognize_, false) };
          inline EventConfig& setCallAssistantRecognize(bool callAssistantRecognize) { DARABONBA_PTR_SET_VALUE(callAssistantRecognize_, callAssistantRecognize) };


          // muteActive Field Functions 
          bool hasMuteActive() const { return this->muteActive_ != nullptr;};
          void deleteMuteActive() { this->muteActive_ = nullptr;};
          inline bool getMuteActive() const { DARABONBA_PTR_GET_DEFAULT(muteActive_, false) };
          inline EventConfig& setMuteActive(bool muteActive) { DARABONBA_PTR_SET_VALUE(muteActive_, muteActive) };


          // muteDuration Field Functions 
          bool hasMuteDuration() const { return this->muteDuration_ != nullptr;};
          void deleteMuteDuration() { this->muteDuration_ = nullptr;};
          inline int64_t getMuteDuration() const { DARABONBA_PTR_GET_DEFAULT(muteDuration_, 0L) };
          inline EventConfig& setMuteDuration(int64_t muteDuration) { DARABONBA_PTR_SET_VALUE(muteDuration_, muteDuration) };


          // muteHangupNum Field Functions 
          bool hasMuteHangupNum() const { return this->muteHangupNum_ != nullptr;};
          void deleteMuteHangupNum() { this->muteHangupNum_ = nullptr;};
          inline int64_t getMuteHangupNum() const { DARABONBA_PTR_GET_DEFAULT(muteHangupNum_, 0L) };
          inline EventConfig& setMuteHangupNum(int64_t muteHangupNum) { DARABONBA_PTR_SET_VALUE(muteHangupNum_, muteHangupNum) };


          // sessionTimeout Field Functions 
          bool hasSessionTimeout() const { return this->sessionTimeout_ != nullptr;};
          void deleteSessionTimeout() { this->sessionTimeout_ = nullptr;};
          inline int64_t getSessionTimeout() const { DARABONBA_PTR_GET_DEFAULT(sessionTimeout_, 0L) };
          inline EventConfig& setSessionTimeout(int64_t sessionTimeout) { DARABONBA_PTR_SET_VALUE(sessionTimeout_, sessionTimeout) };


        protected:
          shared_ptr<bool> callAssistantHangup_ {};
          shared_ptr<bool> callAssistantRecognize_ {};
          shared_ptr<bool> muteActive_ {};
          shared_ptr<int64_t> muteDuration_ {};
          shared_ptr<int64_t> muteHangupNum_ {};
          shared_ptr<int64_t> sessionTimeout_ {};
        };

        virtual bool empty() const override { return this->eventConfig_ == nullptr
        && this->ttsConfig_ == nullptr && this->vocabId_ == nullptr; };
        // eventConfig Field Functions 
        bool hasEventConfig() const { return this->eventConfig_ != nullptr;};
        void deleteEventConfig() { this->eventConfig_ = nullptr;};
        inline const AiVoiceAgentCallConfig::EventConfig & getEventConfig() const { DARABONBA_PTR_GET_CONST(eventConfig_, AiVoiceAgentCallConfig::EventConfig) };
        inline AiVoiceAgentCallConfig::EventConfig getEventConfig() { DARABONBA_PTR_GET(eventConfig_, AiVoiceAgentCallConfig::EventConfig) };
        inline AiVoiceAgentCallConfig& setEventConfig(const AiVoiceAgentCallConfig::EventConfig & eventConfig) { DARABONBA_PTR_SET_VALUE(eventConfig_, eventConfig) };
        inline AiVoiceAgentCallConfig& setEventConfig(AiVoiceAgentCallConfig::EventConfig && eventConfig) { DARABONBA_PTR_SET_RVALUE(eventConfig_, eventConfig) };


        // ttsConfig Field Functions 
        bool hasTtsConfig() const { return this->ttsConfig_ != nullptr;};
        void deleteTtsConfig() { this->ttsConfig_ = nullptr;};
        inline const AiVoiceAgentCallConfig::TtsConfig & getTtsConfig() const { DARABONBA_PTR_GET_CONST(ttsConfig_, AiVoiceAgentCallConfig::TtsConfig) };
        inline AiVoiceAgentCallConfig::TtsConfig getTtsConfig() { DARABONBA_PTR_GET(ttsConfig_, AiVoiceAgentCallConfig::TtsConfig) };
        inline AiVoiceAgentCallConfig& setTtsConfig(const AiVoiceAgentCallConfig::TtsConfig & ttsConfig) { DARABONBA_PTR_SET_VALUE(ttsConfig_, ttsConfig) };
        inline AiVoiceAgentCallConfig& setTtsConfig(AiVoiceAgentCallConfig::TtsConfig && ttsConfig) { DARABONBA_PTR_SET_RVALUE(ttsConfig_, ttsConfig) };


        // vocabId Field Functions 
        bool hasVocabId() const { return this->vocabId_ != nullptr;};
        void deleteVocabId() { this->vocabId_ = nullptr;};
        inline string getVocabId() const { DARABONBA_PTR_GET_DEFAULT(vocabId_, "") };
        inline AiVoiceAgentCallConfig& setVocabId(string vocabId) { DARABONBA_PTR_SET_VALUE(vocabId_, vocabId) };


      protected:
        shared_ptr<AiVoiceAgentCallConfig::EventConfig> eventConfig_ {};
        shared_ptr<AiVoiceAgentCallConfig::TtsConfig> ttsConfig_ {};
        shared_ptr<string> vocabId_ {};
      };

      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentName_ == nullptr && this->aiVoiceAgentCallConfig_ == nullptr && this->aiVoiceAgentModelConfig_ == nullptr && this->businessTypeName_ == nullptr && this->description_ == nullptr
        && this->knowledgeName_ == nullptr && this->status_ == nullptr && this->voiceStyleName_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline int64_t getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0L) };
      inline Data& setAgentId(int64_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // agentName Field Functions 
      bool hasAgentName() const { return this->agentName_ != nullptr;};
      void deleteAgentName() { this->agentName_ = nullptr;};
      inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
      inline Data& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


      // aiVoiceAgentCallConfig Field Functions 
      bool hasAiVoiceAgentCallConfig() const { return this->aiVoiceAgentCallConfig_ != nullptr;};
      void deleteAiVoiceAgentCallConfig() { this->aiVoiceAgentCallConfig_ = nullptr;};
      inline const Data::AiVoiceAgentCallConfig & getAiVoiceAgentCallConfig() const { DARABONBA_PTR_GET_CONST(aiVoiceAgentCallConfig_, Data::AiVoiceAgentCallConfig) };
      inline Data::AiVoiceAgentCallConfig getAiVoiceAgentCallConfig() { DARABONBA_PTR_GET(aiVoiceAgentCallConfig_, Data::AiVoiceAgentCallConfig) };
      inline Data& setAiVoiceAgentCallConfig(const Data::AiVoiceAgentCallConfig & aiVoiceAgentCallConfig) { DARABONBA_PTR_SET_VALUE(aiVoiceAgentCallConfig_, aiVoiceAgentCallConfig) };
      inline Data& setAiVoiceAgentCallConfig(Data::AiVoiceAgentCallConfig && aiVoiceAgentCallConfig) { DARABONBA_PTR_SET_RVALUE(aiVoiceAgentCallConfig_, aiVoiceAgentCallConfig) };


      // aiVoiceAgentModelConfig Field Functions 
      bool hasAiVoiceAgentModelConfig() const { return this->aiVoiceAgentModelConfig_ != nullptr;};
      void deleteAiVoiceAgentModelConfig() { this->aiVoiceAgentModelConfig_ = nullptr;};
      inline const Data::AiVoiceAgentModelConfig & getAiVoiceAgentModelConfig() const { DARABONBA_PTR_GET_CONST(aiVoiceAgentModelConfig_, Data::AiVoiceAgentModelConfig) };
      inline Data::AiVoiceAgentModelConfig getAiVoiceAgentModelConfig() { DARABONBA_PTR_GET(aiVoiceAgentModelConfig_, Data::AiVoiceAgentModelConfig) };
      inline Data& setAiVoiceAgentModelConfig(const Data::AiVoiceAgentModelConfig & aiVoiceAgentModelConfig) { DARABONBA_PTR_SET_VALUE(aiVoiceAgentModelConfig_, aiVoiceAgentModelConfig) };
      inline Data& setAiVoiceAgentModelConfig(Data::AiVoiceAgentModelConfig && aiVoiceAgentModelConfig) { DARABONBA_PTR_SET_RVALUE(aiVoiceAgentModelConfig_, aiVoiceAgentModelConfig) };


      // businessTypeName Field Functions 
      bool hasBusinessTypeName() const { return this->businessTypeName_ != nullptr;};
      void deleteBusinessTypeName() { this->businessTypeName_ = nullptr;};
      inline string getBusinessTypeName() const { DARABONBA_PTR_GET_DEFAULT(businessTypeName_, "") };
      inline Data& setBusinessTypeName(string businessTypeName) { DARABONBA_PTR_SET_VALUE(businessTypeName_, businessTypeName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // knowledgeName Field Functions 
      bool hasKnowledgeName() const { return this->knowledgeName_ != nullptr;};
      void deleteKnowledgeName() { this->knowledgeName_ = nullptr;};
      inline string getKnowledgeName() const { DARABONBA_PTR_GET_DEFAULT(knowledgeName_, "") };
      inline Data& setKnowledgeName(string knowledgeName) { DARABONBA_PTR_SET_VALUE(knowledgeName_, knowledgeName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
      inline Data& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // voiceStyleName Field Functions 
      bool hasVoiceStyleName() const { return this->voiceStyleName_ != nullptr;};
      void deleteVoiceStyleName() { this->voiceStyleName_ = nullptr;};
      inline string getVoiceStyleName() const { DARABONBA_PTR_GET_DEFAULT(voiceStyleName_, "") };
      inline Data& setVoiceStyleName(string voiceStyleName) { DARABONBA_PTR_SET_VALUE(voiceStyleName_, voiceStyleName) };


    protected:
      shared_ptr<int64_t> agentId_ {};
      shared_ptr<string> agentName_ {};
      shared_ptr<Data::AiVoiceAgentCallConfig> aiVoiceAgentCallConfig_ {};
      shared_ptr<Data::AiVoiceAgentModelConfig> aiVoiceAgentModelConfig_ {};
      shared_ptr<string> businessTypeName_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> knowledgeName_ {};
      shared_ptr<int64_t> status_ {};
      shared_ptr<string> voiceStyleName_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QueryAiVoiceAgentDetailResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryAiVoiceAgentDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryAiVoiceAgentDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryAiVoiceAgentDetailResponseBody::Data) };
    inline QueryAiVoiceAgentDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryAiVoiceAgentDetailResponseBody::Data) };
    inline QueryAiVoiceAgentDetailResponseBody& setData(const QueryAiVoiceAgentDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryAiVoiceAgentDetailResponseBody& setData(QueryAiVoiceAgentDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryAiVoiceAgentDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAiVoiceAgentDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAiVoiceAgentDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<QueryAiVoiceAgentDetailResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
