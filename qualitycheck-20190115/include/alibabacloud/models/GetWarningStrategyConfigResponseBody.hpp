// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWARNINGSTRATEGYCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWARNINGSTRATEGYCONFIGRESPONSEBODY_HPP_
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
  class GetWarningStrategyConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWarningStrategyConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetWarningStrategyConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetWarningStrategyConfigResponseBody() = default ;
    GetWarningStrategyConfigResponseBody(const GetWarningStrategyConfigResponseBody &) = default ;
    GetWarningStrategyConfigResponseBody(GetWarningStrategyConfigResponseBody &&) = default ;
    GetWarningStrategyConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWarningStrategyConfigResponseBody() = default ;
    GetWarningStrategyConfigResponseBody& operator=(const GetWarningStrategyConfigResponseBody &) = default ;
    GetWarningStrategyConfigResponseBody& operator=(GetWarningStrategyConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IntervalTime, intervalTime_);
        DARABONBA_PTR_TO_JSON(Lambda, lambda_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(MaxNumber, maxNumber_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(WarningStrategyList, warningStrategyList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IntervalTime, intervalTime_);
        DARABONBA_PTR_FROM_JSON(Lambda, lambda_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(MaxNumber, maxNumber_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(WarningStrategyList, warningStrategyList_);
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
      class WarningStrategyList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WarningStrategyList& obj) { 
          DARABONBA_PTR_TO_JSON(warningStrategyList, warningStrategyList_);
        };
        friend void from_json(const Darabonba::Json& j, WarningStrategyList& obj) { 
          DARABONBA_PTR_FROM_JSON(warningStrategyList, warningStrategyList_);
        };
        WarningStrategyList() = default ;
        WarningStrategyList(const WarningStrategyList &) = default ;
        WarningStrategyList(WarningStrategyList &&) = default ;
        WarningStrategyList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WarningStrategyList() = default ;
        WarningStrategyList& operator=(const WarningStrategyList &) = default ;
        WarningStrategyList& operator=(WarningStrategyList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class WarningStrategyListItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const WarningStrategyListItem& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Duration, duration_);
            DARABONBA_PTR_TO_JSON(DurationExpression, durationExpression_);
            DARABONBA_PTR_TO_JSON(HitNumber, hitNumber_);
            DARABONBA_PTR_TO_JSON(HitNumberExpression, hitNumberExpression_);
            DARABONBA_PTR_TO_JSON(HitRuleList, hitRuleList_);
            DARABONBA_PTR_TO_JSON(HitType, hitType_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Range, range_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, WarningStrategyListItem& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Duration, duration_);
            DARABONBA_PTR_FROM_JSON(DurationExpression, durationExpression_);
            DARABONBA_PTR_FROM_JSON(HitNumber, hitNumber_);
            DARABONBA_PTR_FROM_JSON(HitNumberExpression, hitNumberExpression_);
            DARABONBA_PTR_FROM_JSON(HitRuleList, hitRuleList_);
            DARABONBA_PTR_FROM_JSON(HitType, hitType_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Range, range_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          WarningStrategyListItem() = default ;
          WarningStrategyListItem(const WarningStrategyListItem &) = default ;
          WarningStrategyListItem(WarningStrategyListItem &&) = default ;
          WarningStrategyListItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~WarningStrategyListItem() = default ;
          WarningStrategyListItem& operator=(const WarningStrategyListItem &) = default ;
          WarningStrategyListItem& operator=(WarningStrategyListItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Range : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Range& obj) { 
              DARABONBA_PTR_TO_JSON(RangeNum, rangeNum_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, Range& obj) { 
              DARABONBA_PTR_FROM_JSON(RangeNum, rangeNum_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            Range() = default ;
            Range(const Range &) = default ;
            Range(Range &&) = default ;
            Range(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Range() = default ;
            Range& operator=(const Range &) = default ;
            Range& operator=(Range &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->rangeNum_ == nullptr
        && this->type_ == nullptr; };
            // rangeNum Field Functions 
            bool hasRangeNum() const { return this->rangeNum_ != nullptr;};
            void deleteRangeNum() { this->rangeNum_ = nullptr;};
            inline int64_t getRangeNum() const { DARABONBA_PTR_GET_DEFAULT(rangeNum_, 0L) };
            inline Range& setRangeNum(int64_t rangeNum) { DARABONBA_PTR_SET_VALUE(rangeNum_, rangeNum) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
            inline Range& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<int64_t> rangeNum_ {};
            shared_ptr<int64_t> type_ {};
          };

          virtual bool empty() const override { return this->code_ == nullptr
        && this->duration_ == nullptr && this->durationExpression_ == nullptr && this->hitNumber_ == nullptr && this->hitNumberExpression_ == nullptr && this->hitRuleList_ == nullptr
        && this->hitType_ == nullptr && this->id_ == nullptr && this->range_ == nullptr && this->status_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline WarningStrategyListItem& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // duration Field Functions 
          bool hasDuration() const { return this->duration_ != nullptr;};
          void deleteDuration() { this->duration_ = nullptr;};
          inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
          inline WarningStrategyListItem& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


          // durationExpression Field Functions 
          bool hasDurationExpression() const { return this->durationExpression_ != nullptr;};
          void deleteDurationExpression() { this->durationExpression_ = nullptr;};
          inline int64_t getDurationExpression() const { DARABONBA_PTR_GET_DEFAULT(durationExpression_, 0L) };
          inline WarningStrategyListItem& setDurationExpression(int64_t durationExpression) { DARABONBA_PTR_SET_VALUE(durationExpression_, durationExpression) };


          // hitNumber Field Functions 
          bool hasHitNumber() const { return this->hitNumber_ != nullptr;};
          void deleteHitNumber() { this->hitNumber_ = nullptr;};
          inline int64_t getHitNumber() const { DARABONBA_PTR_GET_DEFAULT(hitNumber_, 0L) };
          inline WarningStrategyListItem& setHitNumber(int64_t hitNumber) { DARABONBA_PTR_SET_VALUE(hitNumber_, hitNumber) };


          // hitNumberExpression Field Functions 
          bool hasHitNumberExpression() const { return this->hitNumberExpression_ != nullptr;};
          void deleteHitNumberExpression() { this->hitNumberExpression_ = nullptr;};
          inline int64_t getHitNumberExpression() const { DARABONBA_PTR_GET_DEFAULT(hitNumberExpression_, 0L) };
          inline WarningStrategyListItem& setHitNumberExpression(int64_t hitNumberExpression) { DARABONBA_PTR_SET_VALUE(hitNumberExpression_, hitNumberExpression) };


          // hitRuleList Field Functions 
          bool hasHitRuleList() const { return this->hitRuleList_ != nullptr;};
          void deleteHitRuleList() { this->hitRuleList_ = nullptr;};
          inline string getHitRuleList() const { DARABONBA_PTR_GET_DEFAULT(hitRuleList_, "") };
          inline WarningStrategyListItem& setHitRuleList(string hitRuleList) { DARABONBA_PTR_SET_VALUE(hitRuleList_, hitRuleList) };


          // hitType Field Functions 
          bool hasHitType() const { return this->hitType_ != nullptr;};
          void deleteHitType() { this->hitType_ = nullptr;};
          inline int64_t getHitType() const { DARABONBA_PTR_GET_DEFAULT(hitType_, 0L) };
          inline WarningStrategyListItem& setHitType(int64_t hitType) { DARABONBA_PTR_SET_VALUE(hitType_, hitType) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline WarningStrategyListItem& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // range Field Functions 
          bool hasRange() const { return this->range_ != nullptr;};
          void deleteRange() { this->range_ = nullptr;};
          inline const WarningStrategyListItem::Range & getRange() const { DARABONBA_PTR_GET_CONST(range_, WarningStrategyListItem::Range) };
          inline WarningStrategyListItem::Range getRange() { DARABONBA_PTR_GET(range_, WarningStrategyListItem::Range) };
          inline WarningStrategyListItem& setRange(const WarningStrategyListItem::Range & range) { DARABONBA_PTR_SET_VALUE(range_, range) };
          inline WarningStrategyListItem& setRange(WarningStrategyListItem::Range && range) { DARABONBA_PTR_SET_RVALUE(range_, range) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
          inline WarningStrategyListItem& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          shared_ptr<string> code_ {};
          shared_ptr<int64_t> duration_ {};
          shared_ptr<int64_t> durationExpression_ {};
          shared_ptr<int64_t> hitNumber_ {};
          shared_ptr<int64_t> hitNumberExpression_ {};
          shared_ptr<string> hitRuleList_ {};
          shared_ptr<int64_t> hitType_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<WarningStrategyListItem::Range> range_ {};
          shared_ptr<int64_t> status_ {};
        };

        virtual bool empty() const override { return this->warningStrategyList_ == nullptr; };
        // warningStrategyList Field Functions 
        bool hasWarningStrategyList() const { return this->warningStrategyList_ != nullptr;};
        void deleteWarningStrategyList() { this->warningStrategyList_ = nullptr;};
        inline const vector<WarningStrategyList::WarningStrategyListItem> & getWarningStrategyList() const { DARABONBA_PTR_GET_CONST(warningStrategyList_, vector<WarningStrategyList::WarningStrategyListItem>) };
        inline vector<WarningStrategyList::WarningStrategyListItem> getWarningStrategyList() { DARABONBA_PTR_GET(warningStrategyList_, vector<WarningStrategyList::WarningStrategyListItem>) };
        inline WarningStrategyList& setWarningStrategyList(const vector<WarningStrategyList::WarningStrategyListItem> & warningStrategyList) { DARABONBA_PTR_SET_VALUE(warningStrategyList_, warningStrategyList) };
        inline WarningStrategyList& setWarningStrategyList(vector<WarningStrategyList::WarningStrategyListItem> && warningStrategyList) { DARABONBA_PTR_SET_RVALUE(warningStrategyList_, warningStrategyList) };


      protected:
        shared_ptr<vector<WarningStrategyList::WarningStrategyListItem>> warningStrategyList_ {};
      };

      virtual bool empty() const override { return this->id_ == nullptr
        && this->intervalTime_ == nullptr && this->lambda_ == nullptr && this->level_ == nullptr && this->maxNumber_ == nullptr && this->name_ == nullptr
        && this->warningStrategyList_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // intervalTime Field Functions 
      bool hasIntervalTime() const { return this->intervalTime_ != nullptr;};
      void deleteIntervalTime() { this->intervalTime_ = nullptr;};
      inline int64_t getIntervalTime() const { DARABONBA_PTR_GET_DEFAULT(intervalTime_, 0L) };
      inline Data& setIntervalTime(int64_t intervalTime) { DARABONBA_PTR_SET_VALUE(intervalTime_, intervalTime) };


      // lambda Field Functions 
      bool hasLambda() const { return this->lambda_ != nullptr;};
      void deleteLambda() { this->lambda_ = nullptr;};
      inline string getLambda() const { DARABONBA_PTR_GET_DEFAULT(lambda_, "") };
      inline Data& setLambda(string lambda) { DARABONBA_PTR_SET_VALUE(lambda_, lambda) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline int64_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
      inline Data& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // maxNumber Field Functions 
      bool hasMaxNumber() const { return this->maxNumber_ != nullptr;};
      void deleteMaxNumber() { this->maxNumber_ = nullptr;};
      inline int64_t getMaxNumber() const { DARABONBA_PTR_GET_DEFAULT(maxNumber_, 0L) };
      inline Data& setMaxNumber(int64_t maxNumber) { DARABONBA_PTR_SET_VALUE(maxNumber_, maxNumber) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // warningStrategyList Field Functions 
      bool hasWarningStrategyList() const { return this->warningStrategyList_ != nullptr;};
      void deleteWarningStrategyList() { this->warningStrategyList_ = nullptr;};
      inline const Data::WarningStrategyList & getWarningStrategyList() const { DARABONBA_PTR_GET_CONST(warningStrategyList_, Data::WarningStrategyList) };
      inline Data::WarningStrategyList getWarningStrategyList() { DARABONBA_PTR_GET(warningStrategyList_, Data::WarningStrategyList) };
      inline Data& setWarningStrategyList(const Data::WarningStrategyList & warningStrategyList) { DARABONBA_PTR_SET_VALUE(warningStrategyList_, warningStrategyList) };
      inline Data& setWarningStrategyList(Data::WarningStrategyList && warningStrategyList) { DARABONBA_PTR_SET_RVALUE(warningStrategyList_, warningStrategyList) };


    protected:
      shared_ptr<int64_t> id_ {};
      shared_ptr<int64_t> intervalTime_ {};
      shared_ptr<string> lambda_ {};
      shared_ptr<int64_t> level_ {};
      shared_ptr<int64_t> maxNumber_ {};
      shared_ptr<string> name_ {};
      shared_ptr<Data::WarningStrategyList> warningStrategyList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetWarningStrategyConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetWarningStrategyConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetWarningStrategyConfigResponseBody::Data) };
    inline GetWarningStrategyConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetWarningStrategyConfigResponseBody::Data) };
    inline GetWarningStrategyConfigResponseBody& setData(const GetWarningStrategyConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetWarningStrategyConfigResponseBody& setData(GetWarningStrategyConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetWarningStrategyConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWarningStrategyConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetWarningStrategyConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetWarningStrategyConfigResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
