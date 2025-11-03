// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREPOSYNCTASKRESPONSEBODYSYNCTASKSIMAGETO_HPP_
#define ALIBABACLOUD_MODELS_LISTREPOSYNCTASKRESPONSEBODYSYNCTASKSIMAGETO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class ListRepoSyncTaskResponseBodySyncTasksImageTo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRepoSyncTaskResponseBodySyncTasksImageTo& obj) { 
      DARABONBA_PTR_TO_JSON(ImageTag, imageTag_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespaceName, repoNamespaceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListRepoSyncTaskResponseBodySyncTasksImageTo& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageTag, imageTag_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespaceName, repoNamespaceName_);
    };
    ListRepoSyncTaskResponseBodySyncTasksImageTo() = default ;
    ListRepoSyncTaskResponseBodySyncTasksImageTo(const ListRepoSyncTaskResponseBodySyncTasksImageTo &) = default ;
    ListRepoSyncTaskResponseBodySyncTasksImageTo(ListRepoSyncTaskResponseBodySyncTasksImageTo &&) = default ;
    ListRepoSyncTaskResponseBodySyncTasksImageTo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRepoSyncTaskResponseBodySyncTasksImageTo() = default ;
    ListRepoSyncTaskResponseBodySyncTasksImageTo& operator=(const ListRepoSyncTaskResponseBodySyncTasksImageTo &) = default ;
    ListRepoSyncTaskResponseBodySyncTasksImageTo& operator=(ListRepoSyncTaskResponseBodySyncTasksImageTo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageTag_ == nullptr
        && return this->instanceId_ == nullptr && return this->regionId_ == nullptr && return this->repoName_ == nullptr && return this->repoNamespaceName_ == nullptr; };
    // imageTag Field Functions 
    bool hasImageTag() const { return this->imageTag_ != nullptr;};
    void deleteImageTag() { this->imageTag_ = nullptr;};
    inline string imageTag() const { DARABONBA_PTR_GET_DEFAULT(imageTag_, "") };
    inline ListRepoSyncTaskResponseBodySyncTasksImageTo& setImageTag(string imageTag) { DARABONBA_PTR_SET_VALUE(imageTag_, imageTag) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListRepoSyncTaskResponseBodySyncTasksImageTo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListRepoSyncTaskResponseBodySyncTasksImageTo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline ListRepoSyncTaskResponseBodySyncTasksImageTo& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespaceName Field Functions 
    bool hasRepoNamespaceName() const { return this->repoNamespaceName_ != nullptr;};
    void deleteRepoNamespaceName() { this->repoNamespaceName_ = nullptr;};
    inline string repoNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(repoNamespaceName_, "") };
    inline ListRepoSyncTaskResponseBodySyncTasksImageTo& setRepoNamespaceName(string repoNamespaceName) { DARABONBA_PTR_SET_VALUE(repoNamespaceName_, repoNamespaceName) };


  protected:
    // The image tag.
    std::shared_ptr<string> imageTag_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The repository name.
    std::shared_ptr<string> repoName_ = nullptr;
    // The namespace to which the repository belongs.
    std::shared_ptr<string> repoNamespaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
