// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NLURESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_NLURESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class NluResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NluResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, NluResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    NluResponseBody() = default ;
    NluResponseBody(const NluResponseBody &) = default ;
    NluResponseBody(NluResponseBody &&) = default ;
    NluResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NluResponseBody() = default ;
    NluResponseBody& operator=(const NluResponseBody &) = default ;
    NluResponseBody& operator=(NluResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Messages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Messages& obj) { 
        DARABONBA_PTR_TO_JSON(DialogHubNluInfo, dialogHubNluInfo_);
        DARABONBA_PTR_TO_JSON(DsNluInfo, dsNluInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Messages& obj) { 
        DARABONBA_PTR_FROM_JSON(DialogHubNluInfo, dialogHubNluInfo_);
        DARABONBA_PTR_FROM_JSON(DsNluInfo, dsNluInfo_);
      };
      Messages() = default ;
      Messages(const Messages &) = default ;
      Messages(Messages &&) = default ;
      Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Messages() = default ;
      Messages& operator=(const Messages &) = default ;
      Messages& operator=(Messages &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DsNluInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DsNluInfo& obj) { 
          DARABONBA_PTR_TO_JSON(EntityList, entityList_);
          DARABONBA_PTR_TO_JSON(IntentList, intentList_);
        };
        friend void from_json(const Darabonba::Json& j, DsNluInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(EntityList, entityList_);
          DARABONBA_PTR_FROM_JSON(IntentList, intentList_);
        };
        DsNluInfo() = default ;
        DsNluInfo(const DsNluInfo &) = default ;
        DsNluInfo(DsNluInfo &&) = default ;
        DsNluInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DsNluInfo() = default ;
        DsNluInfo& operator=(const DsNluInfo &) = default ;
        DsNluInfo& operator=(DsNluInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class IntentList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const IntentList& obj) { 
            DARABONBA_PTR_TO_JSON(IntentId, intentId_);
            DARABONBA_PTR_TO_JSON(MatchDetail, matchDetail_);
            DARABONBA_PTR_TO_JSON(MatchType, matchType_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Score, score_);
            DARABONBA_PTR_TO_JSON(SlotList, slotList_);
          };
          friend void from_json(const Darabonba::Json& j, IntentList& obj) { 
            DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
            DARABONBA_PTR_FROM_JSON(MatchDetail, matchDetail_);
            DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Score, score_);
            DARABONBA_PTR_FROM_JSON(SlotList, slotList_);
          };
          IntentList() = default ;
          IntentList(const IntentList &) = default ;
          IntentList(IntentList &&) = default ;
          IntentList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~IntentList() = default ;
          IntentList& operator=(const IntentList &) = default ;
          IntentList& operator=(IntentList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SlotList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SlotList& obj) { 
              DARABONBA_PTR_TO_JSON(Name, name_);
              DARABONBA_PTR_TO_JSON(Origin, origin_);
              DARABONBA_PTR_TO_JSON(Type, type_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, SlotList& obj) { 
              DARABONBA_PTR_FROM_JSON(Name, name_);
              DARABONBA_PTR_FROM_JSON(Origin, origin_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            SlotList() = default ;
            SlotList(const SlotList &) = default ;
            SlotList(SlotList &&) = default ;
            SlotList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SlotList() = default ;
            SlotList& operator=(const SlotList &) = default ;
            SlotList& operator=(SlotList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->name_ == nullptr
        && this->origin_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline SlotList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // origin Field Functions 
            bool hasOrigin() const { return this->origin_ != nullptr;};
            void deleteOrigin() { this->origin_ = nullptr;};
            inline string getOrigin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
            inline SlotList& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline SlotList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline SlotList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The name of the entity.
            shared_ptr<string> name_ {};
            // The original word for the entity, also known as an entity member.
            shared_ptr<string> origin_ {};
            // The type of the entity. Currently, only the `text` type is supported.
            shared_ptr<string> type_ {};
            // The entity\\"s synonym.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->intentId_ == nullptr
        && this->matchDetail_ == nullptr && this->matchType_ == nullptr && this->name_ == nullptr && this->score_ == nullptr && this->slotList_ == nullptr; };
          // intentId Field Functions 
          bool hasIntentId() const { return this->intentId_ != nullptr;};
          void deleteIntentId() { this->intentId_ = nullptr;};
          inline int64_t getIntentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
          inline IntentList& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


          // matchDetail Field Functions 
          bool hasMatchDetail() const { return this->matchDetail_ != nullptr;};
          void deleteMatchDetail() { this->matchDetail_ = nullptr;};
          inline string getMatchDetail() const { DARABONBA_PTR_GET_DEFAULT(matchDetail_, "") };
          inline IntentList& setMatchDetail(string matchDetail) { DARABONBA_PTR_SET_VALUE(matchDetail_, matchDetail) };


          // matchType Field Functions 
          bool hasMatchType() const { return this->matchType_ != nullptr;};
          void deleteMatchType() { this->matchType_ = nullptr;};
          inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
          inline IntentList& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline IntentList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // score Field Functions 
          bool hasScore() const { return this->score_ != nullptr;};
          void deleteScore() { this->score_ = nullptr;};
          inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
          inline IntentList& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


          // slotList Field Functions 
          bool hasSlotList() const { return this->slotList_ != nullptr;};
          void deleteSlotList() { this->slotList_ = nullptr;};
          inline const vector<IntentList::SlotList> & getSlotList() const { DARABONBA_PTR_GET_CONST(slotList_, vector<IntentList::SlotList>) };
          inline vector<IntentList::SlotList> getSlotList() { DARABONBA_PTR_GET(slotList_, vector<IntentList::SlotList>) };
          inline IntentList& setSlotList(const vector<IntentList::SlotList> & slotList) { DARABONBA_PTR_SET_VALUE(slotList_, slotList) };
          inline IntentList& setSlotList(vector<IntentList::SlotList> && slotList) { DARABONBA_PTR_SET_RVALUE(slotList_, slotList) };


        protected:
          // The intent ID.
          shared_ptr<int64_t> intentId_ {};
          // The details of the matching process.
          shared_ptr<string> matchDetail_ {};
          // The match type. Valid values are `Similarity` (match by utterance similarity), `Lgf` (match by LGF), `Classify` (match by model training), `FewShotLearning` (match by the built-in few-shot learning model), and `BuildIn` (match with a built-in intent).
          shared_ptr<string> matchType_ {};
          // The name of the intent.
          shared_ptr<string> name_ {};
          // The confidence score of the match.
          shared_ptr<double> score_ {};
          // The list of slots for the matched intent.
          shared_ptr<vector<IntentList::SlotList>> slotList_ {};
        };

        class EntityList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EntityList& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Origin, origin_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, EntityList& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Origin, origin_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          EntityList() = default ;
          EntityList(const EntityList &) = default ;
          EntityList(EntityList &&) = default ;
          EntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EntityList() = default ;
          EntityList& operator=(const EntityList &) = default ;
          EntityList& operator=(EntityList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->origin_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline EntityList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // origin Field Functions 
          bool hasOrigin() const { return this->origin_ != nullptr;};
          void deleteOrigin() { this->origin_ = nullptr;};
          inline string getOrigin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
          inline EntityList& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline EntityList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline EntityList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The name of the entity.
          shared_ptr<string> name_ {};
          // The original word for the entity, also known as an entity member.
          shared_ptr<string> origin_ {};
          // The type of the entity. Currently, only the `text` type is supported.
          shared_ptr<string> type_ {};
          // The entity\\"s synonym.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->entityList_ == nullptr
        && this->intentList_ == nullptr; };
        // entityList Field Functions 
        bool hasEntityList() const { return this->entityList_ != nullptr;};
        void deleteEntityList() { this->entityList_ = nullptr;};
        inline const vector<DsNluInfo::EntityList> & getEntityList() const { DARABONBA_PTR_GET_CONST(entityList_, vector<DsNluInfo::EntityList>) };
        inline vector<DsNluInfo::EntityList> getEntityList() { DARABONBA_PTR_GET(entityList_, vector<DsNluInfo::EntityList>) };
        inline DsNluInfo& setEntityList(const vector<DsNluInfo::EntityList> & entityList) { DARABONBA_PTR_SET_VALUE(entityList_, entityList) };
        inline DsNluInfo& setEntityList(vector<DsNluInfo::EntityList> && entityList) { DARABONBA_PTR_SET_RVALUE(entityList_, entityList) };


        // intentList Field Functions 
        bool hasIntentList() const { return this->intentList_ != nullptr;};
        void deleteIntentList() { this->intentList_ = nullptr;};
        inline const vector<DsNluInfo::IntentList> & getIntentList() const { DARABONBA_PTR_GET_CONST(intentList_, vector<DsNluInfo::IntentList>) };
        inline vector<DsNluInfo::IntentList> getIntentList() { DARABONBA_PTR_GET(intentList_, vector<DsNluInfo::IntentList>) };
        inline DsNluInfo& setIntentList(const vector<DsNluInfo::IntentList> & intentList) { DARABONBA_PTR_SET_VALUE(intentList_, intentList) };
        inline DsNluInfo& setIntentList(vector<DsNluInfo::IntentList> && intentList) { DARABONBA_PTR_SET_RVALUE(intentList_, intentList) };


      protected:
        // The list of entities.
        shared_ptr<vector<DsNluInfo::EntityList>> entityList_ {};
        // The list of intents.
        shared_ptr<vector<DsNluInfo::IntentList>> intentList_ {};
      };

      class DialogHubNluInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DialogHubNluInfo& obj) { 
          DARABONBA_PTR_TO_JSON(GlobalDictList, globalDictList_);
          DARABONBA_PTR_TO_JSON(GlobalSensitiveWordList, globalSensitiveWordList_);
        };
        friend void from_json(const Darabonba::Json& j, DialogHubNluInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(GlobalDictList, globalDictList_);
          DARABONBA_PTR_FROM_JSON(GlobalSensitiveWordList, globalSensitiveWordList_);
        };
        DialogHubNluInfo() = default ;
        DialogHubNluInfo(const DialogHubNluInfo &) = default ;
        DialogHubNluInfo(DialogHubNluInfo &&) = default ;
        DialogHubNluInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DialogHubNluInfo() = default ;
        DialogHubNluInfo& operator=(const DialogHubNluInfo &) = default ;
        DialogHubNluInfo& operator=(DialogHubNluInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class GlobalSensitiveWordList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const GlobalSensitiveWordList& obj) { 
            DARABONBA_PTR_TO_JSON(StandardWord, standardWord_);
            DARABONBA_PTR_TO_JSON(Word, word_);
          };
          friend void from_json(const Darabonba::Json& j, GlobalSensitiveWordList& obj) { 
            DARABONBA_PTR_FROM_JSON(StandardWord, standardWord_);
            DARABONBA_PTR_FROM_JSON(Word, word_);
          };
          GlobalSensitiveWordList() = default ;
          GlobalSensitiveWordList(const GlobalSensitiveWordList &) = default ;
          GlobalSensitiveWordList(GlobalSensitiveWordList &&) = default ;
          GlobalSensitiveWordList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~GlobalSensitiveWordList() = default ;
          GlobalSensitiveWordList& operator=(const GlobalSensitiveWordList &) = default ;
          GlobalSensitiveWordList& operator=(GlobalSensitiveWordList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->standardWord_ == nullptr
        && this->word_ == nullptr; };
          // standardWord Field Functions 
          bool hasStandardWord() const { return this->standardWord_ != nullptr;};
          void deleteStandardWord() { this->standardWord_ = nullptr;};
          inline string getStandardWord() const { DARABONBA_PTR_GET_DEFAULT(standardWord_, "") };
          inline GlobalSensitiveWordList& setStandardWord(string standardWord) { DARABONBA_PTR_SET_VALUE(standardWord_, standardWord) };


          // word Field Functions 
          bool hasWord() const { return this->word_ != nullptr;};
          void deleteWord() { this->word_ = nullptr;};
          inline string getWord() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
          inline GlobalSensitiveWordList& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


        protected:
          // The standard word.
          shared_ptr<string> standardWord_ {};
          // The synonym.
          shared_ptr<string> word_ {};
        };

        class GlobalDictList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const GlobalDictList& obj) { 
            DARABONBA_PTR_TO_JSON(StandardWord, standardWord_);
            DARABONBA_PTR_TO_JSON(Word, word_);
          };
          friend void from_json(const Darabonba::Json& j, GlobalDictList& obj) { 
            DARABONBA_PTR_FROM_JSON(StandardWord, standardWord_);
            DARABONBA_PTR_FROM_JSON(Word, word_);
          };
          GlobalDictList() = default ;
          GlobalDictList(const GlobalDictList &) = default ;
          GlobalDictList(GlobalDictList &&) = default ;
          GlobalDictList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~GlobalDictList() = default ;
          GlobalDictList& operator=(const GlobalDictList &) = default ;
          GlobalDictList& operator=(GlobalDictList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->standardWord_ == nullptr
        && this->word_ == nullptr; };
          // standardWord Field Functions 
          bool hasStandardWord() const { return this->standardWord_ != nullptr;};
          void deleteStandardWord() { this->standardWord_ = nullptr;};
          inline string getStandardWord() const { DARABONBA_PTR_GET_DEFAULT(standardWord_, "") };
          inline GlobalDictList& setStandardWord(string standardWord) { DARABONBA_PTR_SET_VALUE(standardWord_, standardWord) };


          // word Field Functions 
          bool hasWord() const { return this->word_ != nullptr;};
          void deleteWord() { this->word_ = nullptr;};
          inline string getWord() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
          inline GlobalDictList& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


        protected:
          // The standard word.
          shared_ptr<string> standardWord_ {};
          // The synonym.
          shared_ptr<string> word_ {};
        };

        virtual bool empty() const override { return this->globalDictList_ == nullptr
        && this->globalSensitiveWordList_ == nullptr; };
        // globalDictList Field Functions 
        bool hasGlobalDictList() const { return this->globalDictList_ != nullptr;};
        void deleteGlobalDictList() { this->globalDictList_ = nullptr;};
        inline const vector<DialogHubNluInfo::GlobalDictList> & getGlobalDictList() const { DARABONBA_PTR_GET_CONST(globalDictList_, vector<DialogHubNluInfo::GlobalDictList>) };
        inline vector<DialogHubNluInfo::GlobalDictList> getGlobalDictList() { DARABONBA_PTR_GET(globalDictList_, vector<DialogHubNluInfo::GlobalDictList>) };
        inline DialogHubNluInfo& setGlobalDictList(const vector<DialogHubNluInfo::GlobalDictList> & globalDictList) { DARABONBA_PTR_SET_VALUE(globalDictList_, globalDictList) };
        inline DialogHubNluInfo& setGlobalDictList(vector<DialogHubNluInfo::GlobalDictList> && globalDictList) { DARABONBA_PTR_SET_RVALUE(globalDictList_, globalDictList) };


        // globalSensitiveWordList Field Functions 
        bool hasGlobalSensitiveWordList() const { return this->globalSensitiveWordList_ != nullptr;};
        void deleteGlobalSensitiveWordList() { this->globalSensitiveWordList_ = nullptr;};
        inline const vector<DialogHubNluInfo::GlobalSensitiveWordList> & getGlobalSensitiveWordList() const { DARABONBA_PTR_GET_CONST(globalSensitiveWordList_, vector<DialogHubNluInfo::GlobalSensitiveWordList>) };
        inline vector<DialogHubNluInfo::GlobalSensitiveWordList> getGlobalSensitiveWordList() { DARABONBA_PTR_GET(globalSensitiveWordList_, vector<DialogHubNluInfo::GlobalSensitiveWordList>) };
        inline DialogHubNluInfo& setGlobalSensitiveWordList(const vector<DialogHubNluInfo::GlobalSensitiveWordList> & globalSensitiveWordList) { DARABONBA_PTR_SET_VALUE(globalSensitiveWordList_, globalSensitiveWordList) };
        inline DialogHubNluInfo& setGlobalSensitiveWordList(vector<DialogHubNluInfo::GlobalSensitiveWordList> && globalSensitiveWordList) { DARABONBA_PTR_SET_RVALUE(globalSensitiveWordList_, globalSensitiveWordList) };


      protected:
        // The list of global dictionary entries.
        shared_ptr<vector<DialogHubNluInfo::GlobalDictList>> globalDictList_ {};
        // The list of global sensitive words.
        shared_ptr<vector<DialogHubNluInfo::GlobalSensitiveWordList>> globalSensitiveWordList_ {};
      };

      virtual bool empty() const override { return this->dialogHubNluInfo_ == nullptr
        && this->dsNluInfo_ == nullptr; };
      // dialogHubNluInfo Field Functions 
      bool hasDialogHubNluInfo() const { return this->dialogHubNluInfo_ != nullptr;};
      void deleteDialogHubNluInfo() { this->dialogHubNluInfo_ = nullptr;};
      inline const Messages::DialogHubNluInfo & getDialogHubNluInfo() const { DARABONBA_PTR_GET_CONST(dialogHubNluInfo_, Messages::DialogHubNluInfo) };
      inline Messages::DialogHubNluInfo getDialogHubNluInfo() { DARABONBA_PTR_GET(dialogHubNluInfo_, Messages::DialogHubNluInfo) };
      inline Messages& setDialogHubNluInfo(const Messages::DialogHubNluInfo & dialogHubNluInfo) { DARABONBA_PTR_SET_VALUE(dialogHubNluInfo_, dialogHubNluInfo) };
      inline Messages& setDialogHubNluInfo(Messages::DialogHubNluInfo && dialogHubNluInfo) { DARABONBA_PTR_SET_RVALUE(dialogHubNluInfo_, dialogHubNluInfo) };


      // dsNluInfo Field Functions 
      bool hasDsNluInfo() const { return this->dsNluInfo_ != nullptr;};
      void deleteDsNluInfo() { this->dsNluInfo_ = nullptr;};
      inline const Messages::DsNluInfo & getDsNluInfo() const { DARABONBA_PTR_GET_CONST(dsNluInfo_, Messages::DsNluInfo) };
      inline Messages::DsNluInfo getDsNluInfo() { DARABONBA_PTR_GET(dsNluInfo_, Messages::DsNluInfo) };
      inline Messages& setDsNluInfo(const Messages::DsNluInfo & dsNluInfo) { DARABONBA_PTR_SET_VALUE(dsNluInfo_, dsNluInfo) };
      inline Messages& setDsNluInfo(Messages::DsNluInfo && dsNluInfo) { DARABONBA_PTR_SET_RVALUE(dsNluInfo_, dsNluInfo) };


    protected:
      // The natural language understanding information from DialogHub.
      shared_ptr<Messages::DialogHubNluInfo> dialogHubNluInfo_ {};
      // The natural language understanding information from Dialog Studio.
      shared_ptr<Messages::DsNluInfo> dsNluInfo_ {};
    };

    virtual bool empty() const override { return this->messageId_ == nullptr
        && this->messages_ == nullptr && this->requestId_ == nullptr; };
    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline NluResponseBody& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<NluResponseBody::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<NluResponseBody::Messages>) };
    inline vector<NluResponseBody::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<NluResponseBody::Messages>) };
    inline NluResponseBody& setMessages(const vector<NluResponseBody::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline NluResponseBody& setMessages(vector<NluResponseBody::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline NluResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the natural language understanding response.
    shared_ptr<string> messageId_ {};
    // The list of messages.
    shared_ptr<vector<NluResponseBody::Messages>> messages_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
