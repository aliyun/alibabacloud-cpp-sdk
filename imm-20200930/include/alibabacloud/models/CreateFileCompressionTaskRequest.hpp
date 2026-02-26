// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILECOMPRESSIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILECOMPRESSIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CredentialConfig.hpp>
#include <alibabacloud/models/Notification.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateFileCompressionTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileCompressionTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompressedFormat, compressedFormat_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SourceManifestURI, sourceManifestURI_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
      DARABONBA_PTR_TO_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileCompressionTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompressedFormat, compressedFormat_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SourceManifestURI, sourceManifestURI_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
      DARABONBA_PTR_FROM_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateFileCompressionTaskRequest() = default ;
    CreateFileCompressionTaskRequest(const CreateFileCompressionTaskRequest &) = default ;
    CreateFileCompressionTaskRequest(CreateFileCompressionTaskRequest &&) = default ;
    CreateFileCompressionTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileCompressionTaskRequest() = default ;
    CreateFileCompressionTaskRequest& operator=(const CreateFileCompressionTaskRequest &) = default ;
    CreateFileCompressionTaskRequest& operator=(CreateFileCompressionTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Sources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Sources& obj) { 
        DARABONBA_PTR_TO_JSON(Alias, alias_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(URI, URI_);
      };
      friend void from_json(const Darabonba::Json& j, Sources& obj) { 
        DARABONBA_PTR_FROM_JSON(Alias, alias_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(URI, URI_);
      };
      Sources() = default ;
      Sources(const Sources &) = default ;
      Sources(Sources &&) = default ;
      Sources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Sources() = default ;
      Sources& operator=(const Sources &) = default ;
      Sources& operator=(Sources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alias_ == nullptr
        && this->mode_ == nullptr && this->URI_ == nullptr; };
      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline Sources& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline Sources& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // URI Field Functions 
      bool hasURI() const { return this->URI_ != nullptr;};
      void deleteURI() { this->URI_ = nullptr;};
      inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
      inline Sources& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


    protected:
      // Specifies the path of the object in the package, or renames the object in the package.
      // 
      // *   Leave this parameter empty to retain the original directory structure of the object in the package. For example, if the object is stored at `oss://test-bucket/test-dir/test-object.doc` and you do not specify this parameter, the path of the object in the package is `/test-dir/test-object.doc`.
      // *   Rename the object. For example, if the object is stored at `oss://test-bucket/test-object.jpg` and you set the **Alias** parameter to `test-rename-object.jpg`, the name of the object in the package is `test-rename-object.jpg`.
      // *   Specify a different path for the object in the package. For example, if the directory to be packed is `oss://test-bucket/test-dir/` and you set the **Alias** parameter to `/new-dir/`, all objects in the directory are placed in the `/new-dir/` path in the package.
      // *   Set the parameter to `/` to remove the original directory structure.
      // 
      // >  Duplicate object names may cause a failure in extracting the objects from the package, depending on the packing tool that you use. We recommend that you avoid using duplicate object names when you rename objects in the packing task.
      shared_ptr<string> alias_ {};
      // The object matching rule. Valid values: `fullname` and `prefix`. Default value: `prefix`
      // 
      // *   `prefix`: matches objects by object name prefix.
      // *   `fullname`: exactly matches one single object by its full object name.
      shared_ptr<string> mode_ {};
      // The OSS URI of the object or directory.
      // 
      // Specify the OSS URI in the oss://${Bucket}/${Object} format, where `${Bucket}` is the name of the bucket in the same region as the current project and `${Object}` is a directory or object:
      // 
      // When you pack a directory, `${Object}` is the path of the directory.
      // 
      // *   When you pack an object, `${Object}` is the path of the object with the extension included.
      shared_ptr<string> URI_ {};
    };

    virtual bool empty() const override { return this->compressedFormat_ == nullptr
        && this->credentialConfig_ == nullptr && this->notification_ == nullptr && this->projectName_ == nullptr && this->sourceManifestURI_ == nullptr && this->sources_ == nullptr
        && this->targetURI_ == nullptr && this->userData_ == nullptr; };
    // compressedFormat Field Functions 
    bool hasCompressedFormat() const { return this->compressedFormat_ != nullptr;};
    void deleteCompressedFormat() { this->compressedFormat_ = nullptr;};
    inline string getCompressedFormat() const { DARABONBA_PTR_GET_DEFAULT(compressedFormat_, "") };
    inline CreateFileCompressionTaskRequest& setCompressedFormat(string compressedFormat) { DARABONBA_PTR_SET_VALUE(compressedFormat_, compressedFormat) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & getCredentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig getCredentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline CreateFileCompressionTaskRequest& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline CreateFileCompressionTaskRequest& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const Notification & getNotification() const { DARABONBA_PTR_GET_CONST(notification_, Notification) };
    inline Notification getNotification() { DARABONBA_PTR_GET(notification_, Notification) };
    inline CreateFileCompressionTaskRequest& setNotification(const Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline CreateFileCompressionTaskRequest& setNotification(Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateFileCompressionTaskRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sourceManifestURI Field Functions 
    bool hasSourceManifestURI() const { return this->sourceManifestURI_ != nullptr;};
    void deleteSourceManifestURI() { this->sourceManifestURI_ = nullptr;};
    inline string getSourceManifestURI() const { DARABONBA_PTR_GET_DEFAULT(sourceManifestURI_, "") };
    inline CreateFileCompressionTaskRequest& setSourceManifestURI(string sourceManifestURI) { DARABONBA_PTR_SET_VALUE(sourceManifestURI_, sourceManifestURI) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline const vector<CreateFileCompressionTaskRequest::Sources> & getSources() const { DARABONBA_PTR_GET_CONST(sources_, vector<CreateFileCompressionTaskRequest::Sources>) };
    inline vector<CreateFileCompressionTaskRequest::Sources> getSources() { DARABONBA_PTR_GET(sources_, vector<CreateFileCompressionTaskRequest::Sources>) };
    inline CreateFileCompressionTaskRequest& setSources(const vector<CreateFileCompressionTaskRequest::Sources> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
    inline CreateFileCompressionTaskRequest& setSources(vector<CreateFileCompressionTaskRequest::Sources> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


    // targetURI Field Functions 
    bool hasTargetURI() const { return this->targetURI_ != nullptr;};
    void deleteTargetURI() { this->targetURI_ = nullptr;};
    inline string getTargetURI() const { DARABONBA_PTR_GET_DEFAULT(targetURI_, "") };
    inline CreateFileCompressionTaskRequest& setTargetURI(string targetURI) { DARABONBA_PTR_SET_VALUE(targetURI_, targetURI) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateFileCompressionTaskRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The format of the output file.
    // 
    // > Only the ZIP format is supported.
    shared_ptr<string> compressedFormat_ {};
    // **If you have no special requirements, leave this parameter empty.**
    // 
    // The configurations of authorization chains. For more information, see [Use authorization chains to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    shared_ptr<CredentialConfig> credentialConfig_ {};
    // The notification settings. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html).
    shared_ptr<Notification> notification_ {};
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
    shared_ptr<vector<CreateFileCompressionTaskRequest::Sources>> sources_ {};
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
