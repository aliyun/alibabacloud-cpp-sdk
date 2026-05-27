// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUMCOMPUTEMETRICSBYRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUMCOMPUTEMETRICSBYRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class SumComputeMetricsByRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SumComputeMetricsByRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SumComputeMetricsByRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    SumComputeMetricsByRecordResponseBody() = default ;
    SumComputeMetricsByRecordResponseBody(const SumComputeMetricsByRecordResponseBody &) = default ;
    SumComputeMetricsByRecordResponseBody(SumComputeMetricsByRecordResponseBody &&) = default ;
    SumComputeMetricsByRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SumComputeMetricsByRecordResponseBody() = default ;
    SumComputeMetricsByRecordResponseBody& operator=(const SumComputeMetricsByRecordResponseBody &) = default ;
    SumComputeMetricsByRecordResponseBody& operator=(SumComputeMetricsByRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(dailyComputeRecords, dailyComputeRecords_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(dailyComputeRecords, dailyComputeRecords_);
        DARABONBA_PTR_FROM_JSON(type, type_);
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
      class DailyComputeRecords : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DailyComputeRecords& obj) { 
          DARABONBA_PTR_TO_JSON(dateTime, dateTime_);
          DARABONBA_PTR_TO_JSON(percentage, percentage_);
          DARABONBA_PTR_TO_JSON(record, record_);
        };
        friend void from_json(const Darabonba::Json& j, DailyComputeRecords& obj) { 
          DARABONBA_PTR_FROM_JSON(dateTime, dateTime_);
          DARABONBA_PTR_FROM_JSON(percentage, percentage_);
          DARABONBA_PTR_FROM_JSON(record, record_);
        };
        DailyComputeRecords() = default ;
        DailyComputeRecords(const DailyComputeRecords &) = default ;
        DailyComputeRecords(DailyComputeRecords &&) = default ;
        DailyComputeRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DailyComputeRecords() = default ;
        DailyComputeRecords& operator=(const DailyComputeRecords &) = default ;
        DailyComputeRecords& operator=(DailyComputeRecords &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dateTime_ == nullptr
        && this->percentage_ == nullptr && this->record_ == nullptr; };
        // dateTime Field Functions 
        bool hasDateTime() const { return this->dateTime_ != nullptr;};
        void deleteDateTime() { this->dateTime_ = nullptr;};
        inline string getDateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
        inline DailyComputeRecords& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


        // percentage Field Functions 
        bool hasPercentage() const { return this->percentage_ != nullptr;};
        void deletePercentage() { this->percentage_ = nullptr;};
        inline double getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0.0) };
        inline DailyComputeRecords& setPercentage(double percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


        // record Field Functions 
        bool hasRecord() const { return this->record_ != nullptr;};
        void deleteRecord() { this->record_ = nullptr;};
        inline string getRecord() const { DARABONBA_PTR_GET_DEFAULT(record_, "") };
        inline DailyComputeRecords& setRecord(string record) { DARABONBA_PTR_SET_VALUE(record_, record) };


      protected:
        shared_ptr<string> dateTime_ {};
        shared_ptr<double> percentage_ {};
        shared_ptr<string> record_ {};
      };

      virtual bool empty() const override { return this->dailyComputeRecords_ == nullptr
        && this->type_ == nullptr; };
      // dailyComputeRecords Field Functions 
      bool hasDailyComputeRecords() const { return this->dailyComputeRecords_ != nullptr;};
      void deleteDailyComputeRecords() { this->dailyComputeRecords_ = nullptr;};
      inline const vector<Data::DailyComputeRecords> & getDailyComputeRecords() const { DARABONBA_PTR_GET_CONST(dailyComputeRecords_, vector<Data::DailyComputeRecords>) };
      inline vector<Data::DailyComputeRecords> getDailyComputeRecords() { DARABONBA_PTR_GET(dailyComputeRecords_, vector<Data::DailyComputeRecords>) };
      inline Data& setDailyComputeRecords(const vector<Data::DailyComputeRecords> & dailyComputeRecords) { DARABONBA_PTR_SET_VALUE(dailyComputeRecords_, dailyComputeRecords) };
      inline Data& setDailyComputeRecords(vector<Data::DailyComputeRecords> && dailyComputeRecords) { DARABONBA_PTR_SET_RVALUE(dailyComputeRecords_, dailyComputeRecords) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<vector<Data::DailyComputeRecords>> dailyComputeRecords_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<SumComputeMetricsByRecordResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<SumComputeMetricsByRecordResponseBody::Data>) };
    inline vector<SumComputeMetricsByRecordResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<SumComputeMetricsByRecordResponseBody::Data>) };
    inline SumComputeMetricsByRecordResponseBody& setData(const vector<SumComputeMetricsByRecordResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SumComputeMetricsByRecordResponseBody& setData(vector<SumComputeMetricsByRecordResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline SumComputeMetricsByRecordResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SumComputeMetricsByRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<SumComputeMetricsByRecordResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpCode_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
