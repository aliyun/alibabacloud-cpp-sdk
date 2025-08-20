// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEARTIFACTBUILDRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEARTIFACTBUILDRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateArtifactBuildRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateArtifactBuildRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Parameters, parametersShrink_);
      DARABONBA_PTR_TO_JSON(ScopeId, scopeId_);
      DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateArtifactBuildRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Parameters, parametersShrink_);
      DARABONBA_PTR_FROM_JSON(ScopeId, scopeId_);
      DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
    };
    CreateArtifactBuildRuleShrinkRequest() = default ;
    CreateArtifactBuildRuleShrinkRequest(const CreateArtifactBuildRuleShrinkRequest &) = default ;
    CreateArtifactBuildRuleShrinkRequest(CreateArtifactBuildRuleShrinkRequest &&) = default ;
    CreateArtifactBuildRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateArtifactBuildRuleShrinkRequest() = default ;
    CreateArtifactBuildRuleShrinkRequest& operator=(const CreateArtifactBuildRuleShrinkRequest &) = default ;
    CreateArtifactBuildRuleShrinkRequest& operator=(CreateArtifactBuildRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->artifactType_ != nullptr
        && this->instanceId_ != nullptr && this->parametersShrink_ != nullptr && this->scopeId_ != nullptr && this->scopeType_ != nullptr; };
    // artifactType Field Functions 
    bool hasArtifactType() const { return this->artifactType_ != nullptr;};
    void deleteArtifactType() { this->artifactType_ = nullptr;};
    inline string artifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
    inline CreateArtifactBuildRuleShrinkRequest& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateArtifactBuildRuleShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // parametersShrink Field Functions 
    bool hasParametersShrink() const { return this->parametersShrink_ != nullptr;};
    void deleteParametersShrink() { this->parametersShrink_ = nullptr;};
    inline string parametersShrink() const { DARABONBA_PTR_GET_DEFAULT(parametersShrink_, "") };
    inline CreateArtifactBuildRuleShrinkRequest& setParametersShrink(string parametersShrink) { DARABONBA_PTR_SET_VALUE(parametersShrink_, parametersShrink) };


    // scopeId Field Functions 
    bool hasScopeId() const { return this->scopeId_ != nullptr;};
    void deleteScopeId() { this->scopeId_ = nullptr;};
    inline string scopeId() const { DARABONBA_PTR_GET_DEFAULT(scopeId_, "") };
    inline CreateArtifactBuildRuleShrinkRequest& setScopeId(string scopeId) { DARABONBA_PTR_SET_VALUE(scopeId_, scopeId) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string scopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline CreateArtifactBuildRuleShrinkRequest& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


  protected:
    // The type of the artifact.
    // 
    // *   `ACCELERATED_IMAGE`: accelerated images.
    // 
    // This parameter is required.
    std::shared_ptr<string> artifactType_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Additional parameters.
    std::shared_ptr<string> parametersShrink_ = nullptr;
    // The ID of the effective range of the rule.
    // 
    // *   Set the value to the ID of the image repository.
    // 
    // This parameter is required.
    std::shared_ptr<string> scopeId_ = nullptr;
    // The effective range of the rule. Valid values:
    // 
    // *   `REPOSITORY`
    // 
    // This parameter is required.
    std::shared_ptr<string> scopeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
