// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLHTASKFLOWANDSCENARIORESPONSEBODYSCENARIODAGLISTSCENARIODAG_HPP_
#define ALIBABACLOUD_MODELS_LISTLHTASKFLOWANDSCENARIORESPONSEBODYSCENARIODAGLISTSCENARIODAG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagList.hpp>
#include <alibabacloud/models/ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGScenario.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAG : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAG& obj) { 
      DARABONBA_PTR_TO_JSON(DagList, dagList_);
      DARABONBA_PTR_TO_JSON(Scenario, scenario_);
    };
    friend void from_json(const Darabonba::Json& j, ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAG& obj) { 
      DARABONBA_PTR_FROM_JSON(DagList, dagList_);
      DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
    };
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAG() = default ;
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAG(const ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAG &) = default ;
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAG(ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAG &&) = default ;
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAG(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAG() = default ;
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAG& operator=(const ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAG &) = default ;
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAG& operator=(ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAG &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dagList_ != nullptr
        && this->scenario_ != nullptr; };
    // dagList Field Functions 
    bool hasDagList() const { return this->dagList_ != nullptr;};
    void deleteDagList() { this->dagList_ = nullptr;};
    inline const Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagList & dagList() const { DARABONBA_PTR_GET_CONST(dagList_, Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagList) };
    inline Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagList dagList() { DARABONBA_PTR_GET(dagList_, Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagList) };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAG& setDagList(const Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagList & dagList) { DARABONBA_PTR_SET_VALUE(dagList_, dagList) };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAG& setDagList(Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagList && dagList) { DARABONBA_PTR_SET_RVALUE(dagList_, dagList) };


    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline const Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGScenario & scenario() const { DARABONBA_PTR_GET_CONST(scenario_, Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGScenario) };
    inline Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGScenario scenario() { DARABONBA_PTR_GET(scenario_, Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGScenario) };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAG& setScenario(const Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGScenario & scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAG& setScenario(Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGScenario && scenario) { DARABONBA_PTR_SET_RVALUE(scenario_, scenario) };


  protected:
    // The list of task flows.
    std::shared_ptr<Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGDagList> dagList_ = nullptr;
    // The information about the business scenario.
    std::shared_ptr<Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAGScenario> scenario_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
