// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITLIVEEDITINGJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITLIVEEDITINGJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitLiveEditingJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitLiveEditingJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaURL, mediaURL_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VodMediaId, vodMediaId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitLiveEditingJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaURL, mediaURL_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VodMediaId, vodMediaId_);
    };
    SubmitLiveEditingJobResponseBody() = default ;
    SubmitLiveEditingJobResponseBody(const SubmitLiveEditingJobResponseBody &) = default ;
    SubmitLiveEditingJobResponseBody(SubmitLiveEditingJobResponseBody &&) = default ;
    SubmitLiveEditingJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitLiveEditingJobResponseBody() = default ;
    SubmitLiveEditingJobResponseBody& operator=(const SubmitLiveEditingJobResponseBody &) = default ;
    SubmitLiveEditingJobResponseBody& operator=(SubmitLiveEditingJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr
        && return this->mediaId_ == nullptr && return this->mediaURL_ == nullptr && return this->projectId_ == nullptr && return this->requestId_ == nullptr && return this->vodMediaId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline SubmitLiveEditingJobResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline SubmitLiveEditingJobResponseBody& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaURL Field Functions 
    bool hasMediaURL() const { return this->mediaURL_ != nullptr;};
    void deleteMediaURL() { this->mediaURL_ = nullptr;};
    inline string mediaURL() const { DARABONBA_PTR_GET_DEFAULT(mediaURL_, "") };
    inline SubmitLiveEditingJobResponseBody& setMediaURL(string mediaURL) { DARABONBA_PTR_SET_VALUE(mediaURL_, mediaURL) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline SubmitLiveEditingJobResponseBody& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitLiveEditingJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vodMediaId Field Functions 
    bool hasVodMediaId() const { return this->vodMediaId_ != nullptr;};
    void deleteVodMediaId() { this->vodMediaId_ = nullptr;};
    inline string vodMediaId() const { DARABONBA_PTR_GET_DEFAULT(vodMediaId_, "") };
    inline SubmitLiveEditingJobResponseBody& setVodMediaId(string vodMediaId) { DARABONBA_PTR_SET_VALUE(vodMediaId_, vodMediaId) };


  protected:
    // The ID of the live editing job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The media asset ID of the output file.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The URL of the output file.
    std::shared_ptr<string> mediaURL_ = nullptr;
    // The ID of the live editing project.
    std::shared_ptr<string> projectId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The media asset ID of the output file in ApsaraVideo VOD if the output file is stored in ApsaraVideo VOD.
    std::shared_ptr<string> vodMediaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
