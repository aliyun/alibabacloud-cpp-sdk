// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADMEDIABYURLRESPONSEBODYUPLOADJOBS_HPP_
#define ALIBABACLOUD_MODELS_UPLOADMEDIABYURLRESPONSEBODYUPLOADJOBS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UploadMediaByURLResponseBodyUploadJobs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadMediaByURLResponseBodyUploadJobs& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(SourceURL, sourceURL_);
    };
    friend void from_json(const Darabonba::Json& j, UploadMediaByURLResponseBodyUploadJobs& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(SourceURL, sourceURL_);
    };
    UploadMediaByURLResponseBodyUploadJobs() = default ;
    UploadMediaByURLResponseBodyUploadJobs(const UploadMediaByURLResponseBodyUploadJobs &) = default ;
    UploadMediaByURLResponseBodyUploadJobs(UploadMediaByURLResponseBodyUploadJobs &&) = default ;
    UploadMediaByURLResponseBodyUploadJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadMediaByURLResponseBodyUploadJobs() = default ;
    UploadMediaByURLResponseBodyUploadJobs& operator=(const UploadMediaByURLResponseBodyUploadJobs &) = default ;
    UploadMediaByURLResponseBodyUploadJobs& operator=(UploadMediaByURLResponseBodyUploadJobs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr
        && return this->sourceURL_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline UploadMediaByURLResponseBodyUploadJobs& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // sourceURL Field Functions 
    bool hasSourceURL() const { return this->sourceURL_ != nullptr;};
    void deleteSourceURL() { this->sourceURL_ = nullptr;};
    inline string sourceURL() const { DARABONBA_PTR_GET_DEFAULT(sourceURL_, "") };
    inline UploadMediaByURLResponseBodyUploadJobs& setSourceURL(string sourceURL) { DARABONBA_PTR_SET_VALUE(sourceURL_, sourceURL) };


  protected:
    // The ID of the upload job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The URL of the source file that is uploaded in the upload job.
    std::shared_ptr<string> sourceURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
