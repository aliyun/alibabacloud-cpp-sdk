// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKAFKACLIENTIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKAFKACLIENTIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetKafkaClientIpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKafkaClientIpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetKafkaClientIpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetKafkaClientIpResponseBody() = default ;
    GetKafkaClientIpResponseBody(const GetKafkaClientIpResponseBody &) = default ;
    GetKafkaClientIpResponseBody(GetKafkaClientIpResponseBody &&) = default ;
    GetKafkaClientIpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKafkaClientIpResponseBody() = default ;
    GetKafkaClientIpResponseBody& operator=(const GetKafkaClientIpResponseBody &) = default ;
    GetKafkaClientIpResponseBody& operator=(GetKafkaClientIpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Alert, alert_);
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(EndDate, endDate_);
        DARABONBA_PTR_TO_JSON(SearchTimeRange, searchTimeRange_);
        DARABONBA_PTR_TO_JSON(StartDate, startDate_);
        DARABONBA_PTR_TO_JSON(TimeLimitDay, timeLimitDay_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Alert, alert_);
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
        DARABONBA_PTR_FROM_JSON(SearchTimeRange, searchTimeRange_);
        DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
        DARABONBA_PTR_FROM_JSON(TimeLimitDay, timeLimitDay_);
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
      class DataItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataItem& obj) { 
          DARABONBA_PTR_TO_JSON(Data, data_);
        };
        friend void from_json(const Darabonba::Json& j, DataItem& obj) { 
          DARABONBA_PTR_FROM_JSON(Data, data_);
        };
        DataItem() = default ;
        DataItem(const DataItem &) = default ;
        DataItem(DataItem &&) = default ;
        DataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataItem() = default ;
        DataItem& operator=(const DataItem &) = default ;
        DataItem& operator=(DataItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Data : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Data& obj) { 
            DARABONBA_PTR_TO_JSON(Data, data_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, Data& obj) { 
            DARABONBA_PTR_FROM_JSON(Data, data_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
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
          class DataItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DataItem& obj) { 
              DARABONBA_PTR_TO_JSON(Data, data_);
            };
            friend void from_json(const Darabonba::Json& j, DataItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Data, data_);
            };
            DataItem() = default ;
            DataItem(const DataItem &) = default ;
            DataItem(DataItem &&) = default ;
            DataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DataItem() = default ;
            DataItem& operator=(const DataItem &) = default ;
            DataItem& operator=(DataItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Data : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Data& obj) { 
                DARABONBA_PTR_TO_JSON(Ip, ip_);
                DARABONBA_PTR_TO_JSON(Num, num_);
              };
              friend void from_json(const Darabonba::Json& j, Data& obj) { 
                DARABONBA_PTR_FROM_JSON(Ip, ip_);
                DARABONBA_PTR_FROM_JSON(Num, num_);
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
              virtual bool empty() const override { return this->ip_ == nullptr
        && this->num_ == nullptr; };
              // ip Field Functions 
              bool hasIp() const { return this->ip_ != nullptr;};
              void deleteIp() { this->ip_ = nullptr;};
              inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
              inline Data& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


              // num Field Functions 
              bool hasNum() const { return this->num_ != nullptr;};
              void deleteNum() { this->num_ = nullptr;};
              inline int64_t getNum() const { DARABONBA_PTR_GET_DEFAULT(num_, 0L) };
              inline Data& setNum(int64_t num) { DARABONBA_PTR_SET_VALUE(num_, num) };


            protected:
              shared_ptr<string> ip_ {};
              shared_ptr<int64_t> num_ {};
            };

            virtual bool empty() const override { return this->data_ == nullptr; };
            // data Field Functions 
            bool hasData() const { return this->data_ != nullptr;};
            void deleteData() { this->data_ = nullptr;};
            inline const vector<DataItem::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DataItem::Data>) };
            inline vector<DataItem::Data> getData() { DARABONBA_PTR_GET(data_, vector<DataItem::Data>) };
            inline DataItem& setData(const vector<DataItem::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
            inline DataItem& setData(vector<DataItem::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


          protected:
            shared_ptr<vector<DataItem::Data>> data_ {};
          };

          virtual bool empty() const override { return this->data_ == nullptr
        && this->name_ == nullptr; };
          // data Field Functions 
          bool hasData() const { return this->data_ != nullptr;};
          void deleteData() { this->data_ = nullptr;};
          inline const Data::DataItem & getData() const { DARABONBA_PTR_GET_CONST(data_, Data::DataItem) };
          inline Data::DataItem getData() { DARABONBA_PTR_GET(data_, Data::DataItem) };
          inline Data& setData(const Data::DataItem & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
          inline Data& setData(Data::DataItem && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          shared_ptr<Data::DataItem> data_ {};
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->data_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const vector<DataItem::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DataItem::Data>) };
        inline vector<DataItem::Data> getData() { DARABONBA_PTR_GET(data_, vector<DataItem::Data>) };
        inline DataItem& setData(const vector<DataItem::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline DataItem& setData(vector<DataItem::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      protected:
        shared_ptr<vector<DataItem::Data>> data_ {};
      };

      virtual bool empty() const override { return this->alert_ == nullptr
        && this->data_ == nullptr && this->endDate_ == nullptr && this->searchTimeRange_ == nullptr && this->startDate_ == nullptr && this->timeLimitDay_ == nullptr; };
      // alert Field Functions 
      bool hasAlert() const { return this->alert_ != nullptr;};
      void deleteAlert() { this->alert_ = nullptr;};
      inline bool getAlert() const { DARABONBA_PTR_GET_DEFAULT(alert_, false) };
      inline Data& setAlert(bool alert) { DARABONBA_PTR_SET_VALUE(alert_, alert) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const Data::DataItem & getData() const { DARABONBA_PTR_GET_CONST(data_, Data::DataItem) };
      inline Data::DataItem getData() { DARABONBA_PTR_GET(data_, Data::DataItem) };
      inline Data& setData(const Data::DataItem & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Data& setData(Data::DataItem && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // endDate Field Functions 
      bool hasEndDate() const { return this->endDate_ != nullptr;};
      void deleteEndDate() { this->endDate_ = nullptr;};
      inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
      inline Data& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


      // searchTimeRange Field Functions 
      bool hasSearchTimeRange() const { return this->searchTimeRange_ != nullptr;};
      void deleteSearchTimeRange() { this->searchTimeRange_ = nullptr;};
      inline int32_t getSearchTimeRange() const { DARABONBA_PTR_GET_DEFAULT(searchTimeRange_, 0) };
      inline Data& setSearchTimeRange(int32_t searchTimeRange) { DARABONBA_PTR_SET_VALUE(searchTimeRange_, searchTimeRange) };


      // startDate Field Functions 
      bool hasStartDate() const { return this->startDate_ != nullptr;};
      void deleteStartDate() { this->startDate_ = nullptr;};
      inline int64_t getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
      inline Data& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


      // timeLimitDay Field Functions 
      bool hasTimeLimitDay() const { return this->timeLimitDay_ != nullptr;};
      void deleteTimeLimitDay() { this->timeLimitDay_ = nullptr;};
      inline int32_t getTimeLimitDay() const { DARABONBA_PTR_GET_DEFAULT(timeLimitDay_, 0) };
      inline Data& setTimeLimitDay(int32_t timeLimitDay) { DARABONBA_PTR_SET_VALUE(timeLimitDay_, timeLimitDay) };


    protected:
      // The value true indicates that the broker is not of the latest minor version.
      // 
      // >  If the broker is not of the latest minor version, the sampled logs may not be accurate. This may cause inaccurate IP information. Therefore, we recommend that you update your broker to the latest version at the earliest opportunity.
      shared_ptr<bool> alert_ {};
      shared_ptr<Data::DataItem> data_ {};
      // The end of the date range within which data is queried.
      shared_ptr<int64_t> endDate_ {};
      // The time range within which the client IP addresses are queried.
      // 
      // >  The valid value is 1 hour. If the beginning of the time range to query and the end of the time range to query exceeds 1 hour, only data within 1 hour is returned.
      shared_ptr<int32_t> searchTimeRange_ {};
      // The beginning of the date range within which data is queried.
      shared_ptr<int64_t> startDate_ {};
      // The date range within which the client IP addresses are queried.
      // 
      // >  The valid value is 7 days. If the beginning of the date range to query and the end of the date range to query exceeds 7 days, only data within 7 days is returned.
      shared_ptr<int32_t> timeLimitDay_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetKafkaClientIpResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetKafkaClientIpResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetKafkaClientIpResponseBody::Data) };
    inline GetKafkaClientIpResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetKafkaClientIpResponseBody::Data) };
    inline GetKafkaClientIpResponseBody& setData(const GetKafkaClientIpResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetKafkaClientIpResponseBody& setData(GetKafkaClientIpResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetKafkaClientIpResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetKafkaClientIpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetKafkaClientIpResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned status code. The status code 200 indicates that the request was successful.
    shared_ptr<int64_t> code_ {};
    // The data returned.
    shared_ptr<GetKafkaClientIpResponseBody::Data> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
