// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTMODERATIONPLUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TEXTMODERATIONPLUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class TextModerationPlusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextModerationPlusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, TextModerationPlusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    TextModerationPlusResponseBody() = default ;
    TextModerationPlusResponseBody(const TextModerationPlusResponseBody &) = default ;
    TextModerationPlusResponseBody(TextModerationPlusResponseBody &&) = default ;
    TextModerationPlusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextModerationPlusResponseBody() = default ;
    TextModerationPlusResponseBody& operator=(const TextModerationPlusResponseBody &) = default ;
    TextModerationPlusResponseBody& operator=(TextModerationPlusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(Advice, advice_);
        DARABONBA_PTR_TO_JSON(AttackLevel, attackLevel_);
        DARABONBA_PTR_TO_JSON(AttackResult, attackResult_);
        DARABONBA_PTR_TO_JSON(DataId, dataId_);
        DARABONBA_PTR_TO_JSON(DetectedLanguage, detectedLanguage_);
        DARABONBA_PTR_TO_JSON(Ext, ext_);
        DARABONBA_PTR_TO_JSON(ManualTaskId, manualTaskId_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(Score, score_);
        DARABONBA_PTR_TO_JSON(SensitiveLevel, sensitiveLevel_);
        DARABONBA_PTR_TO_JSON(SensitiveResult, sensitiveResult_);
        DARABONBA_PTR_TO_JSON(TranslatedContent, translatedContent_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(Advice, advice_);
        DARABONBA_PTR_FROM_JSON(AttackLevel, attackLevel_);
        DARABONBA_PTR_FROM_JSON(AttackResult, attackResult_);
        DARABONBA_PTR_FROM_JSON(DataId, dataId_);
        DARABONBA_PTR_FROM_JSON(DetectedLanguage, detectedLanguage_);
        DARABONBA_PTR_FROM_JSON(Ext, ext_);
        DARABONBA_PTR_FROM_JSON(ManualTaskId, manualTaskId_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(Score, score_);
        DARABONBA_PTR_FROM_JSON(SensitiveLevel, sensitiveLevel_);
        DARABONBA_PTR_FROM_JSON(SensitiveResult, sensitiveResult_);
        DARABONBA_PTR_FROM_JSON(TranslatedContent, translatedContent_);
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
      class SensitiveResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SensitiveResult& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(SensitiveData, sensitiveData_);
          DARABONBA_PTR_TO_JSON(SensitiveLevel, sensitiveLevel_);
        };
        friend void from_json(const Darabonba::Json& j, SensitiveResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(SensitiveData, sensitiveData_);
          DARABONBA_PTR_FROM_JSON(SensitiveLevel, sensitiveLevel_);
        };
        SensitiveResult() = default ;
        SensitiveResult(const SensitiveResult &) = default ;
        SensitiveResult(SensitiveResult &&) = default ;
        SensitiveResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SensitiveResult() = default ;
        SensitiveResult& operator=(const SensitiveResult &) = default ;
        SensitiveResult& operator=(SensitiveResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->label_ == nullptr && this->sensitiveData_ == nullptr && this->sensitiveLevel_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline SensitiveResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline SensitiveResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // sensitiveData Field Functions 
        bool hasSensitiveData() const { return this->sensitiveData_ != nullptr;};
        void deleteSensitiveData() { this->sensitiveData_ = nullptr;};
        inline const vector<string> & getSensitiveData() const { DARABONBA_PTR_GET_CONST(sensitiveData_, vector<string>) };
        inline vector<string> getSensitiveData() { DARABONBA_PTR_GET(sensitiveData_, vector<string>) };
        inline SensitiveResult& setSensitiveData(const vector<string> & sensitiveData) { DARABONBA_PTR_SET_VALUE(sensitiveData_, sensitiveData) };
        inline SensitiveResult& setSensitiveData(vector<string> && sensitiveData) { DARABONBA_PTR_SET_RVALUE(sensitiveData_, sensitiveData) };


        // sensitiveLevel Field Functions 
        bool hasSensitiveLevel() const { return this->sensitiveLevel_ != nullptr;};
        void deleteSensitiveLevel() { this->sensitiveLevel_ = nullptr;};
        inline string getSensitiveLevel() const { DARABONBA_PTR_GET_DEFAULT(sensitiveLevel_, "") };
        inline SensitiveResult& setSensitiveLevel(string sensitiveLevel) { DARABONBA_PTR_SET_VALUE(sensitiveLevel_, sensitiveLevel) };


      protected:
        // Description
        shared_ptr<string> description_ {};
        // The label
        shared_ptr<string> label_ {};
        // The sensitive data.
        shared_ptr<vector<string>> sensitiveData_ {};
        // The level of sensitivity data
        shared_ptr<string> sensitiveLevel_ {};
      };

      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(Confidence, confidence_);
          DARABONBA_PTR_TO_JSON(CustomizedHit, customizedHit_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(RiskWords, riskWords_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
          DARABONBA_PTR_FROM_JSON(CustomizedHit, customizedHit_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(RiskWords, riskWords_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CustomizedHit : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CustomizedHit& obj) { 
            DARABONBA_PTR_TO_JSON(KeyWords, keyWords_);
            DARABONBA_PTR_TO_JSON(LibName, libName_);
          };
          friend void from_json(const Darabonba::Json& j, CustomizedHit& obj) { 
            DARABONBA_PTR_FROM_JSON(KeyWords, keyWords_);
            DARABONBA_PTR_FROM_JSON(LibName, libName_);
          };
          CustomizedHit() = default ;
          CustomizedHit(const CustomizedHit &) = default ;
          CustomizedHit(CustomizedHit &&) = default ;
          CustomizedHit(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CustomizedHit() = default ;
          CustomizedHit& operator=(const CustomizedHit &) = default ;
          CustomizedHit& operator=(CustomizedHit &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->keyWords_ == nullptr
        && this->libName_ == nullptr; };
          // keyWords Field Functions 
          bool hasKeyWords() const { return this->keyWords_ != nullptr;};
          void deleteKeyWords() { this->keyWords_ = nullptr;};
          inline string getKeyWords() const { DARABONBA_PTR_GET_DEFAULT(keyWords_, "") };
          inline CustomizedHit& setKeyWords(string keyWords) { DARABONBA_PTR_SET_VALUE(keyWords_, keyWords) };


          // libName Field Functions 
          bool hasLibName() const { return this->libName_ != nullptr;};
          void deleteLibName() { this->libName_ = nullptr;};
          inline string getLibName() const { DARABONBA_PTR_GET_DEFAULT(libName_, "") };
          inline CustomizedHit& setLibName(string libName) { DARABONBA_PTR_SET_VALUE(libName_, libName) };


        protected:
          // The terms that are hit. Multiple terms are separated by commas (,).
          shared_ptr<string> keyWords_ {};
          // The library name.
          shared_ptr<string> libName_ {};
        };

        virtual bool empty() const override { return this->confidence_ == nullptr
        && this->customizedHit_ == nullptr && this->description_ == nullptr && this->label_ == nullptr && this->riskWords_ == nullptr; };
        // confidence Field Functions 
        bool hasConfidence() const { return this->confidence_ != nullptr;};
        void deleteConfidence() { this->confidence_ = nullptr;};
        inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
        inline Result& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


        // customizedHit Field Functions 
        bool hasCustomizedHit() const { return this->customizedHit_ != nullptr;};
        void deleteCustomizedHit() { this->customizedHit_ = nullptr;};
        inline const vector<Result::CustomizedHit> & getCustomizedHit() const { DARABONBA_PTR_GET_CONST(customizedHit_, vector<Result::CustomizedHit>) };
        inline vector<Result::CustomizedHit> getCustomizedHit() { DARABONBA_PTR_GET(customizedHit_, vector<Result::CustomizedHit>) };
        inline Result& setCustomizedHit(const vector<Result::CustomizedHit> & customizedHit) { DARABONBA_PTR_SET_VALUE(customizedHit_, customizedHit) };
        inline Result& setCustomizedHit(vector<Result::CustomizedHit> && customizedHit) { DARABONBA_PTR_SET_RVALUE(customizedHit_, customizedHit) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Result& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // riskWords Field Functions 
        bool hasRiskWords() const { return this->riskWords_ != nullptr;};
        void deleteRiskWords() { this->riskWords_ = nullptr;};
        inline string getRiskWords() const { DARABONBA_PTR_GET_DEFAULT(riskWords_, "") };
        inline Result& setRiskWords(string riskWords) { DARABONBA_PTR_SET_VALUE(riskWords_, riskWords) };


      protected:
        // The score of the confidence level. Valid values: 0 to 100. The value is accurate to two decimal places.
        shared_ptr<float> confidence_ {};
        // The custom term hit by the moderated content.
        shared_ptr<vector<Result::CustomizedHit>> customizedHit_ {};
        // The description of the label.
        shared_ptr<string> description_ {};
        // The label.
        shared_ptr<string> label_ {};
        // The term hit by the moderated content.
        shared_ptr<string> riskWords_ {};
      };

      class Ext : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ext& obj) { 
          DARABONBA_PTR_TO_JSON(LlmContent, llmContent_);
        };
        friend void from_json(const Darabonba::Json& j, Ext& obj) { 
          DARABONBA_PTR_FROM_JSON(LlmContent, llmContent_);
        };
        Ext() = default ;
        Ext(const Ext &) = default ;
        Ext(Ext &&) = default ;
        Ext(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ext() = default ;
        Ext& operator=(const Ext &) = default ;
        Ext& operator=(Ext &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class LlmContent : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LlmContent& obj) { 
            DARABONBA_PTR_TO_JSON(OutputText, outputText_);
          };
          friend void from_json(const Darabonba::Json& j, LlmContent& obj) { 
            DARABONBA_PTR_FROM_JSON(OutputText, outputText_);
          };
          LlmContent() = default ;
          LlmContent(const LlmContent &) = default ;
          LlmContent(LlmContent &&) = default ;
          LlmContent(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LlmContent() = default ;
          LlmContent& operator=(const LlmContent &) = default ;
          LlmContent& operator=(LlmContent &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->outputText_ == nullptr; };
          // outputText Field Functions 
          bool hasOutputText() const { return this->outputText_ != nullptr;};
          void deleteOutputText() { this->outputText_ = nullptr;};
          inline string getOutputText() const { DARABONBA_PTR_GET_DEFAULT(outputText_, "") };
          inline LlmContent& setOutputText(string outputText) { DARABONBA_PTR_SET_VALUE(outputText_, outputText) };


        protected:
          shared_ptr<string> outputText_ {};
        };

        virtual bool empty() const override { return this->llmContent_ == nullptr; };
        // llmContent Field Functions 
        bool hasLlmContent() const { return this->llmContent_ != nullptr;};
        void deleteLlmContent() { this->llmContent_ = nullptr;};
        inline const Ext::LlmContent & getLlmContent() const { DARABONBA_PTR_GET_CONST(llmContent_, Ext::LlmContent) };
        inline Ext::LlmContent getLlmContent() { DARABONBA_PTR_GET(llmContent_, Ext::LlmContent) };
        inline Ext& setLlmContent(const Ext::LlmContent & llmContent) { DARABONBA_PTR_SET_VALUE(llmContent_, llmContent) };
        inline Ext& setLlmContent(Ext::LlmContent && llmContent) { DARABONBA_PTR_SET_RVALUE(llmContent_, llmContent) };


      protected:
        shared_ptr<Ext::LlmContent> llmContent_ {};
      };

      class AttackResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AttackResult& obj) { 
          DARABONBA_PTR_TO_JSON(AttackLevel, attackLevel_);
          DARABONBA_PTR_TO_JSON(Confidence, confidence_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Label, label_);
        };
        friend void from_json(const Darabonba::Json& j, AttackResult& obj) { 
          DARABONBA_PTR_FROM_JSON(AttackLevel, attackLevel_);
          DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
        };
        AttackResult() = default ;
        AttackResult(const AttackResult &) = default ;
        AttackResult(AttackResult &&) = default ;
        AttackResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AttackResult() = default ;
        AttackResult& operator=(const AttackResult &) = default ;
        AttackResult& operator=(AttackResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->attackLevel_ == nullptr
        && this->confidence_ == nullptr && this->description_ == nullptr && this->label_ == nullptr; };
        // attackLevel Field Functions 
        bool hasAttackLevel() const { return this->attackLevel_ != nullptr;};
        void deleteAttackLevel() { this->attackLevel_ = nullptr;};
        inline string getAttackLevel() const { DARABONBA_PTR_GET_DEFAULT(attackLevel_, "") };
        inline AttackResult& setAttackLevel(string attackLevel) { DARABONBA_PTR_SET_VALUE(attackLevel_, attackLevel) };


        // confidence Field Functions 
        bool hasConfidence() const { return this->confidence_ != nullptr;};
        void deleteConfidence() { this->confidence_ = nullptr;};
        inline float getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, 0.0) };
        inline AttackResult& setConfidence(float confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline AttackResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline AttackResult& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      protected:
        // The level of prompt attack
        shared_ptr<string> attackLevel_ {};
        // The confidence
        shared_ptr<float> confidence_ {};
        // Description
        shared_ptr<string> description_ {};
        // The label
        shared_ptr<string> label_ {};
      };

      class Advice : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Advice& obj) { 
          DARABONBA_PTR_TO_JSON(Answer, answer_);
          DARABONBA_PTR_TO_JSON(HitLabel, hitLabel_);
          DARABONBA_PTR_TO_JSON(HitLibName, hitLibName_);
        };
        friend void from_json(const Darabonba::Json& j, Advice& obj) { 
          DARABONBA_PTR_FROM_JSON(Answer, answer_);
          DARABONBA_PTR_FROM_JSON(HitLabel, hitLabel_);
          DARABONBA_PTR_FROM_JSON(HitLibName, hitLibName_);
        };
        Advice() = default ;
        Advice(const Advice &) = default ;
        Advice(Advice &&) = default ;
        Advice(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Advice() = default ;
        Advice& operator=(const Advice &) = default ;
        Advice& operator=(Advice &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->answer_ == nullptr
        && this->hitLabel_ == nullptr && this->hitLibName_ == nullptr; };
        // answer Field Functions 
        bool hasAnswer() const { return this->answer_ != nullptr;};
        void deleteAnswer() { this->answer_ = nullptr;};
        inline string getAnswer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
        inline Advice& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


        // hitLabel Field Functions 
        bool hasHitLabel() const { return this->hitLabel_ != nullptr;};
        void deleteHitLabel() { this->hitLabel_ = nullptr;};
        inline string getHitLabel() const { DARABONBA_PTR_GET_DEFAULT(hitLabel_, "") };
        inline Advice& setHitLabel(string hitLabel) { DARABONBA_PTR_SET_VALUE(hitLabel_, hitLabel) };


        // hitLibName Field Functions 
        bool hasHitLibName() const { return this->hitLibName_ != nullptr;};
        void deleteHitLibName() { this->hitLibName_ = nullptr;};
        inline string getHitLibName() const { DARABONBA_PTR_GET_DEFAULT(hitLibName_, "") };
        inline Advice& setHitLibName(string hitLibName) { DARABONBA_PTR_SET_VALUE(hitLibName_, hitLibName) };


      protected:
        // The answer.
        shared_ptr<string> answer_ {};
        // Hit Label
        shared_ptr<string> hitLabel_ {};
        // Hit Library Name
        shared_ptr<string> hitLibName_ {};
      };

      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->advice_ == nullptr && this->attackLevel_ == nullptr && this->attackResult_ == nullptr && this->dataId_ == nullptr && this->detectedLanguage_ == nullptr
        && this->ext_ == nullptr && this->manualTaskId_ == nullptr && this->result_ == nullptr && this->riskLevel_ == nullptr && this->score_ == nullptr
        && this->sensitiveLevel_ == nullptr && this->sensitiveResult_ == nullptr && this->translatedContent_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Data& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // advice Field Functions 
      bool hasAdvice() const { return this->advice_ != nullptr;};
      void deleteAdvice() { this->advice_ = nullptr;};
      inline const vector<Data::Advice> & getAdvice() const { DARABONBA_PTR_GET_CONST(advice_, vector<Data::Advice>) };
      inline vector<Data::Advice> getAdvice() { DARABONBA_PTR_GET(advice_, vector<Data::Advice>) };
      inline Data& setAdvice(const vector<Data::Advice> & advice) { DARABONBA_PTR_SET_VALUE(advice_, advice) };
      inline Data& setAdvice(vector<Data::Advice> && advice) { DARABONBA_PTR_SET_RVALUE(advice_, advice) };


      // attackLevel Field Functions 
      bool hasAttackLevel() const { return this->attackLevel_ != nullptr;};
      void deleteAttackLevel() { this->attackLevel_ = nullptr;};
      inline string getAttackLevel() const { DARABONBA_PTR_GET_DEFAULT(attackLevel_, "") };
      inline Data& setAttackLevel(string attackLevel) { DARABONBA_PTR_SET_VALUE(attackLevel_, attackLevel) };


      // attackResult Field Functions 
      bool hasAttackResult() const { return this->attackResult_ != nullptr;};
      void deleteAttackResult() { this->attackResult_ = nullptr;};
      inline const vector<Data::AttackResult> & getAttackResult() const { DARABONBA_PTR_GET_CONST(attackResult_, vector<Data::AttackResult>) };
      inline vector<Data::AttackResult> getAttackResult() { DARABONBA_PTR_GET(attackResult_, vector<Data::AttackResult>) };
      inline Data& setAttackResult(const vector<Data::AttackResult> & attackResult) { DARABONBA_PTR_SET_VALUE(attackResult_, attackResult) };
      inline Data& setAttackResult(vector<Data::AttackResult> && attackResult) { DARABONBA_PTR_SET_RVALUE(attackResult_, attackResult) };


      // dataId Field Functions 
      bool hasDataId() const { return this->dataId_ != nullptr;};
      void deleteDataId() { this->dataId_ = nullptr;};
      inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
      inline Data& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


      // detectedLanguage Field Functions 
      bool hasDetectedLanguage() const { return this->detectedLanguage_ != nullptr;};
      void deleteDetectedLanguage() { this->detectedLanguage_ = nullptr;};
      inline string getDetectedLanguage() const { DARABONBA_PTR_GET_DEFAULT(detectedLanguage_, "") };
      inline Data& setDetectedLanguage(string detectedLanguage) { DARABONBA_PTR_SET_VALUE(detectedLanguage_, detectedLanguage) };


      // ext Field Functions 
      bool hasExt() const { return this->ext_ != nullptr;};
      void deleteExt() { this->ext_ = nullptr;};
      inline const Data::Ext & getExt() const { DARABONBA_PTR_GET_CONST(ext_, Data::Ext) };
      inline Data::Ext getExt() { DARABONBA_PTR_GET(ext_, Data::Ext) };
      inline Data& setExt(const Data::Ext & ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };
      inline Data& setExt(Data::Ext && ext) { DARABONBA_PTR_SET_RVALUE(ext_, ext) };


      // manualTaskId Field Functions 
      bool hasManualTaskId() const { return this->manualTaskId_ != nullptr;};
      void deleteManualTaskId() { this->manualTaskId_ = nullptr;};
      inline string getManualTaskId() const { DARABONBA_PTR_GET_DEFAULT(manualTaskId_, "") };
      inline Data& setManualTaskId(string manualTaskId) { DARABONBA_PTR_SET_VALUE(manualTaskId_, manualTaskId) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline Data& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
      inline Data& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      // sensitiveLevel Field Functions 
      bool hasSensitiveLevel() const { return this->sensitiveLevel_ != nullptr;};
      void deleteSensitiveLevel() { this->sensitiveLevel_ = nullptr;};
      inline string getSensitiveLevel() const { DARABONBA_PTR_GET_DEFAULT(sensitiveLevel_, "") };
      inline Data& setSensitiveLevel(string sensitiveLevel) { DARABONBA_PTR_SET_VALUE(sensitiveLevel_, sensitiveLevel) };


      // sensitiveResult Field Functions 
      bool hasSensitiveResult() const { return this->sensitiveResult_ != nullptr;};
      void deleteSensitiveResult() { this->sensitiveResult_ = nullptr;};
      inline const vector<Data::SensitiveResult> & getSensitiveResult() const { DARABONBA_PTR_GET_CONST(sensitiveResult_, vector<Data::SensitiveResult>) };
      inline vector<Data::SensitiveResult> getSensitiveResult() { DARABONBA_PTR_GET(sensitiveResult_, vector<Data::SensitiveResult>) };
      inline Data& setSensitiveResult(const vector<Data::SensitiveResult> & sensitiveResult) { DARABONBA_PTR_SET_VALUE(sensitiveResult_, sensitiveResult) };
      inline Data& setSensitiveResult(vector<Data::SensitiveResult> && sensitiveResult) { DARABONBA_PTR_SET_RVALUE(sensitiveResult_, sensitiveResult) };


      // translatedContent Field Functions 
      bool hasTranslatedContent() const { return this->translatedContent_ != nullptr;};
      void deleteTranslatedContent() { this->translatedContent_ = nullptr;};
      inline string getTranslatedContent() const { DARABONBA_PTR_GET_DEFAULT(translatedContent_, "") };
      inline Data& setTranslatedContent(string translatedContent) { DARABONBA_PTR_SET_VALUE(translatedContent_, translatedContent) };


    protected:
      shared_ptr<string> accountId_ {};
      // The suggestion.
      shared_ptr<vector<Data::Advice>> advice_ {};
      // The level of prompt attack
      shared_ptr<string> attackLevel_ {};
      // The result of prompt attack detect
      shared_ptr<vector<Data::AttackResult>> attackResult_ {};
      // The id of data
      shared_ptr<string> dataId_ {};
      shared_ptr<string> detectedLanguage_ {};
      shared_ptr<Data::Ext> ext_ {};
      shared_ptr<string> manualTaskId_ {};
      // The results.
      shared_ptr<vector<Data::Result>> result_ {};
      // Risk Level
      shared_ptr<string> riskLevel_ {};
      // The score.
      shared_ptr<float> score_ {};
      // The level of sensitivity data
      shared_ptr<string> sensitiveLevel_ {};
      // The result of sensitivity data detect
      shared_ptr<vector<Data::SensitiveResult>> sensitiveResult_ {};
      shared_ptr<string> translatedContent_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline TextModerationPlusResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const TextModerationPlusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, TextModerationPlusResponseBody::Data) };
    inline TextModerationPlusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, TextModerationPlusResponseBody::Data) };
    inline TextModerationPlusResponseBody& setData(const TextModerationPlusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline TextModerationPlusResponseBody& setData(TextModerationPlusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TextModerationPlusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TextModerationPlusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned HTTP status code. The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> code_ {};
    // The moderation results.
    shared_ptr<TextModerationPlusResponseBody::Data> data_ {};
    // The message that is returned in response to the request.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
