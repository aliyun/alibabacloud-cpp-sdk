// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLELOADBALANCERACCESSLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENABLELOADBALANCERACCESSLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class EnableLoadBalancerAccessLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableLoadBalancerAccessLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableLoadBalancerAccessLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    EnableLoadBalancerAccessLogResponseBody() = default ;
    EnableLoadBalancerAccessLogResponseBody(const EnableLoadBalancerAccessLogResponseBody &) = default ;
    EnableLoadBalancerAccessLogResponseBody(EnableLoadBalancerAccessLogResponseBody &&) = default ;
    EnableLoadBalancerAccessLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableLoadBalancerAccessLogResponseBody() = default ;
    EnableLoadBalancerAccessLogResponseBody& operator=(const EnableLoadBalancerAccessLogResponseBody &) = default ;
    EnableLoadBalancerAccessLogResponseBody& operator=(EnableLoadBalancerAccessLogResponseBody &&) = default ;
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
    inline EnableLoadBalancerAccessLogResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnableLoadBalancerAccessLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the asynchronous job.
    shared_ptr<string> jobId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
