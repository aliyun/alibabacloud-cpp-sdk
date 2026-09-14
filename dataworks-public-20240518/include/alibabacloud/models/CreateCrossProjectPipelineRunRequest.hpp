// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECROSSPROJECTPIPELINERUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECROSSPROJECTPIPELINERUNREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateCrossProjectPipelineRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCrossProjectPipelineRunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeploymentEnvironmentId, deploymentEnvironmentId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ObjectIds, objectIds_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCrossProjectPipelineRunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeploymentEnvironmentId, deploymentEnvironmentId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ObjectIds, objectIds_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateCrossProjectPipelineRunRequest() = default ;
    CreateCrossProjectPipelineRunRequest(const CreateCrossProjectPipelineRunRequest &) = default ;
    CreateCrossProjectPipelineRunRequest(CreateCrossProjectPipelineRunRequest &&) = default ;
    CreateCrossProjectPipelineRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCrossProjectPipelineRunRequest() = default ;
    CreateCrossProjectPipelineRunRequest& operator=(const CreateCrossProjectPipelineRunRequest &) = default ;
    CreateCrossProjectPipelineRunRequest& operator=(CreateCrossProjectPipelineRunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deploymentEnvironmentId_ == nullptr
        && this->description_ == nullptr && this->objectIds_ == nullptr && this->projectId_ == nullptr && this->type_ == nullptr; };
    // deploymentEnvironmentId Field Functions 
    bool hasDeploymentEnvironmentId() const { return this->deploymentEnvironmentId_ != nullptr;};
    void deleteDeploymentEnvironmentId() { this->deploymentEnvironmentId_ = nullptr;};
    inline int64_t getDeploymentEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentEnvironmentId_, 0L) };
    inline CreateCrossProjectPipelineRunRequest& setDeploymentEnvironmentId(int64_t deploymentEnvironmentId) { DARABONBA_PTR_SET_VALUE(deploymentEnvironmentId_, deploymentEnvironmentId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCrossProjectPipelineRunRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // objectIds Field Functions 
    bool hasObjectIds() const { return this->objectIds_ != nullptr;};
    void deleteObjectIds() { this->objectIds_ = nullptr;};
    inline const vector<string> & getObjectIds() const { DARABONBA_PTR_GET_CONST(objectIds_, vector<string>) };
    inline vector<string> getObjectIds() { DARABONBA_PTR_GET(objectIds_, vector<string>) };
    inline CreateCrossProjectPipelineRunRequest& setObjectIds(const vector<string> & objectIds) { DARABONBA_PTR_SET_VALUE(objectIds_, objectIds) };
    inline CreateCrossProjectPipelineRunRequest& setObjectIds(vector<string> && objectIds) { DARABONBA_PTR_SET_RVALUE(objectIds_, objectIds) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateCrossProjectPipelineRunRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateCrossProjectPipelineRunRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The cross-workspace deployment environment ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> deploymentEnvironmentId_ {};
    // The deployment description.
    shared_ptr<string> description_ {};
    // The list of top-level object IDs from the source project to deploy. The list must contain exactly one object. Child objects of composite objects such as workflows are automatically included by the system.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> objectIds_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The deployment type. Valid values:
    // 
    // - Offline: Offline deployment.
    // - Online: Online deployment.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
