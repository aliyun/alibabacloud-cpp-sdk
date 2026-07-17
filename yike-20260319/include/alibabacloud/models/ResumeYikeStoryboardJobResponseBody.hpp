// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESUMEYIKESTORYBOARDJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESUMEYIKESTORYBOARDJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260319
{
namespace Models
{
  class ResumeYikeStoryboardJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResumeYikeStoryboardJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ResumeYikeStoryboardJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ResumeYikeStoryboardJobResponseBody() = default ;
    ResumeYikeStoryboardJobResponseBody(const ResumeYikeStoryboardJobResponseBody &) = default ;
    ResumeYikeStoryboardJobResponseBody(ResumeYikeStoryboardJobResponseBody &&) = default ;
    ResumeYikeStoryboardJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResumeYikeStoryboardJobResponseBody() = default ;
    ResumeYikeStoryboardJobResponseBody& operator=(const ResumeYikeStoryboardJobResponseBody &) = default ;
    ResumeYikeStoryboardJobResponseBody& operator=(ResumeYikeStoryboardJobResponseBody &&) = default ;
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
    inline ResumeYikeStoryboardJobResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ResumeYikeStoryboardJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The task ID. You can obtain this value from the response parameters of the [Submit a packaging task](https://help.aliyun.com/document_detail/461964.html) operation.
    shared_ptr<string> jobId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
