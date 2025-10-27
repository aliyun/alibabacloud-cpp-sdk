// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFLOWALIASRESPONSEBODYALIAS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFLOWALIASRESPONSEBODYALIAS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateFlowAliasResponseBodyAliasRoutingConfigurations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class UpdateFlowAliasResponseBodyAlias : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFlowAliasResponseBodyAlias& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RoutingConfigurations, routingConfigurations_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFlowAliasResponseBodyAlias& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RoutingConfigurations, routingConfigurations_);
    };
    UpdateFlowAliasResponseBodyAlias() = default ;
    UpdateFlowAliasResponseBodyAlias(const UpdateFlowAliasResponseBodyAlias &) = default ;
    UpdateFlowAliasResponseBodyAlias(UpdateFlowAliasResponseBodyAlias &&) = default ;
    UpdateFlowAliasResponseBodyAlias(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFlowAliasResponseBodyAlias() = default ;
    UpdateFlowAliasResponseBodyAlias& operator=(const UpdateFlowAliasResponseBodyAlias &) = default ;
    UpdateFlowAliasResponseBodyAlias& operator=(UpdateFlowAliasResponseBodyAlias &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdTime_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->routingConfigurations_ == nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline UpdateFlowAliasResponseBodyAlias& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateFlowAliasResponseBodyAlias& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateFlowAliasResponseBodyAlias& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // routingConfigurations Field Functions 
    bool hasRoutingConfigurations() const { return this->routingConfigurations_ != nullptr;};
    void deleteRoutingConfigurations() { this->routingConfigurations_ = nullptr;};
    inline const vector<Models::UpdateFlowAliasResponseBodyAliasRoutingConfigurations> & routingConfigurations() const { DARABONBA_PTR_GET_CONST(routingConfigurations_, vector<Models::UpdateFlowAliasResponseBodyAliasRoutingConfigurations>) };
    inline vector<Models::UpdateFlowAliasResponseBodyAliasRoutingConfigurations> routingConfigurations() { DARABONBA_PTR_GET(routingConfigurations_, vector<Models::UpdateFlowAliasResponseBodyAliasRoutingConfigurations>) };
    inline UpdateFlowAliasResponseBodyAlias& setRoutingConfigurations(const vector<Models::UpdateFlowAliasResponseBodyAliasRoutingConfigurations> & routingConfigurations) { DARABONBA_PTR_SET_VALUE(routingConfigurations_, routingConfigurations) };
    inline UpdateFlowAliasResponseBodyAlias& setRoutingConfigurations(vector<Models::UpdateFlowAliasResponseBodyAliasRoutingConfigurations> && routingConfigurations) { DARABONBA_PTR_SET_RVALUE(routingConfigurations_, routingConfigurations) };


  protected:
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::UpdateFlowAliasResponseBodyAliasRoutingConfigurations>> routingConfigurations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
