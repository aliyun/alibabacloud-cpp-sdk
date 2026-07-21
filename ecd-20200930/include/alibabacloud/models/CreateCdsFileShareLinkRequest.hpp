// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECDSFILESHARELINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECDSFILESHARELINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateCdsFileShareLinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCdsFileShareLinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdsId, cdsId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisableDownload, disableDownload_);
      DARABONBA_PTR_TO_JSON(DisablePreview, disablePreview_);
      DARABONBA_PTR_TO_JSON(DisableSave, disableSave_);
      DARABONBA_PTR_TO_JSON(DownloadLimit, downloadLimit_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(Expiration, expiration_);
      DARABONBA_PTR_TO_JSON(FileIds, fileIds_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(PreviewLimit, previewLimit_);
      DARABONBA_PTR_TO_JSON(SaveLimit, saveLimit_);
      DARABONBA_PTR_TO_JSON(ShareName, shareName_);
      DARABONBA_PTR_TO_JSON(SharePwd, sharePwd_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCdsFileShareLinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdsId, cdsId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisableDownload, disableDownload_);
      DARABONBA_PTR_FROM_JSON(DisablePreview, disablePreview_);
      DARABONBA_PTR_FROM_JSON(DisableSave, disableSave_);
      DARABONBA_PTR_FROM_JSON(DownloadLimit, downloadLimit_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(Expiration, expiration_);
      DARABONBA_PTR_FROM_JSON(FileIds, fileIds_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(PreviewLimit, previewLimit_);
      DARABONBA_PTR_FROM_JSON(SaveLimit, saveLimit_);
      DARABONBA_PTR_FROM_JSON(ShareName, shareName_);
      DARABONBA_PTR_FROM_JSON(SharePwd, sharePwd_);
    };
    CreateCdsFileShareLinkRequest() = default ;
    CreateCdsFileShareLinkRequest(const CreateCdsFileShareLinkRequest &) = default ;
    CreateCdsFileShareLinkRequest(CreateCdsFileShareLinkRequest &&) = default ;
    CreateCdsFileShareLinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCdsFileShareLinkRequest() = default ;
    CreateCdsFileShareLinkRequest& operator=(const CreateCdsFileShareLinkRequest &) = default ;
    CreateCdsFileShareLinkRequest& operator=(CreateCdsFileShareLinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdsId_ == nullptr
        && this->description_ == nullptr && this->disableDownload_ == nullptr && this->disablePreview_ == nullptr && this->disableSave_ == nullptr && this->downloadLimit_ == nullptr
        && this->endUserId_ == nullptr && this->expiration_ == nullptr && this->fileIds_ == nullptr && this->groupId_ == nullptr && this->previewLimit_ == nullptr
        && this->saveLimit_ == nullptr && this->shareName_ == nullptr && this->sharePwd_ == nullptr; };
    // cdsId Field Functions 
    bool hasCdsId() const { return this->cdsId_ != nullptr;};
    void deleteCdsId() { this->cdsId_ = nullptr;};
    inline string getCdsId() const { DARABONBA_PTR_GET_DEFAULT(cdsId_, "") };
    inline CreateCdsFileShareLinkRequest& setCdsId(string cdsId) { DARABONBA_PTR_SET_VALUE(cdsId_, cdsId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCdsFileShareLinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableDownload Field Functions 
    bool hasDisableDownload() const { return this->disableDownload_ != nullptr;};
    void deleteDisableDownload() { this->disableDownload_ = nullptr;};
    inline bool getDisableDownload() const { DARABONBA_PTR_GET_DEFAULT(disableDownload_, false) };
    inline CreateCdsFileShareLinkRequest& setDisableDownload(bool disableDownload) { DARABONBA_PTR_SET_VALUE(disableDownload_, disableDownload) };


    // disablePreview Field Functions 
    bool hasDisablePreview() const { return this->disablePreview_ != nullptr;};
    void deleteDisablePreview() { this->disablePreview_ = nullptr;};
    inline bool getDisablePreview() const { DARABONBA_PTR_GET_DEFAULT(disablePreview_, false) };
    inline CreateCdsFileShareLinkRequest& setDisablePreview(bool disablePreview) { DARABONBA_PTR_SET_VALUE(disablePreview_, disablePreview) };


    // disableSave Field Functions 
    bool hasDisableSave() const { return this->disableSave_ != nullptr;};
    void deleteDisableSave() { this->disableSave_ = nullptr;};
    inline bool getDisableSave() const { DARABONBA_PTR_GET_DEFAULT(disableSave_, false) };
    inline CreateCdsFileShareLinkRequest& setDisableSave(bool disableSave) { DARABONBA_PTR_SET_VALUE(disableSave_, disableSave) };


    // downloadLimit Field Functions 
    bool hasDownloadLimit() const { return this->downloadLimit_ != nullptr;};
    void deleteDownloadLimit() { this->downloadLimit_ = nullptr;};
    inline int64_t getDownloadLimit() const { DARABONBA_PTR_GET_DEFAULT(downloadLimit_, 0L) };
    inline CreateCdsFileShareLinkRequest& setDownloadLimit(int64_t downloadLimit) { DARABONBA_PTR_SET_VALUE(downloadLimit_, downloadLimit) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline CreateCdsFileShareLinkRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // expiration Field Functions 
    bool hasExpiration() const { return this->expiration_ != nullptr;};
    void deleteExpiration() { this->expiration_ = nullptr;};
    inline string getExpiration() const { DARABONBA_PTR_GET_DEFAULT(expiration_, "") };
    inline CreateCdsFileShareLinkRequest& setExpiration(string expiration) { DARABONBA_PTR_SET_VALUE(expiration_, expiration) };


    // fileIds Field Functions 
    bool hasFileIds() const { return this->fileIds_ != nullptr;};
    void deleteFileIds() { this->fileIds_ = nullptr;};
    inline const vector<string> & getFileIds() const { DARABONBA_PTR_GET_CONST(fileIds_, vector<string>) };
    inline vector<string> getFileIds() { DARABONBA_PTR_GET(fileIds_, vector<string>) };
    inline CreateCdsFileShareLinkRequest& setFileIds(const vector<string> & fileIds) { DARABONBA_PTR_SET_VALUE(fileIds_, fileIds) };
    inline CreateCdsFileShareLinkRequest& setFileIds(vector<string> && fileIds) { DARABONBA_PTR_SET_RVALUE(fileIds_, fileIds) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CreateCdsFileShareLinkRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // previewLimit Field Functions 
    bool hasPreviewLimit() const { return this->previewLimit_ != nullptr;};
    void deletePreviewLimit() { this->previewLimit_ = nullptr;};
    inline int64_t getPreviewLimit() const { DARABONBA_PTR_GET_DEFAULT(previewLimit_, 0L) };
    inline CreateCdsFileShareLinkRequest& setPreviewLimit(int64_t previewLimit) { DARABONBA_PTR_SET_VALUE(previewLimit_, previewLimit) };


    // saveLimit Field Functions 
    bool hasSaveLimit() const { return this->saveLimit_ != nullptr;};
    void deleteSaveLimit() { this->saveLimit_ = nullptr;};
    inline int64_t getSaveLimit() const { DARABONBA_PTR_GET_DEFAULT(saveLimit_, 0L) };
    inline CreateCdsFileShareLinkRequest& setSaveLimit(int64_t saveLimit) { DARABONBA_PTR_SET_VALUE(saveLimit_, saveLimit) };


    // shareName Field Functions 
    bool hasShareName() const { return this->shareName_ != nullptr;};
    void deleteShareName() { this->shareName_ = nullptr;};
    inline string getShareName() const { DARABONBA_PTR_GET_DEFAULT(shareName_, "") };
    inline CreateCdsFileShareLinkRequest& setShareName(string shareName) { DARABONBA_PTR_SET_VALUE(shareName_, shareName) };


    // sharePwd Field Functions 
    bool hasSharePwd() const { return this->sharePwd_ != nullptr;};
    void deleteSharePwd() { this->sharePwd_ = nullptr;};
    inline string getSharePwd() const { DARABONBA_PTR_GET_DEFAULT(sharePwd_, "") };
    inline CreateCdsFileShareLinkRequest& setSharePwd(string sharePwd) { DARABONBA_PTR_SET_VALUE(sharePwd_, sharePwd) };


  protected:
    // The enterprise cloud disk ID.
    // 
    // This parameter is required.
    shared_ptr<string> cdsId_ {};
    // The share description. Length range: 0 to 1024 characters.
    shared_ptr<string> description_ {};
    // Specifies whether to disable downloading of files in the share. Valid values:
    // 
    // - true: Downloading is disabled.
    // - false: Downloading is enabled.
    shared_ptr<bool> disableDownload_ {};
    // Specifies whether to disable previewing of files in the share. Valid values:
    // 
    // - true: Preview is disabled.
    // - false: Preview is enabled.
    shared_ptr<bool> disablePreview_ {};
    // Specifies whether to disable saving of files in the share. Valid values:
    // 
    // - true: Saving is disabled.
    // - false: Saving is enabled.
    shared_ptr<bool> disableSave_ {};
    // The maximum number of times the shared files can be downloaded. The value is an integer. A value of 0 indicates no limit.
    shared_ptr<int64_t> downloadLimit_ {};
    // The ID of the user who uses the cloud disk.
    shared_ptr<string> endUserId_ {};
    // The expiration time in RFC 3339 format. If this parameter is left empty, the share is permanently valid.
    shared_ptr<string> expiration_ {};
    // The list of file IDs.
    shared_ptr<vector<string>> fileIds_ {};
    // The team space ID.
    shared_ptr<string> groupId_ {};
    // The maximum number of times the shared files can be previewed. The value is an integer. A value of 0 indicates no limit.
    shared_ptr<int64_t> previewLimit_ {};
    // The maximum number of times the shared files can be saved. The value is an integer. A value of 0 indicates no limit.
    shared_ptr<int64_t> saveLimit_ {};
    // The share name. If this parameter is not set, the file name corresponding to the first ID in `file_id_list` is used by default. Length range: 0 to 128 characters.
    shared_ptr<string> shareName_ {};
    // The extraction code. Length range: 0 to 64 bytes. If this parameter is not set or is set to empty, no extraction code is required, and you do not need to specify the extraction code parameter when obtaining the share token. Only printable ASCII characters are allowed.
    shared_ptr<string> sharePwd_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
