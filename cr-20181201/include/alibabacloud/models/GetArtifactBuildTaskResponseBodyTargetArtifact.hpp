// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARTIFACTBUILDTASKRESPONSEBODYTARGETARTIFACT_HPP_
#define ALIBABACLOUD_MODELS_GETARTIFACTBUILDTASKRESPONSEBODYTARGETARTIFACT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetArtifactBuildTaskResponseBodyTargetArtifact : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArtifactBuildTaskResponseBodyTargetArtifact& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetArtifactBuildTaskResponseBodyTargetArtifact& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetArtifactBuildTaskResponseBodyTargetArtifact() = default ;
    GetArtifactBuildTaskResponseBodyTargetArtifact(const GetArtifactBuildTaskResponseBodyTargetArtifact &) = default ;
    GetArtifactBuildTaskResponseBodyTargetArtifact(GetArtifactBuildTaskResponseBodyTargetArtifact &&) = default ;
    GetArtifactBuildTaskResponseBodyTargetArtifact(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArtifactBuildTaskResponseBodyTargetArtifact() = default ;
    GetArtifactBuildTaskResponseBodyTargetArtifact& operator=(const GetArtifactBuildTaskResponseBodyTargetArtifact &) = default ;
    GetArtifactBuildTaskResponseBodyTargetArtifact& operator=(GetArtifactBuildTaskResponseBodyTargetArtifact &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifactType_ == nullptr
        && return this->repoId_ == nullptr && return this->version_ == nullptr; };
    // artifactType Field Functions 
    bool hasArtifactType() const { return this->artifactType_ != nullptr;};
    void deleteArtifactType() { this->artifactType_ = nullptr;};
    inline string artifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
    inline GetArtifactBuildTaskResponseBodyTargetArtifact& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline GetArtifactBuildTaskResponseBodyTargetArtifact& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetArtifactBuildTaskResponseBodyTargetArtifact& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The type of the artifact that is built in the task. The value can only be IMAGE.
    std::shared_ptr<string> artifactType_ = nullptr;
    // The ID of the repository to which the artifact that is built in the task belongs. The repository can only be an image repository. The value is the same as the ID of the repository to which the source artifact belongs.
    std::shared_ptr<string> repoId_ = nullptr;
    // The version of the artifact that is built in the task. The artifact can only be an image.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
