// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHCOMMONBANDWIDTHPACKAGETOLOADBALANCERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ATTACHCOMMONBANDWIDTHPACKAGETOLOADBALANCERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class AttachCommonBandwidthPackageToLoadBalancerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachCommonBandwidthPackageToLoadBalancerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachCommonBandwidthPackageToLoadBalancerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AttachCommonBandwidthPackageToLoadBalancerResponseBody() = default ;
    AttachCommonBandwidthPackageToLoadBalancerResponseBody(const AttachCommonBandwidthPackageToLoadBalancerResponseBody &) = default ;
    AttachCommonBandwidthPackageToLoadBalancerResponseBody(AttachCommonBandwidthPackageToLoadBalancerResponseBody &&) = default ;
    AttachCommonBandwidthPackageToLoadBalancerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachCommonBandwidthPackageToLoadBalancerResponseBody() = default ;
    AttachCommonBandwidthPackageToLoadBalancerResponseBody& operator=(const AttachCommonBandwidthPackageToLoadBalancerResponseBody &) = default ;
    AttachCommonBandwidthPackageToLoadBalancerResponseBody& operator=(AttachCommonBandwidthPackageToLoadBalancerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr
        && this->requestId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline AttachCommonBandwidthPackageToLoadBalancerResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AttachCommonBandwidthPackageToLoadBalancerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the asynchronous task.
    shared_ptr<string> jobId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
