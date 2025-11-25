// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHealthCheckStatusResponseBodyHealthCheckStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeHealthCheckStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthCheckStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HealthCheckStatus, healthCheckStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthCheckStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HealthCheckStatus, healthCheckStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHealthCheckStatusResponseBody() = default ;
    DescribeHealthCheckStatusResponseBody(const DescribeHealthCheckStatusResponseBody &) = default ;
    DescribeHealthCheckStatusResponseBody(DescribeHealthCheckStatusResponseBody &&) = default ;
    DescribeHealthCheckStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthCheckStatusResponseBody() = default ;
    DescribeHealthCheckStatusResponseBody& operator=(const DescribeHealthCheckStatusResponseBody &) = default ;
    DescribeHealthCheckStatusResponseBody& operator=(DescribeHealthCheckStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->healthCheckStatus_ == nullptr
        && return this->requestId_ == nullptr; };
    // healthCheckStatus Field Functions 
    bool hasHealthCheckStatus() const { return this->healthCheckStatus_ != nullptr;};
    void deleteHealthCheckStatus() { this->healthCheckStatus_ = nullptr;};
    inline const vector<DescribeHealthCheckStatusResponseBodyHealthCheckStatus> & healthCheckStatus() const { DARABONBA_PTR_GET_CONST(healthCheckStatus_, vector<DescribeHealthCheckStatusResponseBodyHealthCheckStatus>) };
    inline vector<DescribeHealthCheckStatusResponseBodyHealthCheckStatus> healthCheckStatus() { DARABONBA_PTR_GET(healthCheckStatus_, vector<DescribeHealthCheckStatusResponseBodyHealthCheckStatus>) };
    inline DescribeHealthCheckStatusResponseBody& setHealthCheckStatus(const vector<DescribeHealthCheckStatusResponseBodyHealthCheckStatus> & healthCheckStatus) { DARABONBA_PTR_SET_VALUE(healthCheckStatus_, healthCheckStatus) };
    inline DescribeHealthCheckStatusResponseBody& setHealthCheckStatus(vector<DescribeHealthCheckStatusResponseBodyHealthCheckStatus> && healthCheckStatus) { DARABONBA_PTR_SET_RVALUE(healthCheckStatus_, healthCheckStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHealthCheckStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the details of the health status of the origin server.
    std::shared_ptr<vector<DescribeHealthCheckStatusResponseBodyHealthCheckStatus>> healthCheckStatus_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
