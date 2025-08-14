// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVETRANSCODEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLIVETRANSCODEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLiveTranscodeJobResponseBodyJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveTranscodeJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveTranscodeJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Job, job_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveTranscodeJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Job, job_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetLiveTranscodeJobResponseBody() = default ;
    GetLiveTranscodeJobResponseBody(const GetLiveTranscodeJobResponseBody &) = default ;
    GetLiveTranscodeJobResponseBody(GetLiveTranscodeJobResponseBody &&) = default ;
    GetLiveTranscodeJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveTranscodeJobResponseBody() = default ;
    GetLiveTranscodeJobResponseBody& operator=(const GetLiveTranscodeJobResponseBody &) = default ;
    GetLiveTranscodeJobResponseBody& operator=(GetLiveTranscodeJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->job_ != nullptr
        && this->requestId_ != nullptr; };
    // job Field Functions 
    bool hasJob() const { return this->job_ != nullptr;};
    void deleteJob() { this->job_ = nullptr;};
    inline const GetLiveTranscodeJobResponseBodyJob & job() const { DARABONBA_PTR_GET_CONST(job_, GetLiveTranscodeJobResponseBodyJob) };
    inline GetLiveTranscodeJobResponseBodyJob job() { DARABONBA_PTR_GET(job_, GetLiveTranscodeJobResponseBodyJob) };
    inline GetLiveTranscodeJobResponseBody& setJob(const GetLiveTranscodeJobResponseBodyJob & job) { DARABONBA_PTR_SET_VALUE(job_, job) };
    inline GetLiveTranscodeJobResponseBody& setJob(GetLiveTranscodeJobResponseBodyJob && job) { DARABONBA_PTR_SET_RVALUE(job_, job) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLiveTranscodeJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the transcoding job.
    std::shared_ptr<GetLiveTranscodeJobResponseBodyJob> job_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
