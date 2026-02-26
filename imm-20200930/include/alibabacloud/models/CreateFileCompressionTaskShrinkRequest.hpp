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
    // The format of the output file.
    // 
    // > Only the ZIP format is supported.
    shared_ptr<string> compressedFormat_ {};
    // **If you have no special requirements, leave this parameter empty.**
    // 
    // The configurations of authorization chains. For more information, see [Use authorization chains to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    shared_ptr<string> credentialConfigShrink_ {};
    // The notification settings. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html).
    shared_ptr<string> notificationShrink_ {};
    // The name of the project.[](~~478153~~)
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The OSS URI of the inventory object that contains the objects to compress. The inventory object stores the objects to compress by using the same data structure of the Sources parameter in the JSON format. This parameter is suitable for specifying a large number of objects to compress.
    // 
    // >  You must specify this parameter or the `Sources` parameter. The `URI` parameter is required and the `Alias` parameter is optional. You can specify up to 80,000 compression rule by using SourceManifestURI in one single call to the operation. The following line provides an example of the content within an inventory object.
    // 
    //     [{"URI":"oss://<bucket>/<object>", "Alias":"/new-dir/new-name"}]
    shared_ptr<string> sourceManifestURI_ {};
    // The objects to be packed and packing rules.
    // 
    // >  You must specify this parameter or the SourceManifestURI parameter. The Sources parameter can hold up to 100 packing rules. If you want to include more than 100 packing rules, use the SourceManifestURI parameter.
    shared_ptr<string> sourcesShrink_ {};
    // The OSS URI of the package. The object name part in the URI is used as the name of the package. Example: `name.zip`.
    // 
    // Specify the OSS URI in the oss://${Bucket}/${Object} format, where `${Bucket}` is the name of the bucket in the same region as the current project and `${Object}` is the path of the object with the extension included.
    // 
    // This parameter is required.
    shared_ptr<string> targetURI_ {};
    // The custom information, which is returned in an asynchronous notification and facilitates notification management. The maximum length of the value is 2,048 bytes.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
