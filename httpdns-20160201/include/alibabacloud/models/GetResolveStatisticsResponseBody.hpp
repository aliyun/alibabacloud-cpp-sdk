// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOLVESTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOLVESTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Httpdns20160201
{
namespace Models
{
  class GetResolveStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResolveStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataPoints, dataPoints_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResolveStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataPoints, dataPoints_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetResolveStatisticsResponseBody() = default ;
    GetResolveStatisticsResponseBody(const GetResolveStatisticsResponseBody &) = default ;
    GetResolveStatisticsResponseBody(GetResolveStatisticsResponseBody &&) = default ;
    GetResolveStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResolveStatisticsResponseBody() = default ;
    GetResolveStatisticsResponseBody& operator=(const GetResolveStatisticsResponseBody &) = default ;
    GetResolveStatisticsResponseBody& operator=(GetResolveStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataPoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataPoints& obj) { 
        DARABONBA_PTR_TO_JSON(DataPoint, dataPoint_);
      };
      friend void from_json(const Darabonba::Json& j, DataPoints& obj) { 
        DARABONBA_PTR_FROM_JSON(DataPoint, dataPoint_);
      };
      DataPoints() = default ;
      DataPoints(const DataPoints &) = default ;
      DataPoints(DataPoints &&) = default ;
      DataPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataPoints() = default ;
      DataPoints& operator=(const DataPoints &) = default ;
      DataPoints& operator=(DataPoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataPoint : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataPoint& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Time, time_);
        };
        friend void from_json(const Darabonba::Json& j, DataPoint& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
        };
        DataPoint() = default ;
        DataPoint(const DataPoint &) = default ;
        DataPoint(DataPoint &&) = default ;
        DataPoint(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataPoint() = default ;
        DataPoint& operator=(const DataPoint &) = default ;
        DataPoint& operator=(DataPoint &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->time_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline DataPoint& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline int32_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0) };
        inline DataPoint& setTime(int32_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      protected:
        shared_ptr<int32_t> count_ {};
        shared_ptr<int32_t> time_ {};
      };

      virtual bool empty() const override { return this->dataPoint_ == nullptr; };
      // dataPoint Field Functions 
      bool hasDataPoint() const { return this->dataPoint_ != nullptr;};
      void deleteDataPoint() { this->dataPoint_ = nullptr;};
      inline const vector<DataPoints::DataPoint> & getDataPoint() const { DARABONBA_PTR_GET_CONST(dataPoint_, vector<DataPoints::DataPoint>) };
      inline vector<DataPoints::DataPoint> getDataPoint() { DARABONBA_PTR_GET(dataPoint_, vector<DataPoints::DataPoint>) };
      inline DataPoints& setDataPoint(const vector<DataPoints::DataPoint> & dataPoint) { DARABONBA_PTR_SET_VALUE(dataPoint_, dataPoint) };
      inline DataPoints& setDataPoint(vector<DataPoints::DataPoint> && dataPoint) { DARABONBA_PTR_SET_RVALUE(dataPoint_, dataPoint) };


    protected:
      shared_ptr<vector<DataPoints::DataPoint>> dataPoint_ {};
    };

    virtual bool empty() const override { return this->dataPoints_ == nullptr
        && this->requestId_ == nullptr; };
    // dataPoints Field Functions 
    bool hasDataPoints() const { return this->dataPoints_ != nullptr;};
    void deleteDataPoints() { this->dataPoints_ = nullptr;};
    inline const GetResolveStatisticsResponseBody::DataPoints & getDataPoints() const { DARABONBA_PTR_GET_CONST(dataPoints_, GetResolveStatisticsResponseBody::DataPoints) };
    inline GetResolveStatisticsResponseBody::DataPoints getDataPoints() { DARABONBA_PTR_GET(dataPoints_, GetResolveStatisticsResponseBody::DataPoints) };
    inline GetResolveStatisticsResponseBody& setDataPoints(const GetResolveStatisticsResponseBody::DataPoints & dataPoints) { DARABONBA_PTR_SET_VALUE(dataPoints_, dataPoints) };
    inline GetResolveStatisticsResponseBody& setDataPoints(GetResolveStatisticsResponseBody::DataPoints && dataPoints) { DARABONBA_PTR_SET_RVALUE(dataPoints_, dataPoints) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResolveStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetResolveStatisticsResponseBody::DataPoints> dataPoints_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Httpdns20160201
#endif
