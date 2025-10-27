// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateFlowRequestEnvironment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class UpdateFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Definition, definition_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Definition, definition_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateFlowRequest() = default ;
    UpdateFlowRequest(const UpdateFlowRequest &) = default ;
    UpdateFlowRequest(UpdateFlowRequest &&) = default ;
    UpdateFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFlowRequest() = default ;
    UpdateFlowRequest& operator=(const UpdateFlowRequest &) = default ;
    UpdateFlowRequest& operator=(UpdateFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->definition_ == nullptr
        && return this->description_ == nullptr && return this->environment_ == nullptr && return this->name_ == nullptr && return this->roleArn_ == nullptr && return this->type_ == nullptr; };
    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline string definition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
    inline UpdateFlowRequest& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateFlowRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline const UpdateFlowRequestEnvironment & environment() const { DARABONBA_PTR_GET_CONST(environment_, UpdateFlowRequestEnvironment) };
    inline UpdateFlowRequestEnvironment environment() { DARABONBA_PTR_GET(environment_, UpdateFlowRequestEnvironment) };
    inline UpdateFlowRequest& setEnvironment(const UpdateFlowRequestEnvironment & environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };
    inline UpdateFlowRequest& setEnvironment(UpdateFlowRequestEnvironment && environment) { DARABONBA_PTR_SET_RVALUE(environment_, environment) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateFlowRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline UpdateFlowRequest& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateFlowRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The definition of the workflow. The definition must comply with the flow definition language (FDL) syntax. Considering compatibility, the system supports the two workflow definition specifications.
    // 
    // >  In the preceding workflow definition example, Name:my_flow_name is the workflow name, which must be consistent with the input parameter Name
    std::shared_ptr<string> definition_ = nullptr;
    // The description of the flow.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<UpdateFlowRequestEnvironment> environment_ = nullptr;
    // The name of the workflow.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The Alibaba Cloud resource name (ARN) of the authorized role on which the execution of the flow relies. During the execution of the flow, the flow execution engine assumes the role to call API operations of relevant services.
    std::shared_ptr<string> roleArn_ = nullptr;
    // The type of the flow. Valid value: **FDL**.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
