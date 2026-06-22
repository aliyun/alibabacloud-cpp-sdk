// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILEUNCOMPRESSIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILEUNCOMPRESSIONTASKREQUEST_HPP_
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
  class CreateFileUncompressionTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileUncompressionTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SelectedFiles, selectedFiles_);
      DARABONBA_PTR_TO_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_TO_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileUncompressionTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SelectedFiles, selectedFiles_);
      DARABONBA_PTR_FROM_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_FROM_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateFileUncompressionTaskRequest() = default ;
    CreateFileUncompressionTaskRequest(const CreateFileUncompressionTaskRequest &) = default ;
    CreateFileUncompressionTaskRequest(CreateFileUncompressionTaskRequest &&) = default ;
    CreateFileUncompressionTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileUncompressionTaskRequest() = default ;
    CreateFileUncompressionTaskRequest& operator=(const CreateFileUncompressionTaskRequest &) = default ;
    CreateFileUncompressionTaskRequest& operator=(CreateFileUncompressionTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialConfig_ == nullptr
        && this->notification_ == nullptr && this->password_ == nullptr && this->projectName_ == nullptr && this->selectedFiles_ == nullptr && this->sourceURI_ == nullptr
        && this->targetURI_ == nullptr && this->userData_ == nullptr; };
    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & getCredentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig getCredentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline CreateFileUncompressionTaskRequest& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline CreateFileUncompressionTaskRequest& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const Notification & getNotification() const { DARABONBA_PTR_GET_CONST(notification_, Notification) };
    inline Notification getNotification() { DARABONBA_PTR_GET(notification_, Notification) };
    inline CreateFileUncompressionTaskRequest& setNotification(const Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline CreateFileUncompressionTaskRequest& setNotification(Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateFileUncompressionTaskRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateFileUncompressionTaskRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // selectedFiles Field Functions 
    bool hasSelectedFiles() const { return this->selectedFiles_ != nullptr;};
    void deleteSelectedFiles() { this->selectedFiles_ = nullptr;};
    inline const vector<string> & getSelectedFiles() const { DARABONBA_PTR_GET_CONST(selectedFiles_, vector<string>) };
    inline vector<string> getSelectedFiles() { DARABONBA_PTR_GET(selectedFiles_, vector<string>) };
    inline CreateFileUncompressionTaskRequest& setSelectedFiles(const vector<string> & selectedFiles) { DARABONBA_PTR_SET_VALUE(selectedFiles_, selectedFiles) };
    inline CreateFileUncompressionTaskRequest& setSelectedFiles(vector<string> && selectedFiles) { DARABONBA_PTR_SET_RVALUE(selectedFiles_, selectedFiles) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string getSourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline CreateFileUncompressionTaskRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


    // targetURI Field Functions 
    bool hasTargetURI() const { return this->targetURI_ != nullptr;};
    void deleteTargetURI() { this->targetURI_ = nullptr;};
    inline string getTargetURI() const { DARABONBA_PTR_GET_DEFAULT(targetURI_, "") };
    inline CreateFileUncompressionTaskRequest& setTargetURI(string targetURI) { DARABONBA_PTR_SET_VALUE(targetURI_, targetURI) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateFileUncompressionTaskRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // **Leave this parameter empty unless you have specific requirements.**
    // 
    // The chained authorization configuration. This parameter is optional. For more information, see [Use chained authorization to access other entity resources](https://help.aliyun.com/document_detail/465340.html).
    shared_ptr<CredentialConfig> credentialConfig_ {};
    // The message notification configuration. For details, click Notification. For the format of asynchronous notification messages, see [Asynchronous notification message format](https://help.aliyun.com/document_detail/2743997.html).
    // 
    // > Intelligent Media Management API callbacks do not support custom webhook addresses. Use MNS instead.
    shared_ptr<Notification> notification_ {};
    // The password for the encrypted compressed package.
    shared_ptr<string> password_ {};
    // The name of the project. For more information, see [Create a project](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The list of files to decompress. If this parameter is empty, the entire compressed package is decompressed. The default value is empty.
    shared_ptr<vector<string>> selectedFiles_ {};
    // The Object Storage Service (OSS) address where the compressed file is stored.
    // 
    // The OSS address must be in the \\`oss\\://${Bucket}/${Object}\\` format. \\`${Bucket}\\` is the name of the OSS bucket in the same region as the current project. \\`${Object}\\` is the full path of the file, including the file name extension.
    // 
    // This parameter is required.
    shared_ptr<string> sourceURI_ {};
    // The destination OSS address for the decompressed files. The selected files or the entire compressed package are decompressed to this address.
    // 
    // The OSS address must be in the \\`oss\\://${Bucket}/${Object}\\` format. \\`${Bucket}\\` is the name of the OSS bucket in the same region as the current project. \\`${Object}\\` is the full path of the file, including the file name extension.
    shared_ptr<string> targetURI_ {};
    // Custom user information. It is returned in the asynchronous notification message to help you associate the notification with your system. The maximum length is 2,048 bytes.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
