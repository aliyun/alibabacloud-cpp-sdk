// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFLOWALIASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFLOWALIASREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateFlowAliasRequestRoutingConfigurations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class UpdateFlowAliasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFlowAliasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RoutingConfigurations, routingConfigurations_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFlowAliasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RoutingConfigurations, routingConfigurations_);
    };
    UpdateFlowAliasRequest() = default ;
    UpdateFlowAliasRequest(const UpdateFlowAliasRequest &) = default ;
    UpdateFlowAliasRequest(UpdateFlowAliasRequest &&) = default ;
    UpdateFlowAliasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFlowAliasRequest() = default ;
    UpdateFlowAliasRequest& operator=(const UpdateFlowAliasRequest &) = default ;
    UpdateFlowAliasRequest& operator=(UpdateFlowAliasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->flowName_ == nullptr && return this->name_ == nullptr && return this->routingConfigurations_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateFlowAliasRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string flowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline UpdateFlowAliasRequest& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateFlowAliasRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // routingConfigurations Field Functions 
    bool hasRoutingConfigurations() const { return this->routingConfigurations_ != nullptr;};
    void deleteRoutingConfigurations() { this->routingConfigurations_ = nullptr;};
    inline const vector<UpdateFlowAliasRequestRoutingConfigurations> & routingConfigurations() const { DARABONBA_PTR_GET_CONST(routingConfigurations_, vector<UpdateFlowAliasRequestRoutingConfigurations>) };
    inline vector<UpdateFlowAliasRequestRoutingConfigurations> routingConfigurations() { DARABONBA_PTR_GET(routingConfigurations_, vector<UpdateFlowAliasRequestRoutingConfigurations>) };
    inline UpdateFlowAliasRequest& setRoutingConfigurations(const vector<UpdateFlowAliasRequestRoutingConfigurations> & routingConfigurations) { DARABONBA_PTR_SET_VALUE(routingConfigurations_, routingConfigurations) };
    inline UpdateFlowAliasRequest& setRoutingConfigurations(vector<UpdateFlowAliasRequestRoutingConfigurations> && routingConfigurations) { DARABONBA_PTR_SET_RVALUE(routingConfigurations_, routingConfigurations) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> flowName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<UpdateFlowAliasRequestRoutingConfigurations>> routingConfigurations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
