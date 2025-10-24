// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobResultList, jobResultList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobResultList, jobResultList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitJobsResponseBody() = default ;
    SubmitJobsResponseBody(const SubmitJobsResponseBody &) = default ;
    SubmitJobsResponseBody(SubmitJobsResponseBody &&) = default ;
    SubmitJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBody() = default ;
    SubmitJobsResponseBody& operator=(const SubmitJobsResponseBody &) = default ;
    SubmitJobsResponseBody& operator=(SubmitJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobResultList_ == nullptr
        && return this->requestId_ == nullptr; };
    // jobResultList Field Functions 
    bool hasJobResultList() const { return this->jobResultList_ != nullptr;};
    void deleteJobResultList() { this->jobResultList_ = nullptr;};
    inline const SubmitJobsResponseBodyJobResultList & jobResultList() const { DARABONBA_PTR_GET_CONST(jobResultList_, SubmitJobsResponseBodyJobResultList) };
    inline SubmitJobsResponseBodyJobResultList jobResultList() { DARABONBA_PTR_GET(jobResultList_, SubmitJobsResponseBodyJobResultList) };
    inline SubmitJobsResponseBody& setJobResultList(const SubmitJobsResponseBodyJobResultList & jobResultList) { DARABONBA_PTR_SET_VALUE(jobResultList_, jobResultList) };
    inline SubmitJobsResponseBody& setJobResultList(SubmitJobsResponseBodyJobResultList && jobResultList) { DARABONBA_PTR_SET_RVALUE(jobResultList_, jobResultList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The transcoding jobs that are generated.
    std::shared_ptr<SubmitJobsResponseBodyJobResultList> jobResultList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
