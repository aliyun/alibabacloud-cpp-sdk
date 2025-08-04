// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CDSFILESHARELINKMODEL_HPP_
#define ALIBABACLOUD_MODELS_CDSFILESHARELINKMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CdsFileShareLinkModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CdsFileShareLinkModel& obj) { 
      DARABONBA_PTR_TO_JSON(AccessCount, accessCount_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisableDownload, disableDownload_);
      DARABONBA_PTR_TO_JSON(DisablePreview, disablePreview_);
      DARABONBA_PTR_TO_JSON(DisableSave, disableSave_);
      DARABONBA_PTR_TO_JSON(DownloadCount, downloadCount_);
      DARABONBA_PTR_TO_JSON(DownloadLimit, downloadLimit_);
      DARABONBA_PTR_TO_JSON(DriveId, driveId_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(FileIds, fileIds_);
      DARABONBA_PTR_TO_JSON(ModifiyTime, modifiyTime_);
      DARABONBA_PTR_TO_JSON(PreviewCount, previewCount_);
      DARABONBA_PTR_TO_JSON(PreviewLimit, previewLimit_);
      DARABONBA_PTR_TO_JSON(ReportCount, reportCount_);
      DARABONBA_PTR_TO_JSON(SaveCount, saveCount_);
      DARABONBA_PTR_TO_JSON(SaveLimit, saveLimit_);
      DARABONBA_PTR_TO_JSON(ShareId, shareId_);
      DARABONBA_PTR_TO_JSON(ShareLink, shareLink_);
      DARABONBA_PTR_TO_JSON(ShareName, shareName_);
      DARABONBA_PTR_TO_JSON(SharePwd, sharePwd_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VideoPreviewCount, videoPreviewCount_);
    };
    friend void from_json(const Darabonba::Json& j, CdsFileShareLinkModel& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessCount, accessCount_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisableDownload, disableDownload_);
      DARABONBA_PTR_FROM_JSON(DisablePreview, disablePreview_);
      DARABONBA_PTR_FROM_JSON(DisableSave, disableSave_);
      DARABONBA_PTR_FROM_JSON(DownloadCount, downloadCount_);
      DARABONBA_PTR_FROM_JSON(DownloadLimit, downloadLimit_);
      DARABONBA_PTR_FROM_JSON(DriveId, driveId_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(FileIds, fileIds_);
      DARABONBA_PTR_FROM_JSON(ModifiyTime, modifiyTime_);
      DARABONBA_PTR_FROM_JSON(PreviewCount, previewCount_);
      DARABONBA_PTR_FROM_JSON(PreviewLimit, previewLimit_);
      DARABONBA_PTR_FROM_JSON(ReportCount, reportCount_);
      DARABONBA_PTR_FROM_JSON(SaveCount, saveCount_);
      DARABONBA_PTR_FROM_JSON(SaveLimit, saveLimit_);
      DARABONBA_PTR_FROM_JSON(ShareId, shareId_);
      DARABONBA_PTR_FROM_JSON(ShareLink, shareLink_);
      DARABONBA_PTR_FROM_JSON(ShareName, shareName_);
      DARABONBA_PTR_FROM_JSON(SharePwd, sharePwd_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VideoPreviewCount, videoPreviewCount_);
    };
    CdsFileShareLinkModel() = default ;
    CdsFileShareLinkModel(const CdsFileShareLinkModel &) = default ;
    CdsFileShareLinkModel(CdsFileShareLinkModel &&) = default ;
    CdsFileShareLinkModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CdsFileShareLinkModel() = default ;
    CdsFileShareLinkModel& operator=(const CdsFileShareLinkModel &) = default ;
    CdsFileShareLinkModel& operator=(CdsFileShareLinkModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessCount_ != nullptr
        && this->createTime_ != nullptr && this->creator_ != nullptr && this->description_ != nullptr && this->disableDownload_ != nullptr && this->disablePreview_ != nullptr
        && this->disableSave_ != nullptr && this->downloadCount_ != nullptr && this->downloadLimit_ != nullptr && this->driveId_ != nullptr && this->expiration_ != nullptr
        && this->expired_ != nullptr && this->fileIds_ != nullptr && this->modifiyTime_ != nullptr && this->previewCount_ != nullptr && this->previewLimit_ != nullptr
        && this->reportCount_ != nullptr && this->saveCount_ != nullptr && this->saveLimit_ != nullptr && this->shareId_ != nullptr && this->shareLink_ != nullptr
        && this->shareName_ != nullptr && this->sharePwd_ != nullptr && this->status_ != nullptr && this->videoPreviewCount_ != nullptr; };
    // accessCount Field Functions 
    bool hasAccessCount() const { return this->accessCount_ != nullptr;};
    void deleteAccessCount() { this->accessCount_ = nullptr;};
    inline int64_t accessCount() const { DARABONBA_PTR_GET_DEFAULT(accessCount_, 0L) };
    inline CdsFileShareLinkModel& setAccessCount(int64_t accessCount) { DARABONBA_PTR_SET_VALUE(accessCount_, accessCount) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline CdsFileShareLinkModel& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline CdsFileShareLinkModel& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CdsFileShareLinkModel& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableDownload Field Functions 
    bool hasDisableDownload() const { return this->disableDownload_ != nullptr;};
    void deleteDisableDownload() { this->disableDownload_ = nullptr;};
    inline bool disableDownload() const { DARABONBA_PTR_GET_DEFAULT(disableDownload_, false) };
    inline CdsFileShareLinkModel& setDisableDownload(bool disableDownload) { DARABONBA_PTR_SET_VALUE(disableDownload_, disableDownload) };


    // disablePreview Field Functions 
    bool hasDisablePreview() const { return this->disablePreview_ != nullptr;};
    void deleteDisablePreview() { this->disablePreview_ = nullptr;};
    inline bool disablePreview() const { DARABONBA_PTR_GET_DEFAULT(disablePreview_, false) };
    inline CdsFileShareLinkModel& setDisablePreview(bool disablePreview) { DARABONBA_PTR_SET_VALUE(disablePreview_, disablePreview) };


    // disableSave Field Functions 
    bool hasDisableSave() const { return this->disableSave_ != nullptr;};
    void deleteDisableSave() { this->disableSave_ = nullptr;};
    inline bool disableSave() const { DARABONBA_PTR_GET_DEFAULT(disableSave_, false) };
    inline CdsFileShareLinkModel& setDisableSave(bool disableSave) { DARABONBA_PTR_SET_VALUE(disableSave_, disableSave) };


    // downloadCount Field Functions 
    bool hasDownloadCount() const { return this->downloadCount_ != nullptr;};
    void deleteDownloadCount() { this->downloadCount_ = nullptr;};
    inline int64_t downloadCount() const { DARABONBA_PTR_GET_DEFAULT(downloadCount_, 0L) };
    inline CdsFileShareLinkModel& setDownloadCount(int64_t downloadCount) { DARABONBA_PTR_SET_VALUE(downloadCount_, downloadCount) };


    // downloadLimit Field Functions 
    bool hasDownloadLimit() const { return this->downloadLimit_ != nullptr;};
    void deleteDownloadLimit() { this->downloadLimit_ = nullptr;};
    inline int64_t downloadLimit() const { DARABONBA_PTR_GET_DEFAULT(downloadLimit_, 0L) };
    inline CdsFileShareLinkModel& setDownloadLimit(int64_t downloadLimit) { DARABONBA_PTR_SET_VALUE(downloadLimit_, downloadLimit) };


    // driveId Field Functions 
    bool hasDriveId() const { return this->driveId_ != nullptr;};
    void deleteDriveId() { this->driveId_ = nullptr;};
    inline string driveId() const { DARABONBA_PTR_GET_DEFAULT(driveId_, "") };
    inline CdsFileShareLinkModel& setDriveId(string driveId) { DARABONBA_PTR_SET_VALUE(driveId_, driveId) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline string expiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
    inline CdsFileShareLinkModel& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline bool expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
    inline CdsFileShareLinkModel& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // fileIds Field Functions 
    bool hasFileIds() const { return this->fileIds_ != nullptr;};
    void deleteFileIds() { this->fileIds_ = nullptr;};
    inline string fileIds() const { DARABONBA_PTR_GET_DEFAULT(fileIds_, "") };
    inline CdsFileShareLinkModel& setFileIds(string fileIds) { DARABONBA_PTR_SET_VALUE(fileIds_, fileIds) };


    // modifiyTime Field Functions 
    bool hasModifiyTime() const { return this->modifiyTime_ != nullptr;};
    void deleteModifiyTime() { this->modifiyTime_ = nullptr;};
    inline string modifiyTime() const { DARABONBA_PTR_GET_DEFAULT(modifiyTime_, "") };
    inline CdsFileShareLinkModel& setModifiyTime(string modifiyTime) { DARABONBA_PTR_SET_VALUE(modifiyTime_, modifiyTime) };


    // previewCount Field Functions 
    bool hasPreviewCount() const { return this->previewCount_ != nullptr;};
    void deletePreviewCount() { this->previewCount_ = nullptr;};
    inline int64_t previewCount() const { DARABONBA_PTR_GET_DEFAULT(previewCount_, 0L) };
    inline CdsFileShareLinkModel& setPreviewCount(int64_t previewCount) { DARABONBA_PTR_SET_VALUE(previewCount_, previewCount) };


    // previewLimit Field Functions 
    bool hasPreviewLimit() const { return this->previewLimit_ != nullptr;};
    void deletePreviewLimit() { this->previewLimit_ = nullptr;};
    inline int64_t previewLimit() const { DARABONBA_PTR_GET_DEFAULT(previewLimit_, 0L) };
    inline CdsFileShareLinkModel& setPreviewLimit(int64_t previewLimit) { DARABONBA_PTR_SET_VALUE(previewLimit_, previewLimit) };


    // reportCount Field Functions 
    bool hasReportCount() const { return this->reportCount_ != nullptr;};
    void deleteReportCount() { this->reportCount_ = nullptr;};
    inline int64_t reportCount() const { DARABONBA_PTR_GET_DEFAULT(reportCount_, 0L) };
    inline CdsFileShareLinkModel& setReportCount(int64_t reportCount) { DARABONBA_PTR_SET_VALUE(reportCount_, reportCount) };


    // saveCount Field Functions 
    bool hasSaveCount() const { return this->saveCount_ != nullptr;};
    void deleteSaveCount() { this->saveCount_ = nullptr;};
    inline int64_t saveCount() const { DARABONBA_PTR_GET_DEFAULT(saveCount_, 0L) };
    inline CdsFileShareLinkModel& setSaveCount(int64_t saveCount) { DARABONBA_PTR_SET_VALUE(saveCount_, saveCount) };


    // saveLimit Field Functions 
    bool hasSaveLimit() const { return this->saveLimit_ != nullptr;};
    void deleteSaveLimit() { this->saveLimit_ = nullptr;};
    inline int64_t saveLimit() const { DARABONBA_PTR_GET_DEFAULT(saveLimit_, 0L) };
    inline CdsFileShareLinkModel& setSaveLimit(int64_t saveLimit) { DARABONBA_PTR_SET_VALUE(saveLimit_, saveLimit) };


    // shareId Field Functions 
    bool hasShareId() const { return this->shareId_ != nullptr;};
    void deleteShareId() { this->shareId_ = nullptr;};
    inline string shareId() const { DARABONBA_PTR_GET_DEFAULT(shareId_, "") };
    inline CdsFileShareLinkModel& setShareId(string shareId) { DARABONBA_PTR_SET_VALUE(shareId_, shareId) };


    // shareLink Field Functions 
    bool hasShareLink() const { return this->shareLink_ != nullptr;};
    void deleteShareLink() { this->shareLink_ = nullptr;};
    inline string shareLink() const { DARABONBA_PTR_GET_DEFAULT(shareLink_, "") };
    inline CdsFileShareLinkModel& setShareLink(string shareLink) { DARABONBA_PTR_SET_VALUE(shareLink_, shareLink) };


    // shareName Field Functions 
    bool hasShareName() const { return this->shareName_ != nullptr;};
    void deleteShareName() { this->shareName_ = nullptr;};
    inline string shareName() const { DARABONBA_PTR_GET_DEFAULT(shareName_, "") };
    inline CdsFileShareLinkModel& setShareName(string shareName) { DARABONBA_PTR_SET_VALUE(shareName_, shareName) };


    // sharePwd Field Functions 
    bool hasSharePwd() const { return this->sharePwd_ != nullptr;};
    void deleteSharePwd() { this->sharePwd_ = nullptr;};
    inline string sharePwd() const { DARABONBA_PTR_GET_DEFAULT(sharePwd_, "") };
    inline CdsFileShareLinkModel& setSharePwd(string sharePwd) { DARABONBA_PTR_SET_VALUE(sharePwd_, sharePwd) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CdsFileShareLinkModel& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // videoPreviewCount Field Functions 
    bool hasVideoPreviewCount() const { return this->videoPreviewCount_ != nullptr;};
    void deleteVideoPreviewCount() { this->videoPreviewCount_ = nullptr;};
    inline int64_t videoPreviewCount() const { DARABONBA_PTR_GET_DEFAULT(videoPreviewCount_, 0L) };
    inline CdsFileShareLinkModel& setVideoPreviewCount(int64_t videoPreviewCount) { DARABONBA_PTR_SET_VALUE(videoPreviewCount_, videoPreviewCount) };


  protected:
    std::shared_ptr<int64_t> accessCount_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> disableDownload_ = nullptr;
    std::shared_ptr<bool> disablePreview_ = nullptr;
    std::shared_ptr<bool> disableSave_ = nullptr;
    std::shared_ptr<int64_t> downloadCount_ = nullptr;
    std::shared_ptr<int64_t> downloadLimit_ = nullptr;
    std::shared_ptr<string> driveId_ = nullptr;
    std::shared_ptr<string> expiration_ = nullptr;
    std::shared_ptr<bool> expired_ = nullptr;
    std::shared_ptr<string> fileIds_ = nullptr;
    std::shared_ptr<string> modifiyTime_ = nullptr;
    std::shared_ptr<int64_t> previewCount_ = nullptr;
    std::shared_ptr<int64_t> previewLimit_ = nullptr;
    std::shared_ptr<int64_t> reportCount_ = nullptr;
    std::shared_ptr<int64_t> saveCount_ = nullptr;
    std::shared_ptr<int64_t> saveLimit_ = nullptr;
    std::shared_ptr<string> shareId_ = nullptr;
    std::shared_ptr<string> shareLink_ = nullptr;
    std::shared_ptr<string> shareName_ = nullptr;
    std::shared_ptr<string> sharePwd_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> videoPreviewCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
