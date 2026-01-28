// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALARMEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALARMEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class ListAlarmEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlarmEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlarmEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAlarmEventResponseBody() = default ;
    ListAlarmEventResponseBody(const ListAlarmEventResponseBody &) = default ;
    ListAlarmEventResponseBody(ListAlarmEventResponseBody &&) = default ;
    ListAlarmEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlarmEventResponseBody() = default ;
    ListAlarmEventResponseBody& operator=(const ListAlarmEventResponseBody &) = default ;
    ListAlarmEventResponseBody& operator=(ListAlarmEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Records, records_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Records, records_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class Records : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Records& obj) { 
          DARABONBA_PTR_TO_JSON(AlarmChannel, alarmChannel_);
          DARABONBA_PTR_TO_JSON(AlarmContacts, alarmContacts_);
          DARABONBA_PTR_TO_JSON(AlarmMessage, alarmMessage_);
          DARABONBA_PTR_TO_JSON(AlarmStatus, alarmStatus_);
          DARABONBA_PTR_TO_JSON(AlarmType, alarmType_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(JobName, jobName_);
          DARABONBA_PTR_TO_JSON(Time, time_);
        };
        friend void from_json(const Darabonba::Json& j, Records& obj) { 
          DARABONBA_PTR_FROM_JSON(AlarmChannel, alarmChannel_);
          DARABONBA_PTR_FROM_JSON(AlarmContacts, alarmContacts_);
          DARABONBA_PTR_FROM_JSON(AlarmMessage, alarmMessage_);
          DARABONBA_PTR_FROM_JSON(AlarmStatus, alarmStatus_);
          DARABONBA_PTR_FROM_JSON(AlarmType, alarmType_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(JobName, jobName_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
        };
        Records() = default ;
        Records(const Records &) = default ;
        Records(Records &&) = default ;
        Records(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Records() = default ;
        Records& operator=(const Records &) = default ;
        Records& operator=(Records &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alarmChannel_ == nullptr
        && this->alarmContacts_ == nullptr && this->alarmMessage_ == nullptr && this->alarmStatus_ == nullptr && this->alarmType_ == nullptr && this->appName_ == nullptr
        && this->jobName_ == nullptr && this->time_ == nullptr; };
        // alarmChannel Field Functions 
        bool hasAlarmChannel() const { return this->alarmChannel_ != nullptr;};
        void deleteAlarmChannel() { this->alarmChannel_ = nullptr;};
        inline string getAlarmChannel() const { DARABONBA_PTR_GET_DEFAULT(alarmChannel_, "") };
        inline Records& setAlarmChannel(string alarmChannel) { DARABONBA_PTR_SET_VALUE(alarmChannel_, alarmChannel) };


        // alarmContacts Field Functions 
        bool hasAlarmContacts() const { return this->alarmContacts_ != nullptr;};
        void deleteAlarmContacts() { this->alarmContacts_ = nullptr;};
        inline string getAlarmContacts() const { DARABONBA_PTR_GET_DEFAULT(alarmContacts_, "") };
        inline Records& setAlarmContacts(string alarmContacts) { DARABONBA_PTR_SET_VALUE(alarmContacts_, alarmContacts) };


        // alarmMessage Field Functions 
        bool hasAlarmMessage() const { return this->alarmMessage_ != nullptr;};
        void deleteAlarmMessage() { this->alarmMessage_ = nullptr;};
        inline string getAlarmMessage() const { DARABONBA_PTR_GET_DEFAULT(alarmMessage_, "") };
        inline Records& setAlarmMessage(string alarmMessage) { DARABONBA_PTR_SET_VALUE(alarmMessage_, alarmMessage) };


        // alarmStatus Field Functions 
        bool hasAlarmStatus() const { return this->alarmStatus_ != nullptr;};
        void deleteAlarmStatus() { this->alarmStatus_ = nullptr;};
        inline string getAlarmStatus() const { DARABONBA_PTR_GET_DEFAULT(alarmStatus_, "") };
        inline Records& setAlarmStatus(string alarmStatus) { DARABONBA_PTR_SET_VALUE(alarmStatus_, alarmStatus) };


        // alarmType Field Functions 
        bool hasAlarmType() const { return this->alarmType_ != nullptr;};
        void deleteAlarmType() { this->alarmType_ = nullptr;};
        inline string getAlarmType() const { DARABONBA_PTR_GET_DEFAULT(alarmType_, "") };
        inline Records& setAlarmType(string alarmType) { DARABONBA_PTR_SET_VALUE(alarmType_, alarmType) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline Records& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // jobName Field Functions 
        bool hasJobName() const { return this->jobName_ != nullptr;};
        void deleteJobName() { this->jobName_ = nullptr;};
        inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
        inline Records& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline Records& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      protected:
        shared_ptr<string> alarmChannel_ {};
        shared_ptr<string> alarmContacts_ {};
        shared_ptr<string> alarmMessage_ {};
        shared_ptr<string> alarmStatus_ {};
        shared_ptr<string> alarmType_ {};
        shared_ptr<string> appName_ {};
        shared_ptr<string> jobName_ {};
        shared_ptr<string> time_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->records_ == nullptr && this->total_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // records Field Functions 
      bool hasRecords() const { return this->records_ != nullptr;};
      void deleteRecords() { this->records_ = nullptr;};
      inline const vector<Data::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<Data::Records>) };
      inline vector<Data::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<Data::Records>) };
      inline Data& setRecords(const vector<Data::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
      inline Data& setRecords(vector<Data::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<vector<Data::Records>> records_ {};
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListAlarmEventResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListAlarmEventResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListAlarmEventResponseBody::Data) };
    inline ListAlarmEventResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListAlarmEventResponseBody::Data) };
    inline ListAlarmEventResponseBody& setData(const ListAlarmEventResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAlarmEventResponseBody& setData(ListAlarmEventResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAlarmEventResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAlarmEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAlarmEventResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    // -
    shared_ptr<ListAlarmEventResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
