// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITMEDIAINFOJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITMEDIAINFOJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitMediaInfoJobResponseBodyMediaInfoJob.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitMediaInfoJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitMediaInfoJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaInfoJob, mediaInfoJob_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitMediaInfoJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaInfoJob, mediaInfoJob_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SubmitMediaInfoJobResponseBody() = default ;
    SubmitMediaInfoJobResponseBody(const SubmitMediaInfoJobResponseBody &) = default ;
    SubmitMediaInfoJobResponseBody(SubmitMediaInfoJobResponseBody &&) = default ;
    SubmitMediaInfoJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitMediaInfoJobResponseBody() = default ;
    SubmitMediaInfoJobResponseBody& operator=(const SubmitMediaInfoJobResponseBody &) = default ;
    SubmitMediaInfoJobResponseBody& operator=(SubmitMediaInfoJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaInfoJob_ == nullptr
        && return this->requestId_ == nullptr; };
    // mediaInfoJob Field Functions 
    bool hasMediaInfoJob() const { return this->mediaInfoJob_ != nullptr;};
    void deleteMediaInfoJob() { this->mediaInfoJob_ = nullptr;};
    inline const SubmitMediaInfoJobResponseBodyMediaInfoJob & mediaInfoJob() const { DARABONBA_PTR_GET_CONST(mediaInfoJob_, SubmitMediaInfoJobResponseBodyMediaInfoJob) };
    inline SubmitMediaInfoJobResponseBodyMediaInfoJob mediaInfoJob() { DARABONBA_PTR_GET(mediaInfoJob_, SubmitMediaInfoJobResponseBodyMediaInfoJob) };
    inline SubmitMediaInfoJobResponseBody& setMediaInfoJob(const SubmitMediaInfoJobResponseBodyMediaInfoJob & mediaInfoJob) { DARABONBA_PTR_SET_VALUE(mediaInfoJob_, mediaInfoJob) };
    inline SubmitMediaInfoJobResponseBody& setMediaInfoJob(SubmitMediaInfoJobResponseBodyMediaInfoJob && mediaInfoJob) { DARABONBA_PTR_SET_RVALUE(mediaInfoJob_, mediaInfoJob) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitMediaInfoJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the media information analysis job.
    std::shared_ptr<SubmitMediaInfoJobResponseBodyMediaInfoJob> mediaInfoJob_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
