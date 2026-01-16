// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDATASYNCFORLLMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDATASYNCFORLLMRESPONSEBODY_HPP_
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
  class UploadDataSyncForLLMResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDataSyncForLLMResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDataSyncForLLMResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UploadDataSyncForLLMResponseBody() = default ;
    UploadDataSyncForLLMResponseBody(const UploadDataSyncForLLMResponseBody &) = default ;
    UploadDataSyncForLLMResponseBody(UploadDataSyncForLLMResponseBody &&) = default ;
    UploadDataSyncForLLMResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDataSyncForLLMResponseBody() = default ;
    UploadDataSyncForLLMResponseBody& operator=(const UploadDataSyncForLLMResponseBody &) = default ;
    UploadDataSyncForLLMResponseBody& operator=(UploadDataSyncForLLMResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ResultInfo, resultInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ResultInfo, resultInfo_);
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
      class ResultInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResultInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Rules, rules_);
          DARABONBA_PTR_TO_JSON(Score, score_);
        };
        friend void from_json(const Darabonba::Json& j, ResultInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Rules, rules_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
        };
        ResultInfo() = default ;
        ResultInfo(const ResultInfo &) = default ;
        ResultInfo(ResultInfo &&) = default ;
        ResultInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResultInfo() = default ;
        ResultInfo& operator=(const ResultInfo &) = default ;
        ResultInfo& operator=(ResultInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Rules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Rules& obj) { 
            DARABONBA_PTR_TO_JSON(RuleHitInfo, ruleHitInfo_);
          };
          friend void from_json(const Darabonba::Json& j, Rules& obj) { 
            DARABONBA_PTR_FROM_JSON(RuleHitInfo, ruleHitInfo_);
          };
          Rules() = default ;
          Rules(const Rules &) = default ;
          Rules(Rules &&) = default ;
          Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Rules() = default ;
          Rules& operator=(const Rules &) = default ;
          Rules& operator=(Rules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class RuleHitInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RuleHitInfo& obj) { 
              DARABONBA_PTR_TO_JSON(ConditionInfo, conditionInfo_);
              DARABONBA_PTR_TO_JSON(Hit, hit_);
              DARABONBA_PTR_TO_JSON(Rid, rid_);
              DARABONBA_PTR_TO_JSON(Tid, tid_);
            };
            friend void from_json(const Darabonba::Json& j, RuleHitInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(ConditionInfo, conditionInfo_);
              DARABONBA_PTR_FROM_JSON(Hit, hit_);
              DARABONBA_PTR_FROM_JSON(Rid, rid_);
              DARABONBA_PTR_FROM_JSON(Tid, tid_);
            };
            RuleHitInfo() = default ;
            RuleHitInfo(const RuleHitInfo &) = default ;
            RuleHitInfo(RuleHitInfo &&) = default ;
            RuleHitInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RuleHitInfo() = default ;
            RuleHitInfo& operator=(const RuleHitInfo &) = default ;
            RuleHitInfo& operator=(RuleHitInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Hit : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Hit& obj) { 
                DARABONBA_PTR_TO_JSON(ConditionHitInfo, conditionHitInfo_);
              };
              friend void from_json(const Darabonba::Json& j, Hit& obj) { 
                DARABONBA_PTR_FROM_JSON(ConditionHitInfo, conditionHitInfo_);
              };
              Hit() = default ;
              Hit(const Hit &) = default ;
              Hit(Hit &&) = default ;
              Hit(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Hit() = default ;
              Hit& operator=(const Hit &) = default ;
              Hit& operator=(Hit &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class ConditionHitInfo : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const ConditionHitInfo& obj) { 
                  DARABONBA_PTR_TO_JSON(HitCids, hitCids_);
                  DARABONBA_PTR_TO_JSON(HitKeyWords, hitKeyWords_);
                  DARABONBA_PTR_TO_JSON(Phrase, phrase_);
                };
                friend void from_json(const Darabonba::Json& j, ConditionHitInfo& obj) { 
                  DARABONBA_PTR_FROM_JSON(HitCids, hitCids_);
                  DARABONBA_PTR_FROM_JSON(HitKeyWords, hitKeyWords_);
                  DARABONBA_PTR_FROM_JSON(Phrase, phrase_);
                };
                ConditionHitInfo() = default ;
                ConditionHitInfo(const ConditionHitInfo &) = default ;
                ConditionHitInfo(ConditionHitInfo &&) = default ;
                ConditionHitInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~ConditionHitInfo() = default ;
                ConditionHitInfo& operator=(const ConditionHitInfo &) = default ;
                ConditionHitInfo& operator=(ConditionHitInfo &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class Phrase : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const Phrase& obj) { 
                    DARABONBA_PTR_TO_JSON(Begin, begin_);
                    DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
                    DARABONBA_PTR_TO_JSON(End, end_);
                    DARABONBA_PTR_TO_JSON(Identity, identity_);
                    DARABONBA_PTR_TO_JSON(Role, role_);
                    DARABONBA_PTR_TO_JSON(Words, words_);
                  };
                  friend void from_json(const Darabonba::Json& j, Phrase& obj) { 
                    DARABONBA_PTR_FROM_JSON(Begin, begin_);
                    DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
                    DARABONBA_PTR_FROM_JSON(End, end_);
                    DARABONBA_PTR_FROM_JSON(Identity, identity_);
                    DARABONBA_PTR_FROM_JSON(Role, role_);
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
        && this->beginTime_ == nullptr && this->end_ == nullptr && this->identity_ == nullptr && this->role_ == nullptr && this->words_ == nullptr; };
                  // begin Field Functions 
                  bool hasBegin() const { return this->begin_ != nullptr;};
                  void deleteBegin() { this->begin_ = nullptr;};
                  inline int64_t getBegin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0L) };
                  inline Phrase& setBegin(int64_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


                  // beginTime Field Functions 
                  bool hasBeginTime() const { return this->beginTime_ != nullptr;};
                  void deleteBeginTime() { this->beginTime_ = nullptr;};
                  inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
                  inline Phrase& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


                  // end Field Functions 
                  bool hasEnd() const { return this->end_ != nullptr;};
                  void deleteEnd() { this->end_ = nullptr;};
                  inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
                  inline Phrase& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


                  // identity Field Functions 
                  bool hasIdentity() const { return this->identity_ != nullptr;};
                  void deleteIdentity() { this->identity_ = nullptr;};
                  inline string getIdentity() const { DARABONBA_PTR_GET_DEFAULT(identity_, "") };
                  inline Phrase& setIdentity(string identity) { DARABONBA_PTR_SET_VALUE(identity_, identity) };


                  // role Field Functions 
                  bool hasRole() const { return this->role_ != nullptr;};
                  void deleteRole() { this->role_ = nullptr;};
                  inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
                  inline Phrase& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


                  // words Field Functions 
                  bool hasWords() const { return this->words_ != nullptr;};
                  void deleteWords() { this->words_ = nullptr;};
                  inline string getWords() const { DARABONBA_PTR_GET_DEFAULT(words_, "") };
                  inline Phrase& setWords(string words) { DARABONBA_PTR_SET_VALUE(words_, words) };


                protected:
                  shared_ptr<int64_t> begin_ {};
                  shared_ptr<string> beginTime_ {};
                  shared_ptr<int64_t> end_ {};
                  shared_ptr<string> identity_ {};
                  shared_ptr<string> role_ {};
                  shared_ptr<string> words_ {};
                };

                class HitKeyWords : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const HitKeyWords& obj) { 
                    DARABONBA_PTR_TO_JSON(HitKeyWord, hitKeyWord_);
                  };
                  friend void from_json(const Darabonba::Json& j, HitKeyWords& obj) { 
                    DARABONBA_PTR_FROM_JSON(HitKeyWord, hitKeyWord_);
                  };
                  HitKeyWords() = default ;
                  HitKeyWords(const HitKeyWords &) = default ;
                  HitKeyWords(HitKeyWords &&) = default ;
                  HitKeyWords(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~HitKeyWords() = default ;
                  HitKeyWords& operator=(const HitKeyWords &) = default ;
                  HitKeyWords& operator=(HitKeyWords &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  class HitKeyWord : public Darabonba::Model {
                  public:
                    friend void to_json(Darabonba::Json& j, const HitKeyWord& obj) { 
                      DARABONBA_PTR_TO_JSON(From, from_);
                      DARABONBA_PTR_TO_JSON(Pid, pid_);
                      DARABONBA_PTR_TO_JSON(Tid, tid_);
                      DARABONBA_PTR_TO_JSON(To, to_);
                      DARABONBA_PTR_TO_JSON(Val, val_);
                    };
                    friend void from_json(const Darabonba::Json& j, HitKeyWord& obj) { 
                      DARABONBA_PTR_FROM_JSON(From, from_);
                      DARABONBA_PTR_FROM_JSON(Pid, pid_);
                      DARABONBA_PTR_FROM_JSON(Tid, tid_);
                      DARABONBA_PTR_FROM_JSON(To, to_);
                      DARABONBA_PTR_FROM_JSON(Val, val_);
                    };
                    HitKeyWord() = default ;
                    HitKeyWord(const HitKeyWord &) = default ;
                    HitKeyWord(HitKeyWord &&) = default ;
                    HitKeyWord(const Darabonba::Json & obj) { from_json(obj, *this); };
                    virtual ~HitKeyWord() = default ;
                    HitKeyWord& operator=(const HitKeyWord &) = default ;
                    HitKeyWord& operator=(HitKeyWord &&) = default ;
                    virtual void validate() const override {
                    };
                    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                    virtual bool empty() const override { return this->from_ == nullptr
        && this->pid_ == nullptr && this->tid_ == nullptr && this->to_ == nullptr && this->val_ == nullptr; };
                    // from Field Functions 
                    bool hasFrom() const { return this->from_ != nullptr;};
                    void deleteFrom() { this->from_ = nullptr;};
                    inline int32_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
                    inline HitKeyWord& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


                    // pid Field Functions 
                    bool hasPid() const { return this->pid_ != nullptr;};
                    void deletePid() { this->pid_ = nullptr;};
                    inline int32_t getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, 0) };
                    inline HitKeyWord& setPid(int32_t pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


                    // tid Field Functions 
                    bool hasTid() const { return this->tid_ != nullptr;};
                    void deleteTid() { this->tid_ = nullptr;};
                    inline string getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, "") };
                    inline HitKeyWord& setTid(string tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


                    // to Field Functions 
                    bool hasTo() const { return this->to_ != nullptr;};
                    void deleteTo() { this->to_ = nullptr;};
                    inline int32_t getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0) };
                    inline HitKeyWord& setTo(int32_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


                    // val Field Functions 
                    bool hasVal() const { return this->val_ != nullptr;};
                    void deleteVal() { this->val_ = nullptr;};
                    inline string getVal() const { DARABONBA_PTR_GET_DEFAULT(val_, "") };
                    inline HitKeyWord& setVal(string val) { DARABONBA_PTR_SET_VALUE(val_, val) };


                  protected:
                    shared_ptr<int32_t> from_ {};
                    shared_ptr<int32_t> pid_ {};
                    shared_ptr<string> tid_ {};
                    shared_ptr<int32_t> to_ {};
                    shared_ptr<string> val_ {};
                  };

                  virtual bool empty() const override { return this->hitKeyWord_ == nullptr; };
                  // hitKeyWord Field Functions 
                  bool hasHitKeyWord() const { return this->hitKeyWord_ != nullptr;};
                  void deleteHitKeyWord() { this->hitKeyWord_ = nullptr;};
                  inline const vector<HitKeyWords::HitKeyWord> & getHitKeyWord() const { DARABONBA_PTR_GET_CONST(hitKeyWord_, vector<HitKeyWords::HitKeyWord>) };
                  inline vector<HitKeyWords::HitKeyWord> getHitKeyWord() { DARABONBA_PTR_GET(hitKeyWord_, vector<HitKeyWords::HitKeyWord>) };
                  inline HitKeyWords& setHitKeyWord(const vector<HitKeyWords::HitKeyWord> & hitKeyWord) { DARABONBA_PTR_SET_VALUE(hitKeyWord_, hitKeyWord) };
                  inline HitKeyWords& setHitKeyWord(vector<HitKeyWords::HitKeyWord> && hitKeyWord) { DARABONBA_PTR_SET_RVALUE(hitKeyWord_, hitKeyWord) };


                protected:
                  shared_ptr<vector<HitKeyWords::HitKeyWord>> hitKeyWord_ {};
                };

                class HitCids : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const HitCids& obj) { 
                    DARABONBA_PTR_TO_JSON(CidItem, cidItem_);
                  };
                  friend void from_json(const Darabonba::Json& j, HitCids& obj) { 
                    DARABONBA_PTR_FROM_JSON(CidItem, cidItem_);
                  };
                  HitCids() = default ;
                  HitCids(const HitCids &) = default ;
                  HitCids(HitCids &&) = default ;
                  HitCids(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~HitCids() = default ;
                  HitCids& operator=(const HitCids &) = default ;
                  HitCids& operator=(HitCids &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->cidItem_ == nullptr; };
                  // cidItem Field Functions 
                  bool hasCidItem() const { return this->cidItem_ != nullptr;};
                  void deleteCidItem() { this->cidItem_ = nullptr;};
                  inline const vector<string> & getCidItem() const { DARABONBA_PTR_GET_CONST(cidItem_, vector<string>) };
                  inline vector<string> getCidItem() { DARABONBA_PTR_GET(cidItem_, vector<string>) };
                  inline HitCids& setCidItem(const vector<string> & cidItem) { DARABONBA_PTR_SET_VALUE(cidItem_, cidItem) };
                  inline HitCids& setCidItem(vector<string> && cidItem) { DARABONBA_PTR_SET_RVALUE(cidItem_, cidItem) };


                protected:
                  shared_ptr<vector<string>> cidItem_ {};
                };

                virtual bool empty() const override { return this->hitCids_ == nullptr
        && this->hitKeyWords_ == nullptr && this->phrase_ == nullptr; };
                // hitCids Field Functions 
                bool hasHitCids() const { return this->hitCids_ != nullptr;};
                void deleteHitCids() { this->hitCids_ = nullptr;};
                inline const ConditionHitInfo::HitCids & getHitCids() const { DARABONBA_PTR_GET_CONST(hitCids_, ConditionHitInfo::HitCids) };
                inline ConditionHitInfo::HitCids getHitCids() { DARABONBA_PTR_GET(hitCids_, ConditionHitInfo::HitCids) };
                inline ConditionHitInfo& setHitCids(const ConditionHitInfo::HitCids & hitCids) { DARABONBA_PTR_SET_VALUE(hitCids_, hitCids) };
                inline ConditionHitInfo& setHitCids(ConditionHitInfo::HitCids && hitCids) { DARABONBA_PTR_SET_RVALUE(hitCids_, hitCids) };


                // hitKeyWords Field Functions 
                bool hasHitKeyWords() const { return this->hitKeyWords_ != nullptr;};
                void deleteHitKeyWords() { this->hitKeyWords_ = nullptr;};
                inline const ConditionHitInfo::HitKeyWords & getHitKeyWords() const { DARABONBA_PTR_GET_CONST(hitKeyWords_, ConditionHitInfo::HitKeyWords) };
                inline ConditionHitInfo::HitKeyWords getHitKeyWords() { DARABONBA_PTR_GET(hitKeyWords_, ConditionHitInfo::HitKeyWords) };
                inline ConditionHitInfo& setHitKeyWords(const ConditionHitInfo::HitKeyWords & hitKeyWords) { DARABONBA_PTR_SET_VALUE(hitKeyWords_, hitKeyWords) };
                inline ConditionHitInfo& setHitKeyWords(ConditionHitInfo::HitKeyWords && hitKeyWords) { DARABONBA_PTR_SET_RVALUE(hitKeyWords_, hitKeyWords) };


                // phrase Field Functions 
                bool hasPhrase() const { return this->phrase_ != nullptr;};
                void deletePhrase() { this->phrase_ = nullptr;};
                inline const ConditionHitInfo::Phrase & getPhrase() const { DARABONBA_PTR_GET_CONST(phrase_, ConditionHitInfo::Phrase) };
                inline ConditionHitInfo::Phrase getPhrase() { DARABONBA_PTR_GET(phrase_, ConditionHitInfo::Phrase) };
                inline ConditionHitInfo& setPhrase(const ConditionHitInfo::Phrase & phrase) { DARABONBA_PTR_SET_VALUE(phrase_, phrase) };
                inline ConditionHitInfo& setPhrase(ConditionHitInfo::Phrase && phrase) { DARABONBA_PTR_SET_RVALUE(phrase_, phrase) };


              protected:
                shared_ptr<ConditionHitInfo::HitCids> hitCids_ {};
                shared_ptr<ConditionHitInfo::HitKeyWords> hitKeyWords_ {};
                shared_ptr<ConditionHitInfo::Phrase> phrase_ {};
              };

              virtual bool empty() const override { return this->conditionHitInfo_ == nullptr; };
              // conditionHitInfo Field Functions 
              bool hasConditionHitInfo() const { return this->conditionHitInfo_ != nullptr;};
              void deleteConditionHitInfo() { this->conditionHitInfo_ = nullptr;};
              inline const vector<Hit::ConditionHitInfo> & getConditionHitInfo() const { DARABONBA_PTR_GET_CONST(conditionHitInfo_, vector<Hit::ConditionHitInfo>) };
              inline vector<Hit::ConditionHitInfo> getConditionHitInfo() { DARABONBA_PTR_GET(conditionHitInfo_, vector<Hit::ConditionHitInfo>) };
              inline Hit& setConditionHitInfo(const vector<Hit::ConditionHitInfo> & conditionHitInfo) { DARABONBA_PTR_SET_VALUE(conditionHitInfo_, conditionHitInfo) };
              inline Hit& setConditionHitInfo(vector<Hit::ConditionHitInfo> && conditionHitInfo) { DARABONBA_PTR_SET_RVALUE(conditionHitInfo_, conditionHitInfo) };


            protected:
              shared_ptr<vector<Hit::ConditionHitInfo>> conditionHitInfo_ {};
            };

            class ConditionInfo : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ConditionInfo& obj) { 
                DARABONBA_PTR_TO_JSON(ConditionBasicInfo, conditionBasicInfo_);
              };
              friend void from_json(const Darabonba::Json& j, ConditionInfo& obj) { 
                DARABONBA_PTR_FROM_JSON(ConditionBasicInfo, conditionBasicInfo_);
              };
              ConditionInfo() = default ;
              ConditionInfo(const ConditionInfo &) = default ;
              ConditionInfo(ConditionInfo &&) = default ;
              ConditionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ConditionInfo() = default ;
              ConditionInfo& operator=(const ConditionInfo &) = default ;
              ConditionInfo& operator=(ConditionInfo &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class ConditionBasicInfo : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const ConditionBasicInfo& obj) { 
                  DARABONBA_PTR_TO_JSON(ConditionInfoCid, conditionInfoCid_);
                };
                friend void from_json(const Darabonba::Json& j, ConditionBasicInfo& obj) { 
                  DARABONBA_PTR_FROM_JSON(ConditionInfoCid, conditionInfoCid_);
                };
                ConditionBasicInfo() = default ;
                ConditionBasicInfo(const ConditionBasicInfo &) = default ;
                ConditionBasicInfo(ConditionBasicInfo &&) = default ;
                ConditionBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~ConditionBasicInfo() = default ;
                ConditionBasicInfo& operator=(const ConditionBasicInfo &) = default ;
                ConditionBasicInfo& operator=(ConditionBasicInfo &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->conditionInfoCid_ == nullptr; };
                // conditionInfoCid Field Functions 
                bool hasConditionInfoCid() const { return this->conditionInfoCid_ != nullptr;};
                void deleteConditionInfoCid() { this->conditionInfoCid_ = nullptr;};
                inline string getConditionInfoCid() const { DARABONBA_PTR_GET_DEFAULT(conditionInfoCid_, "") };
                inline ConditionBasicInfo& setConditionInfoCid(string conditionInfoCid) { DARABONBA_PTR_SET_VALUE(conditionInfoCid_, conditionInfoCid) };


              protected:
                shared_ptr<string> conditionInfoCid_ {};
              };

              virtual bool empty() const override { return this->conditionBasicInfo_ == nullptr; };
              // conditionBasicInfo Field Functions 
              bool hasConditionBasicInfo() const { return this->conditionBasicInfo_ != nullptr;};
              void deleteConditionBasicInfo() { this->conditionBasicInfo_ = nullptr;};
              inline const vector<ConditionInfo::ConditionBasicInfo> & getConditionBasicInfo() const { DARABONBA_PTR_GET_CONST(conditionBasicInfo_, vector<ConditionInfo::ConditionBasicInfo>) };
              inline vector<ConditionInfo::ConditionBasicInfo> getConditionBasicInfo() { DARABONBA_PTR_GET(conditionBasicInfo_, vector<ConditionInfo::ConditionBasicInfo>) };
              inline ConditionInfo& setConditionBasicInfo(const vector<ConditionInfo::ConditionBasicInfo> & conditionBasicInfo) { DARABONBA_PTR_SET_VALUE(conditionBasicInfo_, conditionBasicInfo) };
              inline ConditionInfo& setConditionBasicInfo(vector<ConditionInfo::ConditionBasicInfo> && conditionBasicInfo) { DARABONBA_PTR_SET_RVALUE(conditionBasicInfo_, conditionBasicInfo) };


            protected:
              shared_ptr<vector<ConditionInfo::ConditionBasicInfo>> conditionBasicInfo_ {};
            };

            virtual bool empty() const override { return this->conditionInfo_ == nullptr
        && this->hit_ == nullptr && this->rid_ == nullptr && this->tid_ == nullptr; };
            // conditionInfo Field Functions 
            bool hasConditionInfo() const { return this->conditionInfo_ != nullptr;};
            void deleteConditionInfo() { this->conditionInfo_ = nullptr;};
            inline const RuleHitInfo::ConditionInfo & getConditionInfo() const { DARABONBA_PTR_GET_CONST(conditionInfo_, RuleHitInfo::ConditionInfo) };
            inline RuleHitInfo::ConditionInfo getConditionInfo() { DARABONBA_PTR_GET(conditionInfo_, RuleHitInfo::ConditionInfo) };
            inline RuleHitInfo& setConditionInfo(const RuleHitInfo::ConditionInfo & conditionInfo) { DARABONBA_PTR_SET_VALUE(conditionInfo_, conditionInfo) };
            inline RuleHitInfo& setConditionInfo(RuleHitInfo::ConditionInfo && conditionInfo) { DARABONBA_PTR_SET_RVALUE(conditionInfo_, conditionInfo) };


            // hit Field Functions 
            bool hasHit() const { return this->hit_ != nullptr;};
            void deleteHit() { this->hit_ = nullptr;};
            inline const RuleHitInfo::Hit & getHit() const { DARABONBA_PTR_GET_CONST(hit_, RuleHitInfo::Hit) };
            inline RuleHitInfo::Hit getHit() { DARABONBA_PTR_GET(hit_, RuleHitInfo::Hit) };
            inline RuleHitInfo& setHit(const RuleHitInfo::Hit & hit) { DARABONBA_PTR_SET_VALUE(hit_, hit) };
            inline RuleHitInfo& setHit(RuleHitInfo::Hit && hit) { DARABONBA_PTR_SET_RVALUE(hit_, hit) };


            // rid Field Functions 
            bool hasRid() const { return this->rid_ != nullptr;};
            void deleteRid() { this->rid_ = nullptr;};
            inline string getRid() const { DARABONBA_PTR_GET_DEFAULT(rid_, "") };
            inline RuleHitInfo& setRid(string rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


            // tid Field Functions 
            bool hasTid() const { return this->tid_ != nullptr;};
            void deleteTid() { this->tid_ = nullptr;};
            inline string getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, "") };
            inline RuleHitInfo& setTid(string tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


          protected:
            shared_ptr<RuleHitInfo::ConditionInfo> conditionInfo_ {};
            shared_ptr<RuleHitInfo::Hit> hit_ {};
            shared_ptr<string> rid_ {};
            shared_ptr<string> tid_ {};
          };

          virtual bool empty() const override { return this->ruleHitInfo_ == nullptr; };
          // ruleHitInfo Field Functions 
          bool hasRuleHitInfo() const { return this->ruleHitInfo_ != nullptr;};
          void deleteRuleHitInfo() { this->ruleHitInfo_ = nullptr;};
          inline const vector<Rules::RuleHitInfo> & getRuleHitInfo() const { DARABONBA_PTR_GET_CONST(ruleHitInfo_, vector<Rules::RuleHitInfo>) };
          inline vector<Rules::RuleHitInfo> getRuleHitInfo() { DARABONBA_PTR_GET(ruleHitInfo_, vector<Rules::RuleHitInfo>) };
          inline Rules& setRuleHitInfo(const vector<Rules::RuleHitInfo> & ruleHitInfo) { DARABONBA_PTR_SET_VALUE(ruleHitInfo_, ruleHitInfo) };
          inline Rules& setRuleHitInfo(vector<Rules::RuleHitInfo> && ruleHitInfo) { DARABONBA_PTR_SET_RVALUE(ruleHitInfo_, ruleHitInfo) };


        protected:
          shared_ptr<vector<Rules::RuleHitInfo>> ruleHitInfo_ {};
        };

        virtual bool empty() const override { return this->rules_ == nullptr
        && this->score_ == nullptr; };
        // rules Field Functions 
        bool hasRules() const { return this->rules_ != nullptr;};
        void deleteRules() { this->rules_ = nullptr;};
        inline const ResultInfo::Rules & getRules() const { DARABONBA_PTR_GET_CONST(rules_, ResultInfo::Rules) };
        inline ResultInfo::Rules getRules() { DARABONBA_PTR_GET(rules_, ResultInfo::Rules) };
        inline ResultInfo& setRules(const ResultInfo::Rules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
        inline ResultInfo& setRules(ResultInfo::Rules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
        inline ResultInfo& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      protected:
        shared_ptr<ResultInfo::Rules> rules_ {};
        shared_ptr<int32_t> score_ {};
      };

      virtual bool empty() const override { return this->resultInfo_ == nullptr; };
      // resultInfo Field Functions 
      bool hasResultInfo() const { return this->resultInfo_ != nullptr;};
      void deleteResultInfo() { this->resultInfo_ = nullptr;};
      inline const vector<Data::ResultInfo> & getResultInfo() const { DARABONBA_PTR_GET_CONST(resultInfo_, vector<Data::ResultInfo>) };
      inline vector<Data::ResultInfo> getResultInfo() { DARABONBA_PTR_GET(resultInfo_, vector<Data::ResultInfo>) };
      inline Data& setResultInfo(const vector<Data::ResultInfo> & resultInfo) { DARABONBA_PTR_SET_VALUE(resultInfo_, resultInfo) };
      inline Data& setResultInfo(vector<Data::ResultInfo> && resultInfo) { DARABONBA_PTR_SET_RVALUE(resultInfo_, resultInfo) };


    protected:
      shared_ptr<vector<Data::ResultInfo>> resultInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UploadDataSyncForLLMResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UploadDataSyncForLLMResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UploadDataSyncForLLMResponseBody::Data) };
    inline UploadDataSyncForLLMResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UploadDataSyncForLLMResponseBody::Data) };
    inline UploadDataSyncForLLMResponseBody& setData(const UploadDataSyncForLLMResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UploadDataSyncForLLMResponseBody& setData(UploadDataSyncForLLMResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UploadDataSyncForLLMResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UploadDataSyncForLLMResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UploadDataSyncForLLMResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<UploadDataSyncForLLMResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
