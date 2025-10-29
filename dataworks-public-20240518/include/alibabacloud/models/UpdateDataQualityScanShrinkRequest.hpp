// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAQUALITYSCANSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAQUALITYSCANSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDataQualityScanShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataQualityScanShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ComputeResource, computeResourceShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Hooks, hooksShrink_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Parameters, parametersShrink_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResourceShrink_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Trigger, triggerShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataQualityScanShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputeResource, computeResourceShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Hooks, hooksShrink_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Parameters, parametersShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResourceShrink_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Trigger, triggerShrink_);
    };
    UpdateDataQualityScanShrinkRequest() = default ;
    UpdateDataQualityScanShrinkRequest(const UpdateDataQualityScanShrinkRequest &) = default ;
    UpdateDataQualityScanShrinkRequest(UpdateDataQualityScanShrinkRequest &&) = default ;
    UpdateDataQualityScanShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataQualityScanShrinkRequest() = default ;
    UpdateDataQualityScanShrinkRequest& operator=(const UpdateDataQualityScanShrinkRequest &) = default ;
    UpdateDataQualityScanShrinkRequest& operator=(UpdateDataQualityScanShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computeResourceShrink_ == nullptr
        && return this->description_ == nullptr && return this->hooksShrink_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->owner_ == nullptr
        && return this->parametersShrink_ == nullptr && return this->projectId_ == nullptr && return this->runtimeResourceShrink_ == nullptr && return this->spec_ == nullptr && return this->triggerShrink_ == nullptr; };
    // computeResourceShrink Field Functions 
    bool hasComputeResourceShrink() const { return this->computeResourceShrink_ != nullptr;};
    void deleteComputeResourceShrink() { this->computeResourceShrink_ = nullptr;};
    inline string computeResourceShrink() const { DARABONBA_PTR_GET_DEFAULT(computeResourceShrink_, "") };
    inline UpdateDataQualityScanShrinkRequest& setComputeResourceShrink(string computeResourceShrink) { DARABONBA_PTR_SET_VALUE(computeResourceShrink_, computeResourceShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDataQualityScanShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hooksShrink Field Functions 
    bool hasHooksShrink() const { return this->hooksShrink_ != nullptr;};
    void deleteHooksShrink() { this->hooksShrink_ = nullptr;};
    inline string hooksShrink() const { DARABONBA_PTR_GET_DEFAULT(hooksShrink_, "") };
    inline UpdateDataQualityScanShrinkRequest& setHooksShrink(string hooksShrink) { DARABONBA_PTR_SET_VALUE(hooksShrink_, hooksShrink) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateDataQualityScanShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateDataQualityScanShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline UpdateDataQualityScanShrinkRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // parametersShrink Field Functions 
    bool hasParametersShrink() const { return this->parametersShrink_ != nullptr;};
    void deleteParametersShrink() { this->parametersShrink_ = nullptr;};
    inline string parametersShrink() const { DARABONBA_PTR_GET_DEFAULT(parametersShrink_, "") };
    inline UpdateDataQualityScanShrinkRequest& setParametersShrink(string parametersShrink) { DARABONBA_PTR_SET_VALUE(parametersShrink_, parametersShrink) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateDataQualityScanShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runtimeResourceShrink Field Functions 
    bool hasRuntimeResourceShrink() const { return this->runtimeResourceShrink_ != nullptr;};
    void deleteRuntimeResourceShrink() { this->runtimeResourceShrink_ = nullptr;};
    inline string runtimeResourceShrink() const { DARABONBA_PTR_GET_DEFAULT(runtimeResourceShrink_, "") };
    inline UpdateDataQualityScanShrinkRequest& setRuntimeResourceShrink(string runtimeResourceShrink) { DARABONBA_PTR_SET_VALUE(runtimeResourceShrink_, runtimeResourceShrink) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline UpdateDataQualityScanShrinkRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // triggerShrink Field Functions 
    bool hasTriggerShrink() const { return this->triggerShrink_ != nullptr;};
    void deleteTriggerShrink() { this->triggerShrink_ = nullptr;};
    inline string triggerShrink() const { DARABONBA_PTR_GET_DEFAULT(triggerShrink_, "") };
    inline UpdateDataQualityScanShrinkRequest& setTriggerShrink(string triggerShrink) { DARABONBA_PTR_SET_VALUE(triggerShrink_, triggerShrink) };


  protected:
    // The compute engine used during execution. If it\\"s not specified, the data source connection defined in the Spec will be used.
    std::shared_ptr<string> computeResourceShrink_ = nullptr;
    // Description of the data quality monitor.
    std::shared_ptr<string> description_ = nullptr;
    // The hook configuration after the data quality monitor stops.
    std::shared_ptr<string> hooksShrink_ = nullptr;
    // The ID of the data quality monitor.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the data quality monitor.
    std::shared_ptr<string> name_ = nullptr;
    // The user ID of the owner of the data quality monitor.
    std::shared_ptr<string> owner_ = nullptr;
    // The definition of execution parameters for the data quality monitor.
    std::shared_ptr<string> parametersShrink_ = nullptr;
    // The ID of the DataWorks workspace where the data quality monitor resides. You can obtain the workspace ID by calling the [ListProjects](https://help.aliyun.com/document_detail/2852607.html) operation.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The resource group used during the execution of the data quality monitor.
    std::shared_ptr<string> runtimeResourceShrink_ = nullptr;
    // The Spec code of the data quality monitoring content. For more information, see [Data quality Spec configuration description](https://help.aliyun.com/document_detail/2963394.html).
    std::shared_ptr<string> spec_ = nullptr;
    // Trigger settings for the data quality monitor.
    std::shared_ptr<string> triggerShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
