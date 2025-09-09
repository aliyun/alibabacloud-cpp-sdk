// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARTIFACTREPOSITORYCREDENTIALSRESPONSEBODYAVAILABLERESOURCES_HPP_
#define ALIBABACLOUD_MODELS_GETARTIFACTREPOSITORYCREDENTIALSRESPONSEBODYAVAILABLERESOURCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetArtifactRepositoryCredentialsResponseBodyAvailableResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArtifactRepositoryCredentialsResponseBodyAvailableResources& obj) { 
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepositoryName, repositoryName_);
    };
    friend void from_json(const Darabonba::Json& j, GetArtifactRepositoryCredentialsResponseBodyAvailableResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepositoryName, repositoryName_);
    };
    GetArtifactRepositoryCredentialsResponseBodyAvailableResources() = default ;
    GetArtifactRepositoryCredentialsResponseBodyAvailableResources(const GetArtifactRepositoryCredentialsResponseBodyAvailableResources &) = default ;
    GetArtifactRepositoryCredentialsResponseBodyAvailableResources(GetArtifactRepositoryCredentialsResponseBodyAvailableResources &&) = default ;
    GetArtifactRepositoryCredentialsResponseBodyAvailableResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArtifactRepositoryCredentialsResponseBodyAvailableResources() = default ;
    GetArtifactRepositoryCredentialsResponseBodyAvailableResources& operator=(const GetArtifactRepositoryCredentialsResponseBodyAvailableResources &) = default ;
    GetArtifactRepositoryCredentialsResponseBodyAvailableResources& operator=(GetArtifactRepositoryCredentialsResponseBodyAvailableResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->path_ != nullptr
        && this->regionId_ != nullptr && this->repositoryName_ != nullptr; };
    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetArtifactRepositoryCredentialsResponseBodyAvailableResources& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetArtifactRepositoryCredentialsResponseBodyAvailableResources& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repositoryName Field Functions 
    bool hasRepositoryName() const { return this->repositoryName_ != nullptr;};
    void deleteRepositoryName() { this->repositoryName_ = nullptr;};
    inline string repositoryName() const { DARABONBA_PTR_GET_DEFAULT(repositoryName_, "") };
    inline GetArtifactRepositoryCredentialsResponseBodyAvailableResources& setRepositoryName(string repositoryName) { DARABONBA_PTR_SET_VALUE(repositoryName_, repositoryName) };


  protected:
    // The path.
    std::shared_ptr<string> path_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The repository name.
    std::shared_ptr<string> repositoryName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
