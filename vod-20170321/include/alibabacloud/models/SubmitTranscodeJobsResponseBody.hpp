// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitTranscodeJobsResponseBodyTranscodeJobs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitTranscodeJobsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TranscodeJobs, transcodeJobs_);
      DARABONBA_PTR_TO_JSON(TranscodeTaskId, transcodeTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TranscodeJobs, transcodeJobs_);
      DARABONBA_PTR_FROM_JSON(TranscodeTaskId, transcodeTaskId_);
    };
    SubmitTranscodeJobsResponseBody() = default ;
    SubmitTranscodeJobsResponseBody(const SubmitTranscodeJobsResponseBody &) = default ;
    SubmitTranscodeJobsResponseBody(SubmitTranscodeJobsResponseBody &&) = default ;
    SubmitTranscodeJobsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobsResponseBody() = default ;
    SubmitTranscodeJobsResponseBody& operator=(const SubmitTranscodeJobsResponseBody &) = default ;
    SubmitTranscodeJobsResponseBody& operator=(SubmitTranscodeJobsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->transcodeJobs_ == nullptr && return this->transcodeTaskId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitTranscodeJobsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // transcodeJobs Field Functions 
    bool hasTranscodeJobs() const { return this->transcodeJobs_ != nullptr;};
    void deleteTranscodeJobs() { this->transcodeJobs_ = nullptr;};
    inline const SubmitTranscodeJobsResponseBodyTranscodeJobs & transcodeJobs() const { DARABONBA_PTR_GET_CONST(transcodeJobs_, SubmitTranscodeJobsResponseBodyTranscodeJobs) };
    inline SubmitTranscodeJobsResponseBodyTranscodeJobs transcodeJobs() { DARABONBA_PTR_GET(transcodeJobs_, SubmitTranscodeJobsResponseBodyTranscodeJobs) };
    inline SubmitTranscodeJobsResponseBody& setTranscodeJobs(const SubmitTranscodeJobsResponseBodyTranscodeJobs & transcodeJobs) { DARABONBA_PTR_SET_VALUE(transcodeJobs_, transcodeJobs) };
    inline SubmitTranscodeJobsResponseBody& setTranscodeJobs(SubmitTranscodeJobsResponseBodyTranscodeJobs && transcodeJobs) { DARABONBA_PTR_SET_RVALUE(transcodeJobs_, transcodeJobs) };


    // transcodeTaskId Field Functions 
    bool hasTranscodeTaskId() const { return this->transcodeTaskId_ != nullptr;};
    void deleteTranscodeTaskId() { this->transcodeTaskId_ = nullptr;};
    inline string transcodeTaskId() const { DARABONBA_PTR_GET_DEFAULT(transcodeTaskId_, "") };
    inline SubmitTranscodeJobsResponseBody& setTranscodeTaskId(string transcodeTaskId) { DARABONBA_PTR_SET_VALUE(transcodeTaskId_, transcodeTaskId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the transcoding job.
    // 
    // >  This parameter is not returned for HLS packaging tasks. You must asynchronously receive the transcoding result.
    std::shared_ptr<SubmitTranscodeJobsResponseBodyTranscodeJobs> transcodeJobs_ = nullptr;
    // The ID of the transcoding task that was submitted.
    std::shared_ptr<string> transcodeTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
