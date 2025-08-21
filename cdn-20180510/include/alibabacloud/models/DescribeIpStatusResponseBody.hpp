// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIpStatusResponseBodyIpStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeIpStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IpStatus, ipStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IpStatus, ipStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeIpStatusResponseBody() = default ;
    DescribeIpStatusResponseBody(const DescribeIpStatusResponseBody &) = default ;
    DescribeIpStatusResponseBody(DescribeIpStatusResponseBody &&) = default ;
    DescribeIpStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpStatusResponseBody() = default ;
    DescribeIpStatusResponseBody& operator=(const DescribeIpStatusResponseBody &) = default ;
    DescribeIpStatusResponseBody& operator=(DescribeIpStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipStatus_ != nullptr
        && this->requestId_ != nullptr; };
    // ipStatus Field Functions 
    bool hasIpStatus() const { return this->ipStatus_ != nullptr;};
    void deleteIpStatus() { this->ipStatus_ = nullptr;};
    inline const vector<DescribeIpStatusResponseBodyIpStatus> & ipStatus() const { DARABONBA_PTR_GET_CONST(ipStatus_, vector<DescribeIpStatusResponseBodyIpStatus>) };
    inline vector<DescribeIpStatusResponseBodyIpStatus> ipStatus() { DARABONBA_PTR_GET(ipStatus_, vector<DescribeIpStatusResponseBodyIpStatus>) };
    inline DescribeIpStatusResponseBody& setIpStatus(const vector<DescribeIpStatusResponseBodyIpStatus> & ipStatus) { DARABONBA_PTR_SET_VALUE(ipStatus_, ipStatus) };
    inline DescribeIpStatusResponseBody& setIpStatus(vector<DescribeIpStatusResponseBodyIpStatus> && ipStatus) { DARABONBA_PTR_SET_RVALUE(ipStatus_, ipStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIpStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status of the IP addresses of the POPs.
    std::shared_ptr<vector<DescribeIpStatusResponseBodyIpStatus>> ipStatus_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
