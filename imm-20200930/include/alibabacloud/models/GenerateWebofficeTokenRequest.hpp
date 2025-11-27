// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEWEBOFFICETOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEWEBOFFICETOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CredentialConfig.hpp>
#include <alibabacloud/models/Notification.hpp>
#include <alibabacloud/models/WebofficePermission.hpp>
#include <alibabacloud/models/WebofficeUser.hpp>
#include <alibabacloud/models/WebofficeWatermark.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GenerateWebofficeTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateWebofficeTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CachePreview, cachePreview_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(ExternalUploaded, externalUploaded_);
      DARABONBA_PTR_TO_JSON(Filename, filename_);
      DARABONBA_PTR_TO_JSON(Hidecmb, hidecmb_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(NotifyTopicName, notifyTopicName_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Permission, permission_);
      DARABONBA_PTR_TO_JSON(PreviewPages, previewPages_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Referer, referer_);
      DARABONBA_PTR_TO_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_TO_JSON(User, user_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(Watermark, watermark_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateWebofficeTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CachePreview, cachePreview_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(ExternalUploaded, externalUploaded_);
      DARABONBA_PTR_FROM_JSON(Filename, filename_);
      DARABONBA_PTR_FROM_JSON(Hidecmb, hidecmb_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(NotifyTopicName, notifyTopicName_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Permission, permission_);
      DARABONBA_PTR_FROM_JSON(PreviewPages, previewPages_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Referer, referer_);
      DARABONBA_PTR_FROM_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_FROM_JSON(User, user_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(Watermark, watermark_);
    };
    GenerateWebofficeTokenRequest() = default ;
    GenerateWebofficeTokenRequest(const GenerateWebofficeTokenRequest &) = default ;
    GenerateWebofficeTokenRequest(GenerateWebofficeTokenRequest &&) = default ;
    GenerateWebofficeTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateWebofficeTokenRequest() = default ;
    GenerateWebofficeTokenRequest& operator=(const GenerateWebofficeTokenRequest &) = default ;
    GenerateWebofficeTokenRequest& operator=(GenerateWebofficeTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cachePreview_ == nullptr
        && return this->credentialConfig_ == nullptr && return this->externalUploaded_ == nullptr && return this->filename_ == nullptr && return this->hidecmb_ == nullptr && return this->notification_ == nullptr
        && return this->notifyTopicName_ == nullptr && return this->password_ == nullptr && return this->permission_ == nullptr && return this->previewPages_ == nullptr && return this->projectName_ == nullptr
        && return this->referer_ == nullptr && return this->sourceURI_ == nullptr && return this->user_ == nullptr && return this->userData_ == nullptr && return this->watermark_ == nullptr; };
    // cachePreview Field Functions 
    bool hasCachePreview() const { return this->cachePreview_ != nullptr;};
    void deleteCachePreview() { this->cachePreview_ = nullptr;};
    inline bool cachePreview() const { DARABONBA_PTR_GET_DEFAULT(cachePreview_, false) };
    inline GenerateWebofficeTokenRequest& setCachePreview(bool cachePreview) { DARABONBA_PTR_SET_VALUE(cachePreview_, cachePreview) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & credentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig credentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline GenerateWebofficeTokenRequest& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline GenerateWebofficeTokenRequest& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // externalUploaded Field Functions 
    bool hasExternalUploaded() const { return this->externalUploaded_ != nullptr;};
    void deleteExternalUploaded() { this->externalUploaded_ = nullptr;};
    inline bool externalUploaded() const { DARABONBA_PTR_GET_DEFAULT(externalUploaded_, false) };
    inline GenerateWebofficeTokenRequest& setExternalUploaded(bool externalUploaded) { DARABONBA_PTR_SET_VALUE(externalUploaded_, externalUploaded) };


    // filename Field Functions 
    bool hasFilename() const { return this->filename_ != nullptr;};
    void deleteFilename() { this->filename_ = nullptr;};
    inline string filename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
    inline GenerateWebofficeTokenRequest& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


    // hidecmb Field Functions 
    bool hasHidecmb() const { return this->hidecmb_ != nullptr;};
    void deleteHidecmb() { this->hidecmb_ = nullptr;};
    inline bool hidecmb() const { DARABONBA_PTR_GET_DEFAULT(hidecmb_, false) };
    inline GenerateWebofficeTokenRequest& setHidecmb(bool hidecmb) { DARABONBA_PTR_SET_VALUE(hidecmb_, hidecmb) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const Notification & notification() const { DARABONBA_PTR_GET_CONST(notification_, Notification) };
    inline Notification notification() { DARABONBA_PTR_GET(notification_, Notification) };
    inline GenerateWebofficeTokenRequest& setNotification(const Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline GenerateWebofficeTokenRequest& setNotification(Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // notifyTopicName Field Functions 
    bool hasNotifyTopicName() const { return this->notifyTopicName_ != nullptr;};
    void deleteNotifyTopicName() { this->notifyTopicName_ = nullptr;};
    inline string notifyTopicName() const { DARABONBA_PTR_GET_DEFAULT(notifyTopicName_, "") };
    inline GenerateWebofficeTokenRequest& setNotifyTopicName(string notifyTopicName) { DARABONBA_PTR_SET_VALUE(notifyTopicName_, notifyTopicName) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline GenerateWebofficeTokenRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline const WebofficePermission & permission() const { DARABONBA_PTR_GET_CONST(permission_, WebofficePermission) };
    inline WebofficePermission permission() { DARABONBA_PTR_GET(permission_, WebofficePermission) };
    inline GenerateWebofficeTokenRequest& setPermission(const WebofficePermission & permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };
    inline GenerateWebofficeTokenRequest& setPermission(WebofficePermission && permission) { DARABONBA_PTR_SET_RVALUE(permission_, permission) };


    // previewPages Field Functions 
    bool hasPreviewPages() const { return this->previewPages_ != nullptr;};
    void deletePreviewPages() { this->previewPages_ = nullptr;};
    inline int64_t previewPages() const { DARABONBA_PTR_GET_DEFAULT(previewPages_, 0L) };
    inline GenerateWebofficeTokenRequest& setPreviewPages(int64_t previewPages) { DARABONBA_PTR_SET_VALUE(previewPages_, previewPages) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GenerateWebofficeTokenRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // referer Field Functions 
    bool hasReferer() const { return this->referer_ != nullptr;};
    void deleteReferer() { this->referer_ = nullptr;};
    inline string referer() const { DARABONBA_PTR_GET_DEFAULT(referer_, "") };
    inline GenerateWebofficeTokenRequest& setReferer(string referer) { DARABONBA_PTR_SET_VALUE(referer_, referer) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string sourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline GenerateWebofficeTokenRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const WebofficeUser & user() const { DARABONBA_PTR_GET_CONST(user_, WebofficeUser) };
    inline WebofficeUser user() { DARABONBA_PTR_GET(user_, WebofficeUser) };
    inline GenerateWebofficeTokenRequest& setUser(const WebofficeUser & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline GenerateWebofficeTokenRequest& setUser(WebofficeUser && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GenerateWebofficeTokenRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // watermark Field Functions 
    bool hasWatermark() const { return this->watermark_ != nullptr;};
    void deleteWatermark() { this->watermark_ = nullptr;};
    inline const WebofficeWatermark & watermark() const { DARABONBA_PTR_GET_CONST(watermark_, WebofficeWatermark) };
    inline WebofficeWatermark watermark() { DARABONBA_PTR_GET(watermark_, WebofficeWatermark) };
    inline GenerateWebofficeTokenRequest& setWatermark(const WebofficeWatermark & watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };
    inline GenerateWebofficeTokenRequest& setWatermark(WebofficeWatermark && watermark) { DARABONBA_PTR_SET_RVALUE(watermark_, watermark) };


  protected:
    // Cache preview flag: 
    // - true: When enabled, the document preview will no longer update collaborative editing content, suitable for scenarios where only preview is needed. 
    // - false: When disabled, it defaults to collaborative preview, allowing the preview to synchronously update collaborative editing content.
    // >Notice: The price for cache preview and non-cache preview differs. Please refer to the billing item description for more details.</notice> >Notice: Search and print functions are not supported during cache preview.</notice> <notice>Updating cached content is currently not supported in cache preview mode.</notice>
    std::shared_ptr<bool> cachePreview_ = nullptr;
    // **If there are no special requirements, leave this blank.**
    // 
    // Chained authorization configuration, not required. For more information, see [Using Chained Authorization to Access Other Entity Resources](https://help.aliyun.com/document_detail/465340.html).
    std::shared_ptr<CredentialConfig> credentialConfig_ = nullptr;
    // Indicates whether uploading a file with the same name to OSS is an expected behavior. Possible values are as follows:
    // 
    // - true: Uploading a file with the same name to OSS is an expected behavior. The uploaded document will overwrite the original document and generate a new version. After setting it to true, you still need to close the currently editing document and wait for about 5 minutes before reopening it to load the new document. The upload is only effective when the document is closed; if the document is open, the new save will overwrite the uploaded file.
    // - false (default): Uploading a file with the same name to OSS is not an expected behavior, and the interface will return an error.
    std::shared_ptr<bool> externalUploaded_ = nullptr;
    // Filename, which must include the file extension. By default, it is the last segment of the **SourceURI** parameter.
    // Supported file extensions (PDF is only supported for preview):
    // - Text documents (Word): doc, docx, txt, dot, wps, wpt, dotx, docm, dotm, rtf 
    // - Presentation documents (PPT): ppt, pptx, pptm, ppsx, ppsm, pps, potx, potm, dpt, dps - Spreadsheet documents (Excel): et, xls, xlt, xlsx, xlsm, xltx, xltm, csv 
    // - PDF documents: pdf
    std::shared_ptr<string> filename_ = nullptr;
    // Whether to hide the toolbar. This parameter can be set in document preview mode. Possible values are as follows:
    // 
    // - false (default): Do not hide the toolbar.
    // - true: Hide the toolbar.
    std::shared_ptr<bool> hidecmb_ = nullptr;
    // Notification message configuration, currently supporting only MNS. For the asynchronous notification message format, refer to [WebOffice Message Notification Format](https://help.aliyun.com/document_detail/2743999.html).
    // 
    // > There will be message notifications when the file is saved or renamed.
    std::shared_ptr<Notification> notification_ = nullptr;
    // Supports notifying some events to customers via MNS messages. This parameter is the topic for MNS asynchronous message notifications.
    std::shared_ptr<string> notifyTopicName_ = nullptr;
    // The password to open the document.
    // > If you need to preview or edit a password-protected document, set this parameter.
    std::shared_ptr<string> password_ = nullptr;
    // User permission information, represented in JSON format.
    // 
    // User permissions include the following options:
    // 
    // Each option is of type Boolean, with a default value of false, and can be set to true or false.
    // 
    // - Readonly (optional): Preview mode.
    // - Rename (optional): File renaming permission, which only provides message notification functionality. The renaming event will be sent to MNS.
    // - History (optional): Permission to view historical versions.
    // - Copy (optional): Copy permission.
    // - Export (optional): PDF export permission.
    // - Print (optional): Print permission.
    // 
    // >PDF only supports preview functionality, so the "Readonly" parameter must be set to true.
    // >
    // >PDF files do not support exporting.
    // > 
    // >To use the multi-version feature, you must first enable the multi-version feature in OSS and then set the "History" parameter to true.
    // >
    // >Notice: Printing is not supported in cached preview.
    // >Notice: Historical versions can be viewed in edit mode but not in preview mode.
    std::shared_ptr<WebofficePermission> permission_ = nullptr;
    // Limits the number of pages that can be previewed. By default, there is no limit. The maximum cannot exceed 5000.
    std::shared_ptr<int64_t> previewPages_ = nullptr;
    // Project name, for how to obtain it, please refer to [Create Project](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // OSS anti-leeching. IMM needs to obtain the source file from OSS. If OSS has set up anti-leeching, IMM must pass the corresponding header to OSS to get the source file.
    // > If the Bucket where the document is located has Referer set, please configure this parameter.
    std::shared_ptr<string> referer_ = nullptr;
    // OSS address of the document to be previewed or edited. The OSS address follows the rule `oss://${Bucket}/${Object}`, where `Bucket` is the name of the OSS Bucket in the same region as the current project, and `Object` is the full path of the file including the file extension.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceURI_ = nullptr;
    // User information. You can pass in user information from the business side, which will be displayed on the WebOffice page.
    // 
    // The system distinguishes different users by User.Id, and User.Name is used only for front-end display. If User.Id is not provided, the backend will generate a random ID. Users with different IDs are considered different entities and cannot modify or delete each other\\"s comments.
    // 
    // The default format is: Unknown_random string. If User.Id is not provided, the user information will default to "Unknown".
    std::shared_ptr<WebofficeUser> user_ = nullptr;
    // User-defined information. It only takes effect when Notification parameters are filled in for MNS configuration. It will be returned in asynchronous message notifications, which can help you correlate and process messages within your system. The maximum length is 2048 bytes.
    std::shared_ptr<string> userData_ = nullptr;
    // Watermark information. The watermark is generated on the front end and is not written into the source document. The same document with different parameters will result in different watermarks.
    std::shared_ptr<WebofficeWatermark> watermark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
