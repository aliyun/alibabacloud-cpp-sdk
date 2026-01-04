// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVERLOADBALANCERMONITORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVERLOADBALANCERMONITORRESPONSEBODY_HPP_
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
  class DescribeServerLoadBalancerMonitorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServerLoadBalancerMonitorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServerLoadBalancerMonitorData, serverLoadBalancerMonitorData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServerLoadBalancerMonitorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServerLoadBalancerMonitorData, serverLoadBalancerMonitorData_);
    };
    DescribeServerLoadBalancerMonitorResponseBody() = default ;
    DescribeServerLoadBalancerMonitorResponseBody(const DescribeServerLoadBalancerMonitorResponseBody &) = default ;
    DescribeServerLoadBalancerMonitorResponseBody(DescribeServerLoadBalancerMonitorResponseBody &&) = default ;
    DescribeServerLoadBalancerMonitorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServerLoadBalancerMonitorResponseBody() = default ;
    DescribeServerLoadBalancerMonitorResponseBody& operator=(const DescribeServerLoadBalancerMonitorResponseBody &) = default ;
    DescribeServerLoadBalancerMonitorResponseBody& operator=(DescribeServerLoadBalancerMonitorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServerLoadBalancerMonitorData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServerLoadBalancerMonitorData& obj) { 
        DARABONBA_PTR_TO_JSON(Acc, acc_);
        DARABONBA_PTR_TO_JSON(BizTime, bizTime_);
        DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
        DARABONBA_PTR_TO_JSON(LoadBalancerName, loadBalancerName_);
        DARABONBA_PTR_TO_JSON(LoadBalancerSpec, loadBalancerSpec_);
        DARABONBA_PTR_TO_JSON(Reqs2xx, reqs2xx_);
        DARABONBA_PTR_TO_JSON(Reqs3xx, reqs3xx_);
        DARABONBA_PTR_TO_JSON(Reqs4xx, reqs4xx_);
        DARABONBA_PTR_TO_JSON(Reqs5xx, reqs5xx_);
        DARABONBA_PTR_TO_JSON(RtAvg, rtAvg_);
        DARABONBA_PTR_TO_JSON(Vip, vip_);
        DARABONBA_PTR_TO_JSON(Vni, vni_);
      };
      friend void from_json(const Darabonba::Json& j, ServerLoadBalancerMonitorData& obj) { 
        DARABONBA_PTR_FROM_JSON(Acc, acc_);
        DARABONBA_PTR_FROM_JSON(BizTime, bizTime_);
        DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerName, loadBalancerName_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerSpec, loadBalancerSpec_);
        DARABONBA_PTR_FROM_JSON(Reqs2xx, reqs2xx_);
        DARABONBA_PTR_FROM_JSON(Reqs3xx, reqs3xx_);
        DARABONBA_PTR_FROM_JSON(Reqs4xx, reqs4xx_);
        DARABONBA_PTR_FROM_JSON(Reqs5xx, reqs5xx_);
        DARABONBA_PTR_FROM_JSON(RtAvg, rtAvg_);
        DARABONBA_PTR_FROM_JSON(Vip, vip_);
        DARABONBA_PTR_FROM_JSON(Vni, vni_);
      };
      ServerLoadBalancerMonitorData() = default ;
      ServerLoadBalancerMonitorData(const ServerLoadBalancerMonitorData &) = default ;
      ServerLoadBalancerMonitorData(ServerLoadBalancerMonitorData &&) = default ;
      ServerLoadBalancerMonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServerLoadBalancerMonitorData() = default ;
      ServerLoadBalancerMonitorData& operator=(const ServerLoadBalancerMonitorData &) = default ;
      ServerLoadBalancerMonitorData& operator=(ServerLoadBalancerMonitorData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->acc_ == nullptr
        && this->bizTime_ == nullptr && this->ensRegionId_ == nullptr && this->loadBalancerId_ == nullptr && this->loadBalancerName_ == nullptr && this->loadBalancerSpec_ == nullptr
        && this->reqs2xx_ == nullptr && this->reqs3xx_ == nullptr && this->reqs4xx_ == nullptr && this->reqs5xx_ == nullptr && this->rtAvg_ == nullptr
        && this->vip_ == nullptr && this->vni_ == nullptr; };
      // acc Field Functions 
      bool hasAcc() const { return this->acc_ != nullptr;};
      void deleteAcc() { this->acc_ = nullptr;};
      inline int32_t getAcc() const { DARABONBA_PTR_GET_DEFAULT(acc_, 0) };
      inline ServerLoadBalancerMonitorData& setAcc(int32_t acc) { DARABONBA_PTR_SET_VALUE(acc_, acc) };


      // bizTime Field Functions 
      bool hasBizTime() const { return this->bizTime_ != nullptr;};
      void deleteBizTime() { this->bizTime_ = nullptr;};
      inline string getBizTime() const { DARABONBA_PTR_GET_DEFAULT(bizTime_, "") };
      inline ServerLoadBalancerMonitorData& setBizTime(string bizTime) { DARABONBA_PTR_SET_VALUE(bizTime_, bizTime) };


      // ensRegionId Field Functions 
      bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
      void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
      inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
      inline ServerLoadBalancerMonitorData& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


      // loadBalancerId Field Functions 
      bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
      void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
      inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
      inline ServerLoadBalancerMonitorData& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


      // loadBalancerName Field Functions 
      bool hasLoadBalancerName() const { return this->loadBalancerName_ != nullptr;};
      void deleteLoadBalancerName() { this->loadBalancerName_ = nullptr;};
      inline string getLoadBalancerName() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerName_, "") };
      inline ServerLoadBalancerMonitorData& setLoadBalancerName(string loadBalancerName) { DARABONBA_PTR_SET_VALUE(loadBalancerName_, loadBalancerName) };


      // loadBalancerSpec Field Functions 
      bool hasLoadBalancerSpec() const { return this->loadBalancerSpec_ != nullptr;};
      void deleteLoadBalancerSpec() { this->loadBalancerSpec_ = nullptr;};
      inline string getLoadBalancerSpec() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerSpec_, "") };
      inline ServerLoadBalancerMonitorData& setLoadBalancerSpec(string loadBalancerSpec) { DARABONBA_PTR_SET_VALUE(loadBalancerSpec_, loadBalancerSpec) };


      // reqs2xx Field Functions 
      bool hasReqs2xx() const { return this->reqs2xx_ != nullptr;};
      void deleteReqs2xx() { this->reqs2xx_ = nullptr;};
      inline int32_t getReqs2xx() const { DARABONBA_PTR_GET_DEFAULT(reqs2xx_, 0) };
      inline ServerLoadBalancerMonitorData& setReqs2xx(int32_t reqs2xx) { DARABONBA_PTR_SET_VALUE(reqs2xx_, reqs2xx) };


      // reqs3xx Field Functions 
      bool hasReqs3xx() const { return this->reqs3xx_ != nullptr;};
      void deleteReqs3xx() { this->reqs3xx_ = nullptr;};
      inline int32_t getReqs3xx() const { DARABONBA_PTR_GET_DEFAULT(reqs3xx_, 0) };
      inline ServerLoadBalancerMonitorData& setReqs3xx(int32_t reqs3xx) { DARABONBA_PTR_SET_VALUE(reqs3xx_, reqs3xx) };


      // reqs4xx Field Functions 
      bool hasReqs4xx() const { return this->reqs4xx_ != nullptr;};
      void deleteReqs4xx() { this->reqs4xx_ = nullptr;};
      inline int32_t getReqs4xx() const { DARABONBA_PTR_GET_DEFAULT(reqs4xx_, 0) };
      inline ServerLoadBalancerMonitorData& setReqs4xx(int32_t reqs4xx) { DARABONBA_PTR_SET_VALUE(reqs4xx_, reqs4xx) };


      // reqs5xx Field Functions 
      bool hasReqs5xx() const { return this->reqs5xx_ != nullptr;};
      void deleteReqs5xx() { this->reqs5xx_ = nullptr;};
      inline int32_t getReqs5xx() const { DARABONBA_PTR_GET_DEFAULT(reqs5xx_, 0) };
      inline ServerLoadBalancerMonitorData& setReqs5xx(int32_t reqs5xx) { DARABONBA_PTR_SET_VALUE(reqs5xx_, reqs5xx) };


      // rtAvg Field Functions 
      bool hasRtAvg() const { return this->rtAvg_ != nullptr;};
      void deleteRtAvg() { this->rtAvg_ = nullptr;};
      inline int32_t getRtAvg() const { DARABONBA_PTR_GET_DEFAULT(rtAvg_, 0) };
      inline ServerLoadBalancerMonitorData& setRtAvg(int32_t rtAvg) { DARABONBA_PTR_SET_VALUE(rtAvg_, rtAvg) };


      // vip Field Functions 
      bool hasVip() const { return this->vip_ != nullptr;};
      void deleteVip() { this->vip_ = nullptr;};
      inline string getVip() const { DARABONBA_PTR_GET_DEFAULT(vip_, "") };
      inline ServerLoadBalancerMonitorData& setVip(string vip) { DARABONBA_PTR_SET_VALUE(vip_, vip) };


      // vni Field Functions 
      bool hasVni() const { return this->vni_ != nullptr;};
      void deleteVni() { this->vni_ = nullptr;};
      inline int32_t getVni() const { DARABONBA_PTR_GET_DEFAULT(vni_, 0) };
      inline ServerLoadBalancerMonitorData& setVni(int32_t vni) { DARABONBA_PTR_SET_VALUE(vni_, vni) };


    protected:
      // The total number of requests.
      shared_ptr<int32_t> acc_ {};
      // The business time of the log. Logs are collected every minute.
      shared_ptr<string> bizTime_ {};
      // The ID of the node to which the ELB instance belongs.
      shared_ptr<string> ensRegionId_ {};
      // The ID of the ELB instance.
      shared_ptr<string> loadBalancerId_ {};
      // The name of the ELB instance.
      shared_ptr<string> loadBalancerName_ {};
      // The specification of the ELB instance.
      shared_ptr<string> loadBalancerSpec_ {};
      // The number of requests with HTTP 2xx status code returned.
      shared_ptr<int32_t> reqs2xx_ {};
      // The number of requests with HTTP 3xx status code returned.
      shared_ptr<int32_t> reqs3xx_ {};
      // The number of requests with HTTP 4xx status code returned.
      shared_ptr<int32_t> reqs4xx_ {};
      // The number of requests with HTTP 5xx status code returned.
      shared_ptr<int32_t> reqs5xx_ {};
      // The average response time. Unit: milliseconds.
      shared_ptr<int32_t> rtAvg_ {};
      // The virtual IP address (VIP) of the instance.
      shared_ptr<string> vip_ {};
      // The ID of the tunnel.
      shared_ptr<int32_t> vni_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->serverLoadBalancerMonitorData_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServerLoadBalancerMonitorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serverLoadBalancerMonitorData Field Functions 
    bool hasServerLoadBalancerMonitorData() const { return this->serverLoadBalancerMonitorData_ != nullptr;};
    void deleteServerLoadBalancerMonitorData() { this->serverLoadBalancerMonitorData_ = nullptr;};
    inline const vector<DescribeServerLoadBalancerMonitorResponseBody::ServerLoadBalancerMonitorData> & getServerLoadBalancerMonitorData() const { DARABONBA_PTR_GET_CONST(serverLoadBalancerMonitorData_, vector<DescribeServerLoadBalancerMonitorResponseBody::ServerLoadBalancerMonitorData>) };
    inline vector<DescribeServerLoadBalancerMonitorResponseBody::ServerLoadBalancerMonitorData> getServerLoadBalancerMonitorData() { DARABONBA_PTR_GET(serverLoadBalancerMonitorData_, vector<DescribeServerLoadBalancerMonitorResponseBody::ServerLoadBalancerMonitorData>) };
    inline DescribeServerLoadBalancerMonitorResponseBody& setServerLoadBalancerMonitorData(const vector<DescribeServerLoadBalancerMonitorResponseBody::ServerLoadBalancerMonitorData> & serverLoadBalancerMonitorData) { DARABONBA_PTR_SET_VALUE(serverLoadBalancerMonitorData_, serverLoadBalancerMonitorData) };
    inline DescribeServerLoadBalancerMonitorResponseBody& setServerLoadBalancerMonitorData(vector<DescribeServerLoadBalancerMonitorResponseBody::ServerLoadBalancerMonitorData> && serverLoadBalancerMonitorData) { DARABONBA_PTR_SET_RVALUE(serverLoadBalancerMonitorData_, serverLoadBalancerMonitorData) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The array of the monitoring data.
    shared_ptr<vector<DescribeServerLoadBalancerMonitorResponseBody::ServerLoadBalancerMonitorData>> serverLoadBalancerMonitorData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
