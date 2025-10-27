// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateFlowRequestEnvironment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class CreateFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Definition, definition_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(ExecutionMode, executionMode_);
      DARABONBA_PTR_TO_JSON(ExternalStorageLocation, externalStorageLocation_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Definition, definition_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(ExecutionMode, executionMode_);
      DARABONBA_PTR_FROM_JSON(ExternalStorageLocation, externalStorageLocation_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateFlowRequest() = default ;
    CreateFlowRequest(const CreateFlowRequest &) = default ;
    CreateFlowRequest(CreateFlowRequest &&) = default ;
    CreateFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFlowRequest() = default ;
    CreateFlowRequest& operator=(const CreateFlowRequest &) = default ;
    CreateFlowRequest& operator=(CreateFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->definition_ == nullptr
        && return this->description_ == nullptr && return this->environment_ == nullptr && return this->executionMode_ == nullptr && return this->externalStorageLocation_ == nullptr && return this->name_ == nullptr
        && return this->roleArn_ == nullptr && return this->type_ == nullptr; };
    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline string definition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
    inline CreateFlowRequest& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateFlowRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline const CreateFlowRequestEnvironment & environment() const { DARABONBA_PTR_GET_CONST(environment_, CreateFlowRequestEnvironment) };
    inline CreateFlowRequestEnvironment environment() { DARABONBA_PTR_GET(environment_, CreateFlowRequestEnvironment) };
    inline CreateFlowRequest& setEnvironment(const CreateFlowRequestEnvironment & environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };
    inline CreateFlowRequest& setEnvironment(CreateFlowRequestEnvironment && environment) { DARABONBA_PTR_SET_RVALUE(environment_, environment) };


    // executionMode Field Functions 
    bool hasExecutionMode() const { return this->executionMode_ != nullptr;};
    void deleteExecutionMode() { this->executionMode_ = nullptr;};
    inline string executionMode() const { DARABONBA_PTR_GET_DEFAULT(executionMode_, "") };
    inline CreateFlowRequest& setExecutionMode(string executionMode) { DARABONBA_PTR_SET_VALUE(executionMode_, executionMode) };


    // externalStorageLocation Field Functions 
    bool hasExternalStorageLocation() const { return this->externalStorageLocation_ != nullptr;};
    void deleteExternalStorageLocation() { this->externalStorageLocation_ = nullptr;};
    inline string externalStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(externalStorageLocation_, "") };
    inline CreateFlowRequest& setExternalStorageLocation(string externalStorageLocation) { DARABONBA_PTR_SET_VALUE(externalStorageLocation_, externalStorageLocation) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateFlowRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline CreateFlowRequest& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateFlowRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The definition of the workflow. The definition must comply with the flow definition language (FDL) syntax. Considering compatibility, the system supports two flow definition specifications.
    // 
    // >  In the preceding flow definition example, Name:my_flow_name is the workflow name, which must be consistent with the input parameter Name
    // 
    // This parameter is required.
    std::shared_ptr<string> definition_ = nullptr;
    // The description of the flow.
    // 
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<CreateFlowRequestEnvironment> environment_ = nullptr;
    // The execution mode. Valid values: Express and Standard. Considering compatibility, an empty string is equivalent to the Standard execution mode.
    std::shared_ptr<string> executionMode_ = nullptr;
    // The path of the external storage.
    std::shared_ptr<string> externalStorageLocation_ = nullptr;
    // The name of the flow. The name is unique within the same region and cannot be modified after the flow is created. Set this parameter based on the following rules:
    // 
    // *   The name can contain letters, digits, underscores (_), and hyphens (-).
    // *   The name must start with a letter or an underscore (_).
    // *   The name is case-sensitive.
    // *   The name must be 1 to 128 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The Alibaba Cloud resource name (ARN) of the authorized role on which the execution of the flow relies. During the execution of the flow, CloudFlow assumes the role to call API operations of relevant services.
    std::shared_ptr<string> roleArn_ = nullptr;
    // The type of the flow. Set this parameter to **FDL**.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
