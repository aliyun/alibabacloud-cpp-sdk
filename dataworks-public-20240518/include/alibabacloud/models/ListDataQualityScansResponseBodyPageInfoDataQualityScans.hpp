// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYSCANSRESPONSEBODYPAGEINFODATAQUALITYSCANS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYSCANSRESPONSEBODYPAGEINFODATAQUALITYSCANS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResource.hpp>
#include <vector>
#include <alibabacloud/models/ListDataQualityScansResponseBodyPageInfoDataQualityScansHooks.hpp>
#include <alibabacloud/models/ListDataQualityScansResponseBodyPageInfoDataQualityScansParameters.hpp>
#include <alibabacloud/models/ListDataQualityScansResponseBodyPageInfoDataQualityScansRuntimeResource.hpp>
#include <alibabacloud/models/ListDataQualityScansResponseBodyPageInfoDataQualityScansTrigger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityScansResponseBodyPageInfoDataQualityScans : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityScansResponseBodyPageInfoDataQualityScans& obj) { 
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
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityScansResponseBodyPageInfoDataQualityScans& obj) { 
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
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
    };
    ListDataQualityScansResponseBodyPageInfoDataQualityScans() = default ;
    ListDataQualityScansResponseBodyPageInfoDataQualityScans(const ListDataQualityScansResponseBodyPageInfoDataQualityScans &) = default ;
    ListDataQualityScansResponseBodyPageInfoDataQualityScans(ListDataQualityScansResponseBodyPageInfoDataQualityScans &&) = default ;
    ListDataQualityScansResponseBodyPageInfoDataQualityScans(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityScansResponseBodyPageInfoDataQualityScans() = default ;
    ListDataQualityScansResponseBodyPageInfoDataQualityScans& operator=(const ListDataQualityScansResponseBodyPageInfoDataQualityScans &) = default ;
    ListDataQualityScansResponseBodyPageInfoDataQualityScans& operator=(ListDataQualityScansResponseBodyPageInfoDataQualityScans &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computeResource_ == nullptr
        && return this->createTime_ == nullptr && return this->createUser_ == nullptr && return this->description_ == nullptr && return this->hooks_ == nullptr && return this->id_ == nullptr
        && return this->modifyTime_ == nullptr && return this->modifyUser_ == nullptr && return this->name_ == nullptr && return this->owner_ == nullptr && return this->parameters_ == nullptr
        && return this->projectId_ == nullptr && return this->runtimeResource_ == nullptr && return this->trigger_ == nullptr; };
    // computeResource Field Functions 
    bool hasComputeResource() const { return this->computeResource_ != nullptr;};
    void deleteComputeResource() { this->computeResource_ = nullptr;};
    inline const Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResource & computeResource() const { DARABONBA_PTR_GET_CONST(computeResource_, Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResource) };
    inline Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResource computeResource() { DARABONBA_PTR_GET(computeResource_, Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResource) };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScans& setComputeResource(const Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResource & computeResource) { DARABONBA_PTR_SET_VALUE(computeResource_, computeResource) };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScans& setComputeResource(Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResource && computeResource) { DARABONBA_PTR_SET_RVALUE(computeResource_, computeResource) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScans& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScans& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScans& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hooks Field Functions 
    bool hasHooks() const { return this->hooks_ != nullptr;};
    void deleteHooks() { this->hooks_ = nullptr;};
    inline const vector<Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansHooks> & hooks() const { DARABONBA_PTR_GET_CONST(hooks_, vector<Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansHooks>) };
    inline vector<Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansHooks> hooks() { DARABONBA_PTR_GET(hooks_, vector<Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansHooks>) };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScans& setHooks(const vector<Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansHooks> & hooks) { DARABONBA_PTR_SET_VALUE(hooks_, hooks) };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScans& setHooks(vector<Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansHooks> && hooks) { DARABONBA_PTR_SET_RVALUE(hooks_, hooks) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScans& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScans& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // modifyUser Field Functions 
    bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
    void deleteModifyUser() { this->modifyUser_ = nullptr;};
    inline string modifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScans& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScans& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScans& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansParameters>) };
    inline vector<Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansParameters>) };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScans& setParameters(const vector<Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScans& setParameters(vector<Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScans& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runtimeResource Field Functions 
    bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
    void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
    inline const Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansRuntimeResource & runtimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansRuntimeResource) };
    inline Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansRuntimeResource runtimeResource() { DARABONBA_PTR_GET(runtimeResource_, Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansRuntimeResource) };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScans& setRuntimeResource(const Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansRuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScans& setRuntimeResource(Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansRuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansTrigger & trigger() const { DARABONBA_PTR_GET_CONST(trigger_, Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansTrigger) };
    inline Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansTrigger trigger() { DARABONBA_PTR_GET(trigger_, Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansTrigger) };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScans& setTrigger(const Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansTrigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScans& setTrigger(Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansTrigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


  protected:
    // The compute engine used during execution. If it is not specified, the data source connection defined in the Spec will be used.
    std::shared_ptr<Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResource> computeResource_ = nullptr;
    // The creation time of the data quality monitor.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The creator of the data quality monitor.
    std::shared_ptr<string> createUser_ = nullptr;
    // The description of the data quality scan task. Maximum length: 65,535 characters.
    std::shared_ptr<string> description_ = nullptr;
    // The hook configuration after the data quality monitor stops.
    std::shared_ptr<vector<Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansHooks>> hooks_ = nullptr;
    // The ID of the data quality monitor.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Last update time of the data quality monitor.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The user ID of the last person who updated the data quality monitor.
    std::shared_ptr<string> modifyUser_ = nullptr;
    // The name of the data quality scan task. Can include digits, letters, Chinese characters, and both half-width and full-width punctuation marks. Maximum length: 255 characters.
    std::shared_ptr<string> name_ = nullptr;
    // The user ID of the owner responsible for the data quality monitor.
    std::shared_ptr<string> owner_ = nullptr;
    // Execution parameter definitions for the data quality monitor.
    std::shared_ptr<vector<Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansParameters>> parameters_ = nullptr;
    // The project ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The resource group used during the execution of the data quality monitor.
    std::shared_ptr<Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansRuntimeResource> runtimeResource_ = nullptr;
    // Trigger settings for the data quality monitor.
    std::shared_ptr<Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansTrigger> trigger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
