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
    // Specify this parameter if you want to create the node inside a container. This parameter represents the unique identifier of the container, which can be a workflow or a container node.
    // 
    // >  If this parameter is specified, the path field defined in FlowSpec is ignored.
    // 
    // >  Prior to SDK version 8.0.0, this field is of type Long. In SDK version 8.0.0 and later, it is of type String. This change does not affect the normal use of the SDK. The parameter is returned based on the type defined in the SDK. Compilation failures caused by the type change may occur only when you upgrade the SDK across version 8.0.0. In this case, you must manually update the data type.
    shared_ptr<string> containerId_ {};
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to query the ID.
    // 
    // You must configure this parameter to specify the DataWorks workspace to which the API operation is applied.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // Specify this parameter if you want to create the node inside a container. This parameter represents the unique identifier of the container, which can be a workflow or a container node.
    // 
    // >  If this parameter is specified, the path field defined in FlowSpec is ignored.
    // 
    // >  Prior to SDK version 8.0.0, this field is of type Long. In SDK version 8.0.0 and later, it is of type String. This change does not affect the normal use of the SDK. The parameter is returned based on the type defined in the SDK. Compilation failures caused by the type change may occur only when you upgrade the SDK across version 8.0.0. In this case, you must manually update the data type.
    // 
    // This parameter is required.
    shared_ptr<string> scene_ {};
    // The FlowSpec information that describes the node. For more information, see [FlowSpec](https://github.com/aliyun/alibabacloud-dataworks-tool-dflow).
    // 
    // >  How do I quickly obtain a FlowSpec template?
    // 
    // *   Go to Data Studio, open a node, click Version on the right side, find the latest version, and then click Scheduling Settings to obtain the FlowSpec description of the current node. You can use the FlowSpec description in the version to quickly build a template that meets your requirements.
    // 
    // >  How do I configure the node content?
    // 
    // *   Enter the code for the node in the $.spec.nodes[].script.content field.
    // 
    // >  How do I configure a batch synchronization node?
    // 
    // *   Write the script by referring to Step 4 in [Configure an offline sync task in the code editor](https://help.aliyun.com/zh/dataworks/user-guide/configure-a-batch-synchronization-node-by-using-the-code-editor), and then enter the script content in the $.spec.nodes[\\*].script.content field. Alternatively, you can create a batch synchronization node in the console and view its version information to obtain the script content.
    // 
    // This parameter is required.
    shared_ptr<string> spec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
