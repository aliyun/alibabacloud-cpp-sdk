// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAPRODUCINGJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAPRODUCINGJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetMediaProducingJobResponseBodyMediaProducingJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetMediaProducingJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaProducingJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaProducingJob, mediaProducingJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaProducingJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaProducingJob, mediaProducingJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMediaProducingJobResponseBody() = default ;
    GetMediaProducingJobResponseBody(const GetMediaProducingJobResponseBody &) = default ;
    GetMediaProducingJobResponseBody(GetMediaProducingJobResponseBody &&) = default ;
    GetMediaProducingJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaProducingJobResponseBody() = default ;
    GetMediaProducingJobResponseBody& operator=(const GetMediaProducingJobResponseBody &) = default ;
    GetMediaProducingJobResponseBody& operator=(GetMediaProducingJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaProducingJob_ == nullptr
        && return this->requestId_ == nullptr; };
    // mediaProducingJob Field Functions 
    bool hasMediaProducingJob() const { return this->mediaProducingJob_ != nullptr;};
    void deleteMediaProducingJob() { this->mediaProducingJob_ = nullptr;};
    inline const GetMediaProducingJobResponseBodyMediaProducingJob & mediaProducingJob() const { DARABONBA_PTR_GET_CONST(mediaProducingJob_, GetMediaProducingJobResponseBodyMediaProducingJob) };
    inline GetMediaProducingJobResponseBodyMediaProducingJob mediaProducingJob() { DARABONBA_PTR_GET(mediaProducingJob_, GetMediaProducingJobResponseBodyMediaProducingJob) };
    inline GetMediaProducingJobResponseBody& setMediaProducingJob(const GetMediaProducingJobResponseBodyMediaProducingJob & mediaProducingJob) { DARABONBA_PTR_SET_VALUE(mediaProducingJob_, mediaProducingJob) };
    inline GetMediaProducingJobResponseBody& setMediaProducingJob(GetMediaProducingJobResponseBodyMediaProducingJob && mediaProducingJob) { DARABONBA_PTR_SET_RVALUE(mediaProducingJob_, mediaProducingJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMediaProducingJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the online editing project.
    std::shared_ptr<GetMediaProducingJobResponseBodyMediaProducingJob> mediaProducingJob_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
