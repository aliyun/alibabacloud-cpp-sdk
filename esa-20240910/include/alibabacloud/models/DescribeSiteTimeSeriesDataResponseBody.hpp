// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITETIMESERIESDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITETIMESERIESDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeSiteTimeSeriesDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteTimeSeriesDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SamplingRate, samplingRate_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SummarizedData, summarizedData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteTimeSeriesDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SamplingRate, samplingRate_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SummarizedData, summarizedData_);
    };
    DescribeSiteTimeSeriesDataResponseBody() = default ;
    DescribeSiteTimeSeriesDataResponseBody(const DescribeSiteTimeSeriesDataResponseBody &) = default ;
    DescribeSiteTimeSeriesDataResponseBody(DescribeSiteTimeSeriesDataResponseBody &&) = default ;
    DescribeSiteTimeSeriesDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteTimeSeriesDataResponseBody() = default ;
    DescribeSiteTimeSeriesDataResponseBody& operator=(const DescribeSiteTimeSeriesDataResponseBody &) = default ;
    DescribeSiteTimeSeriesDataResponseBody& operator=(DescribeSiteTimeSeriesDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SummarizedData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SummarizedData& obj) { 
        DARABONBA_PTR_TO_JSON(AggMethod, aggMethod_);
        DARABONBA_PTR_TO_JSON(DimensionName, dimensionName_);
        DARABONBA_PTR_TO_JSON(DimensionValue, dimensionValue_);
        DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
        DARABONBA_ANY_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, SummarizedData& obj) { 
        DARABONBA_PTR_FROM_JSON(AggMethod, aggMethod_);
        DARABONBA_PTR_FROM_JSON(DimensionName, dimensionName_);
        DARABONBA_PTR_FROM_JSON(DimensionValue, dimensionValue_);
        DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
        DARABONBA_ANY_FROM_JSON(Value, value_);
      };
      SummarizedData() = default ;
      SummarizedData(const SummarizedData &) = default ;
      SummarizedData(SummarizedData &&) = default ;
      SummarizedData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SummarizedData() = default ;
      SummarizedData& operator=(const SummarizedData &) = default ;
      SummarizedData& operator=(SummarizedData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aggMethod_ == nullptr
        && this->dimensionName_ == nullptr && this->dimensionValue_ == nullptr && this->fieldName_ == nullptr && this->value_ == nullptr; };
      // aggMethod Field Functions 
      bool hasAggMethod() const { return this->aggMethod_ != nullptr;};
      void deleteAggMethod() { this->aggMethod_ = nullptr;};
      inline string getAggMethod() const { DARABONBA_PTR_GET_DEFAULT(aggMethod_, "") };
      inline SummarizedData& setAggMethod(string aggMethod) { DARABONBA_PTR_SET_VALUE(aggMethod_, aggMethod) };


      // dimensionName Field Functions 
      bool hasDimensionName() const { return this->dimensionName_ != nullptr;};
      void deleteDimensionName() { this->dimensionName_ = nullptr;};
      inline string getDimensionName() const { DARABONBA_PTR_GET_DEFAULT(dimensionName_, "") };
      inline SummarizedData& setDimensionName(string dimensionName) { DARABONBA_PTR_SET_VALUE(dimensionName_, dimensionName) };


      // dimensionValue Field Functions 
      bool hasDimensionValue() const { return this->dimensionValue_ != nullptr;};
      void deleteDimensionValue() { this->dimensionValue_ = nullptr;};
      inline string getDimensionValue() const { DARABONBA_PTR_GET_DEFAULT(dimensionValue_, "") };
      inline SummarizedData& setDimensionValue(string dimensionValue) { DARABONBA_PTR_SET_VALUE(dimensionValue_, dimensionValue) };


      // fieldName Field Functions 
      bool hasFieldName() const { return this->fieldName_ != nullptr;};
      void deleteFieldName() { this->fieldName_ = nullptr;};
      inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
      inline SummarizedData& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline       const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
      Darabonba::Json & getValue() { DARABONBA_GET(value_) };
      inline SummarizedData& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
      inline SummarizedData& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


    protected:
      // The aggregation method used.
      shared_ptr<string> aggMethod_ {};
      // The dimension of the aggregated data being queried.
      shared_ptr<string> dimensionName_ {};
      // The value of the aggregated dimension being queried.
      shared_ptr<string> dimensionValue_ {};
      // The value of the aggregated metric being queried.
      shared_ptr<string> fieldName_ {};
      // The aggregated value.
      Darabonba::Json value_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DetailData, detailData_);
        DARABONBA_PTR_TO_JSON(DimensionName, dimensionName_);
        DARABONBA_PTR_TO_JSON(DimensionValue, dimensionValue_);
        DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DetailData, detailData_);
        DARABONBA_PTR_FROM_JSON(DimensionName, dimensionName_);
        DARABONBA_PTR_FROM_JSON(DimensionValue, dimensionValue_);
        DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
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
      class DetailData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DetailData& obj) { 
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_ANY_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, DetailData& obj) { 
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
          DARABONBA_ANY_FROM_JSON(Value, value_);
        };
        DetailData() = default ;
        DetailData(const DetailData &) = default ;
        DetailData(DetailData &&) = default ;
        DetailData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DetailData() = default ;
        DetailData& operator=(const DetailData &) = default ;
        DetailData& operator=(DetailData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->timeStamp_ == nullptr
        && this->value_ == nullptr; };
        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DetailData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline         const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
        Darabonba::Json & getValue() { DARABONBA_GET(value_) };
        inline DetailData& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
        inline DetailData& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


      protected:
        // Start timestamp of the time slice.
        shared_ptr<string> timeStamp_ {};
        // Value.
        Darabonba::Json value_ {};
      };

      virtual bool empty() const override { return this->detailData_ == nullptr
        && this->dimensionName_ == nullptr && this->dimensionValue_ == nullptr && this->fieldName_ == nullptr; };
      // detailData Field Functions 
      bool hasDetailData() const { return this->detailData_ != nullptr;};
      void deleteDetailData() { this->detailData_ = nullptr;};
      inline const vector<Data::DetailData> & getDetailData() const { DARABONBA_PTR_GET_CONST(detailData_, vector<Data::DetailData>) };
      inline vector<Data::DetailData> getDetailData() { DARABONBA_PTR_GET(detailData_, vector<Data::DetailData>) };
      inline Data& setDetailData(const vector<Data::DetailData> & detailData) { DARABONBA_PTR_SET_VALUE(detailData_, detailData) };
      inline Data& setDetailData(vector<Data::DetailData> && detailData) { DARABONBA_PTR_SET_RVALUE(detailData_, detailData) };


      // dimensionName Field Functions 
      bool hasDimensionName() const { return this->dimensionName_ != nullptr;};
      void deleteDimensionName() { this->dimensionName_ = nullptr;};
      inline string getDimensionName() const { DARABONBA_PTR_GET_DEFAULT(dimensionName_, "") };
      inline Data& setDimensionName(string dimensionName) { DARABONBA_PTR_SET_VALUE(dimensionName_, dimensionName) };


      // dimensionValue Field Functions 
      bool hasDimensionValue() const { return this->dimensionValue_ != nullptr;};
      void deleteDimensionValue() { this->dimensionValue_ = nullptr;};
      inline string getDimensionValue() const { DARABONBA_PTR_GET_DEFAULT(dimensionValue_, "") };
      inline Data& setDimensionValue(string dimensionValue) { DARABONBA_PTR_SET_VALUE(dimensionValue_, dimensionValue) };


      // fieldName Field Functions 
      bool hasFieldName() const { return this->fieldName_ != nullptr;};
      void deleteFieldName() { this->fieldName_ = nullptr;};
      inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
      inline Data& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    protected:
      // Returned data.
      shared_ptr<vector<Data::DetailData>> detailData_ {};
      // Query dimension.
      shared_ptr<string> dimensionName_ {};
      // Query dimension value.
      shared_ptr<string> dimensionValue_ {};
      // Query metric value.
      shared_ptr<string> fieldName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->endTime_ == nullptr && this->interval_ == nullptr && this->requestId_ == nullptr && this->samplingRate_ == nullptr && this->startTime_ == nullptr
        && this->summarizedData_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeSiteTimeSeriesDataResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeSiteTimeSeriesDataResponseBody::Data>) };
    inline vector<DescribeSiteTimeSeriesDataResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeSiteTimeSeriesDataResponseBody::Data>) };
    inline DescribeSiteTimeSeriesDataResponseBody& setData(const vector<DescribeSiteTimeSeriesDataResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSiteTimeSeriesDataResponseBody& setData(vector<DescribeSiteTimeSeriesDataResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSiteTimeSeriesDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline DescribeSiteTimeSeriesDataResponseBody& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSiteTimeSeriesDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // samplingRate Field Functions 
    bool hasSamplingRate() const { return this->samplingRate_ != nullptr;};
    void deleteSamplingRate() { this->samplingRate_ = nullptr;};
    inline float getSamplingRate() const { DARABONBA_PTR_GET_DEFAULT(samplingRate_, 0.0) };
    inline DescribeSiteTimeSeriesDataResponseBody& setSamplingRate(float samplingRate) { DARABONBA_PTR_SET_VALUE(samplingRate_, samplingRate) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSiteTimeSeriesDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // summarizedData Field Functions 
    bool hasSummarizedData() const { return this->summarizedData_ != nullptr;};
    void deleteSummarizedData() { this->summarizedData_ = nullptr;};
    inline const vector<DescribeSiteTimeSeriesDataResponseBody::SummarizedData> & getSummarizedData() const { DARABONBA_PTR_GET_CONST(summarizedData_, vector<DescribeSiteTimeSeriesDataResponseBody::SummarizedData>) };
    inline vector<DescribeSiteTimeSeriesDataResponseBody::SummarizedData> getSummarizedData() { DARABONBA_PTR_GET(summarizedData_, vector<DescribeSiteTimeSeriesDataResponseBody::SummarizedData>) };
    inline DescribeSiteTimeSeriesDataResponseBody& setSummarizedData(const vector<DescribeSiteTimeSeriesDataResponseBody::SummarizedData> & summarizedData) { DARABONBA_PTR_SET_VALUE(summarizedData_, summarizedData) };
    inline DescribeSiteTimeSeriesDataResponseBody& setSummarizedData(vector<DescribeSiteTimeSeriesDataResponseBody::SummarizedData> && summarizedData) { DARABONBA_PTR_SET_RVALUE(summarizedData_, summarizedData) };


  protected:
    // Returned data.
    shared_ptr<vector<DescribeSiteTimeSeriesDataResponseBody::Data>> data_ {};
    // The end time for fetching the data.
    // 
    // The date format follows ISO8601 notation and uses UTC+0, formatted as yyyy-MM-ddTHH:mm:ssZ.
    shared_ptr<string> endTime_ {};
    // The granularity of the data, in seconds.
    shared_ptr<int64_t> interval_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The sampling rate, in %.
    shared_ptr<float> samplingRate_ {};
    // The start time for fetching the data.
    // 
    // The date format follows ISO8601 notation and uses UTC+0, formatted as yyyy-MM-ddTHH:mm:ssZ.
    shared_ptr<string> startTime_ {};
    // Aggregated query data.
    shared_ptr<vector<DescribeSiteTimeSeriesDataResponseBody::SummarizedData>> summarizedData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
