// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAFFICSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAFFICSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListTrafficStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrafficStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrafficStatistics, trafficStatistics_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrafficStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrafficStatistics, trafficStatistics_);
    };
    ListTrafficStatisticsResponseBody() = default ;
    ListTrafficStatisticsResponseBody(const ListTrafficStatisticsResponseBody &) = default ;
    ListTrafficStatisticsResponseBody(ListTrafficStatisticsResponseBody &&) = default ;
    ListTrafficStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrafficStatisticsResponseBody() = default ;
    ListTrafficStatisticsResponseBody& operator=(const ListTrafficStatisticsResponseBody &) = default ;
    ListTrafficStatisticsResponseBody& operator=(ListTrafficStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrafficStatistics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrafficStatistics& obj) { 
        DARABONBA_PTR_TO_JSON(TrafficStatisticData, trafficStatisticData_);
        DARABONBA_PTR_TO_JSON(TrafficStatisticTarget, trafficStatisticTarget_);
      };
      friend void from_json(const Darabonba::Json& j, TrafficStatistics& obj) { 
        DARABONBA_PTR_FROM_JSON(TrafficStatisticData, trafficStatisticData_);
        DARABONBA_PTR_FROM_JSON(TrafficStatisticTarget, trafficStatisticTarget_);
      };
      TrafficStatistics() = default ;
      TrafficStatistics(const TrafficStatistics &) = default ;
      TrafficStatistics(TrafficStatistics &&) = default ;
      TrafficStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrafficStatistics() = default ;
      TrafficStatistics& operator=(const TrafficStatistics &) = default ;
      TrafficStatistics& operator=(TrafficStatistics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TrafficStatisticData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TrafficStatisticData& obj) { 
          DARABONBA_PTR_TO_JSON(TrafficStatisticTime, trafficStatisticTime_);
          DARABONBA_PTR_TO_JSON(TrafficStatisticValue, trafficStatisticValue_);
        };
        friend void from_json(const Darabonba::Json& j, TrafficStatisticData& obj) { 
          DARABONBA_PTR_FROM_JSON(TrafficStatisticTime, trafficStatisticTime_);
          DARABONBA_PTR_FROM_JSON(TrafficStatisticValue, trafficStatisticValue_);
        };
        TrafficStatisticData() = default ;
        TrafficStatisticData(const TrafficStatisticData &) = default ;
        TrafficStatisticData(TrafficStatisticData &&) = default ;
        TrafficStatisticData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TrafficStatisticData() = default ;
        TrafficStatisticData& operator=(const TrafficStatisticData &) = default ;
        TrafficStatisticData& operator=(TrafficStatisticData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->trafficStatisticTime_ == nullptr
        && this->trafficStatisticValue_ == nullptr; };
        // trafficStatisticTime Field Functions 
        bool hasTrafficStatisticTime() const { return this->trafficStatisticTime_ != nullptr;};
        void deleteTrafficStatisticTime() { this->trafficStatisticTime_ = nullptr;};
        inline int64_t getTrafficStatisticTime() const { DARABONBA_PTR_GET_DEFAULT(trafficStatisticTime_, 0L) };
        inline TrafficStatisticData& setTrafficStatisticTime(int64_t trafficStatisticTime) { DARABONBA_PTR_SET_VALUE(trafficStatisticTime_, trafficStatisticTime) };


        // trafficStatisticValue Field Functions 
        bool hasTrafficStatisticValue() const { return this->trafficStatisticValue_ != nullptr;};
        void deleteTrafficStatisticValue() { this->trafficStatisticValue_ = nullptr;};
        inline double getTrafficStatisticValue() const { DARABONBA_PTR_GET_DEFAULT(trafficStatisticValue_, 0.0) };
        inline TrafficStatisticData& setTrafficStatisticValue(double trafficStatisticValue) { DARABONBA_PTR_SET_VALUE(trafficStatisticValue_, trafficStatisticValue) };


      protected:
        shared_ptr<int64_t> trafficStatisticTime_ {};
        shared_ptr<double> trafficStatisticValue_ {};
      };

      virtual bool empty() const override { return this->trafficStatisticData_ == nullptr
        && this->trafficStatisticTarget_ == nullptr; };
      // trafficStatisticData Field Functions 
      bool hasTrafficStatisticData() const { return this->trafficStatisticData_ != nullptr;};
      void deleteTrafficStatisticData() { this->trafficStatisticData_ = nullptr;};
      inline const vector<TrafficStatistics::TrafficStatisticData> & getTrafficStatisticData() const { DARABONBA_PTR_GET_CONST(trafficStatisticData_, vector<TrafficStatistics::TrafficStatisticData>) };
      inline vector<TrafficStatistics::TrafficStatisticData> getTrafficStatisticData() { DARABONBA_PTR_GET(trafficStatisticData_, vector<TrafficStatistics::TrafficStatisticData>) };
      inline TrafficStatistics& setTrafficStatisticData(const vector<TrafficStatistics::TrafficStatisticData> & trafficStatisticData) { DARABONBA_PTR_SET_VALUE(trafficStatisticData_, trafficStatisticData) };
      inline TrafficStatistics& setTrafficStatisticData(vector<TrafficStatistics::TrafficStatisticData> && trafficStatisticData) { DARABONBA_PTR_SET_RVALUE(trafficStatisticData_, trafficStatisticData) };


      // trafficStatisticTarget Field Functions 
      bool hasTrafficStatisticTarget() const { return this->trafficStatisticTarget_ != nullptr;};
      void deleteTrafficStatisticTarget() { this->trafficStatisticTarget_ = nullptr;};
      inline string getTrafficStatisticTarget() const { DARABONBA_PTR_GET_DEFAULT(trafficStatisticTarget_, "") };
      inline TrafficStatistics& setTrafficStatisticTarget(string trafficStatisticTarget) { DARABONBA_PTR_SET_VALUE(trafficStatisticTarget_, trafficStatisticTarget) };


    protected:
      shared_ptr<vector<TrafficStatistics::TrafficStatisticData>> trafficStatisticData_ {};
      shared_ptr<string> trafficStatisticTarget_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->trafficStatistics_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTrafficStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trafficStatistics Field Functions 
    bool hasTrafficStatistics() const { return this->trafficStatistics_ != nullptr;};
    void deleteTrafficStatistics() { this->trafficStatistics_ = nullptr;};
    inline const vector<ListTrafficStatisticsResponseBody::TrafficStatistics> & getTrafficStatistics() const { DARABONBA_PTR_GET_CONST(trafficStatistics_, vector<ListTrafficStatisticsResponseBody::TrafficStatistics>) };
    inline vector<ListTrafficStatisticsResponseBody::TrafficStatistics> getTrafficStatistics() { DARABONBA_PTR_GET(trafficStatistics_, vector<ListTrafficStatisticsResponseBody::TrafficStatistics>) };
    inline ListTrafficStatisticsResponseBody& setTrafficStatistics(const vector<ListTrafficStatisticsResponseBody::TrafficStatistics> & trafficStatistics) { DARABONBA_PTR_SET_VALUE(trafficStatistics_, trafficStatistics) };
    inline ListTrafficStatisticsResponseBody& setTrafficStatistics(vector<ListTrafficStatisticsResponseBody::TrafficStatistics> && trafficStatistics) { DARABONBA_PTR_SET_RVALUE(trafficStatistics_, trafficStatistics) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListTrafficStatisticsResponseBody::TrafficStatistics>> trafficStatistics_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
