// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPOCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_REPOCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
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
    class ArtifactBuildRuleParameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ArtifactBuildRuleParameters& obj) { 
        DARABONBA_PTR_TO_JSON(ImageIndexOnly, imageIndexOnly_);
      };
      friend void from_json(const Darabonba::Json& j, ArtifactBuildRuleParameters& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageIndexOnly, imageIndexOnly_);
      };
      ArtifactBuildRuleParameters() = default ;
      ArtifactBuildRuleParameters(const ArtifactBuildRuleParameters &) = default ;
      ArtifactBuildRuleParameters(ArtifactBuildRuleParameters &&) = default ;
      ArtifactBuildRuleParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ArtifactBuildRuleParameters() = default ;
      ArtifactBuildRuleParameters& operator=(const ArtifactBuildRuleParameters &) = default ;
      ArtifactBuildRuleParameters& operator=(ArtifactBuildRuleParameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->imageIndexOnly_ == nullptr; };
      // imageIndexOnly Field Functions 
      bool hasImageIndexOnly() const { return this->imageIndexOnly_ != nullptr;};
      void deleteImageIndexOnly() { this->imageIndexOnly_ = nullptr;};
      inline bool getImageIndexOnly() const { DARABONBA_PTR_GET_DEFAULT(imageIndexOnly_, false) };
      inline ArtifactBuildRuleParameters& setImageIndexOnly(bool imageIndexOnly) { DARABONBA_PTR_SET_VALUE(imageIndexOnly_, imageIndexOnly) };


    protected:
      // This parameter is required.
      shared_ptr<bool> imageIndexOnly_ {};
    };

    virtual bool empty() const override { return this->artifactBuildRuleParameters_ == nullptr
        && this->repoType_ == nullptr && this->tagImmutability_ == nullptr; };
    // artifactBuildRuleParameters Field Functions 
    bool hasArtifactBuildRuleParameters() const { return this->artifactBuildRuleParameters_ != nullptr;};
    void deleteArtifactBuildRuleParameters() { this->artifactBuildRuleParameters_ = nullptr;};
    inline const RepoConfiguration::ArtifactBuildRuleParameters & getArtifactBuildRuleParameters() const { DARABONBA_PTR_GET_CONST(artifactBuildRuleParameters_, RepoConfiguration::ArtifactBuildRuleParameters) };
    inline RepoConfiguration::ArtifactBuildRuleParameters getArtifactBuildRuleParameters() { DARABONBA_PTR_GET(artifactBuildRuleParameters_, RepoConfiguration::ArtifactBuildRuleParameters) };
    inline RepoConfiguration& setArtifactBuildRuleParameters(const RepoConfiguration::ArtifactBuildRuleParameters & artifactBuildRuleParameters) { DARABONBA_PTR_SET_VALUE(artifactBuildRuleParameters_, artifactBuildRuleParameters) };
    inline RepoConfiguration& setArtifactBuildRuleParameters(RepoConfiguration::ArtifactBuildRuleParameters && artifactBuildRuleParameters) { DARABONBA_PTR_SET_RVALUE(artifactBuildRuleParameters_, artifactBuildRuleParameters) };


    // repoType Field Functions 
    bool hasRepoType() const { return this->repoType_ != nullptr;};
    void deleteRepoType() { this->repoType_ = nullptr;};
    inline string getRepoType() const { DARABONBA_PTR_GET_DEFAULT(repoType_, "") };
    inline RepoConfiguration& setRepoType(string repoType) { DARABONBA_PTR_SET_VALUE(repoType_, repoType) };


    // tagImmutability Field Functions 
    bool hasTagImmutability() const { return this->tagImmutability_ != nullptr;};
    void deleteTagImmutability() { this->tagImmutability_ = nullptr;};
    inline bool getTagImmutability() const { DARABONBA_PTR_GET_DEFAULT(tagImmutability_, false) };
    inline RepoConfiguration& setTagImmutability(bool tagImmutability) { DARABONBA_PTR_SET_VALUE(tagImmutability_, tagImmutability) };


  protected:
    shared_ptr<RepoConfiguration::ArtifactBuildRuleParameters> artifactBuildRuleParameters_ {};
    // This parameter is required.
    shared_ptr<string> repoType_ {};
    // This parameter is required.
    shared_ptr<bool> tagImmutability_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
