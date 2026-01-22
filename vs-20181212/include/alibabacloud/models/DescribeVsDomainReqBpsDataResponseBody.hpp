// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINREQBPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINREQBPSDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainReqBpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainReqBpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ReqBpsDataPerInterval, reqBpsDataPerInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainReqBpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ReqBpsDataPerInterval, reqBpsDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeVsDomainReqBpsDataResponseBody() = default ;
    DescribeVsDomainReqBpsDataResponseBody(const DescribeVsDomainReqBpsDataResponseBody &) = default ;
    DescribeVsDomainReqBpsDataResponseBody(DescribeVsDomainReqBpsDataResponseBody &&) = default ;
    DescribeVsDomainReqBpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainReqBpsDataResponseBody() = default ;
    DescribeVsDomainReqBpsDataResponseBody& operator=(const DescribeVsDomainReqBpsDataResponseBody &) = default ;
    DescribeVsDomainReqBpsDataResponseBody& operator=(DescribeVsDomainReqBpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ReqBpsDataPerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReqBpsDataPerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, ReqBpsDataPerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      ReqBpsDataPerInterval() = default ;
      ReqBpsDataPerInterval(const ReqBpsDataPerInterval &) = default ;
      ReqBpsDataPerInterval(ReqBpsDataPerInterval &&) = default ;
      ReqBpsDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReqBpsDataPerInterval() = default ;
      ReqBpsDataPerInterval& operator=(const ReqBpsDataPerInterval &) = default ;
      ReqBpsDataPerInterval& operator=(ReqBpsDataPerInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
          DARABONBA_PTR_TO_JSON(ReqBpsValue, reqBpsValue_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(ReqBpsValue, reqBpsValue_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        DataModule() = default ;
        DataModule(const DataModule &) = default ;
        DataModule(DataModule &&) = default ;
        DataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataModule() = default ;
        DataModule& operator=(const DataModule &) = default ;
        DataModule& operator=(DataModule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->reqBpsValue_ == nullptr
        && this->timeStamp_ == nullptr; };
        // reqBpsValue Field Functions 
        bool hasReqBpsValue() const { return this->reqBpsValue_ != nullptr;};
        void deleteReqBpsValue() { this->reqBpsValue_ = nullptr;};
        inline string getReqBpsValue() const { DARABONBA_PTR_GET_DEFAULT(reqBpsValue_, "") };
        inline DataModule& setReqBpsValue(string reqBpsValue) { DARABONBA_PTR_SET_VALUE(reqBpsValue_, reqBpsValue) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        shared_ptr<string> reqBpsValue_ {};
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->dataModule_ == nullptr; };
      // dataModule Field Functions 
      bool hasDataModule() const { return this->dataModule_ != nullptr;};
      void deleteDataModule() { this->dataModule_ = nullptr;};
      inline const vector<ReqBpsDataPerInterval::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<ReqBpsDataPerInterval::DataModule>) };
      inline vector<ReqBpsDataPerInterval::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<ReqBpsDataPerInterval::DataModule>) };
      inline ReqBpsDataPerInterval& setDataModule(const vector<ReqBpsDataPerInterval::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline ReqBpsDataPerInterval& setDataModule(vector<ReqBpsDataPerInterval::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<ReqBpsDataPerInterval::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->reqBpsDataPerInterval_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeVsDomainReqBpsDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVsDomainReqBpsDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVsDomainReqBpsDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // reqBpsDataPerInterval Field Functions 
    bool hasReqBpsDataPerInterval() const { return this->reqBpsDataPerInterval_ != nullptr;};
    void deleteReqBpsDataPerInterval() { this->reqBpsDataPerInterval_ = nullptr;};
    inline const DescribeVsDomainReqBpsDataResponseBody::ReqBpsDataPerInterval & getReqBpsDataPerInterval() const { DARABONBA_PTR_GET_CONST(reqBpsDataPerInterval_, DescribeVsDomainReqBpsDataResponseBody::ReqBpsDataPerInterval) };
    inline DescribeVsDomainReqBpsDataResponseBody::ReqBpsDataPerInterval getReqBpsDataPerInterval() { DARABONBA_PTR_GET(reqBpsDataPerInterval_, DescribeVsDomainReqBpsDataResponseBody::ReqBpsDataPerInterval) };
    inline DescribeVsDomainReqBpsDataResponseBody& setReqBpsDataPerInterval(const DescribeVsDomainReqBpsDataResponseBody::ReqBpsDataPerInterval & reqBpsDataPerInterval) { DARABONBA_PTR_SET_VALUE(reqBpsDataPerInterval_, reqBpsDataPerInterval) };
    inline DescribeVsDomainReqBpsDataResponseBody& setReqBpsDataPerInterval(DescribeVsDomainReqBpsDataResponseBody::ReqBpsDataPerInterval && reqBpsDataPerInterval) { DARABONBA_PTR_SET_RVALUE(reqBpsDataPerInterval_, reqBpsDataPerInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVsDomainReqBpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVsDomainReqBpsDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> dataInterval_ {};
    shared_ptr<string> domainName_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<DescribeVsDomainReqBpsDataResponseBody::ReqBpsDataPerInterval> reqBpsDataPerInterval_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
