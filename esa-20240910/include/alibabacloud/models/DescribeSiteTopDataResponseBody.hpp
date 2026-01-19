// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITETOPDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITETOPDATARESPONSEBODY_HPP_
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
  class DescribeSiteTopDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteTopDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SamplingRate, samplingRate_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteTopDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SamplingRate, samplingRate_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeSiteTopDataResponseBody() = default ;
    DescribeSiteTopDataResponseBody(const DescribeSiteTopDataResponseBody &) = default ;
    DescribeSiteTopDataResponseBody(DescribeSiteTopDataResponseBody &&) = default ;
    DescribeSiteTopDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteTopDataResponseBody() = default ;
    DescribeSiteTopDataResponseBody& operator=(const DescribeSiteTopDataResponseBody &) = default ;
    DescribeSiteTopDataResponseBody& operator=(DescribeSiteTopDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DetailData, detailData_);
        DARABONBA_PTR_TO_JSON(DimensionName, dimensionName_);
        DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DetailData, detailData_);
        DARABONBA_PTR_FROM_JSON(DimensionName, dimensionName_);
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
          DARABONBA_PTR_TO_JSON(DimensionValue, dimensionValue_);
          DARABONBA_ANY_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, DetailData& obj) { 
          DARABONBA_PTR_FROM_JSON(DimensionValue, dimensionValue_);
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
        virtual bool empty() const override { return this->dimensionValue_ == nullptr
        && this->value_ == nullptr; };
        // dimensionValue Field Functions 
        bool hasDimensionValue() const { return this->dimensionValue_ != nullptr;};
        void deleteDimensionValue() { this->dimensionValue_ = nullptr;};
        inline string getDimensionValue() const { DARABONBA_PTR_GET_DEFAULT(dimensionValue_, "") };
        inline DetailData& setDimensionValue(string dimensionValue) { DARABONBA_PTR_SET_VALUE(dimensionValue_, dimensionValue) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline         const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
        Darabonba::Json & getValue() { DARABONBA_GET(value_) };
        inline DetailData& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
        inline DetailData& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


      protected:
        // The dimension value.
        shared_ptr<string> dimensionValue_ {};
        // The queried numeric value.
        Darabonba::Json value_ {};
      };

      virtual bool empty() const override { return this->detailData_ == nullptr
        && this->dimensionName_ == nullptr && this->fieldName_ == nullptr; };
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


      // fieldName Field Functions 
      bool hasFieldName() const { return this->fieldName_ != nullptr;};
      void deleteFieldName() { this->fieldName_ = nullptr;};
      inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
      inline Data& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    protected:
      // The returned data.
      shared_ptr<vector<Data::DetailData>> detailData_ {};
      // The dimension at which data was queried.
      shared_ptr<string> dimensionName_ {};
      // The metric name.
      shared_ptr<string> fieldName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->endTime_ == nullptr && this->requestId_ == nullptr && this->samplingRate_ == nullptr && this->startTime_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeSiteTopDataResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeSiteTopDataResponseBody::Data>) };
    inline vector<DescribeSiteTopDataResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeSiteTopDataResponseBody::Data>) };
    inline DescribeSiteTopDataResponseBody& setData(const vector<DescribeSiteTopDataResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSiteTopDataResponseBody& setData(vector<DescribeSiteTopDataResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSiteTopDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSiteTopDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // samplingRate Field Functions 
    bool hasSamplingRate() const { return this->samplingRate_ != nullptr;};
    void deleteSamplingRate() { this->samplingRate_ = nullptr;};
    inline float getSamplingRate() const { DARABONBA_PTR_GET_DEFAULT(samplingRate_, 0.0) };
    inline DescribeSiteTopDataResponseBody& setSamplingRate(float samplingRate) { DARABONBA_PTR_SET_VALUE(samplingRate_, samplingRate) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSiteTopDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The returned data.
    shared_ptr<vector<DescribeSiteTopDataResponseBody::Data>> data_ {};
    // The end of the time range during which data was queried.
    // 
    // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    shared_ptr<string> endTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The sampling rate.
    shared_ptr<float> samplingRate_ {};
    // The beginning of the time range during which data was queried.
    // 
    // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
