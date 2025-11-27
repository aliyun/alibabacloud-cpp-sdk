// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGETOPDFTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGETOPDFTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CredentialConfig.hpp>
#include <alibabacloud/models/Notification.hpp>
#include <vector>
#include <alibabacloud/models/CreateImageToPDFTaskRequestSources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateImageToPDFTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageToPDFTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageToPDFTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateImageToPDFTaskRequest() = default ;
    CreateImageToPDFTaskRequest(const CreateImageToPDFTaskRequest &) = default ;
    CreateImageToPDFTaskRequest(CreateImageToPDFTaskRequest &&) = default ;
    CreateImageToPDFTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageToPDFTaskRequest() = default ;
    CreateImageToPDFTaskRequest& operator=(const CreateImageToPDFTaskRequest &) = default ;
    CreateImageToPDFTaskRequest& operator=(CreateImageToPDFTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialConfig_ == nullptr
        && return this->notification_ == nullptr && return this->projectName_ == nullptr && return this->sources_ == nullptr && return this->tags_ == nullptr && return this->targetURI_ == nullptr
        && return this->userData_ == nullptr; };
    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & credentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig credentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline CreateImageToPDFTaskRequest& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline CreateImageToPDFTaskRequest& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const Notification & notification() const { DARABONBA_PTR_GET_CONST(notification_, Notification) };
    inline Notification notification() { DARABONBA_PTR_GET(notification_, Notification) };
    inline CreateImageToPDFTaskRequest& setNotification(const Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline CreateImageToPDFTaskRequest& setNotification(Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateImageToPDFTaskRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline const vector<CreateImageToPDFTaskRequestSources> & sources() const { DARABONBA_PTR_GET_CONST(sources_, vector<CreateImageToPDFTaskRequestSources>) };
    inline vector<CreateImageToPDFTaskRequestSources> sources() { DARABONBA_PTR_GET(sources_, vector<CreateImageToPDFTaskRequestSources>) };
    inline CreateImageToPDFTaskRequest& setSources(const vector<CreateImageToPDFTaskRequestSources> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
    inline CreateImageToPDFTaskRequest& setSources(vector<CreateImageToPDFTaskRequestSources> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline CreateImageToPDFTaskRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline CreateImageToPDFTaskRequest& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // targetURI Field Functions 
    bool hasTargetURI() const { return this->targetURI_ != nullptr;};
    void deleteTargetURI() { this->targetURI_ = nullptr;};
    inline string targetURI() const { DARABONBA_PTR_GET_DEFAULT(targetURI_, "") };
    inline CreateImageToPDFTaskRequest& setTargetURI(string targetURI) { DARABONBA_PTR_SET_VALUE(targetURI_, targetURI) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateImageToPDFTaskRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // **If you have no special requirements, leave this parameter empty.**
    // 
    // The authorization chain settings. For more information, see [Use authorization chains to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    std::shared_ptr<CredentialConfig> credentialConfig_ = nullptr;
    // The notification settings. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html).
    std::shared_ptr<Notification> notification_ = nullptr;
    // The name of the project.[](~~478153~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The list of images. The sequence of image URIs in the list determines the order in which they are converted.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateImageToPDFTaskRequestSources>> sources_ = nullptr;
    // The custom tags. You can search for or filter asynchronous tasks by custom tag.
    Darabonba::Json tags_ = nullptr;
    // The OSS URI of the output file.
    // 
    // Specify the OSS URI in the oss://${bucketname}/${objectname} format, where ${bucketname} is the name of the bucket in the same region as the current project and ${objectname} is the path of the object with the extension included.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetURI_ = nullptr;
    // The custom information, which is returned in an asynchronous notification and facilitates notification management. The maximum length of the value is 2,048 bytes.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
