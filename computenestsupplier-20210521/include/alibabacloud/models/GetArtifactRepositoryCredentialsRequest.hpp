// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARTIFACTREPOSITORYCREDENTIALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETARTIFACTREPOSITORYCREDENTIALSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetArtifactRepositoryCredentialsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArtifactRepositoryCredentialsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_TO_JSON(DeployRegionId, deployRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetArtifactRepositoryCredentialsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_FROM_JSON(DeployRegionId, deployRegionId_);
    };
    GetArtifactRepositoryCredentialsRequest() = default ;
    GetArtifactRepositoryCredentialsRequest(const GetArtifactRepositoryCredentialsRequest &) = default ;
    GetArtifactRepositoryCredentialsRequest(GetArtifactRepositoryCredentialsRequest &&) = default ;
    GetArtifactRepositoryCredentialsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArtifactRepositoryCredentialsRequest() = default ;
    GetArtifactRepositoryCredentialsRequest& operator=(const GetArtifactRepositoryCredentialsRequest &) = default ;
    GetArtifactRepositoryCredentialsRequest& operator=(GetArtifactRepositoryCredentialsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->artifactType_ != nullptr
        && this->deployRegionId_ != nullptr; };
    // artifactType Field Functions 
    bool hasArtifactType() const { return this->artifactType_ != nullptr;};
    void deleteArtifactType() { this->artifactType_ = nullptr;};
    inline string artifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
    inline GetArtifactRepositoryCredentialsRequest& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


    // deployRegionId Field Functions 
    bool hasDeployRegionId() const { return this->deployRegionId_ != nullptr;};
    void deleteDeployRegionId() { this->deployRegionId_ = nullptr;};
    inline string deployRegionId() const { DARABONBA_PTR_GET_DEFAULT(deployRegionId_, "") };
    inline GetArtifactRepositoryCredentialsRequest& setDeployRegionId(string deployRegionId) { DARABONBA_PTR_SET_VALUE(deployRegionId_, deployRegionId) };


  protected:
    // The type of the deployment package. Valid values:
    // 
    // *   File: Object Storage Service (OSS) object.
    // *   AcrImage: container image.
    // 
    // This parameter is required.
    std::shared_ptr<string> artifactType_ = nullptr;
    // The region ID.
    std::shared_ptr<string> deployRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
