// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILNEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILNEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryAiVoiceAgentDetailNewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAiVoiceAgentDetailNewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAiVoiceAgentDetailNewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryAiVoiceAgentDetailNewResponseBody() = default ;
    QueryAiVoiceAgentDetailNewResponseBody(const QueryAiVoiceAgentDetailNewResponseBody &) = default ;
    QueryAiVoiceAgentDetailNewResponseBody(QueryAiVoiceAgentDetailNewResponseBody &&) = default ;
    QueryAiVoiceAgentDetailNewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAiVoiceAgentDetailNewResponseBody() = default ;
    QueryAiVoiceAgentDetailNewResponseBody& operator=(const QueryAiVoiceAgentDetailNewResponseBody &) = default ;
    QueryAiVoiceAgentDetailNewResponseBody& operator=(QueryAiVoiceAgentDetailNewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AgentCallConfig, agentCallConfig_);
        DARABONBA_PTR_TO_JSON(AgentDemandConfig, agentDemandConfig_);
        DARABONBA_PTR_TO_JSON(AgentDesc, agentDesc_);
        DARABONBA_PTR_TO_JSON(AgentId, agentId_);
        DARABONBA_PTR_TO_JSON(AgentMode, agentMode_);
        DARABONBA_PTR_TO_JSON(AgentName, agentName_);
        DARABONBA_PTR_TO_JSON(BranchDeployStatus, branchDeployStatus_);
        DARABONBA_PTR_TO_JSON(BranchDesc, branchDesc_);
        DARABONBA_PTR_TO_JSON(BranchId, branchId_);
        DARABONBA_PTR_TO_JSON(BranchName, branchName_);
        DARABONBA_PTR_TO_JSON(KnowledgeConfig, knowledgeConfig_);
        DARABONBA_PTR_TO_JSON(PhoneTagConfig, phoneTagConfig_);
        DARABONBA_PTR_TO_JSON(Scene, scene_);
        DARABONBA_PTR_TO_JSON(SummaryConfig, summaryConfig_);
        DARABONBA_PTR_TO_JSON(VersionDesc, versionDesc_);
        DARABONBA_PTR_TO_JSON(VersionId, versionId_);
        DARABONBA_PTR_TO_JSON(VersionName, versionName_);
        DARABONBA_PTR_TO_JSON(VersionPublishStatus, versionPublishStatus_);
        DARABONBA_PTR_TO_JSON(VersionPublishTime, versionPublishTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentCallConfig, agentCallConfig_);
        DARABONBA_PTR_FROM_JSON(AgentDemandConfig, agentDemandConfig_);
        DARABONBA_PTR_FROM_JSON(AgentDesc, agentDesc_);
        DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
        DARABONBA_PTR_FROM_JSON(AgentMode, agentMode_);
        DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
        DARABONBA_PTR_FROM_JSON(BranchDeployStatus, branchDeployStatus_);
        DARABONBA_PTR_FROM_JSON(BranchDesc, branchDesc_);
        DARABONBA_PTR_FROM_JSON(BranchId, branchId_);
        DARABONBA_PTR_FROM_JSON(BranchName, branchName_);
        DARABONBA_PTR_FROM_JSON(KnowledgeConfig, knowledgeConfig_);
        DARABONBA_PTR_FROM_JSON(PhoneTagConfig, phoneTagConfig_);
        DARABONBA_PTR_FROM_JSON(Scene, scene_);
        DARABONBA_PTR_FROM_JSON(SummaryConfig, summaryConfig_);
        DARABONBA_PTR_FROM_JSON(VersionDesc, versionDesc_);
        DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
        DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
        DARABONBA_PTR_FROM_JSON(VersionPublishStatus, versionPublishStatus_);
        DARABONBA_PTR_FROM_JSON(VersionPublishTime, versionPublishTime_);
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
      class SummaryConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SummaryConfig& obj) { 
          DARABONBA_PTR_TO_JSON(CallResultTagConfig, callResultTagConfig_);
          DARABONBA_PTR_TO_JSON(MainPurpose, mainPurpose_);
          DARABONBA_PTR_TO_JSON(OutputTagConfig, outputTagConfig_);
        };
        friend void from_json(const Darabonba::Json& j, SummaryConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(CallResultTagConfig, callResultTagConfig_);
          DARABONBA_PTR_FROM_JSON(MainPurpose, mainPurpose_);
          DARABONBA_PTR_FROM_JSON(OutputTagConfig, outputTagConfig_);
        };
        SummaryConfig() = default ;
        SummaryConfig(const SummaryConfig &) = default ;
        SummaryConfig(SummaryConfig &&) = default ;
        SummaryConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SummaryConfig() = default ;
        SummaryConfig& operator=(const SummaryConfig &) = default ;
        SummaryConfig& operator=(SummaryConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
            // The tag description.
            shared_ptr<string> description_ {};
            // The tag ID.
            shared_ptr<string> id_ {};
            // The enumerated value of the tag.
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
          // The ID of the output tag.
          shared_ptr<string> id_ {};
          // The description of the output tag.
          shared_ptr<string> outputTagDescription_ {};
          // The enumerated values for the output tag.
          shared_ptr<vector<OutputTagConfig::OutputTagEnum>> outputTagEnum_ {};
          // The name of the output tag.
          shared_ptr<string> outputTagName_ {};
          // The value type of the output tag. Valid values: `TEXT` and `ENUM`.
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
            // The description of the value.
            shared_ptr<string> description_ {};
            // The unique ID of the tag.
            shared_ptr<string> id_ {};
            // The value.
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
          // The ID of the main intent.
          shared_ptr<string> id_ {};
          // The description of the main intent.
          shared_ptr<string> mainPurposeDescription_ {};
          // The enumerated values for the main intent.
          shared_ptr<vector<MainPurpose::MainPurposeEnum>> mainPurposeEnum_ {};
          // The name of the main intent.
          shared_ptr<string> mainPurposeName_ {};
          // The value type of the main intent. Valid values: `TEXT` and `ENUM`.
          shared_ptr<string> mainPurposeType_ {};
        };

        class CallResultTagConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CallResultTagConfig& obj) { 
            DARABONBA_PTR_TO_JSON(DefaultTag, defaultTag_);
            DARABONBA_PTR_TO_JSON(MappingTag, mappingTag_);
          };
          friend void from_json(const Darabonba::Json& j, CallResultTagConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(DefaultTag, defaultTag_);
            DARABONBA_PTR_FROM_JSON(MappingTag, mappingTag_);
          };
          CallResultTagConfig() = default ;
          CallResultTagConfig(const CallResultTagConfig &) = default ;
          CallResultTagConfig(CallResultTagConfig &&) = default ;
          CallResultTagConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CallResultTagConfig() = default ;
          CallResultTagConfig& operator=(const CallResultTagConfig &) = default ;
          CallResultTagConfig& operator=(CallResultTagConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class DefaultTag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DefaultTag& obj) { 
              DARABONBA_PTR_TO_JSON(Desc, desc_);
              DARABONBA_PTR_TO_JSON(Tag, tag_);
            };
            friend void from_json(const Darabonba::Json& j, DefaultTag& obj) { 
              DARABONBA_PTR_FROM_JSON(Desc, desc_);
              DARABONBA_PTR_FROM_JSON(Tag, tag_);
            };
            DefaultTag() = default ;
            DefaultTag(const DefaultTag &) = default ;
            DefaultTag(DefaultTag &&) = default ;
            DefaultTag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DefaultTag() = default ;
            DefaultTag& operator=(const DefaultTag &) = default ;
            DefaultTag& operator=(DefaultTag &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->desc_ == nullptr
        && this->tag_ == nullptr; };
            // desc Field Functions 
            bool hasDesc() const { return this->desc_ != nullptr;};
            void deleteDesc() { this->desc_ = nullptr;};
            inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
            inline DefaultTag& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


            // tag Field Functions 
            bool hasTag() const { return this->tag_ != nullptr;};
            void deleteTag() { this->tag_ = nullptr;};
            inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
            inline DefaultTag& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


          protected:
            // The description.
            shared_ptr<string> desc_ {};
            // The tag.
            shared_ptr<string> tag_ {};
          };

          virtual bool empty() const override { return this->defaultTag_ == nullptr
        && this->mappingTag_ == nullptr; };
          // defaultTag Field Functions 
          bool hasDefaultTag() const { return this->defaultTag_ != nullptr;};
          void deleteDefaultTag() { this->defaultTag_ = nullptr;};
          inline const CallResultTagConfig::DefaultTag & getDefaultTag() const { DARABONBA_PTR_GET_CONST(defaultTag_, CallResultTagConfig::DefaultTag) };
          inline CallResultTagConfig::DefaultTag getDefaultTag() { DARABONBA_PTR_GET(defaultTag_, CallResultTagConfig::DefaultTag) };
          inline CallResultTagConfig& setDefaultTag(const CallResultTagConfig::DefaultTag & defaultTag) { DARABONBA_PTR_SET_VALUE(defaultTag_, defaultTag) };
          inline CallResultTagConfig& setDefaultTag(CallResultTagConfig::DefaultTag && defaultTag) { DARABONBA_PTR_SET_RVALUE(defaultTag_, defaultTag) };


          // mappingTag Field Functions 
          bool hasMappingTag() const { return this->mappingTag_ != nullptr;};
          void deleteMappingTag() { this->mappingTag_ = nullptr;};
          inline const map<string, string> & getMappingTag() const { DARABONBA_PTR_GET_CONST(mappingTag_, map<string, string>) };
          inline map<string, string> getMappingTag() { DARABONBA_PTR_GET(mappingTag_, map<string, string>) };
          inline CallResultTagConfig& setMappingTag(const map<string, string> & mappingTag) { DARABONBA_PTR_SET_VALUE(mappingTag_, mappingTag) };
          inline CallResultTagConfig& setMappingTag(map<string, string> && mappingTag) { DARABONBA_PTR_SET_RVALUE(mappingTag_, mappingTag) };


        protected:
          // The default fallback tag information.
          shared_ptr<CallResultTagConfig::DefaultTag> defaultTag_ {};
          // The mapping of call results to tags.
          shared_ptr<map<string, string>> mappingTag_ {};
        };

        virtual bool empty() const override { return this->callResultTagConfig_ == nullptr
        && this->mainPurpose_ == nullptr && this->outputTagConfig_ == nullptr; };
        // callResultTagConfig Field Functions 
        bool hasCallResultTagConfig() const { return this->callResultTagConfig_ != nullptr;};
        void deleteCallResultTagConfig() { this->callResultTagConfig_ = nullptr;};
        inline const SummaryConfig::CallResultTagConfig & getCallResultTagConfig() const { DARABONBA_PTR_GET_CONST(callResultTagConfig_, SummaryConfig::CallResultTagConfig) };
        inline SummaryConfig::CallResultTagConfig getCallResultTagConfig() { DARABONBA_PTR_GET(callResultTagConfig_, SummaryConfig::CallResultTagConfig) };
        inline SummaryConfig& setCallResultTagConfig(const SummaryConfig::CallResultTagConfig & callResultTagConfig) { DARABONBA_PTR_SET_VALUE(callResultTagConfig_, callResultTagConfig) };
        inline SummaryConfig& setCallResultTagConfig(SummaryConfig::CallResultTagConfig && callResultTagConfig) { DARABONBA_PTR_SET_RVALUE(callResultTagConfig_, callResultTagConfig) };


        // mainPurpose Field Functions 
        bool hasMainPurpose() const { return this->mainPurpose_ != nullptr;};
        void deleteMainPurpose() { this->mainPurpose_ = nullptr;};
        inline const SummaryConfig::MainPurpose & getMainPurpose() const { DARABONBA_PTR_GET_CONST(mainPurpose_, SummaryConfig::MainPurpose) };
        inline SummaryConfig::MainPurpose getMainPurpose() { DARABONBA_PTR_GET(mainPurpose_, SummaryConfig::MainPurpose) };
        inline SummaryConfig& setMainPurpose(const SummaryConfig::MainPurpose & mainPurpose) { DARABONBA_PTR_SET_VALUE(mainPurpose_, mainPurpose) };
        inline SummaryConfig& setMainPurpose(SummaryConfig::MainPurpose && mainPurpose) { DARABONBA_PTR_SET_RVALUE(mainPurpose_, mainPurpose) };


        // outputTagConfig Field Functions 
        bool hasOutputTagConfig() const { return this->outputTagConfig_ != nullptr;};
        void deleteOutputTagConfig() { this->outputTagConfig_ = nullptr;};
        inline const vector<SummaryConfig::OutputTagConfig> & getOutputTagConfig() const { DARABONBA_PTR_GET_CONST(outputTagConfig_, vector<SummaryConfig::OutputTagConfig>) };
        inline vector<SummaryConfig::OutputTagConfig> getOutputTagConfig() { DARABONBA_PTR_GET(outputTagConfig_, vector<SummaryConfig::OutputTagConfig>) };
        inline SummaryConfig& setOutputTagConfig(const vector<SummaryConfig::OutputTagConfig> & outputTagConfig) { DARABONBA_PTR_SET_VALUE(outputTagConfig_, outputTagConfig) };
        inline SummaryConfig& setOutputTagConfig(vector<SummaryConfig::OutputTagConfig> && outputTagConfig) { DARABONBA_PTR_SET_RVALUE(outputTagConfig_, outputTagConfig) };


      protected:
        // The configuration for mapping call results to tags.
        shared_ptr<SummaryConfig::CallResultTagConfig> callResultTagConfig_ {};
        // The main intent.
        shared_ptr<SummaryConfig::MainPurpose> mainPurpose_ {};
        // The output tag configuration.
        shared_ptr<vector<SummaryConfig::OutputTagConfig>> outputTagConfig_ {};
      };

      class PhoneTagConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PhoneTagConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(PhoneTagEnum, phoneTagEnum_);
          DARABONBA_PTR_TO_JSON(PhoneTagKey, phoneTagKey_);
          DARABONBA_PTR_TO_JSON(PhoneTagName, phoneTagName_);
          DARABONBA_PTR_TO_JSON(PhoneTagRequired, phoneTagRequired_);
          DARABONBA_PTR_TO_JSON(PhoneTagSource, phoneTagSource_);
          DARABONBA_PTR_TO_JSON(PhoneTagType, phoneTagType_);
        };
        friend void from_json(const Darabonba::Json& j, PhoneTagConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
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
          // The description.
          shared_ptr<string> description_ {};
          // The tag ID.
          shared_ptr<string> id_ {};
          // The tag value.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->id_ == nullptr
        && this->phoneTagEnum_ == nullptr && this->phoneTagKey_ == nullptr && this->phoneTagName_ == nullptr && this->phoneTagRequired_ == nullptr && this->phoneTagSource_ == nullptr
        && this->phoneTagType_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline PhoneTagConfig& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


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
        // The ID of the call variable.
        shared_ptr<string> id_ {};
        // The enumerated values for the call variable.
        shared_ptr<vector<PhoneTagConfig::PhoneTagEnum>> phoneTagEnum_ {};
        // The key of the call variable.
        shared_ptr<string> phoneTagKey_ {};
        // The description of the call variable.
        shared_ptr<string> phoneTagName_ {};
        // Specifies whether the call variable is required.
        shared_ptr<bool> phoneTagRequired_ {};
        // The source of the call variable.
        shared_ptr<string> phoneTagSource_ {};
        // The type of the call variable. Valid values: `TEXT` and `ENUM`.
        shared_ptr<string> phoneTagType_ {};
      };

      class KnowledgeConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KnowledgeConfig& obj) { 
          DARABONBA_PTR_TO_JSON(KnowledgeIds, knowledgeIds_);
          DARABONBA_PTR_TO_JSON(RagConfig, ragConfig_);
        };
        friend void from_json(const Darabonba::Json& j, KnowledgeConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(KnowledgeIds, knowledgeIds_);
          DARABONBA_PTR_FROM_JSON(RagConfig, ragConfig_);
        };
        KnowledgeConfig() = default ;
        KnowledgeConfig(const KnowledgeConfig &) = default ;
        KnowledgeConfig(KnowledgeConfig &&) = default ;
        KnowledgeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KnowledgeConfig() = default ;
        KnowledgeConfig& operator=(const KnowledgeConfig &) = default ;
        KnowledgeConfig& operator=(KnowledgeConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RagConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RagConfig& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          };
          friend void from_json(const Darabonba::Json& j, RagConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
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
          virtual bool empty() const override { return this->description_ == nullptr
        && this->enabled_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline RagConfig& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
          inline RagConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        protected:
          // RAG retrieval description
          shared_ptr<string> description_ {};
          // Enable RAG retrieval
          shared_ptr<bool> enabled_ {};
        };

        class KnowledgeIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const KnowledgeIds& obj) { 
            DARABONBA_PTR_TO_JSON(KnowledgeId, knowledgeId_);
            DARABONBA_PTR_TO_JSON(KnowledgeName, knowledgeName_);
          };
          friend void from_json(const Darabonba::Json& j, KnowledgeIds& obj) { 
            DARABONBA_PTR_FROM_JSON(KnowledgeId, knowledgeId_);
            DARABONBA_PTR_FROM_JSON(KnowledgeName, knowledgeName_);
          };
          KnowledgeIds() = default ;
          KnowledgeIds(const KnowledgeIds &) = default ;
          KnowledgeIds(KnowledgeIds &&) = default ;
          KnowledgeIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~KnowledgeIds() = default ;
          KnowledgeIds& operator=(const KnowledgeIds &) = default ;
          KnowledgeIds& operator=(KnowledgeIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->knowledgeId_ == nullptr
        && this->knowledgeName_ == nullptr; };
          // knowledgeId Field Functions 
          bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
          void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
          inline int64_t getKnowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, 0L) };
          inline KnowledgeIds& setKnowledgeId(int64_t knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


          // knowledgeName Field Functions 
          bool hasKnowledgeName() const { return this->knowledgeName_ != nullptr;};
          void deleteKnowledgeName() { this->knowledgeName_ = nullptr;};
          inline string getKnowledgeName() const { DARABONBA_PTR_GET_DEFAULT(knowledgeName_, "") };
          inline KnowledgeIds& setKnowledgeName(string knowledgeName) { DARABONBA_PTR_SET_VALUE(knowledgeName_, knowledgeName) };


        protected:
          // The ID of the knowledge base.
          shared_ptr<int64_t> knowledgeId_ {};
          // The name of the knowledge base.
          shared_ptr<string> knowledgeName_ {};
        };

        virtual bool empty() const override { return this->knowledgeIds_ == nullptr
        && this->ragConfig_ == nullptr; };
        // knowledgeIds Field Functions 
        bool hasKnowledgeIds() const { return this->knowledgeIds_ != nullptr;};
        void deleteKnowledgeIds() { this->knowledgeIds_ = nullptr;};
        inline const vector<KnowledgeConfig::KnowledgeIds> & getKnowledgeIds() const { DARABONBA_PTR_GET_CONST(knowledgeIds_, vector<KnowledgeConfig::KnowledgeIds>) };
        inline vector<KnowledgeConfig::KnowledgeIds> getKnowledgeIds() { DARABONBA_PTR_GET(knowledgeIds_, vector<KnowledgeConfig::KnowledgeIds>) };
        inline KnowledgeConfig& setKnowledgeIds(const vector<KnowledgeConfig::KnowledgeIds> & knowledgeIds) { DARABONBA_PTR_SET_VALUE(knowledgeIds_, knowledgeIds) };
        inline KnowledgeConfig& setKnowledgeIds(vector<KnowledgeConfig::KnowledgeIds> && knowledgeIds) { DARABONBA_PTR_SET_RVALUE(knowledgeIds_, knowledgeIds) };


        // ragConfig Field Functions 
        bool hasRagConfig() const { return this->ragConfig_ != nullptr;};
        void deleteRagConfig() { this->ragConfig_ = nullptr;};
        inline const KnowledgeConfig::RagConfig & getRagConfig() const { DARABONBA_PTR_GET_CONST(ragConfig_, KnowledgeConfig::RagConfig) };
        inline KnowledgeConfig::RagConfig getRagConfig() { DARABONBA_PTR_GET(ragConfig_, KnowledgeConfig::RagConfig) };
        inline KnowledgeConfig& setRagConfig(const KnowledgeConfig::RagConfig & ragConfig) { DARABONBA_PTR_SET_VALUE(ragConfig_, ragConfig) };
        inline KnowledgeConfig& setRagConfig(KnowledgeConfig::RagConfig && ragConfig) { DARABONBA_PTR_SET_RVALUE(ragConfig_, ragConfig) };


      protected:
        // The collection of knowledge bases.
        shared_ptr<vector<KnowledgeConfig::KnowledgeIds>> knowledgeIds_ {};
        // The Retrieval-Augmented Generation (RAG) configuration.
        shared_ptr<KnowledgeConfig::RagConfig> ragConfig_ {};
      };

      class AgentDemandConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AgentDemandConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AiGenerate, aiGenerate_);
          DARABONBA_PTR_TO_JSON(BasicTaskDescription, basicTaskDescription_);
          DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
          DARABONBA_PTR_TO_JSON(CoreTarget, coreTarget_);
          DARABONBA_PTR_TO_JSON(SysRole, sysRole_);
          DARABONBA_PTR_TO_JSON(UserRole, userRole_);
        };
        friend void from_json(const Darabonba::Json& j, AgentDemandConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AiGenerate, aiGenerate_);
          DARABONBA_PTR_FROM_JSON(BasicTaskDescription, basicTaskDescription_);
          DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
          DARABONBA_PTR_FROM_JSON(CoreTarget, coreTarget_);
          DARABONBA_PTR_FROM_JSON(SysRole, sysRole_);
          DARABONBA_PTR_FROM_JSON(UserRole, userRole_);
        };
        AgentDemandConfig() = default ;
        AgentDemandConfig(const AgentDemandConfig &) = default ;
        AgentDemandConfig(AgentDemandConfig &&) = default ;
        AgentDemandConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AgentDemandConfig() = default ;
        AgentDemandConfig& operator=(const AgentDemandConfig &) = default ;
        AgentDemandConfig& operator=(AgentDemandConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aiGenerate_ == nullptr
        && this->basicTaskDescription_ == nullptr && this->businessType_ == nullptr && this->coreTarget_ == nullptr && this->sysRole_ == nullptr && this->userRole_ == nullptr; };
        // aiGenerate Field Functions 
        bool hasAiGenerate() const { return this->aiGenerate_ != nullptr;};
        void deleteAiGenerate() { this->aiGenerate_ = nullptr;};
        inline bool getAiGenerate() const { DARABONBA_PTR_GET_DEFAULT(aiGenerate_, false) };
        inline AgentDemandConfig& setAiGenerate(bool aiGenerate) { DARABONBA_PTR_SET_VALUE(aiGenerate_, aiGenerate) };


        // basicTaskDescription Field Functions 
        bool hasBasicTaskDescription() const { return this->basicTaskDescription_ != nullptr;};
        void deleteBasicTaskDescription() { this->basicTaskDescription_ = nullptr;};
        inline string getBasicTaskDescription() const { DARABONBA_PTR_GET_DEFAULT(basicTaskDescription_, "") };
        inline AgentDemandConfig& setBasicTaskDescription(string basicTaskDescription) { DARABONBA_PTR_SET_VALUE(basicTaskDescription_, basicTaskDescription) };


        // businessType Field Functions 
        bool hasBusinessType() const { return this->businessType_ != nullptr;};
        void deleteBusinessType() { this->businessType_ = nullptr;};
        inline int64_t getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, 0L) };
        inline AgentDemandConfig& setBusinessType(int64_t businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


        // coreTarget Field Functions 
        bool hasCoreTarget() const { return this->coreTarget_ != nullptr;};
        void deleteCoreTarget() { this->coreTarget_ = nullptr;};
        inline string getCoreTarget() const { DARABONBA_PTR_GET_DEFAULT(coreTarget_, "") };
        inline AgentDemandConfig& setCoreTarget(string coreTarget) { DARABONBA_PTR_SET_VALUE(coreTarget_, coreTarget) };


        // sysRole Field Functions 
        bool hasSysRole() const { return this->sysRole_ != nullptr;};
        void deleteSysRole() { this->sysRole_ = nullptr;};
        inline string getSysRole() const { DARABONBA_PTR_GET_DEFAULT(sysRole_, "") };
        inline AgentDemandConfig& setSysRole(string sysRole) { DARABONBA_PTR_SET_VALUE(sysRole_, sysRole) };


        // userRole Field Functions 
        bool hasUserRole() const { return this->userRole_ != nullptr;};
        void deleteUserRole() { this->userRole_ = nullptr;};
        inline string getUserRole() const { DARABONBA_PTR_GET_DEFAULT(userRole_, "") };
        inline AgentDemandConfig& setUserRole(string userRole) { DARABONBA_PTR_SET_VALUE(userRole_, userRole) };


      protected:
        // Specifies whether the agent was built with AI assistance.
        shared_ptr<bool> aiGenerate_ {};
        // The basic task configuration.
        shared_ptr<string> basicTaskDescription_ {};
        // The business scenario.
        shared_ptr<int64_t> businessType_ {};
        // The core objective.
        shared_ptr<string> coreTarget_ {};
        // The system role.
        shared_ptr<string> sysRole_ {};
        // The user role.
        shared_ptr<string> userRole_ {};
      };

      class AgentCallConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AgentCallConfig& obj) { 
          DARABONBA_PTR_TO_JSON(EventConfig, eventConfig_);
          DARABONBA_PTR_TO_JSON(Prologue, prologue_);
          DARABONBA_PTR_TO_JSON(RecordingFile, recordingFile_);
          DARABONBA_PTR_TO_JSON(StartWordType, startWordType_);
          DARABONBA_PTR_TO_JSON(TransferConfig, transferConfig_);
          DARABONBA_PTR_TO_JSON(TtsConfig, ttsConfig_);
          DARABONBA_PTR_TO_JSON(VocabId, vocabId_);
        };
        friend void from_json(const Darabonba::Json& j, AgentCallConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(EventConfig, eventConfig_);
          DARABONBA_PTR_FROM_JSON(Prologue, prologue_);
          DARABONBA_PTR_FROM_JSON(RecordingFile, recordingFile_);
          DARABONBA_PTR_FROM_JSON(StartWordType, startWordType_);
          DARABONBA_PTR_FROM_JSON(TransferConfig, transferConfig_);
          DARABONBA_PTR_FROM_JSON(TtsConfig, ttsConfig_);
          DARABONBA_PTR_FROM_JSON(VocabId, vocabId_);
        };
        AgentCallConfig() = default ;
        AgentCallConfig(const AgentCallConfig &) = default ;
        AgentCallConfig(AgentCallConfig &&) = default ;
        AgentCallConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AgentCallConfig() = default ;
        AgentCallConfig& operator=(const AgentCallConfig &) = default ;
        AgentCallConfig& operator=(AgentCallConfig &&) = default ;
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
            DARABONBA_PTR_TO_JSON(CustomerAccountId, customerAccountId_);
            DARABONBA_PTR_TO_JSON(MixingEnabled, mixingEnabled_);
            DARABONBA_PTR_TO_JSON(MixingTemplate, mixingTemplate_);
            DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
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
            DARABONBA_PTR_FROM_JSON(CustomerAccountId, customerAccountId_);
            DARABONBA_PTR_FROM_JSON(MixingEnabled, mixingEnabled_);
            DARABONBA_PTR_FROM_JSON(MixingTemplate, mixingTemplate_);
            DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
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
        && this->backgroundSound_ == nullptr && this->backgroundVolume_ == nullptr && this->customerAccountId_ == nullptr && this->mixingEnabled_ == nullptr && this->mixingTemplate_ == nullptr
        && this->resourceId_ == nullptr && this->ttsSpeed_ == nullptr && this->ttsStyle_ == nullptr && this->ttsVolume_ == nullptr && this->voiceCode_ == nullptr
        && this->voiceType_ == nullptr; };
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


          // customerAccountId Field Functions 
          bool hasCustomerAccountId() const { return this->customerAccountId_ != nullptr;};
          void deleteCustomerAccountId() { this->customerAccountId_ = nullptr;};
          inline int64_t getCustomerAccountId() const { DARABONBA_PTR_GET_DEFAULT(customerAccountId_, 0L) };
          inline TtsConfig& setCustomerAccountId(int64_t customerAccountId) { DARABONBA_PTR_SET_VALUE(customerAccountId_, customerAccountId) };


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


          // resourceId Field Functions 
          bool hasResourceId() const { return this->resourceId_ != nullptr;};
          void deleteResourceId() { this->resourceId_ = nullptr;};
          inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
          inline TtsConfig& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


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
          inline bool getVoiceType() const { DARABONBA_PTR_GET_DEFAULT(voiceType_, false) };
          inline TtsConfig& setVoiceType(bool voiceType) { DARABONBA_PTR_SET_VALUE(voiceType_, voiceType) };


        protected:
          // Specifies whether to enable background sound.
          shared_ptr<bool> backgroundEnabled_ {};
          // The ID of the background sound.
          shared_ptr<int64_t> backgroundSound_ {};
          // The volume of the background sound. Valid values: `0` (low), `1` (medium), and `2` (high).
          shared_ptr<int64_t> backgroundVolume_ {};
          // The account of the third-party voice platform.
          shared_ptr<int64_t> customerAccountId_ {};
          // Specifies whether to enable audio mixing.
          shared_ptr<bool> mixingEnabled_ {};
          // The ID of the audio mixing template.
          shared_ptr<int64_t> mixingTemplate_ {};
          // The resource ID. This parameter is required only for third-party voices.
          shared_ptr<string> resourceId_ {};
          // The speech rate for TTS playback. Valid values: -200 to 200. Default value: 0.
          shared_ptr<int64_t> ttsSpeed_ {};
          // The voice style.
          shared_ptr<string> ttsStyle_ {};
          // The volume of TTS playback. Valid values: 0 to 100.
          shared_ptr<int64_t> ttsVolume_ {};
          // The voice code.
          shared_ptr<string> voiceCode_ {};
          // The type of the TTS voice. Valid values:
          // 
          // `VOICE_TYPE_SYSTEM`: a system voice.
          // 
          // `VOICE_TYPE_CLONE`: a cloned voice.
          // 
          // `VOICE_TYPE_DOUBAO`: a Doubao voice.
          // 
          // `VOICE_TYPE_MINIMAX`: a Minimax voice.
          // 
          // `VOICE_TYPE_OPENTTS`: an open voice.
          // 
          // `VOICE_TYPE_BL_CUSTOM`: a high-quality custom cloned voice.
          shared_ptr<bool> voiceType_ {};
        };

        class TransferConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TransferConfig& obj) { 
            DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
            DARABONBA_PTR_TO_JSON(CallerNumber, callerNumber_);
            DARABONBA_PTR_TO_JSON(CallerNumberType, callerNumberType_);
            DARABONBA_PTR_TO_JSON(CallingNumber, callingNumber_);
            DARABONBA_PTR_TO_JSON(CallingNumberType, callingNumberType_);
            DARABONBA_PTR_TO_JSON(CustomerRouteCode, customerRouteCode_);
            DARABONBA_PTR_TO_JSON(Enabled, enabled_);
            DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
            DARABONBA_PTR_TO_JSON(FailureContent, failureContent_);
            DARABONBA_PTR_TO_JSON(SeatRouteCode, seatRouteCode_);
            DARABONBA_PTR_TO_JSON(SeatRouteName, seatRouteName_);
            DARABONBA_PTR_TO_JSON(TransferBizId, transferBizId_);
            DARABONBA_PTR_TO_JSON(TransferContent, transferContent_);
            DARABONBA_PTR_TO_JSON(TransferType, transferType_);
          };
          friend void from_json(const Darabonba::Json& j, TransferConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
            DARABONBA_PTR_FROM_JSON(CallerNumber, callerNumber_);
            DARABONBA_PTR_FROM_JSON(CallerNumberType, callerNumberType_);
            DARABONBA_PTR_FROM_JSON(CallingNumber, callingNumber_);
            DARABONBA_PTR_FROM_JSON(CallingNumberType, callingNumberType_);
            DARABONBA_PTR_FROM_JSON(CustomerRouteCode, customerRouteCode_);
            DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
            DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
            DARABONBA_PTR_FROM_JSON(FailureContent, failureContent_);
            DARABONBA_PTR_FROM_JSON(SeatRouteCode, seatRouteCode_);
            DARABONBA_PTR_FROM_JSON(SeatRouteName, seatRouteName_);
            DARABONBA_PTR_FROM_JSON(TransferBizId, transferBizId_);
            DARABONBA_PTR_FROM_JSON(TransferContent, transferContent_);
            DARABONBA_PTR_FROM_JSON(TransferType, transferType_);
          };
          TransferConfig() = default ;
          TransferConfig(const TransferConfig &) = default ;
          TransferConfig(TransferConfig &&) = default ;
          TransferConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TransferConfig() = default ;
          TransferConfig& operator=(const TransferConfig &) = default ;
          TransferConfig& operator=(TransferConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->calledNumber_ == nullptr
        && this->callerNumber_ == nullptr && this->callerNumberType_ == nullptr && this->callingNumber_ == nullptr && this->callingNumberType_ == nullptr && this->customerRouteCode_ == nullptr
        && this->enabled_ == nullptr && this->extraInfo_ == nullptr && this->failureContent_ == nullptr && this->seatRouteCode_ == nullptr && this->seatRouteName_ == nullptr
        && this->transferBizId_ == nullptr && this->transferContent_ == nullptr && this->transferType_ == nullptr; };
          // calledNumber Field Functions 
          bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
          void deleteCalledNumber() { this->calledNumber_ = nullptr;};
          inline string getCalledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
          inline TransferConfig& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


          // callerNumber Field Functions 
          bool hasCallerNumber() const { return this->callerNumber_ != nullptr;};
          void deleteCallerNumber() { this->callerNumber_ = nullptr;};
          inline string getCallerNumber() const { DARABONBA_PTR_GET_DEFAULT(callerNumber_, "") };
          inline TransferConfig& setCallerNumber(string callerNumber) { DARABONBA_PTR_SET_VALUE(callerNumber_, callerNumber) };


          // callerNumberType Field Functions 
          bool hasCallerNumberType() const { return this->callerNumberType_ != nullptr;};
          void deleteCallerNumberType() { this->callerNumberType_ = nullptr;};
          inline int64_t getCallerNumberType() const { DARABONBA_PTR_GET_DEFAULT(callerNumberType_, 0L) };
          inline TransferConfig& setCallerNumberType(int64_t callerNumberType) { DARABONBA_PTR_SET_VALUE(callerNumberType_, callerNumberType) };


          // callingNumber Field Functions 
          bool hasCallingNumber() const { return this->callingNumber_ != nullptr;};
          void deleteCallingNumber() { this->callingNumber_ = nullptr;};
          inline string getCallingNumber() const { DARABONBA_PTR_GET_DEFAULT(callingNumber_, "") };
          inline TransferConfig& setCallingNumber(string callingNumber) { DARABONBA_PTR_SET_VALUE(callingNumber_, callingNumber) };


          // callingNumberType Field Functions 
          bool hasCallingNumberType() const { return this->callingNumberType_ != nullptr;};
          void deleteCallingNumberType() { this->callingNumberType_ = nullptr;};
          inline int64_t getCallingNumberType() const { DARABONBA_PTR_GET_DEFAULT(callingNumberType_, 0L) };
          inline TransferConfig& setCallingNumberType(int64_t callingNumberType) { DARABONBA_PTR_SET_VALUE(callingNumberType_, callingNumberType) };


          // customerRouteCode Field Functions 
          bool hasCustomerRouteCode() const { return this->customerRouteCode_ != nullptr;};
          void deleteCustomerRouteCode() { this->customerRouteCode_ = nullptr;};
          inline string getCustomerRouteCode() const { DARABONBA_PTR_GET_DEFAULT(customerRouteCode_, "") };
          inline TransferConfig& setCustomerRouteCode(string customerRouteCode) { DARABONBA_PTR_SET_VALUE(customerRouteCode_, customerRouteCode) };


          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
          inline TransferConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


          // extraInfo Field Functions 
          bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
          void deleteExtraInfo() { this->extraInfo_ = nullptr;};
          inline string getExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
          inline TransferConfig& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


          // failureContent Field Functions 
          bool hasFailureContent() const { return this->failureContent_ != nullptr;};
          void deleteFailureContent() { this->failureContent_ = nullptr;};
          inline string getFailureContent() const { DARABONBA_PTR_GET_DEFAULT(failureContent_, "") };
          inline TransferConfig& setFailureContent(string failureContent) { DARABONBA_PTR_SET_VALUE(failureContent_, failureContent) };


          // seatRouteCode Field Functions 
          bool hasSeatRouteCode() const { return this->seatRouteCode_ != nullptr;};
          void deleteSeatRouteCode() { this->seatRouteCode_ = nullptr;};
          inline string getSeatRouteCode() const { DARABONBA_PTR_GET_DEFAULT(seatRouteCode_, "") };
          inline TransferConfig& setSeatRouteCode(string seatRouteCode) { DARABONBA_PTR_SET_VALUE(seatRouteCode_, seatRouteCode) };


          // seatRouteName Field Functions 
          bool hasSeatRouteName() const { return this->seatRouteName_ != nullptr;};
          void deleteSeatRouteName() { this->seatRouteName_ = nullptr;};
          inline string getSeatRouteName() const { DARABONBA_PTR_GET_DEFAULT(seatRouteName_, "") };
          inline TransferConfig& setSeatRouteName(string seatRouteName) { DARABONBA_PTR_SET_VALUE(seatRouteName_, seatRouteName) };


          // transferBizId Field Functions 
          bool hasTransferBizId() const { return this->transferBizId_ != nullptr;};
          void deleteTransferBizId() { this->transferBizId_ = nullptr;};
          inline string getTransferBizId() const { DARABONBA_PTR_GET_DEFAULT(transferBizId_, "") };
          inline TransferConfig& setTransferBizId(string transferBizId) { DARABONBA_PTR_SET_VALUE(transferBizId_, transferBizId) };


          // transferContent Field Functions 
          bool hasTransferContent() const { return this->transferContent_ != nullptr;};
          void deleteTransferContent() { this->transferContent_ = nullptr;};
          inline string getTransferContent() const { DARABONBA_PTR_GET_DEFAULT(transferContent_, "") };
          inline TransferConfig& setTransferContent(string transferContent) { DARABONBA_PTR_SET_VALUE(transferContent_, transferContent) };


          // transferType Field Functions 
          bool hasTransferType() const { return this->transferType_ != nullptr;};
          void deleteTransferType() { this->transferType_ = nullptr;};
          inline int64_t getTransferType() const { DARABONBA_PTR_GET_DEFAULT(transferType_, 0L) };
          inline TransferConfig& setTransferType(int64_t transferType) { DARABONBA_PTR_SET_VALUE(transferType_, transferType) };


        protected:
          // The called number.
          shared_ptr<string> calledNumber_ {};
          // The caller number.
          shared_ptr<string> callerNumber_ {};
          // The type of the caller number.
          shared_ptr<int64_t> callerNumberType_ {};
          // The destination number for the transfer, such as the phone number of a customer service agent.
          shared_ptr<string> callingNumber_ {};
          // The type of the called number.
          shared_ptr<int64_t> callingNumberType_ {};
          // The customer route code.
          shared_ptr<string> customerRouteCode_ {};
          // Specifies whether to enable call transfer.
          shared_ptr<bool> enabled_ {};
          // The supplementary information.
          shared_ptr<string> extraInfo_ {};
          // The prompt that is played when the transfer to a manual agent fails.
          shared_ptr<string> failureContent_ {};
          // The agent route code.
          shared_ptr<string> seatRouteCode_ {};
          // The name of the agent route.
          shared_ptr<string> seatRouteName_ {};
          // The business ID.
          shared_ptr<string> transferBizId_ {};
          // The prompt that is played when the call is transferred to a manual agent.
          shared_ptr<string> transferContent_ {};
          // The agent transfer type.
          shared_ptr<int64_t> transferType_ {};
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
          // Specifies whether to disconnect the call when an answering machine is detected.
          shared_ptr<bool> callAssistantHangup_ {};
          // Specifies whether to enable answering machine detection.
          shared_ptr<bool> callAssistantRecognize_ {};
          // Specifies whether to wake up the model upon the first mute event.
          shared_ptr<bool> muteActive_ {};
          // The mute duration. Unit: seconds. Valid values: 3 to 15.
          shared_ptr<int64_t> muteDuration_ {};
          // The number of consecutive mute events that trigger an automatic disconnection. Valid values: 1 to 5.
          shared_ptr<int64_t> muteHangupNum_ {};
          // The maximum call duration. Unit: seconds. Valid values: 600 to 3600. The call is automatically disconnected if this duration is exceeded.
          shared_ptr<int64_t> sessionTimeout_ {};
        };

        virtual bool empty() const override { return this->eventConfig_ == nullptr
        && this->prologue_ == nullptr && this->recordingFile_ == nullptr && this->startWordType_ == nullptr && this->transferConfig_ == nullptr && this->ttsConfig_ == nullptr
        && this->vocabId_ == nullptr; };
        // eventConfig Field Functions 
        bool hasEventConfig() const { return this->eventConfig_ != nullptr;};
        void deleteEventConfig() { this->eventConfig_ = nullptr;};
        inline const AgentCallConfig::EventConfig & getEventConfig() const { DARABONBA_PTR_GET_CONST(eventConfig_, AgentCallConfig::EventConfig) };
        inline AgentCallConfig::EventConfig getEventConfig() { DARABONBA_PTR_GET(eventConfig_, AgentCallConfig::EventConfig) };
        inline AgentCallConfig& setEventConfig(const AgentCallConfig::EventConfig & eventConfig) { DARABONBA_PTR_SET_VALUE(eventConfig_, eventConfig) };
        inline AgentCallConfig& setEventConfig(AgentCallConfig::EventConfig && eventConfig) { DARABONBA_PTR_SET_RVALUE(eventConfig_, eventConfig) };


        // prologue Field Functions 
        bool hasPrologue() const { return this->prologue_ != nullptr;};
        void deletePrologue() { this->prologue_ = nullptr;};
        inline string getPrologue() const { DARABONBA_PTR_GET_DEFAULT(prologue_, "") };
        inline AgentCallConfig& setPrologue(string prologue) { DARABONBA_PTR_SET_VALUE(prologue_, prologue) };


        // recordingFile Field Functions 
        bool hasRecordingFile() const { return this->recordingFile_ != nullptr;};
        void deleteRecordingFile() { this->recordingFile_ = nullptr;};
        inline string getRecordingFile() const { DARABONBA_PTR_GET_DEFAULT(recordingFile_, "") };
        inline AgentCallConfig& setRecordingFile(string recordingFile) { DARABONBA_PTR_SET_VALUE(recordingFile_, recordingFile) };


        // startWordType Field Functions 
        bool hasStartWordType() const { return this->startWordType_ != nullptr;};
        void deleteStartWordType() { this->startWordType_ = nullptr;};
        inline int64_t getStartWordType() const { DARABONBA_PTR_GET_DEFAULT(startWordType_, 0L) };
        inline AgentCallConfig& setStartWordType(int64_t startWordType) { DARABONBA_PTR_SET_VALUE(startWordType_, startWordType) };


        // transferConfig Field Functions 
        bool hasTransferConfig() const { return this->transferConfig_ != nullptr;};
        void deleteTransferConfig() { this->transferConfig_ = nullptr;};
        inline const AgentCallConfig::TransferConfig & getTransferConfig() const { DARABONBA_PTR_GET_CONST(transferConfig_, AgentCallConfig::TransferConfig) };
        inline AgentCallConfig::TransferConfig getTransferConfig() { DARABONBA_PTR_GET(transferConfig_, AgentCallConfig::TransferConfig) };
        inline AgentCallConfig& setTransferConfig(const AgentCallConfig::TransferConfig & transferConfig) { DARABONBA_PTR_SET_VALUE(transferConfig_, transferConfig) };
        inline AgentCallConfig& setTransferConfig(AgentCallConfig::TransferConfig && transferConfig) { DARABONBA_PTR_SET_RVALUE(transferConfig_, transferConfig) };


        // ttsConfig Field Functions 
        bool hasTtsConfig() const { return this->ttsConfig_ != nullptr;};
        void deleteTtsConfig() { this->ttsConfig_ = nullptr;};
        inline const AgentCallConfig::TtsConfig & getTtsConfig() const { DARABONBA_PTR_GET_CONST(ttsConfig_, AgentCallConfig::TtsConfig) };
        inline AgentCallConfig::TtsConfig getTtsConfig() { DARABONBA_PTR_GET(ttsConfig_, AgentCallConfig::TtsConfig) };
        inline AgentCallConfig& setTtsConfig(const AgentCallConfig::TtsConfig & ttsConfig) { DARABONBA_PTR_SET_VALUE(ttsConfig_, ttsConfig) };
        inline AgentCallConfig& setTtsConfig(AgentCallConfig::TtsConfig && ttsConfig) { DARABONBA_PTR_SET_RVALUE(ttsConfig_, ttsConfig) };


        // vocabId Field Functions 
        bool hasVocabId() const { return this->vocabId_ != nullptr;};
        void deleteVocabId() { this->vocabId_ = nullptr;};
        inline string getVocabId() const { DARABONBA_PTR_GET_DEFAULT(vocabId_, "") };
        inline AgentCallConfig& setVocabId(string vocabId) { DARABONBA_PTR_SET_VALUE(vocabId_, vocabId) };


      protected:
        // The event configuration.
        shared_ptr<AgentCallConfig::EventConfig> eventConfig_ {};
        // The prologue.
        shared_ptr<string> prologue_ {};
        // The URL of the audio file for the prologue. This parameter is returned only when `StartWordType` is set to `1`.
        shared_ptr<string> recordingFile_ {};
        // The type of the prologue. Valid values: `0` (text) and `1` (recording).
        shared_ptr<int64_t> startWordType_ {};
        // The configuration for transferring the call to a manual agent.
        shared_ptr<AgentCallConfig::TransferConfig> transferConfig_ {};
        // The Text-to-Speech (TTS) configuration.
        shared_ptr<AgentCallConfig::TtsConfig> ttsConfig_ {};
        // The ID of the hotword vocabulary.
        shared_ptr<string> vocabId_ {};
      };

      virtual bool empty() const override { return this->agentCallConfig_ == nullptr
        && this->agentDemandConfig_ == nullptr && this->agentDesc_ == nullptr && this->agentId_ == nullptr && this->agentMode_ == nullptr && this->agentName_ == nullptr
        && this->branchDeployStatus_ == nullptr && this->branchDesc_ == nullptr && this->branchId_ == nullptr && this->branchName_ == nullptr && this->knowledgeConfig_ == nullptr
        && this->phoneTagConfig_ == nullptr && this->scene_ == nullptr && this->summaryConfig_ == nullptr && this->versionDesc_ == nullptr && this->versionId_ == nullptr
        && this->versionName_ == nullptr && this->versionPublishStatus_ == nullptr && this->versionPublishTime_ == nullptr; };
      // agentCallConfig Field Functions 
      bool hasAgentCallConfig() const { return this->agentCallConfig_ != nullptr;};
      void deleteAgentCallConfig() { this->agentCallConfig_ = nullptr;};
      inline const Data::AgentCallConfig & getAgentCallConfig() const { DARABONBA_PTR_GET_CONST(agentCallConfig_, Data::AgentCallConfig) };
      inline Data::AgentCallConfig getAgentCallConfig() { DARABONBA_PTR_GET(agentCallConfig_, Data::AgentCallConfig) };
      inline Data& setAgentCallConfig(const Data::AgentCallConfig & agentCallConfig) { DARABONBA_PTR_SET_VALUE(agentCallConfig_, agentCallConfig) };
      inline Data& setAgentCallConfig(Data::AgentCallConfig && agentCallConfig) { DARABONBA_PTR_SET_RVALUE(agentCallConfig_, agentCallConfig) };


      // agentDemandConfig Field Functions 
      bool hasAgentDemandConfig() const { return this->agentDemandConfig_ != nullptr;};
      void deleteAgentDemandConfig() { this->agentDemandConfig_ = nullptr;};
      inline const Data::AgentDemandConfig & getAgentDemandConfig() const { DARABONBA_PTR_GET_CONST(agentDemandConfig_, Data::AgentDemandConfig) };
      inline Data::AgentDemandConfig getAgentDemandConfig() { DARABONBA_PTR_GET(agentDemandConfig_, Data::AgentDemandConfig) };
      inline Data& setAgentDemandConfig(const Data::AgentDemandConfig & agentDemandConfig) { DARABONBA_PTR_SET_VALUE(agentDemandConfig_, agentDemandConfig) };
      inline Data& setAgentDemandConfig(Data::AgentDemandConfig && agentDemandConfig) { DARABONBA_PTR_SET_RVALUE(agentDemandConfig_, agentDemandConfig) };


      // agentDesc Field Functions 
      bool hasAgentDesc() const { return this->agentDesc_ != nullptr;};
      void deleteAgentDesc() { this->agentDesc_ = nullptr;};
      inline string getAgentDesc() const { DARABONBA_PTR_GET_DEFAULT(agentDesc_, "") };
      inline Data& setAgentDesc(string agentDesc) { DARABONBA_PTR_SET_VALUE(agentDesc_, agentDesc) };


      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline int64_t getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0L) };
      inline Data& setAgentId(int64_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // agentMode Field Functions 
      bool hasAgentMode() const { return this->agentMode_ != nullptr;};
      void deleteAgentMode() { this->agentMode_ = nullptr;};
      inline int64_t getAgentMode() const { DARABONBA_PTR_GET_DEFAULT(agentMode_, 0L) };
      inline Data& setAgentMode(int64_t agentMode) { DARABONBA_PTR_SET_VALUE(agentMode_, agentMode) };


      // agentName Field Functions 
      bool hasAgentName() const { return this->agentName_ != nullptr;};
      void deleteAgentName() { this->agentName_ = nullptr;};
      inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
      inline Data& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


      // branchDeployStatus Field Functions 
      bool hasBranchDeployStatus() const { return this->branchDeployStatus_ != nullptr;};
      void deleteBranchDeployStatus() { this->branchDeployStatus_ = nullptr;};
      inline int64_t getBranchDeployStatus() const { DARABONBA_PTR_GET_DEFAULT(branchDeployStatus_, 0L) };
      inline Data& setBranchDeployStatus(int64_t branchDeployStatus) { DARABONBA_PTR_SET_VALUE(branchDeployStatus_, branchDeployStatus) };


      // branchDesc Field Functions 
      bool hasBranchDesc() const { return this->branchDesc_ != nullptr;};
      void deleteBranchDesc() { this->branchDesc_ = nullptr;};
      inline string getBranchDesc() const { DARABONBA_PTR_GET_DEFAULT(branchDesc_, "") };
      inline Data& setBranchDesc(string branchDesc) { DARABONBA_PTR_SET_VALUE(branchDesc_, branchDesc) };


      // branchId Field Functions 
      bool hasBranchId() const { return this->branchId_ != nullptr;};
      void deleteBranchId() { this->branchId_ = nullptr;};
      inline int64_t getBranchId() const { DARABONBA_PTR_GET_DEFAULT(branchId_, 0L) };
      inline Data& setBranchId(int64_t branchId) { DARABONBA_PTR_SET_VALUE(branchId_, branchId) };


      // branchName Field Functions 
      bool hasBranchName() const { return this->branchName_ != nullptr;};
      void deleteBranchName() { this->branchName_ = nullptr;};
      inline string getBranchName() const { DARABONBA_PTR_GET_DEFAULT(branchName_, "") };
      inline Data& setBranchName(string branchName) { DARABONBA_PTR_SET_VALUE(branchName_, branchName) };


      // knowledgeConfig Field Functions 
      bool hasKnowledgeConfig() const { return this->knowledgeConfig_ != nullptr;};
      void deleteKnowledgeConfig() { this->knowledgeConfig_ = nullptr;};
      inline const Data::KnowledgeConfig & getKnowledgeConfig() const { DARABONBA_PTR_GET_CONST(knowledgeConfig_, Data::KnowledgeConfig) };
      inline Data::KnowledgeConfig getKnowledgeConfig() { DARABONBA_PTR_GET(knowledgeConfig_, Data::KnowledgeConfig) };
      inline Data& setKnowledgeConfig(const Data::KnowledgeConfig & knowledgeConfig) { DARABONBA_PTR_SET_VALUE(knowledgeConfig_, knowledgeConfig) };
      inline Data& setKnowledgeConfig(Data::KnowledgeConfig && knowledgeConfig) { DARABONBA_PTR_SET_RVALUE(knowledgeConfig_, knowledgeConfig) };


      // phoneTagConfig Field Functions 
      bool hasPhoneTagConfig() const { return this->phoneTagConfig_ != nullptr;};
      void deletePhoneTagConfig() { this->phoneTagConfig_ = nullptr;};
      inline const vector<Data::PhoneTagConfig> & getPhoneTagConfig() const { DARABONBA_PTR_GET_CONST(phoneTagConfig_, vector<Data::PhoneTagConfig>) };
      inline vector<Data::PhoneTagConfig> getPhoneTagConfig() { DARABONBA_PTR_GET(phoneTagConfig_, vector<Data::PhoneTagConfig>) };
      inline Data& setPhoneTagConfig(const vector<Data::PhoneTagConfig> & phoneTagConfig) { DARABONBA_PTR_SET_VALUE(phoneTagConfig_, phoneTagConfig) };
      inline Data& setPhoneTagConfig(vector<Data::PhoneTagConfig> && phoneTagConfig) { DARABONBA_PTR_SET_RVALUE(phoneTagConfig_, phoneTagConfig) };


      // scene Field Functions 
      bool hasScene() const { return this->scene_ != nullptr;};
      void deleteScene() { this->scene_ = nullptr;};
      inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
      inline Data& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


      // summaryConfig Field Functions 
      bool hasSummaryConfig() const { return this->summaryConfig_ != nullptr;};
      void deleteSummaryConfig() { this->summaryConfig_ = nullptr;};
      inline const Data::SummaryConfig & getSummaryConfig() const { DARABONBA_PTR_GET_CONST(summaryConfig_, Data::SummaryConfig) };
      inline Data::SummaryConfig getSummaryConfig() { DARABONBA_PTR_GET(summaryConfig_, Data::SummaryConfig) };
      inline Data& setSummaryConfig(const Data::SummaryConfig & summaryConfig) { DARABONBA_PTR_SET_VALUE(summaryConfig_, summaryConfig) };
      inline Data& setSummaryConfig(Data::SummaryConfig && summaryConfig) { DARABONBA_PTR_SET_RVALUE(summaryConfig_, summaryConfig) };


      // versionDesc Field Functions 
      bool hasVersionDesc() const { return this->versionDesc_ != nullptr;};
      void deleteVersionDesc() { this->versionDesc_ = nullptr;};
      inline string getVersionDesc() const { DARABONBA_PTR_GET_DEFAULT(versionDesc_, "") };
      inline Data& setVersionDesc(string versionDesc) { DARABONBA_PTR_SET_VALUE(versionDesc_, versionDesc) };


      // versionId Field Functions 
      bool hasVersionId() const { return this->versionId_ != nullptr;};
      void deleteVersionId() { this->versionId_ = nullptr;};
      inline int64_t getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, 0L) };
      inline Data& setVersionId(int64_t versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


      // versionName Field Functions 
      bool hasVersionName() const { return this->versionName_ != nullptr;};
      void deleteVersionName() { this->versionName_ = nullptr;};
      inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
      inline Data& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


      // versionPublishStatus Field Functions 
      bool hasVersionPublishStatus() const { return this->versionPublishStatus_ != nullptr;};
      void deleteVersionPublishStatus() { this->versionPublishStatus_ = nullptr;};
      inline int64_t getVersionPublishStatus() const { DARABONBA_PTR_GET_DEFAULT(versionPublishStatus_, 0L) };
      inline Data& setVersionPublishStatus(int64_t versionPublishStatus) { DARABONBA_PTR_SET_VALUE(versionPublishStatus_, versionPublishStatus) };


      // versionPublishTime Field Functions 
      bool hasVersionPublishTime() const { return this->versionPublishTime_ != nullptr;};
      void deleteVersionPublishTime() { this->versionPublishTime_ = nullptr;};
      inline string getVersionPublishTime() const { DARABONBA_PTR_GET_DEFAULT(versionPublishTime_, "") };
      inline Data& setVersionPublishTime(string versionPublishTime) { DARABONBA_PTR_SET_VALUE(versionPublishTime_, versionPublishTime) };


    protected:
      // The voice configuration for intelligent outbound calls.
      shared_ptr<Data::AgentCallConfig> agentCallConfig_ {};
      // The business requirement configuration for the agent.
      shared_ptr<Data::AgentDemandConfig> agentDemandConfig_ {};
      // The agent description.
      shared_ptr<string> agentDesc_ {};
      // The agent ID.
      shared_ptr<int64_t> agentId_ {};
      // The build mode. Valid values:
      // 
      // - `0`: prompt-based mode.
      // 
      // - `1`: dialog flow mode.
      shared_ptr<int64_t> agentMode_ {};
      // The agent name.
      shared_ptr<string> agentName_ {};
      // The deployment status. Valid values:
      // 
      // - `0`: Inactive (NOT_EFFECT).
      // 
      // - `1`: Active (EFFECT).
      shared_ptr<int64_t> branchDeployStatus_ {};
      // The branch description.
      shared_ptr<string> branchDesc_ {};
      // The branch ID.
      shared_ptr<int64_t> branchId_ {};
      // The branch name.
      shared_ptr<string> branchName_ {};
      // The knowledge base configuration.
      shared_ptr<Data::KnowledgeConfig> knowledgeConfig_ {};
      // The call variable configuration.
      shared_ptr<vector<Data::PhoneTagConfig>> phoneTagConfig_ {};
      // The scenario.
      shared_ptr<string> scene_ {};
      // The call summary configuration.
      shared_ptr<Data::SummaryConfig> summaryConfig_ {};
      // Version Description
      shared_ptr<string> versionDesc_ {};
      // Version ID.
      shared_ptr<int64_t> versionId_ {};
      // Version name.
      shared_ptr<string> versionName_ {};
      // The release status of the version. 0 indicates Unreleased, 1 indicates Released, and 2 indicates Draft.
      shared_ptr<int64_t> versionPublishStatus_ {};
      // The most recent release time of the version.
      shared_ptr<string> versionPublishTime_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QueryAiVoiceAgentDetailNewResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryAiVoiceAgentDetailNewResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryAiVoiceAgentDetailNewResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryAiVoiceAgentDetailNewResponseBody::Data) };
    inline QueryAiVoiceAgentDetailNewResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryAiVoiceAgentDetailNewResponseBody::Data) };
    inline QueryAiVoiceAgentDetailNewResponseBody& setData(const QueryAiVoiceAgentDetailNewResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryAiVoiceAgentDetailNewResponseBody& setData(QueryAiVoiceAgentDetailNewResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryAiVoiceAgentDetailNewResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAiVoiceAgentDetailNewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAiVoiceAgentDetailNewResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The reason for the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // Status code.
    shared_ptr<string> code_ {};
    // The detailed data of the agent.
    shared_ptr<QueryAiVoiceAgentDetailNewResponseBody::Data> data_ {};
    // The message that is associated with the status code.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the API call was successful. Possible values:
    // 
    // - **true**: The operation was successful.
    // 
    // - **false**: Failure.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
