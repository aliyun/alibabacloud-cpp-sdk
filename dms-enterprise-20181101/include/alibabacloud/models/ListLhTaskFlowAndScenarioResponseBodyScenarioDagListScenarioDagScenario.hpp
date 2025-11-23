// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLHTASKFLOWANDSCENARIORESPONSEBODYSCENARIODAGLISTSCENARIODAGSCENARIO_HPP_
#define ALIBABACLOUD_MODELS_LISTLHTASKFLOWANDSCENARIORESPONSEBODYSCENARIODAGLISTSCENARIODAGSCENARIO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGScenario : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGScenario& obj) { 
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ScenarioName, scenarioName_);
    };
    friend void from_json(const Darabonba::Json& j, ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGScenario& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ScenarioName, scenarioName_);
    };
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGScenario() = default ;
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGScenario(const ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGScenario &) = default ;
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGScenario(ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGScenario &&) = default ;
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGScenario(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGScenario() = default ;
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGScenario& operator=(const ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGScenario &) = default ;
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGScenario& operator=(ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGScenario &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creatorId_ == nullptr
        && return this->description_ == nullptr && return this->scenarioName_ == nullptr; };
    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGScenario& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGScenario& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // scenarioName Field Functions 
    bool hasScenarioName() const { return this->scenarioName_ != nullptr;};
    void deleteScenarioName() { this->scenarioName_ = nullptr;};
    inline string scenarioName() const { DARABONBA_PTR_GET_DEFAULT(scenarioName_, "") };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGScenario& setScenarioName(string scenarioName) { DARABONBA_PTR_SET_VALUE(scenarioName_, scenarioName) };


  protected:
    // The ID of the user who creates the business scenario.
    std::shared_ptr<string> creatorId_ = nullptr;
    // The description of the business scenario.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the business scenario.
    std::shared_ptr<string> scenarioName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
