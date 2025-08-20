// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPOCONFIGURATIONARTIFACTBUILDRULEPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_REPOCONFIGURATIONARTIFACTBUILDRULEPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class RepoConfigurationArtifactBuildRuleParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RepoConfigurationArtifactBuildRuleParameters& obj) { 
      DARABONBA_PTR_TO_JSON(ImageIndexOnly, imageIndexOnly_);
    };
    friend void from_json(const Darabonba::Json& j, RepoConfigurationArtifactBuildRuleParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageIndexOnly, imageIndexOnly_);
    };
    RepoConfigurationArtifactBuildRuleParameters() = default ;
    RepoConfigurationArtifactBuildRuleParameters(const RepoConfigurationArtifactBuildRuleParameters &) = default ;
    RepoConfigurationArtifactBuildRuleParameters(RepoConfigurationArtifactBuildRuleParameters &&) = default ;
    RepoConfigurationArtifactBuildRuleParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RepoConfigurationArtifactBuildRuleParameters() = default ;
    RepoConfigurationArtifactBuildRuleParameters& operator=(const RepoConfigurationArtifactBuildRuleParameters &) = default ;
    RepoConfigurationArtifactBuildRuleParameters& operator=(RepoConfigurationArtifactBuildRuleParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageIndexOnly_ != nullptr; };
    // imageIndexOnly Field Functions 
    bool hasImageIndexOnly() const { return this->imageIndexOnly_ != nullptr;};
    void deleteImageIndexOnly() { this->imageIndexOnly_ = nullptr;};
    inline bool imageIndexOnly() const { DARABONBA_PTR_GET_DEFAULT(imageIndexOnly_, false) };
    inline RepoConfigurationArtifactBuildRuleParameters& setImageIndexOnly(bool imageIndexOnly) { DARABONBA_PTR_SET_VALUE(imageIndexOnly_, imageIndexOnly) };


  protected:
    // This parameter is required.
    std::shared_ptr<bool> imageIndexOnly_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
