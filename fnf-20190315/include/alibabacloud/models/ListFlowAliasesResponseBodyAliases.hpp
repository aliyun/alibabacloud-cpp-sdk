// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFLOWALIASESRESPONSEBODYALIASES_HPP_
#define ALIBABACLOUD_MODELS_LISTFLOWALIASESRESPONSEBODYALIASES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFlowAliasesResponseBodyAliasesRoutingConfigurations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class ListFlowAliasesResponseBodyAliases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFlowAliasesResponseBodyAliases& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RoutingConfigurations, routingConfigurations_);
    };
    friend void from_json(const Darabonba::Json& j, ListFlowAliasesResponseBodyAliases& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RoutingConfigurations, routingConfigurations_);
    };
    ListFlowAliasesResponseBodyAliases() = default ;
    ListFlowAliasesResponseBodyAliases(const ListFlowAliasesResponseBodyAliases &) = default ;
    ListFlowAliasesResponseBodyAliases(ListFlowAliasesResponseBodyAliases &&) = default ;
    ListFlowAliasesResponseBodyAliases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFlowAliasesResponseBodyAliases() = default ;
    ListFlowAliasesResponseBodyAliases& operator=(const ListFlowAliasesResponseBodyAliases &) = default ;
    ListFlowAliasesResponseBodyAliases& operator=(ListFlowAliasesResponseBodyAliases &&) = default ;
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
    inline ListFlowAliasesResponseBodyAliases& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListFlowAliasesResponseBodyAliases& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListFlowAliasesResponseBodyAliases& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // routingConfigurations Field Functions 
    bool hasRoutingConfigurations() const { return this->routingConfigurations_ != nullptr;};
    void deleteRoutingConfigurations() { this->routingConfigurations_ = nullptr;};
    inline const vector<Models::ListFlowAliasesResponseBodyAliasesRoutingConfigurations> & routingConfigurations() const { DARABONBA_PTR_GET_CONST(routingConfigurations_, vector<Models::ListFlowAliasesResponseBodyAliasesRoutingConfigurations>) };
    inline vector<Models::ListFlowAliasesResponseBodyAliasesRoutingConfigurations> routingConfigurations() { DARABONBA_PTR_GET(routingConfigurations_, vector<Models::ListFlowAliasesResponseBodyAliasesRoutingConfigurations>) };
    inline ListFlowAliasesResponseBodyAliases& setRoutingConfigurations(const vector<Models::ListFlowAliasesResponseBodyAliasesRoutingConfigurations> & routingConfigurations) { DARABONBA_PTR_SET_VALUE(routingConfigurations_, routingConfigurations) };
    inline ListFlowAliasesResponseBodyAliases& setRoutingConfigurations(vector<Models::ListFlowAliasesResponseBodyAliasesRoutingConfigurations> && routingConfigurations) { DARABONBA_PTR_SET_RVALUE(routingConfigurations_, routingConfigurations) };


  protected:
    std::shared_ptr<string> createdTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::ListFlowAliasesResponseBodyAliasesRoutingConfigurations>> routingConfigurations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
