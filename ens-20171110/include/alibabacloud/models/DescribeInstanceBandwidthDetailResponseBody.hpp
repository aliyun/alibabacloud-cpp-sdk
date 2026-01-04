// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEBANDWIDTHDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEBANDWIDTHDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstanceBandwidthDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceBandwidthDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidths, bandwidths_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceBandwidthDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidths, bandwidths_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstanceBandwidthDetailResponseBody() = default ;
    DescribeInstanceBandwidthDetailResponseBody(const DescribeInstanceBandwidthDetailResponseBody &) = default ;
    DescribeInstanceBandwidthDetailResponseBody(DescribeInstanceBandwidthDetailResponseBody &&) = default ;
    DescribeInstanceBandwidthDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceBandwidthDetailResponseBody() = default ;
    DescribeInstanceBandwidthDetailResponseBody& operator=(const DescribeInstanceBandwidthDetailResponseBody &) = default ;
    DescribeInstanceBandwidthDetailResponseBody& operator=(DescribeInstanceBandwidthDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Bandwidths : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Bandwidths& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(BizTime, bizTime_);
        DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_TO_JSON(FlowType, flowType_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Isp, isp_);
        DARABONBA_PTR_TO_JSON(RxBw, rxBw_);
        DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_TO_JSON(TxBw, txBw_);
      };
      friend void from_json(const Darabonba::Json& j, Bandwidths& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(BizTime, bizTime_);
        DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_FROM_JSON(FlowType, flowType_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Isp, isp_);
        DARABONBA_PTR_FROM_JSON(RxBw, rxBw_);
        DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_FROM_JSON(TxBw, txBw_);
      };
      Bandwidths() = default ;
      Bandwidths(const Bandwidths &) = default ;
      Bandwidths(Bandwidths &&) = default ;
      Bandwidths(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Bandwidths() = default ;
      Bandwidths& operator=(const Bandwidths &) = default ;
      Bandwidths& operator=(Bandwidths &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->bizTime_ == nullptr && this->ensRegionId_ == nullptr && this->flowType_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr
        && this->ip_ == nullptr && this->isp_ == nullptr && this->rxBw_ == nullptr && this->serviceType_ == nullptr && this->txBw_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline Bandwidths& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // bizTime Field Functions 
      bool hasBizTime() const { return this->bizTime_ != nullptr;};
      void deleteBizTime() { this->bizTime_ = nullptr;};
      inline string getBizTime() const { DARABONBA_PTR_GET_DEFAULT(bizTime_, "") };
      inline Bandwidths& setBizTime(string bizTime) { DARABONBA_PTR_SET_VALUE(bizTime_, bizTime) };


      // ensRegionId Field Functions 
      bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
      void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
      inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
      inline Bandwidths& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


      // flowType Field Functions 
      bool hasFlowType() const { return this->flowType_ != nullptr;};
      void deleteFlowType() { this->flowType_ = nullptr;};
      inline int32_t getFlowType() const { DARABONBA_PTR_GET_DEFAULT(flowType_, 0) };
      inline Bandwidths& setFlowType(int32_t flowType) { DARABONBA_PTR_SET_VALUE(flowType_, flowType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Bandwidths& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline Bandwidths& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline Bandwidths& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // isp Field Functions 
      bool hasIsp() const { return this->isp_ != nullptr;};
      void deleteIsp() { this->isp_ = nullptr;};
      inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
      inline Bandwidths& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


      // rxBw Field Functions 
      bool hasRxBw() const { return this->rxBw_ != nullptr;};
      void deleteRxBw() { this->rxBw_ = nullptr;};
      inline int64_t getRxBw() const { DARABONBA_PTR_GET_DEFAULT(rxBw_, 0L) };
      inline Bandwidths& setRxBw(int64_t rxBw) { DARABONBA_PTR_SET_VALUE(rxBw_, rxBw) };


      // serviceType Field Functions 
      bool hasServiceType() const { return this->serviceType_ != nullptr;};
      void deleteServiceType() { this->serviceType_ = nullptr;};
      inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
      inline Bandwidths& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


      // txBw Field Functions 
      bool hasTxBw() const { return this->txBw_ != nullptr;};
      void deleteTxBw() { this->txBw_ = nullptr;};
      inline int64_t getTxBw() const { DARABONBA_PTR_GET_DEFAULT(txBw_, 0L) };
      inline Bandwidths& setTxBw(int64_t txBw) { DARABONBA_PTR_SET_VALUE(txBw_, txBw) };


    protected:
      // The user ID.
      shared_ptr<int64_t> aliUid_ {};
      // The bandwidth service time. The data granularity is 5 minutes.
      shared_ptr<string> bizTime_ {};
      // The node ID.
      shared_ptr<string> ensRegionId_ {};
      // The type of the bandwidth. Valid values: 1, which indicates public network bandwidth. 2, which indicates internal network bandwidth.
      shared_ptr<int32_t> flowType_ {};
      // The plan ID.
      shared_ptr<string> instanceId_ {};
      // The type of the instance, such as vm, eip, single_tenant, and nc.
      shared_ptr<string> instanceType_ {};
      // null
      shared_ptr<string> ip_ {};
      // The Internet service provider to which the IP address belongs.
      shared_ptr<string> isp_ {};
      // null
      shared_ptr<int64_t> rxBw_ {};
      // The type of the service, such as vm, eip, esk, and meta.
      shared_ptr<string> serviceType_ {};
      // null
      shared_ptr<int64_t> txBw_ {};
    };

    virtual bool empty() const override { return this->bandwidths_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // bandwidths Field Functions 
    bool hasBandwidths() const { return this->bandwidths_ != nullptr;};
    void deleteBandwidths() { this->bandwidths_ = nullptr;};
    inline const vector<DescribeInstanceBandwidthDetailResponseBody::Bandwidths> & getBandwidths() const { DARABONBA_PTR_GET_CONST(bandwidths_, vector<DescribeInstanceBandwidthDetailResponseBody::Bandwidths>) };
    inline vector<DescribeInstanceBandwidthDetailResponseBody::Bandwidths> getBandwidths() { DARABONBA_PTR_GET(bandwidths_, vector<DescribeInstanceBandwidthDetailResponseBody::Bandwidths>) };
    inline DescribeInstanceBandwidthDetailResponseBody& setBandwidths(const vector<DescribeInstanceBandwidthDetailResponseBody::Bandwidths> & bandwidths) { DARABONBA_PTR_SET_VALUE(bandwidths_, bandwidths) };
    inline DescribeInstanceBandwidthDetailResponseBody& setBandwidths(vector<DescribeInstanceBandwidthDetailResponseBody::Bandwidths> && bandwidths) { DARABONBA_PTR_SET_RVALUE(bandwidths_, bandwidths) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeInstanceBandwidthDetailResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstanceBandwidthDetailResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceBandwidthDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeInstanceBandwidthDetailResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the maximum public bandwidth.
    shared_ptr<vector<DescribeInstanceBandwidthDetailResponseBody::Bandwidths>> bandwidths_ {};
    // The page number of the current page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records per page.
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
