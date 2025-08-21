// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERLISTENMONITORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERLISTENMONITORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeLoadBalancerListenMonitorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerListenMonitorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancerMonitorListenData, loadBalancerMonitorListenData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerListenMonitorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancerMonitorListenData, loadBalancerMonitorListenData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLoadBalancerListenMonitorResponseBody() = default ;
    DescribeLoadBalancerListenMonitorResponseBody(const DescribeLoadBalancerListenMonitorResponseBody &) = default ;
    DescribeLoadBalancerListenMonitorResponseBody(DescribeLoadBalancerListenMonitorResponseBody &&) = default ;
    DescribeLoadBalancerListenMonitorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerListenMonitorResponseBody() = default ;
    DescribeLoadBalancerListenMonitorResponseBody& operator=(const DescribeLoadBalancerListenMonitorResponseBody &) = default ;
    DescribeLoadBalancerListenMonitorResponseBody& operator=(DescribeLoadBalancerListenMonitorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->loadBalancerMonitorListenData_ != nullptr
        && this->requestId_ != nullptr; };
    // loadBalancerMonitorListenData Field Functions 
    bool hasLoadBalancerMonitorListenData() const { return this->loadBalancerMonitorListenData_ != nullptr;};
    void deleteLoadBalancerMonitorListenData() { this->loadBalancerMonitorListenData_ = nullptr;};
    inline const vector<DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData> & loadBalancerMonitorListenData() const { DARABONBA_PTR_GET_CONST(loadBalancerMonitorListenData_, vector<DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData>) };
    inline vector<DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData> loadBalancerMonitorListenData() { DARABONBA_PTR_GET(loadBalancerMonitorListenData_, vector<DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData>) };
    inline DescribeLoadBalancerListenMonitorResponseBody& setLoadBalancerMonitorListenData(const vector<DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData> & loadBalancerMonitorListenData) { DARABONBA_PTR_SET_VALUE(loadBalancerMonitorListenData_, loadBalancerMonitorListenData) };
    inline DescribeLoadBalancerListenMonitorResponseBody& setLoadBalancerMonitorListenData(vector<DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData> && loadBalancerMonitorListenData) { DARABONBA_PTR_SET_RVALUE(loadBalancerMonitorListenData_, loadBalancerMonitorListenData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoadBalancerListenMonitorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The TCP/UDP monitoring data of the ELB instance.
    std::shared_ptr<vector<DescribeLoadBalancerListenMonitorResponseBodyLoadBalancerMonitorListenData>> loadBalancerMonitorListenData_ = nullptr;
    // Id of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
