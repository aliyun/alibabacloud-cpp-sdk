// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPOPTRAFFICSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPOPTRAFFICSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListPopTrafficStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPopTrafficStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrafficData, trafficData_);
    };
    friend void from_json(const Darabonba::Json& j, ListPopTrafficStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrafficData, trafficData_);
    };
    ListPopTrafficStatisticsResponseBody() = default ;
    ListPopTrafficStatisticsResponseBody(const ListPopTrafficStatisticsResponseBody &) = default ;
    ListPopTrafficStatisticsResponseBody(ListPopTrafficStatisticsResponseBody &&) = default ;
    ListPopTrafficStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPopTrafficStatisticsResponseBody() = default ;
    ListPopTrafficStatisticsResponseBody& operator=(const ListPopTrafficStatisticsResponseBody &) = default ;
    ListPopTrafficStatisticsResponseBody& operator=(ListPopTrafficStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrafficData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrafficData& obj) { 
        DARABONBA_PTR_TO_JSON(Datapoints, datapoints_);
        DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      };
      friend void from_json(const Darabonba::Json& j, TrafficData& obj) { 
        DARABONBA_PTR_FROM_JSON(Datapoints, datapoints_);
        DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      };
      TrafficData() = default ;
      TrafficData(const TrafficData &) = default ;
      TrafficData(TrafficData &&) = default ;
      TrafficData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrafficData() = default ;
      TrafficData& operator=(const TrafficData &) = default ;
      TrafficData& operator=(TrafficData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Datapoints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Datapoints& obj) { 
          DARABONBA_PTR_TO_JSON(Average, average_);
          DARABONBA_PTR_TO_JSON(DateTime, dateTime_);
        };
        friend void from_json(const Darabonba::Json& j, Datapoints& obj) { 
          DARABONBA_PTR_FROM_JSON(Average, average_);
          DARABONBA_PTR_FROM_JSON(DateTime, dateTime_);
        };
        Datapoints() = default ;
        Datapoints(const Datapoints &) = default ;
        Datapoints(Datapoints &&) = default ;
        Datapoints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Datapoints() = default ;
        Datapoints& operator=(const Datapoints &) = default ;
        Datapoints& operator=(Datapoints &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->average_ == nullptr
        && this->dateTime_ == nullptr; };
        // average Field Functions 
        bool hasAverage() const { return this->average_ != nullptr;};
        void deleteAverage() { this->average_ = nullptr;};
        inline double getAverage() const { DARABONBA_PTR_GET_DEFAULT(average_, 0.0) };
        inline Datapoints& setAverage(double average) { DARABONBA_PTR_SET_VALUE(average_, average) };


        // dateTime Field Functions 
        bool hasDateTime() const { return this->dateTime_ != nullptr;};
        void deleteDateTime() { this->dateTime_ = nullptr;};
        inline string getDateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
        inline Datapoints& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


      protected:
        shared_ptr<double> average_ {};
        shared_ptr<string> dateTime_ {};
      };

      virtual bool empty() const override { return this->datapoints_ == nullptr
        && this->metricName_ == nullptr; };
      // datapoints Field Functions 
      bool hasDatapoints() const { return this->datapoints_ != nullptr;};
      void deleteDatapoints() { this->datapoints_ = nullptr;};
      inline const vector<TrafficData::Datapoints> & getDatapoints() const { DARABONBA_PTR_GET_CONST(datapoints_, vector<TrafficData::Datapoints>) };
      inline vector<TrafficData::Datapoints> getDatapoints() { DARABONBA_PTR_GET(datapoints_, vector<TrafficData::Datapoints>) };
      inline TrafficData& setDatapoints(const vector<TrafficData::Datapoints> & datapoints) { DARABONBA_PTR_SET_VALUE(datapoints_, datapoints) };
      inline TrafficData& setDatapoints(vector<TrafficData::Datapoints> && datapoints) { DARABONBA_PTR_SET_RVALUE(datapoints_, datapoints) };


      // metricName Field Functions 
      bool hasMetricName() const { return this->metricName_ != nullptr;};
      void deleteMetricName() { this->metricName_ = nullptr;};
      inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
      inline TrafficData& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    protected:
      shared_ptr<vector<TrafficData::Datapoints>> datapoints_ {};
      shared_ptr<string> metricName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->trafficData_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPopTrafficStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trafficData Field Functions 
    bool hasTrafficData() const { return this->trafficData_ != nullptr;};
    void deleteTrafficData() { this->trafficData_ = nullptr;};
    inline const vector<ListPopTrafficStatisticsResponseBody::TrafficData> & getTrafficData() const { DARABONBA_PTR_GET_CONST(trafficData_, vector<ListPopTrafficStatisticsResponseBody::TrafficData>) };
    inline vector<ListPopTrafficStatisticsResponseBody::TrafficData> getTrafficData() { DARABONBA_PTR_GET(trafficData_, vector<ListPopTrafficStatisticsResponseBody::TrafficData>) };
    inline ListPopTrafficStatisticsResponseBody& setTrafficData(const vector<ListPopTrafficStatisticsResponseBody::TrafficData> & trafficData) { DARABONBA_PTR_SET_VALUE(trafficData_, trafficData) };
    inline ListPopTrafficStatisticsResponseBody& setTrafficData(vector<ListPopTrafficStatisticsResponseBody::TrafficData> && trafficData) { DARABONBA_PTR_SET_RVALUE(trafficData_, trafficData) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListPopTrafficStatisticsResponseBody::TrafficData>> trafficData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
