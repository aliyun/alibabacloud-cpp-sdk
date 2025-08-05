// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECREATEINDEXJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECREATEINDEXJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCreateIndexJobResponseBodyJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeCreateIndexJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCreateIndexJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Job, job_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCreateIndexJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Job, job_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeCreateIndexJobResponseBody() = default ;
    DescribeCreateIndexJobResponseBody(const DescribeCreateIndexJobResponseBody &) = default ;
    DescribeCreateIndexJobResponseBody(DescribeCreateIndexJobResponseBody &&) = default ;
    DescribeCreateIndexJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCreateIndexJobResponseBody() = default ;
    DescribeCreateIndexJobResponseBody& operator=(const DescribeCreateIndexJobResponseBody &) = default ;
    DescribeCreateIndexJobResponseBody& operator=(DescribeCreateIndexJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->job_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr && this->status_ != nullptr; };
    // job Field Functions 
    bool hasJob() const { return this->job_ != nullptr;};
    void deleteJob() { this->job_ = nullptr;};
    inline const DescribeCreateIndexJobResponseBodyJob & job() const { DARABONBA_PTR_GET_CONST(job_, DescribeCreateIndexJobResponseBodyJob) };
    inline DescribeCreateIndexJobResponseBodyJob job() { DARABONBA_PTR_GET(job_, DescribeCreateIndexJobResponseBodyJob) };
    inline DescribeCreateIndexJobResponseBody& setJob(const DescribeCreateIndexJobResponseBodyJob & job) { DARABONBA_PTR_SET_VALUE(job_, job) };
    inline DescribeCreateIndexJobResponseBody& setJob(DescribeCreateIndexJobResponseBodyJob && job) { DARABONBA_PTR_SET_RVALUE(job_, job) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCreateIndexJobResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCreateIndexJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCreateIndexJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<DescribeCreateIndexJobResponseBodyJob> job_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
