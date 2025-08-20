// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEREPOSYNCTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEREPOSYNCTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateRepoSyncTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRepoSyncTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Override, override_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TargetInstanceId, targetInstanceId_);
      DARABONBA_PTR_TO_JSON(TargetNamespace, targetNamespace_);
      DARABONBA_PTR_TO_JSON(TargetRegionId, targetRegionId_);
      DARABONBA_PTR_TO_JSON(TargetRepoName, targetRepoName_);
      DARABONBA_PTR_TO_JSON(TargetTag, targetTag_);
      DARABONBA_PTR_TO_JSON(TargetUserId, targetUserId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRepoSyncTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Override, override_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TargetInstanceId, targetInstanceId_);
      DARABONBA_PTR_FROM_JSON(TargetNamespace, targetNamespace_);
      DARABONBA_PTR_FROM_JSON(TargetRegionId, targetRegionId_);
      DARABONBA_PTR_FROM_JSON(TargetRepoName, targetRepoName_);
      DARABONBA_PTR_FROM_JSON(TargetTag, targetTag_);
      DARABONBA_PTR_FROM_JSON(TargetUserId, targetUserId_);
    };
    CreateRepoSyncTaskRequest() = default ;
    CreateRepoSyncTaskRequest(const CreateRepoSyncTaskRequest &) = default ;
    CreateRepoSyncTaskRequest(CreateRepoSyncTaskRequest &&) = default ;
    CreateRepoSyncTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRepoSyncTaskRequest() = default ;
    CreateRepoSyncTaskRequest& operator=(const CreateRepoSyncTaskRequest &) = default ;
    CreateRepoSyncTaskRequest& operator=(CreateRepoSyncTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->override_ != nullptr && this->repoId_ != nullptr && this->tag_ != nullptr && this->targetInstanceId_ != nullptr && this->targetNamespace_ != nullptr
        && this->targetRegionId_ != nullptr && this->targetRepoName_ != nullptr && this->targetTag_ != nullptr && this->targetUserId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateRepoSyncTaskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // override Field Functions 
    bool hasOverride() const { return this->override_ != nullptr;};
    void deleteOverride() { this->override_ = nullptr;};
    inline bool override() const { DARABONBA_PTR_GET_DEFAULT(override_, false) };
    inline CreateRepoSyncTaskRequest& setOverride(bool override) { DARABONBA_PTR_SET_VALUE(override_, override) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline CreateRepoSyncTaskRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline CreateRepoSyncTaskRequest& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // targetInstanceId Field Functions 
    bool hasTargetInstanceId() const { return this->targetInstanceId_ != nullptr;};
    void deleteTargetInstanceId() { this->targetInstanceId_ = nullptr;};
    inline string targetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceId_, "") };
    inline CreateRepoSyncTaskRequest& setTargetInstanceId(string targetInstanceId) { DARABONBA_PTR_SET_VALUE(targetInstanceId_, targetInstanceId) };


    // targetNamespace Field Functions 
    bool hasTargetNamespace() const { return this->targetNamespace_ != nullptr;};
    void deleteTargetNamespace() { this->targetNamespace_ = nullptr;};
    inline string targetNamespace() const { DARABONBA_PTR_GET_DEFAULT(targetNamespace_, "") };
    inline CreateRepoSyncTaskRequest& setTargetNamespace(string targetNamespace) { DARABONBA_PTR_SET_VALUE(targetNamespace_, targetNamespace) };


    // targetRegionId Field Functions 
    bool hasTargetRegionId() const { return this->targetRegionId_ != nullptr;};
    void deleteTargetRegionId() { this->targetRegionId_ = nullptr;};
    inline string targetRegionId() const { DARABONBA_PTR_GET_DEFAULT(targetRegionId_, "") };
    inline CreateRepoSyncTaskRequest& setTargetRegionId(string targetRegionId) { DARABONBA_PTR_SET_VALUE(targetRegionId_, targetRegionId) };


    // targetRepoName Field Functions 
    bool hasTargetRepoName() const { return this->targetRepoName_ != nullptr;};
    void deleteTargetRepoName() { this->targetRepoName_ = nullptr;};
    inline string targetRepoName() const { DARABONBA_PTR_GET_DEFAULT(targetRepoName_, "") };
    inline CreateRepoSyncTaskRequest& setTargetRepoName(string targetRepoName) { DARABONBA_PTR_SET_VALUE(targetRepoName_, targetRepoName) };


    // targetTag Field Functions 
    bool hasTargetTag() const { return this->targetTag_ != nullptr;};
    void deleteTargetTag() { this->targetTag_ = nullptr;};
    inline string targetTag() const { DARABONBA_PTR_GET_DEFAULT(targetTag_, "") };
    inline CreateRepoSyncTaskRequest& setTargetTag(string targetTag) { DARABONBA_PTR_SET_VALUE(targetTag_, targetTag) };


    // targetUserId Field Functions 
    bool hasTargetUserId() const { return this->targetUserId_ != nullptr;};
    void deleteTargetUserId() { this->targetUserId_ = nullptr;};
    inline string targetUserId() const { DARABONBA_PTR_GET_DEFAULT(targetUserId_, "") };
    inline CreateRepoSyncTaskRequest& setTargetUserId(string targetUserId) { DARABONBA_PTR_SET_VALUE(targetUserId_, targetUserId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<bool> override_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> repoId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tag_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetInstanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetNamespace_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetRegionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetRepoName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> targetTag_ = nullptr;
    std::shared_ptr<string> targetUserId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
