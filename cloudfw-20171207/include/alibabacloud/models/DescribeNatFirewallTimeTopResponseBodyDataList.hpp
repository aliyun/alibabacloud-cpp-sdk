// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLTIMETOPRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLTIMETOPRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNatFirewallTimeTopResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatFirewallTimeTopResponseBodyDataList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeNatFirewallTimeTopResponseBodyDataList& obj) { 
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
    DescribeNatFirewallTimeTopResponseBodyDataList() = default ;
    DescribeNatFirewallTimeTopResponseBodyDataList(const DescribeNatFirewallTimeTopResponseBodyDataList &) = default ;
    DescribeNatFirewallTimeTopResponseBodyDataList(DescribeNatFirewallTimeTopResponseBodyDataList &&) = default ;
    DescribeNatFirewallTimeTopResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatFirewallTimeTopResponseBodyDataList() = default ;
    DescribeNatFirewallTimeTopResponseBodyDataList& operator=(const DescribeNatFirewallTimeTopResponseBodyDataList &) = default ;
    DescribeNatFirewallTimeTopResponseBodyDataList& operator=(DescribeNatFirewallTimeTopResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inBps_ == nullptr
        && return this->ip_ == nullptr && return this->natFirewallId_ == nullptr && return this->natFirewallName_ == nullptr && return this->natGatewayId_ == nullptr && return this->natGatewayName_ == nullptr
        && return this->newConn_ == nullptr && return this->outBps_ == nullptr && return this->regionNo_ == nullptr && return this->resourceInstanceId_ == nullptr && return this->resourceInstanceName_ == nullptr
        && return this->sessionCount_ == nullptr && return this->totalBps_ == nullptr; };
    // inBps Field Functions 
    bool hasInBps() const { return this->inBps_ != nullptr;};
    void deleteInBps() { this->inBps_ = nullptr;};
    inline int64_t inBps() const { DARABONBA_PTR_GET_DEFAULT(inBps_, 0L) };
    inline DescribeNatFirewallTimeTopResponseBodyDataList& setInBps(int64_t inBps) { DARABONBA_PTR_SET_VALUE(inBps_, inBps) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeNatFirewallTimeTopResponseBodyDataList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // natFirewallId Field Functions 
    bool hasNatFirewallId() const { return this->natFirewallId_ != nullptr;};
    void deleteNatFirewallId() { this->natFirewallId_ = nullptr;};
    inline string natFirewallId() const { DARABONBA_PTR_GET_DEFAULT(natFirewallId_, "") };
    inline DescribeNatFirewallTimeTopResponseBodyDataList& setNatFirewallId(string natFirewallId) { DARABONBA_PTR_SET_VALUE(natFirewallId_, natFirewallId) };


    // natFirewallName Field Functions 
    bool hasNatFirewallName() const { return this->natFirewallName_ != nullptr;};
    void deleteNatFirewallName() { this->natFirewallName_ = nullptr;};
    inline string natFirewallName() const { DARABONBA_PTR_GET_DEFAULT(natFirewallName_, "") };
    inline DescribeNatFirewallTimeTopResponseBodyDataList& setNatFirewallName(string natFirewallName) { DARABONBA_PTR_SET_VALUE(natFirewallName_, natFirewallName) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeNatFirewallTimeTopResponseBodyDataList& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // natGatewayName Field Functions 
    bool hasNatGatewayName() const { return this->natGatewayName_ != nullptr;};
    void deleteNatGatewayName() { this->natGatewayName_ = nullptr;};
    inline string natGatewayName() const { DARABONBA_PTR_GET_DEFAULT(natGatewayName_, "") };
    inline DescribeNatFirewallTimeTopResponseBodyDataList& setNatGatewayName(string natGatewayName) { DARABONBA_PTR_SET_VALUE(natGatewayName_, natGatewayName) };


    // newConn Field Functions 
    bool hasNewConn() const { return this->newConn_ != nullptr;};
    void deleteNewConn() { this->newConn_ = nullptr;};
    inline string newConn() const { DARABONBA_PTR_GET_DEFAULT(newConn_, "") };
    inline DescribeNatFirewallTimeTopResponseBodyDataList& setNewConn(string newConn) { DARABONBA_PTR_SET_VALUE(newConn_, newConn) };


    // outBps Field Functions 
    bool hasOutBps() const { return this->outBps_ != nullptr;};
    void deleteOutBps() { this->outBps_ = nullptr;};
    inline int64_t outBps() const { DARABONBA_PTR_GET_DEFAULT(outBps_, 0L) };
    inline DescribeNatFirewallTimeTopResponseBodyDataList& setOutBps(int64_t outBps) { DARABONBA_PTR_SET_VALUE(outBps_, outBps) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeNatFirewallTimeTopResponseBodyDataList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // resourceInstanceId Field Functions 
    bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
    void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
    inline string resourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
    inline DescribeNatFirewallTimeTopResponseBodyDataList& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


    // resourceInstanceName Field Functions 
    bool hasResourceInstanceName() const { return this->resourceInstanceName_ != nullptr;};
    void deleteResourceInstanceName() { this->resourceInstanceName_ = nullptr;};
    inline string resourceInstanceName() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceName_, "") };
    inline DescribeNatFirewallTimeTopResponseBodyDataList& setResourceInstanceName(string resourceInstanceName) { DARABONBA_PTR_SET_VALUE(resourceInstanceName_, resourceInstanceName) };


    // sessionCount Field Functions 
    bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
    void deleteSessionCount() { this->sessionCount_ = nullptr;};
    inline string sessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, "") };
    inline DescribeNatFirewallTimeTopResponseBodyDataList& setSessionCount(string sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


    // totalBps Field Functions 
    bool hasTotalBps() const { return this->totalBps_ != nullptr;};
    void deleteTotalBps() { this->totalBps_ = nullptr;};
    inline int64_t totalBps() const { DARABONBA_PTR_GET_DEFAULT(totalBps_, 0L) };
    inline DescribeNatFirewallTimeTopResponseBodyDataList& setTotalBps(int64_t totalBps) { DARABONBA_PTR_SET_VALUE(totalBps_, totalBps) };


  protected:
    std::shared_ptr<int64_t> inBps_ = nullptr;
    std::shared_ptr<string> ip_ = nullptr;
    std::shared_ptr<string> natFirewallId_ = nullptr;
    std::shared_ptr<string> natFirewallName_ = nullptr;
    std::shared_ptr<string> natGatewayId_ = nullptr;
    std::shared_ptr<string> natGatewayName_ = nullptr;
    std::shared_ptr<string> newConn_ = nullptr;
    std::shared_ptr<int64_t> outBps_ = nullptr;
    std::shared_ptr<string> regionNo_ = nullptr;
    std::shared_ptr<string> resourceInstanceId_ = nullptr;
    std::shared_ptr<string> resourceInstanceName_ = nullptr;
    std::shared_ptr<string> sessionCount_ = nullptr;
    std::shared_ptr<int64_t> totalBps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
