// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNCRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSYNCRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetSyncResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyncResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultCountId, resultCountId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyncResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultCountId, resultCountId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSyncResultResponseBody() = default ;
    GetSyncResultResponseBody(const GetSyncResultResponseBody &) = default ;
    GetSyncResultResponseBody(GetSyncResultResponseBody &&) = default ;
    GetSyncResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyncResultResponseBody() = default ;
    GetSyncResultResponseBody& operator=(const GetSyncResultResponseBody &) = default ;
    GetSyncResultResponseBody& operator=(GetSyncResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Agent, agent_);
        DARABONBA_PTR_TO_JSON(AsrResult, asrResult_);
        DARABONBA_PTR_TO_JSON(Comments, comments_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(HitResult, hitResult_);
        DARABONBA_PTR_TO_JSON(Recording, recording_);
        DARABONBA_PTR_TO_JSON(Resolver, resolver_);
        DARABONBA_PTR_TO_JSON(ReviewResult, reviewResult_);
        DARABONBA_PTR_TO_JSON(ReviewStatus, reviewStatus_);
        DARABONBA_PTR_TO_JSON(Reviewer, reviewer_);
        DARABONBA_PTR_TO_JSON(Score, score_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Agent, agent_);
        DARABONBA_PTR_FROM_JSON(AsrResult, asrResult_);
        DARABONBA_PTR_FROM_JSON(Comments, comments_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(HitResult, hitResult_);
        DARABONBA_PTR_FROM_JSON(Recording, recording_);
        DARABONBA_PTR_FROM_JSON(Resolver, resolver_);
        DARABONBA_PTR_FROM_JSON(ReviewResult, reviewResult_);
        DARABONBA_PTR_FROM_JSON(ReviewStatus, reviewStatus_);
        DARABONBA_PTR_FROM_JSON(Reviewer, reviewer_);
        DARABONBA_PTR_FROM_JSON(Score, score_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
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
      class Recording : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Recording& obj) { 
          DARABONBA_PTR_TO_JSON(Business, business_);
          DARABONBA_PTR_TO_JSON(CallId, callId_);
          DARABONBA_PTR_TO_JSON(CallTime, callTime_);
          DARABONBA_PTR_TO_JSON(CallType, callType_);
          DARABONBA_PTR_TO_JSON(Callee, callee_);
          DARABONBA_PTR_TO_JSON(Caller, caller_);
          DARABONBA_PTR_TO_JSON(DataSetName, dataSetName_);
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(DurationAudio, durationAudio_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PrimaryId, primaryId_);
          DARABONBA_PTR_TO_JSON(Remark1, remark1_);
          DARABONBA_PTR_TO_JSON(Remark2, remark2_);
          DARABONBA_PTR_TO_JSON(Remark3, remark3_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, Recording& obj) { 
          DARABONBA_PTR_FROM_JSON(Business, business_);
          DARABONBA_PTR_FROM_JSON(CallId, callId_);
          DARABONBA_PTR_FROM_JSON(CallTime, callTime_);
          DARABONBA_PTR_FROM_JSON(CallType, callType_);
          DARABONBA_PTR_FROM_JSON(Callee, callee_);
          DARABONBA_PTR_FROM_JSON(Caller, caller_);
          DARABONBA_PTR_FROM_JSON(DataSetName, dataSetName_);
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(DurationAudio, durationAudio_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PrimaryId, primaryId_);
          DARABONBA_PTR_FROM_JSON(Remark1, remark1_);
          DARABONBA_PTR_FROM_JSON(Remark2, remark2_);
          DARABONBA_PTR_FROM_JSON(Remark3, remark3_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
        };
        Recording() = default ;
        Recording(const Recording &) = default ;
        Recording(Recording &&) = default ;
        Recording(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Recording() = default ;
        Recording& operator=(const Recording &) = default ;
        Recording& operator=(Recording &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->business_ == nullptr
        && this->callId_ == nullptr && this->callTime_ == nullptr && this->callType_ == nullptr && this->callee_ == nullptr && this->caller_ == nullptr
        && this->dataSetName_ == nullptr && this->duration_ == nullptr && this->durationAudio_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->primaryId_ == nullptr && this->remark1_ == nullptr && this->remark2_ == nullptr && this->remark3_ == nullptr && this->url_ == nullptr; };
        // business Field Functions 
        bool hasBusiness() const { return this->business_ != nullptr;};
        void deleteBusiness() { this->business_ = nullptr;};
        inline string getBusiness() const { DARABONBA_PTR_GET_DEFAULT(business_, "") };
        inline Recording& setBusiness(string business) { DARABONBA_PTR_SET_VALUE(business_, business) };


        // callId Field Functions 
        bool hasCallId() const { return this->callId_ != nullptr;};
        void deleteCallId() { this->callId_ = nullptr;};
        inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
        inline Recording& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


        // callTime Field Functions 
        bool hasCallTime() const { return this->callTime_ != nullptr;};
        void deleteCallTime() { this->callTime_ = nullptr;};
        inline string getCallTime() const { DARABONBA_PTR_GET_DEFAULT(callTime_, "") };
        inline Recording& setCallTime(string callTime) { DARABONBA_PTR_SET_VALUE(callTime_, callTime) };


        // callType Field Functions 
        bool hasCallType() const { return this->callType_ != nullptr;};
        void deleteCallType() { this->callType_ = nullptr;};
        inline int32_t getCallType() const { DARABONBA_PTR_GET_DEFAULT(callType_, 0) };
        inline Recording& setCallType(int32_t callType) { DARABONBA_PTR_SET_VALUE(callType_, callType) };


        // callee Field Functions 
        bool hasCallee() const { return this->callee_ != nullptr;};
        void deleteCallee() { this->callee_ = nullptr;};
        inline string getCallee() const { DARABONBA_PTR_GET_DEFAULT(callee_, "") };
        inline Recording& setCallee(string callee) { DARABONBA_PTR_SET_VALUE(callee_, callee) };


        // caller Field Functions 
        bool hasCaller() const { return this->caller_ != nullptr;};
        void deleteCaller() { this->caller_ = nullptr;};
        inline string getCaller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
        inline Recording& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


        // dataSetName Field Functions 
        bool hasDataSetName() const { return this->dataSetName_ != nullptr;};
        void deleteDataSetName() { this->dataSetName_ = nullptr;};
        inline string getDataSetName() const { DARABONBA_PTR_GET_DEFAULT(dataSetName_, "") };
        inline Recording& setDataSetName(string dataSetName) { DARABONBA_PTR_SET_VALUE(dataSetName_, dataSetName) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
        inline Recording& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // durationAudio Field Functions 
        bool hasDurationAudio() const { return this->durationAudio_ != nullptr;};
        void deleteDurationAudio() { this->durationAudio_ = nullptr;};
        inline int64_t getDurationAudio() const { DARABONBA_PTR_GET_DEFAULT(durationAudio_, 0L) };
        inline Recording& setDurationAudio(int64_t durationAudio) { DARABONBA_PTR_SET_VALUE(durationAudio_, durationAudio) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Recording& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Recording& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // primaryId Field Functions 
        bool hasPrimaryId() const { return this->primaryId_ != nullptr;};
        void deletePrimaryId() { this->primaryId_ = nullptr;};
        inline string getPrimaryId() const { DARABONBA_PTR_GET_DEFAULT(primaryId_, "") };
        inline Recording& setPrimaryId(string primaryId) { DARABONBA_PTR_SET_VALUE(primaryId_, primaryId) };


        // remark1 Field Functions 
        bool hasRemark1() const { return this->remark1_ != nullptr;};
        void deleteRemark1() { this->remark1_ = nullptr;};
        inline string getRemark1() const { DARABONBA_PTR_GET_DEFAULT(remark1_, "") };
        inline Recording& setRemark1(string remark1) { DARABONBA_PTR_SET_VALUE(remark1_, remark1) };


        // remark2 Field Functions 
        bool hasRemark2() const { return this->remark2_ != nullptr;};
        void deleteRemark2() { this->remark2_ = nullptr;};
        inline string getRemark2() const { DARABONBA_PTR_GET_DEFAULT(remark2_, "") };
        inline Recording& setRemark2(string remark2) { DARABONBA_PTR_SET_VALUE(remark2_, remark2) };


        // remark3 Field Functions 
        bool hasRemark3() const { return this->remark3_ != nullptr;};
        void deleteRemark3() { this->remark3_ = nullptr;};
        inline string getRemark3() const { DARABONBA_PTR_GET_DEFAULT(remark3_, "") };
        inline Recording& setRemark3(string remark3) { DARABONBA_PTR_SET_VALUE(remark3_, remark3) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline Recording& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


      protected:
        shared_ptr<string> business_ {};
        shared_ptr<string> callId_ {};
        shared_ptr<string> callTime_ {};
        shared_ptr<int32_t> callType_ {};
        shared_ptr<string> callee_ {};
        shared_ptr<string> caller_ {};
        shared_ptr<string> dataSetName_ {};
        shared_ptr<int64_t> duration_ {};
        shared_ptr<int64_t> durationAudio_ {};
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> primaryId_ {};
        shared_ptr<string> remark1_ {};
        shared_ptr<string> remark2_ {};
        shared_ptr<string> remark3_ {};
        shared_ptr<string> url_ {};
      };

      class HitResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HitResult& obj) { 
          DARABONBA_PTR_TO_JSON(Hits, hits_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ReviewResult, reviewResult_);
          DARABONBA_PTR_TO_JSON(Rid, rid_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, HitResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Hits, hits_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ReviewResult, reviewResult_);
          DARABONBA_PTR_FROM_JSON(Rid, rid_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        HitResult() = default ;
        HitResult(const HitResult &) = default ;
        HitResult(HitResult &&) = default ;
        HitResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HitResult() = default ;
        HitResult& operator=(const HitResult &) = default ;
        HitResult& operator=(HitResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Hits : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Hits& obj) { 
            DARABONBA_PTR_TO_JSON(Cid, cid_);
            DARABONBA_PTR_TO_JSON(KeyWords, keyWords_);
            DARABONBA_PTR_TO_JSON(Phrase, phrase_);
          };
          friend void from_json(const Darabonba::Json& j, Hits& obj) { 
            DARABONBA_PTR_FROM_JSON(Cid, cid_);
            DARABONBA_PTR_FROM_JSON(KeyWords, keyWords_);
            DARABONBA_PTR_FROM_JSON(Phrase, phrase_);
          };
          Hits() = default ;
          Hits(const Hits &) = default ;
          Hits(Hits &&) = default ;
          Hits(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Hits() = default ;
          Hits& operator=(const Hits &) = default ;
          Hits& operator=(Hits &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Phrase : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Phrase& obj) { 
              DARABONBA_PTR_TO_JSON(Begin, begin_);
              DARABONBA_PTR_TO_JSON(EmotionValue, emotionValue_);
              DARABONBA_PTR_TO_JSON(End, end_);
              DARABONBA_PTR_TO_JSON(Role, role_);
              DARABONBA_PTR_TO_JSON(SilenceDuration, silenceDuration_);
              DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
              DARABONBA_PTR_TO_JSON(Words, words_);
            };
            friend void from_json(const Darabonba::Json& j, Phrase& obj) { 
              DARABONBA_PTR_FROM_JSON(Begin, begin_);
              DARABONBA_PTR_FROM_JSON(EmotionValue, emotionValue_);
              DARABONBA_PTR_FROM_JSON(End, end_);
              DARABONBA_PTR_FROM_JSON(Role, role_);
              DARABONBA_PTR_FROM_JSON(SilenceDuration, silenceDuration_);
              DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
              DARABONBA_PTR_FROM_JSON(Words, words_);
            };
            Phrase() = default ;
            Phrase(const Phrase &) = default ;
            Phrase(Phrase &&) = default ;
            Phrase(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Phrase() = default ;
            Phrase& operator=(const Phrase &) = default ;
            Phrase& operator=(Phrase &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->begin_ == nullptr
        && this->emotionValue_ == nullptr && this->end_ == nullptr && this->role_ == nullptr && this->silenceDuration_ == nullptr && this->speechRate_ == nullptr
        && this->words_ == nullptr; };
            // begin Field Functions 
            bool hasBegin() const { return this->begin_ != nullptr;};
            void deleteBegin() { this->begin_ = nullptr;};
            inline int64_t getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0L) };
            inline Phrase& setBegin(int64_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


            // emotionValue Field Functions 
            bool hasEmotionValue() const { return this->emotionValue_ != nullptr;};
            void deleteEmotionValue() { this->emotionValue_ = nullptr;};
            inline int32_t getEmotionValue() const { DARABONBA_PTR_GET_DEFAULT(emotionValue_, 0) };
            inline Phrase& setEmotionValue(int32_t emotionValue) { DARABONBA_PTR_SET_VALUE(emotionValue_, emotionValue) };


            // end Field Functions 
            bool hasEnd() const { return this->end_ != nullptr;};
            void deleteEnd() { this->end_ = nullptr;};
            inline int32_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
            inline Phrase& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


            // role Field Functions 
            bool hasRole() const { return this->role_ != nullptr;};
            void deleteRole() { this->role_ = nullptr;};
            inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
            inline Phrase& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


            // silenceDuration Field Functions 
            bool hasSilenceDuration() const { return this->silenceDuration_ != nullptr;};
            void deleteSilenceDuration() { this->silenceDuration_ = nullptr;};
            inline int32_t getSilenceDuration() const { DARABONBA_PTR_GET_DEFAULT(silenceDuration_, 0) };
            inline Phrase& setSilenceDuration(int32_t silenceDuration) { DARABONBA_PTR_SET_VALUE(silenceDuration_, silenceDuration) };


            // speechRate Field Functions 
            bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
            void deleteSpeechRate() { this->speechRate_ = nullptr;};
            inline int32_t getSpeechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0) };
            inline Phrase& setSpeechRate(int32_t speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


            // words Field Functions 
            bool hasWords() const { return this->words_ != nullptr;};
            void deleteWords() { this->words_ = nullptr;};
            inline string getWords() const { DARABONBA_PTR_GET_DEFAULT(words_, "") };
            inline Phrase& setWords(string words) { DARABONBA_PTR_SET_VALUE(words_, words) };


          protected:
            shared_ptr<int64_t> begin_ {};
            shared_ptr<int32_t> emotionValue_ {};
            shared_ptr<int32_t> end_ {};
            shared_ptr<string> role_ {};
            shared_ptr<int32_t> silenceDuration_ {};
            shared_ptr<int32_t> speechRate_ {};
            shared_ptr<string> words_ {};
          };

          class KeyWords : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const KeyWords& obj) { 
              DARABONBA_PTR_TO_JSON(Cid, cid_);
              DARABONBA_PTR_TO_JSON(From, from_);
              DARABONBA_PTR_TO_JSON(To, to_);
              DARABONBA_PTR_TO_JSON(Val, val_);
            };
            friend void from_json(const Darabonba::Json& j, KeyWords& obj) { 
              DARABONBA_PTR_FROM_JSON(Cid, cid_);
              DARABONBA_PTR_FROM_JSON(From, from_);
              DARABONBA_PTR_FROM_JSON(To, to_);
              DARABONBA_PTR_FROM_JSON(Val, val_);
            };
            KeyWords() = default ;
            KeyWords(const KeyWords &) = default ;
            KeyWords(KeyWords &&) = default ;
            KeyWords(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~KeyWords() = default ;
            KeyWords& operator=(const KeyWords &) = default ;
            KeyWords& operator=(KeyWords &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->cid_ == nullptr
        && this->from_ == nullptr && this->to_ == nullptr && this->val_ == nullptr; };
            // cid Field Functions 
            bool hasCid() const { return this->cid_ != nullptr;};
            void deleteCid() { this->cid_ = nullptr;};
            inline string getCid() const { DARABONBA_PTR_GET_DEFAULT(cid_, "") };
            inline KeyWords& setCid(string cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };


            // from Field Functions 
            bool hasFrom() const { return this->from_ != nullptr;};
            void deleteFrom() { this->from_ = nullptr;};
            inline int32_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
            inline KeyWords& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


            // to Field Functions 
            bool hasTo() const { return this->to_ != nullptr;};
            void deleteTo() { this->to_ = nullptr;};
            inline int32_t getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0) };
            inline KeyWords& setTo(int32_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


            // val Field Functions 
            bool hasVal() const { return this->val_ != nullptr;};
            void deleteVal() { this->val_ = nullptr;};
            inline string getVal() const { DARABONBA_PTR_GET_DEFAULT(val_, "") };
            inline KeyWords& setVal(string val) { DARABONBA_PTR_SET_VALUE(val_, val) };


          protected:
            shared_ptr<string> cid_ {};
            shared_ptr<int32_t> from_ {};
            shared_ptr<int32_t> to_ {};
            shared_ptr<string> val_ {};
          };

          virtual bool empty() const override { return this->cid_ == nullptr
        && this->keyWords_ == nullptr && this->phrase_ == nullptr; };
          // cid Field Functions 
          bool hasCid() const { return this->cid_ != nullptr;};
          void deleteCid() { this->cid_ = nullptr;};
          inline const vector<string> & getCid() const { DARABONBA_PTR_GET_CONST(cid_, vector<string>) };
          inline vector<string> getCid() { DARABONBA_PTR_GET(cid_, vector<string>) };
          inline Hits& setCid(const vector<string> & cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };
          inline Hits& setCid(vector<string> && cid) { DARABONBA_PTR_SET_RVALUE(cid_, cid) };


          // keyWords Field Functions 
          bool hasKeyWords() const { return this->keyWords_ != nullptr;};
          void deleteKeyWords() { this->keyWords_ = nullptr;};
          inline const vector<Hits::KeyWords> & getKeyWords() const { DARABONBA_PTR_GET_CONST(keyWords_, vector<Hits::KeyWords>) };
          inline vector<Hits::KeyWords> getKeyWords() { DARABONBA_PTR_GET(keyWords_, vector<Hits::KeyWords>) };
          inline Hits& setKeyWords(const vector<Hits::KeyWords> & keyWords) { DARABONBA_PTR_SET_VALUE(keyWords_, keyWords) };
          inline Hits& setKeyWords(vector<Hits::KeyWords> && keyWords) { DARABONBA_PTR_SET_RVALUE(keyWords_, keyWords) };


          // phrase Field Functions 
          bool hasPhrase() const { return this->phrase_ != nullptr;};
          void deletePhrase() { this->phrase_ = nullptr;};
          inline const Hits::Phrase & getPhrase() const { DARABONBA_PTR_GET_CONST(phrase_, Hits::Phrase) };
          inline Hits::Phrase getPhrase() { DARABONBA_PTR_GET(phrase_, Hits::Phrase) };
          inline Hits& setPhrase(const Hits::Phrase & phrase) { DARABONBA_PTR_SET_VALUE(phrase_, phrase) };
          inline Hits& setPhrase(Hits::Phrase && phrase) { DARABONBA_PTR_SET_RVALUE(phrase_, phrase) };


        protected:
          shared_ptr<vector<string>> cid_ {};
          shared_ptr<vector<Hits::KeyWords>> keyWords_ {};
          shared_ptr<Hits::Phrase> phrase_ {};
        };

        virtual bool empty() const override { return this->hits_ == nullptr
        && this->name_ == nullptr && this->reviewResult_ == nullptr && this->rid_ == nullptr && this->type_ == nullptr; };
        // hits Field Functions 
        bool hasHits() const { return this->hits_ != nullptr;};
        void deleteHits() { this->hits_ = nullptr;};
        inline const vector<HitResult::Hits> & getHits() const { DARABONBA_PTR_GET_CONST(hits_, vector<HitResult::Hits>) };
        inline vector<HitResult::Hits> getHits() { DARABONBA_PTR_GET(hits_, vector<HitResult::Hits>) };
        inline HitResult& setHits(const vector<HitResult::Hits> & hits) { DARABONBA_PTR_SET_VALUE(hits_, hits) };
        inline HitResult& setHits(vector<HitResult::Hits> && hits) { DARABONBA_PTR_SET_RVALUE(hits_, hits) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline HitResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // reviewResult Field Functions 
        bool hasReviewResult() const { return this->reviewResult_ != nullptr;};
        void deleteReviewResult() { this->reviewResult_ = nullptr;};
        inline int32_t getReviewResult() const { DARABONBA_PTR_GET_DEFAULT(reviewResult_, 0) };
        inline HitResult& setReviewResult(int32_t reviewResult) { DARABONBA_PTR_SET_VALUE(reviewResult_, reviewResult) };


        // rid Field Functions 
        bool hasRid() const { return this->rid_ != nullptr;};
        void deleteRid() { this->rid_ = nullptr;};
        inline string getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, "") };
        inline HitResult& setRid(string rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline HitResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<vector<HitResult::Hits>> hits_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int32_t> reviewResult_ {};
        shared_ptr<string> rid_ {};
        shared_ptr<string> type_ {};
      };

      class AsrResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AsrResult& obj) { 
          DARABONBA_PTR_TO_JSON(Begin, begin_);
          DARABONBA_PTR_TO_JSON(EmotionValue, emotionValue_);
          DARABONBA_PTR_TO_JSON(End, end_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(SilenceDuration, silenceDuration_);
          DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
          DARABONBA_PTR_TO_JSON(Words, words_);
        };
        friend void from_json(const Darabonba::Json& j, AsrResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Begin, begin_);
          DARABONBA_PTR_FROM_JSON(EmotionValue, emotionValue_);
          DARABONBA_PTR_FROM_JSON(End, end_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(SilenceDuration, silenceDuration_);
          DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
          DARABONBA_PTR_FROM_JSON(Words, words_);
        };
        AsrResult() = default ;
        AsrResult(const AsrResult &) = default ;
        AsrResult(AsrResult &&) = default ;
        AsrResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AsrResult() = default ;
        AsrResult& operator=(const AsrResult &) = default ;
        AsrResult& operator=(AsrResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->begin_ == nullptr
        && this->emotionValue_ == nullptr && this->end_ == nullptr && this->role_ == nullptr && this->silenceDuration_ == nullptr && this->speechRate_ == nullptr
        && this->words_ == nullptr; };
        // begin Field Functions 
        bool hasBegin() const { return this->begin_ != nullptr;};
        void deleteBegin() { this->begin_ = nullptr;};
        inline int64_t getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0L) };
        inline AsrResult& setBegin(int64_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


        // emotionValue Field Functions 
        bool hasEmotionValue() const { return this->emotionValue_ != nullptr;};
        void deleteEmotionValue() { this->emotionValue_ = nullptr;};
        inline int32_t getEmotionValue() const { DARABONBA_PTR_GET_DEFAULT(emotionValue_, 0) };
        inline AsrResult& setEmotionValue(int32_t emotionValue) { DARABONBA_PTR_SET_VALUE(emotionValue_, emotionValue) };


        // end Field Functions 
        bool hasEnd() const { return this->end_ != nullptr;};
        void deleteEnd() { this->end_ = nullptr;};
        inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
        inline AsrResult& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline AsrResult& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // silenceDuration Field Functions 
        bool hasSilenceDuration() const { return this->silenceDuration_ != nullptr;};
        void deleteSilenceDuration() { this->silenceDuration_ = nullptr;};
        inline int32_t getSilenceDuration() const { DARABONBA_PTR_GET_DEFAULT(silenceDuration_, 0) };
        inline AsrResult& setSilenceDuration(int32_t silenceDuration) { DARABONBA_PTR_SET_VALUE(silenceDuration_, silenceDuration) };


        // speechRate Field Functions 
        bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
        void deleteSpeechRate() { this->speechRate_ = nullptr;};
        inline int32_t getSpeechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0) };
        inline AsrResult& setSpeechRate(int32_t speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


        // words Field Functions 
        bool hasWords() const { return this->words_ != nullptr;};
        void deleteWords() { this->words_ = nullptr;};
        inline string getWords() const { DARABONBA_PTR_GET_DEFAULT(words_, "") };
        inline AsrResult& setWords(string words) { DARABONBA_PTR_SET_VALUE(words_, words) };


      protected:
        shared_ptr<int64_t> begin_ {};
        shared_ptr<int32_t> emotionValue_ {};
        shared_ptr<int64_t> end_ {};
        shared_ptr<string> role_ {};
        shared_ptr<int32_t> silenceDuration_ {};
        shared_ptr<int32_t> speechRate_ {};
        shared_ptr<string> words_ {};
      };

      class Agent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Agent& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(SkillGroup, skillGroup_);
        };
        friend void from_json(const Darabonba::Json& j, Agent& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(SkillGroup, skillGroup_);
        };
        Agent() = default ;
        Agent(const Agent &) = default ;
        Agent(Agent &&) = default ;
        Agent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Agent() = default ;
        Agent& operator=(const Agent &) = default ;
        Agent& operator=(Agent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->skillGroup_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Agent& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Agent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // skillGroup Field Functions 
        bool hasSkillGroup() const { return this->skillGroup_ != nullptr;};
        void deleteSkillGroup() { this->skillGroup_ = nullptr;};
        inline string getSkillGroup() const { DARABONBA_PTR_GET_DEFAULT(skillGroup_, "") };
        inline Agent& setSkillGroup(string skillGroup) { DARABONBA_PTR_SET_VALUE(skillGroup_, skillGroup) };


      protected:
        shared_ptr<string> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> skillGroup_ {};
      };

      virtual bool empty() const override { return this->agent_ == nullptr
        && this->asrResult_ == nullptr && this->comments_ == nullptr && this->createTime_ == nullptr && this->errorMessage_ == nullptr && this->hitResult_ == nullptr
        && this->recording_ == nullptr && this->resolver_ == nullptr && this->reviewResult_ == nullptr && this->reviewStatus_ == nullptr && this->reviewer_ == nullptr
        && this->score_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr; };
      // agent Field Functions 
      bool hasAgent() const { return this->agent_ != nullptr;};
      void deleteAgent() { this->agent_ = nullptr;};
      inline const Data::Agent & getAgent() const { DARABONBA_PTR_GET_CONST(agent_, Data::Agent) };
      inline Data::Agent getAgent() { DARABONBA_PTR_GET(agent_, Data::Agent) };
      inline Data& setAgent(const Data::Agent & agent) { DARABONBA_PTR_SET_VALUE(agent_, agent) };
      inline Data& setAgent(Data::Agent && agent) { DARABONBA_PTR_SET_RVALUE(agent_, agent) };


      // asrResult Field Functions 
      bool hasAsrResult() const { return this->asrResult_ != nullptr;};
      void deleteAsrResult() { this->asrResult_ = nullptr;};
      inline const vector<Data::AsrResult> & getAsrResult() const { DARABONBA_PTR_GET_CONST(asrResult_, vector<Data::AsrResult>) };
      inline vector<Data::AsrResult> getAsrResult() { DARABONBA_PTR_GET(asrResult_, vector<Data::AsrResult>) };
      inline Data& setAsrResult(const vector<Data::AsrResult> & asrResult) { DARABONBA_PTR_SET_VALUE(asrResult_, asrResult) };
      inline Data& setAsrResult(vector<Data::AsrResult> && asrResult) { DARABONBA_PTR_SET_RVALUE(asrResult_, asrResult) };


      // comments Field Functions 
      bool hasComments() const { return this->comments_ != nullptr;};
      void deleteComments() { this->comments_ = nullptr;};
      inline string getComments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
      inline Data& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // hitResult Field Functions 
      bool hasHitResult() const { return this->hitResult_ != nullptr;};
      void deleteHitResult() { this->hitResult_ = nullptr;};
      inline const vector<Data::HitResult> & getHitResult() const { DARABONBA_PTR_GET_CONST(hitResult_, vector<Data::HitResult>) };
      inline vector<Data::HitResult> getHitResult() { DARABONBA_PTR_GET(hitResult_, vector<Data::HitResult>) };
      inline Data& setHitResult(const vector<Data::HitResult> & hitResult) { DARABONBA_PTR_SET_VALUE(hitResult_, hitResult) };
      inline Data& setHitResult(vector<Data::HitResult> && hitResult) { DARABONBA_PTR_SET_RVALUE(hitResult_, hitResult) };


      // recording Field Functions 
      bool hasRecording() const { return this->recording_ != nullptr;};
      void deleteRecording() { this->recording_ = nullptr;};
      inline const Data::Recording & getRecording() const { DARABONBA_PTR_GET_CONST(recording_, Data::Recording) };
      inline Data::Recording getRecording() { DARABONBA_PTR_GET(recording_, Data::Recording) };
      inline Data& setRecording(const Data::Recording & recording) { DARABONBA_PTR_SET_VALUE(recording_, recording) };
      inline Data& setRecording(Data::Recording && recording) { DARABONBA_PTR_SET_RVALUE(recording_, recording) };


      // resolver Field Functions 
      bool hasResolver() const { return this->resolver_ != nullptr;};
      void deleteResolver() { this->resolver_ = nullptr;};
      inline string getResolver() const { DARABONBA_PTR_GET_DEFAULT(resolver_, "") };
      inline Data& setResolver(string resolver) { DARABONBA_PTR_SET_VALUE(resolver_, resolver) };


      // reviewResult Field Functions 
      bool hasReviewResult() const { return this->reviewResult_ != nullptr;};
      void deleteReviewResult() { this->reviewResult_ = nullptr;};
      inline int32_t getReviewResult() const { DARABONBA_PTR_GET_DEFAULT(reviewResult_, 0) };
      inline Data& setReviewResult(int32_t reviewResult) { DARABONBA_PTR_SET_VALUE(reviewResult_, reviewResult) };


      // reviewStatus Field Functions 
      bool hasReviewStatus() const { return this->reviewStatus_ != nullptr;};
      void deleteReviewStatus() { this->reviewStatus_ = nullptr;};
      inline int32_t getReviewStatus() const { DARABONBA_PTR_GET_DEFAULT(reviewStatus_, 0) };
      inline Data& setReviewStatus(int32_t reviewStatus) { DARABONBA_PTR_SET_VALUE(reviewStatus_, reviewStatus) };


      // reviewer Field Functions 
      bool hasReviewer() const { return this->reviewer_ != nullptr;};
      void deleteReviewer() { this->reviewer_ = nullptr;};
      inline string getReviewer() const { DARABONBA_PTR_GET_DEFAULT(reviewer_, "") };
      inline Data& setReviewer(string reviewer) { DARABONBA_PTR_SET_VALUE(reviewer_, reviewer) };


      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
      inline Data& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline Data& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    protected:
      shared_ptr<Data::Agent> agent_ {};
      shared_ptr<vector<Data::AsrResult>> asrResult_ {};
      shared_ptr<string> comments_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<vector<Data::HitResult>> hitResult_ {};
      shared_ptr<Data::Recording> recording_ {};
      shared_ptr<string> resolver_ {};
      shared_ptr<int32_t> reviewResult_ {};
      shared_ptr<int32_t> reviewStatus_ {};
      shared_ptr<string> reviewer_ {};
      shared_ptr<int32_t> score_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->resultCountId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSyncResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetSyncResultResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetSyncResultResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetSyncResultResponseBody::Data>) };
    inline vector<GetSyncResultResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetSyncResultResponseBody::Data>) };
    inline GetSyncResultResponseBody& setData(const vector<GetSyncResultResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSyncResultResponseBody& setData(vector<GetSyncResultResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSyncResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetSyncResultResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetSyncResultResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSyncResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultCountId Field Functions 
    bool hasResultCountId() const { return this->resultCountId_ != nullptr;};
    void deleteResultCountId() { this->resultCountId_ = nullptr;};
    inline string getResultCountId() const { DARABONBA_PTR_GET_DEFAULT(resultCountId_, "") };
    inline GetSyncResultResponseBody& setResultCountId(string resultCountId) { DARABONBA_PTR_SET_VALUE(resultCountId_, resultCountId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSyncResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> count_ {};
    shared_ptr<vector<GetSyncResultResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultCountId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
