// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEWEBOFFICETOKENSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEWEBOFFICETOKENSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GenerateWebofficeTokenShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateWebofficeTokenShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CachePreview, cachePreview_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_TO_JSON(ExternalUploaded, externalUploaded_);
      DARABONBA_PTR_TO_JSON(Filename, filename_);
      DARABONBA_PTR_TO_JSON(Hidecmb, hidecmb_);
      DARABONBA_PTR_TO_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_TO_JSON(NotifyTopicName, notifyTopicName_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Permission, permissionShrink_);
      DARABONBA_PTR_TO_JSON(PreviewPages, previewPages_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Referer, referer_);
      DARABONBA_PTR_TO_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_TO_JSON(User, userShrink_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(Watermark, watermarkShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateWebofficeTokenShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CachePreview, cachePreview_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ExternalUploaded, externalUploaded_);
      DARABONBA_PTR_FROM_JSON(Filename, filename_);
      DARABONBA_PTR_FROM_JSON(Hidecmb, hidecmb_);
      DARABONBA_PTR_FROM_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_FROM_JSON(NotifyTopicName, notifyTopicName_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Permission, permissionShrink_);
      DARABONBA_PTR_FROM_JSON(PreviewPages, previewPages_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Referer, referer_);
      DARABONBA_PTR_FROM_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_FROM_JSON(User, userShrink_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(Watermark, watermarkShrink_);
    };
    GenerateWebofficeTokenShrinkRequest() = default ;
    GenerateWebofficeTokenShrinkRequest(const GenerateWebofficeTokenShrinkRequest &) = default ;
    GenerateWebofficeTokenShrinkRequest(GenerateWebofficeTokenShrinkRequest &&) = default ;
    GenerateWebofficeTokenShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateWebofficeTokenShrinkRequest() = default ;
    GenerateWebofficeTokenShrinkRequest& operator=(const GenerateWebofficeTokenShrinkRequest &) = default ;
    GenerateWebofficeTokenShrinkRequest& operator=(GenerateWebofficeTokenShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cachePreview_ == nullptr
        && this->credentialConfigShrink_ == nullptr && this->externalUploaded_ == nullptr && this->filename_ == nullptr && this->hidecmb_ == nullptr && this->notificationShrink_ == nullptr
        && this->notifyTopicName_ == nullptr && this->password_ == nullptr && this->permissionShrink_ == nullptr && this->previewPages_ == nullptr && this->projectName_ == nullptr
        && this->referer_ == nullptr && this->sourceURI_ == nullptr && this->userShrink_ == nullptr && this->userData_ == nullptr && this->watermarkShrink_ == nullptr; };
    // cachePreview Field Functions 
    bool hasCachePreview() const { return this->cachePreview_ != nullptr;};
    void deleteCachePreview() { this->cachePreview_ = nullptr;};
    inline bool getCachePreview() const { DARABONBA_PTR_GET_DEFAULT(cachePreview_, false) };
    inline GenerateWebofficeTokenShrinkRequest& setCachePreview(bool cachePreview) { DARABONBA_PTR_SET_VALUE(cachePreview_, cachePreview) };


    // credentialConfigShrink Field Functions 
    bool hasCredentialConfigShrink() const { return this->credentialConfigShrink_ != nullptr;};
    void deleteCredentialConfigShrink() { this->credentialConfigShrink_ = nullptr;};
    inline string getCredentialConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(credentialConfigShrink_, "") };
    inline GenerateWebofficeTokenShrinkRequest& setCredentialConfigShrink(string credentialConfigShrink) { DARABONBA_PTR_SET_VALUE(credentialConfigShrink_, credentialConfigShrink) };


    // externalUploaded Field Functions 
    bool hasExternalUploaded() const { return this->externalUploaded_ != nullptr;};
    void deleteExternalUploaded() { this->externalUploaded_ = nullptr;};
    inline bool getExternalUploaded() const { DARABONBA_PTR_GET_DEFAULT(externalUploaded_, false) };
    inline GenerateWebofficeTokenShrinkRequest& setExternalUploaded(bool externalUploaded) { DARABONBA_PTR_SET_VALUE(externalUploaded_, externalUploaded) };


    // filename Field Functions 
    bool hasFilename() const { return this->filename_ != nullptr;};
    void deleteFilename() { this->filename_ = nullptr;};
    inline string getFilename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
    inline GenerateWebofficeTokenShrinkRequest& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


    // hidecmb Field Functions 
    bool hasHidecmb() const { return this->hidecmb_ != nullptr;};
    void deleteHidecmb() { this->hidecmb_ = nullptr;};
    inline bool getHidecmb() const { DARABONBA_PTR_GET_DEFAULT(hidecmb_, false) };
    inline GenerateWebofficeTokenShrinkRequest& setHidecmb(bool hidecmb) { DARABONBA_PTR_SET_VALUE(hidecmb_, hidecmb) };


    // notificationShrink Field Functions 
    bool hasNotificationShrink() const { return this->notificationShrink_ != nullptr;};
    void deleteNotificationShrink() { this->notificationShrink_ = nullptr;};
    inline string getNotificationShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationShrink_, "") };
    inline GenerateWebofficeTokenShrinkRequest& setNotificationShrink(string notificationShrink) { DARABONBA_PTR_SET_VALUE(notificationShrink_, notificationShrink) };


    // notifyTopicName Field Functions 
    bool hasNotifyTopicName() const { return this->notifyTopicName_ != nullptr;};
    void deleteNotifyTopicName() { this->notifyTopicName_ = nullptr;};
    inline string getNotifyTopicName() const { DARABONBA_PTR_GET_DEFAULT(notifyTopicName_, "") };
    inline GenerateWebofficeTokenShrinkRequest& setNotifyTopicName(string notifyTopicName) { DARABONBA_PTR_SET_VALUE(notifyTopicName_, notifyTopicName) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline GenerateWebofficeTokenShrinkRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // permissionShrink Field Functions 
    bool hasPermissionShrink() const { return this->permissionShrink_ != nullptr;};
    void deletePermissionShrink() { this->permissionShrink_ = nullptr;};
    inline string getPermissionShrink() const { DARABONBA_PTR_GET_DEFAULT(permissionShrink_, "") };
    inline GenerateWebofficeTokenShrinkRequest& setPermissionShrink(string permissionShrink) { DARABONBA_PTR_SET_VALUE(permissionShrink_, permissionShrink) };


    // previewPages Field Functions 
    bool hasPreviewPages() const { return this->previewPages_ != nullptr;};
    void deletePreviewPages() { this->previewPages_ = nullptr;};
    inline int64_t getPreviewPages() const { DARABONBA_PTR_GET_DEFAULT(previewPages_, 0L) };
    inline GenerateWebofficeTokenShrinkRequest& setPreviewPages(int64_t previewPages) { DARABONBA_PTR_SET_VALUE(previewPages_, previewPages) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GenerateWebofficeTokenShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // referer Field Functions 
    bool hasReferer() const { return this->referer_ != nullptr;};
    void deleteReferer() { this->referer_ = nullptr;};
    inline string getReferer() const { DARABONBA_PTR_GET_DEFAULT(referer_, "") };
    inline GenerateWebofficeTokenShrinkRequest& setReferer(string referer) { DARABONBA_PTR_SET_VALUE(referer_, referer) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string getSourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline GenerateWebofficeTokenShrinkRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


    // userShrink Field Functions 
    bool hasUserShrink() const { return this->userShrink_ != nullptr;};
    void deleteUserShrink() { this->userShrink_ = nullptr;};
    inline string getUserShrink() const { DARABONBA_PTR_GET_DEFAULT(userShrink_, "") };
    inline GenerateWebofficeTokenShrinkRequest& setUserShrink(string userShrink) { DARABONBA_PTR_SET_VALUE(userShrink_, userShrink) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GenerateWebofficeTokenShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // watermarkShrink Field Functions 
    bool hasWatermarkShrink() const { return this->watermarkShrink_ != nullptr;};
    void deleteWatermarkShrink() { this->watermarkShrink_ = nullptr;};
    inline string getWatermarkShrink() const { DARABONBA_PTR_GET_DEFAULT(watermarkShrink_, "") };
    inline GenerateWebofficeTokenShrinkRequest& setWatermarkShrink(string watermarkShrink) { DARABONBA_PTR_SET_VALUE(watermarkShrink_, watermarkShrink) };


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
    shared_ptr<string> credentialConfigShrink_ {};
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
    shared_ptr<string> notificationShrink_ {};
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
    shared_ptr<string> permissionShrink_ {};
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
    shared_ptr<string> userShrink_ {};
    // The custom user data. This parameter takes effect only when the Notification parameter is specified with MNS configurations. The data is returned in asynchronous message notifications for you to associate and process message notifications within your system. Maximum length: 2,048 bytes.
    shared_ptr<string> userData_ {};
    // The watermark information. The watermark is generated on the frontend and is not written to the source document. Different parameters passed for the same document produce different watermarks.
    shared_ptr<string> watermarkShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
