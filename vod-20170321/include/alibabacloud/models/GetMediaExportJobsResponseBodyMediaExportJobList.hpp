// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMEDIAEXPORTJOBSRESPONSEBODYMEDIAEXPORTJOBLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMEDIAEXPORTJOBSRESPONSEBODYMEDIAEXPORTJOBLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetMediaExportJobsResponseBodyMediaExportJobList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMediaExportJobsResponseBodyMediaExportJobList& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(Match, match_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetMediaExportJobsResponseBodyMediaExportJobList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(Match, match_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetMediaExportJobsResponseBodyMediaExportJobList() = default ;
    GetMediaExportJobsResponseBodyMediaExportJobList(const GetMediaExportJobsResponseBodyMediaExportJobList &) = default ;
    GetMediaExportJobsResponseBodyMediaExportJobList(GetMediaExportJobsResponseBodyMediaExportJobList &&) = default ;
    GetMediaExportJobsResponseBodyMediaExportJobList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMediaExportJobsResponseBodyMediaExportJobList() = default ;
    GetMediaExportJobsResponseBodyMediaExportJobList& operator=(const GetMediaExportJobsResponseBodyMediaExportJobList &) = default ;
    GetMediaExportJobsResponseBodyMediaExportJobList& operator=(GetMediaExportJobsResponseBodyMediaExportJobList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->creationTime_ != nullptr && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->fileURL_ != nullptr && this->jobId_ != nullptr
        && this->jobName_ != nullptr && this->match_ != nullptr && this->mediaType_ != nullptr && this->modificationTime_ != nullptr && this->sortBy_ != nullptr
        && this->status_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetMediaExportJobsResponseBodyMediaExportJobList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetMediaExportJobsResponseBodyMediaExportJobList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetMediaExportJobsResponseBodyMediaExportJobList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetMediaExportJobsResponseBodyMediaExportJobList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // fileURL Field Functions 
    bool hasFileURL() const { return this->fileURL_ != nullptr;};
    void deleteFileURL() { this->fileURL_ = nullptr;};
    inline string fileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
    inline GetMediaExportJobsResponseBodyMediaExportJobList& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetMediaExportJobsResponseBodyMediaExportJobList& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline GetMediaExportJobsResponseBodyMediaExportJobList& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline string match() const { DARABONBA_PTR_GET_DEFAULT(match_, "") };
    inline GetMediaExportJobsResponseBodyMediaExportJobList& setMatch(string match) { DARABONBA_PTR_SET_VALUE(match_, match) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline GetMediaExportJobsResponseBodyMediaExportJobList& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // modificationTime Field Functions 
    bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
    void deleteModificationTime() { this->modificationTime_ = nullptr;};
    inline string modificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
    inline GetMediaExportJobsResponseBodyMediaExportJobList& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline GetMediaExportJobsResponseBodyMediaExportJobList& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetMediaExportJobsResponseBodyMediaExportJobList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> fileURL_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> jobName_ = nullptr;
    std::shared_ptr<string> match_ = nullptr;
    std::shared_ptr<string> mediaType_ = nullptr;
    std::shared_ptr<string> modificationTime_ = nullptr;
    std::shared_ptr<string> sortBy_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
