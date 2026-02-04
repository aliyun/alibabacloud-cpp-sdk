// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINMULTIUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINMULTIUSAGEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainMultiUsageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainMultiUsageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestPerInterval, requestPerInterval_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TrafficPerInterval, trafficPerInterval_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainMultiUsageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestPerInterval, requestPerInterval_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TrafficPerInterval, trafficPerInterval_);
    };
    DescribeDcdnDomainMultiUsageDataResponseBody() = default ;
    DescribeDcdnDomainMultiUsageDataResponseBody(const DescribeDcdnDomainMultiUsageDataResponseBody &) = default ;
    DescribeDcdnDomainMultiUsageDataResponseBody(DescribeDcdnDomainMultiUsageDataResponseBody &&) = default ;
    DescribeDcdnDomainMultiUsageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainMultiUsageDataResponseBody() = default ;
    DescribeDcdnDomainMultiUsageDataResponseBody& operator=(const DescribeDcdnDomainMultiUsageDataResponseBody &) = default ;
    DescribeDcdnDomainMultiUsageDataResponseBody& operator=(DescribeDcdnDomainMultiUsageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TrafficPerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TrafficPerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(TrafficDataModule, trafficDataModule_);
      };
      friend void from_json(const Darabonba::Json& j, TrafficPerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(TrafficDataModule, trafficDataModule_);
      };
      TrafficPerInterval() = default ;
      TrafficPerInterval(const TrafficPerInterval &) = default ;
      TrafficPerInterval(TrafficPerInterval &&) = default ;
      TrafficPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TrafficPerInterval() = default ;
      TrafficPerInterval& operator=(const TrafficPerInterval &) = default ;
      TrafficPerInterval& operator=(TrafficPerInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TrafficDataModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TrafficDataModule& obj) { 
          DARABONBA_PTR_TO_JSON(Area, area_);
          DARABONBA_PTR_TO_JSON(Bps, bps_);
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, TrafficDataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(Area, area_);
          DARABONBA_PTR_FROM_JSON(Bps, bps_);
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        TrafficDataModule() = default ;
        TrafficDataModule(const TrafficDataModule &) = default ;
        TrafficDataModule(TrafficDataModule &&) = default ;
        TrafficDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TrafficDataModule() = default ;
        TrafficDataModule& operator=(const TrafficDataModule &) = default ;
        TrafficDataModule& operator=(TrafficDataModule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->area_ == nullptr
        && this->bps_ == nullptr && this->domain_ == nullptr && this->timeStamp_ == nullptr && this->type_ == nullptr; };
        // area Field Functions 
        bool hasArea() const { return this->area_ != nullptr;};
        void deleteArea() { this->area_ = nullptr;};
        inline string getArea() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
        inline TrafficDataModule& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


        // bps Field Functions 
        bool hasBps() const { return this->bps_ != nullptr;};
        void deleteBps() { this->bps_ = nullptr;};
        inline float getBps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0.0) };
        inline TrafficDataModule& setBps(float bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline TrafficDataModule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline TrafficDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline TrafficDataModule& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The name of the region.
        shared_ptr<string> area_ {};
        // The number of bits per second.
        shared_ptr<float> bps_ {};
        // The domain name.
        shared_ptr<string> domain_ {};
        // The timestamp of the data returned.
        shared_ptr<string> timeStamp_ {};
        // The type of the network traffic. Valid values: Simple, IPA, and WebSocket.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->trafficDataModule_ == nullptr; };
      // trafficDataModule Field Functions 
      bool hasTrafficDataModule() const { return this->trafficDataModule_ != nullptr;};
      void deleteTrafficDataModule() { this->trafficDataModule_ = nullptr;};
      inline const vector<TrafficPerInterval::TrafficDataModule> & getTrafficDataModule() const { DARABONBA_PTR_GET_CONST(trafficDataModule_, vector<TrafficPerInterval::TrafficDataModule>) };
      inline vector<TrafficPerInterval::TrafficDataModule> getTrafficDataModule() { DARABONBA_PTR_GET(trafficDataModule_, vector<TrafficPerInterval::TrafficDataModule>) };
      inline TrafficPerInterval& setTrafficDataModule(const vector<TrafficPerInterval::TrafficDataModule> & trafficDataModule) { DARABONBA_PTR_SET_VALUE(trafficDataModule_, trafficDataModule) };
      inline TrafficPerInterval& setTrafficDataModule(vector<TrafficPerInterval::TrafficDataModule> && trafficDataModule) { DARABONBA_PTR_SET_RVALUE(trafficDataModule_, trafficDataModule) };


    protected:
      shared_ptr<vector<TrafficPerInterval::TrafficDataModule>> trafficDataModule_ {};
    };

    class RequestPerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RequestPerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(RequestDataModule, requestDataModule_);
      };
      friend void from_json(const Darabonba::Json& j, RequestPerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(RequestDataModule, requestDataModule_);
      };
      RequestPerInterval() = default ;
      RequestPerInterval(const RequestPerInterval &) = default ;
      RequestPerInterval(RequestPerInterval &&) = default ;
      RequestPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RequestPerInterval() = default ;
      RequestPerInterval& operator=(const RequestPerInterval &) = default ;
      RequestPerInterval& operator=(RequestPerInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RequestDataModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RequestDataModule& obj) { 
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(Request, request_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, RequestDataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(Request, request_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        RequestDataModule() = default ;
        RequestDataModule(const RequestDataModule &) = default ;
        RequestDataModule(RequestDataModule &&) = default ;
        RequestDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RequestDataModule() = default ;
        RequestDataModule& operator=(const RequestDataModule &) = default ;
        RequestDataModule& operator=(RequestDataModule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->domain_ == nullptr
        && this->request_ == nullptr && this->timeStamp_ == nullptr && this->type_ == nullptr; };
        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline RequestDataModule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // request Field Functions 
        bool hasRequest() const { return this->request_ != nullptr;};
        void deleteRequest() { this->request_ = nullptr;};
        inline int64_t getRequest() const { DARABONBA_PTR_GET_DEFAULT(request_, 0L) };
        inline RequestDataModule& setRequest(int64_t request) { DARABONBA_PTR_SET_VALUE(request_, request) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline RequestDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline RequestDataModule& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The domain name.
        shared_ptr<string> domain_ {};
        // The number of requests.
        shared_ptr<int64_t> request_ {};
        // The timestamp of the data returned.
        shared_ptr<string> timeStamp_ {};
        // The type of the requests. Valid values: StaticHttps, DynamicHttps, DynamicHttp, StaticQuic, and DynamicQuic.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->requestDataModule_ == nullptr; };
      // requestDataModule Field Functions 
      bool hasRequestDataModule() const { return this->requestDataModule_ != nullptr;};
      void deleteRequestDataModule() { this->requestDataModule_ = nullptr;};
      inline const vector<RequestPerInterval::RequestDataModule> & getRequestDataModule() const { DARABONBA_PTR_GET_CONST(requestDataModule_, vector<RequestPerInterval::RequestDataModule>) };
      inline vector<RequestPerInterval::RequestDataModule> getRequestDataModule() { DARABONBA_PTR_GET(requestDataModule_, vector<RequestPerInterval::RequestDataModule>) };
      inline RequestPerInterval& setRequestDataModule(const vector<RequestPerInterval::RequestDataModule> & requestDataModule) { DARABONBA_PTR_SET_VALUE(requestDataModule_, requestDataModule) };
      inline RequestPerInterval& setRequestDataModule(vector<RequestPerInterval::RequestDataModule> && requestDataModule) { DARABONBA_PTR_SET_RVALUE(requestDataModule_, requestDataModule) };


    protected:
      shared_ptr<vector<RequestPerInterval::RequestDataModule>> requestDataModule_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->requestId_ == nullptr && this->requestPerInterval_ == nullptr && this->startTime_ == nullptr && this->trafficPerInterval_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnDomainMultiUsageDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainMultiUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestPerInterval Field Functions 
    bool hasRequestPerInterval() const { return this->requestPerInterval_ != nullptr;};
    void deleteRequestPerInterval() { this->requestPerInterval_ = nullptr;};
    inline const DescribeDcdnDomainMultiUsageDataResponseBody::RequestPerInterval & getRequestPerInterval() const { DARABONBA_PTR_GET_CONST(requestPerInterval_, DescribeDcdnDomainMultiUsageDataResponseBody::RequestPerInterval) };
    inline DescribeDcdnDomainMultiUsageDataResponseBody::RequestPerInterval getRequestPerInterval() { DARABONBA_PTR_GET(requestPerInterval_, DescribeDcdnDomainMultiUsageDataResponseBody::RequestPerInterval) };
    inline DescribeDcdnDomainMultiUsageDataResponseBody& setRequestPerInterval(const DescribeDcdnDomainMultiUsageDataResponseBody::RequestPerInterval & requestPerInterval) { DARABONBA_PTR_SET_VALUE(requestPerInterval_, requestPerInterval) };
    inline DescribeDcdnDomainMultiUsageDataResponseBody& setRequestPerInterval(DescribeDcdnDomainMultiUsageDataResponseBody::RequestPerInterval && requestPerInterval) { DARABONBA_PTR_SET_RVALUE(requestPerInterval_, requestPerInterval) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnDomainMultiUsageDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // trafficPerInterval Field Functions 
    bool hasTrafficPerInterval() const { return this->trafficPerInterval_ != nullptr;};
    void deleteTrafficPerInterval() { this->trafficPerInterval_ = nullptr;};
    inline const DescribeDcdnDomainMultiUsageDataResponseBody::TrafficPerInterval & getTrafficPerInterval() const { DARABONBA_PTR_GET_CONST(trafficPerInterval_, DescribeDcdnDomainMultiUsageDataResponseBody::TrafficPerInterval) };
    inline DescribeDcdnDomainMultiUsageDataResponseBody::TrafficPerInterval getTrafficPerInterval() { DARABONBA_PTR_GET(trafficPerInterval_, DescribeDcdnDomainMultiUsageDataResponseBody::TrafficPerInterval) };
    inline DescribeDcdnDomainMultiUsageDataResponseBody& setTrafficPerInterval(const DescribeDcdnDomainMultiUsageDataResponseBody::TrafficPerInterval & trafficPerInterval) { DARABONBA_PTR_SET_VALUE(trafficPerInterval_, trafficPerInterval) };
    inline DescribeDcdnDomainMultiUsageDataResponseBody& setTrafficPerInterval(DescribeDcdnDomainMultiUsageDataResponseBody::TrafficPerInterval && trafficPerInterval) { DARABONBA_PTR_SET_RVALUE(trafficPerInterval_, trafficPerInterval) };


  protected:
    // The end of the time range that was queried.
    shared_ptr<string> endTime_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about requests collected every 5 minutes.
    shared_ptr<DescribeDcdnDomainMultiUsageDataResponseBody::RequestPerInterval> requestPerInterval_ {};
    // The beginning of the time range that was queried.
    shared_ptr<string> startTime_ {};
    // The statistics of network traffic collected every 5 minutes.
    shared_ptr<DescribeDcdnDomainMultiUsageDataResponseBody::TrafficPerInterval> trafficPerInterval_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
