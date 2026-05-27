// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUMCOMPUTEMETRICSBYUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUMCOMPUTEMETRICSBYUSAGERESPONSEBODY_HPP_
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
  class SumComputeMetricsByUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SumComputeMetricsByUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SumComputeMetricsByUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    SumComputeMetricsByUsageResponseBody() = default ;
    SumComputeMetricsByUsageResponseBody(const SumComputeMetricsByUsageResponseBody &) = default ;
    SumComputeMetricsByUsageResponseBody(SumComputeMetricsByUsageResponseBody &&) = default ;
    SumComputeMetricsByUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SumComputeMetricsByUsageResponseBody() = default ;
    SumComputeMetricsByUsageResponseBody& operator=(const SumComputeMetricsByUsageResponseBody &) = default ;
    SumComputeMetricsByUsageResponseBody& operator=(SumComputeMetricsByUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(dailyComputeMetrics, dailyComputeMetrics_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(dailyComputeMetrics, dailyComputeMetrics_);
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
      class DailyComputeMetrics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DailyComputeMetrics& obj) { 
          DARABONBA_PTR_TO_JSON(dateTime, dateTime_);
          DARABONBA_PTR_TO_JSON(unit, unit_);
          DARABONBA_PTR_TO_JSON(usage, usage_);
        };
        friend void from_json(const Darabonba::Json& j, DailyComputeMetrics& obj) { 
          DARABONBA_PTR_FROM_JSON(dateTime, dateTime_);
          DARABONBA_PTR_FROM_JSON(unit, unit_);
          DARABONBA_PTR_FROM_JSON(usage, usage_);
        };
        DailyComputeMetrics() = default ;
        DailyComputeMetrics(const DailyComputeMetrics &) = default ;
        DailyComputeMetrics(DailyComputeMetrics &&) = default ;
        DailyComputeMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DailyComputeMetrics() = default ;
        DailyComputeMetrics& operator=(const DailyComputeMetrics &) = default ;
        DailyComputeMetrics& operator=(DailyComputeMetrics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dateTime_ == nullptr
        && this->unit_ == nullptr && this->usage_ == nullptr; };
        // dateTime Field Functions 
        bool hasDateTime() const { return this->dateTime_ != nullptr;};
        void deleteDateTime() { this->dateTime_ = nullptr;};
        inline string getDateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
        inline DailyComputeMetrics& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


        // unit Field Functions 
        bool hasUnit() const { return this->unit_ != nullptr;};
        void deleteUnit() { this->unit_ = nullptr;};
        inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
        inline DailyComputeMetrics& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


        // usage Field Functions 
        bool hasUsage() const { return this->usage_ != nullptr;};
        void deleteUsage() { this->usage_ = nullptr;};
        inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
        inline DailyComputeMetrics& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


      protected:
        shared_ptr<string> dateTime_ {};
        shared_ptr<string> unit_ {};
        shared_ptr<string> usage_ {};
      };

      virtual bool empty() const override { return this->dailyComputeMetrics_ == nullptr
        && this->type_ == nullptr; };
      // dailyComputeMetrics Field Functions 
      bool hasDailyComputeMetrics() const { return this->dailyComputeMetrics_ != nullptr;};
      void deleteDailyComputeMetrics() { this->dailyComputeMetrics_ = nullptr;};
      inline const vector<Data::DailyComputeMetrics> & getDailyComputeMetrics() const { DARABONBA_PTR_GET_CONST(dailyComputeMetrics_, vector<Data::DailyComputeMetrics>) };
      inline vector<Data::DailyComputeMetrics> getDailyComputeMetrics() { DARABONBA_PTR_GET(dailyComputeMetrics_, vector<Data::DailyComputeMetrics>) };
      inline Data& setDailyComputeMetrics(const vector<Data::DailyComputeMetrics> & dailyComputeMetrics) { DARABONBA_PTR_SET_VALUE(dailyComputeMetrics_, dailyComputeMetrics) };
      inline Data& setDailyComputeMetrics(vector<Data::DailyComputeMetrics> && dailyComputeMetrics) { DARABONBA_PTR_SET_RVALUE(dailyComputeMetrics_, dailyComputeMetrics) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<vector<Data::DailyComputeMetrics>> dailyComputeMetrics_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<SumComputeMetricsByUsageResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<SumComputeMetricsByUsageResponseBody::Data>) };
    inline vector<SumComputeMetricsByUsageResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<SumComputeMetricsByUsageResponseBody::Data>) };
    inline SumComputeMetricsByUsageResponseBody& setData(const vector<SumComputeMetricsByUsageResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SumComputeMetricsByUsageResponseBody& setData(vector<SumComputeMetricsByUsageResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline SumComputeMetricsByUsageResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SumComputeMetricsByUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<SumComputeMetricsByUsageResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpCode_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
