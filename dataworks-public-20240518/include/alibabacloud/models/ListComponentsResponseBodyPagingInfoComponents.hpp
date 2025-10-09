// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODYPAGINGINFOCOMPONENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTSRESPONSEBODYPAGINGINFOCOMPONENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListComponentsResponseBodyPagingInfoComponentsInputs.hpp>
#include <alibabacloud/models/ListComponentsResponseBodyPagingInfoComponentsOutputs.hpp>
#include <alibabacloud/models/ListComponentsResponseBodyPagingInfoComponentsScript.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListComponentsResponseBodyPagingInfoComponents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentsResponseBodyPagingInfoComponents& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Inputs, inputs_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Script, script_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentsResponseBodyPagingInfoComponents& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
    };
    ListComponentsResponseBodyPagingInfoComponents() = default ;
    ListComponentsResponseBodyPagingInfoComponents(const ListComponentsResponseBodyPagingInfoComponents &) = default ;
    ListComponentsResponseBodyPagingInfoComponents(ListComponentsResponseBodyPagingInfoComponents &&) = default ;
    ListComponentsResponseBodyPagingInfoComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentsResponseBodyPagingInfoComponents() = default ;
    ListComponentsResponseBodyPagingInfoComponents& operator=(const ListComponentsResponseBodyPagingInfoComponents &) = default ;
    ListComponentsResponseBodyPagingInfoComponents& operator=(ListComponentsResponseBodyPagingInfoComponents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->componentId_ != nullptr
        && this->createTime_ != nullptr && this->description_ != nullptr && this->inputs_ != nullptr && this->modifyTime_ != nullptr && this->name_ != nullptr
        && this->outputs_ != nullptr && this->owner_ != nullptr && this->projectId_ != nullptr && this->script_ != nullptr; };
    // componentId Field Functions 
    bool hasComponentId() const { return this->componentId_ != nullptr;};
    void deleteComponentId() { this->componentId_ = nullptr;};
    inline string componentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
    inline ListComponentsResponseBodyPagingInfoComponents& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListComponentsResponseBodyPagingInfoComponents& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListComponentsResponseBodyPagingInfoComponents& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline const vector<Models::ListComponentsResponseBodyPagingInfoComponentsInputs> & inputs() const { DARABONBA_PTR_GET_CONST(inputs_, vector<Models::ListComponentsResponseBodyPagingInfoComponentsInputs>) };
    inline vector<Models::ListComponentsResponseBodyPagingInfoComponentsInputs> inputs() { DARABONBA_PTR_GET(inputs_, vector<Models::ListComponentsResponseBodyPagingInfoComponentsInputs>) };
    inline ListComponentsResponseBodyPagingInfoComponents& setInputs(const vector<Models::ListComponentsResponseBodyPagingInfoComponentsInputs> & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
    inline ListComponentsResponseBodyPagingInfoComponents& setInputs(vector<Models::ListComponentsResponseBodyPagingInfoComponentsInputs> && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ListComponentsResponseBodyPagingInfoComponents& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListComponentsResponseBodyPagingInfoComponents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline const vector<Models::ListComponentsResponseBodyPagingInfoComponentsOutputs> & outputs() const { DARABONBA_PTR_GET_CONST(outputs_, vector<Models::ListComponentsResponseBodyPagingInfoComponentsOutputs>) };
    inline vector<Models::ListComponentsResponseBodyPagingInfoComponentsOutputs> outputs() { DARABONBA_PTR_GET(outputs_, vector<Models::ListComponentsResponseBodyPagingInfoComponentsOutputs>) };
    inline ListComponentsResponseBodyPagingInfoComponents& setOutputs(const vector<Models::ListComponentsResponseBodyPagingInfoComponentsOutputs> & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
    inline ListComponentsResponseBodyPagingInfoComponents& setOutputs(vector<Models::ListComponentsResponseBodyPagingInfoComponentsOutputs> && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListComponentsResponseBodyPagingInfoComponents& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListComponentsResponseBodyPagingInfoComponents& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline const Models::ListComponentsResponseBodyPagingInfoComponentsScript & script() const { DARABONBA_PTR_GET_CONST(script_, Models::ListComponentsResponseBodyPagingInfoComponentsScript) };
    inline Models::ListComponentsResponseBodyPagingInfoComponentsScript script() { DARABONBA_PTR_GET(script_, Models::ListComponentsResponseBodyPagingInfoComponentsScript) };
    inline ListComponentsResponseBodyPagingInfoComponents& setScript(const Models::ListComponentsResponseBodyPagingInfoComponentsScript & script) { DARABONBA_PTR_SET_VALUE(script_, script) };
    inline ListComponentsResponseBodyPagingInfoComponents& setScript(Models::ListComponentsResponseBodyPagingInfoComponentsScript && script) { DARABONBA_PTR_SET_RVALUE(script_, script) };


  protected:
    std::shared_ptr<string> componentId_ = nullptr;
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    std::shared_ptr<string> createTime_ = nullptr;
    // 对组件的描述
    std::shared_ptr<string> description_ = nullptr;
    // 组件的输入参数列表
    std::shared_ptr<vector<Models::ListComponentsResponseBodyPagingInfoComponentsInputs>> inputs_ = nullptr;
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    std::shared_ptr<string> modifyTime_ = nullptr;
    // 代表资源名称的资源属性字段
    std::shared_ptr<string> name_ = nullptr;
    // 组件的输出参数列表
    std::shared_ptr<vector<Models::ListComponentsResponseBodyPagingInfoComponentsOutputs>> outputs_ = nullptr;
    // 组件责任人
    std::shared_ptr<string> owner_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // 工作流的脚本信息
    std::shared_ptr<Models::ListComponentsResponseBodyPagingInfoComponentsScript> script_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
