// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYSCANSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYSCANSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataQualityScanShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityScanShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ComputeResource, computeResourceShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Hooks, hooksShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Parameters, parametersShrink_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResourceShrink_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Trigger, triggerShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityScanShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ComputeResource, computeResourceShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Hooks, hooksShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Parameters, parametersShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResourceShrink_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Trigger, triggerShrink_);
    };
    CreateDataQualityScanShrinkRequest() = default ;
    CreateDataQualityScanShrinkRequest(const CreateDataQualityScanShrinkRequest &) = default ;
    CreateDataQualityScanShrinkRequest(CreateDataQualityScanShrinkRequest &&) = default ;
    CreateDataQualityScanShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityScanShrinkRequest() = default ;
    CreateDataQualityScanShrinkRequest& operator=(const CreateDataQualityScanShrinkRequest &) = default ;
    CreateDataQualityScanShrinkRequest& operator=(CreateDataQualityScanShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->computeResourceShrink_ == nullptr && return this->description_ == nullptr && return this->hooksShrink_ == nullptr && return this->name_ == nullptr && return this->owner_ == nullptr
        && return this->parametersShrink_ == nullptr && return this->projectId_ == nullptr && return this->runtimeResourceShrink_ == nullptr && return this->spec_ == nullptr && return this->triggerShrink_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDataQualityScanShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // computeResourceShrink Field Functions 
    bool hasComputeResourceShrink() const { return this->computeResourceShrink_ != nullptr;};
    void deleteComputeResourceShrink() { this->computeResourceShrink_ = nullptr;};
    inline string computeResourceShrink() const { DARABONBA_PTR_GET_DEFAULT(computeResourceShrink_, "") };
    inline CreateDataQualityScanShrinkRequest& setComputeResourceShrink(string computeResourceShrink) { DARABONBA_PTR_SET_VALUE(computeResourceShrink_, computeResourceShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDataQualityScanShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hooksShrink Field Functions 
    bool hasHooksShrink() const { return this->hooksShrink_ != nullptr;};
    void deleteHooksShrink() { this->hooksShrink_ = nullptr;};
    inline string hooksShrink() const { DARABONBA_PTR_GET_DEFAULT(hooksShrink_, "") };
    inline CreateDataQualityScanShrinkRequest& setHooksShrink(string hooksShrink) { DARABONBA_PTR_SET_VALUE(hooksShrink_, hooksShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDataQualityScanShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline CreateDataQualityScanShrinkRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // parametersShrink Field Functions 
    bool hasParametersShrink() const { return this->parametersShrink_ != nullptr;};
    void deleteParametersShrink() { this->parametersShrink_ = nullptr;};
    inline string parametersShrink() const { DARABONBA_PTR_GET_DEFAULT(parametersShrink_, "") };
    inline CreateDataQualityScanShrinkRequest& setParametersShrink(string parametersShrink) { DARABONBA_PTR_SET_VALUE(parametersShrink_, parametersShrink) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDataQualityScanShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runtimeResourceShrink Field Functions 
    bool hasRuntimeResourceShrink() const { return this->runtimeResourceShrink_ != nullptr;};
    void deleteRuntimeResourceShrink() { this->runtimeResourceShrink_ = nullptr;};
    inline string runtimeResourceShrink() const { DARABONBA_PTR_GET_DEFAULT(runtimeResourceShrink_, "") };
    inline CreateDataQualityScanShrinkRequest& setRuntimeResourceShrink(string runtimeResourceShrink) { DARABONBA_PTR_SET_VALUE(runtimeResourceShrink_, runtimeResourceShrink) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline CreateDataQualityScanShrinkRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // triggerShrink Field Functions 
    bool hasTriggerShrink() const { return this->triggerShrink_ != nullptr;};
    void deleteTriggerShrink() { this->triggerShrink_ = nullptr;};
    inline string triggerShrink() const { DARABONBA_PTR_GET_DEFAULT(triggerShrink_, "") };
    inline CreateDataQualityScanShrinkRequest& setTriggerShrink(string triggerShrink) { DARABONBA_PTR_SET_VALUE(triggerShrink_, triggerShrink) };


  protected:
    // The idempotency token.
    // 
    // This parameter is required.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The compute engine used at runtime. If not specified, the data source defined in the Spec is used.
    std::shared_ptr<string> computeResourceShrink_ = nullptr;
    // The description of the data quality monitor.
    std::shared_ptr<string> description_ = nullptr;
    // The Hook configurations after the data quality monitoring run ends.
    std::shared_ptr<string> hooksShrink_ = nullptr;
    // The data quality monitoring name.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the user who owns of the data quality monitor.
    std::shared_ptr<string> owner_ = nullptr;
    // The definition of execution parameters for the data quality monitoring.
    std::shared_ptr<string> parametersShrink_ = nullptr;
    // The DataWorks workspace ID. You can log on to the DataWorks console and go to the workspace configuration page to obtain the workspace ID. This parameter is required to specify the target DataWorks workspace for this API operation.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The resource group used during execution of the data quality monitoring.
    std::shared_ptr<string> runtimeResourceShrink_ = nullptr;
    // Spec code for the content of the data quality monitoring.
    std::shared_ptr<string> spec_ = nullptr;
    // The trigger configurations of the data quality monitoring task.
    std::shared_ptr<string> triggerShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
