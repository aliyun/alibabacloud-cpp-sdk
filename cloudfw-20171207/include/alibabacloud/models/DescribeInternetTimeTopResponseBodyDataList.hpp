// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETTIMETOPRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETTIMETOPRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInternetTimeTopResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetTimeTopResponseBodyDataList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeInternetTimeTopResponseBodyDataList& obj) { 
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
    DescribeInternetTimeTopResponseBodyDataList() = default ;
    DescribeInternetTimeTopResponseBodyDataList(const DescribeInternetTimeTopResponseBodyDataList &) = default ;
    DescribeInternetTimeTopResponseBodyDataList(DescribeInternetTimeTopResponseBodyDataList &&) = default ;
    DescribeInternetTimeTopResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetTimeTopResponseBodyDataList() = default ;
    DescribeInternetTimeTopResponseBodyDataList& operator=(const DescribeInternetTimeTopResponseBodyDataList &) = default ;
    DescribeInternetTimeTopResponseBodyDataList& operator=(DescribeInternetTimeTopResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->IP_ == nullptr
        && return this->inBps_ == nullptr && return this->inPps_ == nullptr && return this->natGatewayId_ == nullptr && return this->natGatewayName_ == nullptr && return this->natIP_ == nullptr
        && return this->newConn_ == nullptr && return this->outBps_ == nullptr && return this->outPps_ == nullptr && return this->privateIP_ == nullptr && return this->regionNo_ == nullptr
        && return this->resourceInstanceId_ == nullptr && return this->resourceInstanceName_ == nullptr && return this->resourceType_ == nullptr && return this->sessionCount_ == nullptr && return this->totalBps_ == nullptr
        && return this->totalPps_ == nullptr && return this->vpcId_ == nullptr; };
    // IP Field Functions 
    bool hasIP() const { return this->IP_ != nullptr;};
    void deleteIP() { this->IP_ = nullptr;};
    inline string IP() const { DARABONBA_PTR_GET_DEFAULT(IP_, "") };
    inline DescribeInternetTimeTopResponseBodyDataList& setIP(string IP) { DARABONBA_PTR_SET_VALUE(IP_, IP) };


    // inBps Field Functions 
    bool hasInBps() const { return this->inBps_ != nullptr;};
    void deleteInBps() { this->inBps_ = nullptr;};
    inline int64_t inBps() const { DARABONBA_PTR_GET_DEFAULT(inBps_, 0L) };
    inline DescribeInternetTimeTopResponseBodyDataList& setInBps(int64_t inBps) { DARABONBA_PTR_SET_VALUE(inBps_, inBps) };


    // inPps Field Functions 
    bool hasInPps() const { return this->inPps_ != nullptr;};
    void deleteInPps() { this->inPps_ = nullptr;};
    inline int64_t inPps() const { DARABONBA_PTR_GET_DEFAULT(inPps_, 0L) };
    inline DescribeInternetTimeTopResponseBodyDataList& setInPps(int64_t inPps) { DARABONBA_PTR_SET_VALUE(inPps_, inPps) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeInternetTimeTopResponseBodyDataList& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // natGatewayName Field Functions 
    bool hasNatGatewayName() const { return this->natGatewayName_ != nullptr;};
    void deleteNatGatewayName() { this->natGatewayName_ = nullptr;};
    inline string natGatewayName() const { DARABONBA_PTR_GET_DEFAULT(natGatewayName_, "") };
    inline DescribeInternetTimeTopResponseBodyDataList& setNatGatewayName(string natGatewayName) { DARABONBA_PTR_SET_VALUE(natGatewayName_, natGatewayName) };


    // natIP Field Functions 
    bool hasNatIP() const { return this->natIP_ != nullptr;};
    void deleteNatIP() { this->natIP_ = nullptr;};
    inline string natIP() const { DARABONBA_PTR_GET_DEFAULT(natIP_, "") };
    inline DescribeInternetTimeTopResponseBodyDataList& setNatIP(string natIP) { DARABONBA_PTR_SET_VALUE(natIP_, natIP) };


    // newConn Field Functions 
    bool hasNewConn() const { return this->newConn_ != nullptr;};
    void deleteNewConn() { this->newConn_ = nullptr;};
    inline int64_t newConn() const { DARABONBA_PTR_GET_DEFAULT(newConn_, 0L) };
    inline DescribeInternetTimeTopResponseBodyDataList& setNewConn(int64_t newConn) { DARABONBA_PTR_SET_VALUE(newConn_, newConn) };


    // outBps Field Functions 
    bool hasOutBps() const { return this->outBps_ != nullptr;};
    void deleteOutBps() { this->outBps_ = nullptr;};
    inline int64_t outBps() const { DARABONBA_PTR_GET_DEFAULT(outBps_, 0L) };
    inline DescribeInternetTimeTopResponseBodyDataList& setOutBps(int64_t outBps) { DARABONBA_PTR_SET_VALUE(outBps_, outBps) };


    // outPps Field Functions 
    bool hasOutPps() const { return this->outPps_ != nullptr;};
    void deleteOutPps() { this->outPps_ = nullptr;};
    inline int64_t outPps() const { DARABONBA_PTR_GET_DEFAULT(outPps_, 0L) };
    inline DescribeInternetTimeTopResponseBodyDataList& setOutPps(int64_t outPps) { DARABONBA_PTR_SET_VALUE(outPps_, outPps) };


    // privateIP Field Functions 
    bool hasPrivateIP() const { return this->privateIP_ != nullptr;};
    void deletePrivateIP() { this->privateIP_ = nullptr;};
    inline string privateIP() const { DARABONBA_PTR_GET_DEFAULT(privateIP_, "") };
    inline DescribeInternetTimeTopResponseBodyDataList& setPrivateIP(string privateIP) { DARABONBA_PTR_SET_VALUE(privateIP_, privateIP) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeInternetTimeTopResponseBodyDataList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // resourceInstanceId Field Functions 
    bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
    void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
    inline string resourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
    inline DescribeInternetTimeTopResponseBodyDataList& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


    // resourceInstanceName Field Functions 
    bool hasResourceInstanceName() const { return this->resourceInstanceName_ != nullptr;};
    void deleteResourceInstanceName() { this->resourceInstanceName_ = nullptr;};
    inline string resourceInstanceName() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceName_, "") };
    inline DescribeInternetTimeTopResponseBodyDataList& setResourceInstanceName(string resourceInstanceName) { DARABONBA_PTR_SET_VALUE(resourceInstanceName_, resourceInstanceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeInternetTimeTopResponseBodyDataList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // sessionCount Field Functions 
    bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
    void deleteSessionCount() { this->sessionCount_ = nullptr;};
    inline int64_t sessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
    inline DescribeInternetTimeTopResponseBodyDataList& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


    // totalBps Field Functions 
    bool hasTotalBps() const { return this->totalBps_ != nullptr;};
    void deleteTotalBps() { this->totalBps_ = nullptr;};
    inline int64_t totalBps() const { DARABONBA_PTR_GET_DEFAULT(totalBps_, 0L) };
    inline DescribeInternetTimeTopResponseBodyDataList& setTotalBps(int64_t totalBps) { DARABONBA_PTR_SET_VALUE(totalBps_, totalBps) };


    // totalPps Field Functions 
    bool hasTotalPps() const { return this->totalPps_ != nullptr;};
    void deleteTotalPps() { this->totalPps_ = nullptr;};
    inline int64_t totalPps() const { DARABONBA_PTR_GET_DEFAULT(totalPps_, 0L) };
    inline DescribeInternetTimeTopResponseBodyDataList& setTotalPps(int64_t totalPps) { DARABONBA_PTR_SET_VALUE(totalPps_, totalPps) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeInternetTimeTopResponseBodyDataList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> IP_ = nullptr;
    std::shared_ptr<int64_t> inBps_ = nullptr;
    std::shared_ptr<int64_t> inPps_ = nullptr;
    std::shared_ptr<string> natGatewayId_ = nullptr;
    std::shared_ptr<string> natGatewayName_ = nullptr;
    std::shared_ptr<string> natIP_ = nullptr;
    std::shared_ptr<int64_t> newConn_ = nullptr;
    std::shared_ptr<int64_t> outBps_ = nullptr;
    std::shared_ptr<int64_t> outPps_ = nullptr;
    std::shared_ptr<string> privateIP_ = nullptr;
    std::shared_ptr<string> regionNo_ = nullptr;
    std::shared_ptr<string> resourceInstanceId_ = nullptr;
    std::shared_ptr<string> resourceInstanceName_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<int64_t> sessionCount_ = nullptr;
    std::shared_ptr<int64_t> totalBps_ = nullptr;
    std::shared_ptr<int64_t> totalPps_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
