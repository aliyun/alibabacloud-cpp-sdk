// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVERLOADBALANCERLISTENMONITORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVERLOADBALANCERLISTENMONITORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeServerLoadBalancerListenMonitorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServerLoadBalancerListenMonitorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServerLoadBalancerMonitorData, serverLoadBalancerMonitorData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServerLoadBalancerListenMonitorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServerLoadBalancerMonitorData, serverLoadBalancerMonitorData_);
    };
    DescribeServerLoadBalancerListenMonitorResponseBody() = default ;
    DescribeServerLoadBalancerListenMonitorResponseBody(const DescribeServerLoadBalancerListenMonitorResponseBody &) = default ;
    DescribeServerLoadBalancerListenMonitorResponseBody(DescribeServerLoadBalancerListenMonitorResponseBody &&) = default ;
    DescribeServerLoadBalancerListenMonitorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServerLoadBalancerListenMonitorResponseBody() = default ;
    DescribeServerLoadBalancerListenMonitorResponseBody& operator=(const DescribeServerLoadBalancerListenMonitorResponseBody &) = default ;
    DescribeServerLoadBalancerListenMonitorResponseBody& operator=(DescribeServerLoadBalancerListenMonitorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->serverLoadBalancerMonitorData_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServerLoadBalancerListenMonitorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serverLoadBalancerMonitorData Field Functions 
    bool hasServerLoadBalancerMonitorData() const { return this->serverLoadBalancerMonitorData_ != nullptr;};
    void deleteServerLoadBalancerMonitorData() { this->serverLoadBalancerMonitorData_ = nullptr;};
    inline const vector<DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData> & serverLoadBalancerMonitorData() const { DARABONBA_PTR_GET_CONST(serverLoadBalancerMonitorData_, vector<DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData>) };
    inline vector<DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData> serverLoadBalancerMonitorData() { DARABONBA_PTR_GET(serverLoadBalancerMonitorData_, vector<DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData>) };
    inline DescribeServerLoadBalancerListenMonitorResponseBody& setServerLoadBalancerMonitorData(const vector<DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData> & serverLoadBalancerMonitorData) { DARABONBA_PTR_SET_VALUE(serverLoadBalancerMonitorData_, serverLoadBalancerMonitorData) };
    inline DescribeServerLoadBalancerListenMonitorResponseBody& setServerLoadBalancerMonitorData(vector<DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData> && serverLoadBalancerMonitorData) { DARABONBA_PTR_SET_RVALUE(serverLoadBalancerMonitorData_, serverLoadBalancerMonitorData) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The array of the monitoring data.
    std::shared_ptr<vector<DescribeServerLoadBalancerListenMonitorResponseBodyServerLoadBalancerMonitorData>> serverLoadBalancerMonitorData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
