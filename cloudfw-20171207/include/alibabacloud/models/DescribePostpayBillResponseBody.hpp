// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOSTPAYBILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOSTPAYBILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribePostpayBillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePostpayBillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AggregateInternetTraffic, aggregateInternetTraffic_);
      DARABONBA_PTR_TO_JSON(AggregateNatTraffic, aggregateNatTraffic_);
      DARABONBA_PTR_TO_JSON(AggregateSdlTraffic, aggregateSdlTraffic_);
      DARABONBA_PTR_TO_JSON(AggregateTotalTraffic, aggregateTotalTraffic_);
      DARABONBA_PTR_TO_JSON(AggregateVpcTraffic, aggregateVpcTraffic_);
      DARABONBA_PTR_TO_JSON(BillList, billList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePostpayBillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregateInternetTraffic, aggregateInternetTraffic_);
      DARABONBA_PTR_FROM_JSON(AggregateNatTraffic, aggregateNatTraffic_);
      DARABONBA_PTR_FROM_JSON(AggregateSdlTraffic, aggregateSdlTraffic_);
      DARABONBA_PTR_FROM_JSON(AggregateTotalTraffic, aggregateTotalTraffic_);
      DARABONBA_PTR_FROM_JSON(AggregateVpcTraffic, aggregateVpcTraffic_);
      DARABONBA_PTR_FROM_JSON(BillList, billList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePostpayBillResponseBody() = default ;
    DescribePostpayBillResponseBody(const DescribePostpayBillResponseBody &) = default ;
    DescribePostpayBillResponseBody(DescribePostpayBillResponseBody &&) = default ;
    DescribePostpayBillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePostpayBillResponseBody() = default ;
    DescribePostpayBillResponseBody& operator=(const DescribePostpayBillResponseBody &) = default ;
    DescribePostpayBillResponseBody& operator=(DescribePostpayBillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BillList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BillList& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(InternetInstanceCnt, internetInstanceCnt_);
        DARABONBA_PTR_TO_JSON(InternetTraffic, internetTraffic_);
        DARABONBA_PTR_TO_JSON(IsDerated, isDerated_);
        DARABONBA_PTR_TO_JSON(LogStorage, logStorage_);
        DARABONBA_PTR_TO_JSON(NatInstanceCnt, natInstanceCnt_);
        DARABONBA_PTR_TO_JSON(NatTraffic, natTraffic_);
        DARABONBA_PTR_TO_JSON(Sdl, sdl_);
        DARABONBA_PTR_TO_JSON(SdlTraffic, sdlTraffic_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(ThreatIntelligence, threatIntelligence_);
        DARABONBA_PTR_TO_JSON(VpcInstanceCnt, vpcInstanceCnt_);
        DARABONBA_PTR_TO_JSON(VpcTraffic, vpcTraffic_);
      };
      friend void from_json(const Darabonba::Json& j, BillList& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(InternetInstanceCnt, internetInstanceCnt_);
        DARABONBA_PTR_FROM_JSON(InternetTraffic, internetTraffic_);
        DARABONBA_PTR_FROM_JSON(IsDerated, isDerated_);
        DARABONBA_PTR_FROM_JSON(LogStorage, logStorage_);
        DARABONBA_PTR_FROM_JSON(NatInstanceCnt, natInstanceCnt_);
        DARABONBA_PTR_FROM_JSON(NatTraffic, natTraffic_);
        DARABONBA_PTR_FROM_JSON(Sdl, sdl_);
        DARABONBA_PTR_FROM_JSON(SdlTraffic, sdlTraffic_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(ThreatIntelligence, threatIntelligence_);
        DARABONBA_PTR_FROM_JSON(VpcInstanceCnt, vpcInstanceCnt_);
        DARABONBA_PTR_FROM_JSON(VpcTraffic, vpcTraffic_);
      };
      BillList() = default ;
      BillList(const BillList &) = default ;
      BillList(BillList &&) = default ;
      BillList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BillList() = default ;
      BillList& operator=(const BillList &) = default ;
      BillList& operator=(BillList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->internetInstanceCnt_ == nullptr && this->internetTraffic_ == nullptr && this->isDerated_ == nullptr && this->logStorage_ == nullptr && this->natInstanceCnt_ == nullptr
        && this->natTraffic_ == nullptr && this->sdl_ == nullptr && this->sdlTraffic_ == nullptr && this->startTime_ == nullptr && this->threatIntelligence_ == nullptr
        && this->vpcInstanceCnt_ == nullptr && this->vpcTraffic_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline BillList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // internetInstanceCnt Field Functions 
      bool hasInternetInstanceCnt() const { return this->internetInstanceCnt_ != nullptr;};
      void deleteInternetInstanceCnt() { this->internetInstanceCnt_ = nullptr;};
      inline int64_t getInternetInstanceCnt() const { DARABONBA_PTR_GET_DEFAULT(internetInstanceCnt_, 0L) };
      inline BillList& setInternetInstanceCnt(int64_t internetInstanceCnt) { DARABONBA_PTR_SET_VALUE(internetInstanceCnt_, internetInstanceCnt) };


      // internetTraffic Field Functions 
      bool hasInternetTraffic() const { return this->internetTraffic_ != nullptr;};
      void deleteInternetTraffic() { this->internetTraffic_ = nullptr;};
      inline float getInternetTraffic() const { DARABONBA_PTR_GET_DEFAULT(internetTraffic_, 0.0) };
      inline BillList& setInternetTraffic(float internetTraffic) { DARABONBA_PTR_SET_VALUE(internetTraffic_, internetTraffic) };


      // isDerated Field Functions 
      bool hasIsDerated() const { return this->isDerated_ != nullptr;};
      void deleteIsDerated() { this->isDerated_ = nullptr;};
      inline int32_t getIsDerated() const { DARABONBA_PTR_GET_DEFAULT(isDerated_, 0) };
      inline BillList& setIsDerated(int32_t isDerated) { DARABONBA_PTR_SET_VALUE(isDerated_, isDerated) };


      // logStorage Field Functions 
      bool hasLogStorage() const { return this->logStorage_ != nullptr;};
      void deleteLogStorage() { this->logStorage_ = nullptr;};
      inline int64_t getLogStorage() const { DARABONBA_PTR_GET_DEFAULT(logStorage_, 0L) };
      inline BillList& setLogStorage(int64_t logStorage) { DARABONBA_PTR_SET_VALUE(logStorage_, logStorage) };


      // natInstanceCnt Field Functions 
      bool hasNatInstanceCnt() const { return this->natInstanceCnt_ != nullptr;};
      void deleteNatInstanceCnt() { this->natInstanceCnt_ = nullptr;};
      inline int64_t getNatInstanceCnt() const { DARABONBA_PTR_GET_DEFAULT(natInstanceCnt_, 0L) };
      inline BillList& setNatInstanceCnt(int64_t natInstanceCnt) { DARABONBA_PTR_SET_VALUE(natInstanceCnt_, natInstanceCnt) };


      // natTraffic Field Functions 
      bool hasNatTraffic() const { return this->natTraffic_ != nullptr;};
      void deleteNatTraffic() { this->natTraffic_ = nullptr;};
      inline float getNatTraffic() const { DARABONBA_PTR_GET_DEFAULT(natTraffic_, 0.0) };
      inline BillList& setNatTraffic(float natTraffic) { DARABONBA_PTR_SET_VALUE(natTraffic_, natTraffic) };


      // sdl Field Functions 
      bool hasSdl() const { return this->sdl_ != nullptr;};
      void deleteSdl() { this->sdl_ = nullptr;};
      inline int64_t getSdl() const { DARABONBA_PTR_GET_DEFAULT(sdl_, 0L) };
      inline BillList& setSdl(int64_t sdl) { DARABONBA_PTR_SET_VALUE(sdl_, sdl) };


      // sdlTraffic Field Functions 
      bool hasSdlTraffic() const { return this->sdlTraffic_ != nullptr;};
      void deleteSdlTraffic() { this->sdlTraffic_ = nullptr;};
      inline float getSdlTraffic() const { DARABONBA_PTR_GET_DEFAULT(sdlTraffic_, 0.0) };
      inline BillList& setSdlTraffic(float sdlTraffic) { DARABONBA_PTR_SET_VALUE(sdlTraffic_, sdlTraffic) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline BillList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // threatIntelligence Field Functions 
      bool hasThreatIntelligence() const { return this->threatIntelligence_ != nullptr;};
      void deleteThreatIntelligence() { this->threatIntelligence_ = nullptr;};
      inline int64_t getThreatIntelligence() const { DARABONBA_PTR_GET_DEFAULT(threatIntelligence_, 0L) };
      inline BillList& setThreatIntelligence(int64_t threatIntelligence) { DARABONBA_PTR_SET_VALUE(threatIntelligence_, threatIntelligence) };


      // vpcInstanceCnt Field Functions 
      bool hasVpcInstanceCnt() const { return this->vpcInstanceCnt_ != nullptr;};
      void deleteVpcInstanceCnt() { this->vpcInstanceCnt_ = nullptr;};
      inline int64_t getVpcInstanceCnt() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceCnt_, 0L) };
      inline BillList& setVpcInstanceCnt(int64_t vpcInstanceCnt) { DARABONBA_PTR_SET_VALUE(vpcInstanceCnt_, vpcInstanceCnt) };


      // vpcTraffic Field Functions 
      bool hasVpcTraffic() const { return this->vpcTraffic_ != nullptr;};
      void deleteVpcTraffic() { this->vpcTraffic_ = nullptr;};
      inline float getVpcTraffic() const { DARABONBA_PTR_GET_DEFAULT(vpcTraffic_, 0.0) };
      inline BillList& setVpcTraffic(float vpcTraffic) { DARABONBA_PTR_SET_VALUE(vpcTraffic_, vpcTraffic) };


    protected:
      // The end time, expressed as a UNIX timestamp in seconds. The value is on the hour or on the day.
      shared_ptr<int64_t> endTime_ {};
      // The number of Internet instances.
      shared_ptr<int64_t> internetInstanceCnt_ {};
      // The Internet traffic, in GB.
      shared_ptr<float> internetTraffic_ {};
      // Indicates whether the bill is waived. A value of 0 indicates that the bill is not waived. Any value greater than 0 indicates that the bill is waived. If the bill is waived, it will not be issued.
      // > This field is meaningful only when you query hourly data.
      shared_ptr<int32_t> isDerated_ {};
      // The log service usage duration, in TB*h.
      shared_ptr<int64_t> logStorage_ {};
      // The number of NAT instances.
      shared_ptr<int64_t> natInstanceCnt_ {};
      // The NAT traffic, in GB.
      shared_ptr<float> natTraffic_ {};
      // The data leak detection usage duration, in hours.
      shared_ptr<int64_t> sdl_ {};
      // The sensitive data detection traffic, in GB.
      shared_ptr<float> sdlTraffic_ {};
      // The start time, expressed as a UNIX timestamp in seconds. The value is on the hour or on the day.
      shared_ptr<int64_t> startTime_ {};
      // The threat intelligence usage duration, in hours.
      shared_ptr<int64_t> threatIntelligence_ {};
      // The number of VPC instances.
      shared_ptr<int64_t> vpcInstanceCnt_ {};
      // The VPC traffic, in GB.
      shared_ptr<float> vpcTraffic_ {};
    };

    virtual bool empty() const override { return this->aggregateInternetTraffic_ == nullptr
        && this->aggregateNatTraffic_ == nullptr && this->aggregateSdlTraffic_ == nullptr && this->aggregateTotalTraffic_ == nullptr && this->aggregateVpcTraffic_ == nullptr && this->billList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // aggregateInternetTraffic Field Functions 
    bool hasAggregateInternetTraffic() const { return this->aggregateInternetTraffic_ != nullptr;};
    void deleteAggregateInternetTraffic() { this->aggregateInternetTraffic_ = nullptr;};
    inline float getAggregateInternetTraffic() const { DARABONBA_PTR_GET_DEFAULT(aggregateInternetTraffic_, 0.0) };
    inline DescribePostpayBillResponseBody& setAggregateInternetTraffic(float aggregateInternetTraffic) { DARABONBA_PTR_SET_VALUE(aggregateInternetTraffic_, aggregateInternetTraffic) };


    // aggregateNatTraffic Field Functions 
    bool hasAggregateNatTraffic() const { return this->aggregateNatTraffic_ != nullptr;};
    void deleteAggregateNatTraffic() { this->aggregateNatTraffic_ = nullptr;};
    inline float getAggregateNatTraffic() const { DARABONBA_PTR_GET_DEFAULT(aggregateNatTraffic_, 0.0) };
    inline DescribePostpayBillResponseBody& setAggregateNatTraffic(float aggregateNatTraffic) { DARABONBA_PTR_SET_VALUE(aggregateNatTraffic_, aggregateNatTraffic) };


    // aggregateSdlTraffic Field Functions 
    bool hasAggregateSdlTraffic() const { return this->aggregateSdlTraffic_ != nullptr;};
    void deleteAggregateSdlTraffic() { this->aggregateSdlTraffic_ = nullptr;};
    inline float getAggregateSdlTraffic() const { DARABONBA_PTR_GET_DEFAULT(aggregateSdlTraffic_, 0.0) };
    inline DescribePostpayBillResponseBody& setAggregateSdlTraffic(float aggregateSdlTraffic) { DARABONBA_PTR_SET_VALUE(aggregateSdlTraffic_, aggregateSdlTraffic) };


    // aggregateTotalTraffic Field Functions 
    bool hasAggregateTotalTraffic() const { return this->aggregateTotalTraffic_ != nullptr;};
    void deleteAggregateTotalTraffic() { this->aggregateTotalTraffic_ = nullptr;};
    inline float getAggregateTotalTraffic() const { DARABONBA_PTR_GET_DEFAULT(aggregateTotalTraffic_, 0.0) };
    inline DescribePostpayBillResponseBody& setAggregateTotalTraffic(float aggregateTotalTraffic) { DARABONBA_PTR_SET_VALUE(aggregateTotalTraffic_, aggregateTotalTraffic) };


    // aggregateVpcTraffic Field Functions 
    bool hasAggregateVpcTraffic() const { return this->aggregateVpcTraffic_ != nullptr;};
    void deleteAggregateVpcTraffic() { this->aggregateVpcTraffic_ = nullptr;};
    inline float getAggregateVpcTraffic() const { DARABONBA_PTR_GET_DEFAULT(aggregateVpcTraffic_, 0.0) };
    inline DescribePostpayBillResponseBody& setAggregateVpcTraffic(float aggregateVpcTraffic) { DARABONBA_PTR_SET_VALUE(aggregateVpcTraffic_, aggregateVpcTraffic) };


    // billList Field Functions 
    bool hasBillList() const { return this->billList_ != nullptr;};
    void deleteBillList() { this->billList_ = nullptr;};
    inline const vector<DescribePostpayBillResponseBody::BillList> & getBillList() const { DARABONBA_PTR_GET_CONST(billList_, vector<DescribePostpayBillResponseBody::BillList>) };
    inline vector<DescribePostpayBillResponseBody::BillList> getBillList() { DARABONBA_PTR_GET(billList_, vector<DescribePostpayBillResponseBody::BillList>) };
    inline DescribePostpayBillResponseBody& setBillList(const vector<DescribePostpayBillResponseBody::BillList> & billList) { DARABONBA_PTR_SET_VALUE(billList_, billList) };
    inline DescribePostpayBillResponseBody& setBillList(vector<DescribePostpayBillResponseBody::BillList> && billList) { DARABONBA_PTR_SET_RVALUE(billList_, billList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePostpayBillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribePostpayBillResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The aggregated Internet traffic, in GB.
    shared_ptr<float> aggregateInternetTraffic_ {};
    // The aggregated NAT traffic, in GB.
    shared_ptr<float> aggregateNatTraffic_ {};
    // The aggregated sensitive data detection traffic, in GB.
    shared_ptr<float> aggregateSdlTraffic_ {};
    // The aggregated total traffic, in GB.
    shared_ptr<float> aggregateTotalTraffic_ {};
    // The aggregated VPC traffic, in GB.
    shared_ptr<float> aggregateVpcTraffic_ {};
    // The bill list.
    shared_ptr<vector<DescribePostpayBillResponseBody::BillList>> billList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
