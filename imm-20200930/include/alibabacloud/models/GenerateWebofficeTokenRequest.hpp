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
    virtual bool empty() const override { this->cachePreview_ != nullptr
        && this->credentialConfig_ != nullptr && this->externalUploaded_ != nullptr && this->filename_ != nullptr && this->hidecmb_ != nullptr && this->notification_ != nullptr
        && this->notifyTopicName_ != nullptr && this->password_ != nullptr && this->permission_ != nullptr && this->previewPages_ != nullptr && this->projectName_ != nullptr
        && this->referer_ != nullptr && this->sourceURI_ != nullptr && this->user_ != nullptr && this->userData_ != nullptr && this->watermark_ != nullptr; };
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
    // Specifies whether to enable cache preview.
    // 
    // *   true: enables cache preview. The document can be previewed only and cannot be collaboratively edited.
    // *   false: does not enable cache preview. The document can be collaboratively edited when it is being previewed.
    // 
    // >  The pricing for document previews varies based on whether cache preview is enabled or disabled.
    // 
    // >  During a cache preview, document content search and printing are not supported.
    std::shared_ptr<bool> cachePreview_ = nullptr;
    // **If you have no special requirements, leave this parameter empty.**
    // 
    // The configurations of authorization chains. For more information, see [Use authorization chains to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    std::shared_ptr<CredentialConfig> credentialConfig_ = nullptr;
    // Specifies whether to allow an upload of a document to the Object Storage Service (OSS) bucket. Valid values:
    // 
    // *   true: Documents can be directly uploaded to OSS. The uploaded document overwrites the existing document and a new version is generated for the document. Before you upload a new document, close the existing document if it is being edited. After the document is uploaded, wait for approximately 5 minutes before you open the document again so that the new version can successfully load. Upload a new document only when the existing is closed. Otherwise, the uploaded document is overwritten when the existing document is saved.
    // *   false: Documents cannot be directly uploaded to OSS. If you try to upload a document, an error is returned. This is the default value.
    std::shared_ptr<bool> externalUploaded_ = nullptr;
    // The name of the file. The extension must be included in the file name. By default, this parameter is set to the last depth level of the **SourceURI** parameter value.
    // 
    // Supported extensions (only preview supported for .pdf):
    // 
    // *   Word documents: .doc, .docx, .txt, .dot, .wps, .wpt, .dotx, .docm, .dotm, and .rtf
    // *   Presentation documents: .ppt, .pptx, .pptm, .ppsx, .ppsm, .pps, .potx, .potm, .dpt, and .dps
    // *   Table documents: .et, .xls, .xlt, .xlsx, .xlsm, .xltx, .xltm, and .csv
    // *   PDF documents: .pdf
    std::shared_ptr<string> filename_ = nullptr;
    std::shared_ptr<bool> hidecmb_ = nullptr;
    // The notification settings. Only SMQ messages are supported. For more information, see [WebOffice message example](https://help.aliyun.com/document_detail/2743999.html).
    // 
    // >  A notification is sent after the document is saved or renamed.
    std::shared_ptr<Notification> notification_ = nullptr;
    std::shared_ptr<string> notifyTopicName_ = nullptr;
    std::shared_ptr<string> password_ = nullptr;
    // The user permission settings in the JSON format.
    // 
    // The parameter supports the following permission fields:
    // 
    // Each field is of type Boolean and can have a value of true and false (the default value):
    // 
    // *   Readonly: grants the permission to preview the document. This field is optional.
    // *   Rename: grants the permission to rename the document. Notification messages of a rename event can be sent only by using SMQ. This field is optional.
    // *   History: grants the permission to view historical versions. This field is optional.
    // *   Copy: grants the permission to copy the document. This field is optional.
    // *   Export: grants the permission to export the document as a PDF file. This field is optional.
    // *   Print: grants the permission to print the document. This field is optional.
    // 
    // >  Only online preview is supported for PDF documents. When you call the operation on a PDF document, you can set Readonly only to true.
    // 
    // >  To manage multiple versions of the document, you must enable versioning for the bucket that stores the document and set the History parameter to true.
    // 
    // >  Printing is not supported during cache preview.
    std::shared_ptr<WebofficePermission> permission_ = nullptr;
    std::shared_ptr<int64_t> previewPages_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<string> referer_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceURI_ = nullptr;
    // The user information. The user information that you want to display on the WebOffice page. If you do not specify this parameter, the user name displayed is Unknown.
    std::shared_ptr<WebofficeUser> user_ = nullptr;
    // The user-defined data that you want to return in asynchronous messages. This parameter takes effect only when you specify the MNS settings in the Notification parameter. The maximum length of the value is 2,048 bytes.
    std::shared_ptr<string> userData_ = nullptr;
    std::shared_ptr<WebofficeWatermark> watermark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
