// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRIGGERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRIGGERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateTriggerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTriggerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(project_id, projectId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTriggerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(project_id, projectId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateTriggerRequest() = default ;
    CreateTriggerRequest(const CreateTriggerRequest &) = default ;
    CreateTriggerRequest(CreateTriggerRequest &&) = default ;
    CreateTriggerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTriggerRequest() = default ;
    CreateTriggerRequest& operator=(const CreateTriggerRequest &) = default ;
    CreateTriggerRequest& operator=(CreateTriggerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->clusterId_ == nullptr && return this->projectId_ == nullptr && return this->type_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline CreateTriggerRequest& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateTriggerRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline CreateTriggerRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateTriggerRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The action that the trigger performs. Set the value to redeploy.
    // 
    // `redeploy`: redeploys the resources specified by `project_id`.
    // 
    // This parameter is required.
    std::shared_ptr<string> action_ = nullptr;
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the trigger project.
    // 
    // The name consists of the namespace where the application is deployed and the name of the application. The format is `${namespace}/${name}`.
    // 
    // Example: `default/test-app`.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectId_ = nullptr;
    // The type of trigger. Valid values:
    // 
    // *   `deployment`: performs actions on Deployments.
    // *   `application`: performs actions on applications that are deployed in Application Center.
    // 
    // Default value: `deployment`.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
