// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAIJOBRESPONSEBODYAIJOBLISTAIJOB_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAIJOBRESPONSEBODYAIJOBLISTAIJOB_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitAIJobResponseBodyAIJobListAIJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAIJobResponseBodyAIJobListAIJob& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAIJobResponseBodyAIJobListAIJob& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SubmitAIJobResponseBodyAIJobListAIJob() = default ;
    SubmitAIJobResponseBodyAIJobListAIJob(const SubmitAIJobResponseBodyAIJobListAIJob &) = default ;
    SubmitAIJobResponseBodyAIJobListAIJob(SubmitAIJobResponseBodyAIJobListAIJob &&) = default ;
    SubmitAIJobResponseBodyAIJobListAIJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAIJobResponseBodyAIJobListAIJob() = default ;
    SubmitAIJobResponseBodyAIJobListAIJob& operator=(const SubmitAIJobResponseBodyAIJobListAIJob &) = default ;
    SubmitAIJobResponseBodyAIJobListAIJob& operator=(SubmitAIJobResponseBodyAIJobListAIJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobId_ != nullptr
        && this->mediaId_ != nullptr && this->type_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline SubmitAIJobResponseBodyAIJobListAIJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline SubmitAIJobResponseBodyAIJobListAIJob& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SubmitAIJobResponseBodyAIJobListAIJob& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the AI job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The ID of the video.
    std::shared_ptr<string> mediaId_ = nullptr;
    // The type of the AI job. Valid values:
    // 
    // *   **AIMediaDNA**: The media fingerprinting job.
    // *   **AIVideoTag**: The smart tagging job.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
