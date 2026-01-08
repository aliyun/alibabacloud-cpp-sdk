// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLTIMETOPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLTIMETOPRESPONSEBODY_HPP_
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
  class DescribeNatFirewallTimeTopResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatFirewallTimeTopResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataCount, dataCount_);
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrafficTime, trafficTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatFirewallTimeTopResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataCount, dataCount_);
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrafficTime, trafficTime_);
    };
    DescribeNatFirewallTimeTopResponseBody() = default ;
    DescribeNatFirewallTimeTopResponseBody(const DescribeNatFirewallTimeTopResponseBody &) = default ;
    DescribeNatFirewallTimeTopResponseBody(DescribeNatFirewallTimeTopResponseBody &&) = default ;
    DescribeNatFirewallTimeTopResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatFirewallTimeTopResponseBody() = default ;
    DescribeNatFirewallTimeTopResponseBody& operator=(const DescribeNatFirewallTimeTopResponseBody &) = default ;
    DescribeNatFirewallTimeTopResponseBody& operator=(DescribeNatFirewallTimeTopResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(InBps, inBps_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(NatFirewallId, natFirewallId_);
        DARABONBA_PTR_TO_JSON(NatFirewallName, natFirewallName_);
        DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_TO_JSON(NatGatewayName, natGatewayName_);
        DARABONBA_PTR_TO_JSON(NewConn, newConn_);
        DARABONBA_PTR_TO_JSON(OutBps, outBps_);
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_TO_JSON(ResourceInstanceId, resourceInstanceId_);
        DARABONBA_PTR_TO_JSON(ResourceInstanceName, resourceInstanceName_);
        DARABONBA_PTR_TO_JSON(SessionCount, sessionCount_);
        DARABONBA_PTR_TO_JSON(TotalBps, totalBps_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(InBps, inBps_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(NatFirewallId, natFirewallId_);
        DARABONBA_PTR_FROM_JSON(NatFirewallName, natFirewallName_);
        DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_FROM_JSON(NatGatewayName, natGatewayName_);
        DARABONBA_PTR_FROM_JSON(NewConn, newConn_);
        DARABONBA_PTR_FROM_JSON(OutBps, outBps_);
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_FROM_JSON(ResourceInstanceId, resourceInstanceId_);
        DARABONBA_PTR_FROM_JSON(ResourceInstanceName, resourceInstanceName_);
        DARABONBA_PTR_FROM_JSON(SessionCount, sessionCount_);
        DARABONBA_PTR_FROM_JSON(TotalBps, totalBps_);
      };
      DataList() = default ;
      DataList(const DataList &) = default ;
      DataList(DataList &&) = default ;
      DataList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataList() = default ;
      DataList& operator=(const DataList &) = default ;
      DataList& operator=(DataList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->inBps_ == nullptr
        && this->ip_ == nullptr && this->natFirewallId_ == nullptr && this->natFirewallName_ == nullptr && this->natGatewayId_ == nullptr && this->natGatewayName_ == nullptr
        && this->newConn_ == nullptr && this->outBps_ == nullptr && this->regionNo_ == nullptr && this->resourceInstanceId_ == nullptr && this->resourceInstanceName_ == nullptr
        && this->sessionCount_ == nullptr && this->totalBps_ == nullptr; };
      // inBps Field Functions 
      bool hasInBps() const { return this->inBps_ != nullptr;};
      void deleteInBps() { this->inBps_ = nullptr;};
      inline int64_t getInBps() const { DARABONBA_PTR_GET_DEFAULT(inBps_, 0L) };
      inline DataList& setInBps(int64_t inBps) { DARABONBA_PTR_SET_VALUE(inBps_, inBps) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline DataList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // natFirewallId Field Functions 
      bool hasNatFirewallId() const { return this->natFirewallId_ != nullptr;};
      void deleteNatFirewallId() { this->natFirewallId_ = nullptr;};
      inline string getNatFirewallId() const { DARABONBA_PTR_GET_DEFAULT(natFirewallId_, "") };
      inline DataList& setNatFirewallId(string natFirewallId) { DARABONBA_PTR_SET_VALUE(natFirewallId_, natFirewallId) };


      // natFirewallName Field Functions 
      bool hasNatFirewallName() const { return this->natFirewallName_ != nullptr;};
      void deleteNatFirewallName() { this->natFirewallName_ = nullptr;};
      inline string getNatFirewallName() const { DARABONBA_PTR_GET_DEFAULT(natFirewallName_, "") };
      inline DataList& setNatFirewallName(string natFirewallName) { DARABONBA_PTR_SET_VALUE(natFirewallName_, natFirewallName) };


      // natGatewayId Field Functions 
      bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
      void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
      inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
      inline DataList& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


      // natGatewayName Field Functions 
      bool hasNatGatewayName() const { return this->natGatewayName_ != nullptr;};
      void deleteNatGatewayName() { this->natGatewayName_ = nullptr;};
      inline string getNatGatewayName() const { DARABONBA_PTR_GET_DEFAULT(natGatewayName_, "") };
      inline DataList& setNatGatewayName(string natGatewayName) { DARABONBA_PTR_SET_VALUE(natGatewayName_, natGatewayName) };


      // newConn Field Functions 
      bool hasNewConn() const { return this->newConn_ != nullptr;};
      void deleteNewConn() { this->newConn_ = nullptr;};
      inline string getNewConn() const { DARABONBA_PTR_GET_DEFAULT(newConn_, "") };
      inline DataList& setNewConn(string newConn) { DARABONBA_PTR_SET_VALUE(newConn_, newConn) };


      // outBps Field Functions 
      bool hasOutBps() const { return this->outBps_ != nullptr;};
      void deleteOutBps() { this->outBps_ = nullptr;};
      inline int64_t getOutBps() const { DARABONBA_PTR_GET_DEFAULT(outBps_, 0L) };
      inline DataList& setOutBps(int64_t outBps) { DARABONBA_PTR_SET_VALUE(outBps_, outBps) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline DataList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


      // resourceInstanceId Field Functions 
      bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
      void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
      inline string getResourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
      inline DataList& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


      // resourceInstanceName Field Functions 
      bool hasResourceInstanceName() const { return this->resourceInstanceName_ != nullptr;};
      void deleteResourceInstanceName() { this->resourceInstanceName_ = nullptr;};
      inline string getResourceInstanceName() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceName_, "") };
      inline DataList& setResourceInstanceName(string resourceInstanceName) { DARABONBA_PTR_SET_VALUE(resourceInstanceName_, resourceInstanceName) };


      // sessionCount Field Functions 
      bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
      void deleteSessionCount() { this->sessionCount_ = nullptr;};
      inline string getSessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, "") };
      inline DataList& setSessionCount(string sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


      // totalBps Field Functions 
      bool hasTotalBps() const { return this->totalBps_ != nullptr;};
      void deleteTotalBps() { this->totalBps_ = nullptr;};
      inline int64_t getTotalBps() const { DARABONBA_PTR_GET_DEFAULT(totalBps_, 0L) };
      inline DataList& setTotalBps(int64_t totalBps) { DARABONBA_PTR_SET_VALUE(totalBps_, totalBps) };


    protected:
      shared_ptr<int64_t> inBps_ {};
      shared_ptr<string> ip_ {};
      shared_ptr<string> natFirewallId_ {};
      shared_ptr<string> natFirewallName_ {};
      shared_ptr<string> natGatewayId_ {};
      shared_ptr<string> natGatewayName_ {};
      shared_ptr<string> newConn_ {};
      shared_ptr<int64_t> outBps_ {};
      shared_ptr<string> regionNo_ {};
      shared_ptr<string> resourceInstanceId_ {};
      shared_ptr<string> resourceInstanceName_ {};
      shared_ptr<string> sessionCount_ {};
      shared_ptr<int64_t> totalBps_ {};
    };

    virtual bool empty() const override { return this->dataCount_ == nullptr
        && this->dataList_ == nullptr && this->requestId_ == nullptr && this->trafficTime_ == nullptr; };
    // dataCount Field Functions 
    bool hasDataCount() const { return this->dataCount_ != nullptr;};
    void deleteDataCount() { this->dataCount_ = nullptr;};
    inline int64_t getDataCount() const { DARABONBA_PTR_GET_DEFAULT(dataCount_, 0L) };
    inline DescribeNatFirewallTimeTopResponseBody& setDataCount(int64_t dataCount) { DARABONBA_PTR_SET_VALUE(dataCount_, dataCount) };


    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeNatFirewallTimeTopResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeNatFirewallTimeTopResponseBody::DataList>) };
    inline vector<DescribeNatFirewallTimeTopResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeNatFirewallTimeTopResponseBody::DataList>) };
    inline DescribeNatFirewallTimeTopResponseBody& setDataList(const vector<DescribeNatFirewallTimeTopResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeNatFirewallTimeTopResponseBody& setDataList(vector<DescribeNatFirewallTimeTopResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNatFirewallTimeTopResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trafficTime Field Functions 
    bool hasTrafficTime() const { return this->trafficTime_ != nullptr;};
    void deleteTrafficTime() { this->trafficTime_ = nullptr;};
    inline string getTrafficTime() const { DARABONBA_PTR_GET_DEFAULT(trafficTime_, "") };
    inline DescribeNatFirewallTimeTopResponseBody& setTrafficTime(string trafficTime) { DARABONBA_PTR_SET_VALUE(trafficTime_, trafficTime) };


  protected:
    shared_ptr<int64_t> dataCount_ {};
    shared_ptr<vector<DescribeNatFirewallTimeTopResponseBody::DataList>> dataList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> trafficTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
