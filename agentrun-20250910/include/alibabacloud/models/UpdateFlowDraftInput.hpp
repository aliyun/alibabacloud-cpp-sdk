// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFLOWDRAFTINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFLOWDRAFTINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EnvironmentConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class UpdateFlowDraftInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFlowDraftInput& obj) { 
      DARABONBA_PTR_TO_JSON(definition, definition_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(environmentConfiguration, environmentConfiguration_);
      DARABONBA_PTR_TO_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_TO_JSON(externalStorageLocation, externalStorageLocation_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFlowDraftInput& obj) { 
      DARABONBA_PTR_FROM_JSON(definition, definition_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(environmentConfiguration, environmentConfiguration_);
      DARABONBA_PTR_FROM_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_FROM_JSON(externalStorageLocation, externalStorageLocation_);
    };
    UpdateFlowDraftInput() = default ;
    UpdateFlowDraftInput(const UpdateFlowDraftInput &) = default ;
    UpdateFlowDraftInput(UpdateFlowDraftInput &&) = default ;
    UpdateFlowDraftInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFlowDraftInput() = default ;
    UpdateFlowDraftInput& operator=(const UpdateFlowDraftInput &) = default ;
    UpdateFlowDraftInput& operator=(UpdateFlowDraftInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->definition_ == nullptr
        && this->description_ == nullptr && this->environmentConfiguration_ == nullptr && this->executionRoleArn_ == nullptr && this->externalStorageLocation_ == nullptr; };
    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline string getDefinition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
    inline UpdateFlowDraftInput& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateFlowDraftInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // environmentConfiguration Field Functions 
    bool hasEnvironmentConfiguration() const { return this->environmentConfiguration_ != nullptr;};
    void deleteEnvironmentConfiguration() { this->environmentConfiguration_ = nullptr;};
    inline const EnvironmentConfiguration & getEnvironmentConfiguration() const { DARABONBA_PTR_GET_CONST(environmentConfiguration_, EnvironmentConfiguration) };
    inline EnvironmentConfiguration getEnvironmentConfiguration() { DARABONBA_PTR_GET(environmentConfiguration_, EnvironmentConfiguration) };
    inline UpdateFlowDraftInput& setEnvironmentConfiguration(const EnvironmentConfiguration & environmentConfiguration) { DARABONBA_PTR_SET_VALUE(environmentConfiguration_, environmentConfiguration) };
    inline UpdateFlowDraftInput& setEnvironmentConfiguration(EnvironmentConfiguration && environmentConfiguration) { DARABONBA_PTR_SET_RVALUE(environmentConfiguration_, environmentConfiguration) };


    // executionRoleArn Field Functions 
    bool hasExecutionRoleArn() const { return this->executionRoleArn_ != nullptr;};
    void deleteExecutionRoleArn() { this->executionRoleArn_ = nullptr;};
    inline string getExecutionRoleArn() const { DARABONBA_PTR_GET_DEFAULT(executionRoleArn_, "") };
    inline UpdateFlowDraftInput& setExecutionRoleArn(string executionRoleArn) { DARABONBA_PTR_SET_VALUE(executionRoleArn_, executionRoleArn) };


    // externalStorageLocation Field Functions 
    bool hasExternalStorageLocation() const { return this->externalStorageLocation_ != nullptr;};
    void deleteExternalStorageLocation() { this->externalStorageLocation_ = nullptr;};
    inline string getExternalStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(externalStorageLocation_, "") };
    inline UpdateFlowDraftInput& setExternalStorageLocation(string externalStorageLocation) { DARABONBA_PTR_SET_VALUE(externalStorageLocation_, externalStorageLocation) };


  protected:
    // 工作流的 FDL 定义
    shared_ptr<string> definition_ {};
    // 工作流的描述信息
    shared_ptr<string> description_ {};
    // 工作流执行期间可以访问的环境变量配置，包含一组命名变量列表
    shared_ptr<EnvironmentConfiguration> environmentConfiguration_ {};
    // 工作流执行时使用的 RAM 角色 ARN
    shared_ptr<string> executionRoleArn_ {};
    // 工作流执行历史的外部存储位置
    shared_ptr<string> externalStorageLocation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
