// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRIGGERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRIGGERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeTriggerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTriggerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(project_id, projectId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(token, token_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTriggerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(project_id, projectId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(token, token_);
    };
    DescribeTriggerResponseBody() = default ;
    DescribeTriggerResponseBody(const DescribeTriggerResponseBody &) = default ;
    DescribeTriggerResponseBody(DescribeTriggerResponseBody &&) = default ;
    DescribeTriggerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTriggerResponseBody() = default ;
    DescribeTriggerResponseBody& operator=(const DescribeTriggerResponseBody &) = default ;
    DescribeTriggerResponseBody& operator=(DescribeTriggerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->name_ != nullptr && this->clusterId_ != nullptr && this->projectId_ != nullptr && this->type_ != nullptr && this->action_ != nullptr
        && this->token_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeTriggerResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeTriggerResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeTriggerResponseBody& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline DescribeTriggerResponseBody& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeTriggerResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline DescribeTriggerResponseBody& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline DescribeTriggerResponseBody& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // The ID of the trigger.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the trigger.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the associated cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the project.
    // 
    // The name consists of the namespace where the application is deployed and the name of the application. The format is `${namespace}/${name}`. Example: default/test-app.
    std::shared_ptr<string> projectId_ = nullptr;
    // The type of trigger.
    // 
    // Valid values:
    // 
    // *   `deployment`: performs actions on Deployments.
    // *   `application`: performs actions on applications that are deployed in Application Center.
    // 
    // Default value: `deployment`.
    std::shared_ptr<string> type_ = nullptr;
    // The action that the trigger performs. The value is set to redeploy.
    // 
    // `redeploy`: redeploys the resource specified by project_id.
    std::shared_ptr<string> action_ = nullptr;
    // The token information.
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
