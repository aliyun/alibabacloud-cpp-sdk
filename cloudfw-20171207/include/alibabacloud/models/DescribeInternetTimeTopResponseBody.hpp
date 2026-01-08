// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETTIMETOPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETTIMETOPRESPONSEBODY_HPP_
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
  class DescribeInternetTimeTopResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetTimeTopResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataCount, dataCount_);
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrafficTime, trafficTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetTimeTopResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataCount, dataCount_);
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrafficTime, trafficTime_);
    };
    DescribeInternetTimeTopResponseBody() = default ;
    DescribeInternetTimeTopResponseBody(const DescribeInternetTimeTopResponseBody &) = default ;
    DescribeInternetTimeTopResponseBody(DescribeInternetTimeTopResponseBody &&) = default ;
    DescribeInternetTimeTopResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetTimeTopResponseBody() = default ;
    DescribeInternetTimeTopResponseBody& operator=(const DescribeInternetTimeTopResponseBody &) = default ;
    DescribeInternetTimeTopResponseBody& operator=(DescribeInternetTimeTopResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataList& obj) { 
        DARABONBA_PTR_TO_JSON(IP, IP_);
        DARABONBA_PTR_TO_JSON(InBps, inBps_);
        DARABONBA_PTR_TO_JSON(InPps, inPps_);
        DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_TO_JSON(NatGatewayName, natGatewayName_);
        DARABONBA_PTR_TO_JSON(NatIP, natIP_);
        DARABONBA_PTR_TO_JSON(NewConn, newConn_);
        DARABONBA_PTR_TO_JSON(OutBps, outBps_);
        DARABONBA_PTR_TO_JSON(OutPps, outPps_);
        DARABONBA_PTR_TO_JSON(PrivateIP, privateIP_);
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_TO_JSON(ResourceInstanceId, resourceInstanceId_);
        DARABONBA_PTR_TO_JSON(ResourceInstanceName, resourceInstanceName_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(SessionCount, sessionCount_);
        DARABONBA_PTR_TO_JSON(TotalBps, totalBps_);
        DARABONBA_PTR_TO_JSON(TotalPps, totalPps_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, DataList& obj) { 
        DARABONBA_PTR_FROM_JSON(IP, IP_);
        DARABONBA_PTR_FROM_JSON(InBps, inBps_);
        DARABONBA_PTR_FROM_JSON(InPps, inPps_);
        DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
        DARABONBA_PTR_FROM_JSON(NatGatewayName, natGatewayName_);
        DARABONBA_PTR_FROM_JSON(NatIP, natIP_);
        DARABONBA_PTR_FROM_JSON(NewConn, newConn_);
        DARABONBA_PTR_FROM_JSON(OutBps, outBps_);
        DARABONBA_PTR_FROM_JSON(OutPps, outPps_);
        DARABONBA_PTR_FROM_JSON(PrivateIP, privateIP_);
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
        DARABONBA_PTR_FROM_JSON(ResourceInstanceId, resourceInstanceId_);
        DARABONBA_PTR_FROM_JSON(ResourceInstanceName, resourceInstanceName_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(SessionCount, sessionCount_);
        DARABONBA_PTR_FROM_JSON(TotalBps, totalBps_);
        DARABONBA_PTR_FROM_JSON(TotalPps, totalPps_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
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
      virtual bool empty() const override { return this->IP_ == nullptr
        && this->inBps_ == nullptr && this->inPps_ == nullptr && this->natGatewayId_ == nullptr && this->natGatewayName_ == nullptr && this->natIP_ == nullptr
        && this->newConn_ == nullptr && this->outBps_ == nullptr && this->outPps_ == nullptr && this->privateIP_ == nullptr && this->regionNo_ == nullptr
        && this->resourceInstanceId_ == nullptr && this->resourceInstanceName_ == nullptr && this->resourceType_ == nullptr && this->sessionCount_ == nullptr && this->totalBps_ == nullptr
        && this->totalPps_ == nullptr && this->vpcId_ == nullptr; };
      // IP Field Functions 
      bool hasIP() const { return this->IP_ != nullptr;};
      void deleteIP() { this->IP_ = nullptr;};
      inline string getIP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
      inline DataList& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


      // inBps Field Functions 
      bool hasInBps() const { return this->inBps_ != nullptr;};
      void deleteInBps() { this->inBps_ = nullptr;};
      inline int64_t getInBps() const { DARABONBA_PTR_GET_DEFAULT(inBps_, 0L) };
      inline DataList& setInBps(int64_t inBps) { DARABONBA_PTR_SET_VALUE(inBps_, inBps) };


      // inPps Field Functions 
      bool hasInPps() const { return this->inPps_ != nullptr;};
      void deleteInPps() { this->inPps_ = nullptr;};
      inline int64_t getInPps() const { DARABONBA_PTR_GET_DEFAULT(inPps_, 0L) };
      inline DataList& setInPps(int64_t inPps) { DARABONBA_PTR_SET_VALUE(inPps_, inPps) };


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


      // natIP Field Functions 
      bool hasNatIP() const { return this->natIP_ != nullptr;};
      void deleteNatIP() { this->natIP_ = nullptr;};
      inline string getNatIP() const { DARABONBA_PTR_GET_DEFAULT(natIP_, "") };
      inline DataList& setNatIP(string natIP) { DARABONBA_PTR_SET_VALUE(natIP_, natIP) };


      // newConn Field Functions 
      bool hasNewConn() const { return this->newConn_ != nullptr;};
      void deleteNewConn() { this->newConn_ = nullptr;};
      inline int64_t getNewConn() const { DARABONBA_PTR_GET_DEFAULT(newConn_, 0L) };
      inline DataList& setNewConn(int64_t newConn) { DARABONBA_PTR_SET_VALUE(newConn_, newConn) };


      // outBps Field Functions 
      bool hasOutBps() const { return this->outBps_ != nullptr;};
      void deleteOutBps() { this->outBps_ = nullptr;};
      inline int64_t getOutBps() const { DARABONBA_PTR_GET_DEFAULT(outBps_, 0L) };
      inline DataList& setOutBps(int64_t outBps) { DARABONBA_PTR_SET_VALUE(outBps_, outBps) };


      // outPps Field Functions 
      bool hasOutPps() const { return this->outPps_ != nullptr;};
      void deleteOutPps() { this->outPps_ = nullptr;};
      inline int64_t getOutPps() const { DARABONBA_PTR_GET_DEFAULT(outPps_, 0L) };
      inline DataList& setOutPps(int64_t outPps) { DARABONBA_PTR_SET_VALUE(outPps_, outPps) };


      // privateIP Field Functions 
      bool hasPrivateIP() const { return this->privateIP_ != nullptr;};
      void deletePrivateIP() { this->privateIP_ = nullptr;};
      inline string getPrivateIP() const { DARABONBA_PTR_GET_DEFAULT(privateIP_, "") };
      inline DataList& setPrivateIP(string privateIP) { DARABONBA_PTR_SET_VALUE(privateIP_, privateIP) };


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


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline DataList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // sessionCount Field Functions 
      bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
      void deleteSessionCount() { this->sessionCount_ = nullptr;};
      inline int64_t getSessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
      inline DataList& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


      // totalBps Field Functions 
      bool hasTotalBps() const { return this->totalBps_ != nullptr;};
      void deleteTotalBps() { this->totalBps_ = nullptr;};
      inline int64_t getTotalBps() const { DARABONBA_PTR_GET_DEFAULT(totalBps_, 0L) };
      inline DataList& setTotalBps(int64_t totalBps) { DARABONBA_PTR_SET_VALUE(totalBps_, totalBps) };


      // totalPps Field Functions 
      bool hasTotalPps() const { return this->totalPps_ != nullptr;};
      void deleteTotalPps() { this->totalPps_ = nullptr;};
      inline int64_t getTotalPps() const { DARABONBA_PTR_GET_DEFAULT(totalPps_, 0L) };
      inline DataList& setTotalPps(int64_t totalPps) { DARABONBA_PTR_SET_VALUE(totalPps_, totalPps) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline DataList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      shared_ptr<string> IP_ {};
      shared_ptr<int64_t> inBps_ {};
      shared_ptr<int64_t> inPps_ {};
      shared_ptr<string> natGatewayId_ {};
      shared_ptr<string> natGatewayName_ {};
      shared_ptr<string> natIP_ {};
      shared_ptr<int64_t> newConn_ {};
      shared_ptr<int64_t> outBps_ {};
      shared_ptr<int64_t> outPps_ {};
      shared_ptr<string> privateIP_ {};
      shared_ptr<string> regionNo_ {};
      shared_ptr<string> resourceInstanceId_ {};
      shared_ptr<string> resourceInstanceName_ {};
      shared_ptr<string> resourceType_ {};
      shared_ptr<int64_t> sessionCount_ {};
      shared_ptr<int64_t> totalBps_ {};
      shared_ptr<int64_t> totalPps_ {};
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->dataCount_ == nullptr
        && this->dataList_ == nullptr && this->requestId_ == nullptr && this->trafficTime_ == nullptr; };
    // dataCount Field Functions 
    bool hasDataCount() const { return this->dataCount_ != nullptr;};
    void deleteDataCount() { this->dataCount_ = nullptr;};
    inline int32_t getDataCount() const { DARABONBA_PTR_GET_DEFAULT(dataCount_, 0) };
    inline DescribeInternetTimeTopResponseBody& setDataCount(int32_t dataCount) { DARABONBA_PTR_SET_VALUE(dataCount_, dataCount) };


    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeInternetTimeTopResponseBody::DataList> & getDataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeInternetTimeTopResponseBody::DataList>) };
    inline vector<DescribeInternetTimeTopResponseBody::DataList> getDataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeInternetTimeTopResponseBody::DataList>) };
    inline DescribeInternetTimeTopResponseBody& setDataList(const vector<DescribeInternetTimeTopResponseBody::DataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeInternetTimeTopResponseBody& setDataList(vector<DescribeInternetTimeTopResponseBody::DataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInternetTimeTopResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trafficTime Field Functions 
    bool hasTrafficTime() const { return this->trafficTime_ != nullptr;};
    void deleteTrafficTime() { this->trafficTime_ = nullptr;};
    inline int32_t getTrafficTime() const { DARABONBA_PTR_GET_DEFAULT(trafficTime_, 0) };
    inline DescribeInternetTimeTopResponseBody& setTrafficTime(int32_t trafficTime) { DARABONBA_PTR_SET_VALUE(trafficTime_, trafficTime) };


  protected:
    shared_ptr<int32_t> dataCount_ {};
    shared_ptr<vector<DescribeInternetTimeTopResponseBody::DataList>> dataList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> trafficTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
