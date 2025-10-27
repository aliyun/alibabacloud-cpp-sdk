// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFLOWALIASSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFLOWALIASSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class CreateFlowAliasShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFlowAliasShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RoutingConfigurations, routingConfigurationsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFlowAliasShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RoutingConfigurations, routingConfigurationsShrink_);
    };
    CreateFlowAliasShrinkRequest() = default ;
    CreateFlowAliasShrinkRequest(const CreateFlowAliasShrinkRequest &) = default ;
    CreateFlowAliasShrinkRequest(CreateFlowAliasShrinkRequest &&) = default ;
    CreateFlowAliasShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFlowAliasShrinkRequest() = default ;
    CreateFlowAliasShrinkRequest& operator=(const CreateFlowAliasShrinkRequest &) = default ;
    CreateFlowAliasShrinkRequest& operator=(CreateFlowAliasShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->flowName_ == nullptr && return this->name_ == nullptr && return this->routingConfigurationsShrink_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateFlowAliasShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string flowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline CreateFlowAliasShrinkRequest& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateFlowAliasShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // routingConfigurationsShrink Field Functions 
    bool hasRoutingConfigurationsShrink() const { return this->routingConfigurationsShrink_ != nullptr;};
    void deleteRoutingConfigurationsShrink() { this->routingConfigurationsShrink_ = nullptr;};
    inline string routingConfigurationsShrink() const { DARABONBA_PTR_GET_DEFAULT(routingConfigurationsShrink_, "") };
    inline CreateFlowAliasShrinkRequest& setRoutingConfigurationsShrink(string routingConfigurationsShrink) { DARABONBA_PTR_SET_VALUE(routingConfigurationsShrink_, routingConfigurationsShrink) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> flowName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> routingConfigurationsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
