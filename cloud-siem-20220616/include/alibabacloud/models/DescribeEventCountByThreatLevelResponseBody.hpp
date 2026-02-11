// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTCOUNTBYTHREATLEVELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTCOUNTBYTHREATLEVELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeEventCountByThreatLevelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventCountByThreatLevelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventCountByThreatLevelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeEventCountByThreatLevelResponseBody() = default ;
    DescribeEventCountByThreatLevelResponseBody(const DescribeEventCountByThreatLevelResponseBody &) = default ;
    DescribeEventCountByThreatLevelResponseBody(DescribeEventCountByThreatLevelResponseBody &&) = default ;
    DescribeEventCountByThreatLevelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventCountByThreatLevelResponseBody() = default ;
    DescribeEventCountByThreatLevelResponseBody& operator=(const DescribeEventCountByThreatLevelResponseBody &) = default ;
    DescribeEventCountByThreatLevelResponseBody& operator=(DescribeEventCountByThreatLevelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EventDailyNum, eventDailyNum_);
        DARABONBA_PTR_TO_JSON(EventNum, eventNum_);
        DARABONBA_PTR_TO_JSON(HighLevelEventNum, highLevelEventNum_);
        DARABONBA_PTR_TO_JSON(InfoLevelEventNum, infoLevelEventNum_);
        DARABONBA_PTR_TO_JSON(LowLevelEventNum, lowLevelEventNum_);
        DARABONBA_PTR_TO_JSON(MediumLevelEventNum, mediumLevelEventNum_);
        DARABONBA_PTR_TO_JSON(SeriousLevelEventNum, seriousLevelEventNum_);
        DARABONBA_PTR_TO_JSON(UndealEventNum, undealEventNum_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EventDailyNum, eventDailyNum_);
        DARABONBA_PTR_FROM_JSON(EventNum, eventNum_);
        DARABONBA_PTR_FROM_JSON(HighLevelEventNum, highLevelEventNum_);
        DARABONBA_PTR_FROM_JSON(InfoLevelEventNum, infoLevelEventNum_);
        DARABONBA_PTR_FROM_JSON(LowLevelEventNum, lowLevelEventNum_);
        DARABONBA_PTR_FROM_JSON(MediumLevelEventNum, mediumLevelEventNum_);
        DARABONBA_PTR_FROM_JSON(SeriousLevelEventNum, seriousLevelEventNum_);
        DARABONBA_PTR_FROM_JSON(UndealEventNum, undealEventNum_);
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
      class EventDailyNum : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EventDailyNum& obj) { 
          DARABONBA_PTR_TO_JSON(Date, date_);
          DARABONBA_PTR_TO_JSON(EventNum, eventNum_);
          DARABONBA_PTR_TO_JSON(UndealEventNum, undealEventNum_);
        };
        friend void from_json(const Darabonba::Json& j, EventDailyNum& obj) { 
          DARABONBA_PTR_FROM_JSON(Date, date_);
          DARABONBA_PTR_FROM_JSON(EventNum, eventNum_);
          DARABONBA_PTR_FROM_JSON(UndealEventNum, undealEventNum_);
        };
        EventDailyNum() = default ;
        EventDailyNum(const EventDailyNum &) = default ;
        EventDailyNum(EventDailyNum &&) = default ;
        EventDailyNum(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EventDailyNum() = default ;
        EventDailyNum& operator=(const EventDailyNum &) = default ;
        EventDailyNum& operator=(EventDailyNum &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->date_ == nullptr
        && this->eventNum_ == nullptr && this->undealEventNum_ == nullptr; };
        // date Field Functions 
        bool hasDate() const { return this->date_ != nullptr;};
        void deleteDate() { this->date_ = nullptr;};
        inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
        inline EventDailyNum& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


        // eventNum Field Functions 
        bool hasEventNum() const { return this->eventNum_ != nullptr;};
        void deleteEventNum() { this->eventNum_ = nullptr;};
        inline int64_t getEventNum() const { DARABONBA_PTR_GET_DEFAULT(eventNum_, 0L) };
        inline EventDailyNum& setEventNum(int64_t eventNum) { DARABONBA_PTR_SET_VALUE(eventNum_, eventNum) };


        // undealEventNum Field Functions 
        bool hasUndealEventNum() const { return this->undealEventNum_ != nullptr;};
        void deleteUndealEventNum() { this->undealEventNum_ = nullptr;};
        inline int64_t getUndealEventNum() const { DARABONBA_PTR_GET_DEFAULT(undealEventNum_, 0L) };
        inline EventDailyNum& setUndealEventNum(int64_t undealEventNum) { DARABONBA_PTR_SET_VALUE(undealEventNum_, undealEventNum) };


      protected:
        shared_ptr<string> date_ {};
        shared_ptr<int64_t> eventNum_ {};
        shared_ptr<int64_t> undealEventNum_ {};
      };

      virtual bool empty() const override { return this->eventDailyNum_ == nullptr
        && this->eventNum_ == nullptr && this->highLevelEventNum_ == nullptr && this->infoLevelEventNum_ == nullptr && this->lowLevelEventNum_ == nullptr && this->mediumLevelEventNum_ == nullptr
        && this->seriousLevelEventNum_ == nullptr && this->undealEventNum_ == nullptr; };
      // eventDailyNum Field Functions 
      bool hasEventDailyNum() const { return this->eventDailyNum_ != nullptr;};
      void deleteEventDailyNum() { this->eventDailyNum_ = nullptr;};
      inline const vector<Data::EventDailyNum> & getEventDailyNum() const { DARABONBA_PTR_GET_CONST(eventDailyNum_, vector<Data::EventDailyNum>) };
      inline vector<Data::EventDailyNum> getEventDailyNum() { DARABONBA_PTR_GET(eventDailyNum_, vector<Data::EventDailyNum>) };
      inline Data& setEventDailyNum(const vector<Data::EventDailyNum> & eventDailyNum) { DARABONBA_PTR_SET_VALUE(eventDailyNum_, eventDailyNum) };
      inline Data& setEventDailyNum(vector<Data::EventDailyNum> && eventDailyNum) { DARABONBA_PTR_SET_RVALUE(eventDailyNum_, eventDailyNum) };


      // eventNum Field Functions 
      bool hasEventNum() const { return this->eventNum_ != nullptr;};
      void deleteEventNum() { this->eventNum_ = nullptr;};
      inline int64_t getEventNum() const { DARABONBA_PTR_GET_DEFAULT(eventNum_, 0L) };
      inline Data& setEventNum(int64_t eventNum) { DARABONBA_PTR_SET_VALUE(eventNum_, eventNum) };


      // highLevelEventNum Field Functions 
      bool hasHighLevelEventNum() const { return this->highLevelEventNum_ != nullptr;};
      void deleteHighLevelEventNum() { this->highLevelEventNum_ = nullptr;};
      inline int64_t getHighLevelEventNum() const { DARABONBA_PTR_GET_DEFAULT(highLevelEventNum_, 0L) };
      inline Data& setHighLevelEventNum(int64_t highLevelEventNum) { DARABONBA_PTR_SET_VALUE(highLevelEventNum_, highLevelEventNum) };


      // infoLevelEventNum Field Functions 
      bool hasInfoLevelEventNum() const { return this->infoLevelEventNum_ != nullptr;};
      void deleteInfoLevelEventNum() { this->infoLevelEventNum_ = nullptr;};
      inline int64_t getInfoLevelEventNum() const { DARABONBA_PTR_GET_DEFAULT(infoLevelEventNum_, 0L) };
      inline Data& setInfoLevelEventNum(int64_t infoLevelEventNum) { DARABONBA_PTR_SET_VALUE(infoLevelEventNum_, infoLevelEventNum) };


      // lowLevelEventNum Field Functions 
      bool hasLowLevelEventNum() const { return this->lowLevelEventNum_ != nullptr;};
      void deleteLowLevelEventNum() { this->lowLevelEventNum_ = nullptr;};
      inline int64_t getLowLevelEventNum() const { DARABONBA_PTR_GET_DEFAULT(lowLevelEventNum_, 0L) };
      inline Data& setLowLevelEventNum(int64_t lowLevelEventNum) { DARABONBA_PTR_SET_VALUE(lowLevelEventNum_, lowLevelEventNum) };


      // mediumLevelEventNum Field Functions 
      bool hasMediumLevelEventNum() const { return this->mediumLevelEventNum_ != nullptr;};
      void deleteMediumLevelEventNum() { this->mediumLevelEventNum_ = nullptr;};
      inline int64_t getMediumLevelEventNum() const { DARABONBA_PTR_GET_DEFAULT(mediumLevelEventNum_, 0L) };
      inline Data& setMediumLevelEventNum(int64_t mediumLevelEventNum) { DARABONBA_PTR_SET_VALUE(mediumLevelEventNum_, mediumLevelEventNum) };


      // seriousLevelEventNum Field Functions 
      bool hasSeriousLevelEventNum() const { return this->seriousLevelEventNum_ != nullptr;};
      void deleteSeriousLevelEventNum() { this->seriousLevelEventNum_ = nullptr;};
      inline int64_t getSeriousLevelEventNum() const { DARABONBA_PTR_GET_DEFAULT(seriousLevelEventNum_, 0L) };
      inline Data& setSeriousLevelEventNum(int64_t seriousLevelEventNum) { DARABONBA_PTR_SET_VALUE(seriousLevelEventNum_, seriousLevelEventNum) };


      // undealEventNum Field Functions 
      bool hasUndealEventNum() const { return this->undealEventNum_ != nullptr;};
      void deleteUndealEventNum() { this->undealEventNum_ = nullptr;};
      inline int64_t getUndealEventNum() const { DARABONBA_PTR_GET_DEFAULT(undealEventNum_, 0L) };
      inline Data& setUndealEventNum(int64_t undealEventNum) { DARABONBA_PTR_SET_VALUE(undealEventNum_, undealEventNum) };


    protected:
      shared_ptr<vector<Data::EventDailyNum>> eventDailyNum_ {};
      // The total number of events.
      shared_ptr<int64_t> eventNum_ {};
      // The number of high-risk events.
      shared_ptr<int64_t> highLevelEventNum_ {};
      shared_ptr<int64_t> infoLevelEventNum_ {};
      // The number of low-risk events.
      shared_ptr<int64_t> lowLevelEventNum_ {};
      // The number of medium-risk events.
      shared_ptr<int64_t> mediumLevelEventNum_ {};
      shared_ptr<int64_t> seriousLevelEventNum_ {};
      // The number of unhandled events.
      shared_ptr<int64_t> undealEventNum_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeEventCountByThreatLevelResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeEventCountByThreatLevelResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeEventCountByThreatLevelResponseBody::Data) };
    inline DescribeEventCountByThreatLevelResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeEventCountByThreatLevelResponseBody::Data) };
    inline DescribeEventCountByThreatLevelResponseBody& setData(const DescribeEventCountByThreatLevelResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeEventCountByThreatLevelResponseBody& setData(DescribeEventCountByThreatLevelResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeEventCountByThreatLevelResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEventCountByThreatLevelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeEventCountByThreatLevelResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<DescribeEventCountByThreatLevelResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
