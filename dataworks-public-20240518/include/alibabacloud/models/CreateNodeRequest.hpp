// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
    };
    CreateNodeRequest() = default ;
    CreateNodeRequest(const CreateNodeRequest &) = default ;
    CreateNodeRequest(CreateNodeRequest &&) = default ;
    CreateNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNodeRequest() = default ;
    CreateNodeRequest& operator=(const CreateNodeRequest &) = default ;
    CreateNodeRequest& operator=(CreateNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containerId_ == nullptr
        && this->projectId_ == nullptr && this->scene_ == nullptr && this->spec_ == nullptr; };
    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string getContainerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline CreateNodeRequest& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateNodeRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline CreateNodeRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline CreateNodeRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


  protected:
    // The unique identifier of a container in which you want to create the node. The container can be a workflow or a container node. Specify this parameter when you need to create the node inside a container.
    // 
    // >Notice: If this parameter is specified, the path field defined in FlowSpec becomes invalid.
    // 
    // >Notice: This field was of the Long type in SDK versions earlier than 8.0.0 and is of the String type in SDK 8.0.0 and later. **This change does not affect normal SDK usage, and the parameter is still returned in the type defined in the SDK**. Only when you upgrade across SDK version 8.0.0, the type change may cause project compilation failures, and you need to manually correct the data type.
    shared_ptr<string> containerId_ {};
    // The ID of the DataWorks workspace. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace Management page to obtain the ID.
    // 
    // This parameter specifies the DataWorks workspace for this API call operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The scenario in which the node is created. This parameter determines whether the node is created in the manual node area or the data development area. DATAWORKS_MANUAL_WORKFLOW can be used only when ContainerId is specified and the container is a manual workflow.
    // 
    // Valid values:
    // 
    // - DATAWORKS_PROJECT: project directory.
    // - DATAWORKS_MANUAL_WORKFLOW: manual workflow.
    // - DATAWORKS_MANUAL_TASK: manual task.
    // 
    // This parameter is required.
    shared_ptr<string> scene_ {};
    // The FlowSpec information that describes the node. For more information about the specification, see [FlowSpec](https://github.com/aliyun/alibabacloud-dataworks-tool-dflow).
    // 
    // > How to quickly obtain a FlowSpec template?
    // > - In DataStudio, open a node, click Versions on the right side, view the latest version, and then view the scheduling configuration. This provides the FlowSpec description for the current node. You can use the FlowSpec description in the version to quickly build a template that meets your requirements.
    // 
    // > How to specify the node content?
    // > - Specify the node content in the $.spec.nodes[*].script.content field.
    // 
    // > How to configure the content of a batch synchronization node?
    // > - Write a script by following Step 4 in [Configure a batch synchronization node by using the code editor](https://www.alibabacloud.com/help/en/dataworks/user-guide/configure-a-batch-synchronization-node-by-using-the-code-editor), and specify the content in the $.spec.nodes[*].script.content field. Alternatively, create a batch synchronization node on the page and obtain the script content by viewing the version.
    // 
    // This parameter is required.
    shared_ptr<string> spec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
