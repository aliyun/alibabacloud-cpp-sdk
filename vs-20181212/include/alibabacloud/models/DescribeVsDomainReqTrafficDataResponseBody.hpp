// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINREQTRAFFICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINREQTRAFFICDATARESPONSEBODY_HPP_
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
  class DescribeVsDomainReqTrafficDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainReqTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ReqTrafficDataPerInterval, reqTrafficDataPerInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainReqTrafficDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ReqTrafficDataPerInterval, reqTrafficDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeVsDomainReqTrafficDataResponseBody() = default ;
    DescribeVsDomainReqTrafficDataResponseBody(const DescribeVsDomainReqTrafficDataResponseBody &) = default ;
    DescribeVsDomainReqTrafficDataResponseBody(DescribeVsDomainReqTrafficDataResponseBody &&) = default ;
    DescribeVsDomainReqTrafficDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainReqTrafficDataResponseBody() = default ;
    DescribeVsDomainReqTrafficDataResponseBody& operator=(const DescribeVsDomainReqTrafficDataResponseBody &) = default ;
    DescribeVsDomainReqTrafficDataResponseBody& operator=(DescribeVsDomainReqTrafficDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ReqTrafficDataPerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReqTrafficDataPerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, ReqTrafficDataPerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      ReqTrafficDataPerInterval() = default ;
      ReqTrafficDataPerInterval(const ReqTrafficDataPerInterval &) = default ;
      ReqTrafficDataPerInterval(ReqTrafficDataPerInterval &&) = default ;
      ReqTrafficDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReqTrafficDataPerInterval() = default ;
      ReqTrafficDataPerInterval& operator=(const ReqTrafficDataPerInterval &) = default ;
      ReqTrafficDataPerInterval& operator=(ReqTrafficDataPerInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
          DARABONBA_PTR_TO_JSON(ReqTrafficValue, reqTrafficValue_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(ReqTrafficValue, reqTrafficValue_);
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
        virtual bool empty() const override { return this->reqTrafficValue_ == nullptr
        && this->timeStamp_ == nullptr; };
        // reqTrafficValue Field Functions 
        bool hasReqTrafficValue() const { return this->reqTrafficValue_ != nullptr;};
        void deleteReqTrafficValue() { this->reqTrafficValue_ = nullptr;};
        inline string getReqTrafficValue() const { DARABONBA_PTR_GET_DEFAULT(reqTrafficValue_, "") };
        inline DataModule& setReqTrafficValue(string reqTrafficValue) { DARABONBA_PTR_SET_VALUE(reqTrafficValue_, reqTrafficValue) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        shared_ptr<string> reqTrafficValue_ {};
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->dataModule_ == nullptr; };
      // dataModule Field Functions 
      bool hasDataModule() const { return this->dataModule_ != nullptr;};
      void deleteDataModule() { this->dataModule_ = nullptr;};
      inline const vector<ReqTrafficDataPerInterval::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<ReqTrafficDataPerInterval::DataModule>) };
      inline vector<ReqTrafficDataPerInterval::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<ReqTrafficDataPerInterval::DataModule>) };
      inline ReqTrafficDataPerInterval& setDataModule(const vector<ReqTrafficDataPerInterval::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline ReqTrafficDataPerInterval& setDataModule(vector<ReqTrafficDataPerInterval::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<ReqTrafficDataPerInterval::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->reqTrafficDataPerInterval_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeVsDomainReqTrafficDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVsDomainReqTrafficDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVsDomainReqTrafficDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // reqTrafficDataPerInterval Field Functions 
    bool hasReqTrafficDataPerInterval() const { return this->reqTrafficDataPerInterval_ != nullptr;};
    void deleteReqTrafficDataPerInterval() { this->reqTrafficDataPerInterval_ = nullptr;};
    inline const DescribeVsDomainReqTrafficDataResponseBody::ReqTrafficDataPerInterval & getReqTrafficDataPerInterval() const { DARABONBA_PTR_GET_CONST(reqTrafficDataPerInterval_, DescribeVsDomainReqTrafficDataResponseBody::ReqTrafficDataPerInterval) };
    inline DescribeVsDomainReqTrafficDataResponseBody::ReqTrafficDataPerInterval getReqTrafficDataPerInterval() { DARABONBA_PTR_GET(reqTrafficDataPerInterval_, DescribeVsDomainReqTrafficDataResponseBody::ReqTrafficDataPerInterval) };
    inline DescribeVsDomainReqTrafficDataResponseBody& setReqTrafficDataPerInterval(const DescribeVsDomainReqTrafficDataResponseBody::ReqTrafficDataPerInterval & reqTrafficDataPerInterval) { DARABONBA_PTR_SET_VALUE(reqTrafficDataPerInterval_, reqTrafficDataPerInterval) };
    inline DescribeVsDomainReqTrafficDataResponseBody& setReqTrafficDataPerInterval(DescribeVsDomainReqTrafficDataResponseBody::ReqTrafficDataPerInterval && reqTrafficDataPerInterval) { DARABONBA_PTR_SET_RVALUE(reqTrafficDataPerInterval_, reqTrafficDataPerInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVsDomainReqTrafficDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVsDomainReqTrafficDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> dataInterval_ {};
    shared_ptr<string> domainName_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<DescribeVsDomainReqTrafficDataResponseBody::ReqTrafficDataPerInterval> reqTrafficDataPerInterval_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
