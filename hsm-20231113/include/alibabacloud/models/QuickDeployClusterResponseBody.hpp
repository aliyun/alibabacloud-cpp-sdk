// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUICKDEPLOYCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUICKDEPLOYCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QuickDeployClusterResponseBodyJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class QuickDeployClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuickDeployClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Job, job_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QuickDeployClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Job, job_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QuickDeployClusterResponseBody() = default ;
    QuickDeployClusterResponseBody(const QuickDeployClusterResponseBody &) = default ;
    QuickDeployClusterResponseBody(QuickDeployClusterResponseBody &&) = default ;
    QuickDeployClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuickDeployClusterResponseBody() = default ;
    QuickDeployClusterResponseBody& operator=(const QuickDeployClusterResponseBody &) = default ;
    QuickDeployClusterResponseBody& operator=(QuickDeployClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->job_ != nullptr
        && this->requestId_ != nullptr; };
    // job Field Functions 
    bool hasJob() const { return this->job_ != nullptr;};
    void deleteJob() { this->job_ = nullptr;};
    inline const QuickDeployClusterResponseBodyJob & job() const { DARABONBA_PTR_GET_CONST(job_, QuickDeployClusterResponseBodyJob) };
    inline QuickDeployClusterResponseBodyJob job() { DARABONBA_PTR_GET(job_, QuickDeployClusterResponseBodyJob) };
    inline QuickDeployClusterResponseBody& setJob(const QuickDeployClusterResponseBodyJob & job) { DARABONBA_PTR_SET_VALUE(job_, job) };
    inline QuickDeployClusterResponseBody& setJob(QuickDeployClusterResponseBodyJob && job) { DARABONBA_PTR_SET_RVALUE(job_, job) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuickDeployClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<QuickDeployClusterResponseBodyJob> job_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
