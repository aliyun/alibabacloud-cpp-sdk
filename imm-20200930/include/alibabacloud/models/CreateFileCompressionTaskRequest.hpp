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
      // Specifies a new path or name for the source file within the output compressed file.
      // 
      // - If you do not specify this parameter, the source directory structure is preserved. For example, if the source file is at `oss://test-bucket/test-dir/test-object.doc`, the path of the file in the compressed file is `/test-dir/test-object.doc`.
      // 
      // - Rename the file. For example, if the source file is at `oss://test-bucket/test-object.jpg` and you set this parameter to `/test-rename-object.jpg`, the file in the compressed file is named `test-rename-object.jpg`.
      // 
      // - Specify a new path for the source file in the compressed file. For example, if the source directory is `oss://test-bucket/test-dir/` and you set this parameter to `/new-dir/`, all files in the source directory are compressed into the `/new-dir/` path.
      // 
      // - Set the value to `/` to remove the source directory structure. All files are placed directly in the root directory of the compressed file, and the original directory structure is not preserved.
      // 
      // - Specify both a path and a file name. The file is renamed and moved to the specified path. For example, if you set this parameter to `/new-dir/alias.doc`, the file is renamed to `alias.doc` and placed in the `/new-dir/` path of the compressed file.
      // 
      // > * Avoid creating files with duplicate names during the renaming process. If duplicate names exist, you may not be able to decompress the file in the compressed package. This depends on the decompression program you use.
      // >
      // > * Format requirement: The value must start with a forward slash (\\`/\\`), such as `/new-dir/alias.doc`.
      shared_ptr<string> alias_ {};
      // The pattern matching mode for the packaging rule. Valid values include `prefix` (prefix matching) and `fullname` (exact matching). The default value is `prefix`.
      // 
      // - `prefix`: In this mode, all files that match the prefix are packaged.
      // 
      // - `fullname`: In this mode, only the file that exactly matches the rule is packaged.
      shared_ptr<string> mode_ {};
      // The OSS address of the directory or file to package.
      // 
      // The OSS address must be in the \\`oss\\://${Bucket}/${Object}\\` format. \\`${Bucket}\\` is the name of the OSS bucket that is in the same region as the current project. \\`${Object}\\` is described as follows:
      // 
      // - To package a directory, \\`${Object}\\` is the directory name.
      // 
      // - To package a file, \\`${Object}\\` is the full path of the file, including the file name extension.
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
    // The compression format for file packaging.
    // 
    // > Currently, only the zip format is supported.
    shared_ptr<string> compressedFormat_ {};
    // **If you do not have special requirements, leave this parameter empty.**
    // 
    // The chained authorization configuration. This parameter is not required. For more information, see [Use chained authorization to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    shared_ptr<CredentialConfig> credentialConfig_ {};
    // The message notification configuration. For more information, see the Notification data type. For the format of asynchronous notification messages, see [Asynchronous notification message format](https://help.aliyun.com/document_detail/2743997.html).
    // 
    // > IMM API callbacks do not currently support specifying a webhook address. Use MNS instead.
    shared_ptr<Notification> notification_ {};
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
    shared_ptr<vector<CreateFileCompressionTaskRequest::Sources>> sources_ {};
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
