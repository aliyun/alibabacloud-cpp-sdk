// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHASSESSMENTPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHASSESSMENTPOINTRESPONSEBODY_HPP_
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
  class GetAICoachAssessmentPointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachAssessmentPointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(answerList, answerList_);
      DARABONBA_PTR_TO_JSON(citations, citations_);
      DARABONBA_PTR_TO_JSON(documentId, documentId_);
      DARABONBA_PTR_TO_JSON(documentName, documentName_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(kbId, kbId_);
      DARABONBA_PTR_TO_JSON(kbType, kbType_);
      DARABONBA_PTR_TO_JSON(knowledgeList, knowledgeList_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pointId, pointId_);
      DARABONBA_PTR_TO_JSON(questionDescription, questionDescription_);
      DARABONBA_PTR_TO_JSON(questionSample, questionSample_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachAssessmentPointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(answerList, answerList_);
      DARABONBA_PTR_FROM_JSON(citations, citations_);
      DARABONBA_PTR_FROM_JSON(documentId, documentId_);
      DARABONBA_PTR_FROM_JSON(documentName, documentName_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(kbId, kbId_);
      DARABONBA_PTR_FROM_JSON(kbType, kbType_);
      DARABONBA_PTR_FROM_JSON(knowledgeList, knowledgeList_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pointId, pointId_);
      DARABONBA_PTR_FROM_JSON(questionDescription, questionDescription_);
      DARABONBA_PTR_FROM_JSON(questionSample, questionSample_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetAICoachAssessmentPointResponseBody() = default ;
    GetAICoachAssessmentPointResponseBody(const GetAICoachAssessmentPointResponseBody &) = default ;
    GetAICoachAssessmentPointResponseBody(GetAICoachAssessmentPointResponseBody &&) = default ;
    GetAICoachAssessmentPointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachAssessmentPointResponseBody() = default ;
    GetAICoachAssessmentPointResponseBody& operator=(const GetAICoachAssessmentPointResponseBody &) = default ;
    GetAICoachAssessmentPointResponseBody& operator=(GetAICoachAssessmentPointResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, AnswerList& obj) { 
        DARABONBA_PTR_FROM_JSON(answerValues, answerValues_);
        DARABONBA_PTR_FROM_JSON(enabledKeyword, enabledKeyword_);
        DARABONBA_PTR_FROM_JSON(nameList, nameList_);
        DARABONBA_PTR_FROM_JSON(operators, operators_);
        DARABONBA_PTR_FROM_JSON(parameters, parameters_);
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
          inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
          inline KeywordValues& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


        protected:
          shared_ptr<string> name_ {};
          shared_ptr<int32_t> weight_ {};
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
        inline int32_t getAnswerWeight() const { DARABONBA_PTR_GET_DEFAULT(answerWeight_, 0) };
        inline AnswerValues& setAnswerWeight(int32_t answerWeight) { DARABONBA_PTR_SET_VALUE(answerWeight_, answerWeight) };


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
        inline int32_t getKeywordWeight() const { DARABONBA_PTR_GET_DEFAULT(keywordWeight_, 0) };
        inline AnswerValues& setKeywordWeight(int32_t keywordWeight) { DARABONBA_PTR_SET_VALUE(keywordWeight_, keywordWeight) };


        // scoringRules Field Functions 
        bool hasScoringRules() const { return this->scoringRules_ != nullptr;};
        void deleteScoringRules() { this->scoringRules_ = nullptr;};
        inline const vector<AnswerValues::ScoringRules> & getScoringRules() const { DARABONBA_PTR_GET_CONST(scoringRules_, vector<AnswerValues::ScoringRules>) };
        inline vector<AnswerValues::ScoringRules> getScoringRules() { DARABONBA_PTR_GET(scoringRules_, vector<AnswerValues::ScoringRules>) };
        inline AnswerValues& setScoringRules(const vector<AnswerValues::ScoringRules> & scoringRules) { DARABONBA_PTR_SET_VALUE(scoringRules_, scoringRules) };
        inline AnswerValues& setScoringRules(vector<AnswerValues::ScoringRules> && scoringRules) { DARABONBA_PTR_SET_RVALUE(scoringRules_, scoringRules) };


      protected:
        shared_ptr<string> answerName_ {};
        shared_ptr<int32_t> answerWeight_ {};
        shared_ptr<vector<AnswerValues::KeywordValues>> keywordValues_ {};
        shared_ptr<int32_t> keywordWeight_ {};
        shared_ptr<vector<AnswerValues::ScoringRules>> scoringRules_ {};
      };

      virtual bool empty() const override { return this->answerValues_ == nullptr
        && this->enabledKeyword_ == nullptr && this->nameList_ == nullptr && this->operators_ == nullptr && this->parameters_ == nullptr && this->type_ == nullptr
        && this->weight_ == nullptr; };
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


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AnswerList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline AnswerList& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      shared_ptr<vector<AnswerList::AnswerValues>> answerValues_ {};
      shared_ptr<bool> enabledKeyword_ {};
      shared_ptr<vector<string>> nameList_ {};
      shared_ptr<string> operators_ {};
      shared_ptr<vector<AnswerList::Parameters>> parameters_ {};
      shared_ptr<string> type_ {};
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->answerList_ == nullptr
        && this->citations_ == nullptr && this->documentId_ == nullptr && this->documentName_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->kbId_ == nullptr && this->kbType_ == nullptr && this->knowledgeList_ == nullptr && this->name_ == nullptr && this->pointId_ == nullptr
        && this->questionDescription_ == nullptr && this->questionSample_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr; };
    // answerList Field Functions 
    bool hasAnswerList() const { return this->answerList_ != nullptr;};
    void deleteAnswerList() { this->answerList_ = nullptr;};
    inline const vector<GetAICoachAssessmentPointResponseBody::AnswerList> & getAnswerList() const { DARABONBA_PTR_GET_CONST(answerList_, vector<GetAICoachAssessmentPointResponseBody::AnswerList>) };
    inline vector<GetAICoachAssessmentPointResponseBody::AnswerList> getAnswerList() { DARABONBA_PTR_GET(answerList_, vector<GetAICoachAssessmentPointResponseBody::AnswerList>) };
    inline GetAICoachAssessmentPointResponseBody& setAnswerList(const vector<GetAICoachAssessmentPointResponseBody::AnswerList> & answerList) { DARABONBA_PTR_SET_VALUE(answerList_, answerList) };
    inline GetAICoachAssessmentPointResponseBody& setAnswerList(vector<GetAICoachAssessmentPointResponseBody::AnswerList> && answerList) { DARABONBA_PTR_SET_RVALUE(answerList_, answerList) };


    // citations Field Functions 
    bool hasCitations() const { return this->citations_ != nullptr;};
    void deleteCitations() { this->citations_ = nullptr;};
    inline int32_t getCitations() const { DARABONBA_PTR_GET_DEFAULT(citations_, 0) };
    inline GetAICoachAssessmentPointResponseBody& setCitations(int32_t citations) { DARABONBA_PTR_SET_VALUE(citations_, citations) };


    // documentId Field Functions 
    bool hasDocumentId() const { return this->documentId_ != nullptr;};
    void deleteDocumentId() { this->documentId_ = nullptr;};
    inline string getDocumentId() const { DARABONBA_PTR_GET_DEFAULT(documentId_, "") };
    inline GetAICoachAssessmentPointResponseBody& setDocumentId(string documentId) { DARABONBA_PTR_SET_VALUE(documentId_, documentId) };


    // documentName Field Functions 
    bool hasDocumentName() const { return this->documentName_ != nullptr;};
    void deleteDocumentName() { this->documentName_ = nullptr;};
    inline string getDocumentName() const { DARABONBA_PTR_GET_DEFAULT(documentName_, "") };
    inline GetAICoachAssessmentPointResponseBody& setDocumentName(string documentName) { DARABONBA_PTR_SET_VALUE(documentName_, documentName) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetAICoachAssessmentPointResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetAICoachAssessmentPointResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // kbId Field Functions 
    bool hasKbId() const { return this->kbId_ != nullptr;};
    void deleteKbId() { this->kbId_ = nullptr;};
    inline string getKbId() const { DARABONBA_PTR_GET_DEFAULT(kbId_, "") };
    inline GetAICoachAssessmentPointResponseBody& setKbId(string kbId) { DARABONBA_PTR_SET_VALUE(kbId_, kbId) };


    // kbType Field Functions 
    bool hasKbType() const { return this->kbType_ != nullptr;};
    void deleteKbType() { this->kbType_ = nullptr;};
    inline string getKbType() const { DARABONBA_PTR_GET_DEFAULT(kbType_, "") };
    inline GetAICoachAssessmentPointResponseBody& setKbType(string kbType) { DARABONBA_PTR_SET_VALUE(kbType_, kbType) };


    // knowledgeList Field Functions 
    bool hasKnowledgeList() const { return this->knowledgeList_ != nullptr;};
    void deleteKnowledgeList() { this->knowledgeList_ = nullptr;};
    inline const vector<string> & getKnowledgeList() const { DARABONBA_PTR_GET_CONST(knowledgeList_, vector<string>) };
    inline vector<string> getKnowledgeList() { DARABONBA_PTR_GET(knowledgeList_, vector<string>) };
    inline GetAICoachAssessmentPointResponseBody& setKnowledgeList(const vector<string> & knowledgeList) { DARABONBA_PTR_SET_VALUE(knowledgeList_, knowledgeList) };
    inline GetAICoachAssessmentPointResponseBody& setKnowledgeList(vector<string> && knowledgeList) { DARABONBA_PTR_SET_RVALUE(knowledgeList_, knowledgeList) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAICoachAssessmentPointResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pointId Field Functions 
    bool hasPointId() const { return this->pointId_ != nullptr;};
    void deletePointId() { this->pointId_ = nullptr;};
    inline string getPointId() const { DARABONBA_PTR_GET_DEFAULT(pointId_, "") };
    inline GetAICoachAssessmentPointResponseBody& setPointId(string pointId) { DARABONBA_PTR_SET_VALUE(pointId_, pointId) };


    // questionDescription Field Functions 
    bool hasQuestionDescription() const { return this->questionDescription_ != nullptr;};
    void deleteQuestionDescription() { this->questionDescription_ = nullptr;};
    inline string getQuestionDescription() const { DARABONBA_PTR_GET_DEFAULT(questionDescription_, "") };
    inline GetAICoachAssessmentPointResponseBody& setQuestionDescription(string questionDescription) { DARABONBA_PTR_SET_VALUE(questionDescription_, questionDescription) };


    // questionSample Field Functions 
    bool hasQuestionSample() const { return this->questionSample_ != nullptr;};
    void deleteQuestionSample() { this->questionSample_ = nullptr;};
    inline string getQuestionSample() const { DARABONBA_PTR_GET_DEFAULT(questionSample_, "") };
    inline GetAICoachAssessmentPointResponseBody& setQuestionSample(string questionSample) { DARABONBA_PTR_SET_VALUE(questionSample_, questionSample) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAICoachAssessmentPointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAICoachAssessmentPointResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<vector<GetAICoachAssessmentPointResponseBody::AnswerList>> answerList_ {};
    shared_ptr<int32_t> citations_ {};
    shared_ptr<string> documentId_ {};
    shared_ptr<string> documentName_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<string> kbId_ {};
    shared_ptr<string> kbType_ {};
    shared_ptr<vector<string>> knowledgeList_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> pointId_ {};
    shared_ptr<string> questionDescription_ {};
    shared_ptr<string> questionSample_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
