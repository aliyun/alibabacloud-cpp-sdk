// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCDSFILESHARELINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCDSFILESHARELINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyCdsFileShareLinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCdsFileShareLinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisableDownload, disableDownload_);
      DARABONBA_PTR_TO_JSON(DisablePreview, disablePreview_);
      DARABONBA_PTR_TO_JSON(DisableSave, disableSave_);
      DARABONBA_PTR_TO_JSON(DownloadCount, downloadCount_);
      DARABONBA_PTR_TO_JSON(DownloadLimit, downloadLimit_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(PreviewCount, previewCount_);
      DARABONBA_PTR_TO_JSON(PreviewLimit, previewLimit_);
      DARABONBA_PTR_TO_JSON(ReportCount, reportCount_);
      DARABONBA_PTR_TO_JSON(SaveCount, saveCount_);
      DARABONBA_PTR_TO_JSON(SaveLimit, saveLimit_);
      DARABONBA_PTR_TO_JSON(ShareId, shareId_);
      DARABONBA_PTR_TO_JSON(ShareName, shareName_);
      DARABONBA_PTR_TO_JSON(SharePwd, sharePwd_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VideoPreviewCount, videoPreviewCount_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCdsFileShareLinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisableDownload, disableDownload_);
      DARABONBA_PTR_FROM_JSON(DisablePreview, disablePreview_);
      DARABONBA_PTR_FROM_JSON(DisableSave, disableSave_);
      DARABONBA_PTR_FROM_JSON(DownloadCount, downloadCount_);
      DARABONBA_PTR_FROM_JSON(DownloadLimit, downloadLimit_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(PreviewCount, previewCount_);
      DARABONBA_PTR_FROM_JSON(PreviewLimit, previewLimit_);
      DARABONBA_PTR_FROM_JSON(ReportCount, reportCount_);
      DARABONBA_PTR_FROM_JSON(SaveCount, saveCount_);
      DARABONBA_PTR_FROM_JSON(SaveLimit, saveLimit_);
      DARABONBA_PTR_FROM_JSON(ShareId, shareId_);
      DARABONBA_PTR_FROM_JSON(ShareName, shareName_);
      DARABONBA_PTR_FROM_JSON(SharePwd, sharePwd_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VideoPreviewCount, videoPreviewCount_);
    };
    ModifyCdsFileShareLinkRequest() = default ;
    ModifyCdsFileShareLinkRequest(const ModifyCdsFileShareLinkRequest &) = default ;
    ModifyCdsFileShareLinkRequest(ModifyCdsFileShareLinkRequest &&) = default ;
    ModifyCdsFileShareLinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCdsFileShareLinkRequest() = default ;
    ModifyCdsFileShareLinkRequest& operator=(const ModifyCdsFileShareLinkRequest &) = default ;
    ModifyCdsFileShareLinkRequest& operator=(ModifyCdsFileShareLinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdsId_ == nullptr
        && this->description_ == nullptr && this->disableDownload_ == nullptr && this->disablePreview_ == nullptr && this->disableSave_ == nullptr && this->downloadCount_ == nullptr
        && this->downloadLimit_ == nullptr && this->expiration_ == nullptr && this->previewCount_ == nullptr && this->previewLimit_ == nullptr && this->reportCount_ == nullptr
        && this->saveCount_ == nullptr && this->saveLimit_ == nullptr && this->shareId_ == nullptr && this->shareName_ == nullptr && this->sharePwd_ == nullptr
        && this->status_ == nullptr && this->videoPreviewCount_ == nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string getCdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline ModifyCdsFileShareLinkRequest& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyCdsFileShareLinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableDownload Field Functions 
    bool hasDisableDownload() const { return this->disableDownload_ != nullptr;};
    void deleteDisableDownload() { this->disableDownload_ = nullptr;};
    inline bool getDisableDownload() const { DARABONBA_PTR_GET_DEFAULT(disableDownload_, false) };
    inline ModifyCdsFileShareLinkRequest& setDisableDownload(bool disableDownload) { DARABONBA_PTR_SET_VALUE(disableDownload_, disableDownload) };


    // disablePreview Field Functions 
    bool hasDisablePreview() const { return this->disablePreview_ != nullptr;};
    void deleteDisablePreview() { this->disablePreview_ = nullptr;};
    inline bool getDisablePreview() const { DARABONBA_PTR_GET_DEFAULT(disablePreview_, false) };
    inline ModifyCdsFileShareLinkRequest& setDisablePreview(bool disablePreview) { DARABONBA_PTR_SET_VALUE(disablePreview_, disablePreview) };


    // disableSave Field Functions 
    bool hasDisableSave() const { return this->disableSave_ != nullptr;};
    void deleteDisableSave() { this->disableSave_ = nullptr;};
    inline bool getDisableSave() const { DARABONBA_PTR_GET_DEFAULT(disableSave_, false) };
    inline ModifyCdsFileShareLinkRequest& setDisableSave(bool disableSave) { DARABONBA_PTR_SET_VALUE(disableSave_, disableSave) };


    // downloadCount Field Functions 
    bool hasDownloadCount() const { return this->downloadCount_ != nullptr;};
    void deleteDownloadCount() { this->downloadCount_ = nullptr;};
    inline int64_t getDownloadCount() const { DARABONBA_PTR_GET_DEFAULT(downloadCount_, 0L) };
    inline ModifyCdsFileShareLinkRequest& setDownloadCount(int64_t downloadCount) { DARABONBA_PTR_SET_VALUE(downloadCount_, downloadCount) };


    // downloadLimit Field Functions 
    bool hasDownloadLimit() const { return this->downloadLimit_ != nullptr;};
    void deleteDownloadLimit() { this->downloadLimit_ = nullptr;};
    inline int64_t getDownloadLimit() const { DARABONBA_PTR_GET_DEFAULT(downloadLimit_, 0L) };
    inline ModifyCdsFileShareLinkRequest& setDownloadLimit(int64_t downloadLimit) { DARABONBA_PTR_SET_VALUE(downloadLimit_, downloadLimit) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline string getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
    inline ModifyCdsFileShareLinkRequest& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // previewCount Field Functions 
    bool hasPreviewCount() const { return this->previewCount_ != nullptr;};
    void deletePreviewCount() { this->previewCount_ = nullptr;};
    inline int64_t getPreviewCount() const { DARABONBA_PTR_GET_DEFAULT(previewCount_, 0L) };
    inline ModifyCdsFileShareLinkRequest& setPreviewCount(int64_t previewCount) { DARABONBA_PTR_SET_VALUE(previewCount_, previewCount) };


    // previewLimit Field Functions 
    bool hasPreviewLimit() const { return this->previewLimit_ != nullptr;};
    void deletePreviewLimit() { this->previewLimit_ = nullptr;};
    inline int64_t getPreviewLimit() const { DARABONBA_PTR_GET_DEFAULT(previewLimit_, 0L) };
    inline ModifyCdsFileShareLinkRequest& setPreviewLimit(int64_t previewLimit) { DARABONBA_PTR_SET_VALUE(previewLimit_, previewLimit) };


    // reportCount Field Functions 
    bool hasReportCount() const { return this->reportCount_ != nullptr;};
    void deleteReportCount() { this->reportCount_ = nullptr;};
    inline int64_t getReportCount() const { DARABONBA_PTR_GET_DEFAULT(reportCount_, 0L) };
    inline ModifyCdsFileShareLinkRequest& setReportCount(int64_t reportCount) { DARABONBA_PTR_SET_VALUE(reportCount_, reportCount) };


    // saveCount Field Functions 
    bool hasSaveCount() const { return this->saveCount_ != nullptr;};
    void deleteSaveCount() { this->saveCount_ = nullptr;};
    inline int64_t getSaveCount() const { DARABONBA_PTR_GET_DEFAULT(saveCount_, 0L) };
    inline ModifyCdsFileShareLinkRequest& setSaveCount(int64_t saveCount) { DARABONBA_PTR_SET_VALUE(saveCount_, saveCount) };


    // saveLimit Field Functions 
    bool hasSaveLimit() const { return this->saveLimit_ != nullptr;};
    void deleteSaveLimit() { this->saveLimit_ = nullptr;};
    inline int64_t getSaveLimit() const { DARABONBA_PTR_GET_DEFAULT(saveLimit_, 0L) };
    inline ModifyCdsFileShareLinkRequest& setSaveLimit(int64_t saveLimit) { DARABONBA_PTR_SET_VALUE(saveLimit_, saveLimit) };


    // shareId Field Functions 
    bool hasShareId() const { return this->shareId_ != nullptr;};
    void deleteShareId() { this->shareId_ = nullptr;};
    inline string getShareId() const { DARABONBA_PTR_GET_DEFAULT(shareId_, "") };
    inline ModifyCdsFileShareLinkRequest& setShareId(string shareId) { DARABONBA_PTR_SET_VALUE(shareId_, shareId) };


    // shareName Field Functions 
    bool hasShareName() const { return this->shareName_ != nullptr;};
    void deleteShareName() { this->shareName_ = nullptr;};
    inline string getShareName() const { DARABONBA_PTR_GET_DEFAULT(shareName_, "") };
    inline ModifyCdsFileShareLinkRequest& setShareName(string shareName) { DARABONBA_PTR_SET_VALUE(shareName_, shareName) };


    // sharePwd Field Functions 
    bool hasSharePwd() const { return this->sharePwd_ != nullptr;};
    void deleteSharePwd() { this->sharePwd_ = nullptr;};
    inline string getSharePwd() const { DARABONBA_PTR_GET_DEFAULT(sharePwd_, "") };
    inline ModifyCdsFileShareLinkRequest& setSharePwd(string sharePwd) { DARABONBA_PTR_SET_VALUE(sharePwd_, sharePwd) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ModifyCdsFileShareLinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // videoPreviewCount Field Functions 
    bool hasVideoPreviewCount() const { return this->videoPreviewCount_ != nullptr;};
    void deleteVideoPreviewCount() { this->videoPreviewCount_ = nullptr;};
    inline int64_t getVideoPreviewCount() const { DARABONBA_PTR_GET_DEFAULT(videoPreviewCount_, 0L) };
    inline ModifyCdsFileShareLinkRequest& setVideoPreviewCount(int64_t videoPreviewCount) { DARABONBA_PTR_SET_VALUE(videoPreviewCount_, videoPreviewCount) };


  protected:
    // The ID of the cloud disk.
    // 
    // This parameter is required.
    shared_ptr<string> cdsId_ {};
    // The description of the file sharing task. The description must be 0 to 1,024 characters in length.
    shared_ptr<string> description_ {};
    // Specifies whether to prohibit the download of the files that are being shared.
    // 
    // Valid values:
    // 
    // *   false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    shared_ptr<bool> disableDownload_ {};
    // Specifies whether to prohibit the preview of the files that are being shared.
    // 
    // Valid values:
    // 
    // *   true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    shared_ptr<bool> disablePreview_ {};
    // Specifies whether to prohibit the dump of the files that are being shared.
    // 
    // Valid values:
    // 
    // *   false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    shared_ptr<bool> disableSave_ {};
    // The number of times that the shared files are downloaded. The value of this parameter must be equal to or greater than 0.
    shared_ptr<int64_t> downloadCount_ {};
    // The limit on the number of times that the shared files can be downloaded. The value of this parameter must be equal to or greater than 0. The value 0 specifies that no limit is imposed on the number of times that the shared files can be downloaded.
    shared_ptr<int64_t> downloadLimit_ {};
    // The time when the file sharing link expires. The value of this parameter follows the RFC 3339 standard. Example: "2020-06-28T11:33:00.000+08:00". If this parameter is set to "", the file sharing link never expires.
    shared_ptr<string> expiration_ {};
    // The number of times that the shared files are previewed. The value of this parameter must be equal to or greater than 0.
    shared_ptr<int64_t> previewCount_ {};
    // The limit on the number of times that the shared files can be previewed. The value of this parameter must be equal to or greater than 0. The value 0 specifies that no limit is imposed on the number of times that the shared files can be downloaded.
    shared_ptr<int64_t> previewLimit_ {};
    // The number of times that the shared files are reported. The value of this parameter must be equal to or greater than 0.
    shared_ptr<int64_t> reportCount_ {};
    // The number of times that the shared files are dumped. The value of this parameter must be equal to or greater than 0.
    shared_ptr<int64_t> saveCount_ {};
    // The limit on the number of times that the shared files can be dumped. The value of this parameter must be equal to or greater than 0. The value 0 specifies that no limit is imposed on the number of times that the shared files can be downloaded.
    shared_ptr<int64_t> saveLimit_ {};
    // The ID of the file sharing task.
    // 
    // This parameter is required.
    shared_ptr<string> shareId_ {};
    // The name of the file sharing task. If you do not configure this parameter, the sharing task name is the first ID that is returned in the file_id_list value.
    // 
    // >  The sharing task name must be 0 to 128 characters in length.
    shared_ptr<string> shareName_ {};
    // The length of the access code. Valid values: 6 to 8. Unit: bytes. If you leave this parameter empty or set it to null, no access code is required. If you use a token to share files, you do not need to configure this parameter. The access code can contain only visible ASCII characters.
    shared_ptr<string> sharePwd_ {};
    // The sharing status.
    // 
    // Valid values:
    // 
    // *   disabled: The sharing task is canceled.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   enabled: The sharing task is valid.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    shared_ptr<string> status_ {};
    // The number of times that the videos are previewed in the shared files. The value of this parameter must be equal to or greater than 0.
    shared_ptr<int64_t> videoPreviewCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
