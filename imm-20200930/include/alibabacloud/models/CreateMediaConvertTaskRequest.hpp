// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIACONVERTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIACONVERTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CredentialConfig.hpp>
#include <alibabacloud/models/Notification.hpp>
#include <vector>
#include <alibabacloud/models/CreateMediaConvertTaskRequestSources.hpp>
#include <alibabacloud/models/CreateMediaConvertTaskRequestTargets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateMediaConvertTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaConvertTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlignmentIndex, alignmentIndex_);
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaConvertTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlignmentIndex, alignmentIndex_);
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateMediaConvertTaskRequest() = default ;
    CreateMediaConvertTaskRequest(const CreateMediaConvertTaskRequest &) = default ;
    CreateMediaConvertTaskRequest(CreateMediaConvertTaskRequest &&) = default ;
    CreateMediaConvertTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaConvertTaskRequest() = default ;
    CreateMediaConvertTaskRequest& operator=(const CreateMediaConvertTaskRequest &) = default ;
    CreateMediaConvertTaskRequest& operator=(CreateMediaConvertTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alignmentIndex_ == nullptr
        && return this->credentialConfig_ == nullptr && return this->notification_ == nullptr && return this->projectName_ == nullptr && return this->sources_ == nullptr && return this->tags_ == nullptr
        && return this->targets_ == nullptr && return this->userData_ == nullptr; };
    // alignmentIndex Field Functions 
    bool hasAlignmentIndex() const { return this->alignmentIndex_ != nullptr;};
    void deleteAlignmentIndex() { this->alignmentIndex_ = nullptr;};
    inline int32_t alignmentIndex() const { DARABONBA_PTR_GET_DEFAULT(alignmentIndex_, 0) };
    inline CreateMediaConvertTaskRequest& setAlignmentIndex(int32_t alignmentIndex) { DARABONBA_PTR_SET_VALUE(alignmentIndex_, alignmentIndex) };


    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & credentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig credentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline CreateMediaConvertTaskRequest& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline CreateMediaConvertTaskRequest& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const Notification & notification() const { DARABONBA_PTR_GET_CONST(notification_, Notification) };
    inline Notification notification() { DARABONBA_PTR_GET(notification_, Notification) };
    inline CreateMediaConvertTaskRequest& setNotification(const Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline CreateMediaConvertTaskRequest& setNotification(Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateMediaConvertTaskRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline const vector<CreateMediaConvertTaskRequestSources> & sources() const { DARABONBA_PTR_GET_CONST(sources_, vector<CreateMediaConvertTaskRequestSources>) };
    inline vector<CreateMediaConvertTaskRequestSources> sources() { DARABONBA_PTR_GET(sources_, vector<CreateMediaConvertTaskRequestSources>) };
    inline CreateMediaConvertTaskRequest& setSources(const vector<CreateMediaConvertTaskRequestSources> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
    inline CreateMediaConvertTaskRequest& setSources(vector<CreateMediaConvertTaskRequestSources> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline CreateMediaConvertTaskRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline CreateMediaConvertTaskRequest& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<CreateMediaConvertTaskRequestTargets> & targets() const { DARABONBA_PTR_GET_CONST(targets_, vector<CreateMediaConvertTaskRequestTargets>) };
    inline vector<CreateMediaConvertTaskRequestTargets> targets() { DARABONBA_PTR_GET(targets_, vector<CreateMediaConvertTaskRequestTargets>) };
    inline CreateMediaConvertTaskRequest& setTargets(const vector<CreateMediaConvertTaskRequestTargets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline CreateMediaConvertTaskRequest& setTargets(vector<CreateMediaConvertTaskRequestTargets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateMediaConvertTaskRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // When performing media concatenation, the index of the primary media file (which provides the default transcoding parameters for `Video` and `Audio`, including resolution, frame rate, etc.) in the concatenation list. The default value is 0 (aligning with the first media file in the concatenation list).
    std::shared_ptr<int32_t> alignmentIndex_ = nullptr;
    // **If there are no special requirements, please leave this blank.**
    // 
    // Chain authorization configuration. For more information, see [Using Chain Authorization to Access Other Entity Resources](https://help.aliyun.com/document_detail/465340.html).
    std::shared_ptr<CredentialConfig> credentialConfig_ = nullptr;
    // Notification configuration. For details, click Notification. The format of asynchronous notification messages can be found in [Asynchronous Notification Message Format](https://help.aliyun.com/document_detail/2743997.html).
    std::shared_ptr<Notification> notification_ = nullptr;
    // The name of the project. For how to obtain it, see [Creating a Project](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // A list of media files. If the list contains more than one element, it indicates that the Concat (concatenation) function is enabled. The Concat order follows the sequence of the input video file URIs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateMediaConvertTaskRequestSources>> sources_ = nullptr;
    // Custom tags used for searching and filtering asynchronous tasks.
    Darabonba::Json tags_ = nullptr;
    // List of media processing tasks, supporting multiple task configurations.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateMediaConvertTaskRequestTargets>> targets_ = nullptr;
    // User-defined information that will be returned in asynchronous message notifications, used for convenient association and processing within your system. The maximum length is 2048 bytes.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
