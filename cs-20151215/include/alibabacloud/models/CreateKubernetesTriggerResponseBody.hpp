// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKUBERNETESTRIGGERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEKUBERNETESTRIGGERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateKubernetesTriggerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKubernetesTriggerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(project_id, projectId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKubernetesTriggerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(project_id, projectId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateKubernetesTriggerResponseBody() = default ;
    CreateKubernetesTriggerResponseBody(const CreateKubernetesTriggerResponseBody &) = default ;
    CreateKubernetesTriggerResponseBody(CreateKubernetesTriggerResponseBody &&) = default ;
    CreateKubernetesTriggerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKubernetesTriggerResponseBody() = default ;
    CreateKubernetesTriggerResponseBody& operator=(const CreateKubernetesTriggerResponseBody &) = default ;
    CreateKubernetesTriggerResponseBody& operator=(CreateKubernetesTriggerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->clusterId_ != nullptr && this->id_ != nullptr && this->projectId_ != nullptr && this->type_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline CreateKubernetesTriggerResponseBody& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateKubernetesTriggerResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateKubernetesTriggerResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline CreateKubernetesTriggerResponseBody& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateKubernetesTriggerResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The action that the trigger performs. For example, a value of `redeploy` indicates that the trigger redeploys the application.
    std::shared_ptr<string> action_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The ID of the trigger.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the trigger project.
    std::shared_ptr<string> projectId_ = nullptr;
    // The type of trigger.
    // 
    // Valid values:
    // 
    // *   `deployment`: performs actions on Deployments.
    // *   `application`: performs actions on applications that are deployed in Application Center.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
