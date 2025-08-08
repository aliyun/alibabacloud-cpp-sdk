// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATATRACKRESULTDOWNLOADSTATUSRESPONSEBODYSTATUSRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATATRACKRESULTDOWNLOADSTATUSRESPONSEBODYSTATUSRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class QueryDataTrackResultDownloadStatusResponseBodyStatusResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDataTrackResultDownloadStatusResponseBodyStatusResult& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadStatus, downloadStatus_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDataTrackResultDownloadStatusResponseBodyStatusResult& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadStatus, downloadStatus_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryDataTrackResultDownloadStatusResponseBodyStatusResult() = default ;
    QueryDataTrackResultDownloadStatusResponseBodyStatusResult(const QueryDataTrackResultDownloadStatusResponseBodyStatusResult &) = default ;
    QueryDataTrackResultDownloadStatusResponseBodyStatusResult(QueryDataTrackResultDownloadStatusResponseBodyStatusResult &&) = default ;
    QueryDataTrackResultDownloadStatusResponseBodyStatusResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDataTrackResultDownloadStatusResponseBodyStatusResult() = default ;
    QueryDataTrackResultDownloadStatusResponseBodyStatusResult& operator=(const QueryDataTrackResultDownloadStatusResponseBodyStatusResult &) = default ;
    QueryDataTrackResultDownloadStatusResponseBodyStatusResult& operator=(QueryDataTrackResultDownloadStatusResponseBodyStatusResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->downloadStatus_ != nullptr
        && this->downloadUrl_ != nullptr && this->statusDesc_ != nullptr && this->totalCount_ != nullptr; };
    // downloadStatus Field Functions 
    bool hasDownloadStatus() const { return this->downloadStatus_ != nullptr;};
    void deleteDownloadStatus() { this->downloadStatus_ = nullptr;};
    inline string downloadStatus() const { DARABONBA_PTR_GET_DEFAULT(downloadStatus_, "") };
    inline QueryDataTrackResultDownloadStatusResponseBodyStatusResult& setDownloadStatus(string downloadStatus) { DARABONBA_PTR_SET_VALUE(downloadStatus_, downloadStatus) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline QueryDataTrackResultDownloadStatusResponseBodyStatusResult& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline QueryDataTrackResultDownloadStatusResponseBodyStatusResult& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline QueryDataTrackResultDownloadStatusResponseBodyStatusResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The status of the download task. Valid values:
    // 
    // *   **INIT**: The download task is being initialized.
    // *   **LISTING**: The download task is in a transient intermediate state during the initialization.
    // *   **DOWNLOADING**: The download task is being processed.
    // *   **DOWNLOAD_SUCCESS**: The download task was successfully processed.
    // *   **DOWNLOAD_FAIL**: The download task failed.
    std::shared_ptr<string> downloadStatus_ = nullptr;
    // The URL that is used to download data tracking logs. This parameter is returned only when the value of DownloadStatus is DOWNLOAD_SUCCESS.
    std::shared_ptr<string> downloadUrl_ = nullptr;
    // The description of the state.
    std::shared_ptr<string> statusDesc_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
