// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITMEDIAPRODUCINGJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITMEDIAPRODUCINGJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitMediaProducingJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitMediaProducingJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VodMediaId, vodMediaId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitMediaProducingJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VodMediaId, vodMediaId_);
    };
    SubmitMediaProducingJobResponseBody() = default ;
    SubmitMediaProducingJobResponseBody(const SubmitMediaProducingJobResponseBody &) = default ;
    SubmitMediaProducingJobResponseBody(SubmitMediaProducingJobResponseBody &&) = default ;
    SubmitMediaProducingJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitMediaProducingJobResponseBody() = default ;
    SubmitMediaProducingJobResponseBody& operator=(const SubmitMediaProducingJobResponseBody &) = default ;
    SubmitMediaProducingJobResponseBody& operator=(SubmitMediaProducingJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobId_ != nullptr
        && this->mediaId_ != nullptr && this->projectId_ != nullptr && this->requestId_ != nullptr && this->vodMediaId_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline SubmitMediaProducingJobResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline SubmitMediaProducingJobResponseBody& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline SubmitMediaProducingJobResponseBody& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitMediaProducingJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vodMediaId Field Functions 
    bool hasVodMediaId() const { return this->vodMediaId_ != nullptr;};
    void deleteVodMediaId() { this->vodMediaId_ = nullptr;};
    inline string vodMediaId() const { DARABONBA_PTR_GET_DEFAULT(vodMediaId_, "") };
    inline SubmitMediaProducingJobResponseBody& setVodMediaId(string vodMediaId) { DARABONBA_PTR_SET_VALUE(vodMediaId_, vodMediaId) };


  protected:
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The media asset ID of the output file.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The ID of the editing project.
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
