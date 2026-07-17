// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITEWAFTIMESERIESDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITEWAFTIMESERIESDATARESPONSEBODY_HPP_
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
  class DescribeSiteWafTimeSeriesDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteWafTimeSeriesDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SamplingRate, samplingRate_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(SummarizedData, summarizedData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteWafTimeSeriesDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SamplingRate, samplingRate_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(SummarizedData, summarizedData_);
    };
    DescribeSiteWafTimeSeriesDataResponseBody() = default ;
    DescribeSiteWafTimeSeriesDataResponseBody(const DescribeSiteWafTimeSeriesDataResponseBody &) = default ;
    DescribeSiteWafTimeSeriesDataResponseBody(DescribeSiteWafTimeSeriesDataResponseBody &&) = default ;
    DescribeSiteWafTimeSeriesDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteWafTimeSeriesDataResponseBody() = default ;
    DescribeSiteWafTimeSeriesDataResponseBody& operator=(const DescribeSiteWafTimeSeriesDataResponseBody &) = default ;
    DescribeSiteWafTimeSeriesDataResponseBody& operator=(DescribeSiteWafTimeSeriesDataResponseBody &&) = default ;
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
      // The aggregation method.
      shared_ptr<string> aggMethod_ {};
      // The summarized dimension name.
      shared_ptr<string> dimensionName_ {};
      // The summarized dimension value.
      shared_ptr<string> dimensionValue_ {};
      // The summarized metric name.
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
        // The start time of the time slice.
        // 
        // The time is in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is in UTC+0.
        shared_ptr<string> timeStamp_ {};
        // The value.
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
      // The returned data.
      shared_ptr<vector<Data::DetailData>> detailData_ {};
      // The query dimension.
      shared_ptr<string> dimensionName_ {};
      // The dimension value.
      shared_ptr<string> dimensionValue_ {};
      // The metric name.
      shared_ptr<string> fieldName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->endTime_ == nullptr && this->interval_ == nullptr && this->requestId_ == nullptr && this->samplingRate_ == nullptr && this->startTime_ == nullptr
        && this->summarizedData_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeSiteWafTimeSeriesDataResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeSiteWafTimeSeriesDataResponseBody::Data>) };
    inline vector<DescribeSiteWafTimeSeriesDataResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeSiteWafTimeSeriesDataResponseBody::Data>) };
    inline DescribeSiteWafTimeSeriesDataResponseBody& setData(const vector<DescribeSiteWafTimeSeriesDataResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSiteWafTimeSeriesDataResponseBody& setData(vector<DescribeSiteWafTimeSeriesDataResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSiteWafTimeSeriesDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline DescribeSiteWafTimeSeriesDataResponseBody& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSiteWafTimeSeriesDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // samplingRate Field Functions 
    bool hasSamplingRate() const { return this->samplingRate_ != nullptr;};
    void deleteSamplingRate() { this->samplingRate_ = nullptr;};
    inline float getSamplingRate() const { DARABONBA_PTR_GET_DEFAULT(samplingRate_, 0.0) };
    inline DescribeSiteWafTimeSeriesDataResponseBody& setSamplingRate(float samplingRate) { DARABONBA_PTR_SET_VALUE(samplingRate_, samplingRate) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSiteWafTimeSeriesDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // summarizedData Field Functions 
    bool hasSummarizedData() const { return this->summarizedData_ != nullptr;};
    void deleteSummarizedData() { this->summarizedData_ = nullptr;};
    inline const vector<DescribeSiteWafTimeSeriesDataResponseBody::SummarizedData> & getSummarizedData() const { DARABONBA_PTR_GET_CONST(summarizedData_, vector<DescribeSiteWafTimeSeriesDataResponseBody::SummarizedData>) };
    inline vector<DescribeSiteWafTimeSeriesDataResponseBody::SummarizedData> getSummarizedData() { DARABONBA_PTR_GET(summarizedData_, vector<DescribeSiteWafTimeSeriesDataResponseBody::SummarizedData>) };
    inline DescribeSiteWafTimeSeriesDataResponseBody& setSummarizedData(const vector<DescribeSiteWafTimeSeriesDataResponseBody::SummarizedData> & summarizedData) { DARABONBA_PTR_SET_VALUE(summarizedData_, summarizedData) };
    inline DescribeSiteWafTimeSeriesDataResponseBody& setSummarizedData(vector<DescribeSiteWafTimeSeriesDataResponseBody::SummarizedData> && summarizedData) { DARABONBA_PTR_SET_RVALUE(summarizedData_, summarizedData) };


  protected:
    // The returned data.
    shared_ptr<vector<DescribeSiteWafTimeSeriesDataResponseBody::Data>> data_ {};
    // The end time of the returned data.
    // 
    // The time is in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is in UTC+0.
    shared_ptr<string> endTime_ {};
    // The data granularity. Unit: seconds.
    shared_ptr<int64_t> interval_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The sampling rate. Unit: %.
    shared_ptr<float> samplingRate_ {};
    // The start time for the data query.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC+0.
    shared_ptr<string> startTime_ {};
    // The summarized query data.
    shared_ptr<vector<DescribeSiteWafTimeSeriesDataResponseBody::SummarizedData>> summarizedData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
