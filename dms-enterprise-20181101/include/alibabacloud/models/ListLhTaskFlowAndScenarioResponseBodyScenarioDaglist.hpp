// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLHTASKFLOWANDSCENARIORESPONSEBODYSCENARIODAGLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTLHTASKFLOWANDSCENARIORESPONSEBODYSCENARIODAGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAG.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListLhTaskFlowAndScenarioResponseBodyScenarioDAGList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLhTaskFlowAndScenarioResponseBodyScenarioDAGList& obj) { 
      DARABONBA_PTR_TO_JSON(ScenarioDAG, scenarioDAG_);
    };
    friend void from_json(const Darabonba::Json& j, ListLhTaskFlowAndScenarioResponseBodyScenarioDAGList& obj) { 
      DARABONBA_PTR_FROM_JSON(ScenarioDAG, scenarioDAG_);
    };
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGList() = default ;
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGList(const ListLhTaskFlowAndScenarioResponseBodyScenarioDAGList &) = default ;
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGList(ListLhTaskFlowAndScenarioResponseBodyScenarioDAGList &&) = default ;
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLhTaskFlowAndScenarioResponseBodyScenarioDAGList() = default ;
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGList& operator=(const ListLhTaskFlowAndScenarioResponseBodyScenarioDAGList &) = default ;
    ListLhTaskFlowAndScenarioResponseBodyScenarioDAGList& operator=(ListLhTaskFlowAndScenarioResponseBodyScenarioDAGList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->scenarioDAG_ != nullptr; };
    // scenarioDAG Field Functions 
    bool hasScenarioDAG() const { return this->scenarioDAG_ != nullptr;};
    void deleteScenarioDAG() { this->scenarioDAG_ = nullptr;};
    inline const vector<Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAG> & scenarioDAG() const { DARABONBA_PTR_GET_CONST(scenarioDAG_, vector<Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAG>) };
    inline vector<Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAG> scenarioDAG() { DARABONBA_PTR_GET(scenarioDAG_, vector<Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAG>) };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGList& setScenarioDAG(const vector<Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAG> & scenarioDAG) { DARABONBA_PTR_SET_VALUE(scenarioDAG_, scenarioDAG) };
    inline ListLhTaskFlowAndScenarioResponseBodyScenarioDAGList& setScenarioDAG(vector<Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAG> && scenarioDAG) { DARABONBA_PTR_SET_RVALUE(scenarioDAG_, scenarioDAG) };


  protected:
    std::shared_ptr<vector<Models::ListLhTaskFlowAndScenarioResponseBodyScenarioDAGListScenarioDAG>> scenarioDAG_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
