// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPOCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_REPOCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RepoConfigurationArtifactBuildRuleParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class RepoConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RepoConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactBuildRuleParameters, artifactBuildRuleParameters_);
      DARABONBA_PTR_TO_JSON(RepoType, repoType_);
      DARABONBA_PTR_TO_JSON(TagImmutability, tagImmutability_);
    };
    friend void from_json(const Darabonba::Json& j, RepoConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactBuildRuleParameters, artifactBuildRuleParameters_);
      DARABONBA_PTR_FROM_JSON(RepoType, repoType_);
      DARABONBA_PTR_FROM_JSON(TagImmutability, tagImmutability_);
    };
    RepoConfiguration() = default ;
    RepoConfiguration(const RepoConfiguration &) = default ;
    RepoConfiguration(RepoConfiguration &&) = default ;
    RepoConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RepoConfiguration() = default ;
    RepoConfiguration& operator=(const RepoConfiguration &) = default ;
    RepoConfiguration& operator=(RepoConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifactBuildRuleParameters_ == nullptr
        && return this->repoType_ == nullptr && return this->tagImmutability_ == nullptr; };
    // artifactBuildRuleParameters Field Functions 
    bool hasArtifactBuildRuleParameters() const { return this->artifactBuildRuleParameters_ != nullptr;};
    void deleteArtifactBuildRuleParameters() { this->artifactBuildRuleParameters_ = nullptr;};
    inline const RepoConfigurationArtifactBuildRuleParameters & artifactBuildRuleParameters() const { DARABONBA_PTR_GET_CONST(artifactBuildRuleParameters_, RepoConfigurationArtifactBuildRuleParameters) };
    inline RepoConfigurationArtifactBuildRuleParameters artifactBuildRuleParameters() { DARABONBA_PTR_GET(artifactBuildRuleParameters_, RepoConfigurationArtifactBuildRuleParameters) };
    inline RepoConfiguration& setArtifactBuildRuleParameters(const RepoConfigurationArtifactBuildRuleParameters & artifactBuildRuleParameters) { DARABONBA_PTR_SET_VALUE(artifactBuildRuleParameters_, artifactBuildRuleParameters) };
    inline RepoConfiguration& setArtifactBuildRuleParameters(RepoConfigurationArtifactBuildRuleParameters && artifactBuildRuleParameters) { DARABONBA_PTR_SET_RVALUE(artifactBuildRuleParameters_, artifactBuildRuleParameters) };


    // repoType Field Functions 
    bool hasRepoType() const { return this->repoType_ != nullptr;};
    void deleteRepoType() { this->repoType_ = nullptr;};
    inline string repoType() const { DARABONBA_PTR_GET_DEFAULT(repoType_, "") };
    inline RepoConfiguration& setRepoType(string repoType) { DARABONBA_PTR_SET_VALUE(repoType_, repoType) };


    // tagImmutability Field Functions 
    bool hasTagImmutability() const { return this->tagImmutability_ != nullptr;};
    void deleteTagImmutability() { this->tagImmutability_ = nullptr;};
    inline bool tagImmutability() const { DARABONBA_PTR_GET_DEFAULT(tagImmutability_, false) };
    inline RepoConfiguration& setTagImmutability(bool tagImmutability) { DARABONBA_PTR_SET_VALUE(tagImmutability_, tagImmutability) };


  protected:
    std::shared_ptr<RepoConfigurationArtifactBuildRuleParameters> artifactBuildRuleParameters_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> repoType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> tagImmutability_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
