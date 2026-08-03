// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAICOACHDEBUGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAICOACHDEBUGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class SubmitAICoachDebugRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAICoachDebugRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dataId, dataId_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(deductionRule, deductionRule_);
      DARABONBA_PTR_TO_JSON(dialogueList, dialogueList_);
      DARABONBA_PTR_TO_JSON(expressiveness, expressiveness_);
      DARABONBA_PTR_TO_JSON(point, point_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAICoachDebugRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dataId, dataId_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(deductionRule, deductionRule_);
      DARABONBA_PTR_FROM_JSON(dialogueList, dialogueList_);
      DARABONBA_PTR_FROM_JSON(expressiveness, expressiveness_);
      DARABONBA_PTR_FROM_JSON(point, point_);
    };
    SubmitAICoachDebugRequest() = default ;
    SubmitAICoachDebugRequest(const SubmitAICoachDebugRequest &) = default ;
    SubmitAICoachDebugRequest(SubmitAICoachDebugRequest &&) = default ;
    SubmitAICoachDebugRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAICoachDebugRequest() = default ;
    SubmitAICoachDebugRequest& operator=(const SubmitAICoachDebugRequest &) = default ;
    SubmitAICoachDebugRequest& operator=(SubmitAICoachDebugRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Point : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Point& obj) { 
        DARABONBA_PTR_TO_JSON(answerList, answerList_);
        DARABONBA_PTR_TO_JSON(knowledgeList, knowledgeList_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(questionSample, questionSample_);
        DARABONBA_PTR_TO_JSON(weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, Point& obj) { 
        DARABONBA_PTR_FROM_JSON(answerList, answerList_);
        DARABONBA_PTR_FROM_JSON(knowledgeList, knowledgeList_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(questionSample, questionSample_);
        DARABONBA_PTR_FROM_JSON(weight, weight_);
      };
      Point() = default ;
      Point(const Point &) = default ;
      Point(Point &&) = default ;
      Point(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Point() = default ;
      Point& operator=(const Point &) = default ;
      Point& operator=(Point &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AnswerList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AnswerList& obj) { 
          DARABONBA_PTR_TO_JSON(answerValues, answerValues_);
          DARABONBA_PTR_TO_JSON(enabledKeyword, enabledKeyword_);
          DARABONBA_PTR_TO_JSON(nameList, nameList_);
          DARABONBA_PTR_TO_JSON(operators, operators_);
          DARABONBA_PTR_TO_JSON(parameters, parameters_);
          DARABONBA_PTR_TO_JSON(score, score_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, AnswerList& obj) { 
          DARABONBA_PTR_FROM_JSON(answerValues, answerValues_);
          DARABONBA_PTR_FROM_JSON(enabledKeyword, enabledKeyword_);
          DARABONBA_PTR_FROM_JSON(nameList, nameList_);
          DARABONBA_PTR_FROM_JSON(operators, operators_);
          DARABONBA_PTR_FROM_JSON(parameters, parameters_);
          DARABONBA_PTR_FROM_JSON(score, score_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(weight, weight_);
        };
        AnswerList() = default ;
        AnswerList(const AnswerList &) = default ;
        AnswerList(AnswerList &&) = default ;
        AnswerList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AnswerList() = default ;
        AnswerList& operator=(const AnswerList &) = default ;
        AnswerList& operator=(AnswerList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Parameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(value, value_);
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
          virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Parameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Parameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> name_ {};
          shared_ptr<string> value_ {};
        };

        class AnswerValues : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AnswerValues& obj) { 
            DARABONBA_PTR_TO_JSON(answerName, answerName_);
            DARABONBA_PTR_TO_JSON(answerWeight, answerWeight_);
            DARABONBA_PTR_TO_JSON(keywordValues, keywordValues_);
            DARABONBA_PTR_TO_JSON(keywordWeight, keywordWeight_);
            DARABONBA_PTR_TO_JSON(scoringRules, scoringRules_);
          };
          friend void from_json(const Darabonba::Json& j, AnswerValues& obj) { 
            DARABONBA_PTR_FROM_JSON(answerName, answerName_);
            DARABONBA_PTR_FROM_JSON(answerWeight, answerWeight_);
            DARABONBA_PTR_FROM_JSON(keywordValues, keywordValues_);
            DARABONBA_PTR_FROM_JSON(keywordWeight, keywordWeight_);
            DARABONBA_PTR_FROM_JSON(scoringRules, scoringRules_);
          };
          AnswerValues() = default ;
          AnswerValues(const AnswerValues &) = default ;
          AnswerValues(AnswerValues &&) = default ;
          AnswerValues(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AnswerValues() = default ;
          AnswerValues& operator=(const AnswerValues &) = default ;
          AnswerValues& operator=(AnswerValues &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ScoringRules : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ScoringRules& obj) { 
              DARABONBA_PTR_TO_JSON(name, name_);
            };
            friend void from_json(const Darabonba::Json& j, ScoringRules& obj) { 
              DARABONBA_PTR_FROM_JSON(name, name_);
            };
            ScoringRules() = default ;
            ScoringRules(const ScoringRules &) = default ;
            ScoringRules(ScoringRules &&) = default ;
            ScoringRules(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ScoringRules() = default ;
            ScoringRules& operator=(const ScoringRules &) = default ;
            ScoringRules& operator=(ScoringRules &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->name_ == nullptr; };
            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline ScoringRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          protected:
            shared_ptr<string> name_ {};
          };

          class KeywordValues : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const KeywordValues& obj) { 
              DARABONBA_PTR_TO_JSON(name, name_);
              DARABONBA_PTR_TO_JSON(weight, weight_);
            };
            friend void from_json(const Darabonba::Json& j, KeywordValues& obj) { 
              DARABONBA_PTR_FROM_JSON(name, name_);
              DARABONBA_PTR_FROM_JSON(weight, weight_);
            };
            KeywordValues() = default ;
            KeywordValues(const KeywordValues &) = default ;
            KeywordValues(KeywordValues &&) = default ;
            KeywordValues(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~KeywordValues() = default ;
            KeywordValues& operator=(const KeywordValues &) = default ;
            KeywordValues& operator=(KeywordValues &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->name_ == nullptr
        && this->weight_ == nullptr; };
            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline KeywordValues& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // weight Field Functions 
            bool hasWeight() const { return this->weight_ != nullptr;};
            void deleteWeight() { this->weight_ = nullptr;};
            inline int64_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0L) };
            inline KeywordValues& setWeight(int64_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


          protected:
            shared_ptr<string> name_ {};
            shared_ptr<int64_t> weight_ {};
          };

          virtual bool empty() const override { return this->answerName_ == nullptr
        && this->answerWeight_ == nullptr && this->keywordValues_ == nullptr && this->keywordWeight_ == nullptr && this->scoringRules_ == nullptr; };
          // answerName Field Functions 
          bool hasAnswerName() const { return this->answerName_ != nullptr;};
          void deleteAnswerName() { this->answerName_ = nullptr;};
          inline string getAnswerName() const { DARABONBA_PTR_GET_DEFAULT(answerName_, "") };
          inline AnswerValues& setAnswerName(string answerName) { DARABONBA_PTR_SET_VALUE(answerName_, answerName) };


          // answerWeight Field Functions 
          bool hasAnswerWeight() const { return this->answerWeight_ != nullptr;};
          void deleteAnswerWeight() { this->answerWeight_ = nullptr;};
          inline int64_t getAnswerWeight() const { DARABONBA_PTR_GET_DEFAULT(answerWeight_, 0L) };
          inline AnswerValues& setAnswerWeight(int64_t answerWeight) { DARABONBA_PTR_SET_VALUE(answerWeight_, answerWeight) };


          // keywordValues Field Functions 
          bool hasKeywordValues() const { return this->keywordValues_ != nullptr;};
          void deleteKeywordValues() { this->keywordValues_ = nullptr;};
          inline const vector<AnswerValues::KeywordValues> & getKeywordValues() const { DARABONBA_PTR_GET_CONST(keywordValues_, vector<AnswerValues::KeywordValues>) };
          inline vector<AnswerValues::KeywordValues> getKeywordValues() { DARABONBA_PTR_GET(keywordValues_, vector<AnswerValues::KeywordValues>) };
          inline AnswerValues& setKeywordValues(const vector<AnswerValues::KeywordValues> & keywordValues) { DARABONBA_PTR_SET_VALUE(keywordValues_, keywordValues) };
          inline AnswerValues& setKeywordValues(vector<AnswerValues::KeywordValues> && keywordValues) { DARABONBA_PTR_SET_RVALUE(keywordValues_, keywordValues) };


          // keywordWeight Field Functions 
          bool hasKeywordWeight() const { return this->keywordWeight_ != nullptr;};
          void deleteKeywordWeight() { this->keywordWeight_ = nullptr;};
          inline int64_t getKeywordWeight() const { DARABONBA_PTR_GET_DEFAULT(keywordWeight_, 0L) };
          inline AnswerValues& setKeywordWeight(int64_t keywordWeight) { DARABONBA_PTR_SET_VALUE(keywordWeight_, keywordWeight) };


          // scoringRules Field Functions 
          bool hasScoringRules() const { return this->scoringRules_ != nullptr;};
          void deleteScoringRules() { this->scoringRules_ = nullptr;};
          inline const vector<AnswerValues::ScoringRules> & getScoringRules() const { DARABONBA_PTR_GET_CONST(scoringRules_, vector<AnswerValues::ScoringRules>) };
          inline vector<AnswerValues::ScoringRules> getScoringRules() { DARABONBA_PTR_GET(scoringRules_, vector<AnswerValues::ScoringRules>) };
          inline AnswerValues& setScoringRules(const vector<AnswerValues::ScoringRules> & scoringRules) { DARABONBA_PTR_SET_VALUE(scoringRules_, scoringRules) };
          inline AnswerValues& setScoringRules(vector<AnswerValues::ScoringRules> && scoringRules) { DARABONBA_PTR_SET_RVALUE(scoringRules_, scoringRules) };


        protected:
          shared_ptr<string> answerName_ {};
          shared_ptr<int64_t> answerWeight_ {};
          shared_ptr<vector<AnswerValues::KeywordValues>> keywordValues_ {};
          shared_ptr<int64_t> keywordWeight_ {};
          shared_ptr<vector<AnswerValues::ScoringRules>> scoringRules_ {};
        };

        virtual bool empty() const override { return this->answerValues_ == nullptr
        && this->enabledKeyword_ == nullptr && this->nameList_ == nullptr && this->operators_ == nullptr && this->parameters_ == nullptr && this->score_ == nullptr
        && this->type_ == nullptr && this->weight_ == nullptr; };
        // answerValues Field Functions 
        bool hasAnswerValues() const { return this->answerValues_ != nullptr;};
        void deleteAnswerValues() { this->answerValues_ = nullptr;};
        inline const vector<AnswerList::AnswerValues> & getAnswerValues() const { DARABONBA_PTR_GET_CONST(answerValues_, vector<AnswerList::AnswerValues>) };
        inline vector<AnswerList::AnswerValues> getAnswerValues() { DARABONBA_PTR_GET(answerValues_, vector<AnswerList::AnswerValues>) };
        inline AnswerList& setAnswerValues(const vector<AnswerList::AnswerValues> & answerValues) { DARABONBA_PTR_SET_VALUE(answerValues_, answerValues) };
        inline AnswerList& setAnswerValues(vector<AnswerList::AnswerValues> && answerValues) { DARABONBA_PTR_SET_RVALUE(answerValues_, answerValues) };


        // enabledKeyword Field Functions 
        bool hasEnabledKeyword() const { return this->enabledKeyword_ != nullptr;};
        void deleteEnabledKeyword() { this->enabledKeyword_ = nullptr;};
        inline bool getEnabledKeyword() const { DARABONBA_PTR_GET_DEFAULT(enabledKeyword_, false) };
        inline AnswerList& setEnabledKeyword(bool enabledKeyword) { DARABONBA_PTR_SET_VALUE(enabledKeyword_, enabledKeyword) };


        // nameList Field Functions 
        bool hasNameList() const { return this->nameList_ != nullptr;};
        void deleteNameList() { this->nameList_ = nullptr;};
        inline const vector<string> & getNameList() const { DARABONBA_PTR_GET_CONST(nameList_, vector<string>) };
        inline vector<string> getNameList() { DARABONBA_PTR_GET(nameList_, vector<string>) };
        inline AnswerList& setNameList(const vector<string> & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
        inline AnswerList& setNameList(vector<string> && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


        // operators Field Functions 
        bool hasOperators() const { return this->operators_ != nullptr;};
        void deleteOperators() { this->operators_ = nullptr;};
        inline string getOperators() const { DARABONBA_PTR_GET_DEFAULT(operators_, "") };
        inline AnswerList& setOperators(string operators) { DARABONBA_PTR_SET_VALUE(operators_, operators) };


        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline const vector<AnswerList::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<AnswerList::Parameters>) };
        inline vector<AnswerList::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<AnswerList::Parameters>) };
        inline AnswerList& setParameters(const vector<AnswerList::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
        inline AnswerList& setParameters(vector<AnswerList::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline int64_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0L) };
        inline AnswerList& setScore(int64_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline AnswerList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int64_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0L) };
        inline AnswerList& setWeight(int64_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        shared_ptr<vector<AnswerList::AnswerValues>> answerValues_ {};
        shared_ptr<bool> enabledKeyword_ {};
        shared_ptr<vector<string>> nameList_ {};
        shared_ptr<string> operators_ {};
        shared_ptr<vector<AnswerList::Parameters>> parameters_ {};
        shared_ptr<int64_t> score_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int64_t> weight_ {};
      };

      virtual bool empty() const override { return this->answerList_ == nullptr
        && this->knowledgeList_ == nullptr && this->name_ == nullptr && this->questionSample_ == nullptr && this->weight_ == nullptr; };
      // answerList Field Functions 
      bool hasAnswerList() const { return this->answerList_ != nullptr;};
      void deleteAnswerList() { this->answerList_ = nullptr;};
      inline const vector<Point::AnswerList> & getAnswerList() const { DARABONBA_PTR_GET_CONST(answerList_, vector<Point::AnswerList>) };
      inline vector<Point::AnswerList> getAnswerList() { DARABONBA_PTR_GET(answerList_, vector<Point::AnswerList>) };
      inline Point& setAnswerList(const vector<Point::AnswerList> & answerList) { DARABONBA_PTR_SET_VALUE(answerList_, answerList) };
      inline Point& setAnswerList(vector<Point::AnswerList> && answerList) { DARABONBA_PTR_SET_RVALUE(answerList_, answerList) };


      // knowledgeList Field Functions 
      bool hasKnowledgeList() const { return this->knowledgeList_ != nullptr;};
      void deleteKnowledgeList() { this->knowledgeList_ = nullptr;};
      inline const vector<string> & getKnowledgeList() const { DARABONBA_PTR_GET_CONST(knowledgeList_, vector<string>) };
      inline vector<string> getKnowledgeList() { DARABONBA_PTR_GET(knowledgeList_, vector<string>) };
      inline Point& setKnowledgeList(const vector<string> & knowledgeList) { DARABONBA_PTR_SET_VALUE(knowledgeList_, knowledgeList) };
      inline Point& setKnowledgeList(vector<string> && knowledgeList) { DARABONBA_PTR_SET_RVALUE(knowledgeList_, knowledgeList) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Point& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // questionSample Field Functions 
      bool hasQuestionSample() const { return this->questionSample_ != nullptr;};
      void deleteQuestionSample() { this->questionSample_ = nullptr;};
      inline string getQuestionSample() const { DARABONBA_PTR_GET_DEFAULT(questionSample_, "") };
      inline Point& setQuestionSample(string questionSample) { DARABONBA_PTR_SET_VALUE(questionSample_, questionSample) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int64_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0L) };
      inline Point& setWeight(int64_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      shared_ptr<vector<Point::AnswerList>> answerList_ {};
      shared_ptr<vector<string>> knowledgeList_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> questionSample_ {};
      shared_ptr<int64_t> weight_ {};
    };

    class Expressiveness : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Expressiveness& obj) { 
        DARABONBA_PTR_TO_JSON(desc, desc_);
        DARABONBA_PTR_TO_JSON(expressivenessId, expressivenessId_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(rule, rule_);
      };
      friend void from_json(const Darabonba::Json& j, Expressiveness& obj) { 
        DARABONBA_PTR_FROM_JSON(desc, desc_);
        DARABONBA_PTR_FROM_JSON(expressivenessId, expressivenessId_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(rule, rule_);
      };
      Expressiveness() = default ;
      Expressiveness(const Expressiveness &) = default ;
      Expressiveness(Expressiveness &&) = default ;
      Expressiveness(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Expressiveness() = default ;
      Expressiveness& operator=(const Expressiveness &) = default ;
      Expressiveness& operator=(Expressiveness &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->desc_ == nullptr
        && this->expressivenessId_ == nullptr && this->name_ == nullptr && this->rule_ == nullptr; };
      // desc Field Functions 
      bool hasDesc() const { return this->desc_ != nullptr;};
      void deleteDesc() { this->desc_ = nullptr;};
      inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
      inline Expressiveness& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


      // expressivenessId Field Functions 
      bool hasExpressivenessId() const { return this->expressivenessId_ != nullptr;};
      void deleteExpressivenessId() { this->expressivenessId_ = nullptr;};
      inline string getExpressivenessId() const { DARABONBA_PTR_GET_DEFAULT(expressivenessId_, "") };
      inline Expressiveness& setExpressivenessId(string expressivenessId) { DARABONBA_PTR_SET_VALUE(expressivenessId_, expressivenessId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Expressiveness& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // rule Field Functions 
      bool hasRule() const { return this->rule_ != nullptr;};
      void deleteRule() { this->rule_ = nullptr;};
      inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
      inline Expressiveness& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    protected:
      shared_ptr<string> desc_ {};
      shared_ptr<string> expressivenessId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> rule_ {};
    };

    class DialogueList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DialogueList& obj) { 
        DARABONBA_PTR_TO_JSON(message, message_);
        DARABONBA_PTR_TO_JSON(role, role_);
      };
      friend void from_json(const Darabonba::Json& j, DialogueList& obj) { 
        DARABONBA_PTR_FROM_JSON(message, message_);
        DARABONBA_PTR_FROM_JSON(role, role_);
      };
      DialogueList() = default ;
      DialogueList(const DialogueList &) = default ;
      DialogueList(DialogueList &&) = default ;
      DialogueList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DialogueList() = default ;
      DialogueList& operator=(const DialogueList &) = default ;
      DialogueList& operator=(DialogueList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->message_ == nullptr
        && this->role_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline DialogueList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline DialogueList& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    protected:
      shared_ptr<string> message_ {};
      shared_ptr<string> role_ {};
    };

    class DeductionRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeductionRule& obj) { 
        DARABONBA_PTR_TO_JSON(deductionRuleId, deductionRuleId_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(punishmentTypes, punishmentTypes_);
        DARABONBA_PTR_TO_JSON(ruleValue, ruleValue_);
        DARABONBA_PTR_TO_JSON(weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, DeductionRule& obj) { 
        DARABONBA_PTR_FROM_JSON(deductionRuleId, deductionRuleId_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(punishmentTypes, punishmentTypes_);
        DARABONBA_PTR_FROM_JSON(ruleValue, ruleValue_);
        DARABONBA_PTR_FROM_JSON(weight, weight_);
      };
      DeductionRule() = default ;
      DeductionRule(const DeductionRule &) = default ;
      DeductionRule(DeductionRule &&) = default ;
      DeductionRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeductionRule() = default ;
      DeductionRule& operator=(const DeductionRule &) = default ;
      DeductionRule& operator=(DeductionRule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deductionRuleId_ == nullptr
        && this->description_ == nullptr && this->punishmentTypes_ == nullptr && this->ruleValue_ == nullptr && this->weight_ == nullptr; };
      // deductionRuleId Field Functions 
      bool hasDeductionRuleId() const { return this->deductionRuleId_ != nullptr;};
      void deleteDeductionRuleId() { this->deductionRuleId_ = nullptr;};
      inline string getDeductionRuleId() const { DARABONBA_PTR_GET_DEFAULT(deductionRuleId_, "") };
      inline DeductionRule& setDeductionRuleId(string deductionRuleId) { DARABONBA_PTR_SET_VALUE(deductionRuleId_, deductionRuleId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DeductionRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // punishmentTypes Field Functions 
      bool hasPunishmentTypes() const { return this->punishmentTypes_ != nullptr;};
      void deletePunishmentTypes() { this->punishmentTypes_ = nullptr;};
      inline const vector<string> & getPunishmentTypes() const { DARABONBA_PTR_GET_CONST(punishmentTypes_, vector<string>) };
      inline vector<string> getPunishmentTypes() { DARABONBA_PTR_GET(punishmentTypes_, vector<string>) };
      inline DeductionRule& setPunishmentTypes(const vector<string> & punishmentTypes) { DARABONBA_PTR_SET_VALUE(punishmentTypes_, punishmentTypes) };
      inline DeductionRule& setPunishmentTypes(vector<string> && punishmentTypes) { DARABONBA_PTR_SET_RVALUE(punishmentTypes_, punishmentTypes) };


      // ruleValue Field Functions 
      bool hasRuleValue() const { return this->ruleValue_ != nullptr;};
      void deleteRuleValue() { this->ruleValue_ = nullptr;};
      inline string getRuleValue() const { DARABONBA_PTR_GET_DEFAULT(ruleValue_, "") };
      inline DeductionRule& setRuleValue(string ruleValue) { DARABONBA_PTR_SET_VALUE(ruleValue_, ruleValue) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline DeductionRule& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      shared_ptr<string> deductionRuleId_ {};
      shared_ptr<string> description_ {};
      shared_ptr<vector<string>> punishmentTypes_ {};
      shared_ptr<string> ruleValue_ {};
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->dataId_ == nullptr
        && this->dataType_ == nullptr && this->deductionRule_ == nullptr && this->dialogueList_ == nullptr && this->expressiveness_ == nullptr && this->point_ == nullptr; };
    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string getDataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline SubmitAICoachDebugRequest& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline int64_t getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, 0L) };
    inline SubmitAICoachDebugRequest& setDataType(int64_t dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // deductionRule Field Functions 
    bool hasDeductionRule() const { return this->deductionRule_ != nullptr;};
    void deleteDeductionRule() { this->deductionRule_ = nullptr;};
    inline const SubmitAICoachDebugRequest::DeductionRule & getDeductionRule() const { DARABONBA_PTR_GET_CONST(deductionRule_, SubmitAICoachDebugRequest::DeductionRule) };
    inline SubmitAICoachDebugRequest::DeductionRule getDeductionRule() { DARABONBA_PTR_GET(deductionRule_, SubmitAICoachDebugRequest::DeductionRule) };
    inline SubmitAICoachDebugRequest& setDeductionRule(const SubmitAICoachDebugRequest::DeductionRule & deductionRule) { DARABONBA_PTR_SET_VALUE(deductionRule_, deductionRule) };
    inline SubmitAICoachDebugRequest& setDeductionRule(SubmitAICoachDebugRequest::DeductionRule && deductionRule) { DARABONBA_PTR_SET_RVALUE(deductionRule_, deductionRule) };


    // dialogueList Field Functions 
    bool hasDialogueList() const { return this->dialogueList_ != nullptr;};
    void deleteDialogueList() { this->dialogueList_ = nullptr;};
    inline const vector<SubmitAICoachDebugRequest::DialogueList> & getDialogueList() const { DARABONBA_PTR_GET_CONST(dialogueList_, vector<SubmitAICoachDebugRequest::DialogueList>) };
    inline vector<SubmitAICoachDebugRequest::DialogueList> getDialogueList() { DARABONBA_PTR_GET(dialogueList_, vector<SubmitAICoachDebugRequest::DialogueList>) };
    inline SubmitAICoachDebugRequest& setDialogueList(const vector<SubmitAICoachDebugRequest::DialogueList> & dialogueList) { DARABONBA_PTR_SET_VALUE(dialogueList_, dialogueList) };
    inline SubmitAICoachDebugRequest& setDialogueList(vector<SubmitAICoachDebugRequest::DialogueList> && dialogueList) { DARABONBA_PTR_SET_RVALUE(dialogueList_, dialogueList) };


    // expressiveness Field Functions 
    bool hasExpressiveness() const { return this->expressiveness_ != nullptr;};
    void deleteExpressiveness() { this->expressiveness_ = nullptr;};
    inline const SubmitAICoachDebugRequest::Expressiveness & getExpressiveness() const { DARABONBA_PTR_GET_CONST(expressiveness_, SubmitAICoachDebugRequest::Expressiveness) };
    inline SubmitAICoachDebugRequest::Expressiveness getExpressiveness() { DARABONBA_PTR_GET(expressiveness_, SubmitAICoachDebugRequest::Expressiveness) };
    inline SubmitAICoachDebugRequest& setExpressiveness(const SubmitAICoachDebugRequest::Expressiveness & expressiveness) { DARABONBA_PTR_SET_VALUE(expressiveness_, expressiveness) };
    inline SubmitAICoachDebugRequest& setExpressiveness(SubmitAICoachDebugRequest::Expressiveness && expressiveness) { DARABONBA_PTR_SET_RVALUE(expressiveness_, expressiveness) };


    // point Field Functions 
    bool hasPoint() const { return this->point_ != nullptr;};
    void deletePoint() { this->point_ = nullptr;};
    inline const SubmitAICoachDebugRequest::Point & getPoint() const { DARABONBA_PTR_GET_CONST(point_, SubmitAICoachDebugRequest::Point) };
    inline SubmitAICoachDebugRequest::Point getPoint() { DARABONBA_PTR_GET(point_, SubmitAICoachDebugRequest::Point) };
    inline SubmitAICoachDebugRequest& setPoint(const SubmitAICoachDebugRequest::Point & point) { DARABONBA_PTR_SET_VALUE(point_, point) };
    inline SubmitAICoachDebugRequest& setPoint(SubmitAICoachDebugRequest::Point && point) { DARABONBA_PTR_SET_RVALUE(point_, point) };


  protected:
    shared_ptr<string> dataId_ {};
    shared_ptr<int64_t> dataType_ {};
    shared_ptr<SubmitAICoachDebugRequest::DeductionRule> deductionRule_ {};
    shared_ptr<vector<SubmitAICoachDebugRequest::DialogueList>> dialogueList_ {};
    shared_ptr<SubmitAICoachDebugRequest::Expressiveness> expressiveness_ {};
    shared_ptr<SubmitAICoachDebugRequest::Point> point_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
