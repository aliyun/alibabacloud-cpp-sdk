// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNRESPONSEBODYDATAQUALITYSCANRUNSCAN_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNRESPONSEBODYDATAQUALITYSCANRUNSCAN_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResource.hpp>
#include <vector>
#include <alibabacloud/models/GetDataQualityScanRunResponseBodyDataQualityScanRunScanHooks.hpp>
#include <alibabacloud/models/GetDataQualityScanRunResponseBodyDataQualityScanRunScanParameters.hpp>
#include <alibabacloud/models/GetDataQualityScanRunResponseBodyDataQualityScanRunScanRuntimeResource.hpp>
#include <alibabacloud/models/GetDataQualityScanRunResponseBodyDataQualityScanRunScanTrigger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityScanRunResponseBodyDataQualityScanRunScan : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityScanRunResponseBodyDataQualityScanRunScan& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetDataQualityScanRunResponseBodyDataQualityScanRunScan& obj) { 
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
    GetDataQualityScanRunResponseBodyDataQualityScanRunScan() = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunScan(const GetDataQualityScanRunResponseBodyDataQualityScanRunScan &) = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunScan(GetDataQualityScanRunResponseBodyDataQualityScanRunScan &&) = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunScan(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityScanRunResponseBodyDataQualityScanRunScan() = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunScan& operator=(const GetDataQualityScanRunResponseBodyDataQualityScanRunScan &) = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunScan& operator=(GetDataQualityScanRunResponseBodyDataQualityScanRunScan &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computeResource_ == nullptr
        && return this->createTime_ == nullptr && return this->createUser_ == nullptr && return this->description_ == nullptr && return this->hooks_ == nullptr && return this->id_ == nullptr
        && return this->modifyTime_ == nullptr && return this->modifyUser_ == nullptr && return this->name_ == nullptr && return this->owner_ == nullptr && return this->parameters_ == nullptr
        && return this->projectId_ == nullptr && return this->runtimeResource_ == nullptr && return this->spec_ == nullptr && return this->trigger_ == nullptr; };
    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline const Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResource & computeResource() const { DARABONBA_PTR_GET_CONST(computeResource_, Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResource) };
    inline Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResource computeResource() { DARABONBA_PTR_GET(computeResource_, Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResource) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScan& setComputeResource(const Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResource & computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScan& setComputeResource(Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResource && computeResource) { DARABONBA_PTR_SET_RVALUE(computeResource_, computeResource) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScan& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScan& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScan& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hooks Field Functions 
    bool hasHooks() const { return this->hooks_ != nullptr;};
    void deleteHooks() { this->hooks_ = nullptr;};
    inline const vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanHooks> & hooks() const { DARABONBA_PTR_GET_CONST(hooks_, vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanHooks>) };
    inline vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanHooks> hooks() { DARABONBA_PTR_GET(hooks_, vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanHooks>) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScan& setHooks(const vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanHooks> & hooks) { DARABONBA_PTR_SET_VALUE(hooks_, hooks) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScan& setHooks(vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanHooks> && hooks) { DARABONBA_PTR_SET_RVALUE(hooks_, hooks) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScan& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScan& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // modifyUser Field Functions 
    bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
    void deleteModifyUser() { this->modifyUser_ = nullptr;};
    inline string modifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScan& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScan& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScan& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanParameters>) };
    inline vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanParameters>) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScan& setParameters(const vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScan& setParameters(vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScan& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runtimeResource Field Functions 
    bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
    void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
    inline const Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanRuntimeResource & runtimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanRuntimeResource) };
    inline Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanRuntimeResource runtimeResource() { DARABONBA_PTR_GET(runtimeResource_, Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanRuntimeResource) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScan& setRuntimeResource(const Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanRuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScan& setRuntimeResource(Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanRuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScan& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanTrigger & trigger() const { DARABONBA_PTR_GET_CONST(trigger_, Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanTrigger) };
    inline Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanTrigger trigger() { DARABONBA_PTR_GET(trigger_, Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanTrigger) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScan& setTrigger(const Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanTrigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScan& setTrigger(Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanTrigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


  protected:
    // The computing resource settings of the data quality monitor.
    std::shared_ptr<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResource> computeResource_ = nullptr;
    // The creation time of the data quality monitor.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The creator of the data quality monitor.
    std::shared_ptr<string> createUser_ = nullptr;
    // The description of the data quality validation task. Maximum length: 65,535 characters.
    std::shared_ptr<string> description_ = nullptr;
    // The hook configurations after the data quality monitor stops.
    std::shared_ptr<vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanHooks>> hooks_ = nullptr;
    // The data quality monitor ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The last update time of the data quality monitor.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The last updater of the data quality monitor.
    std::shared_ptr<string> modifyUser_ = nullptr;
    // The name of the data quality validation task. It can contain digits, letters, Chinese characters, and both half-width and full-width punctuation marks, with a maximum length of 255 characters.
    std::shared_ptr<string> name_ = nullptr;
    // The owner of the data quality monitor.
    std::shared_ptr<string> owner_ = nullptr;
    // The parameter settings of the data quality monitor.
    std::shared_ptr<vector<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanParameters>> parameters_ = nullptr;
    // The project ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The resource group used for running the data quality monitor.
    std::shared_ptr<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanRuntimeResource> runtimeResource_ = nullptr;
    // The data quality monitor Spec. For more information, see [Data quality Spec configuration description](https://help.aliyun.com/document_detail/2963394.html).
    std::shared_ptr<string> spec_ = nullptr;
    // The trigger configurations of the data quality monitor.
    std::shared_ptr<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanTrigger> trigger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
