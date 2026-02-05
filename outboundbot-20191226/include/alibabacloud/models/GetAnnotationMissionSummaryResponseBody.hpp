// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETANNOTATIONMISSIONSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETANNOTATIONMISSIONSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetAnnotationMissionSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAnnotationMissionSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAnnotationMissionSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAnnotationMissionSummaryResponseBody() = default ;
    GetAnnotationMissionSummaryResponseBody(const GetAnnotationMissionSummaryResponseBody &) = default ;
    GetAnnotationMissionSummaryResponseBody(GetAnnotationMissionSummaryResponseBody &&) = default ;
    GetAnnotationMissionSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAnnotationMissionSummaryResponseBody() = default ;
    GetAnnotationMissionSummaryResponseBody& operator=(const GetAnnotationMissionSummaryResponseBody &) = default ;
    GetAnnotationMissionSummaryResponseBody& operator=(GetAnnotationMissionSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AnnotationMissionId, annotationMissionId_);
        DARABONBA_PTR_TO_JSON(AsrSummaryInfo, asrSummaryInfo_);
        DARABONBA_PTR_TO_JSON(IntentSummaryInfo, intentSummaryInfo_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(TagSummaryInfo, tagSummaryInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AnnotationMissionId, annotationMissionId_);
        DARABONBA_PTR_FROM_JSON(AsrSummaryInfo, asrSummaryInfo_);
        DARABONBA_PTR_FROM_JSON(IntentSummaryInfo, intentSummaryInfo_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(TagSummaryInfo, tagSummaryInfo_);
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
      class TagSummaryInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TagSummaryInfo& obj) { 
          DARABONBA_PTR_TO_JSON(TagSummaryInfoDetailList, tagSummaryInfoDetailList_);
        };
        friend void from_json(const Darabonba::Json& j, TagSummaryInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(TagSummaryInfoDetailList, tagSummaryInfoDetailList_);
        };
        TagSummaryInfo() = default ;
        TagSummaryInfo(const TagSummaryInfo &) = default ;
        TagSummaryInfo(TagSummaryInfo &&) = default ;
        TagSummaryInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TagSummaryInfo() = default ;
        TagSummaryInfo& operator=(const TagSummaryInfo &) = default ;
        TagSummaryInfo& operator=(TagSummaryInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TagSummaryInfoDetailList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TagSummaryInfoDetailList& obj) { 
            DARABONBA_PTR_TO_JSON(Count, count_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, TagSummaryInfoDetailList& obj) { 
            DARABONBA_PTR_FROM_JSON(Count, count_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          TagSummaryInfoDetailList() = default ;
          TagSummaryInfoDetailList(const TagSummaryInfoDetailList &) = default ;
          TagSummaryInfoDetailList(TagSummaryInfoDetailList &&) = default ;
          TagSummaryInfoDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TagSummaryInfoDetailList() = default ;
          TagSummaryInfoDetailList& operator=(const TagSummaryInfoDetailList &) = default ;
          TagSummaryInfoDetailList& operator=(TagSummaryInfoDetailList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->count_ == nullptr
        && this->name_ == nullptr; };
          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
          inline TagSummaryInfoDetailList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline TagSummaryInfoDetailList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<int32_t> count_ {};
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->tagSummaryInfoDetailList_ == nullptr; };
        // tagSummaryInfoDetailList Field Functions 
        bool hasTagSummaryInfoDetailList() const { return this->tagSummaryInfoDetailList_ != nullptr;};
        void deleteTagSummaryInfoDetailList() { this->tagSummaryInfoDetailList_ = nullptr;};
        inline const vector<TagSummaryInfo::TagSummaryInfoDetailList> & getTagSummaryInfoDetailList() const { DARABONBA_PTR_GET_CONST(tagSummaryInfoDetailList_, vector<TagSummaryInfo::TagSummaryInfoDetailList>) };
        inline vector<TagSummaryInfo::TagSummaryInfoDetailList> getTagSummaryInfoDetailList() { DARABONBA_PTR_GET(tagSummaryInfoDetailList_, vector<TagSummaryInfo::TagSummaryInfoDetailList>) };
        inline TagSummaryInfo& setTagSummaryInfoDetailList(const vector<TagSummaryInfo::TagSummaryInfoDetailList> & tagSummaryInfoDetailList) { DARABONBA_PTR_SET_VALUE(tagSummaryInfoDetailList_, tagSummaryInfoDetailList) };
        inline TagSummaryInfo& setTagSummaryInfoDetailList(vector<TagSummaryInfo::TagSummaryInfoDetailList> && tagSummaryInfoDetailList) { DARABONBA_PTR_SET_RVALUE(tagSummaryInfoDetailList_, tagSummaryInfoDetailList) };


      protected:
        shared_ptr<vector<TagSummaryInfo::TagSummaryInfoDetailList>> tagSummaryInfoDetailList_ {};
      };

      class IntentSummaryInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IntentSummaryInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AnnotationCorrectCount, annotationCorrectCount_);
          DARABONBA_PTR_TO_JSON(AnnotationInvalid, annotationInvalid_);
          DARABONBA_PTR_TO_JSON(ChatTotalCount, chatTotalCount_);
          DARABONBA_PTR_TO_JSON(IntentUserSayCount, intentUserSayCount_);
          DARABONBA_PTR_TO_JSON(IntentionNotCoveredCount, intentionNotCoveredCount_);
          DARABONBA_PTR_TO_JSON(MatchErrorCount, matchErrorCount_);
          DARABONBA_PTR_TO_JSON(NoAnnotation, noAnnotation_);
          DARABONBA_PTR_TO_JSON(TranslationUnrecognizedCount, translationUnrecognizedCount_);
        };
        friend void from_json(const Darabonba::Json& j, IntentSummaryInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AnnotationCorrectCount, annotationCorrectCount_);
          DARABONBA_PTR_FROM_JSON(AnnotationInvalid, annotationInvalid_);
          DARABONBA_PTR_FROM_JSON(ChatTotalCount, chatTotalCount_);
          DARABONBA_PTR_FROM_JSON(IntentUserSayCount, intentUserSayCount_);
          DARABONBA_PTR_FROM_JSON(IntentionNotCoveredCount, intentionNotCoveredCount_);
          DARABONBA_PTR_FROM_JSON(MatchErrorCount, matchErrorCount_);
          DARABONBA_PTR_FROM_JSON(NoAnnotation, noAnnotation_);
          DARABONBA_PTR_FROM_JSON(TranslationUnrecognizedCount, translationUnrecognizedCount_);
        };
        IntentSummaryInfo() = default ;
        IntentSummaryInfo(const IntentSummaryInfo &) = default ;
        IntentSummaryInfo(IntentSummaryInfo &&) = default ;
        IntentSummaryInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IntentSummaryInfo() = default ;
        IntentSummaryInfo& operator=(const IntentSummaryInfo &) = default ;
        IntentSummaryInfo& operator=(IntentSummaryInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->annotationCorrectCount_ == nullptr
        && this->annotationInvalid_ == nullptr && this->chatTotalCount_ == nullptr && this->intentUserSayCount_ == nullptr && this->intentionNotCoveredCount_ == nullptr && this->matchErrorCount_ == nullptr
        && this->noAnnotation_ == nullptr && this->translationUnrecognizedCount_ == nullptr; };
        // annotationCorrectCount Field Functions 
        bool hasAnnotationCorrectCount() const { return this->annotationCorrectCount_ != nullptr;};
        void deleteAnnotationCorrectCount() { this->annotationCorrectCount_ = nullptr;};
        inline int32_t getAnnotationCorrectCount() const { DARABONBA_PTR_GET_DEFAULT(annotationCorrectCount_, 0) };
        inline IntentSummaryInfo& setAnnotationCorrectCount(int32_t annotationCorrectCount) { DARABONBA_PTR_SET_VALUE(annotationCorrectCount_, annotationCorrectCount) };


        // annotationInvalid Field Functions 
        bool hasAnnotationInvalid() const { return this->annotationInvalid_ != nullptr;};
        void deleteAnnotationInvalid() { this->annotationInvalid_ = nullptr;};
        inline int32_t getAnnotationInvalid() const { DARABONBA_PTR_GET_DEFAULT(annotationInvalid_, 0) };
        inline IntentSummaryInfo& setAnnotationInvalid(int32_t annotationInvalid) { DARABONBA_PTR_SET_VALUE(annotationInvalid_, annotationInvalid) };


        // chatTotalCount Field Functions 
        bool hasChatTotalCount() const { return this->chatTotalCount_ != nullptr;};
        void deleteChatTotalCount() { this->chatTotalCount_ = nullptr;};
        inline int32_t getChatTotalCount() const { DARABONBA_PTR_GET_DEFAULT(chatTotalCount_, 0) };
        inline IntentSummaryInfo& setChatTotalCount(int32_t chatTotalCount) { DARABONBA_PTR_SET_VALUE(chatTotalCount_, chatTotalCount) };


        // intentUserSayCount Field Functions 
        bool hasIntentUserSayCount() const { return this->intentUserSayCount_ != nullptr;};
        void deleteIntentUserSayCount() { this->intentUserSayCount_ = nullptr;};
        inline int32_t getIntentUserSayCount() const { DARABONBA_PTR_GET_DEFAULT(intentUserSayCount_, 0) };
        inline IntentSummaryInfo& setIntentUserSayCount(int32_t intentUserSayCount) { DARABONBA_PTR_SET_VALUE(intentUserSayCount_, intentUserSayCount) };


        // intentionNotCoveredCount Field Functions 
        bool hasIntentionNotCoveredCount() const { return this->intentionNotCoveredCount_ != nullptr;};
        void deleteIntentionNotCoveredCount() { this->intentionNotCoveredCount_ = nullptr;};
        inline int32_t getIntentionNotCoveredCount() const { DARABONBA_PTR_GET_DEFAULT(intentionNotCoveredCount_, 0) };
        inline IntentSummaryInfo& setIntentionNotCoveredCount(int32_t intentionNotCoveredCount) { DARABONBA_PTR_SET_VALUE(intentionNotCoveredCount_, intentionNotCoveredCount) };


        // matchErrorCount Field Functions 
        bool hasMatchErrorCount() const { return this->matchErrorCount_ != nullptr;};
        void deleteMatchErrorCount() { this->matchErrorCount_ = nullptr;};
        inline int32_t getMatchErrorCount() const { DARABONBA_PTR_GET_DEFAULT(matchErrorCount_, 0) };
        inline IntentSummaryInfo& setMatchErrorCount(int32_t matchErrorCount) { DARABONBA_PTR_SET_VALUE(matchErrorCount_, matchErrorCount) };


        // noAnnotation Field Functions 
        bool hasNoAnnotation() const { return this->noAnnotation_ != nullptr;};
        void deleteNoAnnotation() { this->noAnnotation_ = nullptr;};
        inline int32_t getNoAnnotation() const { DARABONBA_PTR_GET_DEFAULT(noAnnotation_, 0) };
        inline IntentSummaryInfo& setNoAnnotation(int32_t noAnnotation) { DARABONBA_PTR_SET_VALUE(noAnnotation_, noAnnotation) };


        // translationUnrecognizedCount Field Functions 
        bool hasTranslationUnrecognizedCount() const { return this->translationUnrecognizedCount_ != nullptr;};
        void deleteTranslationUnrecognizedCount() { this->translationUnrecognizedCount_ = nullptr;};
        inline int32_t getTranslationUnrecognizedCount() const { DARABONBA_PTR_GET_DEFAULT(translationUnrecognizedCount_, 0) };
        inline IntentSummaryInfo& setTranslationUnrecognizedCount(int32_t translationUnrecognizedCount) { DARABONBA_PTR_SET_VALUE(translationUnrecognizedCount_, translationUnrecognizedCount) };


      protected:
        shared_ptr<int32_t> annotationCorrectCount_ {};
        shared_ptr<int32_t> annotationInvalid_ {};
        shared_ptr<int32_t> chatTotalCount_ {};
        shared_ptr<int32_t> intentUserSayCount_ {};
        shared_ptr<int32_t> intentionNotCoveredCount_ {};
        shared_ptr<int32_t> matchErrorCount_ {};
        shared_ptr<int32_t> noAnnotation_ {};
        shared_ptr<int32_t> translationUnrecognizedCount_ {};
      };

      class AsrSummaryInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AsrSummaryInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AddCustomizationDataCount, addCustomizationDataCount_);
          DARABONBA_PTR_TO_JSON(AddVocabularyDataCount, addVocabularyDataCount_);
          DARABONBA_PTR_TO_JSON(AnnotationInvalid, annotationInvalid_);
          DARABONBA_PTR_TO_JSON(CharacterCorrectRate, characterCorrectRate_);
          DARABONBA_PTR_TO_JSON(CharacterErrorRate, characterErrorRate_);
          DARABONBA_PTR_TO_JSON(ChatTotalCount, chatTotalCount_);
          DARABONBA_PTR_TO_JSON(NoAnnotation, noAnnotation_);
          DARABONBA_PTR_TO_JSON(SentenceErrorRate, sentenceErrorRate_);
          DARABONBA_PTR_TO_JSON(WordErrorRate, wordErrorRate_);
        };
        friend void from_json(const Darabonba::Json& j, AsrSummaryInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AddCustomizationDataCount, addCustomizationDataCount_);
          DARABONBA_PTR_FROM_JSON(AddVocabularyDataCount, addVocabularyDataCount_);
          DARABONBA_PTR_FROM_JSON(AnnotationInvalid, annotationInvalid_);
          DARABONBA_PTR_FROM_JSON(CharacterCorrectRate, characterCorrectRate_);
          DARABONBA_PTR_FROM_JSON(CharacterErrorRate, characterErrorRate_);
          DARABONBA_PTR_FROM_JSON(ChatTotalCount, chatTotalCount_);
          DARABONBA_PTR_FROM_JSON(NoAnnotation, noAnnotation_);
          DARABONBA_PTR_FROM_JSON(SentenceErrorRate, sentenceErrorRate_);
          DARABONBA_PTR_FROM_JSON(WordErrorRate, wordErrorRate_);
        };
        AsrSummaryInfo() = default ;
        AsrSummaryInfo(const AsrSummaryInfo &) = default ;
        AsrSummaryInfo(AsrSummaryInfo &&) = default ;
        AsrSummaryInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AsrSummaryInfo() = default ;
        AsrSummaryInfo& operator=(const AsrSummaryInfo &) = default ;
        AsrSummaryInfo& operator=(AsrSummaryInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->addCustomizationDataCount_ == nullptr
        && this->addVocabularyDataCount_ == nullptr && this->annotationInvalid_ == nullptr && this->characterCorrectRate_ == nullptr && this->characterErrorRate_ == nullptr && this->chatTotalCount_ == nullptr
        && this->noAnnotation_ == nullptr && this->sentenceErrorRate_ == nullptr && this->wordErrorRate_ == nullptr; };
        // addCustomizationDataCount Field Functions 
        bool hasAddCustomizationDataCount() const { return this->addCustomizationDataCount_ != nullptr;};
        void deleteAddCustomizationDataCount() { this->addCustomizationDataCount_ = nullptr;};
        inline int32_t getAddCustomizationDataCount() const { DARABONBA_PTR_GET_DEFAULT(addCustomizationDataCount_, 0) };
        inline AsrSummaryInfo& setAddCustomizationDataCount(int32_t addCustomizationDataCount) { DARABONBA_PTR_SET_VALUE(addCustomizationDataCount_, addCustomizationDataCount) };


        // addVocabularyDataCount Field Functions 
        bool hasAddVocabularyDataCount() const { return this->addVocabularyDataCount_ != nullptr;};
        void deleteAddVocabularyDataCount() { this->addVocabularyDataCount_ = nullptr;};
        inline int32_t getAddVocabularyDataCount() const { DARABONBA_PTR_GET_DEFAULT(addVocabularyDataCount_, 0) };
        inline AsrSummaryInfo& setAddVocabularyDataCount(int32_t addVocabularyDataCount) { DARABONBA_PTR_SET_VALUE(addVocabularyDataCount_, addVocabularyDataCount) };


        // annotationInvalid Field Functions 
        bool hasAnnotationInvalid() const { return this->annotationInvalid_ != nullptr;};
        void deleteAnnotationInvalid() { this->annotationInvalid_ = nullptr;};
        inline int32_t getAnnotationInvalid() const { DARABONBA_PTR_GET_DEFAULT(annotationInvalid_, 0) };
        inline AsrSummaryInfo& setAnnotationInvalid(int32_t annotationInvalid) { DARABONBA_PTR_SET_VALUE(annotationInvalid_, annotationInvalid) };


        // characterCorrectRate Field Functions 
        bool hasCharacterCorrectRate() const { return this->characterCorrectRate_ != nullptr;};
        void deleteCharacterCorrectRate() { this->characterCorrectRate_ = nullptr;};
        inline int32_t getCharacterCorrectRate() const { DARABONBA_PTR_GET_DEFAULT(characterCorrectRate_, 0) };
        inline AsrSummaryInfo& setCharacterCorrectRate(int32_t characterCorrectRate) { DARABONBA_PTR_SET_VALUE(characterCorrectRate_, characterCorrectRate) };


        // characterErrorRate Field Functions 
        bool hasCharacterErrorRate() const { return this->characterErrorRate_ != nullptr;};
        void deleteCharacterErrorRate() { this->characterErrorRate_ = nullptr;};
        inline int32_t getCharacterErrorRate() const { DARABONBA_PTR_GET_DEFAULT(characterErrorRate_, 0) };
        inline AsrSummaryInfo& setCharacterErrorRate(int32_t characterErrorRate) { DARABONBA_PTR_SET_VALUE(characterErrorRate_, characterErrorRate) };


        // chatTotalCount Field Functions 
        bool hasChatTotalCount() const { return this->chatTotalCount_ != nullptr;};
        void deleteChatTotalCount() { this->chatTotalCount_ = nullptr;};
        inline int32_t getChatTotalCount() const { DARABONBA_PTR_GET_DEFAULT(chatTotalCount_, 0) };
        inline AsrSummaryInfo& setChatTotalCount(int32_t chatTotalCount) { DARABONBA_PTR_SET_VALUE(chatTotalCount_, chatTotalCount) };


        // noAnnotation Field Functions 
        bool hasNoAnnotation() const { return this->noAnnotation_ != nullptr;};
        void deleteNoAnnotation() { this->noAnnotation_ = nullptr;};
        inline int32_t getNoAnnotation() const { DARABONBA_PTR_GET_DEFAULT(noAnnotation_, 0) };
        inline AsrSummaryInfo& setNoAnnotation(int32_t noAnnotation) { DARABONBA_PTR_SET_VALUE(noAnnotation_, noAnnotation) };


        // sentenceErrorRate Field Functions 
        bool hasSentenceErrorRate() const { return this->sentenceErrorRate_ != nullptr;};
        void deleteSentenceErrorRate() { this->sentenceErrorRate_ = nullptr;};
        inline int32_t getSentenceErrorRate() const { DARABONBA_PTR_GET_DEFAULT(sentenceErrorRate_, 0) };
        inline AsrSummaryInfo& setSentenceErrorRate(int32_t sentenceErrorRate) { DARABONBA_PTR_SET_VALUE(sentenceErrorRate_, sentenceErrorRate) };


        // wordErrorRate Field Functions 
        bool hasWordErrorRate() const { return this->wordErrorRate_ != nullptr;};
        void deleteWordErrorRate() { this->wordErrorRate_ = nullptr;};
        inline int32_t getWordErrorRate() const { DARABONBA_PTR_GET_DEFAULT(wordErrorRate_, 0) };
        inline AsrSummaryInfo& setWordErrorRate(int32_t wordErrorRate) { DARABONBA_PTR_SET_VALUE(wordErrorRate_, wordErrorRate) };


      protected:
        shared_ptr<int32_t> addCustomizationDataCount_ {};
        shared_ptr<int32_t> addVocabularyDataCount_ {};
        shared_ptr<int32_t> annotationInvalid_ {};
        shared_ptr<int32_t> characterCorrectRate_ {};
        shared_ptr<int32_t> characterErrorRate_ {};
        shared_ptr<int32_t> chatTotalCount_ {};
        shared_ptr<int32_t> noAnnotation_ {};
        shared_ptr<int32_t> sentenceErrorRate_ {};
        shared_ptr<int32_t> wordErrorRate_ {};
      };

      virtual bool empty() const override { return this->annotationMissionId_ == nullptr
        && this->asrSummaryInfo_ == nullptr && this->intentSummaryInfo_ == nullptr && this->message_ == nullptr && this->success_ == nullptr && this->tagSummaryInfo_ == nullptr; };
      // annotationMissionId Field Functions 
      bool hasAnnotationMissionId() const { return this->annotationMissionId_ != nullptr;};
      void deleteAnnotationMissionId() { this->annotationMissionId_ = nullptr;};
      inline string getAnnotationMissionId() const { DARABONBA_PTR_GET_DEFAULT(annotationMissionId_, "") };
      inline Data& setAnnotationMissionId(string annotationMissionId) { DARABONBA_PTR_SET_VALUE(annotationMissionId_, annotationMissionId) };


      // asrSummaryInfo Field Functions 
      bool hasAsrSummaryInfo() const { return this->asrSummaryInfo_ != nullptr;};
      void deleteAsrSummaryInfo() { this->asrSummaryInfo_ = nullptr;};
      inline const Data::AsrSummaryInfo & getAsrSummaryInfo() const { DARABONBA_PTR_GET_CONST(asrSummaryInfo_, Data::AsrSummaryInfo) };
      inline Data::AsrSummaryInfo getAsrSummaryInfo() { DARABONBA_PTR_GET(asrSummaryInfo_, Data::AsrSummaryInfo) };
      inline Data& setAsrSummaryInfo(const Data::AsrSummaryInfo & asrSummaryInfo) { DARABONBA_PTR_SET_VALUE(asrSummaryInfo_, asrSummaryInfo) };
      inline Data& setAsrSummaryInfo(Data::AsrSummaryInfo && asrSummaryInfo) { DARABONBA_PTR_SET_RVALUE(asrSummaryInfo_, asrSummaryInfo) };


      // intentSummaryInfo Field Functions 
      bool hasIntentSummaryInfo() const { return this->intentSummaryInfo_ != nullptr;};
      void deleteIntentSummaryInfo() { this->intentSummaryInfo_ = nullptr;};
      inline const Data::IntentSummaryInfo & getIntentSummaryInfo() const { DARABONBA_PTR_GET_CONST(intentSummaryInfo_, Data::IntentSummaryInfo) };
      inline Data::IntentSummaryInfo getIntentSummaryInfo() { DARABONBA_PTR_GET(intentSummaryInfo_, Data::IntentSummaryInfo) };
      inline Data& setIntentSummaryInfo(const Data::IntentSummaryInfo & intentSummaryInfo) { DARABONBA_PTR_SET_VALUE(intentSummaryInfo_, intentSummaryInfo) };
      inline Data& setIntentSummaryInfo(Data::IntentSummaryInfo && intentSummaryInfo) { DARABONBA_PTR_SET_RVALUE(intentSummaryInfo_, intentSummaryInfo) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // tagSummaryInfo Field Functions 
      bool hasTagSummaryInfo() const { return this->tagSummaryInfo_ != nullptr;};
      void deleteTagSummaryInfo() { this->tagSummaryInfo_ = nullptr;};
      inline const Data::TagSummaryInfo & getTagSummaryInfo() const { DARABONBA_PTR_GET_CONST(tagSummaryInfo_, Data::TagSummaryInfo) };
      inline Data::TagSummaryInfo getTagSummaryInfo() { DARABONBA_PTR_GET(tagSummaryInfo_, Data::TagSummaryInfo) };
      inline Data& setTagSummaryInfo(const Data::TagSummaryInfo & tagSummaryInfo) { DARABONBA_PTR_SET_VALUE(tagSummaryInfo_, tagSummaryInfo) };
      inline Data& setTagSummaryInfo(Data::TagSummaryInfo && tagSummaryInfo) { DARABONBA_PTR_SET_RVALUE(tagSummaryInfo_, tagSummaryInfo) };


    protected:
      shared_ptr<string> annotationMissionId_ {};
      shared_ptr<Data::AsrSummaryInfo> asrSummaryInfo_ {};
      shared_ptr<Data::IntentSummaryInfo> intentSummaryInfo_ {};
      shared_ptr<string> message_ {};
      shared_ptr<bool> success_ {};
      shared_ptr<Data::TagSummaryInfo> tagSummaryInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAnnotationMissionSummaryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAnnotationMissionSummaryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAnnotationMissionSummaryResponseBody::Data) };
    inline GetAnnotationMissionSummaryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAnnotationMissionSummaryResponseBody::Data) };
    inline GetAnnotationMissionSummaryResponseBody& setData(const GetAnnotationMissionSummaryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAnnotationMissionSummaryResponseBody& setData(GetAnnotationMissionSummaryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAnnotationMissionSummaryResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAnnotationMissionSummaryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAnnotationMissionSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAnnotationMissionSummaryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetAnnotationMissionSummaryResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
