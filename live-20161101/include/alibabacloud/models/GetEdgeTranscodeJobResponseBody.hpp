// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEDGETRANSCODEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEDGETRANSCODEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetEdgeTranscodeJobResponseBodyJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class GetEdgeTranscodeJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEdgeTranscodeJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Job, job_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEdgeTranscodeJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Job, job_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetEdgeTranscodeJobResponseBody() = default ;
    GetEdgeTranscodeJobResponseBody(const GetEdgeTranscodeJobResponseBody &) = default ;
    GetEdgeTranscodeJobResponseBody(GetEdgeTranscodeJobResponseBody &&) = default ;
    GetEdgeTranscodeJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEdgeTranscodeJobResponseBody() = default ;
    GetEdgeTranscodeJobResponseBody& operator=(const GetEdgeTranscodeJobResponseBody &) = default ;
    GetEdgeTranscodeJobResponseBody& operator=(GetEdgeTranscodeJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->job_ != nullptr
        && this->requestId_ != nullptr; };
    // job Field Functions 
    bool hasJob() const { return this->job_ != nullptr;};
    void deleteJob() { this->job_ = nullptr;};
    inline const GetEdgeTranscodeJobResponseBodyJob & job() const { DARABONBA_PTR_GET_CONST(job_, GetEdgeTranscodeJobResponseBodyJob) };
    inline GetEdgeTranscodeJobResponseBodyJob job() { DARABONBA_PTR_GET(job_, GetEdgeTranscodeJobResponseBodyJob) };
    inline GetEdgeTranscodeJobResponseBody& setJob(const GetEdgeTranscodeJobResponseBodyJob & job) { DARABONBA_PTR_SET_VALUE(job_, job) };
    inline GetEdgeTranscodeJobResponseBody& setJob(GetEdgeTranscodeJobResponseBodyJob && job) { DARABONBA_PTR_SET_RVALUE(job_, job) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEdgeTranscodeJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the edge transcoding task.
    std::shared_ptr<GetEdgeTranscodeJobResponseBodyJob> job_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
