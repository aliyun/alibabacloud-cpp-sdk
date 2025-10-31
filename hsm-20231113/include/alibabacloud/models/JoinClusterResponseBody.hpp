// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOINCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_JOINCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/JoinClusterResponseBodyJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class JoinClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JoinClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Job, job_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, JoinClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Job, job_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    JoinClusterResponseBody() = default ;
    JoinClusterResponseBody(const JoinClusterResponseBody &) = default ;
    JoinClusterResponseBody(JoinClusterResponseBody &&) = default ;
    JoinClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JoinClusterResponseBody() = default ;
    JoinClusterResponseBody& operator=(const JoinClusterResponseBody &) = default ;
    JoinClusterResponseBody& operator=(JoinClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->job_ == nullptr
        && return this->requestId_ == nullptr; };
    // job Field Functions 
    bool hasJob() const { return this->job_ != nullptr;};
    void deleteJob() { this->job_ = nullptr;};
    inline const JoinClusterResponseBodyJob & job() const { DARABONBA_PTR_GET_CONST(job_, JoinClusterResponseBodyJob) };
    inline JoinClusterResponseBodyJob job() { DARABONBA_PTR_GET(job_, JoinClusterResponseBodyJob) };
    inline JoinClusterResponseBody& setJob(const JoinClusterResponseBodyJob & job) { DARABONBA_PTR_SET_VALUE(job_, job) };
    inline JoinClusterResponseBody& setJob(JoinClusterResponseBodyJob && job) { DARABONBA_PTR_SET_RVALUE(job_, job) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline JoinClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the task.
    std::shared_ptr<JoinClusterResponseBodyJob> job_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
