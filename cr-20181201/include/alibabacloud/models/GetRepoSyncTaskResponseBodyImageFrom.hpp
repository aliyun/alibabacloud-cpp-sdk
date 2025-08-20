// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREPOSYNCTASKRESPONSEBODYIMAGEFROM_HPP_
#define ALIBABACLOUD_MODELS_GETREPOSYNCTASKRESPONSEBODYIMAGEFROM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetRepoSyncTaskResponseBodyImageFrom : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRepoSyncTaskResponseBodyImageFrom& obj) { 
      DARABONBA_PTR_TO_JSON(ImageTag, imageTag_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespaceName, repoNamespaceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetRepoSyncTaskResponseBodyImageFrom& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageTag, imageTag_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespaceName, repoNamespaceName_);
    };
    GetRepoSyncTaskResponseBodyImageFrom() = default ;
    GetRepoSyncTaskResponseBodyImageFrom(const GetRepoSyncTaskResponseBodyImageFrom &) = default ;
    GetRepoSyncTaskResponseBodyImageFrom(GetRepoSyncTaskResponseBodyImageFrom &&) = default ;
    GetRepoSyncTaskResponseBodyImageFrom(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRepoSyncTaskResponseBodyImageFrom() = default ;
    GetRepoSyncTaskResponseBodyImageFrom& operator=(const GetRepoSyncTaskResponseBodyImageFrom &) = default ;
    GetRepoSyncTaskResponseBodyImageFrom& operator=(GetRepoSyncTaskResponseBodyImageFrom &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageTag_ != nullptr
        && this->instanceId_ != nullptr && this->regionId_ != nullptr && this->repoName_ != nullptr && this->repoNamespaceName_ != nullptr; };
    // imageTag Field Functions 
    bool hasImageTag() const { return this->imageTag_ != nullptr;};
    void deleteImageTag() { this->imageTag_ = nullptr;};
    inline string imageTag() const { DARABONBA_PTR_GET_DEFAULT(imageTag_, "") };
    inline GetRepoSyncTaskResponseBodyImageFrom& setImageTag(string imageTag) { DARABONBA_PTR_SET_VALUE(imageTag_, imageTag) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetRepoSyncTaskResponseBodyImageFrom& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetRepoSyncTaskResponseBodyImageFrom& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline GetRepoSyncTaskResponseBodyImageFrom& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespaceName Field Functions 
    bool hasRepoNamespaceName() const { return this->repoNamespaceName_ != nullptr;};
    void deleteRepoNamespaceName() { this->repoNamespaceName_ = nullptr;};
    inline string repoNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(repoNamespaceName_, "") };
    inline GetRepoSyncTaskResponseBodyImageFrom& setRepoNamespaceName(string repoNamespaceName) { DARABONBA_PTR_SET_VALUE(repoNamespaceName_, repoNamespaceName) };


  protected:
    // The tag of the image.
    std::shared_ptr<string> imageTag_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the image repository.
    std::shared_ptr<string> repoName_ = nullptr;
    // The name of the namespace.
    std::shared_ptr<string> repoNamespaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
