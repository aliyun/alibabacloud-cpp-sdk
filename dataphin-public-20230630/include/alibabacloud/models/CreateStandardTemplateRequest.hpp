// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTANDARDTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTANDARDTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateStandardTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStandardTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStandardTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreateStandardTemplateRequest() = default ;
    CreateStandardTemplateRequest(const CreateStandardTemplateRequest &) = default ;
    CreateStandardTemplateRequest(CreateStandardTemplateRequest &&) = default ;
    CreateStandardTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStandardTemplateRequest() = default ;
    CreateStandardTemplateRequest& operator=(const CreateStandardTemplateRequest &) = default ;
    CreateStandardTemplateRequest& operator=(CreateStandardTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(AttributesConfig, attributesConfig_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(CodeRuleConfig, codeRuleConfig_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(MaintainerList, maintainerList_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PublishInfo, publishInfo_);
      };
      friend void from_json(const Darabonba::Json& j, CreateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(AttributesConfig, attributesConfig_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(CodeRuleConfig, codeRuleConfig_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(MaintainerList, maintainerList_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PublishInfo, publishInfo_);
      };
      CreateCommand() = default ;
      CreateCommand(const CreateCommand &) = default ;
      CreateCommand(CreateCommand &&) = default ;
      CreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateCommand() = default ;
      CreateCommand& operator=(const CreateCommand &) = default ;
      CreateCommand& operator=(CreateCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PublishInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PublishInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Comment, comment_);
        };
        friend void from_json(const Darabonba::Json& j, PublishInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
        };
        PublishInfo() = default ;
        PublishInfo(const PublishInfo &) = default ;
        PublishInfo(PublishInfo &&) = default ;
        PublishInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PublishInfo() = default ;
        PublishInfo& operator=(const PublishInfo &) = default ;
        PublishInfo& operator=(PublishInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->comment_ == nullptr; };
        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline PublishInfo& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      protected:
        shared_ptr<string> comment_ {};
      };

      class CodeRuleConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CodeRuleConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AutoConfig, autoConfig_);
          DARABONBA_PTR_TO_JSON(GenerateType, generateType_);
        };
        friend void from_json(const Darabonba::Json& j, CodeRuleConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoConfig, autoConfig_);
          DARABONBA_PTR_FROM_JSON(GenerateType, generateType_);
        };
        CodeRuleConfig() = default ;
        CodeRuleConfig(const CodeRuleConfig &) = default ;
        CodeRuleConfig(CodeRuleConfig &&) = default ;
        CodeRuleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CodeRuleConfig() = default ;
        CodeRuleConfig& operator=(const CodeRuleConfig &) = default ;
        CodeRuleConfig& operator=(CodeRuleConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AutoConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AutoConfig& obj) { 
            DARABONBA_PTR_TO_JSON(CodeRuleList, codeRuleList_);
            DARABONBA_PTR_TO_JSON(NeedStrongValidate, needStrongValidate_);
          };
          friend void from_json(const Darabonba::Json& j, AutoConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(CodeRuleList, codeRuleList_);
            DARABONBA_PTR_FROM_JSON(NeedStrongValidate, needStrongValidate_);
          };
          AutoConfig() = default ;
          AutoConfig(const AutoConfig &) = default ;
          AutoConfig(AutoConfig &&) = default ;
          AutoConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AutoConfig() = default ;
          AutoConfig& operator=(const AutoConfig &) = default ;
          AutoConfig& operator=(AutoConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class CodeRuleList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CodeRuleList& obj) { 
              DARABONBA_PTR_TO_JSON(AutoIncrementSequenceConfig, autoIncrementSequenceConfig_);
              DARABONBA_PTR_TO_JSON(Index, index_);
              DARABONBA_PTR_TO_JSON(Type, type_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, CodeRuleList& obj) { 
              DARABONBA_PTR_FROM_JSON(AutoIncrementSequenceConfig, autoIncrementSequenceConfig_);
              DARABONBA_PTR_FROM_JSON(Index, index_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            CodeRuleList() = default ;
            CodeRuleList(const CodeRuleList &) = default ;
            CodeRuleList(CodeRuleList &&) = default ;
            CodeRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CodeRuleList() = default ;
            CodeRuleList& operator=(const CodeRuleList &) = default ;
            CodeRuleList& operator=(CodeRuleList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class AutoIncrementSequenceConfig : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const AutoIncrementSequenceConfig& obj) { 
                DARABONBA_PTR_TO_JSON(Digit, digit_);
                DARABONBA_PTR_TO_JSON(NeedPaddingZero, needPaddingZero_);
                DARABONBA_PTR_TO_JSON(StartValue, startValue_);
                DARABONBA_PTR_TO_JSON(Step, step_);
              };
              friend void from_json(const Darabonba::Json& j, AutoIncrementSequenceConfig& obj) { 
                DARABONBA_PTR_FROM_JSON(Digit, digit_);
                DARABONBA_PTR_FROM_JSON(NeedPaddingZero, needPaddingZero_);
                DARABONBA_PTR_FROM_JSON(StartValue, startValue_);
                DARABONBA_PTR_FROM_JSON(Step, step_);
              };
              AutoIncrementSequenceConfig() = default ;
              AutoIncrementSequenceConfig(const AutoIncrementSequenceConfig &) = default ;
              AutoIncrementSequenceConfig(AutoIncrementSequenceConfig &&) = default ;
              AutoIncrementSequenceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~AutoIncrementSequenceConfig() = default ;
              AutoIncrementSequenceConfig& operator=(const AutoIncrementSequenceConfig &) = default ;
              AutoIncrementSequenceConfig& operator=(AutoIncrementSequenceConfig &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->digit_ == nullptr
        && this->needPaddingZero_ == nullptr && this->startValue_ == nullptr && this->step_ == nullptr; };
              // digit Field Functions 
              bool hasDigit() const { return this->digit_ != nullptr;};
              void deleteDigit() { this->digit_ = nullptr;};
              inline int32_t getDigit() const { DARABONBA_PTR_GET_DEFAULT(digit_, 0) };
              inline AutoIncrementSequenceConfig& setDigit(int32_t digit) { DARABONBA_PTR_SET_VALUE(digit_, digit) };


              // needPaddingZero Field Functions 
              bool hasNeedPaddingZero() const { return this->needPaddingZero_ != nullptr;};
              void deleteNeedPaddingZero() { this->needPaddingZero_ = nullptr;};
              inline bool getNeedPaddingZero() const { DARABONBA_PTR_GET_DEFAULT(needPaddingZero_, false) };
              inline AutoIncrementSequenceConfig& setNeedPaddingZero(bool needPaddingZero) { DARABONBA_PTR_SET_VALUE(needPaddingZero_, needPaddingZero) };


              // startValue Field Functions 
              bool hasStartValue() const { return this->startValue_ != nullptr;};
              void deleteStartValue() { this->startValue_ = nullptr;};
              inline int64_t getStartValue() const { DARABONBA_PTR_GET_DEFAULT(startValue_, 0L) };
              inline AutoIncrementSequenceConfig& setStartValue(int64_t startValue) { DARABONBA_PTR_SET_VALUE(startValue_, startValue) };


              // step Field Functions 
              bool hasStep() const { return this->step_ != nullptr;};
              void deleteStep() { this->step_ = nullptr;};
              inline int32_t getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, 0) };
              inline AutoIncrementSequenceConfig& setStep(int32_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


            protected:
              // This parameter is required.
              shared_ptr<int32_t> digit_ {};
              // This parameter is required.
              shared_ptr<bool> needPaddingZero_ {};
              // This parameter is required.
              shared_ptr<int64_t> startValue_ {};
              // This parameter is required.
              shared_ptr<int32_t> step_ {};
            };

            virtual bool empty() const override { return this->autoIncrementSequenceConfig_ == nullptr
        && this->index_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
            // autoIncrementSequenceConfig Field Functions 
            bool hasAutoIncrementSequenceConfig() const { return this->autoIncrementSequenceConfig_ != nullptr;};
            void deleteAutoIncrementSequenceConfig() { this->autoIncrementSequenceConfig_ = nullptr;};
            inline const CodeRuleList::AutoIncrementSequenceConfig & getAutoIncrementSequenceConfig() const { DARABONBA_PTR_GET_CONST(autoIncrementSequenceConfig_, CodeRuleList::AutoIncrementSequenceConfig) };
            inline CodeRuleList::AutoIncrementSequenceConfig getAutoIncrementSequenceConfig() { DARABONBA_PTR_GET(autoIncrementSequenceConfig_, CodeRuleList::AutoIncrementSequenceConfig) };
            inline CodeRuleList& setAutoIncrementSequenceConfig(const CodeRuleList::AutoIncrementSequenceConfig & autoIncrementSequenceConfig) { DARABONBA_PTR_SET_VALUE(autoIncrementSequenceConfig_, autoIncrementSequenceConfig) };
            inline CodeRuleList& setAutoIncrementSequenceConfig(CodeRuleList::AutoIncrementSequenceConfig && autoIncrementSequenceConfig) { DARABONBA_PTR_SET_RVALUE(autoIncrementSequenceConfig_, autoIncrementSequenceConfig) };


            // index Field Functions 
            bool hasIndex() const { return this->index_ != nullptr;};
            void deleteIndex() { this->index_ = nullptr;};
            inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
            inline CodeRuleList& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline CodeRuleList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline CodeRuleList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<CodeRuleList::AutoIncrementSequenceConfig> autoIncrementSequenceConfig_ {};
            // This parameter is required.
            shared_ptr<int32_t> index_ {};
            // This parameter is required.
            shared_ptr<string> type_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->codeRuleList_ == nullptr
        && this->needStrongValidate_ == nullptr; };
          // codeRuleList Field Functions 
          bool hasCodeRuleList() const { return this->codeRuleList_ != nullptr;};
          void deleteCodeRuleList() { this->codeRuleList_ = nullptr;};
          inline const vector<AutoConfig::CodeRuleList> & getCodeRuleList() const { DARABONBA_PTR_GET_CONST(codeRuleList_, vector<AutoConfig::CodeRuleList>) };
          inline vector<AutoConfig::CodeRuleList> getCodeRuleList() { DARABONBA_PTR_GET(codeRuleList_, vector<AutoConfig::CodeRuleList>) };
          inline AutoConfig& setCodeRuleList(const vector<AutoConfig::CodeRuleList> & codeRuleList) { DARABONBA_PTR_SET_VALUE(codeRuleList_, codeRuleList) };
          inline AutoConfig& setCodeRuleList(vector<AutoConfig::CodeRuleList> && codeRuleList) { DARABONBA_PTR_SET_RVALUE(codeRuleList_, codeRuleList) };


          // needStrongValidate Field Functions 
          bool hasNeedStrongValidate() const { return this->needStrongValidate_ != nullptr;};
          void deleteNeedStrongValidate() { this->needStrongValidate_ = nullptr;};
          inline bool getNeedStrongValidate() const { DARABONBA_PTR_GET_DEFAULT(needStrongValidate_, false) };
          inline AutoConfig& setNeedStrongValidate(bool needStrongValidate) { DARABONBA_PTR_SET_VALUE(needStrongValidate_, needStrongValidate) };


        protected:
          // This parameter is required.
          shared_ptr<vector<AutoConfig::CodeRuleList>> codeRuleList_ {};
          // This parameter is required.
          shared_ptr<bool> needStrongValidate_ {};
        };

        virtual bool empty() const override { return this->autoConfig_ == nullptr
        && this->generateType_ == nullptr; };
        // autoConfig Field Functions 
        bool hasAutoConfig() const { return this->autoConfig_ != nullptr;};
        void deleteAutoConfig() { this->autoConfig_ = nullptr;};
        inline const CodeRuleConfig::AutoConfig & getAutoConfig() const { DARABONBA_PTR_GET_CONST(autoConfig_, CodeRuleConfig::AutoConfig) };
        inline CodeRuleConfig::AutoConfig getAutoConfig() { DARABONBA_PTR_GET(autoConfig_, CodeRuleConfig::AutoConfig) };
        inline CodeRuleConfig& setAutoConfig(const CodeRuleConfig::AutoConfig & autoConfig) { DARABONBA_PTR_SET_VALUE(autoConfig_, autoConfig) };
        inline CodeRuleConfig& setAutoConfig(CodeRuleConfig::AutoConfig && autoConfig) { DARABONBA_PTR_SET_RVALUE(autoConfig_, autoConfig) };


        // generateType Field Functions 
        bool hasGenerateType() const { return this->generateType_ != nullptr;};
        void deleteGenerateType() { this->generateType_ = nullptr;};
        inline string getGenerateType() const { DARABONBA_PTR_GET_DEFAULT(generateType_, "") };
        inline CodeRuleConfig& setGenerateType(string generateType) { DARABONBA_PTR_SET_VALUE(generateType_, generateType) };


      protected:
        shared_ptr<CodeRuleConfig::AutoConfig> autoConfig_ {};
        // This parameter is required.
        shared_ptr<string> generateType_ {};
      };

      class AttributesConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AttributesConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AttributeList, attributeList_);
        };
        friend void from_json(const Darabonba::Json& j, AttributesConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AttributeList, attributeList_);
        };
        AttributesConfig() = default ;
        AttributesConfig(const AttributesConfig &) = default ;
        AttributesConfig(AttributesConfig &&) = default ;
        AttributesConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AttributesConfig() = default ;
        AttributesConfig& operator=(const AttributesConfig &) = default ;
        AttributesConfig& operator=(AttributesConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AttributeList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AttributeList& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(RefAttribute, refAttribute_);
            DARABONBA_PTR_TO_JSON(Required, required_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(ValueConfig, valueConfig_);
          };
          friend void from_json(const Darabonba::Json& j, AttributeList& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(RefAttribute, refAttribute_);
            DARABONBA_PTR_FROM_JSON(Required, required_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(ValueConfig, valueConfig_);
          };
          AttributeList() = default ;
          AttributeList(const AttributeList &) = default ;
          AttributeList(AttributeList &&) = default ;
          AttributeList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AttributeList() = default ;
          AttributeList& operator=(const AttributeList &) = default ;
          AttributeList& operator=(AttributeList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ValueConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ValueConfig& obj) { 
              DARABONBA_PTR_TO_JSON(DataType, dataType_);
              DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
              DARABONBA_PTR_TO_JSON(Length, length_);
              DARABONBA_PTR_TO_JSON(Type, type_);
              DARABONBA_PTR_TO_JSON(ValueRange, valueRange_);
            };
            friend void from_json(const Darabonba::Json& j, ValueConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(DataType, dataType_);
              DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
              DARABONBA_PTR_FROM_JSON(Length, length_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
              DARABONBA_PTR_FROM_JSON(ValueRange, valueRange_);
            };
            ValueConfig() = default ;
            ValueConfig(const ValueConfig &) = default ;
            ValueConfig(ValueConfig &&) = default ;
            ValueConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ValueConfig() = default ;
            ValueConfig& operator=(const ValueConfig &) = default ;
            ValueConfig& operator=(ValueConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ValueRange : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ValueRange& obj) { 
                DARABONBA_PTR_TO_JSON(DataphinAttributeType, dataphinAttributeType_);
                DARABONBA_PTR_TO_JSON(LookupTableReference, lookupTableReference_);
                DARABONBA_PTR_TO_JSON(MinMaxValueConfig, minMaxValueConfig_);
                DARABONBA_PTR_TO_JSON(ValueConstraint, valueConstraint_);
                DARABONBA_PTR_TO_JSON(ValueList, valueList_);
              };
              friend void from_json(const Darabonba::Json& j, ValueRange& obj) { 
                DARABONBA_PTR_FROM_JSON(DataphinAttributeType, dataphinAttributeType_);
                DARABONBA_PTR_FROM_JSON(LookupTableReference, lookupTableReference_);
                DARABONBA_PTR_FROM_JSON(MinMaxValueConfig, minMaxValueConfig_);
                DARABONBA_PTR_FROM_JSON(ValueConstraint, valueConstraint_);
                DARABONBA_PTR_FROM_JSON(ValueList, valueList_);
              };
              ValueRange() = default ;
              ValueRange(const ValueRange &) = default ;
              ValueRange(ValueRange &&) = default ;
              ValueRange(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ValueRange() = default ;
              ValueRange& operator=(const ValueRange &) = default ;
              ValueRange& operator=(ValueRange &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class MinMaxValueConfig : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const MinMaxValueConfig& obj) { 
                  DARABONBA_PTR_TO_JSON(IncludeMaxValue, includeMaxValue_);
                  DARABONBA_PTR_TO_JSON(IncludeMinValue, includeMinValue_);
                  DARABONBA_PTR_TO_JSON(MaxValue, maxValue_);
                  DARABONBA_PTR_TO_JSON(MinValue, minValue_);
                };
                friend void from_json(const Darabonba::Json& j, MinMaxValueConfig& obj) { 
                  DARABONBA_PTR_FROM_JSON(IncludeMaxValue, includeMaxValue_);
                  DARABONBA_PTR_FROM_JSON(IncludeMinValue, includeMinValue_);
                  DARABONBA_PTR_FROM_JSON(MaxValue, maxValue_);
                  DARABONBA_PTR_FROM_JSON(MinValue, minValue_);
                };
                MinMaxValueConfig() = default ;
                MinMaxValueConfig(const MinMaxValueConfig &) = default ;
                MinMaxValueConfig(MinMaxValueConfig &&) = default ;
                MinMaxValueConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~MinMaxValueConfig() = default ;
                MinMaxValueConfig& operator=(const MinMaxValueConfig &) = default ;
                MinMaxValueConfig& operator=(MinMaxValueConfig &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->includeMaxValue_ == nullptr
        && this->includeMinValue_ == nullptr && this->maxValue_ == nullptr && this->minValue_ == nullptr; };
                // includeMaxValue Field Functions 
                bool hasIncludeMaxValue() const { return this->includeMaxValue_ != nullptr;};
                void deleteIncludeMaxValue() { this->includeMaxValue_ = nullptr;};
                inline bool getIncludeMaxValue() const { DARABONBA_PTR_GET_DEFAULT(includeMaxValue_, false) };
                inline MinMaxValueConfig& setIncludeMaxValue(bool includeMaxValue) { DARABONBA_PTR_SET_VALUE(includeMaxValue_, includeMaxValue) };


                // includeMinValue Field Functions 
                bool hasIncludeMinValue() const { return this->includeMinValue_ != nullptr;};
                void deleteIncludeMinValue() { this->includeMinValue_ = nullptr;};
                inline bool getIncludeMinValue() const { DARABONBA_PTR_GET_DEFAULT(includeMinValue_, false) };
                inline MinMaxValueConfig& setIncludeMinValue(bool includeMinValue) { DARABONBA_PTR_SET_VALUE(includeMinValue_, includeMinValue) };


                // maxValue Field Functions 
                bool hasMaxValue() const { return this->maxValue_ != nullptr;};
                void deleteMaxValue() { this->maxValue_ = nullptr;};
                inline string getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, "") };
                inline MinMaxValueConfig& setMaxValue(string maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


                // minValue Field Functions 
                bool hasMinValue() const { return this->minValue_ != nullptr;};
                void deleteMinValue() { this->minValue_ = nullptr;};
                inline string getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, "") };
                inline MinMaxValueConfig& setMinValue(string minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


              protected:
                // This parameter is required.
                shared_ptr<bool> includeMaxValue_ {};
                // This parameter is required.
                shared_ptr<bool> includeMinValue_ {};
                // This parameter is required.
                shared_ptr<string> maxValue_ {};
                // This parameter is required.
                shared_ptr<string> minValue_ {};
              };

              class LookupTableReference : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const LookupTableReference& obj) { 
                  DARABONBA_PTR_TO_JSON(Column, column_);
                  DARABONBA_PTR_TO_JSON(LookupTableId, lookupTableId_);
                };
                friend void from_json(const Darabonba::Json& j, LookupTableReference& obj) { 
                  DARABONBA_PTR_FROM_JSON(Column, column_);
                  DARABONBA_PTR_FROM_JSON(LookupTableId, lookupTableId_);
                };
                LookupTableReference() = default ;
                LookupTableReference(const LookupTableReference &) = default ;
                LookupTableReference(LookupTableReference &&) = default ;
                LookupTableReference(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~LookupTableReference() = default ;
                LookupTableReference& operator=(const LookupTableReference &) = default ;
                LookupTableReference& operator=(LookupTableReference &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->column_ == nullptr
        && this->lookupTableId_ == nullptr; };
                // column Field Functions 
                bool hasColumn() const { return this->column_ != nullptr;};
                void deleteColumn() { this->column_ = nullptr;};
                inline string getColumn() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
                inline LookupTableReference& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


                // lookupTableId Field Functions 
                bool hasLookupTableId() const { return this->lookupTableId_ != nullptr;};
                void deleteLookupTableId() { this->lookupTableId_ = nullptr;};
                inline int64_t getLookupTableId() const { DARABONBA_PTR_GET_DEFAULT(lookupTableId_, 0L) };
                inline LookupTableReference& setLookupTableId(int64_t lookupTableId) { DARABONBA_PTR_SET_VALUE(lookupTableId_, lookupTableId) };


              protected:
                shared_ptr<string> column_ {};
                // This parameter is required.
                shared_ptr<int64_t> lookupTableId_ {};
              };

              virtual bool empty() const override { return this->dataphinAttributeType_ == nullptr
        && this->lookupTableReference_ == nullptr && this->minMaxValueConfig_ == nullptr && this->valueConstraint_ == nullptr && this->valueList_ == nullptr; };
              // dataphinAttributeType Field Functions 
              bool hasDataphinAttributeType() const { return this->dataphinAttributeType_ != nullptr;};
              void deleteDataphinAttributeType() { this->dataphinAttributeType_ = nullptr;};
              inline string getDataphinAttributeType() const { DARABONBA_PTR_GET_DEFAULT(dataphinAttributeType_, "") };
              inline ValueRange& setDataphinAttributeType(string dataphinAttributeType) { DARABONBA_PTR_SET_VALUE(dataphinAttributeType_, dataphinAttributeType) };


              // lookupTableReference Field Functions 
              bool hasLookupTableReference() const { return this->lookupTableReference_ != nullptr;};
              void deleteLookupTableReference() { this->lookupTableReference_ = nullptr;};
              inline const ValueRange::LookupTableReference & getLookupTableReference() const { DARABONBA_PTR_GET_CONST(lookupTableReference_, ValueRange::LookupTableReference) };
              inline ValueRange::LookupTableReference getLookupTableReference() { DARABONBA_PTR_GET(lookupTableReference_, ValueRange::LookupTableReference) };
              inline ValueRange& setLookupTableReference(const ValueRange::LookupTableReference & lookupTableReference) { DARABONBA_PTR_SET_VALUE(lookupTableReference_, lookupTableReference) };
              inline ValueRange& setLookupTableReference(ValueRange::LookupTableReference && lookupTableReference) { DARABONBA_PTR_SET_RVALUE(lookupTableReference_, lookupTableReference) };


              // minMaxValueConfig Field Functions 
              bool hasMinMaxValueConfig() const { return this->minMaxValueConfig_ != nullptr;};
              void deleteMinMaxValueConfig() { this->minMaxValueConfig_ = nullptr;};
              inline const ValueRange::MinMaxValueConfig & getMinMaxValueConfig() const { DARABONBA_PTR_GET_CONST(minMaxValueConfig_, ValueRange::MinMaxValueConfig) };
              inline ValueRange::MinMaxValueConfig getMinMaxValueConfig() { DARABONBA_PTR_GET(minMaxValueConfig_, ValueRange::MinMaxValueConfig) };
              inline ValueRange& setMinMaxValueConfig(const ValueRange::MinMaxValueConfig & minMaxValueConfig) { DARABONBA_PTR_SET_VALUE(minMaxValueConfig_, minMaxValueConfig) };
              inline ValueRange& setMinMaxValueConfig(ValueRange::MinMaxValueConfig && minMaxValueConfig) { DARABONBA_PTR_SET_RVALUE(minMaxValueConfig_, minMaxValueConfig) };


              // valueConstraint Field Functions 
              bool hasValueConstraint() const { return this->valueConstraint_ != nullptr;};
              void deleteValueConstraint() { this->valueConstraint_ = nullptr;};
              inline string getValueConstraint() const { DARABONBA_PTR_GET_DEFAULT(valueConstraint_, "") };
              inline ValueRange& setValueConstraint(string valueConstraint) { DARABONBA_PTR_SET_VALUE(valueConstraint_, valueConstraint) };


              // valueList Field Functions 
              bool hasValueList() const { return this->valueList_ != nullptr;};
              void deleteValueList() { this->valueList_ = nullptr;};
              inline const vector<string> & getValueList() const { DARABONBA_PTR_GET_CONST(valueList_, vector<string>) };
              inline vector<string> getValueList() { DARABONBA_PTR_GET(valueList_, vector<string>) };
              inline ValueRange& setValueList(const vector<string> & valueList) { DARABONBA_PTR_SET_VALUE(valueList_, valueList) };
              inline ValueRange& setValueList(vector<string> && valueList) { DARABONBA_PTR_SET_RVALUE(valueList_, valueList) };


            protected:
              shared_ptr<string> dataphinAttributeType_ {};
              shared_ptr<ValueRange::LookupTableReference> lookupTableReference_ {};
              shared_ptr<ValueRange::MinMaxValueConfig> minMaxValueConfig_ {};
              // This parameter is required.
              shared_ptr<string> valueConstraint_ {};
              shared_ptr<vector<string>> valueList_ {};
            };

            virtual bool empty() const override { return this->dataType_ == nullptr
        && this->defaultValue_ == nullptr && this->length_ == nullptr && this->type_ == nullptr && this->valueRange_ == nullptr; };
            // dataType Field Functions 
            bool hasDataType() const { return this->dataType_ != nullptr;};
            void deleteDataType() { this->dataType_ = nullptr;};
            inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
            inline ValueConfig& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


            // defaultValue Field Functions 
            bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
            void deleteDefaultValue() { this->defaultValue_ = nullptr;};
            inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
            inline ValueConfig& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


            // length Field Functions 
            bool hasLength() const { return this->length_ != nullptr;};
            void deleteLength() { this->length_ = nullptr;};
            inline int32_t getLength() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
            inline ValueConfig& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline ValueConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            // valueRange Field Functions 
            bool hasValueRange() const { return this->valueRange_ != nullptr;};
            void deleteValueRange() { this->valueRange_ = nullptr;};
            inline const ValueConfig::ValueRange & getValueRange() const { DARABONBA_PTR_GET_CONST(valueRange_, ValueConfig::ValueRange) };
            inline ValueConfig::ValueRange getValueRange() { DARABONBA_PTR_GET(valueRange_, ValueConfig::ValueRange) };
            inline ValueConfig& setValueRange(const ValueConfig::ValueRange & valueRange) { DARABONBA_PTR_SET_VALUE(valueRange_, valueRange) };
            inline ValueConfig& setValueRange(ValueConfig::ValueRange && valueRange) { DARABONBA_PTR_SET_RVALUE(valueRange_, valueRange) };


          protected:
            // This parameter is required.
            shared_ptr<string> dataType_ {};
            shared_ptr<string> defaultValue_ {};
            shared_ptr<int32_t> length_ {};
            // This parameter is required.
            shared_ptr<string> type_ {};
            // This parameter is required.
            shared_ptr<ValueConfig::ValueRange> valueRange_ {};
          };

          class RefAttribute : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RefAttribute& obj) { 
              DARABONBA_PTR_TO_JSON(AttributeFromInfo, attributeFromInfo_);
              DARABONBA_PTR_TO_JSON(AttributeId, attributeId_);
            };
            friend void from_json(const Darabonba::Json& j, RefAttribute& obj) { 
              DARABONBA_PTR_FROM_JSON(AttributeFromInfo, attributeFromInfo_);
              DARABONBA_PTR_FROM_JSON(AttributeId, attributeId_);
            };
            RefAttribute() = default ;
            RefAttribute(const RefAttribute &) = default ;
            RefAttribute(RefAttribute &&) = default ;
            RefAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RefAttribute() = default ;
            RefAttribute& operator=(const RefAttribute &) = default ;
            RefAttribute& operator=(RefAttribute &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class AttributeFromInfo : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const AttributeFromInfo& obj) { 
                DARABONBA_PTR_TO_JSON(AttributeFrom, attributeFrom_);
                DARABONBA_PTR_TO_JSON(StandardReference, standardReference_);
              };
              friend void from_json(const Darabonba::Json& j, AttributeFromInfo& obj) { 
                DARABONBA_PTR_FROM_JSON(AttributeFrom, attributeFrom_);
                DARABONBA_PTR_FROM_JSON(StandardReference, standardReference_);
              };
              AttributeFromInfo() = default ;
              AttributeFromInfo(const AttributeFromInfo &) = default ;
              AttributeFromInfo(AttributeFromInfo &&) = default ;
              AttributeFromInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~AttributeFromInfo() = default ;
              AttributeFromInfo& operator=(const AttributeFromInfo &) = default ;
              AttributeFromInfo& operator=(AttributeFromInfo &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class StandardReference : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const StandardReference& obj) { 
                  DARABONBA_PTR_TO_JSON(StandardId, standardId_);
                  DARABONBA_PTR_TO_JSON(Version, version_);
                };
                friend void from_json(const Darabonba::Json& j, StandardReference& obj) { 
                  DARABONBA_PTR_FROM_JSON(StandardId, standardId_);
                  DARABONBA_PTR_FROM_JSON(Version, version_);
                };
                StandardReference() = default ;
                StandardReference(const StandardReference &) = default ;
                StandardReference(StandardReference &&) = default ;
                StandardReference(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~StandardReference() = default ;
                StandardReference& operator=(const StandardReference &) = default ;
                StandardReference& operator=(StandardReference &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->standardId_ == nullptr
        && this->version_ == nullptr; };
                // standardId Field Functions 
                bool hasStandardId() const { return this->standardId_ != nullptr;};
                void deleteStandardId() { this->standardId_ = nullptr;};
                inline int64_t getStandardId() const { DARABONBA_PTR_GET_DEFAULT(standardId_, 0L) };
                inline StandardReference& setStandardId(int64_t standardId) { DARABONBA_PTR_SET_VALUE(standardId_, standardId) };


                // version Field Functions 
                bool hasVersion() const { return this->version_ != nullptr;};
                void deleteVersion() { this->version_ = nullptr;};
                inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
                inline StandardReference& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


              protected:
                // This parameter is required.
                shared_ptr<int64_t> standardId_ {};
                // This parameter is required.
                shared_ptr<int32_t> version_ {};
              };

              virtual bool empty() const override { return this->attributeFrom_ == nullptr
        && this->standardReference_ == nullptr; };
              // attributeFrom Field Functions 
              bool hasAttributeFrom() const { return this->attributeFrom_ != nullptr;};
              void deleteAttributeFrom() { this->attributeFrom_ = nullptr;};
              inline string getAttributeFrom() const { DARABONBA_PTR_GET_DEFAULT(attributeFrom_, "") };
              inline AttributeFromInfo& setAttributeFrom(string attributeFrom) { DARABONBA_PTR_SET_VALUE(attributeFrom_, attributeFrom) };


              // standardReference Field Functions 
              bool hasStandardReference() const { return this->standardReference_ != nullptr;};
              void deleteStandardReference() { this->standardReference_ = nullptr;};
              inline const AttributeFromInfo::StandardReference & getStandardReference() const { DARABONBA_PTR_GET_CONST(standardReference_, AttributeFromInfo::StandardReference) };
              inline AttributeFromInfo::StandardReference getStandardReference() { DARABONBA_PTR_GET(standardReference_, AttributeFromInfo::StandardReference) };
              inline AttributeFromInfo& setStandardReference(const AttributeFromInfo::StandardReference & standardReference) { DARABONBA_PTR_SET_VALUE(standardReference_, standardReference) };
              inline AttributeFromInfo& setStandardReference(AttributeFromInfo::StandardReference && standardReference) { DARABONBA_PTR_SET_RVALUE(standardReference_, standardReference) };


            protected:
              // This parameter is required.
              shared_ptr<string> attributeFrom_ {};
              shared_ptr<AttributeFromInfo::StandardReference> standardReference_ {};
            };

            virtual bool empty() const override { return this->attributeFromInfo_ == nullptr
        && this->attributeId_ == nullptr; };
            // attributeFromInfo Field Functions 
            bool hasAttributeFromInfo() const { return this->attributeFromInfo_ != nullptr;};
            void deleteAttributeFromInfo() { this->attributeFromInfo_ = nullptr;};
            inline const RefAttribute::AttributeFromInfo & getAttributeFromInfo() const { DARABONBA_PTR_GET_CONST(attributeFromInfo_, RefAttribute::AttributeFromInfo) };
            inline RefAttribute::AttributeFromInfo getAttributeFromInfo() { DARABONBA_PTR_GET(attributeFromInfo_, RefAttribute::AttributeFromInfo) };
            inline RefAttribute& setAttributeFromInfo(const RefAttribute::AttributeFromInfo & attributeFromInfo) { DARABONBA_PTR_SET_VALUE(attributeFromInfo_, attributeFromInfo) };
            inline RefAttribute& setAttributeFromInfo(RefAttribute::AttributeFromInfo && attributeFromInfo) { DARABONBA_PTR_SET_RVALUE(attributeFromInfo_, attributeFromInfo) };


            // attributeId Field Functions 
            bool hasAttributeId() const { return this->attributeId_ != nullptr;};
            void deleteAttributeId() { this->attributeId_ = nullptr;};
            inline int64_t getAttributeId() const { DARABONBA_PTR_GET_DEFAULT(attributeId_, 0L) };
            inline RefAttribute& setAttributeId(int64_t attributeId) { DARABONBA_PTR_SET_VALUE(attributeId_, attributeId) };


          protected:
            // This parameter is required.
            shared_ptr<RefAttribute::AttributeFromInfo> attributeFromInfo_ {};
            // This parameter is required.
            shared_ptr<int64_t> attributeId_ {};
          };

          virtual bool empty() const override { return this->code_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->refAttribute_ == nullptr && this->required_ == nullptr && this->type_ == nullptr
        && this->valueConfig_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline AttributeList& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline AttributeList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline AttributeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // refAttribute Field Functions 
          bool hasRefAttribute() const { return this->refAttribute_ != nullptr;};
          void deleteRefAttribute() { this->refAttribute_ = nullptr;};
          inline const AttributeList::RefAttribute & getRefAttribute() const { DARABONBA_PTR_GET_CONST(refAttribute_, AttributeList::RefAttribute) };
          inline AttributeList::RefAttribute getRefAttribute() { DARABONBA_PTR_GET(refAttribute_, AttributeList::RefAttribute) };
          inline AttributeList& setRefAttribute(const AttributeList::RefAttribute & refAttribute) { DARABONBA_PTR_SET_VALUE(refAttribute_, refAttribute) };
          inline AttributeList& setRefAttribute(AttributeList::RefAttribute && refAttribute) { DARABONBA_PTR_SET_RVALUE(refAttribute_, refAttribute) };


          // required Field Functions 
          bool hasRequired() const { return this->required_ != nullptr;};
          void deleteRequired() { this->required_ = nullptr;};
          inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
          inline AttributeList& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline AttributeList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // valueConfig Field Functions 
          bool hasValueConfig() const { return this->valueConfig_ != nullptr;};
          void deleteValueConfig() { this->valueConfig_ = nullptr;};
          inline const AttributeList::ValueConfig & getValueConfig() const { DARABONBA_PTR_GET_CONST(valueConfig_, AttributeList::ValueConfig) };
          inline AttributeList::ValueConfig getValueConfig() { DARABONBA_PTR_GET(valueConfig_, AttributeList::ValueConfig) };
          inline AttributeList& setValueConfig(const AttributeList::ValueConfig & valueConfig) { DARABONBA_PTR_SET_VALUE(valueConfig_, valueConfig) };
          inline AttributeList& setValueConfig(AttributeList::ValueConfig && valueConfig) { DARABONBA_PTR_SET_RVALUE(valueConfig_, valueConfig) };


        protected:
          shared_ptr<string> code_ {};
          shared_ptr<string> description_ {};
          shared_ptr<string> name_ {};
          shared_ptr<AttributeList::RefAttribute> refAttribute_ {};
          shared_ptr<bool> required_ {};
          shared_ptr<string> type_ {};
          shared_ptr<AttributeList::ValueConfig> valueConfig_ {};
        };

        virtual bool empty() const override { return this->attributeList_ == nullptr; };
        // attributeList Field Functions 
        bool hasAttributeList() const { return this->attributeList_ != nullptr;};
        void deleteAttributeList() { this->attributeList_ = nullptr;};
        inline const vector<AttributesConfig::AttributeList> & getAttributeList() const { DARABONBA_PTR_GET_CONST(attributeList_, vector<AttributesConfig::AttributeList>) };
        inline vector<AttributesConfig::AttributeList> getAttributeList() { DARABONBA_PTR_GET(attributeList_, vector<AttributesConfig::AttributeList>) };
        inline AttributesConfig& setAttributeList(const vector<AttributesConfig::AttributeList> & attributeList) { DARABONBA_PTR_SET_VALUE(attributeList_, attributeList) };
        inline AttributesConfig& setAttributeList(vector<AttributesConfig::AttributeList> && attributeList) { DARABONBA_PTR_SET_RVALUE(attributeList_, attributeList) };


      protected:
        // This parameter is required.
        shared_ptr<vector<AttributesConfig::AttributeList>> attributeList_ {};
      };

      virtual bool empty() const override { return this->attributesConfig_ == nullptr
        && this->code_ == nullptr && this->codeRuleConfig_ == nullptr && this->description_ == nullptr && this->maintainerList_ == nullptr && this->name_ == nullptr
        && this->publishInfo_ == nullptr; };
      // attributesConfig Field Functions 
      bool hasAttributesConfig() const { return this->attributesConfig_ != nullptr;};
      void deleteAttributesConfig() { this->attributesConfig_ = nullptr;};
      inline const CreateCommand::AttributesConfig & getAttributesConfig() const { DARABONBA_PTR_GET_CONST(attributesConfig_, CreateCommand::AttributesConfig) };
      inline CreateCommand::AttributesConfig getAttributesConfig() { DARABONBA_PTR_GET(attributesConfig_, CreateCommand::AttributesConfig) };
      inline CreateCommand& setAttributesConfig(const CreateCommand::AttributesConfig & attributesConfig) { DARABONBA_PTR_SET_VALUE(attributesConfig_, attributesConfig) };
      inline CreateCommand& setAttributesConfig(CreateCommand::AttributesConfig && attributesConfig) { DARABONBA_PTR_SET_RVALUE(attributesConfig_, attributesConfig) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline CreateCommand& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // codeRuleConfig Field Functions 
      bool hasCodeRuleConfig() const { return this->codeRuleConfig_ != nullptr;};
      void deleteCodeRuleConfig() { this->codeRuleConfig_ = nullptr;};
      inline const CreateCommand::CodeRuleConfig & getCodeRuleConfig() const { DARABONBA_PTR_GET_CONST(codeRuleConfig_, CreateCommand::CodeRuleConfig) };
      inline CreateCommand::CodeRuleConfig getCodeRuleConfig() { DARABONBA_PTR_GET(codeRuleConfig_, CreateCommand::CodeRuleConfig) };
      inline CreateCommand& setCodeRuleConfig(const CreateCommand::CodeRuleConfig & codeRuleConfig) { DARABONBA_PTR_SET_VALUE(codeRuleConfig_, codeRuleConfig) };
      inline CreateCommand& setCodeRuleConfig(CreateCommand::CodeRuleConfig && codeRuleConfig) { DARABONBA_PTR_SET_RVALUE(codeRuleConfig_, codeRuleConfig) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CreateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // maintainerList Field Functions 
      bool hasMaintainerList() const { return this->maintainerList_ != nullptr;};
      void deleteMaintainerList() { this->maintainerList_ = nullptr;};
      inline const vector<string> & getMaintainerList() const { DARABONBA_PTR_GET_CONST(maintainerList_, vector<string>) };
      inline vector<string> getMaintainerList() { DARABONBA_PTR_GET(maintainerList_, vector<string>) };
      inline CreateCommand& setMaintainerList(const vector<string> & maintainerList) { DARABONBA_PTR_SET_VALUE(maintainerList_, maintainerList) };
      inline CreateCommand& setMaintainerList(vector<string> && maintainerList) { DARABONBA_PTR_SET_RVALUE(maintainerList_, maintainerList) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CreateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // publishInfo Field Functions 
      bool hasPublishInfo() const { return this->publishInfo_ != nullptr;};
      void deletePublishInfo() { this->publishInfo_ = nullptr;};
      inline const CreateCommand::PublishInfo & getPublishInfo() const { DARABONBA_PTR_GET_CONST(publishInfo_, CreateCommand::PublishInfo) };
      inline CreateCommand::PublishInfo getPublishInfo() { DARABONBA_PTR_GET(publishInfo_, CreateCommand::PublishInfo) };
      inline CreateCommand& setPublishInfo(const CreateCommand::PublishInfo & publishInfo) { DARABONBA_PTR_SET_VALUE(publishInfo_, publishInfo) };
      inline CreateCommand& setPublishInfo(CreateCommand::PublishInfo && publishInfo) { DARABONBA_PTR_SET_RVALUE(publishInfo_, publishInfo) };


    protected:
      // This parameter is required.
      shared_ptr<CreateCommand::AttributesConfig> attributesConfig_ {};
      // This parameter is required.
      shared_ptr<string> code_ {};
      shared_ptr<CreateCommand::CodeRuleConfig> codeRuleConfig_ {};
      shared_ptr<string> description_ {};
      shared_ptr<vector<string>> maintainerList_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
      shared_ptr<CreateCommand::PublishInfo> publishInfo_ {};
    };

    virtual bool empty() const override { return this->createCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreateStandardTemplateRequest::CreateCommand & getCreateCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreateStandardTemplateRequest::CreateCommand) };
    inline CreateStandardTemplateRequest::CreateCommand getCreateCommand() { DARABONBA_PTR_GET(createCommand_, CreateStandardTemplateRequest::CreateCommand) };
    inline CreateStandardTemplateRequest& setCreateCommand(const CreateStandardTemplateRequest::CreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreateStandardTemplateRequest& setCreateCommand(CreateStandardTemplateRequest::CreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateStandardTemplateRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<CreateStandardTemplateRequest::CreateCommand> createCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
