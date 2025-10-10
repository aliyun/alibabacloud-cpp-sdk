// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLELOADBALANCERIPV6INTERNETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENABLELOADBALANCERIPV6INTERNETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class EnableLoadBalancerIpv6InternetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableLoadBalancerIpv6InternetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableLoadBalancerIpv6InternetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    EnableLoadBalancerIpv6InternetResponseBody() = default ;
    EnableLoadBalancerIpv6InternetResponseBody(const EnableLoadBalancerIpv6InternetResponseBody &) = default ;
    EnableLoadBalancerIpv6InternetResponseBody(EnableLoadBalancerIpv6InternetResponseBody &&) = default ;
    EnableLoadBalancerIpv6InternetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableLoadBalancerIpv6InternetResponseBody() = default ;
    EnableLoadBalancerIpv6InternetResponseBody& operator=(const EnableLoadBalancerIpv6InternetResponseBody &) = default ;
    EnableLoadBalancerIpv6InternetResponseBody& operator=(EnableLoadBalancerIpv6InternetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobId_ != nullptr
        && this->requestId_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline EnableLoadBalancerIpv6InternetResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnableLoadBalancerIpv6InternetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The asynchronous task ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
