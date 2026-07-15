// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNLOADJOBRESULT_HPP_
#define ALIBABACLOUD_MODELS_DOWNLOADJOBRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class DownloadJobResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DownloadJobResult& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(DownloadJobId, downloadJobId_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(LogCount, logCount_);
      DARABONBA_PTR_TO_JSON(PodIds, podIds_);
      DARABONBA_PTR_TO_JSON(PodUids, podUids_);
      DARABONBA_PTR_TO_JSON(SourceJobId, sourceJobId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UrlExpireTime, urlExpireTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DownloadJobResult& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(DownloadJobId, downloadJobId_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(LogCount, logCount_);
      DARABONBA_PTR_FROM_JSON(PodIds, podIds_);
      DARABONBA_PTR_FROM_JSON(PodUids, podUids_);
      DARABONBA_PTR_FROM_JSON(SourceJobId, sourceJobId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UrlExpireTime, urlExpireTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DownloadJobResult() = default ;
    DownloadJobResult(const DownloadJobResult &) = default ;
    DownloadJobResult(DownloadJobResult &&) = default ;
    DownloadJobResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DownloadJobResult() = default ;
    DownloadJobResult& operator=(const DownloadJobResult &) = default ;
    DownloadJobResult& operator=(DownloadJobResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && this->downloadJobId_ == nullptr && this->downloadUrl_ == nullptr && this->endTime_ == nullptr && this->fileType_ == nullptr && this->gmtCreated_ == nullptr
        && this->gmtModified_ == nullptr && this->logCount_ == nullptr && this->podIds_ == nullptr && this->podUids_ == nullptr && this->sourceJobId_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->tenantId_ == nullptr && this->type_ == nullptr && this->urlExpireTime_ == nullptr
        && this->userId_ == nullptr && this->workspaceId_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DownloadJobResult& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // downloadJobId Field Functions 
    bool hasDownloadJobId() const { return this->downloadJobId_ != nullptr;};
    void deleteDownloadJobId() { this->downloadJobId_ = nullptr;};
    inline string getDownloadJobId() const { DARABONBA_PTR_GET_DEFAULT(downloadJobId_, "") };
    inline DownloadJobResult& setDownloadJobId(string downloadJobId) { DARABONBA_PTR_SET_VALUE(downloadJobId_, downloadJobId) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline DownloadJobResult& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DownloadJobResult& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline DownloadJobResult& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DownloadJobResult& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DownloadJobResult& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // logCount Field Functions 
    bool hasLogCount() const { return this->logCount_ != nullptr;};
    void deleteLogCount() { this->logCount_ = nullptr;};
    inline int32_t getLogCount() const { DARABONBA_PTR_GET_DEFAULT(logCount_, 0) };
    inline DownloadJobResult& setLogCount(int32_t logCount) { DARABONBA_PTR_SET_VALUE(logCount_, logCount) };


    // podIds Field Functions 
    bool hasPodIds() const { return this->podIds_ != nullptr;};
    void deletePodIds() { this->podIds_ = nullptr;};
    inline const vector<string> & getPodIds() const { DARABONBA_PTR_GET_CONST(podIds_, vector<string>) };
    inline vector<string> getPodIds() { DARABONBA_PTR_GET(podIds_, vector<string>) };
    inline DownloadJobResult& setPodIds(const vector<string> & podIds) { DARABONBA_PTR_SET_VALUE(podIds_, podIds) };
    inline DownloadJobResult& setPodIds(vector<string> && podIds) { DARABONBA_PTR_SET_RVALUE(podIds_, podIds) };


    // podUids Field Functions 
    bool hasPodUids() const { return this->podUids_ != nullptr;};
    void deletePodUids() { this->podUids_ = nullptr;};
    inline const vector<string> & getPodUids() const { DARABONBA_PTR_GET_CONST(podUids_, vector<string>) };
    inline vector<string> getPodUids() { DARABONBA_PTR_GET(podUids_, vector<string>) };
    inline DownloadJobResult& setPodUids(const vector<string> & podUids) { DARABONBA_PTR_SET_VALUE(podUids_, podUids) };
    inline DownloadJobResult& setPodUids(vector<string> && podUids) { DARABONBA_PTR_SET_RVALUE(podUids_, podUids) };


    // sourceJobId Field Functions 
    bool hasSourceJobId() const { return this->sourceJobId_ != nullptr;};
    void deleteSourceJobId() { this->sourceJobId_ = nullptr;};
    inline string getSourceJobId() const { DARABONBA_PTR_GET_DEFAULT(sourceJobId_, "") };
    inline DownloadJobResult& setSourceJobId(string sourceJobId) { DARABONBA_PTR_SET_VALUE(sourceJobId_, sourceJobId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DownloadJobResult& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DownloadJobResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DownloadJobResult& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DownloadJobResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // urlExpireTime Field Functions 
    bool hasUrlExpireTime() const { return this->urlExpireTime_ != nullptr;};
    void deleteUrlExpireTime() { this->urlExpireTime_ = nullptr;};
    inline string getUrlExpireTime() const { DARABONBA_PTR_GET_DEFAULT(urlExpireTime_, "") };
    inline DownloadJobResult& setUrlExpireTime(string urlExpireTime) { DARABONBA_PTR_SET_VALUE(urlExpireTime_, urlExpireTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DownloadJobResult& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DownloadJobResult& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The display name of the download job.
    shared_ptr<string> displayName_ {};
    // The ID of the download job.
    shared_ptr<string> downloadJobId_ {};
    // A temporary, pre-signed URL for downloading the result file.
    shared_ptr<string> downloadUrl_ {};
    // The completion time of the download job, in UTC format.
    shared_ptr<string> endTime_ {};
    // The type of file to download, such as `logs` or `output`.
    shared_ptr<string> fileType_ {};
    // The creation time of the download job, in UTC format.
    shared_ptr<string> gmtCreated_ {};
    // The last modification time of the download job, in UTC format.
    shared_ptr<string> gmtModified_ {};
    // The number of log entries included in the download.
    shared_ptr<int32_t> logCount_ {};
    // The IDs of the pods for the source job.
    shared_ptr<vector<string>> podIds_ {};
    // The UIDs of the pods for the source job.
    shared_ptr<vector<string>> podUids_ {};
    // The ID of the source job whose results are downloaded.
    shared_ptr<string> sourceJobId_ {};
    // The start time of the download job, in UTC format.
    shared_ptr<string> startTime_ {};
    // The status of the download job. Valid values: `Running`, `Succeeded`, and `Failed`.
    shared_ptr<string> status_ {};
    // The ID of the tenant that the job belongs to.
    shared_ptr<string> tenantId_ {};
    // The type of the download job.
    shared_ptr<string> type_ {};
    // The time when the download URL expires, in UTC format.
    shared_ptr<string> urlExpireTime_ {};
    // The ID of the user who created the job.
    shared_ptr<string> userId_ {};
    // The ID of the workspace where the job was created.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
