// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILECOMPRESSIONTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILECOMPRESSIONTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateFileCompressionTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileCompressionTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompressedFormat, compressedFormat_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_TO_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SourceManifestURI, sourceManifestURI_);
      DARABONBA_PTR_TO_JSON(Sources, sourcesShrink_);
      DARABONBA_PTR_TO_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileCompressionTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompressedFormat, compressedFormat_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SourceManifestURI, sourceManifestURI_);
      DARABONBA_PTR_FROM_JSON(Sources, sourcesShrink_);
      DARABONBA_PTR_FROM_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateFileCompressionTaskShrinkRequest() = default ;
    CreateFileCompressionTaskShrinkRequest(const CreateFileCompressionTaskShrinkRequest &) = default ;
    CreateFileCompressionTaskShrinkRequest(CreateFileCompressionTaskShrinkRequest &&) = default ;
    CreateFileCompressionTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileCompressionTaskShrinkRequest() = default ;
    CreateFileCompressionTaskShrinkRequest& operator=(const CreateFileCompressionTaskShrinkRequest &) = default ;
    CreateFileCompressionTaskShrinkRequest& operator=(CreateFileCompressionTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compressedFormat_ == nullptr
        && this->credentialConfigShrink_ == nullptr && this->notificationShrink_ == nullptr && this->projectName_ == nullptr && this->sourceManifestURI_ == nullptr && this->sourcesShrink_ == nullptr
        && this->targetURI_ == nullptr && this->userData_ == nullptr; };
    // compressedFormat Field Functions 
    bool hasCompressedFormat() const { return this->compressedFormat_ != nullptr;};
    void deleteCompressedFormat() { this->compressedFormat_ = nullptr;};
    inline string getCompressedFormat() const { DARABONBA_PTR_GET_DEFAULT(compressedFormat_, "") };
    inline CreateFileCompressionTaskShrinkRequest& setCompressedFormat(string compressedFormat) { DARABONBA_PTR_SET_VALUE(compressedFormat_, compressedFormat) };


    // credentialConfigShrink Field Functions 
    bool hasCredentialConfigShrink() const { return this->credentialConfigShrink_ != nullptr;};
    void deleteCredentialConfigShrink() { this->credentialConfigShrink_ = nullptr;};
    inline string getCredentialConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(credentialConfigShrink_, "") };
    inline CreateFileCompressionTaskShrinkRequest& setCredentialConfigShrink(string credentialConfigShrink) { DARABONBA_PTR_SET_VALUE(credentialConfigShrink_, credentialConfigShrink) };


    // notificationShrink Field Functions 
    bool hasNotificationShrink() const { return this->notificationShrink_ != nullptr;};
    void deleteNotificationShrink() { this->notificationShrink_ = nullptr;};
    inline string getNotificationShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationShrink_, "") };
    inline CreateFileCompressionTaskShrinkRequest& setNotificationShrink(string notificationShrink) { DARABONBA_PTR_SET_VALUE(notificationShrink_, notificationShrink) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateFileCompressionTaskShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sourceManifestURI Field Functions 
    bool hasSourceManifestURI() const { return this->sourceManifestURI_ != nullptr;};
    void deleteSourceManifestURI() { this->sourceManifestURI_ = nullptr;};
    inline string getSourceManifestURI() const { DARABONBA_PTR_GET_DEFAULT(sourceManifestURI_, "") };
    inline CreateFileCompressionTaskShrinkRequest& setSourceManifestURI(string sourceManifestURI) { DARABONBA_PTR_SET_VALUE(sourceManifestURI_, sourceManifestURI) };


    // sourcesShrink Field Functions 
    bool hasSourcesShrink() const { return this->sourcesShrink_ != nullptr;};
    void deleteSourcesShrink() { this->sourcesShrink_ = nullptr;};
    inline string getSourcesShrink() const { DARABONBA_PTR_GET_DEFAULT(sourcesShrink_, "") };
    inline CreateFileCompressionTaskShrinkRequest& setSourcesShrink(string sourcesShrink) { DARABONBA_PTR_SET_VALUE(sourcesShrink_, sourcesShrink) };


    // targetURI Field Functions 
    bool hasTargetURI() const { return this->targetURI_ != nullptr;};
    void deleteTargetURI() { this->targetURI_ = nullptr;};
    inline string getTargetURI() const { DARABONBA_PTR_GET_DEFAULT(targetURI_, "") };
    inline CreateFileCompressionTaskShrinkRequest& setTargetURI(string targetURI) { DARABONBA_PTR_SET_VALUE(targetURI_, targetURI) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateFileCompressionTaskShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The compression format for file packaging.
    // 
    // > Currently, only the zip format is supported.
    shared_ptr<string> compressedFormat_ {};
    // **If you do not have special requirements, leave this parameter empty.**
    // 
    // The chained authorization configuration. This parameter is not required. For more information, see [Use chained authorization to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    shared_ptr<string> credentialConfigShrink_ {};
    // The message notification configuration. For more information, see the Notification data type. For the format of asynchronous notification messages, see [Asynchronous notification message format](https://help.aliyun.com/document_detail/2743997.html).
    // 
    // > IMM API callbacks do not currently support specifying a webhook address. Use MNS instead.
    shared_ptr<string> notificationShrink_ {};
    // The name of the project. For more information, see [Create a project](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The address where the file manifest is stored. The file manifest stores the \\`Sources\\` structure in JSON format on OSS. This is suitable for scenarios with many files to package.
    // 
    // > Specify either this parameter or `Sources`. In the manifest file, the `URI` parameter is required and the `Alias` parameter is optional. \\`SourceManifestURI\\` supports up to 80,000 packaging rules.
    // > >Warning: When you save the content to OSS, specify the OSS address of the file for this parameter.
    // 
    // The following is an example of the file structure:
    // 
    // ```
    // [{"URI":"oss://<bucket>/<object>", "Alias":"/new-dir/new-name"}]
    // ```
    shared_ptr<string> sourceManifestURI_ {};
    // A list of files to package and their packaging rules.
    // 
    // > Specify either this parameter or \\`SourceManifestURI\\`. \\`Sources\\` supports a maximum of 100 packaging rules.
    // > >Warning: If you have more than 100 packaging rules, use the \\`SourceManifestURI\\` parameter.
    shared_ptr<string> sourcesShrink_ {};
    // The OSS address of the output file. The compressed file is named after the file name in this path, such as `name.zip`.
    // 
    // The OSS address must be in the \\`oss\\://${Bucket}/${Object}\\` format. \\`${Bucket}\\` is the name of the OSS bucket that is in the same region as the current project. \\`${Object}\\` is the full path of the file, including the file name extension.
    // 
    // This parameter is required.
    shared_ptr<string> targetURI_ {};
    // Custom user data. This data is returned in the asynchronous notification message, which helps you associate the notification with your internal system. The maximum length is 2,048 bytes.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
