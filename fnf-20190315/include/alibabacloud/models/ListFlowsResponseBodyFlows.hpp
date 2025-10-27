// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFLOWSRESPONSEBODYFLOWS_HPP_
#define ALIBABACLOUD_MODELS_LISTFLOWSRESPONSEBODYFLOWS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListFlowsResponseBodyFlowsEnvironment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class ListFlowsResponseBodyFlows : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFlowsResponseBodyFlows& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Definition, definition_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(ExecutionMode, executionMode_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListFlowsResponseBodyFlows& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Definition, definition_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(ExecutionMode, executionMode_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LastModifiedTime, lastModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListFlowsResponseBodyFlows() = default ;
    ListFlowsResponseBodyFlows(const ListFlowsResponseBodyFlows &) = default ;
    ListFlowsResponseBodyFlows(ListFlowsResponseBodyFlows &&) = default ;
    ListFlowsResponseBodyFlows(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFlowsResponseBodyFlows() = default ;
    ListFlowsResponseBodyFlows& operator=(const ListFlowsResponseBodyFlows &) = default ;
    ListFlowsResponseBodyFlows& operator=(ListFlowsResponseBodyFlows &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdTime_ == nullptr
        && return this->definition_ == nullptr && return this->description_ == nullptr && return this->environment_ == nullptr && return this->executionMode_ == nullptr && return this->id_ == nullptr
        && return this->lastModifiedTime_ == nullptr && return this->name_ == nullptr && return this->roleArn_ == nullptr && return this->type_ == nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline ListFlowsResponseBodyFlows& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline string definition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
    inline ListFlowsResponseBodyFlows& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListFlowsResponseBodyFlows& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline const Models::ListFlowsResponseBodyFlowsEnvironment & environment() const { DARABONBA_PTR_GET_CONST(environment_, Models::ListFlowsResponseBodyFlowsEnvironment) };
    inline Models::ListFlowsResponseBodyFlowsEnvironment environment() { DARABONBA_PTR_GET(environment_, Models::ListFlowsResponseBodyFlowsEnvironment) };
    inline ListFlowsResponseBodyFlows& setEnvironment(const Models::ListFlowsResponseBodyFlowsEnvironment & environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };
    inline ListFlowsResponseBodyFlows& setEnvironment(Models::ListFlowsResponseBodyFlowsEnvironment && environment) { DARABONBA_PTR_SET_RVALUE(environment_, environment) };


    // executionMode Field Functions 
    bool hasExecutionMode() const { return this->executionMode_ != nullptr;};
    void deleteExecutionMode() { this->executionMode_ = nullptr;};
    inline string executionMode() const { DARABONBA_PTR_GET_DEFAULT(executionMode_, "") };
    inline ListFlowsResponseBodyFlows& setExecutionMode(string executionMode) { DARABONBA_PTR_SET_VALUE(executionMode_, executionMode) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListFlowsResponseBodyFlows& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastModifiedTime Field Functions 
    bool hasLastModifiedTime() const { return this->lastModifiedTime_ != nullptr;};
    void deleteLastModifiedTime() { this->lastModifiedTime_ = nullptr;};
    inline string lastModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifiedTime_, "") };
    inline ListFlowsResponseBodyFlows& setLastModifiedTime(string lastModifiedTime) { DARABONBA_PTR_SET_VALUE(lastModifiedTime_, lastModifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListFlowsResponseBodyFlows& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline ListFlowsResponseBodyFlows& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListFlowsResponseBodyFlows& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The time when the flow was created.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The definition of the flow. The definition must comply with the Flow Definition Language (FDL) syntax.
    std::shared_ptr<string> definition_ = nullptr;
    // The description of the flow.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<Models::ListFlowsResponseBodyFlowsEnvironment> environment_ = nullptr;
    // The execution mode or the enumeration type. Valid values: Express and Standard. A value of Standard indicates an empty string.
    std::shared_ptr<string> executionMode_ = nullptr;
    // The unique ID of the flow.
    std::shared_ptr<string> id_ = nullptr;
    // The time when the flow was last modified.
    std::shared_ptr<string> lastModifiedTime_ = nullptr;
    // The name of the flow.
    std::shared_ptr<string> name_ = nullptr;
    // The Alibaba Cloud resource name (ARN) of the specified Resource Access Management (RAM) role that Serverless Workflow assumes to invoke resources when the flow is executed.
    std::shared_ptr<string> roleArn_ = nullptr;
    // The type of the flow.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
