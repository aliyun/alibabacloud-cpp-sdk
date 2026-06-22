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
        && this->credentialConfig_ == nullptr && this->externalUploaded_ == nullptr && this->filename_ == nullptr && this->hidecmb_ == nullptr && this->notification_ == nullptr
        && this->notifyTopicName_ == nullptr && this->password_ == nullptr && this->permission_ == nullptr && this->previewPages_ == nullptr && this->projectName_ == nullptr
        && this->referer_ == nullptr && this->sourceURI_ == nullptr && this->user_ == nullptr && this->userData_ == nullptr && this->watermark_ == nullptr; };
    // cachePreview Field Functions 
    bool hasCachePreview() const { return this->cachePreview_ != nullptr;};
    void deleteCachePreview() { this->cachePreview_ = nullptr;};
    inline bool getCachePreview() const { DARABONBA_PTR_GET_DEFAULT(cachePreview_, false) };
    inline GenerateWebofficeTokenRequest& setCachePreview(bool cachePreview) { DARABONBA_PTR_SET_VALUE(cachePreview_, cachePreview) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & getCredentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig getCredentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline GenerateWebofficeTokenRequest& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline GenerateWebofficeTokenRequest& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // externalUploaded Field Functions 
    bool hasExternalUploaded() const { return this->externalUploaded_ != nullptr;};
    void deleteExternalUploaded() { this->externalUploaded_ = nullptr;};
    inline bool getExternalUploaded() const { DARABONBA_PTR_GET_DEFAULT(externalUploaded_, false) };
    inline GenerateWebofficeTokenRequest& setExternalUploaded(bool externalUploaded) { DARABONBA_PTR_SET_VALUE(externalUploaded_, externalUploaded) };


    // filename Field Functions 
    bool hasFilename() const { return this->filename_ != nullptr;};
    void deleteFilename() { this->filename_ = nullptr;};
    inline string getFilename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
    inline GenerateWebofficeTokenRequest& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


    // hidecmb Field Functions 
    bool hasHidecmb() const { return this->hidecmb_ != nullptr;};
    void deleteHidecmb() { this->hidecmb_ = nullptr;};
    inline bool getHidecmb() const { DARABONBA_PTR_GET_DEFAULT(hidecmb_, false) };
    inline GenerateWebofficeTokenRequest& setHidecmb(bool hidecmb) { DARABONBA_PTR_SET_VALUE(hidecmb_, hidecmb) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const Notification & getNotification() const { DARABONBA_PTR_GET_CONST(notification_, Notification) };
    inline Notification getNotification() { DARABONBA_PTR_GET(notification_, Notification) };
    inline GenerateWebofficeTokenRequest& setNotification(const Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline GenerateWebofficeTokenRequest& setNotification(Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // notifyTopicName Field Functions 
    bool hasNotifyTopicName() const { return this->notifyTopicName_ != nullptr;};
    void deleteNotifyTopicName() { this->notifyTopicName_ = nullptr;};
    inline string getNotifyTopicName() const { DARABONBA_PTR_GET_DEFAULT(notifyTopicName_, "") };
    inline GenerateWebofficeTokenRequest& setNotifyTopicName(string notifyTopicName) { DARABONBA_PTR_SET_VALUE(notifyTopicName_, notifyTopicName) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline GenerateWebofficeTokenRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline const WebofficePermission & getPermission() const { DARABONBA_PTR_GET_CONST(permission_, WebofficePermission) };
    inline WebofficePermission getPermission() { DARABONBA_PTR_GET(permission_, WebofficePermission) };
    inline GenerateWebofficeTokenRequest& setPermission(const WebofficePermission & permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };
    inline GenerateWebofficeTokenRequest& setPermission(WebofficePermission && permission) { DARABONBA_PTR_SET_RVALUE(permission_, permission) };


    // previewPages Field Functions 
    bool hasPreviewPages() const { return this->previewPages_ != nullptr;};
    void deletePreviewPages() { this->previewPages_ = nullptr;};
    inline int64_t getPreviewPages() const { DARABONBA_PTR_GET_DEFAULT(previewPages_, 0L) };
    inline GenerateWebofficeTokenRequest& setPreviewPages(int64_t previewPages) { DARABONBA_PTR_SET_VALUE(previewPages_, previewPages) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GenerateWebofficeTokenRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // referer Field Functions 
    bool hasReferer() const { return this->referer_ != nullptr;};
    void deleteReferer() { this->referer_ = nullptr;};
    inline string getReferer() const { DARABONBA_PTR_GET_DEFAULT(referer_, "") };
    inline GenerateWebofficeTokenRequest& setReferer(string referer) { DARABONBA_PTR_SET_VALUE(referer_, referer) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string getSourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline GenerateWebofficeTokenRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const WebofficeUser & getUser() const { DARABONBA_PTR_GET_CONST(user_, WebofficeUser) };
    inline WebofficeUser getUser() { DARABONBA_PTR_GET(user_, WebofficeUser) };
    inline GenerateWebofficeTokenRequest& setUser(const WebofficeUser & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline GenerateWebofficeTokenRequest& setUser(WebofficeUser && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GenerateWebofficeTokenRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // watermark Field Functions 
    bool hasWatermark() const { return this->watermark_ != nullptr;};
    void deleteWatermark() { this->watermark_ = nullptr;};
    inline const WebofficeWatermark & getWatermark() const { DARABONBA_PTR_GET_CONST(watermark_, WebofficeWatermark) };
    inline WebofficeWatermark getWatermark() { DARABONBA_PTR_GET(watermark_, WebofficeWatermark) };
    inline GenerateWebofficeTokenRequest& setWatermark(const WebofficeWatermark & watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };
    inline GenerateWebofficeTokenRequest& setWatermark(WebofficeWatermark && watermark) { DARABONBA_PTR_SET_RVALUE(watermark_, watermark) };


  protected:
    // Specifies whether to enable cached preview.
    // 
    // -  true: When enabled, the document preview no longer updates collaborative editing content. This is suitable for preview-only scenarios.
    // -  false: When disabled, collaborative preview is used by default, which synchronizes collaborative editing content during preview.
    // 
    // >Notice: Cached preview and non-cached preview have different unit prices. For more information, see the billing item description.
    // </notice>>Notice: Cached preview does not support document content search or printing.</notice>
    // <notice>Cached preview does not support updating cached content.</notice>.
    shared_ptr<bool> cachePreview_ {};
    // **Leave this parameter empty unless you have specific requirements.**
    // 
    // The China authorization configuration. This parameter is optional. For more information, see [Use chained authorization to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    shared_ptr<CredentialConfig> credentialConfig_ {};
    // Specifies whether uploading a file with the same name to OSS is expected behavior. Valid values:
    // 
    // - true: Uploading a file with the same name to OSS is expected behavior. The uploaded document overwrites the original document and generates a new version. After this parameter is set to true, you must first close the document that is being edited, wait about 5 minutes, and then reopen it to load the new document. The upload takes effect only when the document is closed. If the document is open, new saves overwrite the uploaded file.
    // - false (default): Uploading a file with the same name to OSS is not expected behavior. The operation returns an error.
    shared_ptr<bool> externalUploaded_ {};
    // The file name, which must include the file name extension. The default value is the last segment of the **SourceURI** parameter.
    // 
    // Supported file name extensions (PDF supports preview only):
    // 
    // - Word documents: doc, docx, txt, dot, wps, wpt, dotx, docm, dotm, and rtf
    // - PowerPoint documents: ppt, pptx, pptm, ppsx, ppsm, pps, potx, potm, dpt, and dps
    // - Excel documents: et, xls, xlt, xlsx, xlsm, xltx, xltm, and csv
    // - PDF documents: pdf.
    shared_ptr<string> filename_ {};
    // Specifies whether to hide the toolbar. This parameter is supported in document preview mode. Valid values:
    // 
    // - false (default): The toolbar is not hidden.
    // 
    // - true: The toolbar is hidden.
    shared_ptr<bool> hidecmb_ {};
    // The notification configuration. Currently, only MNS is supported. For the format of asynchronous notification messages, see [WebOffice message notification format](https://help.aliyun.com/document_detail/2743999.html).
    // 
    // > Message notifications are sent when a file is saved or renamed.
    shared_ptr<Notification> notification_ {};
    // Sends event notifications to you as MNS messages. This parameter specifies the MNS topic for asynchronous message notifications.
    shared_ptr<string> notifyTopicName_ {};
    // The password to open the document.
    // > Set this parameter if you want to preview or edit a password-protected document.
    shared_ptr<string> password_ {};
    // The user permission information in JSON format.
    // 
    // User permissions include the following options:
    // 
    // Each option is of the Boolean type. The default value is false. Valid values: true and false.
    // 
    // - Readonly (optional): Preview mode.
    // 
    // - Rename (optional): The permission to rename a file. Only message notification is provided. The rename event is sent to MNS.
    // 
    // - History (optional): The permission to view historical versions.
    // 
    // - Copy (optional): The copy permission.
    // 
    // - Export (optional): The permission to export to PDF.
    // 
    // - Print (optional): The print permission.
    // 
    // 
    // > PDF supports only the preview feature. You must set the Readonly parameter to true.
    // >
    // 
    // > PDF files do not support export.
    // > 
    // 
    // > To use the versioning feature, you must first enable versioning in OSS and then set the History parameter to true.
    // >
    // >Notice: Printing is not supported in cached preview.
    // >Notice: Historical versions can be viewed in edit mode but not in preview mode..
    shared_ptr<WebofficePermission> permission_ {};
    // The maximum number of pages that can be previewed. By default, no limit is imposed. The maximum value is 5,000.
    shared_ptr<int64_t> previewPages_ {};
    // The project name. For information about how to obtain the project name, see [Create a project](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The OSS hotlink protection referer. Intelligent Media Management (IMM) needs to retrieve the source file from OSS. If hotlink protection is configured for OSS, IMM must pass the corresponding header to OSS to retrieve the source file.
    // > Set this parameter if the bucket that stores the document has a referer configured.
    shared_ptr<string> referer_ {};
    // The OSS URI of the document to preview or edit.
    // 
    // The OSS URI follows the format `oss://${Bucket}/${Object}`, where `Bucket` is the name of an OSS bucket in the same region as the current project, and `Object` is the full path of the file including the file name extension.
    // 
    // This parameter is required.
    shared_ptr<string> sourceURI_ {};
    // The user information. You can pass in user information from the business side, and the WebOffice page displays this information.
    // 
    // The system distinguishes different users by User.Id. User.Name is used only for frontend display. If User.Id is not specified, the backend automatically generates a random ID. Users with different IDs are treated as different principals and cannot modify or delete each other\\"s comments.
    // 
    // The default format is: Unknown_RandomString. If User.Id is not specified, the user information is displayed as "Unknown" by default.
    shared_ptr<WebofficeUser> user_ {};
    // The custom user data. This parameter takes effect only when the Notification parameter is specified with MNS configurations. The data is returned in asynchronous message notifications for you to associate and process message notifications within your system. Maximum length: 2,048 bytes.
    shared_ptr<string> userData_ {};
    // The watermark information. The watermark is generated on the frontend and is not written to the source document. Different parameters passed for the same document produce different watermarks.
    shared_ptr<WebofficeWatermark> watermark_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
