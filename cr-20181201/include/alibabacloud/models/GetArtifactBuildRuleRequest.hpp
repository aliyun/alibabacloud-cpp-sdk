// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARTIFACTBUILDRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETARTIFACTBUILDRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetArtifactBuildRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArtifactBuildRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_TO_JSON(BuildRuleId, buildRuleId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ScopeId, scopeId_);
      DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
    };
    friend void from_json(const Darabonba::Json& j, GetArtifactBuildRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_FROM_JSON(BuildRuleId, buildRuleId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ScopeId, scopeId_);
      DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
    };
    GetArtifactBuildRuleRequest() = default ;
    GetArtifactBuildRuleRequest(const GetArtifactBuildRuleRequest &) = default ;
    GetArtifactBuildRuleRequest(GetArtifactBuildRuleRequest &&) = default ;
    GetArtifactBuildRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArtifactBuildRuleRequest() = default ;
    GetArtifactBuildRuleRequest& operator=(const GetArtifactBuildRuleRequest &) = default ;
    GetArtifactBuildRuleRequest& operator=(GetArtifactBuildRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->artifactType_ != nullptr
        && this->buildRuleId_ != nullptr && this->instanceId_ != nullptr && this->scopeId_ != nullptr && this->scopeType_ != nullptr; };
    // artifactType Field Functions 
    bool hasArtifactType() const { return this->artifactType_ != nullptr;};
    void deleteArtifactType() { this->artifactType_ = nullptr;};
    inline string artifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
    inline GetArtifactBuildRuleRequest& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


    // buildRuleId Field Functions 
    bool hasBuildRuleId() const { return this->buildRuleId_ != nullptr;};
    void deleteBuildRuleId() { this->buildRuleId_ = nullptr;};
    inline string buildRuleId() const { DARABONBA_PTR_GET_DEFAULT(buildRuleId_, "") };
    inline GetArtifactBuildRuleRequest& setBuildRuleId(string buildRuleId) { DARABONBA_PTR_SET_VALUE(buildRuleId_, buildRuleId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetArtifactBuildRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scopeId Field Functions 
    bool hasScopeId() const { return this->scopeId_ != nullptr;};
    void deleteScopeId() { this->scopeId_ = nullptr;};
    inline string scopeId() const { DARABONBA_PTR_GET_DEFAULT(scopeId_, "") };
    inline GetArtifactBuildRuleRequest& setScopeId(string scopeId) { DARABONBA_PTR_SET_VALUE(scopeId_, scopeId) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string scopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline GetArtifactBuildRuleRequest& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


  protected:
    std::shared_ptr<string> artifactType_ = nullptr;
    std::shared_ptr<string> buildRuleId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> scopeId_ = nullptr;
    std::shared_ptr<string> scopeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
