// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEARTIFACTBUILDRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEARTIFACTBUILDRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateArtifactBuildRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateArtifactBuildRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_ANY_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(ScopeId, scopeId_);
      DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateArtifactBuildRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_ANY_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(ScopeId, scopeId_);
      DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
    };
    CreateArtifactBuildRuleRequest() = default ;
    CreateArtifactBuildRuleRequest(const CreateArtifactBuildRuleRequest &) = default ;
    CreateArtifactBuildRuleRequest(CreateArtifactBuildRuleRequest &&) = default ;
    CreateArtifactBuildRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateArtifactBuildRuleRequest() = default ;
    CreateArtifactBuildRuleRequest& operator=(const CreateArtifactBuildRuleRequest &) = default ;
    CreateArtifactBuildRuleRequest& operator=(CreateArtifactBuildRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifactType_ == nullptr
        && this->instanceId_ == nullptr && this->parameters_ == nullptr && this->scopeId_ == nullptr && this->scopeType_ == nullptr; };
    // artifactType Field Functions 
    bool hasArtifactType() const { return this->artifactType_ != nullptr;};
    void deleteArtifactType() { this->artifactType_ = nullptr;};
    inline string getArtifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
    inline CreateArtifactBuildRuleRequest& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateArtifactBuildRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
    inline CreateArtifactBuildRuleRequest& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline CreateArtifactBuildRuleRequest& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


    // scopeId Field Functions 
    bool hasScopeId() const { return this->scopeId_ != nullptr;};
    void deleteScopeId() { this->scopeId_ = nullptr;};
    inline string getScopeId() const { DARABONBA_PTR_GET_DEFAULT(scopeId_, "") };
    inline CreateArtifactBuildRuleRequest& setScopeId(string scopeId) { DARABONBA_PTR_SET_VALUE(scopeId_, scopeId) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline CreateArtifactBuildRuleRequest& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


  protected:
    // The type of the artifact.
    // 
    // *   `ACCELERATED_IMAGE`: accelerated images.
    // 
    // This parameter is required.
    shared_ptr<string> artifactType_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Additional parameters.
    Darabonba::Json parameters_ {};
    // The ID of the effective range of the rule.
    // 
    // *   Set the value to the ID of the image repository.
    // 
    // This parameter is required.
    shared_ptr<string> scopeId_ {};
    // The effective range of the rule. Valid values:
    // 
    // *   `REPOSITORY`
    // 
    // This parameter is required.
    shared_ptr<string> scopeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
