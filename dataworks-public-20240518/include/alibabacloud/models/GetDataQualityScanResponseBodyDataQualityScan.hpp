// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRESPONSEBODYDATAQUALITYSCAN_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRESPONSEBODYDATAQUALITYSCAN_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataQualityScanResponseBodyDataQualityScanComputeResource.hpp>
#include <vector>
#include <alibabacloud/models/GetDataQualityScanResponseBodyDataQualityScanHooks.hpp>
#include <alibabacloud/models/GetDataQualityScanResponseBodyDataQualityScanParameters.hpp>
#include <alibabacloud/models/GetDataQualityScanResponseBodyDataQualityScanRuntimeResource.hpp>
#include <alibabacloud/models/GetDataQualityScanResponseBodyDataQualityScanTrigger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityScanResponseBodyDataQualityScan : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityScanResponseBodyDataQualityScan& obj) { 
      DARABONBA_PTR_TO_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Hooks, hooks_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityScanResponseBodyDataQualityScan& obj) { 
      DARABONBA_PTR_FROM_JSON(ComputeResource, computeResource_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Hooks, hooks_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
    };
    GetDataQualityScanResponseBodyDataQualityScan() = default ;
    GetDataQualityScanResponseBodyDataQualityScan(const GetDataQualityScanResponseBodyDataQualityScan &) = default ;
    GetDataQualityScanResponseBodyDataQualityScan(GetDataQualityScanResponseBodyDataQualityScan &&) = default ;
    GetDataQualityScanResponseBodyDataQualityScan(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityScanResponseBodyDataQualityScan() = default ;
    GetDataQualityScanResponseBodyDataQualityScan& operator=(const GetDataQualityScanResponseBodyDataQualityScan &) = default ;
    GetDataQualityScanResponseBodyDataQualityScan& operator=(GetDataQualityScanResponseBodyDataQualityScan &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->computeResource_ != nullptr
        && this->createTime_ != nullptr && this->createUser_ != nullptr && this->description_ != nullptr && this->hooks_ != nullptr && this->id_ != nullptr
        && this->modifyTime_ != nullptr && this->modifyUser_ != nullptr && this->name_ != nullptr && this->owner_ != nullptr && this->parameters_ != nullptr
        && this->projectId_ != nullptr && this->runtimeResource_ != nullptr && this->spec_ != nullptr && this->trigger_ != nullptr; };
    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline const Models::GetDataQualityScanResponseBodyDataQualityScanComputeResource & computeResource() const { DARABONBA_PTR_GET_CONST(computeResource_, Models::GetDataQualityScanResponseBodyDataQualityScanComputeResource) };
    inline Models::GetDataQualityScanResponseBodyDataQualityScanComputeResource computeResource() { DARABONBA_PTR_GET(computeResource_, Models::GetDataQualityScanResponseBodyDataQualityScanComputeResource) };
    inline GetDataQualityScanResponseBodyDataQualityScan& setComputeResource(const Models::GetDataQualityScanResponseBodyDataQualityScanComputeResource & computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };
    inline GetDataQualityScanResponseBodyDataQualityScan& setComputeResource(Models::GetDataQualityScanResponseBodyDataQualityScanComputeResource && computeResource) { DARABONBA_PTR_SET_RVALUE(computeResource_, computeResource) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetDataQualityScanResponseBodyDataQualityScan& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline GetDataQualityScanResponseBodyDataQualityScan& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetDataQualityScanResponseBodyDataQualityScan& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hooks Field Functions 
    bool hasHooks() const { return this->hooks_ != nullptr;};
    void deleteHooks() { this->hooks_ = nullptr;};
    inline const vector<Models::GetDataQualityScanResponseBodyDataQualityScanHooks> & hooks() const { DARABONBA_PTR_GET_CONST(hooks_, vector<Models::GetDataQualityScanResponseBodyDataQualityScanHooks>) };
    inline vector<Models::GetDataQualityScanResponseBodyDataQualityScanHooks> hooks() { DARABONBA_PTR_GET(hooks_, vector<Models::GetDataQualityScanResponseBodyDataQualityScanHooks>) };
    inline GetDataQualityScanResponseBodyDataQualityScan& setHooks(const vector<Models::GetDataQualityScanResponseBodyDataQualityScanHooks> & hooks) { DARABONBA_PTR_SET_VALUE(hooks_, hooks) };
    inline GetDataQualityScanResponseBodyDataQualityScan& setHooks(vector<Models::GetDataQualityScanResponseBodyDataQualityScanHooks> && hooks) { DARABONBA_PTR_SET_RVALUE(hooks_, hooks) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetDataQualityScanResponseBodyDataQualityScan& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline GetDataQualityScanResponseBodyDataQualityScan& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // modifyUser Field Functions 
    bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
    void deleteModifyUser() { this->modifyUser_ = nullptr;};
    inline string modifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
    inline GetDataQualityScanResponseBodyDataQualityScan& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDataQualityScanResponseBodyDataQualityScan& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetDataQualityScanResponseBodyDataQualityScan& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<Models::GetDataQualityScanResponseBodyDataQualityScanParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Models::GetDataQualityScanResponseBodyDataQualityScanParameters>) };
    inline vector<Models::GetDataQualityScanResponseBodyDataQualityScanParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<Models::GetDataQualityScanResponseBodyDataQualityScanParameters>) };
    inline GetDataQualityScanResponseBodyDataQualityScan& setParameters(const vector<Models::GetDataQualityScanResponseBodyDataQualityScanParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetDataQualityScanResponseBodyDataQualityScan& setParameters(vector<Models::GetDataQualityScanResponseBodyDataQualityScanParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetDataQualityScanResponseBodyDataQualityScan& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runtimeResource Field Functions 
    bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
    void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
    inline const Models::GetDataQualityScanResponseBodyDataQualityScanRuntimeResource & runtimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, Models::GetDataQualityScanResponseBodyDataQualityScanRuntimeResource) };
    inline Models::GetDataQualityScanResponseBodyDataQualityScanRuntimeResource runtimeResource() { DARABONBA_PTR_GET(runtimeResource_, Models::GetDataQualityScanResponseBodyDataQualityScanRuntimeResource) };
    inline GetDataQualityScanResponseBodyDataQualityScan& setRuntimeResource(const Models::GetDataQualityScanResponseBodyDataQualityScanRuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
    inline GetDataQualityScanResponseBodyDataQualityScan& setRuntimeResource(Models::GetDataQualityScanResponseBodyDataQualityScanRuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline GetDataQualityScanResponseBodyDataQualityScan& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const Models::GetDataQualityScanResponseBodyDataQualityScanTrigger & trigger() const { DARABONBA_PTR_GET_CONST(trigger_, Models::GetDataQualityScanResponseBodyDataQualityScanTrigger) };
    inline Models::GetDataQualityScanResponseBodyDataQualityScanTrigger trigger() { DARABONBA_PTR_GET(trigger_, Models::GetDataQualityScanResponseBodyDataQualityScanTrigger) };
    inline GetDataQualityScanResponseBodyDataQualityScan& setTrigger(const Models::GetDataQualityScanResponseBodyDataQualityScanTrigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline GetDataQualityScanResponseBodyDataQualityScan& setTrigger(Models::GetDataQualityScanResponseBodyDataQualityScanTrigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


  protected:
    // The compute engine used at runtime. Optional. If not specified, the data source defined in the Spec is used.
    std::shared_ptr<Models::GetDataQualityScanResponseBodyDataQualityScanComputeResource> computeResource_ = nullptr;
    // The creation time of the data quality monitor.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the user who creates the data quality monitor.
    std::shared_ptr<string> createUser_ = nullptr;
    // The data quality monitor description.
    std::shared_ptr<string> description_ = nullptr;
    // The Hook configurations after the data quality monitoring run ends.
    std::shared_ptr<vector<Models::GetDataQualityScanResponseBodyDataQualityScanHooks>> hooks_ = nullptr;
    // The data quality monitoring ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Last modified time of the data quality monitor.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The ID of the user who last modifies the data quality monitor.
    std::shared_ptr<string> modifyUser_ = nullptr;
    // The data quality monitor name.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the user who owns the data quality monitor.
    std::shared_ptr<string> owner_ = nullptr;
    // The definition of execution parameters for the data quality monitor.
    std::shared_ptr<vector<Models::GetDataQualityScanResponseBodyDataQualityScanParameters>> parameters_ = nullptr;
    // The workspace ID where the data quality monitor resides. You can obtain the workspace ID by calling the [ListProjects](https://help.aliyun.com/document_detail/2780068.html) operation.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The resource group used during the running of the data quality monitor.
    std::shared_ptr<Models::GetDataQualityScanResponseBodyDataQualityScanRuntimeResource> runtimeResource_ = nullptr;
    // Spec code for the content of the data quality monitoring.
    std::shared_ptr<string> spec_ = nullptr;
    // The trigger configurations of the data quality monitoring task.
    std::shared_ptr<Models::GetDataQualityScanResponseBodyDataQualityScanTrigger> trigger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
